# AGENTS.md

Guidance for agents working in this repo. The layout, tool list and run commands are in
[README.md](README.md). This file covers what you need to know before changing anything.

## Goal and scope

Put the names from a leaked **debug-build linker map** of HoMM4 onto **real retail
executables**, then export them as Ghidra/IDA databases. This is not a decompilation.
Every emitted name carries a tier (A/B/C) and its evidence. Never emit a name without them.

Hop chain: `map → cht-1.x` (structural, the hard part, done: first pass) → `gog-3.0`
(release↔release, same aligner, direct hop; decided against going through US 2.2) → the
community exe, if it patches `heroes4.exe` (to be checked).

## Environment rules

- No internet unless the user asks. That covers nix fetches: use `nix shell --offline`.
- There is no system `python3`. Run Python through `tools/py`, which gives offline nix Python with
  pefile and capstone. numpy is **not** available offline, so hot loops go in C
  (`tools/nw.c`; gcc via `nix shell --offline nixpkgs#gcc`).
- Ghidra 12.1.2 headless: `ghidra-analyzeHeadless`, with project `work/ghidra/homm4` and one
  folder per target. `/<target>/heroes4.exe` is the analysed program and must stay
  unnamed; export and apply scripts open it `-readOnly`. The named copy is
  `/<target>/heroes4_named`.
- `llvm-undname` demangles VC6 manglings correctly.
- All paths come from `tools/paths.py`. Outputs are TSV with a header row. Tools read
  `symbols/` and `work/`. Only `emit_map.py` writes `maps/<target>/names.tsv`, which is a complete,
  self-contained file per exe (no hop indirection).
- Don't commit binaries (`binaries/`, `.7z`). Record new inputs in the `SHA256SUMS` files.

## Checking a change

`tools/py tools/evaluate.py <target>` after every aligner change. There is no ground truth, so
it combines checks. The independent ones matter most, because they use evidence the aligner
never scored. Last run on cht-1.x:
- **link order** (invariant, game TUs): the ordered backbone has 0 inversions, and static-init
  routines have 0 out of order. Inline COMDATs sit only in their map TU or a later one.
- **call graph** (independent: the aligner ignores call edges). Release edges must be debug edges:
  - A file-local callee is called from its own obj: 91.9%. This only sees errors that cross
    translation units, not shuffles inside one.
  - 32 file-local names sit on functions called from 3+ objs (folded or wrong).
  - Tier-A deleting dtors call their own or a base dtor in most cases (see the report).
- **held-out `ret N`:** tier A ≈ 97% precise, and that estimate is independent. The aligner
  without `ret N` is ≈ 67% on the names that end up tier B, so B leans on `ret N`, and its true
  precision within a translation unit is **not yet measured**.
- **hierarchy:** overridden vftable slots keep the base slot's method name, 1092 / 90.
- **stability:** agreement with a run that uses no vftable evidence, 96%.

A change that raises coverage but lowers an independent check is a regression. Planned next check:
typed `this`-calls. A call made with ECX = `this` inside `C::m` must reach a method of C or a
base of C. It is function-level and independent of the aligner.

## The map (`debug-symbols/heroes4_debug.map`)

- MSVC 6 `LINK /MAP /MAPINFO:FIXUPS` output of `heroes4_debug.exe`.
  - Timestamp `3dbcea6d` = 2002-10-28 07:42 UTC. It prints 15:42, so the build machine was on UTC+8.
  - Debug build: LIBCMTD/libcpmtd, `/GZ` (`__chkesp`), `/Od` (every inline function emitted
    out of line), SmartHeap debug DLL `HA312W32.DLL`.
- Code line is **base-game 1.x**: DirectPlay8 `comm_library`, no expansion code.
- Provenance:
  - It shipped by mistake next to `binaries/win-2.2gs` (a 2.2GS exe linked 2002-12-16).
  - That is most likely the Simplified Chinese Gathering Storm disc, from a non-NWC shop with
    lowercase `C:\work\game`. NWC's own builds use `C:\Work\…`.
  - The debug exe and its PDB have never been found.
- Format:
  - The segment table is followed by "Publics by Value" and then "Static symbols" (not globally
    sorted) and `FIXUPS:` lines (a start rva plus 32-bit deltas; 274,411 `.text` sites; targets
    not recorded).
  - Row: `SSSS:OOOOOOOO name VA [f] [i] [lib:]obj`. `f` means function, `i` means inline/COMDAT.
    Always take the VA column.
  - Sizes are not in the map: `symbols.tsv` sizes are gaps to the next symbol, so treat them as upper bounds.
- Counts:
  - 71,988 symbols: 585 game translation units in alphabetical link order.
  - Functions: 9,469 plain, 32,923 inline, 10,854 static (9,970 of them `_$E` static-init).
  - 3,166 vftables. `.CRT$XCU` holds 3,100 initializer pointers.
- Anonymous-namespace tags (`?%C:\work\game\x.cpp<hash>@`) differ in every build. Strip
  the hash and case-fold `Work` before comparing names across builds.
- String literal names: `??_C@_<len>@<hash>@<escaped prefix>`. The hash algorithm is unknown.

## Retail binaries: established facts

These hold for `cht-1.x` (VC6 release). Re-check them on each new target.
- **Link order is preserved.** The translation units come in the same order, and so do the
  plain/static functions within each. The `.CRT$XCU` table is strictly increasing.
- **Built with `/Gr`**: functions that are `__cdecl` in the map are `__fastcall` in release.
  - The first two dword-sized integral args go in ECX/EDX, the hidden return pointer counting first.
  - The callee pops the rest. `tools/sig.py` models this.
  - Library code (zlib, comm_library, CRT) stays cdecl.
- Constructors of classes with virtual bases take a hidden int (an extra `ret 4`).
- **Inline COMDATs are emitted next to their first user** in release, but at the end of the
  translation unit in debug. The kept copy can move to a later unit when earlier ones inline every use.
  This is why `align.py` has two passes: an ordered DP, then an unordered assignment within each unit's band.
- Functions are 16-byte aligned with 0x90/0xCC padding. Ghidra misses ~8k pointer-only
  functions; `PaddedFunctionStarts.java` adds them. The EH funclets (`.text$x`) come last;
  their start is `funclets_rva` in `target.json`.
- Ghidra's RTTI analyzer builds no vftables for these exes; use `tools/rtti.py`.
  - Vftables pair with the map per class: by name first, then by order.
  - Slot counts are bounds on both sides.
- Special function kinds the aligner must handle:
  - vtordisp/adjustor thunks (`add/sub ecx; jmp`): the class gets credit for the jump target.
  - Deleting dtors: `ret 4` + `test x,1` + call `operator delete`. Only `??_G`/`??_E` names may go there.
  - ICF-folded bodies and `_purecall`: they sit in the vftables of unrelated classes and are held out.
- Exact static-init pairs (`.CRT$XCU` order) are **pinned** in the ordered pass. They are the
  TU boundary anchors, so never take them out of the alignment. Library TUs are linked in a different
  order in release (LIBCMT/libcpmt vs the map's debug libs).
- Static init follows the gruntz convention: routines are named after their owner
  (`<owner>$init/$ctor/$atexit/$dtor`), never `_$E<n>`, whose ordinal is per-build noise.
  - `name_dyninit.py` checked the VC6 shapes by compiling test files under wine.
  - The map's `.bss` order is **not** definition order.

## Inputs (`binaries/`, see `SHA256SUMS`)

| Target | What |
|---|---|
| `cht-1.x` | Traditional Chinese 1.x, linked 2003-01-07, `C:\Work\game`, imports match the map exactly. **First target.** |
| `chs-1.x` | Simplified Chinese 1.x (2002-07-04). Same classes plus GDI font code. Useful as a cross-check. |
| `us-2.2` | NWC's own US 2.2 base (2002-10-09), no SafeDisc. |
| `win-2.2gs` | The 2.2GS exe the map shipped with (likely CHS Gathering Storm). |
| `cht-2.2gs`, `cht-3.0wow` | Taiwan rebuilds of GS and WoW. `cht-3.0wow` can stand in for 3.0 until the GOG exe is available. |
| `mac-2.2.2` | CodeWarrior PEF, RTTI names only. Low value. |
| `patches/` | UK/US RTPatch 1.0→1.3→2.0→2.2→3.0. The `fdx-h430` `.nfo` is kept only for the 3.0 date. |

- Retail discs use SafeDisc (`drvmgt.dll`), though the exes listed above are unwrapped. The US 1.0 exe is encrypted.
- archive.org sources: `yingxiongwudi4fantizhongwenban` (CHT), `homm4-chs`, `HoMM-IV-Mac`,
  `heroes-iv-cd-1`, `756059108937` (US 2.2).

## Open work

- ~1,800 unmatched plain functions in cht-1.x. 6,900 tier-C names to review or promote.
- Name the CRT/libcpmt with Ghidra Function ID (release LIBCMT, not the map's debug libs).
- Give the ICF-folded functions multi-name labels. Add data labels: strings, RTTI, remaining globals.
- Propagate vftable slot names down the class hierarchy to fill unmatched overrides.
- The GOG 3.0 target needs the user's exe. Before relying on community-version facts, confirm them (web search needs the user's permission).
