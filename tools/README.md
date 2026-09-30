# Building the maps

Everything below is only needed to regenerate `maps/<target>/`.

## Layout

| Path | What |
|---|---|
| `symbols/` | The original map and everything mined from it ([README](../symbols/README.md)) |
| `maps/<target>/` | Finished maps, one directory per retail exe |
| `src-structure/` | Flat game source inventories and coverage ledgers for the selected target |
| `tools/` | All scripts |
| `binaries/<target>/` | Retail exes (local only; hashes in `maps/<target>/target.json`) |
| `work/` | Everything regenerable (local only): Ghidra project, per-exe features, alignments, generated `.gzf` / IDA script |

## `maps/<target>/`

| File | What |
|---|---|
| `target.json` | exe path, sha256, image base, `source` (`map`, or the target whose names were carried over) |
| `names.tsv` | the complete map, self-contained: `rva, size, kind (func/vftable/data), tier, name, demangled, method, evidence, map_id, map_va, obj, score, via` |
| `manual.tsv` | optional hand fixes (rva, mangled, note); they win over everything |

`name` is the mangled map name, except static-init routines, which get owner-based names.
`target.json` also sets `address_tag` (currently `CHT_1`) for source address annotations.
`map_id`/`map_va`/`obj` point back to the original symbol. `via` is empty for names taken straight
from the map and holds the source target's rva for names carried over from another exe.

Tiers: **A** exact structural evidence (vftable slot, vptr store, `.CRT$XCU` slot, RTTI name).
**B** ordered match with agreeing `ret N`, stable without vftable evidence. **C** best guess.
cht-1.x: A 7,642 · B 5,148 · C 6,621.

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
| | `rtti_join.py` | type names + checked COL/CHD/base-array/BCD pointers → unique RTTI data pairs for `emit_map.py` |
| | `align.py` + `nw.c` | two-pass alignment → `work/<t>/align.tsv` (held-out runs: `--no-vft`, `--no-retn`) |
| | `sig.py` | expected `ret N` from a demangled signature (models retail `/Gr` fastcall) |
| | `evaluate.py` | accuracy report: vftable hierarchy, call-graph consistency, held-out `ret N`, stability |
| map | `emit_map.py` | alignment + static-init pairs + vftables + RTTI descriptors + manual → `maps/<t>/names.tsv` |
| generate | `ghidra/ApplyNames.java` | names → Ghidra program `/<t>/heroes4_named`, packed to `work/<t>/heroes4_<t>.gzf` |
| | `gen_ida.py` | names → `work/<t>/ida_apply.idc` (IDC, runs in IDA Free too) |
| | `gen_structure.py` | symbols + names + function features → `src-structure/` (flat source inventories and coverage) |
| infra | `paths.py`, `py` | project layout; offline nix Python with pefile+capstone |

## Running

```sh
tools/setup_target.sh cht-1.x   # once: build work/bin/nw, import+analyse into work/ghidra, add missed functions
tools/pipeline.sh cht-1.x       # everything else; ends with maps/cht-1.x/ and work/cht-1.x/*.gzf
```

There is no system Python. `tools/py` runs one from the nix store, offline.

## Synthetic game structure

`tools/py tools/gen_structure.py cht-1.x` builds `src-structure/` in the repository.
Regenerating for another target replaces the retail annotations and counters in this tree.

- `game/`: one annotated source inventory per non-library `.obj`, in a flat directory.
  Source filenames embedded in anonymous-namespace tags take precedence; otherwise `.cpp`
  is inferred from the object basename. Each file records that evidence and confidence.
  The data-only `circle_calculator.obj` is included alongside the 585 code objects.
- `va.h`: no-op address annotations following HoMM3's `VA(addr, size)` / `DATA(addr)` convention.
  For this target they are `VA_CHT_1(addr, size)` and `DATA_CHT_1(addr)`, using absolute
  virtual addresses (`image_base + RVA`). Confidence is a separate `confidence:A/B/C` comment.
  Function sizes use `names.tsv`, falling back to the exported function extent; `UNKNOWN_SIZE`
  explicitly marks an unavailable extent. Unmapped data uses `DATA_CHT_1(UNACCOUNTED)`,
  preceded by its name provenance; the sentinel is not an address or a coverage credit.
  Unmapped functions likewise use `VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)`; generated helpers
  use `VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, kind, owner)`.
  Known generated functions use `VA_CHT_1_COMPGEN(addr, size, kind, owner)`: static
  initialization dispatchers, constructors, atexit/destructor helpers, and scalar/vector
  deleting destructors. Complex owners are quoted instead of inventing alias tokens.
  Generated data uses `DATA_CHT_1_COMPGEN(addr, "symbol")` for RTTI descriptors, vtables,
  vbtables, and string literals. The name is part of the annotation, with `UNACCOUNTED`
  replacing the address when unmapped. Ordinary globals keep `DATA_CHT_1` and their
  declaration (or original symbol comment when its declaration cannot be recovered).
- `units.tsv`: source paths, link indices where known, and counters per object. `<common>`
  has no invented source file; its symbols remain in the ledger.
- `symbols.tsv`: every game map symbol, including skipped `std` entries and unmatched names,
  with debug provenance and any retail assignments. Multiple retail assignments produce
  multiple rows; counters count distinct map IDs, not ledger rows.
- `coverage.tsv`: totals and category breakdowns. `accounted` means a proposed retail
  assignment of any tier; A/B/C split those IDs by their best current assignment tier.
  `total = skipped_std + included`, `included = accounted + unaccounted`.
- `retail_functions.tsv`: the other direction of coverage, one exported retail function
  start per row, classified as game, skipped std, library, unowned, or unaccounted.
  This denominator includes EH funclets and library functions; it is not a game-only count.
  Named addresses missing from the feature export are counted separately in `coverage.tsv`.

The `.cpp` inventories use Vostok-style source carcasses: C++ signatures with braced stubs,
file-local `static` functions, and data declarations. `arg_N` parameter names are synthetic;
stub bodies explicitly say they are unavailable. Access/virtual/member-static modifiers
are removed from out-of-class definitions, `__cdecl`/`__thiscall` are omitted in the display,
and the exact standard `basic_string<char, char_traits<char>, allocator<char>>` spelling is
shown as `std::string`. Anonymous owners use anonymous namespace blocks. Full original
signatures remain in `symbols.tsv`. Known generated function roles use the `COMPGEN` macro;
other compiler labels and signatures that cannot safely be rendered as C++ stay comments.
The comment directly above each address macro carries confidence, evidence, and `map:N`
as the ledger key.
Unmapped entries retain their name provenance in one comment. Inferred initializer-name
confidence is also retained separately from the confidence in a retail address assignment.
TSV address columns and RTTI pointer-chain evidence retain their RVA convention; debug VA
columns remain explicitly named. Compiler-generated functions still denote code; a commented
spelling does not imply the absence of a machine-code body.
Initializer names with unspecified confidence are conservatively tier C.
The files are not buildable reconstructions: class layouts, headers, initial values, locals,
and source-line order remain unknown.
Inline symbols belong to the map's selected object, which does not prove where their source
definition lived. Map address order is retained within each binary section; object link order is in
`units.tsv`. Missing matches can reflect inlining, folding, removal, or an unresolved match.

Debug-name tiers describe provenance only and never promote a retail mapping. Retail tiers
and methods are copied from `names.tsv`; when its evidence cell is empty, the recorded method
(for example `rtti-name`) supplies the evidence description. `std` filtering uses the entity's
own scope, so game functions taking or returning standard-library types remain visible.
Skipped names stay in the ledger and counters. Library objects are excluded and counted.
These are regenerable inventories; edit the generator or mapping inputs, not the output files.

Check the inventory logic with `tools/py -m unittest discover -s tools -p 'test_gen_structure.py'`.

## RTTI data labels

`rtti_join.py` checks TypeDescriptor strings and headers directly in the retail image, then
walks exact-name vftable anchors through their Complete Object Locators, Class Hierarchy
Descriptors, base arrays, and Base Class Descriptors. Every read is section-bounded; base
counts/subtrees and the complete-class entry are checked. BCD names must agree with the
descriptor's own type, displacement tuple, and attributes, including negative offsets.
Anonymous-namespace build tags use the existing normalization from `match_vftables.py`.

Only unique map identities with a unique retail address are tier A. Ambiguous copies and
address aliases remain unpaired; existing emitted labels take precedence. Evidence records
the observed type names and pointer chain. This adds data labels, not inferred methods or
class members. Run `tools/py tools/rtti_join.py cht-1.x` to inspect its TSV proposals, and
`tools/py -m unittest discover -s tools -p 'test_rtti_join.py'` for pointer-validation tests.
