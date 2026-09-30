#!/usr/bin/env python3
"""Write the complete map for a target: maps/<target>/names.tsv.

usage: emit_map.py <target_id>
reads work/<target>/{align,align_novft,vftables}.tsv, dyninit_join and rtti_join pairs,
      symbols/symbols.tsv, maps/<target>/manual.tsv (optional; wins over everything)

names.tsv columns:
  rva, size, kind (func|vftable|data), tier, name (mangled, or an owner-based name for
  static-init routines), demangled, method, evidence, map_id (symbols.tsv id), map_va,
  obj, score, via (empty for names taken straight from the map)

Tiers:
  A  exact structural evidence: vftable slot, vptr store, .CRT$XCU slot, paired vftable
     by RTTI name; no ret N contradiction
  B  ordered match with ret N agreement (non-zero), stable without vftable evidence;
     static-init pieces (ctor/atexit/dtor) of an XCU slot; vftables paired by order
  C  anything else the aligner produced
"""
import csv
import os
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import dyninit_join  # noqa: E402
import paths  # noqa: E402
import rtti_join  # noqa: E402

COLUMNS = ["rva", "size", "kind", "tier", "name", "demangled", "method", "evidence",
           "map_id", "map_va", "obj", "score", "via"]
TIERS = "ABC"


def read_tsv(path):
    with open(path) as f:
        return list(csv.DictReader(f, delimiter="\t"))


def main(target):
    syms = {s["id"]: s for s in read_tsv(paths.symbols("symbols.tsv"))}
    rows = {}

    def add(rva, size, kind, tier, map_id, method, evidence="", score="", name=""):
        s = syms[map_id]
        r = dict(rva=rva, size=size, kind=kind, tier=tier, name=name or s["mangled"],
                 demangled="" if name else s["demangled"], method=method, evidence=evidence,
                 map_id=map_id, map_va=s["va"], obj=s["obj"], score=score, via="")
        cur = rows.get(rva)
        if cur is None or TIERS.index(tier) < TIERS.index(cur["tier"]):
            rows[rva] = r

    nov = {r["map_id"]: r["rva"] for r in read_tsv(paths.work(target, "align_novft.tsv"))}
    dj = dyninit_join.join(target)
    dj_ids = {d["map_id"] for d in dj}
    for r in read_tsv(paths.work(target, "align.tsv")):
        if r["map_id"] in dj_ids:
            continue  # pinned static-init routine: named below with its owner-based name
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
        add(int(r["rva"], 16), r["size"], "func", tier, r["map_id"], f"align-{r['pass']}",
            ",".join(sorted(ev)), r["score"])
    for d in dj:
        tier = ("A" if d["role"] in ("init", "tinit") else "B") if d["kind"] == "func" else d["conf"]
        add(d["rva"], "", d["kind"], tier, d["map_id"], f"dyninit-{d['role']}",
            f"owner-conf-{d['conf']}", name=d["name"])
    for v in read_tsv(paths.work(target, "vftables.tsv")):
        add(int(v["rva"], 16), f"{4 * int(v['nslots']):x}", "vftable", "A" if v["how"] == "name" else "B",
            v["map_id"], f"rtti-{v['how']}")

    for r in rtti_join.join(target):
        if r["rva"] not in rows:
            add(r["rva"], f"{r['size']:x}", "data", r["tier"], r["map_id"], r["method"], r["evidence"])

    manual = paths.maps(target, "manual.tsv")
    if os.path.exists(manual):
        for m in read_tsv(manual):
            rva = int(m["rva"], 16)
            r = rows.get(rva, dict.fromkeys(COLUMNS, ""))
            r.update(rva=rva, kind=m.get("kind") or r["kind"] or "func", tier="A", name=m["mangled"],
                     demangled="", method="manual", evidence=m.get("note", ""))
            rows[rva] = r

    with open(paths.maps(target, "names.tsv"), "w") as f:
        f.write("\t".join(COLUMNS) + "\n")
        for rva in sorted(rows):
            r = dict(rows[rva], rva=f"{rva:x}")
            f.write("\t".join(str(r[c]) for c in COLUMNS) + "\n")
    from collections import Counter
    print(f"{len(rows)} names -> maps/{target}/names.tsv",
          dict(sorted(Counter((r["kind"], r["tier"]) for r in rows.values()).items())), file=sys.stderr)


if __name__ == "__main__":
    main(sys.argv[1])
