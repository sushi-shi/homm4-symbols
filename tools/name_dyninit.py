#!/usr/bin/env python3
"""Name the compiler-generated static init/term routines of the debug map, and
carry them onto T1 (CHT) through its .CRT$XCU table.

    tools/py tools/name_dyninit.py [--no-release]

Naming follows gruntz's RVA_DYNINIT rule. A `_$E<n>` ordinal is per-TU
emission state, not identity. The identity is the OWNER: the global that the
routine constructs or destroys. Every routine of one initializer is named
`<owner>$<role>`:

    <owner>$init    the .CRT$XCU entry (the VC6 `_$E` wrapper; VC7+ `??__E`)
    <owner>$ctor    the construct body that the wrapper calls
    <owner>$atexit  pushes the dtor and calls atexit
    <owner>$dtor    the atexit destructor (VC7+ `??__F`)
    <owner>$guard   a one-shot guard byte (`??_B`)

VC6 already names the template-static bodies this way: `X$D` is the ctor and
`X$E` is the dtor. Placeholder owners:
  - an owner that is not a public in the map (file `static`s, consts from
    headers) is `<objstem>#<k>`, where k is the A/B initializer's ordinal in
    its obj;
  - a local static's dtor is `<function>$sdtor[k]`;
  - the per-TU wrapper of template static members is `<objstem>$tinit[k]`. Its
    atexit regs are `<member>$atexit` when the member is known, else
    `<objstem>$tatexit<k>`.

VC6 /Od /GZ emission. This was checked by compiling test TUs with VC6 SP3.
Sizes are exact: prologue 3 + 5 per call + __chkesp 7 + epilogue 2.
  A  class with dtor:   wrapper(22) ctor(any) atexit(25) dtor(any)
                        ordinals ctor < dtor < atexit < wrapper
  B  no dtor:           wrapper(17) ctor(any)
  C  template statics:  wrapper(12+5k) atexit(25)*m, ordinals increasing.
                        The ctor/dtor bodies are the COMDATs `X$D`/`X$E`.
  L  local static:      dtor(s) right after the owning function
Size caveats:
  - Where the next symbol is the obj's COMDAT band (16-aligned) or nothing, the
    gap size includes padding and is only a lower bound.
  - Library objs are optimized and aligned, so they are parsed by ordinal order
    alone.
The A+B+C wrappers come to exactly 3,100, the size of the map's .CRT$XCU.

Owners. The .bss order in the map is NOT the definition order: CHT's strings
prove it. So an A/B group gets a public global of its obj only on evidence:
  - kind vs type: A needs a class with a dtor, B a class with a ctor;
  - the aligned CHT routine: its string literals vs the global's name, and the
    RTTI class of its vftable stores vs the global's type;
  - the (kind, ctor size, dtor size) shape and CHT class learned from those
    pairs;
  - failing that, being the only group that fits.
conf: A = exact name/type evidence with no rival; B = strong evidence, or the
only fit for a learned shape; C = partial evidence.

Release. Each CHT .CRT$XCU slot is classified from its code:
  - A: has atexit calls;
  - B: has none;
  - C: a guard byte is both tested and set.
The slots are globally aligned with the map's wrappers, which are in link order
in both files. Template-static members are tied to CHT dtor thunks, and each
thunk names the member in every TU that registers it.

Outputs (TSV with header rows):
  symbols/dyninit.tsv      every `_$E<n>`, `X$D`, `X$E`, `@$A` and `??_B` row
  symbols/compgen.tsv      short names for the other compiler-generated symbols
                           (vftables, RTTI, deleting dtors, vcall thunks,
                           strings, reals, EH throw info)
  work/cht-1.x/dyninit.tsv CHT routines and globals reached from each XCU slot.
                           conf: alignment B/C, weakened by the owner's conf
                           when the owner is a real map global.
"""
import bisect
import collections
import os
import re
import struct
import sys

sys.dont_write_bytecode = True
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from mine_map import demangle  # noqa: E402  (llvm-undname wrapper)
import paths  # noqa: E402

MINED = paths.SYMBOLS
SYMS = paths.symbols("symbols.tsv")
CHT_EXE = paths.exe("cht-1.x")
CHT_OUT = os.path.dirname(paths.work("cht-1.x", "dyninit.tsv"))

E_RE = re.compile(r"^_\$E(\d+)$")
TSUFFIX_RE = re.compile(r"@\$([DE])$")                     # ?member@scope@@$D / $E
LOCALDTOR_RE = re.compile(r"^(\?.+@)\$A(.*)$")              # ?var@?N??fn@@...@$A<type>
GUARD_TD_RE = re.compile(r"^\?\?_B\?1\?\?(\?.+?@)\$D@@9@51$")  # guard inside X$D
# Exact /Od /GZ sizes of the fixed-shape routines.
SZ_WRAP1, SZ_WRAP2, SZ_ATEXIT = 17, 22, 25


# ---------------------------------------------------------------- helpers

def load_symbols():
    rows = []
    with open(SYMS, encoding="ascii") as f:
        head = f.readline().rstrip("\n").split("\t")
        for line in f:
            r = dict(zip(head, line.rstrip("\n").split("\t")))
            r["id"] = int(r["id"])
            r["va"] = int(r["va"], 16)
            r["size"] = int(r["size"], 16)
            r["inline"] = r["inline"] == "1"
            r["static"] = r["static"] == "1"
            rows.append(r)
    return rows


def split_top(s, sep="::"):
    """Split at `sep` outside <>, (), `' nesting."""
    out, depth, i, cur = [], 0, 0, ""
    while i < len(s):
        c = s[i]
        if c in "<(`":
            depth += 1
        elif c in ">)'":
            depth -= 1
        if depth == 0 and s.startswith(sep, i):
            out.append(cur)
            cur, i = "", i + len(sep)
            continue
        cur += c
        i += 1
    out.append(cur)
    return out


def last_token(s):
    """(prefix, last space-separated token at nesting depth 0)."""
    depth = 0
    for i in range(len(s) - 1, -1, -1):
        c = s[i]
        if c in ">)'":
            depth += 1
        elif c in "<(`":
            depth -= 1
        elif c == " " and depth == 0:
            return s[:i], s[i + 1:]
    return "", s


ANON_RE = re.compile(r"\?%.*?\.cpp\d+::|`anonymous namespace'::")
KW_RE = re.compile(r"\b(?:class|struct|union|enum) ")
CV_TAIL_RE = re.compile(r"(?:\s*\b(?:const|volatile))+$")


def short(name):
    """Compact a demangled name: no anon-namespace tags, no class-keys, no blanks."""
    name = ANON_RE.sub("", name)
    name = KW_RE.sub("", name)
    return name.replace(", ", ",").replace(" *", "*").replace(" &", "&")


def stem(obj):
    return obj.rsplit(".", 1)[0]


def func_short(r):
    """Qualified function name without return type and parameters."""
    d = r["demangled"]
    if not d:
        return r["mangled"]
    _, name = last_token(d.split("(")[0])
    return short(name)


# ---------------------------------------------------------------- type facts

def class_facts(rows):
    """Classes (demangled spelling) with a dtor / with a non-copy ctor in the map."""
    dtor, ctor = set(), set()
    for r in rows:
        m, d = r["mangled"], r["demangled"]
        if not d or r["kind"] != "func" or not m.startswith(("??0", "??1")):
            continue
        _, q = last_token(d.split("(")[0])
        parts = split_top(q)
        if len(parts) < 2:
            continue
        cls = "::".join(parts[:-1])
        if m.startswith("??1"):
            dtor.add(cls)
        else:
            params = d[d.find("(") + 1:d.rfind(")")]
            if not (params.endswith(cls + " const &") and "," not in params):
                ctor.add(cls)
    return dtor, ctor


def var_type(r):
    """(qualified var name, class name or '', is_ptr) from a data symbol's demangling."""
    d = r["demangled"]
    if not d or "`" in d or "(" in d:
        return None
    typ, name = last_token(d)
    while name[:1] in "*&":                 # "T const *name" (arrays mangle as pointers)
        typ, name = typ + name[0], name[1:]
    typ = CV_TAIL_RE.sub("", typ.strip())
    is_ptr = typ.endswith("*") or typ.endswith("&")
    base = CV_TAIL_RE.sub("", typ.rstrip("*& ").strip())
    cls = ""
    for kw in ("class ", "struct ", "union "):
        if base.startswith(kw):
            cls = base[len(kw):]
    return name, cls, is_ptr


# ---------------------------------------------------------------- map-side parse

def parse_obj(lst, optimized):
    """Group the `_$E` rows of one obj's .text (address order).

    Returns [dict(kind=A|B|C|L|U, ncalls, members=[(row, role)], fn=row for L)].
    """
    es = []
    for i, r in enumerate(lst):
        m = E_RE.match(r["mangled"])
        if not m:
            continue
        nxt = lst[i + 1] if i + 1 < len(lst) else None
        exact = (not optimized) and nxt is not None and not nxt["inline"]
        es.append(dict(i=i, n=int(m[1]), sz=r["size"], exact=exact, r=r,
                       prev=lst[i - 1] if i else None))

    def size_is(e, want):
        if optimized:
            return True
        return e["sz"] == want if e["exact"] else want <= e["sz"] < want + 16

    def calls(e):
        if optimized or not e["exact"] or (e["sz"] - 12) % 5:
            return None
        return (e["sz"] - 12) // 5

    def contig(j, k):  # es[j..j+k] adjacent in the obj's .text
        return j + k < len(es) and es[j + k]["i"] == es[j]["i"] + k

    def group_at(j):
        e, w = es[j], es[j]["n"]
        if contig(j, 3) and (optimized or (e["exact"] and e["sz"] == SZ_WRAP2)):
            c, a, d = es[j + 1], es[j + 2], es[j + 3]
            if c["n"] < d["n"] < a["n"] < w and size_is(a, SZ_ATEXIT):
                return "A", ["init", "ctor", "atexit", "dtor"]
        k = calls(e)
        if optimized or (k is not None and k >= 2):
            m = 0
            while contig(j, m + 1) and es[j + m + 1]["n"] < w and \
                    (m == 0 or es[j + m + 1]["n"] > es[j + m]["n"]) and \
                    size_is(es[j + m + 1], SZ_ATEXIT) and (optimized or m < k):
                m += 1
            if m:
                return "C", ["tinit"] + ["tatexit"] * m
        if contig(j, 1) and es[j + 1]["n"] < w and \
                (optimized or (e["exact"] and e["sz"] == SZ_WRAP1)):
            return "B", ["init", "ctor"]
        return None

    groups, j = [], 0
    while j < len(es):
        e = es[j]
        g = group_at(j)
        if g:
            kind, roles = g
            groups.append(dict(kind=kind, ncalls=calls(e) if kind == "C" else (2 if kind == "A" else 1),
                               members=[(es[j + t]["r"], roles[t]) for t in range(len(roles))]))
            j += len(roles)
            continue
        p = e["prev"]
        if p is not None and not E_RE.match(p["mangled"]):
            groups.append(dict(kind="L", ncalls=None, fn=p, members=[(e["r"], "sdtor")]))
        elif groups and groups[-1]["kind"] == "L" and groups[-1]["members"][-1][0] is es[j - 1]["r"] \
                and contig(j - 1, 1):
            groups[-1]["members"].append((e["r"], "sdtor"))
        else:
            groups.append(dict(kind="U", ncalls=calls(e), members=[(e["r"], "unknown")]))
        j += 1
    for g in groups:
        if g["kind"] == "L":
            g["members"].sort(key=lambda mr: int(E_RE.match(mr[0]["mangled"])[1]))
    return groups


# ---------------------------------------------------------------- owner matching

def candidates(data_rows, dtor_cls, ctor_cls):
    """Public globals of one obj that may be dynamically initialized.

    need: A = class with a dtor (must have an A group); B = class with a ctor and
    no dtor (must have a B group); b = scalar/pointer/POD (only when its
    initializer is not constant).
    """
    out = []
    for r in data_rows:
        m = r["mangled"]
        if r["contrib"] not in (".data", ".bss") or not m.startswith("?") or m.startswith("??"):
            continue
        vt = var_type(r)
        if vt is None:
            continue
        name, cls, is_ptr = vt
        array = is_ptr and r["size"] > 4 and r["contrib"] == ".bss"   # T x[n] mangles as T*
        if cls and (not is_ptr or array) and cls in dtor_cls:
            need = "A"
        elif cls and (not is_ptr or array) and cls in ctor_cls:
            need = "B"
        elif "@?$" in m.split("@@")[0] or r["contrib"] != ".bss":
            continue            # template static scalar, or statically initialized .data
        else:
            need = "b"
        out.append(dict(r=r, name=name, cls=cls, need=need, owner=short(name)))
    return out


GENERIC = {"k", "g", "s", "m", "p", "text", "t", "cpp"}      # prefixes, not content


def tokens(s):
    return {t for t in re.split(r"[^a-z0-9]+", s.lower()) if t and t not in GENERIC and not t.isdigit()}


def inner_arg(cls):
    """Innermost template argument (or the class itself), class-keys dropped."""
    cls = short(cls)
    while "<" in cls:
        cls = cls[cls.index("<") + 1: cls.rindex(">")]
    return cls.split(",")[0]


def str_score(c, rel):
    """Fraction of the global's name tokens found in the release routine's strings."""
    if not rel or not rel["strings"]:
        return 0.0
    nt = tokens(split_top(c["owner"])[-1])
    if not nt:
        return 0.0
    st = set()
    for s in rel["strings"]:
        st |= tokens(s)
    return len(nt & st) / len(nt)


def cls_score(c, rel):
    if not rel or not rel["cls"] or not c["cls"]:
        return 0.0
    if short(c["cls"]) == rel["cls"]:
        return 1.0
    return 0.8 if inner_arg(c["cls"]) == inner_arg(rel["cls"]) else 0.0


def sig(g):
    sz = {role: r["size"] for r, role in g["members"]}
    return (g["kind"], sz.get("ctor"), sz.get("dtor"))


def assign_owners(objs, relf):
    """Pick the owner global of each A/B group (per obj, no order assumption).

    The .bss order in the map is NOT the definition order (checked against CHT).
    The evidence used instead:
      - kind vs type: an A group needs a class with a dtor;
      - CHT strings vs the global's name, and CHT RTTI class vs its type;
      - per class, what the strong pairs taught: the debug shape
        (kind, ctor size, dtor size) and the CHT RTTI class of its routines.
    """
    shapes = collections.defaultdict(collections.Counter)
    rclass = collections.defaultdict(collections.Counter)
    by_shape = {}

    def compat(g, c):
        return g["kind"] == "A" and c["need"] == "A" or g["kind"] == "B" and c["need"] in "Bb"

    def learned_ok(g, c):
        cls = short(c["cls"])
        if cls in shapes and sig(g) not in shapes[cls]:
            return False
        owners = by_shape.get(sig(g))        # a shape only one class has shown (3+ times)
        if owners and len(owners) == 1 and sum(owners.values()) >= 3 and cls not in owners:
            return False
        rf = relf.get(g["gid"])
        return not (cls in rclass and rf is not None and rf["cls"] not in rclass[cls])

    def take(o, opts, conf_of):
        opts.sort(key=lambda t: -t[0])
        for sc, s, k, ci, g in opts:
            c = o["cands"][ci]
            if g.get("owner_c") is not None or c.get("taken"):
                continue
            rivals = [t for t in opts if t[3] == ci and t[4] is not g and t[0] >= sc - 1e-9] + \
                     [t for t in opts if t[4] is g and t[3] != ci and t[0] >= sc - 1e-9]
            why = ["name~CHT string %.0f%%" % (100 * s)] if s else []
            if k:
                why.append("type~CHT RTTI %s" % (relf[g["gid"]]["cls"] or "none"))
            g.update(owner_c=c, conf=conf_of(s, k, bool(rivals)), ev="; ".join(why))
            c["taken"] = True

    # stage 1: a full name/string or class match on the aligned CHT routine
    for o in objs:
        opts = []
        for g in o["groups"]:
            rf = relf.get(g["gid"])
            for ci, c in enumerate(o["cands"]):
                if g["kind"] in "AB" and compat(g, c):
                    s, k = str_score(c, rf), cls_score(c, rf)
                    if s >= 0.99 or k >= 0.8:
                        opts.append((2 * s + k, s, k, ci, g))
        take(o, opts, lambda s, k, riv: "C" if riv else "A" if s >= 0.99 or k >= 0.99 else "B")
    by_shape = collections.defaultdict(collections.Counter)
    for o in objs:
        for g in o["groups"]:
            c = g.get("owner_c")
            if c is not None and c["cls"]:
                shapes[short(c["cls"])][sig(g)] += 1
                by_shape[sig(g)][short(c["cls"])] += 1
                rf = relf.get(g["gid"])
                if rf is not None:
                    rclass[short(c["cls"])][rf["cls"]] += 1

    # stage 2: partial name match or a learned CHT class, consistent with the shapes
    for o in objs:
        opts = []
        for g in o["groups"]:
            if g["kind"] not in "AB" or g.get("owner_c") is not None:
                continue
            rf = relf.get(g["gid"])
            for ci, c in enumerate(o["cands"]):
                if c.get("taken") or not compat(g, c) or not learned_ok(g, c):
                    continue
                s = str_score(c, rf)
                k = 0.9 if rf is not None and rf["cls"] and rf["cls"] in rclass.get(short(c["cls"]), ()) else 0.0
                if s >= 0.5 or (k and c["need"] != "b"):
                    opts.append((2 * s + k, s, k, ci, g))
        take(o, opts, lambda s, k, riv: "B" if s >= 0.5 and k and not riv else "C")

    # stage 3: what is left, by type and learned shape; only unambiguous pairs
    for o in objs:
        ab = [g for g in o["groups"] if g["kind"] in "AB" and g.get("owner_c") is None]
        left = [c for c in o["cands"] if not c.get("taken") and c["need"] in "AB"]

        def fits(c):
            return [g for g in ab if g.get("owner_c") is None and g["kind"] == c["need"] and learned_ok(g, c)]

        changed = True
        while changed:
            changed = False
            for c in left:
                if c.get("taken"):
                    continue
                fit = fits(c)
                rivals = [d for d in left if d is not c and not d.get("taken")
                          and set(map(id, fits(d))) & set(map(id, fit))]
                if len(fit) == 1 and not rivals:
                    fit[0].update(owner_c=c, conf="B" if short(c["cls"]) in shapes else "C",
                                  ev="only %s group that fits %s" % (c["need"], short(c["cls"])))
                    c["taken"] = changed = True
        for c in left:
            if not c.get("taken"):
                for g in fits(c):
                    g.setdefault("maybe", []).append(c["owner"])


# ---------------------------------------------------------------- map pass

def map_groups(rows):
    """Parse every obj; returns objs = [dict(lib, obj, text, groups, cands, hosted)]."""
    dtor_cls, ctor_cls = class_facts(rows)
    by_obj_text = collections.defaultdict(list)
    by_obj_data = collections.defaultdict(list)
    order = []
    for r in sorted(rows, key=lambda r: (r["va"], r["id"])):
        key = (r["lib"], r["obj"])
        if r["sec"] == "1" and r["contrib"] == ".text":
            if key not in by_obj_text:
                order.append(key)
            by_obj_text[key].append(r)
        elif r["kind"] == "data":
            by_obj_data[key].append(r)
    objs, n = [], 0
    for key in order:
        lst = by_obj_text[key]
        groups = parse_obj(lst, optimized=bool(key[0]))
        if not groups:
            continue
        for g in groups:
            n += 1
            g.update(lib=key[0], obj=key[1], gid="g%04d" % n)
        # template statics whose X$D and X$E the linker kept in this obj (X$D order)
        hosted_e = {r["mangled"][:-2] for r in lst if r["inline"] and r["mangled"].endswith("@@$E")}
        hosted = [r for r in lst if r["inline"] and r["mangled"].endswith("@@$D")
                  and r["mangled"][:-2] in hosted_e]
        objs.append(dict(lib=key[0], obj=key[1], groups=groups, hosted=hosted, text=lst,
                         cands=candidates(by_obj_data.get(key, []), dtor_cls, ctor_cls)))
    return objs


def synth_names(rows):
    """Owner names of `X$D`/`X$E`, `@$A` and `??_B` rows: {row id: short name}.

    Each one is demangled as a synthetic variable with the same qualified name.
    """
    synth = {}
    for r in rows:
        m = r["mangled"]
        mt, mg, ml = TSUFFIX_RE.search(m), GUARD_TD_RE.match(m), LOCALDTOR_RE.match(m)
        if mt and r["kind"] == "func":
            synth[r["id"]] = m[:-2] + "3HA"
        elif mg:
            synth[r["id"]] = mg[1] + "@3HA"
        elif ml and r["kind"] == "func":
            synth[r["id"]] = ml[1] + "4" + ml[2]
    dem = demangle(sorted(set(synth.values())))
    out = {}
    for rid, s in synth.items():
        d = dem.get(s, "")
        if not d:
            continue
        if "`" in d:            # local static: `ret cc func(args)'::`N'::var -> func::var
            mm = re.search(r"`.*?(\S+)\(.*\)'::`\d+'::(\S+)$", d)
            if mm:
                out[rid] = short(mm[1] + "::" + mm[2])
        else:
            out[rid] = short(last_token(d)[1])
    return out


def fill_hosted(objs, by_row, snames, conf="B", why="X$D/X$E kept in this obj"):
    """Name a C group's unnamed atexit regs after the template statics whose
    X$D/X$E the linker kept in the same obj, when the counts agree (X$D order)."""
    n = 0
    for o in objs:
        regs = [by_row[id(r)] for g in o["groups"] if g["kind"] == "C" for r, _ in g["members"][1:]]
        unnamed = [e for e in regs if not e["owner"]]
        used = {e["owner_m"] for e in regs if e["owner_m"]}
        avail = [h for h in o["hosted"] if h["mangled"][:-2] not in used and snames.get(h["id"])]
        if not unnamed or len(unnamed) != len(avail):
            continue
        for e, h in zip(unnamed, avail):
            e.update(owner_m=h["mangled"][:-2], owner=snames[h["id"]], conf=conf,
                     ev=e["ev"] + "; member: " + why)
            e["sema"] = e["owner"] + "$atexit"
            n += 1
    return n


def name_map(rows, objs, snames):
    """Owner, semantic name, confidence and evidence for every routine row."""
    dyn = []
    for o in objs:
        stm, groups = stem(o["obj"]), o["groups"]
        n_c = sum(g["kind"] == "C" for g in groups)
        k_ab = k_c = k_t = 0
        for g in groups:
            kind = g["kind"]
            g.setdefault("conf", "")
            g.setdefault("ev", "")
            g.update(owner="", owner_m="", cls="")
            if kind in "AB":
                k_ab += 1
                c = g.get("owner_c")
                if c:
                    g.update(owner=c["owner"], owner_m=c["r"]["mangled"], cls=c["cls"])
                else:
                    g.update(owner="%s#%d" % (stm, k_ab), conf="",
                             ev=("one of: " + ",".join(g["maybe"])) if g.get("maybe") else
                             "no public global (file static or header const)")
                hint = g.get("hint")
                if hint:
                    g["ev"] = "; ".join(filter(None, [g["ev"], "CHT " + hint]))
            elif kind == "C":
                k_c += 1
                g.update(owner="%s$tinit%s" % (stm, k_c if n_c > 1 else ""), conf="B",
                         ev="template statics, %s calls, %d atexit" % (g["ncalls"], len(g["members"]) - 1))
            elif kind == "L":
                g.update(owner=func_short(g["fn"]), conf="B", ev="follows " + g["fn"]["mangled"])
            else:
                g.update(owner=stm, ev="unparsed")
            for t, (r, role) in enumerate(g["members"]):
                owner, owner_m, conf, ev = g["owner"], g["owner_m"], g["conf"], g["ev"]
                if kind == "C":
                    if role == "tinit":
                        sema = owner
                    else:
                        k_t += 1
                        sema, owner = "%s$tatexit%d" % (stm, k_t), ""
                elif kind == "L":
                    sema = "%s$sdtor%s" % (owner, t + 1 if len(g["members"]) > 1 else "")
                elif kind == "U":
                    sema = "%s$E%s" % (owner, E_RE.match(r["mangled"])[1])
                else:
                    sema = "%s$%s" % (owner, role)
                dyn.append(dict(r=r, role=role, g=g, owner_m=owner_m, owner=owner, sema=sema,
                                conf=conf, ev=ev))

    fill_hosted(objs, {id(e["r"]): e for e in dyn}, snames)

    # template-static COMDATs `X$D`/`X$E`, local-static dtors `@$A`, guards `??_B`
    for r in rows:
        m = r["mangled"]
        mt = TSUFFIX_RE.search(m)
        ow = snames.get(r["id"], "")
        if mt and r["kind"] == "func":
            role = "ctor" if mt[1] == "D" else "dtor"
            full = m.endswith("@@$" + mt[1])
            dyn.append(dict(r=r, role=role, g=None, owner_m=m[:-2] if full else "", owner=ow,
                            sema="%s$%s" % (ow or m[:-2], role), conf="A" if ow else "C",
                            ev="COMDAT X$%s (template static)%s" % (mt[1], "" if full else ", name truncated")))
        elif LOCALDTOR_RE.match(m) and r["kind"] == "func":
            dyn.append(dict(r=r, role="sdtor", g=None, owner_m="", owner=ow,
                            sema="%s$dtor" % (ow or m), conf="A" if ow else "C",
                            ev="COMDAT @$A (local static of an inline function)"))
        elif m.startswith("??_B") and r["kind"] == "data":
            if ow:
                sema, ev = ow + "$guard", "guard inside template static X$D"
            else:
                q = r["demangled"]
                fn = re.search(r"(\S+)\(", q)
                nb = re.search(r"guard'\{(\d+)\}", q)
                sema = "%s$guard%s" % (short(fn[1]) if fn else stem(r["obj"]), nb[1] if nb else "")
                ev = "local static guard"
            dyn.append(dict(r=r, role="guard", g=None, owner_m="", owner=ow, sema=sema,
                            conf="A" if ow or r["demangled"] else "C", ev=ev))
    return dyn


# ---------------------------------------------------------------- other compiler-generated names

def compgen_name(r):
    """(family, short name) for the other compiler-generated symbols, else None."""
    m, d = r["mangled"], r["demangled"]
    sd = short(d).replace("const ", "") if d else m
    cls = sd.split("::`")[0]
    if m.startswith("??_7"):
        mm = re.search(r"\{for `(.*)'\}$", sd)
        return "vftable", cls + "::$vftable" + ("{%s}" % mm[1] if mm else "")
    if m.startswith("??_8"):
        mm = re.search(r"\{for `(.*)'\}$", sd)
        return "vbtable", cls + "::$vbtable" + ("{%s}" % mm[1] if mm else "")
    if r["kind"] == "func":
        for pre, fam in (("??_G", "sdeldtor"), ("??_E", "vdeldtor"), ("??_D", "vbasedtor"),
                         ("??_F", "defctor")):
            if m.startswith(pre):
                return fam, func_short(r).split("::`")[0] + "::$" + fam
        if m.startswith("??_9"):
            mm = re.search(r"\{(\d+),", d)
            return "vcall", "$vcall%s" % (mm[1] if mm else "")
        if m[:4] in ("??_L", "??_M", "??_H", "??_I", "??_N") and m[4:5] == "@":
            return "vec_iter", {"??_L": "$eh_vec_ctor", "??_M": "$eh_vec_dtor", "??_H": "$vec_ctor",
                                "??_I": "$vec_dtor", "??_N": "$eh_vec_vbctor"}[m[:4]]
    if m.startswith("??_R0"):
        return "rtti_td", sd.replace(" `RTTI Type Descriptor'", "") + "::$TD"
    if m.startswith("??_R1"):
        mm = re.search(r"at \(([^)]*)\)", sd)
        return "rtti_bcd", cls + "::$BCD(%s)" % (mm[1].replace(",", ",") if mm else "")
    if m.startswith("??_R2"):
        return "rtti_bca", cls + "::$BCA"
    if m.startswith("??_R3"):
        return "rtti_chd", cls + "::$CHD"
    if m.startswith("??_R4"):
        mm = re.search(r"\{for `(.*)'\}$", sd)
        return "rtti_col", cls + "::$COL" + ("{%s}" % mm[1] if mm else "")
    if m.startswith("??_C@"):
        text = d[1:].split('"')[0] if d.startswith('"') else m.split("@")[-1]
        return "string", "$s_" + (re.sub(r"[^0-9A-Za-z]+", "_", text).strip("_")[:32] or m.split("@")[2])
    if m.startswith("__real@"):
        return "real", _real_name(m)
    for pre, fam in (("__TI", "throwinfo"), ("__CTA", "catchtypes"), ("__CT", "catchtype")):
        if m.startswith(pre):
            return fam, _eh_name(m, pre, fam)
    return None


def _real_name(m):
    """__real@<hex>: 8 hex = float, 16 = double, 20 = VC6's 80-bit long double."""
    hexv = m.split("@")[-1]
    try:
        raw = bytes.fromhex(hexv)
        if len(raw) == 4:
            return "$real_%r" % struct.unpack(">f", raw)[0]
        if len(raw) == 8:
            return "$real_%r" % struct.unpack(">d", raw)[0]
        if len(raw) == 10:
            se, mant = int.from_bytes(raw[:2], "big"), int.from_bytes(raw[2:], "big")
            if se & 0x7fff == 0 and mant == 0:
                v = 0.0
            else:
                v = mant * 2.0 ** ((se & 0x7fff) - 16383 - 63)
            return "$real_%r" % (-v if se & 0x8000 else v)
    except (ValueError, OverflowError):
        pass
    return "$real_" + hexv


def _eh_name(m, prefix, fam):
    mm = re.search(r"\?A[VU]([^@]+(?:@[^@]+)*?)@@", m)
    if mm:
        return "::".join(reversed(mm[1].split("@"))) + "::$" + fam
    return "$%s_%s" % (fam, m[len(prefix):])


# ---------------------------------------------------------------- release side

class Image:
    def __init__(self, path):
        import capstone
        import pefile
        self.cs = capstone
        pe = pefile.PE(path, fast_load=True)
        self.base = pe.OPTIONAL_HEADER.ImageBase
        self.img = pe.get_memory_mapped_image()
        self.secs = {s.Name.rstrip(b"\0").decode(): (self.base + s.VirtualAddress,
                                                     self.base + s.VirtualAddress + s.Misc_VirtualSize)
                     for s in pe.sections}
        self.md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
        self.md.detail = True

    def rd(self, va, n):
        return self.img[va - self.base: va - self.base + n]

    def u32(self, va):
        return struct.unpack("<I", self.rd(va, 4))[0]

    def inside(self, va, *names):
        return any(lo <= va < hi for n in names for lo, hi in [self.secs[n]])

    def data_va(self, va):
        # .data plus its zero-fill tail (.bss is merged into .data)
        lo, hi = self.secs[".data"]
        return lo <= va < hi + 0x100000

    def insns(self, va, limit=0x400):
        for ins in self.md.disasm(self.rd(va, limit), va):
            yield ins
            if ins.mnemonic == "ret" or (ins.mnemonic == "jmp"):
                return

    def cstring(self, va):
        if not (self.inside(va, ".rdata", ".data")):
            return None
        raw = self.rd(va, 80)
        n = raw.find(b"\0")
        if n < 4:
            return None
        s = raw[:n]
        if all(32 <= c < 127 for c in s):
            return s.decode()
        return None

    def rtti_name(self, vft):
        """RTTI type-descriptor name (.?AV...) of the vftable at `vft`, else None."""
        if not self.inside(vft, ".rdata"):
            return None
        col = self.u32(vft - 4)
        if not self.inside(col, ".rdata") or self.u32(col) != 0:
            return None
        td = self.u32(col + 12)
        if not self.inside(td, ".data"):
            return None
        raw = self.rd(td + 8, 256)
        name = raw[:raw.find(b"\0")]
        return name.decode("ascii", "replace") if name.startswith(b".?A") else None


def find_xcu(im):
    """_initterm(__xc_a, __xc_z): the largest `push z; push a; call` table in .data."""
    tlo, thi = im.secs[".text"]
    dlo, dhi = im.secs[".data"]
    best = None
    for mm in re.finditer(rb"\x68(....)\x68(....)\xe8", im.rd(tlo, thi - tlo), re.S):
        z, a = struct.unpack("<I", mm[1])[0], struct.unpack("<I", mm[2])[0]
        if dlo <= a < z < dhi and z - a <= 0x10000 and (best is None or z - a > best[1] - best[0]):
            best = (a, z)
    return best


def analyze(im, va, atexit):
    """Walk an XCU routine, its local callees and tail jumps."""
    X86 = im.cs.x86
    f = dict(atexit=0, bytes={}, dtors=[], ecx=[], stores=[], vft=[], strings=[], callees=[],
             ctor_targets=[])
    seen = set()

    def walk(va, depth):
        if va in seen or depth > 2:
            return
        seen.add(va)
        last_push, ecx = None, None
        for ins in im.insns(va):
            ops, mn = ins.operands, ins.mnemonic
            if mn == "push" and ops and ops[0].type == X86.X86_OP_IMM:
                last_push = ops[0].imm
            for o in ops:       # string literals: pushed, or loaded for an inlined strlen/copy
                if o.type == X86.X86_OP_IMM and mn in ("push", "mov"):
                    s = im.cstring(o.imm)
                    if s and s not in f["strings"]:
                        f["strings"].append(s)
            if mn == "mov" and len(ops) == 2 and ops[0].type == X86.X86_OP_REG and \
                    ins.reg_name(ops[0].reg) == "ecx" and ops[1].type == X86.X86_OP_IMM and im.data_va(ops[1].imm):
                ecx = ops[1].imm
                f["ecx"].append(ecx)
            if mn == "mov" and len(ops) == 2 and ops[0].type == X86.X86_OP_MEM and ops[1].type == X86.X86_OP_IMM:
                if im.rtti_name(ops[1].imm):
                    f["vft"].append(ops[1].imm)
                if ops[0].mem.base == 0 and ops[0].mem.index == 0 and im.data_va(ops[0].mem.disp):
                    f["stores"].append(ops[0].mem.disp)
            elif mn == "mov" and ops and ops[0].type == X86.X86_OP_MEM and ops[0].mem.base == 0 \
                    and ops[0].mem.index == 0 and im.data_va(ops[0].mem.disp) and ops[0].size == 4:
                f["stores"].append(ops[0].mem.disp)
            for o in ops:   # guard byte: tested/loaded and or-ed/stored
                if o.type == X86.X86_OP_MEM and o.size == 1 and o.mem.base == 0 and o.mem.index == 0 \
                        and im.data_va(o.mem.disp):
                    rw = "r" if mn == "test" or (mn == "mov" and o is ops[1]) else \
                        "w" if mn == "or" or (mn == "mov" and o is ops[0]) else ""
                    if rw:
                        f["bytes"].setdefault(o.mem.disp, set()).add(rw)
            if mn in ("call", "jmp") and ops and ops[0].type == X86.X86_OP_IMM:
                t = ops[0].imm
                if t == atexit:
                    f["atexit"] += 1
                    if last_push:
                        f["dtors"].append(last_push)
                elif depth == 0 and (mn == "jmp" and abs(t - va) < 0x800 or
                                     mn == "call" and abs(t - va) < 0x200):
                    f["callees"].append((mn, t))
                    walk(t, depth + 1)
                elif mn == "call" and ecx is not None:
                    f["ctor_targets"].append((ecx, t))
                last_push = None

    walk(va, 0)
    f["guard"] = sorted(a for a, rw in f["bytes"].items() if rw == {"r", "w"})
    f["kind"] = "C" if f["guard"] and f["atexit"] else ("A" if f["atexit"] else "B")
    return f


def dtor_facts(im, thunk):
    """Global (`mov ecx, g`) and class vftable of an atexit dtor thunk."""
    X86 = im.cs.x86
    glob, vft = None, None
    for ins in im.insns(thunk, 0x80):
        ops = ins.operands
        if ins.mnemonic == "mov" and len(ops) == 2 and ops[0].type == X86.X86_OP_REG and \
                ins.reg_name(ops[0].reg) == "ecx" and ops[1].type == X86.X86_OP_IMM and im.data_va(ops[1].imm):
            glob = ops[1].imm
        if ins.mnemonic == "mov" and len(ops) == 2 and ops[0].type == X86.X86_OP_MEM and \
                ops[1].type == X86.X86_OP_IMM and im.rtti_name(ops[1].imm) and vft is None:
            vft = ops[1].imm
        if ins.mnemonic in ("jmp", "call") and ops and ops[0].type == X86.X86_OP_IMM and glob and vft is None:
            for ins2 in im.insns(ops[0].imm, 0x60):   # the class dtor resets its vptr first
                o2 = ins2.operands
                if ins2.mnemonic == "mov" and len(o2) == 2 and o2[0].type == X86.X86_OP_MEM and \
                        o2[1].type == X86.X86_OP_IMM and im.rtti_name(o2[1].imm):
                    vft = o2[1].imm
                    break
            break
    return glob, vft


def nw_align(a, b, score, gap=-1.0, band=400):
    """Banded global alignment; returns {j: i} for aligned pairs."""
    M, N = len(a), len(b)
    INF = float("-inf")
    prev = [j * gap for j in range(N + 1)]
    back = [bytearray(N + 1) for _ in range(M + 1)]
    for j in range(1, N + 1):
        back[0][j] = 2
    for i in range(1, M + 1):
        cur = [INF] * (N + 1)
        c = i * N // M
        lo, hi = max(0, c - band), min(N, c + band)
        if lo == 0:
            cur[0], back[i][0] = i * gap, 1
        bi = back[i]
        for j in range(max(1, lo), hi + 1):
            d = prev[j - 1] + score(i - 1, j - 1) if prev[j - 1] != INF else INF
            u = prev[j] + gap if prev[j] != INF else INF
            lft = cur[j - 1] + gap if cur[j - 1] != INF else INF
            if d >= u and d >= lft:
                cur[j], bi[j] = d, 0
            elif u >= lft:
                cur[j], bi[j] = u, 1
            else:
                cur[j], bi[j] = lft, 2
        prev = cur
    pairs, i, j = {}, M, N
    while i or j:
        op = back[i][j]
        if i and j and op == 0:
            pairs[j - 1] = i - 1
            i, j = i - 1, j - 1
        elif i and (op == 1 or not j):
            i -= 1
        else:
            j -= 1
    return pairs




def release_analyze(wrappers):
    """Classify CHT's XCU slots and align them to the map's wrappers.

    Returns (rel, pairs {slot idx: wrapper idx}, relf {gid: features}, info).
    """
    im = Image(CHT_EXE)
    xc_a, xc_z = find_xcu(im)
    slots = [(va, im.u32(va)) for va in range(xc_a, xc_z, 4)]
    slots = [(va, p) for va, p in slots if p]
    calls = collections.Counter()
    for _, p in slots:
        for ins in im.insns(p, 64):
            if ins.mnemonic == "call" and ins.operands[0].type == im.cs.x86.X86_OP_IMM:
                calls[ins.operands[0].imm] += 1
    atexit = calls.most_common(1)[0][0]
    rel = [dict(idx=i, slot=s, va=p, f=analyze(im, p, atexit)) for i, (s, p) in enumerate(slots)]

    def score(i, j):
        w, f = wrappers[i], rel[j]["f"]
        if w["kind"] != f["kind"]:
            return -1.0
        if w["kind"] == "C":
            return 3.0 if len(w["members"]) - 1 == f["atexit"] else 1.0
        return 2.0

    pairs = nw_align(wrappers, rel, score)

    # RTTI class of every vftable seen, demangled in one batch
    vfts = set()
    for x in rel:
        f = x["f"]
        f["dtor_facts"] = [dtor_facts(im, d) for d in f["dtors"]]
        vfts.update(f["vft"])
        vfts.update(v for _, v in f["dtor_facts"] if v)
    synth = {v: "??_7" + n[4:] + "6B@" for v in vfts for n in [im.rtti_name(v)] if n}
    dem = demangle(sorted(set(synth.values())))
    vcls = {v: short(dem.get(s, "").replace("const ", "").split("::`vftable'")[0]) for v, s in synth.items()}

    relf, stats = {}, collections.Counter()
    for x in rel:
        f = x["f"]
        wi = pairs.get(x["idx"])
        w = wrappers[wi] if wi is not None else None
        x["w"] = w
        x["ok"] = ok = w is not None and w["kind"] == f["kind"] and \
            (f["kind"] != "C" or len(w["members"]) - 1 == f["atexit"])
        nb = sum(1 for d in (-2, -1, 1, 2) if wi is not None and pairs.get(x["idx"] + d) == wi + d)
        x["conf"] = ("B" if ok and nb >= 3 else "C") if w else ""
        stats["ok" if ok else "bad" if w else "none"] += 1
        # the global: `mov ecx, g` of the dtor thunk, else of the first ctor call, else
        # the lowest absolute store
        glob = next((g for g, _ in f["dtor_facts"] if g), None)
        if glob is None and f["ctor_targets"]:
            glob = f["ctor_targets"][0][0]
        if glob is None and f["stores"]:
            glob = min(f["stores"])
        # class: vftable the dtor resets (A), else the last one the ctor stores
        cls = ""
        if f["dtor_facts"] and f["dtor_facts"][0][1]:
            cls = vcls.get(f["dtor_facts"][0][1], "")
        elif f["vft"]:
            cls = vcls.get(f["vft"][-1], "")
        x["glob"], x["cls"] = glob, cls
        x["hint"] = ";".join(filter(None, [cls and "class=" + cls] +
                                    ['"%s"' % s[:48] for s in f["strings"][:3]]))
        if w and ok:
            relf[w["gid"]] = dict(strings=f["strings"], cls=cls, idx=x["idx"])
            w["hint"] = "slot %d: %s" % (x["idx"], x["hint"]) if x["hint"] else ""
    info = dict(xc_a=xc_a, xc_z=xc_z, atexit=atexit, n=len(rel), stats=stats, base=im.base,
                kinds=collections.Counter(x["f"]["kind"] for x in rel))
    return rel, relf, info


def _by_obj(rel):
    out = collections.defaultdict(list)
    for x in rel:
        if x["w"] is not None and x["ok"]:
            out[x["w"]["obj"]].append(x)
    return out


def release_rows(rel, dyn, info, objs, snames):
    """Name CHT routines/globals reached from each XCU slot; spread C members."""
    base = info["base"]
    by_row = {id(e["r"]): e for e in dyn}

    def c_regs(x):
        w = x["w"]
        if w is None or w["kind"] != "C" or x["f"]["kind"] != "C":
            return []
        regs = [by_row[id(r)] for r, _ in w["members"][1:]]
        return regs if len(regs) == len(x["f"]["dtors"]) else []

    # template-static members by release dtor thunk: seeded where the map names the
    # member, then spread to every TU that registers the same thunk
    member_of, spread = {}, 0
    # X$E thunks by release obj band: the thunks a C slot registers that lie in obj
    # O's band (from O's first XCU routine to the next obj's), in address order,
    # against the X$E the map keeps in O, in address order. Only when the counts
    # agree and O's own C slots register every one of them (O references them).
    own = collections.defaultdict(set)
    for o, xs in _by_obj(rel).items():
        for x in xs:
            if x["f"]["kind"] == "C":
                own[o].update(x["f"]["dtors"])
    starts = sorted((min(x["va"] for x in xs), o) for o, xs in _by_obj(rel).items())
    first = [va for va, _ in starts]
    thunks = collections.defaultdict(set)
    for x in rel:
        if x["f"]["kind"] == "C":
            for d in x["f"]["dtors"]:
                i = bisect.bisect_right(first, d) - 1
                if i >= 0:
                    thunks[starts[i][1]].add(d)
    for o in objs:
        kept = [r for r in o["text"] if r["inline"] and r["mangled"].endswith("@@$E")]
        mine = sorted(thunks.get(o["obj"], ()))
        if kept and len(kept) == len(mine) and set(mine) <= own[o["obj"]]:
            for r, d in zip(kept, mine):
                if snames.get(r["id"]):
                    member_of.setdefault(d, (r["mangled"][:-2], snames[r["id"]]))
    for _ in range(3):
        for x in rel:
            for e, d in zip(c_regs(x), x["f"]["dtors"]):
                if e["owner"]:
                    member_of.setdefault(d, (e["owner_m"], e["owner"]))
        for x in rel:
            for e, d in zip(c_regs(x), x["f"]["dtors"]):
                if not e["owner"] and d in member_of:
                    e["owner_m"], e["owner"] = member_of[d]
                    e["sema"] = e["owner"] + "$atexit"
                    e["ev"] += "; member by CHT dtor thunk %08x" % (d - base)
                    e["conf"] = "C"
                    spread += 1
        # members hosted elsewhere are now known: retry the per-obj X$D pairing
        if not fill_hosted(objs, by_row, snames, "C", "X$D/X$E kept in this obj, after CHT"):
            break
    info["spread"] = spread

    out, seen = [], set()
    for x in rel:
        f, w = x["f"], x["w"]
        g = w
        owner = w["owner"] if w else "xcu%04d" % x["idx"]
        omang = w["owner_m"] if w else ""
        # a placeholder owner makes no claim: then only the alignment counts
        oconf = (max(x["conf"], w["conf"] or "C") if w["owner_m"] else x["conf"]) if w else ""

        def row(role, va, sema, mang="", conf=None):
            if (role, va) in seen:
                return
            seen.add((role, va))
            out.append(dict(slot=x["idx"], role=role, rva=va - base, sema=sema, mangled=mang,
                            gid=g["gid"] if g else "", obj=g["obj"] if g else "", kind=f["kind"],
                            mkind=g["kind"] if g else "", conf=conf if conf is not None else oconf,
                            hint=x["hint"]))

        if f["kind"] == "C":
            row("tinit", x["va"], owner if w else owner + "$tinit", "", x["conf"])
            regs = c_regs(x)
            for t, d in enumerate(f["dtors"]):
                mem = member_of.get(d)
                if mem:
                    row("dtor", d, mem[1] + "$dtor", mem[0] + "$E" if mem[0] else "", "B")
                elif regs:
                    row("dtor", d, regs[t]["sema"].replace("$tatexit", "$tdtor"), "", "C")
            for gd in f["guard"]:
                mem = member_of.get(f["dtors"][0]) if len(f["dtors"]) == 1 else None
                row("guard", gd, (mem[1] if mem else owner) + "$guard", "", "C")
            continue
        row("init", x["va"], owner + "$init")
        for mn, t in f["callees"]:
            row("atexit" if mn == "jmp" and f["atexit"] else "ctor", t,
                owner + ("$atexit" if mn == "jmp" and f["atexit"] else "$ctor"))
        for d in f["dtors"]:
            row("dtor", d, owner + "$dtor")
        if x["glob"] is not None:
            row("global", x["glob"], owner, omang)
    return out


# ---------------------------------------------------------------- output

def main():
    rows = load_symbols()
    objs = map_groups(rows)
    groups = [g for o in objs for g in o["groups"]]
    wrappers = [g for g in groups if g["kind"] in "ABC"]
    xcu_of = {id(g["members"][0][0]): i for i, g in enumerate(wrappers)}

    rel = relf = info = None
    if "--no-release" not in sys.argv[1:] and os.path.exists(CHT_EXE):
        rel, relf, info = release_analyze(wrappers)
    assign_owners(objs, relf or {})
    snames = synth_names(rows)
    dyn = name_map(rows, objs, snames)
    cht = release_rows(rel, dyn, info, objs, snames) if rel else None

    with open(os.path.join(MINED, "dyninit.tsv"), "w") as f:
        f.write("id\tva\tsize\tlib\tobj\tmangled\trole\tkind\tgroup\txcu_pred\towner_mangled\t"
                "owner\tsema\tconf\tevidence\n")
        for d in sorted(dyn, key=lambda d: (d["r"]["va"], d["r"]["id"])):
            r, g = d["r"], d["g"]
            f.write(f"{r['id']}\t{r['va']:08x}\t{r['size']:x}\t{r['lib']}\t{r['obj']}\t{r['mangled']}\t"
                    f"{d['role']}\t{g['kind'] if g else 'T'}\t{g['gid'] if g else ''}\t"
                    f"{xcu_of.get(id(r), '')}\t{d['owner_m']}\t{d['owner']}\t{d['sema']}\t"
                    f"{d['conf']}\t{d['ev']}\n")

    ncg = collections.Counter()
    with open(os.path.join(MINED, "compgen.tsv"), "w") as f:
        f.write("id\tva\tsize\tkind\tlib\tobj\tfamily\tmangled\tsema\n")
        for r in rows:
            cg = compgen_name(r)
            if cg:
                ncg[cg[0]] += 1
                f.write(f"{r['id']}\t{r['va']:08x}\t{r['size']:x}\t{r['kind']}\t{r['lib']}\t{r['obj']}\t"
                        f"{cg[0]}\t{r['mangled']}\t{cg[1]}\n")

    kinds = collections.Counter(g["kind"] for g in groups)
    roles = collections.Counter(d["role"] for d in dyn if E_RE.match(d["r"]["mangled"]))
    owned = collections.Counter(g["conf"] for g in groups if g["kind"] in "AB" and g["owner_m"])
    ncand = sum(1 for o in objs for c in o["cands"] if c["need"] in "AB")
    cmem = sum(1 for d in dyn if d["role"] == "tatexit" and d["owner"])
    creg = sum(1 for d in dyn if d["role"] == "tatexit")
    log = lambda s: print(s, file=sys.stderr)  # noqa: E731
    log(f"$E rows {sum(roles.values())}: {dict(roles)}")
    log(f"groups {len(groups)}: {dict(kinds)}; predicted .CRT$XCU entries {len(wrappers)} "
        f"(the map's .CRT$XCU holds 3100)")
    log(f"A/B initializers with a public owner: {sum(owned.values())} of {kinds['A'] + kinds['B']} "
        f"(public class-typed candidates {ncand}) by conf {dict(sorted(owned.items()))}; "
        f"C members named {cmem}/{creg}")
    log(f"compgen rows {sum(ncg.values())}: {dict(ncg)}")
    if cht is None:
        return
    os.makedirs(CHT_OUT, exist_ok=True)
    with open(os.path.join(CHT_OUT, "dyninit.tsv"), "w") as f:
        f.write("slot\trole\trva\tsema\tmangled\tmap_group\tobj\trkind\tmap_kind\tconf\thint\n")
        for o in cht:
            f.write(f"{o['slot']}\t{o['role']}\t{o['rva']:08x}\t{o['sema']}\t{o['mangled']}\t{o['gid']}\t"
                    f"{o['obj']}\t{o['kind']}\t{o['mkind']}\t{o['conf']}\t{o['hint']}\n")
    st = info["stats"]
    log(f"CHT .CRT$XCU {info['xc_a']:08x}..{info['xc_z']:08x}: {info['n']} entries "
        f"{dict(info['kinds'])}, atexit {info['atexit']:08x}")
    log(f"aligned to map wrappers: {st['ok'] + st['bad']} ({st['ok']} kind-consistent), "
        f"release slots unaligned {st['none']}; C members spread by dtor thunk {info['spread']}")
    log(f"CHT rows {len(cht)}: {dict(collections.Counter(o['role'] for o in cht))}")


if __name__ == "__main__":
    main()
