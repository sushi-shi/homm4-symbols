# HoMM4 symbols

Function and class names for Heroes of Might and Magic IV retail executables, recovered from a
leaked debug-build linker map (Oct 2002). Applies to IDA or Ghidra. Not a decompilation.

## Supported versions

**Traditional Chinese 1.x** (`cht-1.x`)
- `heroes4.exe` sha256: `e8c0ad0fac9e42323785c52cfc1c0ccc74be2bd7fb26b7326a8f01a2033ddf5`
- 19,411 functions (A 7,642 · B 5,148 · C 6,621)
- 2,605 vftables (A 1,821 · B 784)
- 266 globals (B 176 · C 90)
- 9,976 RTTI descriptors (A), identified by type names and validated pointer chains

**Complete / GOG 3.0**
- not done yet

The names only fit these exact exes. Check yours with `sha256sum heroes4.exe`.

## IDA

```sh
python3 tools/gen_ida.py cht-1.x    # any Python 3, writes work/cht-1.x/ida_apply.idc
```

Open `heroes4.exe` in IDA (7.x–9.x, Free or Pro), let auto-analysis finish, then run
`work/cht-1.x/ida_apply.idc` from File > Script file.

## Ghidra

Import and analyse `heroes4.exe`, then open Script Manager, add `tools/ghidra` to the script
directories and run `ApplyNames.java`. It asks for `maps/cht-1.x/names.tsv`.

## Tiers

Each name has a comment with its tier and evidence. **A**: exact structural evidence (vftable slot,
static-init slot, RTTI). **B**: well supported. **C**: best guess. To skip C names, pass a tier:
`gen_ida.py cht-1.x B`, or headless `ApplyNames.java <names.tsv> B`.

How the names are made and how to rebuild them: [tools/README.md](tools/README.md).

## Synthetic game structure

`tools/py tools/gen_structure.py cht-1.x` generates a flat `game/` source inventory under
`src-structure/`, with functions, statics, globals, and current retail mappings.
`units.tsv` gives per-file counters; `coverage.tsv` gives overall accounted/unaccounted counts
and A/B/C breakdowns. Standard-library entries are skipped in the source view and counted
separately. The `.cpp` files use readable C++ stubs and data declarations with compact
mapping annotations; function bodies remain explicit placeholders.
`VA_CHT_1(address, size)` and `DATA_CHT_1(address)` identify absolute addresses in the
Traditional Chinese 1.x executable. Mapping confidence appears separately as `confidence:A/B/C`.
Compiler-generated helpers use `VA_CHT_1_COMPGEN(address, size, kind, owner)`.
RTTI, vtables, and other generated data use `DATA_CHT_1_COMPGEN(address, "symbol")`;
unmapped data uses `UNACCOUNTED` in place of the address.
