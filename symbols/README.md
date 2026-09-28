# symbols/

The leaked debug map and what `tools/` mines from it. Target-independent.

| File | What |
|---|---|
| `heroes4_debug.map` | The original MSVC 6 linker map of `heroes4_debug.exe` (Oct 2002, 71,988 symbols) |
| `symbols.tsv` | Every public and static symbol; `id` = map line number |
| `objs.tsv` | Translation units in `.text` link order |
| `segments.tsv` | Section contributions |
| `fixups_per_func.tsv` | Absolute-address fixups per function |
| `dyninit.tsv` | `_$E` static-init routines with owner-based names |
| `compgen.tsv` | Short names for other compiler-generated symbols |
