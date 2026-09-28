# HoMM4 symbol remapping

A debug-build linker map of Heroes of Might and Magic IV (`heroes4_debug.map`, Oct 2002)
turned into names for real retail executables. This is not a decompilation.

## Layout

| Path | What |
|---|---|
| `symbols/` | **The original map** and everything mined from it ([README](symbols/README.md)) |
| `maps/<target>/` | **Finished maps**, one directory per retail exe |
| `tools/` | All scripts |

Local only (see `.gitignore`):
- the retail exes in `binaries/<target>/` (hashes in `maps/<target>/target.json`);
- `work/`, which holds everything regenerable: the Ghidra project, per-exe features, alignments,
  and the generated `.gzf` / IDA script.

### `maps/<target>/`

| File | What |
|---|---|
| `target.json` | exe path, sha256, image base, `source` (`map`, or the target whose names were carried over) |
| `names.tsv` | **the complete map**, self-contained: `rva, size, kind (func/vftable/data), tier, name, demangled, method, evidence, map_id, map_va, obj, score, via` |
| `manual.tsv` | optional hand fixes (rva, mangled, note); they win over everything |

`name` is the mangled map name, except static-init routines, which get owner-based names. `map_id`/`map_va`/`obj`
point back to the original symbol. `via` is empty for names taken straight from the map and holds the
source target's rva for names carried over from another exe.

Tiers: **A** exact structural evidence (vftable slot, vptr store, `.CRT$XCU` slot, RTTI name).
**B** well supported (ordered match with agreeing `ret N` that is also stable without vftable evidence). **C** best guess.

Current maps:

| Target | Exe | Names |
|---|---|---|
| `cht-1.x` | Traditional Chinese 1.x retail | 19,411 functions (A 7,642 · B 5,148 · C 6,621), 2,605 vftables, 266 globals |

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
| | `dyninit_join.py` | exact static-init pairs (a module used by `align.py` and `emit_map.py`) |
| | `align.py` + `nw.c` | two-pass alignment → `work/<t>/align.tsv` (held-out runs: `--no-vft`, `--no-retn`) |
| | `sig.py` | expected `ret N` from a demangled signature (models retail `/Gr` fastcall) |
| | `evaluate.py` | accuracy report: vftable hierarchy, call-graph consistency, held-out `ret N`, stability |
| map | `emit_map.py` | alignment + static-init pairs + vftables + manual → `maps/<t>/names.tsv` |
| generate | `ghidra/ApplyNames.java` | names → Ghidra program `/<t>/heroes4_named`, packed to `work/<t>/heroes4_<t>.gzf` |
| | `gen_ida.py` | names → `work/<t>/ida_apply.py` (IDAPython) |
| infra | `paths.py`, `py` | project layout; offline nix Python with pefile+capstone |

## Running

```sh
tools/setup_target.sh cht-1.x   # once: build work/bin/nw, import+analyse into work/ghidra, add missed functions
tools/pipeline.sh cht-1.x       # everything else; ends with maps/cht-1.x/ and work/cht-1.x/*.gzf
```

There is no system Python. `tools/py` runs one from the nix store, offline.
