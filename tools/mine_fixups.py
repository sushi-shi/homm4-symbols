#!/usr/bin/env python3
"""Decode the map's FIXUPS section and count fixup sites per .text symbol.

writes symbols/fixups_per_func.tsv: id, va, nfix
"""
import bisect
import csv
import os
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import paths  # noqa: E402
MAP = paths.MAPFILE
IMAGE_BASE = 0x400000


def sites():
    out = set()
    with open(MAP, encoding="ascii") as f:
        for line in f:
            if not line.startswith("FIXUPS:"):
                continue
            vals = [int(x, 16) for x in line.split()[1:]]
            a = vals[0]
            out.add(a)
            for d in vals[1:]:
                a = (a + d) & 0xFFFFFFFF
                out.add(a)
    return sorted(out)


def main():
    with open(paths.symbols("symbols.tsv")) as f:
        funcs = [r for r in csv.DictReader(f, delimiter="\t") if r["kind"] == "func" and r["sec"] == "1"]
    funcs.sort(key=lambda r: int(r["rva"], 16))
    starts = [int(r["rva"], 16) for r in funcs]
    counts = [0] * len(funcs)
    s = sites()
    for rva in s:
        i = bisect.bisect_right(starts, rva) - 1
        if i >= 0 and rva < starts[i] + int(funcs[i]["size"], 16):
            counts[i] += 1
    with open(paths.symbols("fixups_per_func.tsv"), "w") as f:
        f.write("id\tva\tnfix\n")
        for r, c in zip(funcs, counts):
            f.write(f"{r['id']}\t{r['va']}\t{c}\n")
    print(len(s), "fixup sites;", sum(counts), "inside functions")


if __name__ == "__main__":
    main()
