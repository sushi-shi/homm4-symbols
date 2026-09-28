#!/usr/bin/env python3
"""Join name_dyninit.py's map-side roles (symbols/dyninit.tsv) with its target-side
.CRT$XCU slot table (work/<target>/dyninit.tsv) into exact map_id -> rva pairs.

Pairs are made per map group and role when both sides have exactly one routine of that
role, or by equal mangled owner-member names (template statics' X$E / member atexits).
Target 'global' rows whose mangled name is a map public become data pairs.
"""
import collections
import csv
import os
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import paths  # noqa: E402
FUNC_ROLES = {"init", "tinit", "ctor", "atexit", "tatexit", "dtor"}


def read_tsv(path):
    with open(path) as f:
        return list(csv.DictReader(f, delimiter="\t"))


def join(target):
    """-> list of dict(map_id, rva, kind, role, name, conf)"""
    tpath = paths.work(target, "dyninit.tsv")
    if not os.path.exists(tpath):
        return []
    mrows = read_tsv(paths.symbols("dyninit.tsv"))
    trows = read_tsv(tpath)
    mby = collections.defaultdict(list)
    for m in mrows:
        mby[(m["group"], m["role"])].append(m)
    tby = collections.defaultdict(list)
    for t in trows:
        tby[(t["map_group"], t["role"])].append(t)
    out = []
    for (g, role), tl in tby.items():
        if role not in FUNC_ROLES or not g:
            continue
        ml = mby.get((g, role), [])
        if len(tl) == 1 and len(ml) == 1:
            pairs = [(ml[0], tl[0])]
        else:
            # several routines of one role in a group (template statics): pair by member name
            by_owner = {m["owner_mangled"]: m for m in ml if m["owner_mangled"]}
            pairs = [(by_owner[t["mangled"].removesuffix("$E")], t) for t in tl
                     if t["mangled"] and t["mangled"].removesuffix("$E") in by_owner]
        for m, t in pairs:
            out.append(dict(map_id=m["id"], rva=int(t["rva"], 16), kind="func", role=role,
                            name=(t["sema"] or m["sema"]).replace(" ", "_"),
                            conf=max(t["conf"] or "C", m["conf"] or "C")))
    ids = {}
    for s in read_tsv(paths.symbols("symbols.tsv")):
        if s["kind"] == "data":
            ids.setdefault(s["mangled"], s["id"])
    for t in trows:
        if t["role"] == "global" and t["mangled"] in ids:
            out.append(dict(map_id=ids[t["mangled"]], rva=int(t["rva"], 16), kind="data", role="global",
                            name="", conf=t["conf"] or "C"))
    return out


if __name__ == "__main__":
    import sys
    j = join(sys.argv[1])
    print(collections.Counter((x["kind"], x["role"], x["conf"]) for x in j))
