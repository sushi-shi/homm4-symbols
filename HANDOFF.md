# HoMM4 debug-map remapping: handoff

Scope: **mine everything the debug `.map` contains** and **put those names onto real
executables**. This is not a decompilation project. There is no matching and no
source reconstruction.

Written 2026-09-26. Facts below were checked in-session unless marked *hypothesis*.

---

## 1. What "remapping" produces

The map describes an executable **we do not have**: an internal debug build linked
2002-10-28. Its addresses fit no shipped binary. The outputs are therefore:

1. **Mined datasets** (`out/mined/`): everything the map says, independent of any
   binary. This covers symbols, sizes, objects (translation units), link order, classes,
   methods, vtables, RTTI, globals, statics, static initializers, strings, source files,
   types, imports, libraries and fixups. It is useful as a reference on its own.
2. **Per-target name sets** (`out/<target>/`): for each retail exe below, a table of
   `rva → mangled name` with confidence and evidence. There is also a Ghidra import
   file and a labelled Ghidra program export. Apply the *mangled* names and let
   Ghidra's Microsoft demangler analyzer derive namespaces, classes and prototypes.

Targets, in order:

| # | Target | Why |
|---|---|---|
| T1 | `binaries/cht-1.x/heroes4.exe`: Traditional Chinese, linked 2003-01-07 | Same 1.x code line as the map. Import profile matches the map exactly. Ships the map's SmartHeap DLL. **Primary.** |
| T1b | `binaries/chs-1.x/heroes4.exe`: Simplified Chinese, linked 2002-07-04 | Also 1.x with the same 679 RTTI classes. Adds GDI font code. Secondary/cross-check. |
| T2 | `binaries/us-2.2/heroes4.exe`: NWC US 2.2 base, linked 2002-10-09 | Next hop. Binary-to-binary from T1 (Version Tracking/BSim). NWC-built and unprotected, with no localization edits. |
| T2b | `binaries/win-2.2gs/heroes4.exe`: CHS(?) 2.2 Gathering Storm, linked 2002-12-16 | Adds Gathering Storm code; has CHS GDI-font edits. It is the exe the map shipped with. |
| T3 | 3.0 (Winds of War / Complete) | **Not pinned yet.** An unprotected candidate is on hand: `binaries/cht-3.0wow/heroes4.exe` (Taiwan rebuild). An NWC-built 3.0 would be the canonical choice. |

Why hop T1 → T2 and not map → T2 directly: map → T1 has only the debug-vs-release
gap on the same code. T1 → T2 is release-to-release, where binary diffing works. Going
straight to T2/T3 stacks both gaps.

---

## 2. Inputs

All paths are relative to `~/Projects/homm4/`. Checksums are in `binaries/SHA256SUMS`.

| File | Notes |
|---|---|
| `debug-symbols/heroes4_debug.map` (also `heroes4_debug.7z`) | 11,265,614 bytes, 85,191 lines. The subject. |
| `debug-symbols/heroes4.7z` → `heroes4.exe` | Same file as `binaries/win-2.2gs/heroes4.exe`. sha256 `c13a5031…c1f0`, FileVersion `2.2GS`. No SafeDisc. |
| `binaries/cht-1.x/heroes4.exe` | sha256 `e8c0ad0f…f53f`, md5 `82d51769fa82b072c28eb12e8ac4abbb`, 6,078,464 bytes. PE date 2003-01-07 03:09 UTC. Relocs stripped. Source root `C:\Work\game`. |
| `binaries/cht-1.x/HA312W32.DLL` | SmartHeap DLL shipped on the CHT disc. The retail exe does not import it; the debug map does. |
| `binaries/chs-1.x/heroes4.exe` (+ `campaign_editor.exe`) | sha256 `749411d9…3c18`, 6,168,576 bytes. PE date 2002-07-04. Source root `C:\work\game`. |
| `binaries/us-2.2/heroes4.exe` | **NWC's own** US 2.2 base game (no Gathering Storm). Linked 2002-10-09, source root `C:\Work\homm21\`, **no SafeDisc**. sha256 `1deb844c…70dd`. From archive.org `756059108937` (redump, 2 discs; InstallShield `data1.cab`+`data2.cab`). |
| `binaries/cht-2.2gs/heroes4.exe` | Taiwan Gathering Storm, `2.2GS`, linked 2003-09-24, source root `F:\Disk2\Work\game`. From the CHT GS disc (`_setup/Data1.cab` is the raw exe). |
| `binaries/cht-3.0wow/heroes4.exe` | Taiwan Winds of War, `3.0WoW`, linked 2003-12-21, source root `F:\Wow\game`, no SafeDisc sections. From the CHT WoW disc (`_setup/Data7.cab`). **A candidate for T3**, but it's a Taiwan rebuild, not NWC's bytes. |
| `binaries/mac-2.2.2/Heroes 4.pef` | Mac 2.2.2 (2003-01-16), CodeWarrior PEF, **no function names**. Only RTTI class names and MSL imports. Low value. |
| `binaries/patches/` | UK/US RTPatch diffs 1.0→1.3→2.0→2.2→3.0 and readmes. They need a base exe to apply. The `fdx-h430` crack `.nfo` is kept only for the 3.0 date (2003-03-27). |

archive.org sources, for re-fetching discs:
- `yingxiongwudi4fantizhongwenban`: CHT. `英雄无敌4/英雄无敌4 CD1.MDF` is raw MODE2 (2352-byte sectors; user data at offset +24). InstallShield cab (`data1.cab`, `App Executables` group). Disc mastered 2003-01-07.
- `homm4-chs`: CHS. `H4_CHS_DISK1.bin` is MODE1/2352 (data at +16). InstallShield 5 cab, group `Main`.
- `HoMM-IV-Mac`: Mac. `CD01.img` is MODE1/2352 holding classic HFS; read it with `hfsutils`.
- `heroes-iv-cd-1`: UK/US 1.0 ISO plus the patches (loose files).

Tools on this machine: `ghidra` 12.1.2 (with `ghidra-analyzeHeadless`, `ghidra-bsim`, `ghidra-pyghidraRun`), `llvm-undname`
(handles VC6 manglings correctly), `wine`, `gawk`, `objdump`. **There is no system `python3`:**
use `nix shell nixpkgs#python3`. `unshield` and `hfsutils` come through `nix shell nixpkgs#…`.

---

## 3. What is established about the map

- **It is a debug build.** It links `LIBCMTD` and `libcpmtd`, including `_CrtDbgReport`,
  `_malloc_dbg` and `__chkesp` (VC6 `/GZ`). Assert expressions are compiled in. Inlining
  is off: 32,923 inline/COMDAT functions are emitted out of line. It uses the SmartHeap
  debug DLL (`HA312W32.DLL`: `shi_malloc_dbg`, `shi_SetBreakAlloc`, …). Code is roughly
  1.3–1.5× the retail size; for example `abbreviate_number` is 0x668 bytes in the map
  and 0x450 in 2.2GS.
- **Link time** `0x3dbcea6d` = 2002-10-28 07:42:37 UTC. The map prints 15:42:37, which
  is the linker's local time, so the build machine was on **UTC+8**.
- **Code line: base-game 1.x.**
  - Multiplayer is DirectPlay 8 (`comm_library` from `C:\3DO\Heros4\comm_library\`,
    `CommSession`, `t_network_session`).
  - There is no `t_expansion_version`, no Gathering Storm, and no GameSpy/WinSock `t_network_manager`.
  - All 679 RTTI classes of both CHS and CHT appear in the map. 38 classes of 2.2GS are absent.
- **CHT vs CHS: the evidence below is superseded by the source-root conclusion further
  down.** The map was built by the CHS shop from unmodified NWC 1.x code. CHT 1.x is the
  closest unmodified release build.
  - For CHT: the map matches CHT on all 10 imports that distinguish CHS from CHT. CHS
    adds `AddFontResourceA`, `CreateFontIndirectA`, `TextOutA`, `GetTextExtentPoint32A`,
    `RemoveFontResourceA`, `SetTextColor`, `SetBkColor`, `SetMapMode` and
    `GetLogicalDrives`, and lacks `GetEnvironmentVariableA`.
  - Also for CHT: its disc ships `HA312W32.DLL`, and it is the only such build dated after the map.
  - Against CHT: CHT was compiled from `C:\Work\game` (capital W). The map, CHS and 2.2GS all use `C:\work\game`.
  - Anonymous-namespace hashes (`…\file.cpp<number>`) differ in **every** build, so they
    change per compile and carry no identity information.
- The debug exe itself has not been found anywhere.
- **Where the map came from (per the user):** it shipped by mistake on a retail disc
  next to `win-2.2gs/heroes4.exe`. That exe is `2.2GS`, linked 2002-12-16, from
  `C:\work\game`. It is most likely the Simplified Chinese Gathering Storm disc (see the
  conclusion below). **Confirm the exact disc and label with the user.**
- Source roots seen across builds:

  | Build | Source root |
  |---|---|
  | map | `C:\work\game` (+ `C:\3DO\Heros4\comm_library`) |
  | CHS 1.x | `C:\work\game` |
  | the 2.2GS exe from the map's disc | `C:\work\game` |
  | CHT 1.x | `C:\Work\game` |
  | CHT GS | `F:\Disk2\Work\game` |
  | CHT WoW | `F:\Wow\game` |
  | US 2.2 base (NWC) | `C:\Work\homm21` |
  | US 1.0/2.2 campaign editor (NWC) | `C:\Work\campaign_editor` |

  **Conclusion (2026-09-26):**
  - NWC's machines use capital-W `C:\Work\…`.
  - Lowercase `C:\work\game` is a **non-NWC shop on UTC+8**. It built the CHS 1.x exe,
    the debug map, and the 2.2GS exe the map shipped with.
  - That 2.2GS exe carries the same GDI text-rendering imports as CHS 1.x
    (`CreateFontA`, `TextOutA`, `GetTextExtentPoint32A`, `SetTextColor`, `SetBkColor`,
    `SetMapMode`). NWC's US 2.2 and all Taiwan builds lack them.
  - So **`win-2.2gs` is almost certainly the Simplified Chinese Gathering Storm build**,
    and the map was left on the CHS GS disc. That disc is not on archive.org.
  - The map itself lacks the GDI font code. It is a debug build of plain NWC 1.x code
    without the shop's font changes, which is why its imports match the unmodified CHT 1.x
    (`C:\Work\game`, NWC-style path, no font changes).
- **Searched archive.org (2026-09-26):**
  - Chinese HoMM4 items: only `homm4-chs` (base, 2 discs) and
    `yingxiongwudi4fantizhongwenban` (CHT base 2 discs + GS + WoW).
  - EU GS (`heroes-4-tgs`).
  - None of these contain the map or other debug leftovers. The one exception is
    `HA312W32.DLL` on CHT base.
  - No Korean or Japanese HoMM4 on archive.org.
- **`comm_library` in other 3DO games:** not found.
  - Checked Legends of Might and Magic (LithTech engine), High Heat MLB 2002 (its own
    DirectPlay 3 code) and Army Men RTS (Pandemic).
  - All three 1.x HoMM4 builds (map, CHS, CHT) contain it, so it most likely lived only
    in HoMM4 1.x and was replaced by GameSpy/WinSock in 2.0.
  - Other shared components: none found beyond generic middleware (VC6 linker, Bink,
    Miles). None of those games has SmartHeap, HoMM4's `t_` classes or `work\game` paths.
    Crusaders of M&M demo (1999, `C:\Cmm\Crusaders\`) doesn't either.
  - HoMM3 (retail SoD `C:\Dev\Heroes 3 Exp 2\Game`, Dreamcast, Mac PEF) shares a
    **coding convention** with HoMM4 but no code or class names:
    - expansion-era `t_` classes such as `t_initializer`/`t_initialize_failure`,
      `t_enclosure`/`t_create_failure` (SoD `ForceFeedback.cpp`) and Mac-port
      `t_complex_net_message`, `t_scenario_start_options`;
    - HoMM4 has the same idioms (`t_initializer` in `town.obj` and the cache units,
      `t_constructor_failure`, `t_open_failure`).

    Probably the same programmers. Both use zlib/deflate 1.1.3, which is generic.
  - Also checked with the full discs (2026-09-26), none sharing anything with HoMM4
    beyond Bink/Miles/zlib/VC6:
    - Might and Magic VIII (2000, `F:\MM8src\MM8\`, C-style, DirectPlay 3 `dplayerx.dll`);
    - Might and Magic IX (2002, LithTech, `c:\code\mmix\`);
    - High Heat MLB 2003 (2002).
  - US 1.0 retail (`heroes-of-might-and-magic-4` = `HEROES4.7z`, mastered 2002-03-07)
    has a SafeDisc-encrypted `heroes4.exe`. No readable RTTI; useless without unwrapping.
    None of these discs carries `.map`/`.pdb` leftovers.

---

## 3b. How the map was produced (and leads)

- **Tool: Microsoft LINK.EXE from Visual C++ 6.0**, emitted during the link that produced
  the debug exe.
  - `__chkesp` exists only with VC6 `/GZ`; VC7 replaced it with `_RTC_*`, and there is none here.
  - `/MAPINFO` was introduced in VC6.
  - The retail exes report linker 6.0.
  - The file is pure ASCII with CRLF line endings, 85,191 lines, and shows no signs of
    being hand-edited or regenerated.
- **Options implied:**
  - `/MAP` with the default name: the map is named after the output, so the link used
    `/OUT:heroes4_debug.exe`.
  - `/MAPINFO:FIXUPS`.
  - No `/MAPINFO:LINES` (no line-number section) and no `/MAPINFO:EXPORTS`.
  - `/DEBUG` is almost certain for a debug configuration, which means a
    **`heroes4_debug.pdb`** was also written.
  - Debug CRT `/MTd`, `/GZ`, `/Od`, SmartHeap debug DLL.
- **Why FIXUPS:**
  - In VC5, `/MAP` included fixups by default. VC6 needs `/MAPINFO:FIXUPS` explicitly,
    so someone added it on purpose, or it survived from an old makefile (NMAKE/command line).
  - Maps plus fixups were typically fed to crash-address lookup, profilers/coverage
    tools, or copy-protection/wrapping tools. Retail uses SafeDisc (`drvmgt.dll`).
    *Unconfirmed.*
- **Why a separate `heroes4_debug.exe`:** the explicit `_debug` output name lets a debug
  exe sit next to the retail one in a game directory. That fits a build handed to
  testers or a localization team, with the map used to look up crash addresses. The
  game has no crash reporter (no dbghelp/minidump strings), so the Windows fault dialog's
  EIP would be looked up in the map by hand.
- **Leads:**
  1. Search for the companion files: `heroes4_debug.exe`, `heroes4_debug.pdb`,
     `vc60.pdb`. The PDB would give types, locals and line numbers.
  2. Places to look: 2002–03 localization kits and dev leftovers from UTC+8 publishers,
     Chinese/Taiwanese retro forums (the CHS archive.org item cites ppxclub.com),
     CD2/expansion discs of the CHT/CHS releases (not yet checked), and wherever this
     map itself came from (ask the source).
  3. `C:\3DO\Heros4\comm_library` is a second source tree (the 3DO shared network lib)
     that might appear in other 3DO titles of 2002.

## 4. Map format reference (MSVC 6 linker, `/MAP` + `/MAPINFO:FIXUPS`)

```
line 1        " heroes4_debug"                          module name
line 3        " Timestamp is 3dbcea6d (Mon Oct 28 15:42:37 2002)"   (local time of link machine)
line 5        " Preferred load address is 00400000"
lines 7-30    segment table: "SSSS:OOOOOOOO LLLLLLLLH name class"
lines 32-61172  " Address  Publics by Value  Rva+Base  Lib:Object"
line 61174    " entry point at 0001:005f3b50"
lines 61176-72032 " Static symbols"   (same row format)
lines 72033-85191 "FIXUPS: <hex rva> <hex delta> <hex delta> ..."
```

Section numbers → RVA base (image base 0x400000, 0x1000 alignment). The contribution
names come from the segment table.

| Sec | Contributions | RVA of sec start | Contents |
|---|---|---|---|
| 0001 | `.text` 0x62bbc8, `.text$x` 0x63aa3 (EH funclets, **no symbols**) | 0x1000 | code |
| 0002 | `.rdata`, `.rdata$r` (RTTI), `.xdata$x` (EH tables), `.edata` (empty) | derive: `Rva+Base − 0x400000 − offset` | const data |
| 0003 | `.CRT$XCA..XTZ` (initializer tables; `.CRT$XCU` = 0x3070 bytes = **3,100 constructor pointers**), `.data` 0x605b4, `.bss` 0x44a21 | derive | data |
| 0004 | `.idata$2..$6` | derive | imports |
| 0005 | `.rsrc$01/$02` | derive | resources (2 unnamed syms) |

Always take the VA from the `Rva+Base` column; don't recompute it.

Symbol row: `SSSS:OOOOOOOO  <name>  <VA>  [f] [i]  <lib>:<obj>` or `<obj>`.
- `f` means function. `i` means inline/COMDAT (emitted out of line because inlining is off).
- A bare `x.obj` is a game translation unit. `lib:member.obj` is a library member.
  `lib:X.dll` is an import-library thunk. `<common>` means COMDAT/common data.
- **Sizes are not in the map.** Size = next symbol's address in the same section minus
  this one. Clamp the last symbol to the end of its contribution, and expect alignment padding.

Counts (checked):

| Category | Count |
|---|---|
| Publics | 61,138 (func 9,469 plain + 32,923 inline; data 18,746) |
| Statics | 10,854, all functions; **9,970 are `_$E<n>`** static init/term routines in 554 objs |
| Game TUs (bare `.obj`) | 588 |
| Library members | LIBCMTD 1,732 · libcpmtd 1,207 · dxguid 555 · kernel32 207 · haw32m (SmartHeap) 166 · comm_library 123 · zlib 100 · user32 88 · binkw32 28 · mss32 14 · LIBCMT 14 · gdi32 14 · advapi32 12 · winmm/ole32 8 · dsound/ddraw 4 |
| ctors/dtors `??0/??1` | 9,427 |
| deleting dtors `??_G/??_E` | 4,746 |
| vftables `??_7` | 3,166; vbtables `??_8` 281 |
| RTTI | `??_R0` 2,210 (.data) · `??_R1` 2,415 · `??_R2` 2,183 · `??_R3` 2,183 · `??_R4` 3,161 |
| String literals `??_C@` | 860 (575 .rdata, 285 .data) |
| Float consts `__real@` | 100 |
| EH throw info `__TI/__CT/__CTA` | 55 |
| C++ globals / static members (.data/.bss) | 1,004 + 143 C-named |
| Import slots `__imp_` | 257 |
| Virtual methods (mangling access code E/M/U) | 7,124 |
| Distinct enums `W4…` in manglings | 127; distinct `U…` structs 60 |
| Entry point | `0001:005f3b50` |

### FIXUPS

- Each line is `start_rva` followed by deltas. Deltas are 32-bit two's complement
  (`fffffe34` = −0x1cc), and each one is added to the previous address.
- Lines are **not** globally sorted; they appear to be grouped per contribution.
- Decoded: **274,411 unique sites, all inside `.text`** (RVA 0x1043–0x69066f), none closer than 5 bytes apart.
- Meaning, per the VC6 docs: `/MAPINFO:FIXUPS` writes **relocation fixups**, i.e. base
  relocations. These are the `.reloc` entries: 4-byte absolute-address slots in code.
- Only `.text` sites appear. Data-section relocations such as vtable entries are not listed.
  The target of each fixup is not recorded.
- Value without the debug exe is limited to per-function *counts of address operands*,
  a weak matching feature. If the debug exe ever surfaces, these become an exact reloc
  oracle for it.

### String-literal names

- `??_C@_<len-code>@<hash>@<escaped prefix>`: the length is encoded (MSVC base-16 letter
  code: A=0…P=15, e.g. `_0BE@` = 0x14 bytes including NUL), followed by a hash and the
  first ~30 escaped chars.
- Unescape: `?5`=space `?3`=`:` `?2`=`\` `?4`=`.` `?6`=`\n` `?$AA`=NUL `?$CF`=`%`
  `?$CG`=`&` `?$DO`=`>` `?$DN`=`=` `?$DM`=`<` `?$CB`=`!` `?$CI`/`?$CJ`=`(`/`)`
  `?8`=`'` `?9`=`-` `?1`=`/` `?0`=`,` `?7`=`\t`.
  (`?$XY` = one byte, XY in A..P hex digits.)
- Contents: 36+ `C:\work\game\*.cpp|.h` paths (`__FILE__` from asserts and throw
  helpers), assert expressions, DirectPlay log strings, CRT messages.
- The hash algorithm is unconfirmed. Reverse-engineering it would allow exact matching
  of retail strings (optional).

---

## 5. Mining: extract all of it (`out/mined/`, TSV with header rows)

1. **`symbols.tsv`**: every row from publics and statics. Columns: section, offset, va,
   rva, derived size, kind (func/data), inline, static, mangled, demangled
   (`llvm-undname`), obj, lib.
2. **`objs.tsv`**: translation units in **link order** (first appearance in `.text`; the
   order is alphabetical, starting `abbreviate_number.obj`, `abstract_adv_actor.obj`, …).
   Per obj: text start/end, number of non-inline, inline and static functions, $E count,
   data symbols by section, and the matching `C:\work\game\<name>.cpp` if seen. Libraries
   follow in their own band.
3. **`source_files.tsv`**: every source path seen, from `??_C@` `__FILE__` strings,
   anonymous-namespace scopes `?%C:\work\game\X.cpp<hash>@` (10,600 occurrences, 214
   distinct tags), and `comm_library` paths. Mark `.h` vs `.cpp`, and whether each has an obj.
4. **`classes.tsv`**: every class/struct/union/enum name found in any mangling. Include
   namespace nesting, template instantiations with arguments (`t_static_vector<…,4>`,
   `t_counted_ptr<…>`), and kind (class V / struct U / union T / enum W4). Mark which
   classes have a vftable, RTTI and a ctor/dtor, and their owning obj(s).
5. **`methods.tsv`**: per class, every member function with access (private/protected/public),
   virtual/static flags, `const`, calling convention (thiscall/cdecl/stdcall), and the
   parameter list and return type from the demangling. Overloads are kept separate.
   Include compiler-generated functions (`??_G`, `??_E`, `??_D`, copy ctors, `operator=`).
6. **`vtables.tsv`**: `??_7`/`??_8` rows (va, class, owning obj; multiple `6B<base>@`
   variants for MI). **The map does not give slot contents.** Slot counts can be
   estimated from the vftable size.
7. **`rtti.tsv`**: `??_R0..R4` per class with sizes. This gives the inheritance graph
   input: `??_R1` names encode base offsets (`??_R1A@?0A@A@…` = mdisp/pdisp/vdisp/attributes).
   Decode those to get **base classes and offsets for every polymorphic class**.
8. **`globals.tsv`**: all `.data`/`.bss` symbols. The demangled type and storage come from
   the mangling (`3` = global var, `2` = static member, `B` = const): e.g.
   `?k_sample_rate@?%…sound.cpp…@@3HA` is `int k_sample_rate`, anonymous namespace,
   sound.cpp. Include size from the gap and flag anonymous-namespace/file-local symbols.
   Include `k_registration`, `k_factory` and other self-registration objects
   (`t_object_registration<T>`, `t_script_action_factory<…>`), which reveal type ↔ id tables.
9. **`static_init.tsv`**: the 9,970 `_$E<n>` routines per obj, plus the 3,100 `.CRT$XCU`
   slots. Without bytes, a `$E` can't be tied to its global. Record per obj: `$E` count,
   global objects with non-trivial ctors (types from `globals.tsv`), and ordering. In the
   retail target this is an obj-boundary anchor (§6).
10. **`statics.tsv`**: the non-`$E` static functions (~884): file-local helpers per obj.
11. **`strings.tsv`**: decoded `??_C@` rows (length, hash, unescaped prefix, section, obj).
    Separate out asserts (`… >= 0 && …`), `__FILE__` paths, log/format strings and
    resource keys.
12. **`floats.tsv`**: `__real@<hex>` decoded to values, with obj.
13. **`imports.tsv`**: 257 `__imp_` slots grouped by DLL. Compare against each retail
    target's IAT (the diff is already known for CHT/CHS/2.2GS). Note SmartHeap:
    debug = DLL (`HA312W32.DLL`), retail = static (mutex/file-mapping imports).
14. **`libraries.tsv`**: library members used (LIBCMTD objects, libcpmtd, zlib objs,
    SmartHeap `haw32m`, `comm_library` classes `CommSession`/`CommMsgBuffer`/`Logger`,
    dxguid IIDs → which DirectX/DirectPlay interfaces are used).
15. **`eh.tsv`**: `__TI/__CT/__CTA` throw-info rows give the list of **exception types
    thrown** (mangled). `.text$x`/`.xdata$x` sizes only; no per-funclet names.
16. **`fixups.tsv`**: decoded sites (rva, owning function by address range), plus a
    per-function count.
17. **`types.tsv`**: enums (`W4t_…`), structs, and template parameter values (sizes,
    constants like `$03` = 4) harvested from all manglings. Useful later for struct recovery.
18. **`summary.md`**: counts, and a sanity check that every symbol lands inside its
    contribution.

---

## 6. Remap stage 1: map → T1 (CHT)

Key constraint: **there are no source bytes**, so Version Tracking, BinDiff and BSim
cannot be used here. The matching is structural.

Setup:
- Headless-import T1 into a Ghidra project with the default analyzers plus the
  **RTTI analyzer**, then run `RecoverClassesFromRTTIScript` (or equivalent). That gives
  vftables with class names, constructors/destructors (vptr stores) and the class hierarchy.
- Apply **VC6 Function ID** (fidb) for LIBCMT/LIBCPMT. Note that the map's library names
  are the *debug* variants; name retail CRT functions from FID, not from the map.

Anchors, strongest first:
1. **RTTI/vftable identity**: CHT RTTI class name ↔ map `??_7Class@@6B@`. This is exact.
2. **Ctor/dtor**: functions storing a vptr are `??0`/`??1` of that class. Split
   overloaded ctors by `ret N` (thiscall callee-clean = 4 × param count) against the
   demangled signature.
3. **Deleting dtors**: `??_G`/`??_E` sit in vftable slot 0 (when present) and are small
   and shaped predictably.
4. **Static-init order**: T1's `.CRT$XCU` pointer table (in `.rdata`/`.data`, between
   `__xc_a`/`__xc_z`, which are found through `_initterm` calls in the CRT startup)
   lists initializers **in obj link order**. Map it to the per-obj `$E` counts from
   `static_init.tsv`. That yields obj boundaries in T1's `.text`.
5. **Link order**: *hypothesis to verify first.* T1's `.text` keeps the same obj order,
   and within an obj the non-inline functions keep source order. Test it at the start:
   `0x401000` should be `abbreviate_number.obj`. (In 2.2GS the first function is 0x450 bytes.
   In CHT it is 0xd4 bytes, which may be a localization change or an order difference.
   Check this first.)
6. **Strings**: a retail string referenced by one function places that function in the
   obj that owns the `??_C@` symbol in the map. This works for non-assert strings;
   asserts are compiled out in retail.
7. **Imports**: callers of distinctive APIs (DirectPlay via `CoCreateInstance` with dxguid
   CLSIDs, Bink, Miles, DDraw, DSound) fall inside the obj bands that referenced them.

Filling in between anchors: within each obj band, run a sequence alignment of the map's
expected function list against T1's function starts.
- The expected list is non-inline functions plus statics in address order, with debug sizes.
- Inline/COMDAT entries are *optional*: most are inlined away or ICF-folded in release.
- Cost terms: size ratio (fit per obj, ~0.6–0.8), `ret N` against the mangled parameter
  count, calling convention, and whether the function stores a vptr or references strings.

Confidence tiers (record them in the output):
- **A:** proven by RTTI, vptr or a unique string, with a consistent signature.
- **B:** aligned between A anchors with size and `ret N` agreement.
- **C:** alignment only.

Never emit a name without its tier and evidence.

Outputs:
- `out/cht-1.x/names.tsv` (`rva, size, mangled, demangled, obj, tier, evidence`).
- `ghidra_symbols.txt` (`name address f`, for `ImportSymbolsScript.py`), then run the
  Demangler analyzer.
- `heroes4_cht.gzf` export.
- Coverage report: named / expected per obj, per tier.

Do T1b (CHS) the same way as a cross-check. Names that agree across T1 and T1b are extra confidence.

## 7. Remap stage 2: T1 → T2 (2.2GS)

Both are release builds from the VC6 linker, so this is ordinary binary diffing.
- Use Ghidra **Version Tracking**, with T1 labelled as the source (or BSim / BinDiff /
  Diaphora via nix).
- RTTI anchors T2's classes directly. That includes the 38 new 2.x classes, which get
  class names but no method names.
- Carry over the tier and downgrade it by one step when the match is by similarity only.

Expected holes in T2 are unnameable from this map:
- GameSpy/WinSock networking: `t_network_manager`, `t_network_setup`, `t_network_join`, …
- `t_chat_window`, Coliseum, passwords.
- `t_expansion_version` plumbing.
- Anything rewritten after 1.x.

## 8. Open items and caveats

- Is CHT the build, or is CHS? See §3. Resolve it by comparing alignment quality T1 vs T1b.
- The link-order hypothesis (§6.5) needs verifying before relying on it.
- FIXUPS semantics (REL32 included or not) cannot be confirmed without the debug exe.
- The VC6 `??_C@` hash algorithm is unknown. Solving it is optional but gives exact string matching.
- The 3.0 target is unpinned. Retail images are copy-protected (`drvmgt.dll` = SafeDisc
  on the Chinese discs; T1/T1b/T2 exes themselves have plain sections). Avoid the cracked
  `fdx-h430` 3.0 exe as a pin, because it has patched bytes.
- Not searched: Korean, Hong Kong or Singapore releases, and CHT/CHS expansion discs
  (not needed; the map has no expansion code).
- Mac 2.2.2 PEF: no symbols, not a source of names. HoMM4 shares no code with HoMM3
  (a ground-up rewrite with `t_`-prefixed STL-heavy classes), so HoMM3 tables don't transfer.

---

## 9. Status 2026-09-28: stage 1 (map → CHT 1.x) first pass done

Layout and tools: see README.md. (Paths in §1–§8 such as `out/mined/`, `out/<target>/`
are from the original plan; mined data now lives in `symbols/`, finished maps in
`maps/<target>/`, intermediates in `work/`.)

Run: `tools/setup_target.sh cht-1.x` once, then `tools/pipeline.sh cht-1.x`.

Outputs: `maps/cht-1.x/from-map.tsv` (hop file) and `maps/cht-1.x/names.tsv` (composed);
generated `work/cht-1.x/ida_apply.py` and `work/cht-1.x/heroes4_cht-1.x.gzf` (also in the
Ghidra project as `/cht-1.x/heroes4_named`). Static-init routines are named by owner
(`<owner>$init/$ctor/$atexit/$dtor`, gruntz convention) by `tools/name_dyninit.py`.

Facts established (they correct §6 hypotheses):
- **Link order holds.** `.text` starts abbreviate_number / insert_commas / abbreviate_number,
  like the map. The ".CRT$XCU" table (VA 0x982004, 3,060 entries) is strictly increasing.
  The earlier "0xd4 first function" was a Ghidra misdetection.
- **Retail was built with `/Gr`**: functions that are `__cdecl` in the debug map are
  `__fastcall` in release (ECX/EDX for the first two dword args, the hidden return pointer counts). `tools/sig.py` models it.
- Ctors of classes with virtual bases take a hidden int (`ret 4` extra). 142 such classes.
- **Inline COMDATs are emitted next to their first user** in release, but at the end of the obj in
  debug. So `align.py` is two-pass: ordered DP over plain/static/$E/thunk, then unordered
  assignment of inline items inside obj bands.
- Ghidra misses ~8.3k functions reached only through pointers; `PaddedFunctionStarts.java`
  adds them (16-byte aligned starts after `ret`/`jmp` + 0x90/0xCC padding).
- Ghidra's RTTI analyzer builds no vftables for this VC6 binary; `tools/rtti.py` parses
  TD/COL/CHD directly. Vftable pairing is per class, by name and then by order.
- 1,750 vtordisp/adjustor thunks, 1,081 deleting dtors (shape: ret 4 + `test x,1` + call
  operator delete @0x4447b0), 346 ICF-folded functions (held out; they carry many names),
  1,453 atexit destructors referenced by XCU targets. EH funclets start at rva 0x46366e.

Accuracy checks:
- `evaluate.py` hierarchy: derived-class vftable slot k must carry the same method name as the base's
  slot k. 1,085 agree / 92 disagree over non-trivial overridden slots.
- `evaluate.py` stability: a run without any vftable evidence (`--no-vft`) agrees on 88% of common pairs (static-init routines are paired exactly and not counted).

Next:
- Hand-review the tier C matches.
- Name the remaining CRT with FID (LIBCMT, not the map's LIBCMTD).
- Propagate slot names down the hierarchy for unmatched overrides.
- Then CHT 1.x → GOG 3.0 (direct, same aligner in release↔release mode).
