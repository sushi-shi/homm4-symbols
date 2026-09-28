#!/usr/bin/env python3
"""Compose per-target names from the mined map symbols, hop files and manual fixes.

usage: compose.py <target_id>
reads maps/<target>/target.json         {"id", "exe", "sha256", "image_base", "parents": [...]}
      maps/<target>/from-<parent>.tsv    (parent "map": src = symbols/symbols.tsv id)
      maps/<target>/manual.tsv           rva, mangled, note   (optional, overrides everything)
writes maps/<target>/names.tsv: rva, size, kind, tier, mangled, demangled, chain

A name from a non-map parent is the parent's name at src rva, one tier lower when the
hop was not exact. When several parents name one rva, the best tier wins. An edge's
optional `name` column overrides the source name (e.g. owner-based static-init names).
"""
import csv
import os
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import paths  # noqa: E402

TIERS = "ABCD"


def read_tsv(path):
    with open(path) as f:
        return list(csv.DictReader(f, delimiter="\t"))


def load_names(target, _cache={}):
    if target in _cache:
        return _cache[target]
    if target == "map":
        names = {r["id"]: dict(mangled=r["mangled"], demangled=r["demangled"], tier="A", chain="map")
                 for r in read_tsv(paths.symbols("symbols.tsv"))}
        _cache[target] = names
        return names
    meta = paths.target_meta(target)
    names = {}
    for parent in meta["parents"]:
        pnames = load_names(parent)
        for e in read_tsv(paths.maps(target, f"from-{parent}.tsv")):
            src = pnames.get(e["src"])
            if not src:
                continue
            tier = max(e["tier"], src["tier"], key=TIERS.index)
            rva = int(e["dst_rva"], 16)
            cur = names.get(rva)
            if cur and TIERS.index(cur["tier"]) <= TIERS.index(tier):
                continue
            override = e.get("name") or ""
            names[rva] = dict(mangled=override or src["mangled"], demangled="" if override else src["demangled"],
                              tier=tier,
                              size=e["dst_size"], kind=e["kind"],
                              chain=f"{src['chain']}>{target}:{e['method']}")
    manual = paths.maps(target, "manual.tsv")
    if os.path.exists(manual):
        for m in read_tsv(manual):
            rva = int(m["rva"], 16)
            names[rva] = dict(mangled=m["mangled"], demangled="", tier="A", size="", kind="func",
                              chain=f"manual:{m.get('note', '')}")
    # for use as a parent: key by rva string as in edges' src column
    _cache[target] = {f"{k:x}": v for k, v in names.items()}
    return _cache[target]


def main(target):
    names = load_names(target)
    with open(paths.maps(target, "names.tsv"), "w") as f:
        f.write("rva\tsize\tkind\ttier\tmangled\tdemangled\tchain\n")
        for rva, n in sorted(names.items(), key=lambda kv: int(kv[0], 16)):
            f.write(f"{rva}\t{n.get('size', '')}\t{n.get('kind', '')}\t{n['tier']}\t{n['mangled']}\t"
                    f"{n['demangled']}\t{n['chain']}\n")
    print(f"{len(names)} names for {target}", file=sys.stderr)


if __name__ == "__main__":
    main(sys.argv[1])
