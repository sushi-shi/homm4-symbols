"""Project layout. Every tool gets its paths from here.

  debug-symbols/heroes4_debug.map   the original symbols (input)
  binaries/<target>/heroes4.exe     retail executables (input, git-ignored; SHA256SUMS tracked)
  symbols/                          everything mined from the map (tracked)
  maps/<target>/                    finished maps (tracked):
      target.json                   exe, sha256, image base, source ("map" or a parent target)
      names.tsv                     the complete map: every name with tier, method, evidence, origin
      manual.tsv                    optional hand fixes
  work/                             regenerable intermediates (git-ignored):
      ghidra/                       Ghidra project
      bin/nw                        compiled alignment core
      <target>/features/            per-exe facts exported from Ghidra / RTTI
      <target>/*.tsv                alignment and pairing intermediates
      <target>/heroes4_<target>.gzf, ida_apply.py   generated databases / scripts
"""
import json
import os

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
MAPFILE = os.path.join(ROOT, "debug-symbols", "heroes4_debug.map")
SYMBOLS = os.path.join(ROOT, "symbols")
WORK = os.path.join(ROOT, "work")
NW = os.path.join(WORK, "bin", "nw")


def symbols(name):
    os.makedirs(SYMBOLS, exist_ok=True)
    return os.path.join(SYMBOLS, name)


def target_meta(target):
    with open(os.path.join(ROOT, "maps", target, "target.json")) as f:
        return json.load(f)


def exe(target):
    return os.path.join(ROOT, target_meta(target)["exe"])


def maps(target, name):
    d = os.path.join(ROOT, "maps", target)
    os.makedirs(d, exist_ok=True)
    return os.path.join(d, name)


def work(target, name):
    d = os.path.join(WORK, target)
    os.makedirs(d, exist_ok=True)
    return os.path.join(d, name)


def features(target, name):
    """work/<target>/features/<name>.tsv (functions, data, vftables, classes)"""
    d = os.path.join(WORK, target, "features")
    os.makedirs(d, exist_ok=True)
    return os.path.join(d, f"{name}.tsv")
