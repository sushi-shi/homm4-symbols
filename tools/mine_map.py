#!/usr/bin/env python3
"""Parse heroes4_debug.map into symbols/{segments,symbols,objs}.tsv.

symbols.tsv: one row per public/static symbol, ids stable (map line number).
objs.tsv:    translation units / library members in .text link order.
"""
import collections
import os
import re
import subprocess
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import paths  # noqa: E402
MAP = paths.MAPFILE
OUT = paths.SYMBOLS
IMAGE_BASE = 0x400000

SEG_RE = re.compile(r"^ ([0-9a-f]{4}):([0-9a-f]{8}) ([0-9a-f]{8})H (\S+)\s+(\S+)$")
SYM_RE = re.compile(r"^ ([0-9a-f]{4}):([0-9a-f]{8})\s+(\S+)\s+([0-9a-f]{8})( f)?( i)?\s+(\S+)$")


def parse():
    segments, symbols = [], []
    mode = None
    with open(MAP, encoding="ascii") as f:
        for lineno, line in enumerate(f, 1):
            line = line.rstrip("\r\n")
            if line.startswith(" Start         Length"):
                mode = "seg"; continue
            if "Publics by Value" in line:
                mode = "pub"; continue
            if line.startswith(" Static symbols"):
                mode = "static"; continue
            if line.startswith(" entry point"):
                mode = None; continue
            if line.startswith("FIXUPS"):
                break
            if mode == "seg":
                m = SEG_RE.match(line)
                if m:
                    segments.append(dict(sec=int(m[1], 16), off=int(m[2], 16),
                                         length=int(m[3], 16), name=m[4], cls=m[5]))
            elif mode in ("pub", "static"):
                m = SYM_RE.match(line)
                if not m:
                    if line.strip():
                        sys.exit(f"unparsed line {lineno}: {line!r}")
                    continue
                objcol = m[7]
                lib, obj = objcol.split(":", 1) if ":" in objcol else ("", objcol)
                symbols.append(dict(id=lineno, sec=int(m[1], 16), off=int(m[2], 16),
                                    va=int(m[4], 16), name=m[3], func=bool(m[5]),
                                    inline=bool(m[6]), static=(mode == "static"),
                                    lib=lib, obj=obj))
    return segments, symbols


def demangle(names):
    todo = [n for n in names if n.startswith("?")]
    res = subprocess.run(["llvm-undname"], input="\n".join(todo) + "\n",
                         capture_output=True, text=True).stdout.splitlines()
    # llvm-undname echoes the input line, then prints the result (or an error).
    out, i = {}, 0
    for n in todo:
        while i < len(res) and res[i] != n:
            i += 1
        i += 1
        dem = res[i] if i < len(res) else ""
        out[n] = "" if dem.startswith("error") else dem
    return out


def main():
    segments, symbols = parse()
    os.makedirs(OUT, exist_ok=True)

    # Section start VA: derived from any symbol (va - off) and checked for consistency.
    sec_base = {}
    for s in symbols:
        b = s["va"] - s["off"]
        if sec_base.setdefault(s["sec"], b) != b:
            sys.exit(f"inconsistent base for section {s['sec']}")
    for g in segments:
        g["va"] = sec_base.get(g["sec"], 0) + g["off"] if g["sec"] in sec_base else None

    def contribution(sec, off):
        for g in segments:
            if g["sec"] == sec and g["off"] <= off < g["off"] + max(g["length"], 1):
                return g
        return None

    # Sizes: gap to next distinct address in the same section, clamped to contribution end.
    by_sec = collections.defaultdict(list)
    for s in symbols:
        by_sec[s["sec"]].append(s)
    for sec, lst in by_sec.items():
        lst.sort(key=lambda s: (s["off"], s["id"]))
        offs = sorted({s["off"] for s in lst})
        nxt = {a: b for a, b in zip(offs, offs[1:])}
        for s in lst:
            g = contribution(sec, s["off"])
            s["contrib"] = g["name"] if g else "?"
            end = g["off"] + g["length"] if g else s["off"]
            s["size"] = min(nxt.get(s["off"], end), end) - s["off"]

    dem = demangle([s["name"] for s in symbols])

    with open(os.path.join(OUT, "segments.tsv"), "w") as f:
        f.write("sec\toff\tlength\tva\tname\tclass\n")
        for g in segments:
            va = f"{g['va']:08x}" if g["va"] is not None else ""
            f.write(f"{g['sec']}\t{g['off']:08x}\t{g['length']:08x}\t{va}\t{g['name']}\t{g['cls']}\n")

    symbols.sort(key=lambda s: (s["va"], s["id"]))
    with open(os.path.join(OUT, "symbols.tsv"), "w") as f:
        f.write("id\tsec\toff\tva\trva\tsize\tcontrib\tkind\tinline\tstatic\tlib\tobj\tmangled\tdemangled\n")
        for s in symbols:
            f.write(f"{s['id']}\t{s['sec']}\t{s['off']:08x}\t{s['va']:08x}\t{s['va'] - IMAGE_BASE:08x}\t"
                    f"{s['size']:x}\t{s['contrib']}\t{'func' if s['func'] else 'data'}\t"
                    f"{int(s['inline'])}\t{int(s['static'])}\t{s['lib']}\t{s['obj']}\t"
                    f"{s['name']}\t{dem.get(s['name'], '')}\n")

    # Objs in .text link order (first code symbol).
    objs = collections.OrderedDict()
    for s in symbols:
        if s["sec"] != 1 or s["contrib"] != ".text":
            continue
        key = (s["lib"], s["obj"])
        o = objs.setdefault(key, dict(lib=s["lib"], obj=s["obj"], start=s["va"], end=0,
                                      plain=0, inline=0, static=0, dyninit=0, bytes_plain=0))
        o["end"] = max(o["end"], s["va"] + s["size"])
        if s["static"]:
            o["static"] += 1
            if s["name"].startswith("_$E"):
                o["dyninit"] += 1
        elif s["inline"]:
            o["inline"] += 1
        else:
            o["plain"] += 1
            o["bytes_plain"] += s["size"]
    # Check objs are contiguous (no interleaving) in .text.
    order = [(s["lib"], s["obj"]) for s in symbols if s["sec"] == 1 and s["contrib"] == ".text"]
    runs = [k for i, k in enumerate(order) if i == 0 or order[i - 1] != k]
    split = [k for k, c in collections.Counter(runs).items() if c > 1]
    with open(os.path.join(OUT, "objs.tsv"), "w") as f:
        f.write("idx\tlib\tobj\tstart_va\tend_va\tn_plain\tn_inline\tn_static\tn_dyninit\tplain_bytes\n")
        for i, o in enumerate(objs.values()):
            f.write(f"{i}\t{o['lib']}\t{o['obj']}\t{o['start']:08x}\t{o['end']:08x}\t{o['plain']}\t"
                    f"{o['inline']}\t{o['static']}\t{o['dyninit']}\t{o['bytes_plain']:x}\n")
    print(f"{len(symbols)} symbols, {len(objs)} objs in .text, {len(split)} non-contiguous objs",
          file=sys.stderr)
    for k in split[:20]:
        print("  split:", k, file=sys.stderr)


if __name__ == "__main__":
    main()
