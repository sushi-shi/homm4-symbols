#!/usr/bin/env python3
"""Recover MSVC (x86) RTTI from a PE: vftables with slots, and class hierarchies.

usage: rtti.py <target_id>
writes work/<target>/features/vftables.tsv  rva, class, col_offset, subobject_base, map_name, nslots, slots
       work/<target>/features/classes.tsv   class, td_rva, bases (name@mdisp:pdisp:vdisp, in CHD order)
Map-style vftable name: ??_7<class>6B@ for the primary vftable, ??_7<class>6B<base>@ otherwise.
"""
import bisect
import struct
import os
import sys

import pefile

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import paths  # noqa: E402


def main(target):
    exe = paths.exe(target)
    pe = pefile.PE(exe, fast_load=True)
    ib = pe.OPTIONAL_HEADER.ImageBase
    img = pe.get_memory_mapped_image()
    secs = {s.Name.rstrip(b"\0").decode(): (s.VirtualAddress, s.VirtualAddress + s.Misc_VirtualSize)
            for s in pe.sections}
    text = secs[".text"]

    def u32(rva):
        return struct.unpack_from("<I", img, rva)[0]

    def in_sec(va, name):
        lo, hi = secs[name]
        return lo <= va - ib < hi

    def cstr(rva):
        end = img.index(b"\0", rva)
        return img[rva:end].decode("latin-1")

    # TypeDescriptors: {vfptr(type_info), spare, ".?A..."}
    tds = {}
    for name in (".data", ".rdata"):
        lo, hi = secs[name]
        pos = lo
        while True:
            pos = img.find(b".?A", pos, hi)
            if pos < 0:
                break
            td = pos - 8
            if td >= lo and u32(td + 4) == 0 and in_sec(u32(td), ".rdata"):
                tds[td] = cstr(pos)
            pos += 3

    # Class hierarchy descriptors / base class descriptors
    def chd_bases(chd):
        n = u32(chd + 8)
        arr = u32(chd + 12) - ib
        out = []
        for i in range(min(n, 256)):
            bcd = u32(arr + 4 * i) - ib
            td = u32(bcd) - ib
            mdisp, pdisp, vdisp = struct.unpack_from("<iii", img, bcd + 8)
            out.append((tds.get(td, "?"), mdisp, pdisp, vdisp))
        return out

    # Complete object locators: {sig 0, offset, cdOffset, pTD, pCHD}
    cols = {}
    lo, hi = secs[".rdata"]
    for rva in range(lo, hi - 20, 4):
        if u32(rva) != 0:
            continue
        td = u32(rva + 12) - ib
        if td in tds and in_sec(u32(rva + 16), ".rdata"):
            cols[rva] = (u32(rva + 4), u32(rva + 8), td, u32(rva + 16) - ib)

    col_vas = {c + ib for c in cols}
    vft = []
    for rva in range(lo, hi - 4, 4):
        v = u32(rva)
        if v in col_vas:
            start = rva + 4
            slots = []
            p = start
            while p < hi:
                t = u32(p)
                if not (text[0] <= t - ib < text[1]):
                    break
                slots.append(t - ib)
                p += 4
            vft.append((start, v - ib, slots))

    # A vftable's slots end where the next vftable's COL pointer begins.
    starts = sorted(s for s, _, _ in vft)
    classes = {}
    with open(paths.features(target, "vftables"), "w") as f:
        f.write("rva\tclass\tcol_offset\tsubobject_base\tmap_name\tnslots\tslots\n")
        for start, col, slots in sorted(vft):
            i = bisect.bisect_right(starts, start)
            if i < len(starts):
                limit = (starts[i] - 4 - start) // 4
                slots = slots[:max(limit, 0)]
            off, cd, td, chd = cols[col]
            cls = tds[td]
            bases = chd_bases(chd)
            classes[cls] = (td, bases)
            sub = ""
            if off != 0:
                cands = [b for b in bases[1:] if b[1] == off and b[2] == -1]
                sub = cands[0][0] if cands else "?"
            body = cls[4:]  # ".?AVname@@" -> "name@@"
            map_name = "??_7" + body + "6B" + (sub[4:] if sub else "") + "@"
            f.write(f"{start:x}\t{cls}\t{off:x}\t{sub}\t{map_name}\t{len(slots)}\t"
                    + ",".join(f"{s:x}" for s in slots) + "\n")
    with open(paths.features(target, "classes"), "w") as f:
        f.write("class\ttd_rva\tbases\n")
        for cls, (td, bases) in sorted(tds_items(tds, classes)):
            f.write(f"{cls}\t{td:x}\t" + ",".join(f"{b[0]}@{b[1]}:{b[2]}:{b[3]}" for b in bases) + "\n")
    print(f"{len(tds)} type descriptors, {len(cols)} COLs, {len(vft)} vftables", file=sys.stderr)


def tds_items(tds, classes):
    for td, name in tds.items():
        yield name, classes.get(name, (td, []))


if __name__ == "__main__":
    main(sys.argv[1])
