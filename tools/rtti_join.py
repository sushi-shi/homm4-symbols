#!/usr/bin/env python3
"""Match VC6 RTTI data through exact type names and validated retail pointers.

The existing RTTI extractor supplies TypeDescriptors and paired vftables. Walk
their COL -> CHD -> base array -> BCD links, retain only unique normalized map
identities, and return data labels for emit_map.py. Never infer function names.
"""
import collections
import csv
import struct
import sys

import pefile

import match_vftables
import paths


def read_tsv(path):
    with open(path) as f:
        return list(csv.DictReader(f, delimiter="\t"))


def msvc_integer(value):
    """VC mangled integer: 0 = A@, 1..10 = 0..9, otherwise A..P hex."""
    if value < 0:
        return "?" + msvc_integer(-value)
    if 1 <= value <= 10:
        return str(value - 1)
    return "".join(chr(ord("A") + int(d, 16)) for d in f"{value:x}") + "@"


def bcd_name(type_name, pmd, attributes):
    return "??_R1" + "".join(msvc_integer(n) for n in (*pmd, attributes)) + type_name[4:] + "8"


class RTTIReader:
    def __init__(self, image, image_base, sections, types):
        self.image = image
        self.base = image_base
        self.sections = sections
        self.types = types

    def check(self, rva, size, names=(".rdata",)):
        if size <= 0 or rva < 0 or rva + size > len(self.image):
            raise ValueError("RTTI record outside image")
        if not any(lo <= rva and rva + size <= hi for name, lo, hi in self.sections if name in names):
            raise ValueError("RTTI record outside expected section")

    def words(self, rva, count):
        self.check(rva, 4 * count)
        return struct.unpack_from("<" + "I" * count, self.image, rva)

    def type_descriptor(self, rva):
        self.check(rva, 9, (".data", ".rdata"))
        vptr, spare = struct.unpack_from("<II", self.image, rva)
        self.check(vptr - self.base, 4)
        if spare:
            raise ValueError("nonzero TypeDescriptor spare")
        end = self.image.find(b"\0", rva + 8, rva + 4104)
        if end < 0:
            raise ValueError("unterminated RTTI type name")
        self.check(rva, end + 1 - rva, (".data", ".rdata"))
        name = self.image[rva + 8:end].decode("ascii")
        if name != self.types.get(rva) or not name.startswith((".?AV", ".?AU")):
            raise ValueError("TypeDescriptor name mismatch")
        return name, end + 1 - rva

    def hierarchy(self, vft_rva):
        col = self.words(vft_rva - 4, 1)[0] - self.base
        signature, offset, cd_offset, td_va, chd_va = self.words(col, 5)
        if signature != 0:
            raise ValueError("unsupported COL signature")
        td, chd = td_va - self.base, chd_va - self.base
        name, _ = self.type_descriptor(td)
        signature, attributes, count, arr_va = self.words(chd, 4)
        if signature or not 1 <= count <= 256:
            raise ValueError("invalid class hierarchy header")
        array = arr_va - self.base
        entries = []
        for i, bcd_va in enumerate(self.words(array, count)):
            bcd = bcd_va - self.base
            self.check(bcd, 24)
            btd_va, contained, md, pd, vd, flags = struct.unpack_from("<IIiiiI", self.image, bcd)
            bname, _ = self.type_descriptor(btd_va - self.base)
            if contained > count - i - 1:
                raise ValueError("base subtree exceeds hierarchy")
            entries.append(dict(rva=bcd, name=bname, pmd=(md, pd, vd), flags=flags, contained=contained))
        if entries[0]["name"] != name or entries[0]["pmd"] != (0, -1, 0) or entries[0]["contained"] != count - 1:
            raise ValueError("hierarchy does not start with complete class")
        return dict(col=col, offset=offset, cd_offset=cd_offset, td=td, name=name,
                    chd=chd, attributes=attributes, array=array, entries=entries)


def unique_pairs(symbols, candidates, prefix="??_R"):
    """Reject duplicate map identities, multiple target copies, and address aliases."""
    maps = collections.defaultdict(list)
    for s in symbols:
        if s["mangled"].startswith(prefix):
            maps[match_vftables.norm(s["mangled"])].append(s)
    targets = collections.defaultdict(lambda: collections.defaultdict(list))
    for row in candidates:
        targets[match_vftables.norm(row["name"])][row["rva"]].append(row)
    possible = []
    for name, addresses in targets.items():
        if len(maps[name]) != 1 or len(addresses) != 1:
            continue
        rows = next(iter(addresses.values()))
        if len({(r["size"], r["method"]) for r in rows}) != 1:
            continue
        row = dict(rows[0], map_id=maps[name][0]["id"], tier="A")
        row["evidence"] = " | ".join(sorted({r["evidence"] for r in rows}))
        possible.append(row)
    aliases = collections.Counter(r["rva"] for r in possible)
    return sorted((r for r in possible if aliases[r["rva"]] == 1), key=lambda r: r["rva"])


def primary_vftables(target):
    """Exact primary table identities, checked independently of ordered pairing.

    The size is the observed retail slot span, never a debug-map symbol gap.
    Secondary/construction tables are deliberately outside this first pass.
    """
    pe = pefile.PE(paths.exe(target), fast_load=True)
    sections = [(s.Name.rstrip(b"\0").decode(), s.VirtualAddress, s.VirtualAddress + s.Misc_VirtualSize)
                for s in pe.sections]
    types = {int(r["td_rva"], 16): r["class"] for r in read_tsv(paths.features(target, "classes"))}
    reader = RTTIReader(pe.get_memory_mapped_image(), pe.OPTIONAL_HEADER.ImageBase, sections, types)
    candidates = []
    for v in read_tsv(paths.features(target, "vftables")):
        rva, count = int(v["rva"], 16), int(v["nslots"])
        try:
            h = reader.hierarchy(rva)
            if h["offset"] or h["cd_offset"] or count < 1:
                continue
            slots = reader.words(rva, count)
            for pointer in slots:
                reader.check(pointer - reader.base, 1, (".text",))
        except (ValueError, struct.error):
            continue
        candidates.append(dict(name="??_7" + h["name"][4:] + "6B@", rva=rva,
                               size=count * 4, method="rtti-primary-vftable",
                               evidence=f"type-name={h['name']};vft={rva:x};col={h['col']:x};"
                               f"td={h['td']:x};chd={h['chd']:x};offset=0;cdOffset=0;"
                               f"code-slots={count};validated-hierarchy"))
    return unique_pairs(read_tsv(paths.symbols("symbols.tsv")), candidates, "??_7")


def join(target):
    pe = pefile.PE(paths.exe(target), fast_load=True)
    image = pe.get_memory_mapped_image()
    sections = [(s.Name.rstrip(b"\0").decode(), s.VirtualAddress, s.VirtualAddress + s.Misc_VirtualSize)
                for s in pe.sections]
    types = {int(r["td_rva"], 16): r["class"] for r in read_tsv(paths.features(target, "classes"))}
    reader = RTTIReader(image, pe.OPTIONAL_HEADER.ImageBase, sections, types)
    candidates = []

    def add(name, rva, size, method, evidence):
        candidates.append(dict(name=name, rva=rva, size=size, method=method, evidence=evidence))

    for td in sorted(types):
        try:
            name, size = reader.type_descriptor(td)
        except (ValueError, struct.error):
            continue
        add("??_R0" + name[1:] + "@8", td, size, "rtti-type-name", f"type-name={name};td={td:x};validated-header")

    for vft in read_tsv(paths.work(target, "vftables.tsv")):
        if vft["how"] != "name":
            continue  # ordered vftable pairing alone is not an exact COL identity
        rva = int(vft["rva"], 16)
        try:
            h = reader.hierarchy(rva)
        except (ValueError, struct.error):
            continue
        if match_vftables.vft_class(vft["map_name"]) != match_vftables.norm(h["name"][4:]):
            continue
        # The vftable at the anchor must contain a code pointer.
        try:
            entry = reader.words(rva, 1)[0] - reader.base
            reader.check(entry, 1, (".text",))
        except ValueError:
            continue
        evidence = (f"type-name={h['name']};vft={rva:x};col={h['col']:x};td={h['td']:x};"
                    f"chd={h['chd']:x};offset={h['offset']};cdOffset={h['cd_offset']};validated-hierarchy")
        body = h["name"][4:]
        add("??_R4" + vft["map_name"][4:], h["col"], 20, "rtti-col-pointer", evidence)
        add("??_R3" + body + "8", h["chd"], 16, "rtti-hierarchy-pointer", evidence)
        add("??_R2" + body + "8", h["array"], 4 * len(h["entries"]), "rtti-base-array-pointer", evidence)
        for entry in h["entries"]:
            name = bcd_name(entry["name"], entry["pmd"], entry["flags"])
            # Identity is encoded in the descriptor's own type and PMD/flags,
            # not in the derived class whose array happens to reference it.
            proof = (f"type-name={entry['name']};bcd={entry['rva']:x};"
                     f"pmd={','.join(map(str, entry['pmd']))};attributes={entry['flags']};validated-hierarchy-link")
            add(name, entry["rva"], 24, "rtti-base-descriptor", proof)
    return unique_pairs(read_tsv(paths.symbols("symbols.tsv")), candidates)


if __name__ == "__main__":
    rows = join(sys.argv[1])
    writer = csv.DictWriter(sys.stdout, ["map_id", "rva", "size", "tier", "name", "method", "evidence"], delimiter="\t")
    writer.writeheader()
    for row in rows:
        writer.writerow(dict(row, rva=f"{row['rva']:x}", size=f"{row['size']:x}"))
