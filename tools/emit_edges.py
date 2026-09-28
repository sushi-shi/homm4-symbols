#!/usr/bin/env python3
"""Turn the map->target alignment into the hop file maps/<target>/from-map.tsv.

usage: emit_edges.py <target_id>
reads work/<target>/{align,align_novft,vftables}.tsv and dyninit_join pairs

Tiers:
  A  exact structural evidence: vftable slot, vptr store, .CRT$XCU / atexit target,
     or a paired vftable (data); no ret N contradiction
  B  ordered match with ret N agreement (non-cdecl), stable without vftable evidence
  C  anything else the aligner produced
Static-init routines come from dyninit_join (name_dyninit.py): .CRT$XCU wrappers are A,
their ctor/atexit/dtor pieces B; they carry an owner-based name in the `name` column.
"""
import csv
import os
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import dyninit_join  # noqa: E402
import paths  # noqa: E402


def read_tsv(path):
    with open(path) as f:
        return list(csv.DictReader(f, delimiter="\t"))


def main(target):
    rows = read_tsv(paths.work(target, "align.tsv"))
    nov = {r["map_id"]: r["rva"] for r in read_tsv(paths.work(target, "align_novft.tsv"))}
    out = []
    for r in rows:
        ev = set(filter(None, r["evidence"].split(",")))
        stable = nov.get(r["map_id"]) == r["rva"]
        if "RETN!" in ev:
            tier = "C"
        elif ev & {"vslot", "vptr", "xcu", "atexit"}:
            tier = "A"
        elif r["pass"] == "order" and "retn" in ev and r["exp_retn"] not in ("", "0") and stable:
            tier = "B"
        else:
            tier = "C"
        if stable:
            ev.add("stable")
        out.append((r["map_id"], r["rva"], r["size"], "func", tier, f"align-{r['pass']}", r["score"],
                    ",".join(sorted(ev)), ""))
    for d in dyninit_join.join(target):
        if d["kind"] == "func":
            tier = "A" if d["role"] in ("init", "tinit") else "B"
        else:
            tier = d["conf"]
        out.append((d["map_id"], f"{d['rva']:x}", "", d["kind"], tier, f"dyninit-{d['role']}", "",
                    f"owner-conf-{d['conf']}", d["name"]))
    for v in read_tsv(paths.work(target, "vftables.tsv")):
        tier = "A" if v["how"] == "name" else "B"
        out.append((v["map_id"], v["rva"], f"{4 * int(v['nslots']):x}", "vftable", tier, f"rtti-{v['how']}", "", "", ""))
    path = paths.maps(target, "from-map.tsv")
    with open(path, "w") as f:
        f.write("src\tdst_rva\tdst_size\tkind\ttier\tmethod\tscore\tevidence\tname\n")
        for o in sorted(out, key=lambda o: int(o[1], 16)):
            f.write("\t".join(o) + "\n")
    from collections import Counter
    print(dict(Counter((o[3], o[4]) for o in out)), file=sys.stderr)


if __name__ == "__main__":
    main(sys.argv[1])
