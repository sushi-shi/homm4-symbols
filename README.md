# HoMM4 symbol remapping

A debug-build linker map of Heroes of Might and Magic IV (`heroes4_debug.map`, Oct 2002)
turned into names for real retail executables. This is not a decompilation. Background,
established facts and working rules for agents are in [AGENTS.md](AGENTS.md).

## Layout

| Path | What |
|---|---|
| `debug-symbols/heroes4_debug.map` | **The original symbols** (MSVC 6 map, 71,988 symbols) |
| `symbols/` | Everything mined from the map, as TSV (see below) |
| `maps/<target>/` | **Finished maps**, one directory per retail exe |
| `tools/` | All scripts |
| `debug-symbols/SHA256SUMS`, `binaries/SHA256SUMS` | Checksums of the local inputs below |

Local only (see `.gitignore`):
- the retail exes in `binaries/<target>/`;
- the `.7z` archives in `debug-symbols/`;
- `work/`, which holds everything regenerable: the Ghidra project, per-exe features, alignments,
  and the generated `.gzf` / IDA script.

### `symbols/` (target-independent, from the map)

| File | Rows |
|---|---|
| `symbols.tsv` | every public and static symbol. `id` = map line number (stable), section/offset/va/rva, gap-derived size, func/data, inline, static, lib, obj, mangled, demangled |
| `objs.tsv` | translation units in `.text` link order, with function counts |
| `segments.tsv` | the map's section contributions |
| `fixups_per_func.tsv` | decoded FIXUPS: number of absolute-address fixups per function |
| `dyninit.tsv` | every `_$E` static-init routine, with role (init/ctor/atexit/dtor/…), group, owner and a semantic name |
| `compgen.tsv` | short names for other compiler-generated symbols (vftables, RTTI, deleting dtors, strings, reals, …) |

### `maps/<target>/`

| File | What |
|---|---|
| `target.json` | exe path, sha256, image base, parents (where names come from) |
| `from-<parent>.tsv` | the hop: `src` (a `symbols.tsv` id when the parent is `map`, otherwise the parent's rva) → `dst_rva`, kind, tier, method, evidence, optional `name` override |
| `names.tsv` | composed result, which the generators consume: rva, size, kind (`func`/`vftable`/`data`), tier, mangled, demangled, chain |
| `manual.tsv` | optional hand fixes (rva, mangled, note); they win over everything |

Tiers: **A** exact structural evidence (vftable slot, vptr store, `.CRT$XCU` slot, RTTI name).
**B** well supported (ordered match with agreeing `ret N` that is also stable without vftable evidence). **C** best guess.

Current maps:

| Target | Exe | Names |
|---|---|---|
| `cht-1.x` | Traditional Chinese 1.x retail | 19,264 functions (A 7,388 · B 4,976 · C 6,900), 2,605 vftables, 266 globals |

## Tools

| Step | Tool | Reads → writes |
|---|---|---|
| mine | `mine_map.py` | map → `symbols/{symbols,objs,segments}.tsv` |
| | `mine_fixups.py` | map → `symbols/fixups_per_func.tsv` |
| | `name_dyninit.py` | symbols (+ target exe) → `symbols/{dyninit,compgen}.tsv`, `work/cht-1.x/dyninit.tsv` |
| target facts | `ghidra/ExportFeatures.java` | Ghidra program → `work/<t>/features/{functions,data}.tsv` |
| | `rtti.py` | exe → `work/<t>/features/{vftables,classes}.tsv` |
| | `ghidra/PaddedFunctionStarts.java` | adds functions Ghidra misses (setup only) |
| pair / align | `match_vftables.py` | → `work/<t>/vftables.tsv` |
| | `dyninit_join.py` | exact static-init pairs (a module used by `align.py` and `emit_edges.py`) |
| | `align.py` + `nw.c` | two-pass alignment → `work/<t>/align.tsv` (`--no-vft` → `align_novft.tsv`) |
| | `sig.py` | expected `ret N` from a demangled signature (models retail `/Gr` fastcall) |
| | `evaluate.py` | hierarchy consistency + stability report |
| map | `emit_edges.py` | → `maps/<t>/from-map.tsv` |
| | `compose.py` | hops + manual → `maps/<t>/names.tsv` |
| generate | `ghidra/ApplyNames.java` | names → Ghidra program `/<t>/heroes4_named`, packed to `work/<t>/heroes4_<t>.gzf` |
| | `gen_ida.py` | names → `work/<t>/ida_apply.py` (IDAPython) |
| infra | `paths.py`, `py` | project layout; offline nix Python with pefile+capstone |

## Running

```sh
tools/setup_target.sh cht-1.x   # once: build work/bin/nw, import+analyse into work/ghidra, add missed functions
tools/pipeline.sh cht-1.x       # everything else; ends with maps/cht-1.x/ and work/cht-1.x/*.gzf
```

There is no system Python. `tools/py` runs one from the nix store, offline.
