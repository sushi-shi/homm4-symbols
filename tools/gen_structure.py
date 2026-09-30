#!/usr/bin/env python3
"""Generate a flat, annotated source inventory, not compilable/recovered source.

usage: tools/py tools/gen_structure.py <target>
output: src-structure/game/*.cpp and sibling TSV ledgers
"""
import collections
import csv
import json
from pathlib import Path, PureWindowsPath
import re
import sys

import paths
import sig


def read_tsv(path):
    with open(path) as f:
        return list(csv.DictReader(f, delimiter="\t"))


def write_tsv(path, columns, rows):
    with open(path, "w") as f:
        writer = csv.DictWriter(f, columns, delimiter="\t", lineterminator="\n")
        writer.writeheader()
        writer.writerows(rows)


def without_templates(text):
    """Keep outer identifiers, ignoring std types used as template arguments."""
    out, depth = [], 0
    for char in text:
        if char == "<":
            depth += 1
        elif char == ">" and depth:
            depth -= 1
        elif not depth:
            out.append(char)
    return "".join(out)


def is_std(symbol, dyn):
    # A game function returning/taking std::string must remain in the tree.
    # Only skip when the entity itself belongs to std, never a substring match.
    if dyn:
        return dyn["owner"].startswith("std::")
    dem = symbol["demangled"]
    prefix, _ = sig.param_list(dem)
    if symbol["kind"] == "func" and prefix:
        for conv in sig.CONVS:
            if conv in prefix:
                return prefix.split(conv, 1)[1].strip().startswith("std::")
    if symbol["kind"] == "data":
        outer = without_templates(dem).split()
        return bool(outer and outer[-1].startswith("std::"))
    return False


def category(symbol, dyn):
    if dyn or symbol["mangled"].startswith("_$E"):
        return "static_initializers"
    if symbol["kind"] != "func":
        if symbol["mangled"].startswith("??_C"):
            return "string_literals"
        if symbol["mangled"].startswith(("??_7", "??_8", "??_R")):
            return "compiler_data"
        return "statics_and_globals"
    if symbol["static"] == "1" or "?%" in symbol["mangled"]:
        return "file_local_functions"
    if symbol["inline"] == "1":
        return "inline_and_template_functions"
    return "functions"


def display_name(symbol, dyn):
    if dyn:
        tier = dyn["conf"] if dyn["conf"] in {"A", "B", "C"} else "C"
        return dyn["sema"], tier, "dyninit: " + dyn["evidence"]
    if symbol["mangled"].startswith("_$E"):
        return "unresolved static initializer", "C", "role/owner unresolved; see map_id"
    return (symbol["demangled"] or symbol["mangled"], "A",
            "debug map symbol and object attribution; demangled where available")


def comment(text):
    # A trailing backslash would splice the next physical C++ comment line.
    return "// " + str(text).replace("\n", " ").replace("\r", " ").rstrip("\\") + "\n"


ANON_SCOPE = re.compile(r"\?%[^<>]*?\.(?:cpp|cxx|cc|c)\d+::")


def cpp_type(text):
    """Display normalization only; complete demanglings stay in the ledger."""
    text = ANON_SCOPE.sub("", text)
    text = re.sub(r"\b(?:class|struct|enum|union)\s+", "", text)
    text = re.sub(r"\b(?:__cdecl|__thiscall)\s*", "", text)
    text = text.replace("std::basic_string<char, std::char_traits<char>, std::allocator<char>>", "std::string")
    text = re.sub(r"\s+([*&])", r"\1", text)
    text = re.sub(r"([*&])(?=const\b)", r"\1 ", text)
    return text.strip()


def argument(type_name, index):
    """Add explicitly synthetic arg_N names, including pointer/array declarators."""
    arg = cpp_type(type_name)
    if arg == "...":
        return arg
    name = f"arg_{index}"
    # int (*)(int), void (__stdcall *)(void), int (&)[4].
    ptr = re.search(r"\(((?:__[a-z]+\s*)?[*&]+(?:\s*const)?)\)", arg)
    if ptr:
        return arg[:ptr.end() - 1] + " " + name + arg[ptr.end() - 1:]
    array = re.search(r"\s*(\[[^]]*\])+$", arg)
    if array:
        return arg[:array.start()] + " " + name + arg[array.start():].lstrip()
    # Preserve unusual abstract declarators rather than inventing their grammar.
    if "(" in without_templates(arg):
        return arg
    return arg + " " + name


def cpp_declaration(symbol):
    """Return a source-like declaration and whether its owner is anonymous.

    Compiler labels and complex declarators we cannot safely rewrite remain
    comments. This is a readable carcass, not a type/header reconstruction.
    """
    dem = symbol["demangled"]
    if not dem or "`" in dem or symbol["category"] in {"static_initializers", "compiler_data", "string_literals"}:
        return None, False
    dem = re.sub(r"^(?:public|protected|private):\s*", "", dem)
    if symbol["kind"] == "func":
        prefix, params = sig.param_list(dem)
        if prefix is None:
            return None, False
        conv = next((c for c in sig.CONVS if c in prefix), None)
        if conv is None:
            return None, False
        owner = prefix.split(conv, 1)[1].strip()
        # Function-pointer returns need a full C++ declarator parser. Keep those
        # in their original demangled form instead of generating broken stubs.
        if "(" in without_templates(prefix).replace("operator()", ""):
            return None, False
        anonymous = owner.startswith("?%")
        owner = cpp_type(owner)
        prefix = re.sub(r"^(?:(?:virtual|static)\s+)+", "", prefix)
        prefix = cpp_type(prefix)
        if symbol["static"] == "1" and "::" not in without_templates(owner):
            prefix = "static " + prefix
        args = [] if params in ("", "void") else [argument(p, i) for i, p in enumerate(sig.split_top(params))]
        tail = dem[len(sig.param_list(dem)[0]) + len(params) + 2:]
        inline = prefix + "(" + ", ".join(args) + ")" + tail
        if len(inline) <= 110:
            return inline, anonymous
        return prefix + "(\n" + ",\n".join("    " + a for a in args) + "\n)" + tail, anonymous
    # Out-of-class static member definitions omit the access/static modifiers.
    # Do not invent an initializer or a missing type.
    dem = re.sub(r"^static\s+", "", dem)
    decl = cpp_type(dem)
    if "(" in without_templates(decl) or " " not in decl or "?" in decl:
        return None, False
    if symbol["static"] == "1":
        decl = "static " + decl
    owner = without_templates(dem).split()[-1]
    return decl + ";", owner.startswith("?%")


def address_macros(meta):
    tag = meta["address_tag"]
    if not re.fullmatch(r"[A-Z][A-Z0-9_]*", tag):
        raise ValueError(f"invalid target address_tag: {tag}")
    return "VA_" + tag, "DATA_" + tag


def compiler_identity(symbol, mapping=None):
    """HoMM3-style kind/owner for helpers whose compiler role is known."""
    if symbol["kind"] != "func":
        return None
    if symbol["category"] == "static_initializers":
        name = (mapping or {}).get("name") or symbol["display_name"]
        if "$" not in name:
            return None
        owner, role = name.rsplit("$", 1)
        kind = {"init": "STATIC_INIT_DISPATCH", "tinit": "STATIC_INIT_DISPATCH",
                "ctor": "STATIC_CTOR", "atexit": "STATIC_ATEXIT", "tatexit": "STATIC_ATEXIT",
                "dtor": "STATIC_DTOR"}.get(role)
        if kind is None:
            return None
    elif symbol["mangled"].startswith(("??_G", "??_E")):
        prefix, _ = sig.param_list(symbol["demangled"])
        if prefix is None or "__thiscall" not in prefix or "::`" not in prefix:
            return None
        owner = prefix.split("__thiscall", 1)[1].rsplit("::`", 1)[0].strip()
        kind = "SCALAR_DELETING_DTOR" if symbol["mangled"].startswith("??_G") else "VECTOR_DELETING_DTOR"
    else:
        return None
    owner = cpp_type(owner)
    # Preserve complex names without adding aliases or letting template commas
    # become extra macro arguments. Simple qualified owners stay C++ tokens.
    if not re.fullmatch(r"[A-Za-z_]\w*(?:::[A-Za-z_]\w*)*", owner):
        owner = json.dumps(owner, ensure_ascii=False)
    return kind, owner


def write_address_header(root, meta):
    function_macro, data_macro = address_macros(meta)
    (root / "va.h").write_text(
        "// Generated source annotations, following the HoMM3 VA/DATA convention.\n"
        f"// Target: {meta['id']} ({meta['version']}); sha256={meta['sha256']}\n"
        f"// Absolute VAs = RVA + {meta['image_base']}; sizes are byte extents from retail records.\n"
        "// UNKNOWN_SIZE means no size is available; it never means zero bytes.\n"
        "// UNACCOUNTED marks an unmapped entry, not an address or a coverage credit.\n"
        "// Confidence and evidence accompany each use; these macros do not certify a match.\n"
        "// COMPGEN(addr, size, kind, owner): initialization helpers and deleting destructors.\n"
        "// Complex owner spellings are quoted to keep template commas in one argument.\n"
        "// DATA_COMPGEN(addr, symbol): quoted identity of RTTI, vtables, and string literals.\n"
        "#ifndef HOMM4_STRUCTURE_VA_H\n#define HOMM4_STRUCTURE_VA_H\n\n"
        f"#define {function_macro}(addr, size)\n"
        f"#define {function_macro}_COMPGEN(addr, size, kind, owner)\n"
        f"#define {data_macro}(addr)\n"
        f"#define {data_macro}_COMPGEN(addr, symbol)\n\n"
        "#endif\n")


def render_symbol(symbol, mappings, meta):
    s = symbol
    declaration, anonymous = cpp_declaration(s)
    provenance = "map symbol" if s["name_evidence"].startswith("debug map") else "dyninit; see ledger"
    out = ""
    function_macro, data_macro = address_macros(meta)
    compiler_data = s["kind"] != "func" and s["category"] in {"compiler_data", "string_literals"}

    def data_annotation(address):
        if compiler_data:
            name = json.dumps(cpp_type(s["display_name"]), ensure_ascii=False)
            return f"{data_macro}_COMPGEN({address}, {name})"
        return f"{data_macro}({address})"

    if mappings:
        for r in mappings:
            va = int(meta["image_base"], 16) + int(r["rva"], 16)
            if r["kind"] == "func":
                size = r.get("display_size") or r["size"]
                extent = f"0x{int(size, 16):x}" if size else "UNKNOWN_SIZE"
                compgen = compiler_identity(s, r)
                if compgen:
                    kind, owner = compgen
                    annotation = f"{function_macro}_COMPGEN(0x{va:08x}, {extent}, {kind}, {owner})"
                else:
                    annotation = f"{function_macro}(0x{va:08x}, {extent})"
            else:
                annotation = data_annotation(f"0x{va:08x}")
            evidence = r["method"]
            if r["evidence"] and r["evidence"] != evidence:
                evidence += "; " + r["evidence"]
            note = f"confidence:{r['tier']}; {evidence}; map:{s['id']}"
            if not s["name_evidence"].startswith("debug map"):
                note += f"; name:{s['name_tier']} ({provenance})"
            out += comment(note) + annotation + "\n"
    else:
        note = f"name:{s['name_tier']}; {provenance}; map:{s['id']}"
        if s["kind"] != "func":
            annotation = data_annotation("UNACCOUNTED")
        else:
            compgen = compiler_identity(s)
            if compgen:
                kind, owner = compgen
                annotation = f"{function_macro}_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, {kind}, {owner})"
            else:
                annotation = f"{function_macro}(UNACCOUNTED, UNKNOWN_SIZE)"
        out += comment(note) + annotation + "\n"
    if declaration:
        out += declaration + "\n"
        if s["kind"] == "func":
            out += "{\n    // Body unavailable.\n}\n"
        else:
            out = out.rstrip("\n") + " // Initial value unavailable.\n"
    elif not compiler_data and not all(compiler_identity(s, r) for r in (mappings or [None])):
        out += comment(cpp_type(s["display_name"]))
        if s["kind"] == "func":
            out += comment("Function body not reconstructed; signature retained as a comment.")
    # Owner-derived labels are not necessarily identical to the debug symbol.
    for r in mappings:
        if compiler_identity(s, r):
            continue  # kind/owner already carries the compiler-generated identity
        if r["name"] != s["mangled"] and r["name"] != s["display_name"]:
            out += comment(f"Retail label [{r['tier']}; {r['evidence'] or r['method']}]: {r['name']}")
    return out, anonymous


def counts(symbols, retail):
    skipped = [s for s in symbols if s["skipped"]]
    included = [s for s in symbols if not s["skipped"]]
    matched = [s for s in included if retail[s["id"]]]
    tiers = collections.Counter(min(r["tier"] for r in retail[s["id"]]) for s in matched)
    return dict(total=len(symbols), skipped_std=len(skipped), included=len(included),
                accounted=len(matched), unaccounted=len(included) - len(matched),
                A=tiers["A"], B=tiers["B"], C=tiers["C"])


def source_info(obj, symbols):
    stem = PureWindowsPath(obj).stem
    found = set()
    for symbol in symbols:
        for source in re.findall(r"\?%([^@]*?\.(?:cpp|cxx|cc|c))(?=\d|@)", symbol["mangled"]):
            if PureWindowsPath(source).stem.casefold() == stem.casefold():
                found.add(source)
    if found:
        # Preserve source basenames when the map embeds them; original directories
        # stay evidence only. The output is deliberately flat.
        names = {PureWindowsPath(p).name.casefold() for p in found}
        if len(names) != 1:
            raise ValueError(f"conflicting source names for {obj}: {sorted(found)}")
        return next(iter(names)), "A", "anonymous-namespace source tag: " + "; ".join(sorted(found))
    return stem + ".cpp", "B", "inferred .cpp basename from map object; extension not recorded"


def render_unit(path, obj, source_tier, source_evidence, symbols, retail, target, meta):
    stats = counts(symbols, retail)
    function_macro, data_macro = address_macros(meta)
    with open(path, "w") as f:
        for line in [
            f"{path.name} — generated source carcass, not a buildable reconstruction.",
            f"Source [{source_tier}]: {source_evidence}",
            f"Target: {target}; sha256={meta['sha256']}",
            f"Accounted {stats['accounted']}/{stats['included']} (A:{stats['A']} B:{stats['B']} C:{stats['C']}); "
            f"unaccounted {stats['unaccounted']}; skipped std {stats['skipped_std']}.",
            "Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.",
            "map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).",
            f"{function_macro}/{data_macro}: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.",
        ]:
            f.write(comment(line))
        f.write('\n#include "../va.h"\n')
        groups = collections.defaultdict(list)
        for symbol in symbols:
            if not symbol["skipped"]:
                groups[symbol["contrib"]].append(symbol)
        for group, entries in groups.items():
            f.write("\n" + comment(f"=== {group} ({len(entries)} symbols) ==="))
            anonymous_open = False
            for s in sorted(entries, key=lambda s: (int(s["va"], 16), int(s["id"]))):
                block, anonymous = render_symbol(s, retail[s["id"]], meta)
                if anonymous != anonymous_open:
                    f.write("\nnamespace {\n" if anonymous else "\n} // anonymous namespace\n")
                    anonymous_open = anonymous
                f.write("\n" + block)
            if anonymous_open:
                f.write("\n} // anonymous namespace\n")


def main(target):
    meta = paths.target_meta(target)
    address_macros(meta)
    all_symbols = read_tsv(paths.symbols("symbols.tsv"))
    by_id = {s["id"]: s for s in all_symbols}
    objects = {s["obj"]: s for s in read_tsv(paths.symbols("objs.tsv")) if not s["lib"]}
    dyn = {s["id"]: s for s in read_tsv(paths.symbols("dyninit.tsv"))}
    names = read_tsv(paths.maps(target, "names.tsv"))
    features = read_tsv(paths.features(target, "functions"))
    function_sizes = {int(f["rva"], 16): f["size"] for f in features}
    retail = collections.defaultdict(list)
    for r in names:
        if r["tier"] not in {"A", "B", "C"} or not r["method"]:
            raise ValueError(f"retail name missing tier/method: {r['rva']}")
        if r["map_id"] not in by_id:
            raise ValueError(f"retail name has unknown map_id: {r['rva']}")
        retail[r["map_id"]].append(dict(r, display_size=r["size"] or function_sizes.get(int(r["rva"], 16), "")))
    game = []
    units = collections.defaultdict(list)
    for s in all_symbols:
        if s["lib"]:
            continue
        d = dyn.get(s["id"])
        s["skipped"] = is_std(s, d)
        s["category"] = category(s, d)
        s["display_name"], s["name_tier"], s["name_evidence"] = display_name(s, d)
        game.append(s)
        units[s["obj"]].append(s)
    root = Path(paths.STRUCTURE)
    game_dir = root / "game"
    game_dir.mkdir(parents=True, exist_ok=True)
    write_address_header(root, meta)
    unit_rows, filenames = [], {}
    for obj, symbols in sorted(units.items(), key=lambda kv: (int(objects.get(kv[0], {}).get("idx", 1 << 30)), kv[0])):
        filename, tier, evidence = "", "", "object owner is not a source filename"
        if obj.endswith(".obj") and PureWindowsPath(obj).name == obj:
            filename, tier, evidence = source_info(obj, symbols)
            if filename.casefold() in {p.casefold() for p in filenames.values()}:
                raise ValueError(f"duplicate output filename: {filename}")
            filenames[obj] = filename
            render_unit(game_dir / filename, obj, tier, evidence, symbols, retail, target, meta)
        unit_rows.append(dict(obj=obj, source=f"game/{filename}" if filename else "",
                              source_tier=tier, source_evidence=evidence,
                              link_index=objects.get(obj, {}).get("idx", ""), **counts(symbols, retail)))
    write_tsv(root / "units.tsv", list(unit_rows[0]), unit_rows)

    # Keep skipped symbols and unowned common data in the ledger. One row per
    # map symbol/address pair, with an empty retail side for unpaired symbols.
    ledger = []
    for s in game:
        for r in retail[s["id"]] or [{}]:
            ledger.append(dict(
                map_id=s["id"], obj=s["obj"], source="game/" + filenames[s["obj"]] if s["obj"] in filenames else "",
                category=s["category"], status="skipped_std" if s["skipped"] else "accounted" if r else "unaccounted",
                debug_va=s["va"], section=s["contrib"], map_static=s["static"], inline=s["inline"],
                debug_name=s["display_name"], debug_name_tier=s["name_tier"], debug_name_evidence=s["name_evidence"],
                raw_map_name=s["mangled"], raw_map_tier="A", raw_map_evidence=f"heroes4_debug.map line {s['id']}",
                retail_rva=r.get("rva", ""), retail_kind=r.get("kind", ""), retail_name=r.get("name", ""),
                retail_tier=r.get("tier", ""), retail_method=r.get("method", ""),
                retail_evidence=r.get("evidence") or r.get("method", "")))
    write_tsv(root / "symbols.tsv", list(ledger[0]), ledger)

    retail_rows = []
    named_functions = {int(r["rva"], 16): r for r in names if r["kind"] == "func"}
    feature_rvas = {int(f["rva"], 16) for f in features}
    for f in sorted(features, key=lambda f: int(f["rva"], 16)):
        r = named_functions.get(int(f["rva"], 16), {})
        s = by_id.get(r.get("map_id"))
        status = ("unaccounted" if not s else "library" if s["lib"] else
                  "skipped_std" if s["skipped"] else "game" if s["obj"] in filenames else "unowned")
        retail_rows.append(dict(rva=f["rva"], size=f["size"], status=status,
                                source="game/" + filenames[s["obj"]] if s and not s["lib"] and s["obj"] in filenames else "",
                                map_id=r.get("map_id", ""), name=r.get("name", ""), tier=r.get("tier", ""),
                                method=r.get("method", ""), evidence=r.get("evidence") or r.get("method", "")))
    write_tsv(root / "retail_functions.tsv", ["rva", "size", "status", "source", "map_id", "name", "tier", "method", "evidence"], retail_rows)
    coverage = []
    for metric, value in [("total", len(all_symbols)), ("game", len(game)),
                          ("excluded_library", len(all_symbols) - len(game))]:
        coverage.append(dict(scope="input_map", metric=metric, count=value,
                             meaning="distinct debug map IDs; library symbols are outside the game tree"))
    for scope, symbols in [("game_map", game)] + [(k, [s for s in game if s["category"] == k])
                                                 for k in sorted({s["category"] for s in game})]:
        for metric, value in counts(symbols, retail).items():
            coverage.append(dict(scope=scope, metric=metric, count=value,
                                 meaning="distinct debug map IDs; accounted = proposed retail match, not verification"))
    for metric, value in [("source_files", len(filenames)), ("objects_without_source", len(units) - len(filenames))]:
        coverage.append(dict(scope="structure", metric=metric, count=value, meaning="flat synthetic game directory"))
    for metric, value in [("total", len(retail_rows)), *sorted(collections.Counter(r["status"] for r in retail_rows).items())]:
        coverage.append(dict(scope="retail_functions", metric=metric, count=value,
                             meaning="exported function starts, including libraries and EH funclets; no inferred game ownership"))
    coverage.append(dict(scope="retail_functions", metric="named_without_feature", count=len(set(named_functions) - feature_rvas),
                         meaning="named addresses absent from function export; excluded from retail denominator"))
    write_tsv(root / "coverage.tsv", ["scope", "metric", "count", "meaning"], coverage)
    print(f"{len(filenames)} source inventories -> {root}")
    print("Game map: " + "; ".join(f"{k}={v}" for k, v in counts(game, retail).items()))
    print("Retail functions: " + str(dict(collections.Counter(r["status"] for r in retail_rows))))


if __name__ == "__main__":
    if len(sys.argv) != 2:
        sys.exit("usage: tools/py tools/gen_structure.py <target>")
    main(sys.argv[1])
