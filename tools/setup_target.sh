#!/usr/bin/env bash
# One-time per target: build the alignment core, import + analyse the exe into the Ghidra
# project (work/ghidra, folder /<target>), and add the functions Ghidra misses.
# Usage: tools/setup_target.sh cht-1.x      (needs maps/<target>/target.json)
set -euo pipefail
cd "$(dirname "$0")/.."
T=${1:?target id}
meta() { tools/py -c "import sys; sys.path.insert(0, 'tools'); import paths; print(paths.target_meta('$T')['$1'])"; }
EXE=$(meta exe)
SCAN_END=$(tools/py -c 'import sys; sys.path.insert(0, "tools"); import paths; m = paths.target_meta(sys.argv[1]); print(m.get("funclets_rva") or m["padded_scan_end_rva"])' "$T")
mkdir -p work/bin work/ghidra "work/$T"
[ -x work/bin/nw ] || nix shell --offline nixpkgs#gcc -c gcc -O2 -o work/bin/nw tools/nw.c -lm
export GHIDRA_HEADLESS_MAXMEM=6G
ghidra-analyzeHeadless work/ghidra homm4/"$T" -import "$EXE" -overwrite -loader PeLoader \
  -analysisTimeoutPerFile 7200 > "work/$T/ghidra-import.log" 2>&1
ghidra-analyzeHeadless work/ghidra homm4/"$T" -process heroes4.exe -scriptPath tools/ghidra \
  -postScript PaddedFunctionStarts.java "$SCAN_END" > "work/$T/ghidra-padded.log" 2>&1
grep -h 'candidates' "work/$T/ghidra-padded.log"
