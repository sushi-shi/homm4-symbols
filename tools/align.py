#!/usr/bin/env python3
"""Align the debug map's function sequence against a release exe's function sequence.

usage: align.py <target_id> [--no-vft]

Link order is preserved (objs in the same order, functions in source order inside an
obj), so this is one global sequence alignment (Needleman-Wunsch, linear gaps):
  A = map .text functions of game objs + zlib + comm_library, in address order
  B = target functions in address order, before the EH-funclet region
Scores come from features that survive debug->release: ret N vs demangled signature,
size ratio, vftable slot membership, vptr stores (ctor/dtor), .CRT$XCU targets.

Pass 1 aligns only the ordered part (plain, static, $E, this-adjusting thunks). Inline
COMDATs are emitted next to their first user in release but at the end of the obj in
the debug build, so pass 2 assigns them without order inside each obj's band (or a
later obj's band: the kept copy moves when earlier objs inline every use).

writes work/<target>/align.tsv (align_novft.tsv with --no-vft) and prints a summary.
"""
import bisect
import collections
import csv
import math
import os
import re
import struct
import sys

import subprocess

import capstone
import pefile

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import dyninit_join  # noqa: E402
import paths  # noqa: E402
import sig  # noqa: E402

KEEP_LIBS = {"", "zlib", "comm_library"}

# score weights
W_RETN_OK, W_RETN_OK_CDECL, W_RETN_BAD = 2.5, 0.8, -4.0
W_VFT_OK, W_VFT_BAD, W_NONVIRT_VFTONLY = 6.0, -6.0, -8.0
W_CTOR_OK, W_CTOR_BAD = 5.0, -3.0
W_XCU_OK, W_XCU_BAD = 6.0, -6.0
W_INLINE_MATCH = -1.0
W_THUNK_BAD = -8.0
SIZE_K = 0.7
GAP_A = {"plain": 2.0, "static": 1.0, "dyninit": 0.3, "inline": 0.1, "thunk": 0.1}
GAP_B = 0.4
W_SIZE_MAX, W_SIZE_MIN, W_SIZE_SLOPE = 1.5, -2.0, 1.5
W_FIX_MAX, W_FIX_MIN, W_FIX_SLOPE = 0.8, -1.2, 0.8
FIX_DEBUG_OVERHEAD = 2


def read_tsv(path):
    with open(path) as f:
        return list(csv.DictReader(f, delimiter="\t"))


def scope_of(dem):
    """'public: virtual bool __thiscall a::b<c>::f(int) const' -> 'a::b<c>'"""
    prefix, _ = sig.param_list(dem)
    if prefix is None:
        return None
    conv = next((c for c in sig.CONVS if c in prefix), None)
    if conv is None:
        return None
    q = prefix.split(conv, 1)[1].strip()
    parts = split_scope(q)
    return "::".join(parts[:-1]) if len(parts) > 1 else None


def split_scope(q):
    out, depth, cur, i = [], 0, [], 0
    while i < len(q):
        ch = q[i]
        if ch in "<(`":
            depth += 1
        elif ch in ">)'":
            depth -= 1
        if depth == 0 and q.startswith("::", i):
            out.append("".join(cur)); cur = []; i += 2; continue
        cur.append(ch); i += 1
    out.append("".join(cur))
    return out


def vft_class_dem(dem):
    # "const t_academy::`vftable'{for `t_counted_object'}" -> "t_academy"
    d = dem[len("const "):] if dem.startswith("const ") else dem
    i = d.find("::`vftable'")
    return d[:i] if i >= 0 else None


ANON_DEM = re.compile(r"`anonymous namespace'")


def load_map():
    syms = read_tsv(paths.symbols("symbols.tsv"))
    items = []
    for s in syms:
        if s["kind"] != "func" or s["contrib"] != ".text" or s["lib"] not in KEEP_LIBS:
            continue
        m = s["mangled"]
        if "`vtordisp{" in s["demangled"] or "`adjustor{" in s["demangled"]:
            cat = "thunk"
        elif s["static"] == "1" and m.startswith("_$E"):
            cat = "dyninit"
        elif s["static"] == "1":
            cat = "static"
        elif s["inline"] == "1":
            cat = "inline"
        else:
            cat = "plain"
        dem = s["demangled"]
        conv, retn = sig.expected_retn(dem, release_fastcall=not s["lib"]) if dem else (None, None)
        cls = scope_of(dem) if dem else None
        pre = sig.param_list(dem)[0] if dem else None
        items.append(dict(id=s["id"], va=int(s["va"], 16), size=int(s["size"], 16), cat=cat,
                          mangled=m, dem=dem, obj=s["obj"], lib=s["lib"], conv=conv, retn=retn,
                          cls=cls, virtual=bool(pre and "virtual " in pre) and not m.startswith("??1"),
                          ctor=m.startswith(("??0", "??1")), deleting=m.startswith(("??_G", "??_E"))))
    items.sort(key=lambda x: x["va"])
    return items, syms


def load_target(target):
    funcs = read_tsv(paths.features(target, "functions"))
    for f in funcs:
        f["rva"] = int(f["rva"], 16)
        f["size"] = int(f["size"], 16)
    funcs.sort(key=lambda f: f["rva"])
    # EH funclet region: first 256-function window that is mostly tiny functions.
    tiny = [f["size"] <= 12 for f in funcs]
    end = len(funcs)
    for i in range(0, len(funcs) - 256):
        if sum(tiny[i:i + 256]) > 180:
            end = i
            break
    return funcs[:end], funcs[end]["rva"] if end < len(funcs) else None


def xcu_targets(target):
    pe = pefile.PE(paths.exe(target), fast_load=True)
    ib = pe.OPTIONAL_HEADER.ImageBase
    img = pe.get_memory_mapped_image()
    text = [s for s in pe.sections if s.Name.startswith(b".text")][0]
    lo, hi = text.VirtualAddress, text.VirtualAddress + text.Misc_VirtualSize
    best = []
    for s in pe.sections:
        if not s.Name.startswith(b".data"):
            continue
        run = []
        for off in range(s.VirtualAddress, s.VirtualAddress + s.Misc_VirtualSize - 3, 4):
            v = struct.unpack_from("<I", img, off)[0] - ib
            if lo <= v < hi:
                run.append(v)
            else:
                if len(run) > len(best):
                    best = run
                run = []
    return set(best)


def folded_functions(target, thunks):
    """Target functions sitting in vftables of two classes where neither derives from the
    other: identical-COMDAT-folded bodies (or _purecall). They carry many names, so they are
    kept out of the one-to-one alignment."""
    anc = {}
    for c in read_tsv(paths.features(target, "classes")):
        anc[c["class"]] = {b.rsplit("@", 1)[0] for b in c["bases"].split(",") if b}
    users = collections.defaultdict(set)
    for v in read_tsv(paths.features(target, "vftables")):
        for s in v["slots"].split(","):
            if s:
                t = int(s, 16)
                users[thunks.get(t, t)].add(v["class"])
    folded = {}
    for t, cls in users.items():
        cl = sorted(cls)
        roots = [c for c in cl if not any(c != d and c in anc.get(d, ()) for d in cl)]
        # 'roots' = most-derived classes; folded if two of them are unrelated
        unrelated = [(a, b) for i, a in enumerate(roots) for b in roots[i + 1:]
                     if a not in anc.get(b, ()) and b not in anc.get(a, ())]
        if unrelated:
            # unrelated leaves may still share a common base that defines the method;
            # require that no class in the set is an ancestor of all leaves
            common = set.intersection(*[anc.get(r, {r}) | {r} for r in roots]) & set(cl)
            if not common:
                folded[t] = len(cls)
    return folded


def find_deleting_dtors(target, funcs):
    """Scalar/vector deleting destructors: ret 4, `test <flags>, 1`, and a call to operator
    delete (the most common callee of ret-4 functions in vftable slot 0)."""
    by_rva = {f["rva"]: f for f in funcs}
    slot0 = set()
    for v in read_tsv(paths.features(target, "vftables")):
        s = v["slots"].split(",")[0]
        if s:
            slot0.add(int(s, 16))
    hist = collections.Counter(c for a in slot0 if a in by_rva and by_rva[a]["retn"] == "4"
                               for c in by_rva[a]["callees"].split(",") if c)
    op_delete = hist.most_common(1)[0][0]
    pe = pefile.PE(paths.exe(target), fast_load=True)
    img = pe.get_memory_mapped_image()
    md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    out = set()
    for f in funcs:
        if f["retn"] != "4" or f["size"] > 0x200 or op_delete not in f["callees"].split(","):
            continue
        if any(i.mnemonic == "test" and i.op_str.endswith(", 1")
               for i in md.disasm(img[f["rva"]:f["rva"] + f["size"]], f["rva"])):
            out.add(f["rva"])
    return out


def find_thunks(target, funcs):
    """rva -> jump target for this-adjusting thunks: (add|sub ecx, ...)+ jmp rel32."""
    pe = pefile.PE(paths.exe(target), fast_load=True)
    img = pe.get_memory_mapped_image()
    md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    out = {}
    for f in funcs:
        if f["size"] > 32:
            continue
        ins = list(md.disasm(img[f["rva"]:f["rva"] + f["size"]], f["rva"]))
        if len(ins) >= 2 and ins[-1].mnemonic == "jmp" and ins[-1].op_str.startswith("0x") and all(
                i.mnemonic in ("add", "sub") and i.op_str.startswith("ecx") for i in ins[:-1]):
            out[f["rva"]] = int(ins[-1].op_str, 16)
    return out


def main(target, use_vft=True):
    all_items, syms = load_map()
    items = [it for it in all_items if it["cat"] != "inline"]
    inline_items = [it for it in all_items if it["cat"] == "inline"]
    funcs, funclet_start = load_target(target)
    # static-init routines already paired exactly by name_dyninit.py stay out of the alignment
    dj = [d for d in dyninit_join.join(target) if d["kind"] == "func"]
    dj_ids, dj_rvas = {d["map_id"] for d in dj}, {d["rva"] for d in dj}
    all_items = [it for it in all_items if it["id"] not in dj_ids]
    items = [it for it in items if it["id"] not in dj_ids]
    funcs = [f for f in funcs if f["rva"] not in dj_rvas]
    print(f"{len(dj)} static-init routines pre-paired (excluded from alignment)", file=sys.stderr)
    xcu = xcu_targets(target)
    thunks = find_thunks(target, funcs)
    folded = folded_functions(target, thunks)
    fn_rvas = {f["rva"] for f in funcs}
    atexit_dtors = set()
    for f in funcs:
        if f["rva"] in xcu:
            atexit_dtors |= {int(d, 16) for d in f["datarefs"].split(",") if d and int(d, 16) in fn_rvas}
    dyn_targets = xcu | atexit_dtors
    deleting = find_deleting_dtors(target, funcs)
    print(f"{len(deleting)} deleting destructors by shape", file=sys.stderr)
    print(f"{len(atexit_dtors)} atexit destructors referenced from .CRT$XCU targets", file=sys.stderr)
    funcs = [f for f in funcs if f["rva"] not in folded]
    print(f"{len(thunks)} this-adjusting thunks, {len(folded)} folded functions held out", file=sys.stderr)
    nA, nB = len(items), len(funcs)
    print(f"A={nA} map items {dict(collections.Counter(i['cat'] for i in items))}; "
          f"B={nB} target functions (funclets from {funclet_start:x}); xcu {len(xcu)}", file=sys.stderr)

    nfix = {r["id"]: int(r["nfix"]) for r in read_tsv(paths.symbols("fixups_per_func.tsv"))}
    # constructors of classes with virtual bases take a hidden 'most derived' int
    td_vbase = {c["class"] for c in read_tsv(paths.features(target, "classes"))
                if any(b.rsplit("@", 1)[1].split(":")[1] != "-1" for b in c["bases"].split(",") if b)}
    dem_by_id = {s["id"]: s["demangled"] for s in syms}
    vbase_dem = set()
    tclass_of = {r["rva"]: r["class"] for r in read_tsv(paths.features(target, "vftables"))}
    for v in read_tsv(paths.work(target, "vftables.tsv")):
        if tclass_of.get(v["rva"]) in td_vbase:
            c = vft_class_dem(dem_by_id.get(v["map_id"], ""))
            if c:
                vbase_dem.add(c)
    for it in all_items:
        if it["mangled"].startswith("??0") and it["cls"] in vbase_dem and it["retn"] is not None:
            it["retn"] += 4
    print(f"{len(vbase_dem)} classes with virtual bases", file=sys.stderr)
    idx_of = {f["rva"]: j for j, f in enumerate(funcs)}
    called = set()
    for f in funcs:
        for c in f["callees"].split(","):
            if c:
                called.add(int(c, 16))

    # vftable slot membership and vptr stores, keyed by demangled class name
    dem_of = {s["id"]: s["demangled"] for s in syms}
    vft = read_tsv(paths.work(target, "vftables.tsv"))
    slots_of = collections.defaultdict(set)
    vft_cls = {}
    any_slot = set()
    for v in vft:
        cls = vft_class_dem(dem_of.get(v["map_id"], ""))
        if not cls:
            continue
        vft_cls[int(v["rva"], 16)] = cls
        for s in v["slots"].split(","):
            if not s:
                continue
            t = int(s, 16)
            t = thunks.get(t, t)  # credit the class with the real method, not the thunk
            if t in idx_of:
                slots_of[cls].add(idx_of[t])
                any_slot.add(idx_of[t])
    refs_vft = collections.defaultdict(set)
    for j, f in enumerate(funcs):
        for d in f["datarefs"].split(","):
            if d and int(d, 16) in vft_cls:
                refs_vft[vft_cls[int(d, 16)]].add(j)
    cls_ids = {c: k for k, c in enumerate(sorted(set(slots_of) | set(refs_vft)))}

    lines = [f"{nA} {nB} {len(cls_ids)}"]
    for j, f in enumerate(funcs):
        vo = 2 if f["rva"] in thunks else 3 if f["rva"] in deleting else int(j in any_slot)
        nabs = len([x for x in f["datarefs"].split(",") if x]) + len([x for x in f["imports"].split(",") if x])
        lines.append(f"{f['retn']} {math.log(max(f['size'], 1)):.4f} {1 if f['rva'] in xcu else 2 if f['rva'] in atexit_dtors else 0} {vo} "
                     f"{math.log1p(nabs):.4f}")
    for it in items:
        cls = it["cls"]
        vmode, vcls, ctor = 0, -1, -1
        if it["cat"] == "thunk":
            vmode = 3
        elif use_vft:
            if (it["virtual"] or it["deleting"]) and cls in slots_of:
                vmode, vcls = 1, cls_ids[cls]
            elif not it["virtual"] and not it["deleting"]:
                vmode = 2
            if it["ctor"] and cls in refs_vft:
                ctor = cls_ids[cls]
        logsize = math.log(it["size"] * SIZE_K) if it["size"] > 0 else -1e10
        lines.append(f"{GAP_A[it['cat']]} {-99 if it['retn'] is None else it['retn']} "
                     f"{int(it['conv'] == '__cdecl')} {logsize:.4f} "
                     f"{W_INLINE_MATCH if it['cat'] == 'inline' else 0.0} {int(it['cat'] == 'dyninit')} "
                     f"{vmode} {vcls} {ctor} "
                     f"{math.log1p(max(nfix.get(it['id'], 0) - FIX_DEBUG_OVERHEAD, 0)):.4f} "
                     f"{int(it['deleting'])}")
    for c in sorted(cls_ids, key=cls_ids.get):
        sl, rf = sorted(slots_of.get(c, ())), sorted(refs_vft.get(c, ()))
        lines.append(" ".join(map(str, [len(sl)] + sl + [len(rf)] + rf)))
    weights = [W_RETN_OK, W_RETN_OK_CDECL, W_RETN_BAD, W_VFT_OK, W_VFT_BAD, W_NONVIRT_VFTONLY,
               W_CTOR_OK, W_CTOR_BAD, W_XCU_OK, W_XCU_BAD, W_SIZE_MAX, W_SIZE_MIN, W_SIZE_SLOPE, GAP_B,
               W_FIX_MAX, W_FIX_MIN, W_FIX_SLOPE]
    res = subprocess.run([paths.NW] + [str(w) for w in weights],
                         input="\n".join(lines) + "\n", capture_output=True, text=True, check=True)
    sys.stderr.write(res.stderr)
    pairs = [tuple(map(int, l.split())) for l in res.stdout.splitlines()]

    # ---- pass 2: inline COMDATs, unordered within obj bands
    def score(it, j):
        f = funcs[j]
        v = 0.0
        ev = []
        r = int(f["retn"])
        if it["retn"] is not None and r >= 0:
            if r == it["retn"]:
                v += W_RETN_OK_CDECL if it["conv"] == "__cdecl" else W_RETN_OK
                ev.append("retn")
            else:
                v += W_RETN_BAD
                ev.append("RETN!")
        if it["size"] > 0:
            v += max(W_SIZE_MIN, W_SIZE_MAX - W_SIZE_SLOPE * abs(math.log(max(f["size"], 1)) - math.log(it["size"] * SIZE_K)))
        if (it["virtual"] or it["deleting"]) and it["cls"] in slots_of:
            if j in slots_of[it["cls"]]:
                v += W_VFT_OK; ev.append("vslot")
            else:
                v += W_VFT_BAD
        elif j in any_slot:
            v += W_NONVIRT_VFTONLY
        if it["ctor"] and it["cls"] in refs_vft:
            if j in refs_vft[it["cls"]]:
                v += W_CTOR_OK; ev.append("vptr")
            else:
                v += W_CTOR_BAD
        if f["rva"] in thunks:
            v += W_THUNK_BAD if it["cat"] != "thunk" else 3.0
        elif f["rva"] in deleting:
            v += 4.0 if it["deleting"] else W_THUNK_BAD
        elif it["deleting"]:
            v += -4.0
        if f["rva"] in dyn_targets:
            v += W_XCU_BAD
        return v, ev

    obj_order = {}
    for it in all_items:
        obj_order.setdefault((it["lib"], it["obj"]), len(obj_order))
    first_rva = {}
    for a, b in pairs:
        k = obj_order[(items[a]["lib"], items[a]["obj"])]
        first_rva[k] = min(first_rva.get(k, 1 << 32), funcs[b]["rva"])
    band_starts = sorted((r, k) for k, r in first_rva.items())
    starts = [r for r, _ in band_starts]
    matched_b = {b for _, b in pairs}
    free_by_obj = collections.defaultdict(list)
    for j, f in enumerate(funcs):
        if j in matched_b:
            continue
        i = bisect.bisect_right(starts, f["rva"]) - 1
        if i >= 0:
            free_by_obj[band_starts[i][1]].append(j)
    inl_by_obj = collections.defaultdict(list)
    inl_by_cls = collections.defaultdict(list)
    for it in inline_items:
        inl_by_obj[obj_order[(it["lib"], it["obj"])]].append(it)
        if it["cls"]:
            inl_by_cls[it["cls"]].append(it)
    j_classes = collections.defaultdict(set)
    for c, js in slots_of.items():
        for j in js:
            j_classes[j].add(c)
    for c, js in refs_vft.items():
        for j in js:
            j_classes[j].add(c)

    used_items, used_b = set(), set()
    pairs2 = []

    def assign(cands, thresh, need):
        cands.sort(key=lambda x: -x[0])
        for sc, j, it, ev in cands:
            if sc < thresh or j in used_b or it["id"] in used_items:
                continue
            if need and not (set(ev) & need):
                continue
            used_b.add(j); used_items.add(it["id"])
            pairs2.append((it, j, sc, ev))

    # round 1: class evidence (vftable slot / vptr store), any obj at or before the band
    cands = []
    for k, js in free_by_obj.items():
        for j in js:
            for c in j_classes.get(j, ()):
                for it in inl_by_cls.get(c, ()):
                    if obj_order[(it["lib"], it["obj"])] <= k:
                        sc, ev = score(it, j)
                        cands.append((sc, j, it, ev))
    assign(cands, 6.0, {"vslot", "vptr"})
    # round 2: same-obj inline items, needs ret N agreement
    cands = []
    for k, js in free_by_obj.items():
        for j in js:
            if j in used_b:
                continue
            for it in inl_by_obj.get(k, ()):
                if it["id"] in used_items:
                    continue
                sc, ev = score(it, j)
                cands.append((sc, j, it, ev))
    assign(cands, 2.5, {"retn", "vslot", "vptr"})

    rows = []
    for a, b in pairs:
        it = items[a]
        sc, ev = score(it, b)
        if funcs[b]["rva"] in xcu:
            ev.append("xcu")
        elif funcs[b]["rva"] in atexit_dtors:
            ev.append("atexit")
        rows.append((it, b, sc, ev, "order"))
    for it, j, sc, ev in pairs2:
        rows.append((it, j, sc, ev, "band"))
    rows.sort(key=lambda r: funcs[r[1]]["rva"])
    with open(paths.work(target, "align.tsv" if use_vft else "align_novft.tsv"), "w") as f:
        f.write("map_id\trva\tsize\tmap_size\tcat\tretn\texp_retn\tpass\tscore\tevidence\tobj\tmangled\n")
        for it, b, sc, ev, how in rows:
            fn = funcs[b]
            f.write(f"{it['id']}\t{fn['rva']:x}\t{fn['size']:x}\t{it['size']:x}\t{it['cat']}\t{fn['retn']}\t"
                    f"{'' if it['retn'] is None else it['retn']}\t{how}\t{sc:.1f}\t{','.join(ev)}\t{it['obj']}\t{it['mangled']}\n")
    cats = collections.Counter(r[0]["cat"] for r in rows)
    tot = collections.Counter(i["cat"] for i in all_items)
    print(f"matched {len(rows)} of B={nB} (pass1 {len(pairs)}, pass2 {len(pairs2)}): " +
          ", ".join(f"{c} {cats[c]}/{tot[c]}" for c in tot), file=sys.stderr)

if __name__ == "__main__":
    main(sys.argv[1], use_vft="--no-vft" not in sys.argv)
