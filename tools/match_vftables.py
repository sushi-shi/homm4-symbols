#!/usr/bin/env python3
"""Pair a target's RTTI vftables with the map's ??_7 symbols.

usage: match_vftables.py <target_id>
reads  symbols/symbols.tsv, work/<target>/features/vftables.tsv
writes work/<target>/vftables.tsv: map_id, map_name, rva, nslots, map_nslots, how

Pairing is per class: exact normalized name first, then remaining vftables of the
same class in address order (both .rdata layouts follow link order). Slot counts are
bounds on both sides (map: gap to the next symbol; target: scan until a non-code
pointer, which can run into adjacent tables), so the emitted slot list is clamped to
the smaller count.
"""
import collections
import csv
import os
import re
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import paths  # noqa: E402
ANON = re.compile(r"\?%[Cc]:\\[Ww]ork\\game\\([^@]*?\.(?:cpp|h))[0-9]+@")


def norm(name):
    return ANON.sub(r"?%\1@", name)


def vft_class(name):
    """'??_7<class>6B<...>@' -> normalized class part (mangled, ends with '@@')."""
    body = name[4:]
    i = body.rfind("6B")
    # the class part ends with '@@' right before '6B'
    while i > 0 and not body[:i].endswith("@@"):
        i = body.rfind("6B", 0, i)
    return norm(body[:i])


def read_tsv(path):
    with open(path) as f:
        return list(csv.DictReader(f, delimiter="\t"))


def main(target):
    syms = read_tsv(paths.symbols("symbols.tsv"))
    mvft = [s for s in syms if s["mangled"].startswith("??_7")]
    for s in mvft:
        s["cls"] = vft_class(s["mangled"])
        s["nslots"] = (int(s["size"], 16) - 4) // 4  # gap includes the next table's COL pointer
    tvft = read_tsv(paths.features(target, "vftables"))
    for t in tvft:
        t["cls"] = norm(t["class"][4:])
        t["n"] = int(t["nslots"])

    mby = collections.defaultdict(list)
    for s in sorted(mvft, key=lambda s: int(s["va"], 16)):
        mby[s["cls"]].append(s)
    tby = collections.defaultdict(list)
    for t in sorted(tvft, key=lambda t: int(t["rva"], 16)):
        tby[t["cls"]].append(t)

    pairs = []
    for cls, tl in tby.items():
        ml = list(mby.get(cls, []))
        # 1. exact normalized names
        mnames = collections.defaultdict(list)
        for m in ml:
            mnames[norm(m["mangled"])].append(m)
        rest_t = []
        for t in tl:
            c = mnames.get(norm(t["map_name"]))
            if c and len(c) == 1 and len(tl) == len(ml):
                pairs.append((c[0], t, "name"))
                ml.remove(c[0])
            else:
                rest_t.append(t)
        # 2. order within class, slot counts must match
        if rest_t and len(rest_t) == len(ml):
            for m, t in zip(ml, rest_t):
                if abs(m["nslots"] - t["n"]) <= max(2, t["n"] // 4) or m is ml[-1]:
                    pairs.append((m, t, "order"))
        elif rest_t:
            # counts differ: pair by unique slot count only
            for t in rest_t:
                c = [m for m in ml if m["nslots"] == t["n"]]
                if len(c) == 1:
                    pairs.append((c[0], t, "nslots"))
                    ml.remove(c[0])

    with open(paths.work(target, "vftables.tsv"), "w") as f:
        f.write("map_id\tmap_name\trva\tnslots\tmap_nslots\thow\tobj\tslots\n")
        for m, t, how in sorted(pairs, key=lambda p: int(p[1]["rva"], 16)):
            slots = t["slots"].split(",")[:max(1, min(t["n"], m["nslots"]))]
            f.write(f"{m['id']}\t{m['mangled']}\t{t['rva']}\t{len(slots)}\t{m['nslots']}\t{how}\t{m['obj']}\t"
                    + ",".join(slots) + "\n")
    c = collections.Counter(h for _, _, h in pairs)
    mism = sum(1 for m, t, _ in pairs if m["nslots"] != t["n"])
    print(f"target vftables {len(tvft)}, map {len(mvft)}, paired {len(pairs)} {dict(c)}, "
          f"slot-count mismatches {mism}", file=sys.stderr)


if __name__ == "__main__":
    main(sys.argv[1])
