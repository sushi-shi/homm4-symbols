#!/usr/bin/env bash
# map -> <target>: mine the map, export target facts, align, write maps/<target>/, generate DBs.
# Usage: tools/pipeline.sh cht-1.x      (run tools/setup_target.sh <target> once first)
set -euo pipefail
cd "$(dirname "$0")/.."
T=${1:?target id}
export GHIDRA_HEADLESS_MAXMEM=6G
GH="ghidra-analyzeHeadless work/ghidra homm4/$T -process heroes4.exe -noanalysis -readOnly -scriptPath tools/ghidra"

# 1. the original symbols -> symbols/
tools/py tools/mine_map.py
tools/py tools/mine_fixups.py
# 2. facts about the target exe -> work/<target>/features/
$GH -postScript ExportFeatures.java "$PWD/work/$T/features" > "work/$T/ghidra-export.log" 2>&1
tools/py tools/rtti.py "$T"
# 3. pairing and alignment -> work/<target>/
tools/py tools/name_dyninit.py          # static-init roles (symbols/dyninit.tsv, work/<target>/dyninit.tsv)
tools/py tools/match_vftables.py "$T"
tools/py tools/align.py "$T"
tools/py tools/align.py "$T" --no-vft
tools/py tools/evaluate.py "$T"
# 4. the map -> maps/<target>/
tools/py tools/emit_edges.py "$T"       # maps/<target>/from-map.tsv
tools/py tools/compose.py "$T"          # maps/<target>/names.tsv
# 5. generated databases -> work/<target>/
tools/py tools/gen_ida.py "$T"
$GH -postScript ApplyNames.java "$PWD/maps/$T/names.tsv" C "$PWD/work/$T/heroes4_$T.gzf" \
  > "work/$T/ghidra-apply.log" 2>&1
grep -h 'applied\|packed' "work/$T/ghidra-apply.log"
