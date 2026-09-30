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
| `manual.tsv` | optional hand fixes (rva, mangled, note); override proposals, subject to review vetoes/caps |
| `reviews.tsv` | hash-bound review evidence; exact-identity vetoes and C caps run last, including after manual overrides |
| `vftable-functions.tsv` / `.json` | structural function certificates and hashes of their executable, inputs, and checking code |

`name` is the mangled map name, except static-init routines, which get owner-based names.
`target.json` also sets `address_tag` (currently `CHT_1`) for source address annotations.
`map_id`/`map_va`/`obj` point back to the original symbol. `via` is empty for names taken straight
from the map and holds the source target's rva for names carried over from another exe.

Tiers: **A** exact structural evidence (vftable slot, vptr store, `.CRT$XCU` slot, RTTI name).
**B** ordered match with agreeing `ret N`, stable without vftable evidence. **C** uncertain.
**D** unreviewed function proposal, not a best guess. Both targets set
`unreviewed_function_tier: D`: after exact-identity review actions, all functions without a
matching recorded review or checked vftable function certificate become D, including otherwise
A/B proposals and manual overrides.
Checked structural data/vftable labels retain their existing tiers.
cht-1.x functions after vftable recovery: A 371 · B 32 · C 71 · D 18,845.
These tiers describe heuristic evidence, not measured name precision or manual approval.

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
| | `vftable_functions.py` | executable + RTTI hierarchy + map declarations → checked virtual-function certificates |
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
If the current nixpkgs expression no longer resolves to cached packages, `HOMM4_PYTHON`
can select an existing Nix Python executable with its dependencies supplied by `PYTHONPATH`.

### Retail assembly comparison (Complete)

`complete-3.0` is the English standalone executable from the Complete DVD, identified by
its SHA-256 in `maps/complete-3.0/target.json`. It is not yet verified as a GOG
binary. Its `source` is `cht-1.x`. `align.py --source` compares the two retail executables,
and `emit_map.py` combines the transferred functions with direct structural labels:

```sh
tools/py tools/rtti.py complete-3.0
tools/py tools/match_vftables.py complete-3.0
tools/py tools/align.py complete-3.0 --source cht-1.x
tools/py tools/align.py complete-3.0 --source cht-1.x --no-retn
tools/py tools/evaluate.py complete-3.0
tools/py tools/emit_map.py complete-3.0
tools/py tools/gen_ida.py complete-3.0
```

Both targets need function feature exports first. The Complete import was followed by
`PaddedFunctionStarts.java 4fa51b` (9,061 additional starts) and `ExportFeatures.java` on the
unnamed program. This is a conservative scan limit before the dense tail region, not a
claim that `4fa51b` is an exact EH boundary. `padded_scan_end_rva` records it. Once setup is
done, `tools/pipeline.sh complete-3.0` runs the release branch, refreshes the evaluation
snapshot, and exports IDA/Ghidra with all tiers. It does not regenerate `src-structure/`.

`release_align.py` disassembles contiguous function bodies with Capstone. Its tokens retain
opcodes, registers, constants, field/stack offsets and local branch destinations; image
addresses and external control-flow destinations are abstracted. RET cleanup is excluded
from tokens in both runs and optionally checked separately. Unique normalized bodies of
at least eight instructions and 32 bytes anchor the correspondence. Their longest increasing
subsequence bounds ordered searches, using the same `nw.c` core's sparse-candidate mode.
Large unanchored gaps, ties, bodies below four instructions and discontiguous bodies remain unmatched.

Ordered candidates need at least 80% instruction-sequence similarity and a 3-point margin
over eligible alternatives sharing either endpoint. Hop tier B requires a unique body or at least
95% similarity and a 10-point margin, sufficient body size, and matching known cleanup.
The emitter further caps this by the CHT source tier and demotes pairs unstable without
cleanup to C. All source name/provenance fields are copied into the complete target file;
`via` holds the CHT RVA. Source/target hashes, feature hashes, source-name hash and pair-file
hashes are checked before emission. An exactly matched body does not prove its source name.

RTTI slots and call targets never enter assembly scores. `evaluate.py` reports these checks
on **raw pairs before emission**, plus block counts, held-out cleanup and ordered inversions.
Known one-to-one slot contradictions veto the transferred name at emission time and are
recorded in `work/complete-3.0/release-rejected.tsv`. The raw report retains these failures;
it is not a post-filter precision claim. The first pass had 5,932 body pairs and emitted 4,915
function names (B 1,408 / C 3,507), after withholding two named slot warnings. The manual
review and vftable recovery now leave 4,823 functions (A 116 / B 30 / C 106 / D 4,571). R26 demonstrates a false slot warning:
equal extracted table lengths do not prove that each method kept the same index.

### Vftable function recovery

With `vftable_function_recovery: true`, `emit_map.py` regenerates certificates before applying
the final review policy. This restores 314 CHT D proposals to A. Complete has 116 certified A
functions: 93 formerly D and 23 formerly B. No names are added or removed by this recovery.

`vftable_functions.py` checks the executable hash, RTTI hierarchy pointer chain, and raw slot
pointers. Runtime class names identify the class; secondary-table ordering is not a method
identity. An ordinary virtual proposal qualifies when exactly one compatible map declaration
exists across the class and its ancestors (accounting for overrides), and exactly one body
has that stack cleanup across the class's observed tables. Unknown signatures/bodies compete
instead of being ignored. Alternatively, an already supported exact manual identity can supply
the method identity, with runtime membership and cleanup checked again. Ambiguous classes,
construction tables, deleting destructors, folded bodies, and duplicate slots are held out.
Simple adjustment thunks are followed when reading slots, but are not themselves promoted.

Complete additionally needs a source A certificate, at least 95% assembly similarity, hop B,
and the same pair in the run without cleanup scoring. Slot numbers need not remain equal.
Certificates record class/table/slot evidence, body hashes, and hashes of the inputs and code;
stale certificates are rejected. Manual vetoes and C caps still run last.

This is automated structural evidence, not a new manual review or measured precision. There
is no debug executable providing raw debug slot targets, and virtual declarations may differ
between builds. Mere class membership never suffices for an unreviewed method. Cleanup helps
select these certificates, so final-tier cleanup agreement is not an independent accuracy test.
The frozen review ledger remains intact; coverage distinguishes 93 `structural-A` cases from
4,571 `unreviewed-D` cases, alongside the unchanged 251 manual verdicts.

### Manual assembly review

The exhaustive follow-up freezes all **4,915** pre-audit function proposals in
`review-roster.tsv`, with executable, baseline-map and roster hashes in `review-roster.json`.
`tools/py tools/review_progress.py complete-3.0 --next 20` updates `review-coverage.tsv`
and prepares the next unreviewed raw-body packets in address order. It does not assign
verdicts. The immutable roster includes subsequently withheld names so removing labels
cannot shrink the denominator. Identity matching includes both RVAs, map ID and name;
reviews must match the target executable hash. Unresolved reviews remain open separately
from never-inspected rows. Review was closed at the user's request: 101 supported,
92 rejected, 58 unresolved, 4,664 unreviewed-D. F00001–F00222 are inspected
(F00049/F00169 were already covered by R10/R16),
plus the caller follow-up F03368. Together these add 221 inspections after the initial audit.
Verdicts are the assistant's reading of assembly, not independent human certification.
`review-closure.json` records the change of scope; no further exhaustive review is scheduled.
The frozen roster and actual review records remain intact. D classification does not fabricate
reviews or resolve the 58 uncertain names. Default IDA/Ghidra exports include A through D,
with explicit unreviewed-proposal comments; pass C to exclude D.

The roster was initialized once from the original complete map snapshot using
`--init work/complete-3.0/names-before-review.tsv`; reinitialization is rejected. Its baseline
hash matches the initial sample manifest. Do not reset the roster to the smaller emitted map.
The initial sample remains unchanged and has its own statistics below.

`maps/complete-3.0/review-sample.tsv` freezes the pre-review selection; its JSON manifest
records seed 20260930, executable/name-file hashes and the sample hash. Four B names were
sampled from each source-tier A/B × unique/ordered-body stratum. Four C names were sampled
from source-C unique bodies and four from source-A/B uncertain transfers. These C strata
do not cover all C names. The eight targeted cases are the three slot warnings and five
callers responsible for six call warnings; R33 follows a wrong callee discovered in R31.
Targeted cases are excluded from sample counts. No overall precision estimate is claimed.

`tools/py tools/review_release.py complete-3.0` renders full raw bodies, bytes, runtime RTTI
membership and reference context to `work/complete-3.0/review/`. It validates the frozen
sample and executable hashes and never generates verdicts. Name annotations are explicitly
proposals. Re-rendering after map changes updates those annotations; packet hashes in the
review ledger identify the original capture, not subsequent annotated replays.

`reviews.tsv` records source identity and correspondence separately as supported,
contradicted or unresolved (or explicitly not assessed). Supported means consistent with
the recorded observations; it is not a debug-code proof. Every verdict was assigned by
reading assembly, following object/argument dataflow, and checking relevant callees or
runtime class membership. Review was not blind and used the same available binaries.
The random sample has 9 supported / 8 contradicted / 7 unresolved source names;
21 supported / 3 unresolved correspondences. The 16 B cases contain five wrong source
names even though all their release correspondences are supported.

`emit_map.py` applies review actions after all proposal sources: `withhold` removes the
exact RVA/map-ID/name identity; `cap-C` limits its tier; `keep` never promotes it. Wrong
executable hashes fail before writing. An absent or replaced identity is unaffected.
Source-name vetoes/caps also live in `maps/cht-1.x/reviews.tsv` so subsequent source builds
cannot restore those exact bad labels. `--reviews-only` applies this policy to the current
map without recomputing unrelated alignments. After a source map changes, rerun both
release alignments to refresh their hash-bound provenance, then emit and export again.
Rebuild named Ghidra copies from the unnamed programs so withdrawn labels disappear.

Open issues exposed by review: vptr evidence needs object-identity tracking (R06),
constructor/destructor role checks (R01), and cross-release vtable-layout validation (R26).
Call warnings include valid outlining changes (R28/R30), a changed hero-count predicate
(R29), an adjacent reader mismatch (R33), and a wrong destructor class (R32). The raw
evaluation retains all these warnings rather than presenting post-review filtering as accuracy.

The emitter checks the executable SHA-256 first. It emits validated RTTI descriptors plus
unique primary vftables (zero COL offset and construction displacement), checking their
hierarchy and every observed slot's code-section pointer. Vftable spans come from the
retail table, not debug-map size gaps. Duplicate names, multiple target copies, secondary
tables and construction tables are held out of this initial vftable pass. Descriptor
pairing still uses only exact-name table anchors and validates the complete pointer chain.
These structural rows have tier A, explicit evidence and their original map identity:
9,808 data labels and 1,354 vftables. `--structural-only` remains available to emit only this
subset without reading assembly pairs, static-init assumptions, or manual overrides.

For Ghidra, import and analyze the exe into `homm4/complete-3.0`, then apply with:

```sh
ghidra-analyzeHeadless work/ghidra homm4/complete-3.0 -process heroes4.exe \
  -noanalysis -readOnly -scriptPath tools/ghidra \
  -postScript ApplyNames.java "$PWD/maps/complete-3.0/names.tsv" C \
  "$PWD/work/complete-3.0/heroes4_complete-3.0.gzf"
```

The release pipeline does not use CHT static-init slot ordinals on Complete.
`src-structure/` continues to describe CHT 1.x.
Tests: `tools/py -m unittest discover -s tools -p 'test_rtti_join.py'` and
`tools/py -m unittest discover -s tools -p 'test_emit_map.py'`, plus
`tools/py -m unittest discover -s tools -p 'test_release_align.py'`.

## Synthetic game structure

`tools/py tools/gen_structure.py cht-1.x` builds `src-structure/` in the repository.
Regenerating for another target replaces the retail annotations and counters in this tree.

- `game/`: one annotated source inventory per non-library `.obj`, in a flat directory.
  Source filenames embedded in anonymous-namespace tags take precedence; otherwise `.cpp`
  is inferred from the object basename. Each file records that evidence and confidence.
  The data-only `circle_calculator.obj` is included alongside the 585 code objects.
- `va.h`: no-op address annotations following HoMM3's `VA(addr, size)` / `DATA(addr)` convention.
  For this target they are `VA_CHT_1(addr, size)` and `DATA_CHT_1(addr)`, using absolute
  virtual addresses (`image_base + RVA`). Confidence is a separate `confidence:A/B/C/D` comment.
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
  assignment of any tier; A/B/C/D split those IDs by their best current assignment tier.
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
