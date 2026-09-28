"""Predict x86 stack behaviour of a function from its llvm-undname demangling.

expected_retn(demangled, release_fastcall=True) -> (callconv, retn or None)
  retn is the operand of `ret N` the callee should use (0 for cdecl);
  None when a by-value class/struct parameter makes the size unknown.

The retail builds were compiled with /Gr: functions the debug build compiled as
__cdecl (free functions, static members; not varargs) are __fastcall there. The first
two dword-sized integral/pointer arguments, counting the hidden return pointer first,
travel in ECX/EDX and the callee pops the rest. Pass release_fastcall=False for the
debug convention.
"""
import re

CONVS = ("__thiscall", "__cdecl", "__stdcall", "__fastcall")
SCALAR4 = re.compile(r"^(?:const |volatile )*(?:unsigned |signed )?"
                     r"(?:int|long|short|char|bool|float|wchar_t|enum \S.*)(?: const| volatile)*$")
SCALAR8 = re.compile(r"^(?:const )?(?:unsigned )?(?:double|__int64|long double)(?: const)?$")


def split_top(s, sep=","):
    out, depth, cur = [], 0, []
    for ch in s:
        if ch in "<([":
            depth += 1
        elif ch in ">)]":
            depth -= 1
        if ch == sep and depth == 0:
            out.append("".join(cur).strip()); cur = []
        else:
            cur.append(ch)
    if "".join(cur).strip():
        out.append("".join(cur).strip())
    return out


def param_list(dem):
    """Return (prefix, params_str) for the function's own top-level parameter list."""
    # Walk from the end: the params are the last balanced (...) group before trailing qualifiers.
    s = dem.rstrip()
    for q in (" const", " volatile", " throw()"):
        while s.endswith(q):
            s = s[: -len(q)].rstrip()
    if not s.endswith(")"):
        return None, None
    depth = 0
    for i in range(len(s) - 1, -1, -1):
        if s[i] == ")":
            depth += 1
        elif s[i] == "(":
            depth -= 1
            if depth == 0:
                return s[:i], s[i + 1:-1]
    return None, None


def type_bytes(t):
    t = t.strip()
    if t.endswith("*") or t.endswith("&") or "(" in t or t.endswith("* const") or t.endswith("*const"):
        return 4
    if SCALAR8.match(t):
        return 8
    if SCALAR4.match(t) or t.startswith("enum "):
        return 4
    if t.startswith(("class ", "struct ", "union ")):
        return None
    return None


def expected_retn(dem, release_fastcall=True):
    if not dem:
        return None, None
    prefix, params = param_list(dem)
    if prefix is None:
        return None, None
    conv = next((c for c in CONVS if c in prefix), None)
    if conv is None:
        return None, None
    plist = [] if params.strip() in ("void", "") else split_top(params)
    if "..." in plist:
        return conv, 0 if conv == "__cdecl" else None
    if conv == "__cdecl" and not release_fastcall:
        return conv, 0
    ret = prefix.split(conv)[0]
    ret = re.sub(r"^(?:public|private|protected): ", "", ret)
    ret = re.sub(r"^(?:virtual |static )", "", ret).strip()
    hidden = ret.startswith(("class ", "struct ", "union ")) and not ret.endswith(("*", "&"))
    sizes = []
    for p in plist:
        b = type_bytes(p)
        if b is None:
            return conv, None
        sizes.append((b, is_float(p)))
    if conv == "__fastcall" or conv == "__cdecl":
        # hidden return pointer first, then params; two dword integral args go in registers
        args = ([(4, False)] if hidden else []) + sizes
        regs, n = 0, 0
        for b, flt in args:
            if regs < 2 and b == 4 and not flt:
                regs += 1
            else:
                n += b
        return ("__fastcall" if conv == "__cdecl" else conv), n
    n = sum(b for b, _ in sizes) + (4 if hidden else 0)
    return conv, n


def is_float(t):
    t = t.strip()
    return not (t.endswith("*") or t.endswith("&")) and re.search(r"\b(float|double)\b", t) is not None

if __name__ == "__main__":
    import sys
    for line in sys.stdin:
        print(expected_retn(line.strip()), line.strip())
