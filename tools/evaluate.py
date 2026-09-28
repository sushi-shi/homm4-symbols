#!/usr/bin/env python3
"""Accuracy checks for a map->target alignment (there is no ground truth).

usage: evaluate.py <target_id>

1. hierarchy: for every class C whose offset-0 vftable is paired, and its primary base P
   (first non-virtual base at offset 0 in RTTI) whose offset-0 vftable is paired too:
   for each slot k where C overrides P (targets differ, neither trivial), the method
   name given to C's slot target must equal the one given to P's (deleting dtors = 'dtor').
2. stability: align.tsv vs align_novft.tsv (same aligner without any vftable evidence);
   share of common map symbols placed at the same rva.
"""
import collections
import csv
import os
import re
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import paths  # noqa: E402

TRIVIAL = 0x10


def read_tsv(path):
    with open(path) as f:
        return list(csv.DictReader(f, delimiter="\t"))


def method_name(mangled):
    if mangled.startswith(("??_G", "??_E")):
        return "dtor"
    m = re.match(r"\?([A-Za-z_0-9]+)@", mangled)
    if m:
        return m.group(1)
    m = re.match(r"\?\?([0-9A-Z_]{1,2})", mangled)  # operators
    return "op" + m.group(1) if m else None


def hierarchy(target, align_path):
    names = {int(r["rva"], 16): r["mangled"] for r in read_tsv(align_path)}
    size = {int(r["rva"], 16): int(r["size"], 16) for r in read_tsv(paths.features(target, "functions"))}
    vft = read_tsv(paths.features(target, "vftables"))
    paired = {r["rva"] for r in read_tsv(paths.work(target, "vftables.tsv"))}
    primary = {}
    for v in vft:
        if v["col_offset"] == "0" and v["rva"] in paired:
            primary[v["class"]] = [int(s, 16) for s in v["slots"].split(",") if s]
    bases = {}
    for c in read_tsv(paths.features(target, "classes")):
        bl = [b.split("@") for b in c["bases"].split(",") if b]
        # entries look like ".?AVname@@@0:-1:0": split on the last '@'
        parsed = []
        for b in c["bases"].split(","):
            if not b:
                continue
            name, disp = b.rsplit("@", 1)
            md, pd, vd = disp.split(":")
            parsed.append((name, int(md), int(pd)))
        bases[c["class"]] = parsed
    stats = collections.Counter()
    bad = []
    for cls, slots in primary.items():
        pb = [b for b in bases.get(cls, [])[1:] if b[1] == 0 and b[2] == -1 and b[0] in primary]
        if not pb:
            continue
        pslots = primary[pb[0][0]]
        for k in range(min(len(slots), len(pslots))):
            if slots[k] == pslots[k]:
                continue
            if size.get(slots[k], 0) <= TRIVIAL or size.get(pslots[k], 0) <= TRIVIAL:
                stats["trivial"] += 1  # _purecall / ICF-folded bodies carry many names
                continue
            a, b = names.get(slots[k]), names.get(pslots[k])
            if a is None or b is None:
                stats["unnamed"] += 1
                continue
            ok = method_name(a) == method_name(b)
            stats["agree" if ok else "disagree"] += 1
            if not ok:
                bad.append((cls, k, a, b))
    return stats, bad


def stability(target):
    def rd(name):
        return {r["map_id"]: r for r in read_tsv(paths.work(target, name))}
    full, nov = rd("align.tsv"), rd("align_novft.tsv")
    common = [k for k in full if k in nov]
    by_cat = collections.Counter()
    same_cat = collections.Counter()
    for k in common:
        by_cat[full[k]["cat"]] += 1
        same_cat[full[k]["cat"]] += full[k]["rva"] == nov[k]["rva"]
    return len(full), len(nov), len(common), sum(same_cat.values()), by_cat, same_cat


def main(target, verbose=False):
    for name in ("align.tsv", "align_novft.tsv"):
        stats, bad = hierarchy(target, paths.work(target, name))
        n = stats["agree"] + stats["disagree"]
        print(f"hierarchy [{name}]: agree {stats['agree']} / disagree {stats['disagree']}"
              f" ({100 * stats['agree'] / max(n, 1):.1f}%); unnamed {stats['unnamed']}, trivial {stats['trivial']}")
        if verbose:
            for x in bad[:20]:
                print("   ", x[0], x[1], x[2][:70], "| base:", x[3][:70])
    nf, nn, nc, same, by_cat, same_cat = stability(target)
    print(f"stability: {nf} vs {nn} pairs, {nc} common, same rva {same} ({100 * same / max(nc, 1):.1f}%): "
          + ", ".join(f"{c} {same_cat[c]}/{by_cat[c]}" for c in by_cat))


if __name__ == "__main__":
    main(sys.argv[1], "-v" in sys.argv)
