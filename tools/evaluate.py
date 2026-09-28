#!/usr/bin/env python3
"""Accuracy checks for a map->target alignment (there is no ground truth).

usage: evaluate.py <target_id>

1. hierarchy: for every class C whose offset-0 vftable is paired, and its primary base P
   (first non-virtual base at offset 0 in RTTI) whose offset-0 vftable is paired too:
   for each slot k where C overrides P (targets differ, neither trivial), the method
   name given to C's slot target must equal the one given to P's (deleting dtors = 'dtor').
2. stability: align.tsv vs align_novft.tsv (same aligner without any vftable evidence);
   share of common map symbols placed at the same rva.
3. call graph (independent of the aligner, which never looks at call edges): release edges
   must be debug edges. The debug graph is unknown, but two kinds of its edges are implied by
   the map:
   - visibility: a file-local callee (map "Static symbols" or anonymous namespace) can only be
     called from its own obj. Counted over named caller -> named callee edges, by tier pair.
   - required: a deleting dtor C::`scalar/vector deleting dtor' calls C::~C, or a base's
     dtor when ~C was inlined into it; another class's dtor is a member's or a wrong name.
4. link order (invariant, game TUs only; release links different CRT/C++ libraries in a
   different order): names sorted by rva must follow the map's TU order. The ordered backbone
   must be monotonic; inline COMDATs may sit in a later TU than the map says (kept copy moved),
   never an earlier one; static-init routines (exact .CRT$XCU order) never.
5. held-out ret N: align_noretn.tsv (aligner without ret N). Agreement of the chosen function's
   ret N with the signature's, against the agreement of its address neighbours (chance);
   (agree - chance) / (1 - chance) estimates precision, split by the final tier.
"""
import bisect
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


def graph(target):
    syms = {r["id"]: r for r in read_tsv(paths.symbols("symbols.tsv"))}
    names = {int(r["rva"], 16): r for r in read_tsv(paths.maps(target, "names.tsv")) if r["kind"] == "func"}
    callees = {int(r["rva"], 16): [int(c, 16) for c in r["callees"].split(",") if c]
               for r in read_tsv(paths.features(target, "functions"))}
    callers = collections.defaultdict(set)
    for a, cs in callees.items():
        for b in cs:
            callers[b].add(a)

    def local(sym):
        return sym["static"] == "1" or "`anonymous namespace'" in sym["demangled"] or "?%" in sym["mangled"]

    def obj(a):
        s = syms[names[a]["map_id"]]
        return s["lib"], s["obj"]

    # visibility; callees reached from 3+ objs cannot be file-local: folded body or wrong name
    vis = collections.Counter()
    shared = {}
    for a, na in names.items():
        if na["method"].startswith("dyninit"):
            continue
        for b in callees.get(a, ()):
            nb = names.get(b)
            if not nb or nb["method"].startswith("dyninit") or a == b or not local(syms[nb["map_id"]]):
                continue
            fanin = {obj(c) for c in callers[b] if c in names}
            if len(fanin) >= 3:
                shared[b] = nb["tier"]
                continue
            vis[na["tier"] + nb["tier"], obj(a) == obj(b)] += 1

    # deleting dtor -> ~C, or ~Base when ~C was inlined into it (bases from RTTI)
    tclass = {r["rva"]: r["class"] for r in read_tsv(paths.features(target, "vftables"))}
    dem_of_td = {}
    for v in read_tsv(paths.work(target, "vftables.tsv")):
        d = syms[v["map_id"]]["demangled"]
        d = d[len("const "):] if d.startswith("const ") else d
        if "::`vftable'" in d and v["rva"] in tclass:
            dem_of_td[tclass[v["rva"]]] = d[:d.index("::`vftable'")]
    bases = {}
    for c in read_tsv(paths.features(target, "classes")):
        if c["class"] in dem_of_td:
            bases[dem_of_td[c["class"]]] = {dem_of_td.get(b.rsplit("@", 1)[0]) for b in c["bases"].split(",") if b}
    req = collections.Counter()
    bad = []
    for a, na in names.items():
        dem = syms[na["map_id"]]["demangled"]
        m = re.search(r"__thiscall (.+)::`(?:scalar|vector) deleting dtor'", dem)
        if not m:
            continue
        cls = m.group(1)
        dtors = []
        for b in callees.get(a, ()):
            nb = names.get(b)
            if nb and syms[nb["map_id"]]["mangled"].startswith("??1"):
                dm = re.search(r"__thiscall (.+)::~", syms[nb["map_id"]]["demangled"])
                dtors.append((dm.group(1) if dm else "?", nb["tier"], b))
        if not dtors:
            verdict = "no named dtor callee"
        elif any(c == cls for c, _, _ in dtors):
            verdict = "own dtor"
        elif any(c in bases.get(cls, ()) for c, _, _ in dtors):
            verdict = "base dtor (own inlined)"
        elif cls in bases:
            verdict = "other dtor (member, or wrong)"
            bad.append((a, cls, dtors[0]))
        else:
            verdict = "other dtor, class bases unknown"
        req[na["tier"], verdict] += 1
    return vis, shared, req, bad


def link_order(target):
    objidx = {(r["lib"], r["obj"]): int(r["idx"]) for r in read_tsv(paths.symbols("objs.tsv"))}
    syms = {r["id"]: r for r in read_tsv(paths.symbols("symbols.tsv"))}
    rows = sorted((r for r in read_tsv(paths.maps(target, "names.tsv")) if r["kind"] == "func"),
                  key=lambda r: int(r["rva"], 16))

    def tu(r):
        s = syms[r["map_id"]]
        return objidx.get((s["lib"], s["obj"]))
    back = [r for r in rows if r["method"] == "align-order"]
    inv = sum(1 for a, b in zip(back, back[1:]) if int(b["map_va"], 16) < int(a["map_va"], 16))
    brv = [int(r["rva"], 16) for r in back]
    btu = [tu(r) for r in back]
    stat = collections.Counter()
    for r in rows:
        if r["method"] == "align-order" or syms[r["map_id"]]["lib"]:
            continue
        i = bisect.bisect_right(brv, int(r["rva"], 16)) - 1
        lo = btu[i] if i >= 0 else -1
        hi = btu[i + 1] if i + 1 < len(btu) else 1 << 30
        t = tu(r)
        kind = "in band" if lo <= t <= hi else "earlier TU" if t < lo else "later TU"
        stat[r["method"].split("-")[0], kind] += 1
    return len(back), inv, stat


def heldout_retn(target):
    fn = sorted((int(r["rva"], 16), int(r["retn"])) for r in read_tsv(paths.features(target, "functions")))
    pos = {a: i for i, (a, _) in enumerate(fn)}
    tier = {r["map_id"]: r["tier"] for r in read_tsv(paths.maps(target, "names.tsv"))}
    rows = [r for r in read_tsv(paths.work(target, "align_noretn.tsv"))
            if r["pass"] == "order" and r["exp_retn"] not in ("", "0") and int(r["retn"]) >= 0]
    out = []
    for label in ("all", "A", "B", "C"):
        sel = [r for r in rows if label == "all" or tier.get(r["map_id"]) == label]
        if not sel:
            continue
        agree = sum(int(r["retn"]) == int(r["exp_retn"]) for r in sel) / len(sel)
        hit = n = 0
        for r in sel:
            i = pos[int(r["rva"], 16)]
            for k in (i - 1, i + 1):
                if 0 <= k < len(fn) and fn[k][1] >= 0:
                    hit += fn[k][1] == int(r["exp_retn"])
                    n += 1
        chance = hit / max(n, 1)
        out.append((label, len(sel), agree, chance, (agree - chance) / (1 - chance)))
    return out


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
    vis, shared, req, bad = graph(target)
    print("call graph, visibility: file-local callee called from its own obj "
          "(callees reached from <3 objs), by caller+callee tier:")
    for key in sorted({k for k, _ in vis}):
        ok, no = vis[key, True], vis[key, False]
        print(f"    {key}: {ok}/{ok + no} ({100 * ok / max(ok + no, 1):.1f}%)")
    tot_ok = sum(v for (k, same), v in vis.items() if same)
    tot = sum(vis.values())
    print(f"    all: {tot_ok}/{tot} ({100 * tot_ok / max(tot, 1):.1f}%)")
    sc = collections.Counter(shared.values())
    print(f"call graph, file-local names on functions called from 3+ objs (folded or wrong): {len(shared)} "
          f"(" + ", ".join(f"{t} {sc[t]}" for t in "ABC" if sc[t]) + ")")
    print("call graph, deleting dtor callees, by tier of the deleting dtor:")
    for t in "ABC":
        row = {v: n for (tt, v), n in req.items() if tt == t}
        if row:
            print(f"    {t}: " + ", ".join(f"{v} {n}" for v, n in sorted(row.items(), key=lambda kv: -kv[1])))
    if verbose:
        for a, cls, d in bad[:15]:
            print(f"      {a:x} {cls} calls ~{d[0]} (tier {d[1]} @{d[2]:x})")
    nb, inv, lo = link_order(target)
    print(f"link order: backbone {nb} names, {inv} inversions; others: " + ", ".join(
        f"{m} {k} {n}" for (m, k), n in sorted(lo.items()) if k != "in band") + " (align earlier TU = allowed)")
    if os.path.exists(paths.work(target, "align_noretn.tsv")):
        print("held-out ret N (aligner without ret N; non-zero expected ret N), by final tier:")
        for label, n, agree, chance, prec in heldout_retn(target):
            print(f"    {label:3} n={n:5}  agree {agree:.1%}  chance {chance:.1%}  -> est. precision {prec:.1%}")
    print(f"stability: {nf} vs {nn} pairs, {nc} common, same rva {same} ({100 * same / max(nc, 1):.1f}%): "
          + ", ".join(f"{c} {same_cat[c]}/{by_cat[c]}" for c in by_cat))


if __name__ == "__main__":
    main(sys.argv[1], "-v" in sys.argv)
