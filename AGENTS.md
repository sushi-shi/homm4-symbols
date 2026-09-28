# AGENTS.md

Read before changing anything. Layout, tools and run commands are in [tools/README.md](tools/README.md).

## Goal

Put the names from a leaked **debug-build linker map** of HoMM4 onto **retail executables** and
export Ghidra/IDA databases. Not a decompilation. Every emitted name carries a tier (A/B/C) and
its evidence; never emit one without them.

Hop chain: `map → cht-1.x` (structural, first pass done) → `gog-3.0` (release↔release, same
aligner, direct) → the community exe, if it patches `heroes4.exe` (unchecked).

## Environment

- Offline unless the user says otherwise, including nix (`nix shell --offline`).
- No system `python3`: use `tools/py` (nix Python + pefile, capstone). No numpy offline, so hot
  loops go in C (`tools/nw.c`, gcc via `nix shell --offline nixpkgs#gcc`).
- Ghidra 12.1.2 headless (`ghidra-analyzeHeadless`), project `work/ghidra/homm4`, one folder per
  target. `/<target>/heroes4.exe` stays unnamed (scripts open it `-readOnly`); the named copy is
  `/<target>/heroes4_named`.
- `llvm-undname` demangles VC6 correctly.
- Paths come from `tools/paths.py`. Outputs are TSV with a header. Only `emit_map.py` writes
  `maps/<target>/names.tsv`, a complete per-exe file with no hop indirection.
- Never commit binaries (`binaries/`, `.7z`). A target exe's hash goes in its `target.json`.

## Checking a change

Run `tools/py tools/evaluate.py <target>` after every aligner change. There is no ground truth;
the checks that use evidence the aligner never scored matter most. A change that raises coverage
but lowers an independent check is a regression. Last run on cht-1.x:
- **link order:** 0 backbone inversions, 0 static-init routines out of order; inline COMDATs only
  in their map TU or later.
- **call graph** (independent): file-local callee called from its own obj 91.9% (sees only
  cross-TU errors); 32 file-local names on functions called from 3+ objs; tier-A deleting dtors
  mostly call their own or a base dtor.
- **held-out `ret N`:** tier A ≈ 97% precise. Without `ret N` the aligner is ≈ 67% on tier-B
  names, so B leans on it; B's precision within a TU is **not yet measured**.
- **hierarchy:** overridden vftable slots keep the base method name, 1092 / 90.
- **stability:** 96% agreement with a run without vftable evidence.

Planned: typed `this`-calls (an ECX=`this` call inside `C::m` must reach a method of C or a base).

## The map (`symbols/heroes4_debug.map`)

- MSVC 6 `LINK /MAP /MAPINFO:FIXUPS` of `heroes4_debug.exe`, timestamp `3dbcea6d`
  (2002-10-28 07:42 UTC; build machine UTC+8). LIBCMTD/libcpmtd, `/GZ`, `/Od` (all inlines out
  of line), SmartHeap debug `HA312W32.DLL`.
- Base-game 1.x code (DirectPlay8 `comm_library`, no expansions). Shipped by mistake beside
  a 2.2GS exe, likely the CHS Gathering Storm disc from a non-NWC shop (`C:\work\game`;
  NWC uses `C:\Work\…`). The debug exe and PDB were never found.
- Format: segments, "Publics by Value", "Static symbols" (not globally sorted), `FIXUPS:` lines
  (start rva + 32-bit deltas, 274,411 `.text` sites, no targets). Row:
  `SSSS:OOOOOOOO name VA [f] [i] [lib:]obj`; always use the VA column. No sizes: `symbols.tsv`
  sizes are gaps, i.e. upper bounds.
- 71,988 symbols, 585 game TUs in alphabetical link order. Functions: 9,469 plain, 32,923 inline,
  10,854 static (9,970 `_$E`). 3,166 vftables; `.CRT$XCU` has 3,100 initializers.
- Anonymous-namespace tags (`?%C:\work\game\x.cpp<hash>@`) change per build: strip the hash and
  case-fold `Work` before comparing. String literals `??_C@_<len>@<hash>@…` use an unknown hash.

## Retail binaries (true for cht-1.x; re-check per target)

- **Link order preserved:** same TU order, same plain/static function order within each;
  `.CRT$XCU` strictly increasing. Library TUs differ (release LIBCMT/libcpmt).
- **`/Gr`:** map `__cdecl` is release `__fastcall` (first two dword integral args in ECX/EDX,
  hidden return pointer first; callee pops the rest; modelled in `tools/sig.py`). Library code
  (zlib, comm_library, CRT) stays cdecl. Ctors of classes with virtual bases take a hidden int
  (extra `ret 4`).
- **Inline COMDATs sit next to their first user** (debug: end of TU), possibly in a later TU if
  earlier ones inline every use. Hence `align.py`'s two passes: ordered DP, then unordered
  assignment within each TU's band.
- Exact static-init pairs are **pinned** in the ordered pass as TU boundary anchors; never drop them.
- 16-byte function alignment, 0x90/0xCC padding. Ghidra misses ~8k pointer-only functions
  (`PaddedFunctionStarts.java` adds them). EH funclets (`.text$x`) come last, from `funclets_rva`.
- Ghidra builds no vftables here; use `tools/rtti.py`. Vftables pair with the map per class, by
  name then order; slot counts bound both sides.
- Special cases: adjustor/vtordisp thunks (`add/sub ecx; jmp`) credit the jump target; deleting
  dtors (`ret 4`, `test x,1`, `operator delete`) take only `??_G`/`??_E` names; ICF-folded bodies
  and `_purecall` appear in unrelated vftables and are held out.
- Static init uses the gruntz convention `<owner>$init/$ctor/$atexit/$dtor`, never `_$E<n>`
  (per-build ordinal). Shapes verified under wine by `name_dyninit.py`. Map `.bss` order is not
  definition order.

## Open work

- cht-1.x: ~1,800 unmatched plain functions; 6,900 tier-C names to review.
- Name CRT/libcpmt with Ghidra Function ID (release LIBCMT).
- Multi-name labels for ICF-folded functions; data labels (strings, RTTI, globals).
- Propagate vftable slot names down the hierarchy to unmatched overrides.
- GOG 3.0 needs the user's exe. Confirm community-version facts first (web search needs permission).
