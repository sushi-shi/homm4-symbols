# HoMM4 symbols

Function and class names for Heroes of Might and Magic IV retail executables, recovered from a
leaked debug-build linker map (Oct 2002). Applies to IDA or Ghidra. Not a decompilation.

## Supported versions

| Version | `heroes4.exe` sha256 | Names |
|---|---|---|
| Traditional Chinese 1.x (`cht-1.x`) | `e8c0ad0fac9e42323785c52cfc1c0ccc74be2bd7fb26b7326a8f01a2033ddf5` | 19,411 functions, 2,605 vftables, 266 globals |
| Complete / GOG 3.0 | | not done yet |

The names only fit the exact exe above. Check yours with `sha256sum heroes4.exe`.

## IDA

```sh
python3 tools/gen_ida.py cht-1.x    # any Python 3, writes work/cht-1.x/ida_apply.py
```

Open `heroes4.exe` in IDA (7.x–9.x), let auto-analysis finish, then run `work/cht-1.x/ida_apply.py`
from File > Script file.

## Ghidra

Import and analyse `heroes4.exe`, then open Script Manager, add `tools/ghidra` to the script
directories and run `ApplyNames.java`. It asks for `maps/cht-1.x/names.tsv`.

## Tiers

Each name has a comment with its tier and evidence. **A**: exact structural evidence (vftable slot,
static-init slot, RTTI). **B**: well supported. **C**: best guess. To skip C names, pass a tier:
`gen_ida.py cht-1.x B`, or headless `ApplyNames.java <names.tsv> B`.

How the names are made and how to rebuild them: [tools/README.md](tools/README.md).
