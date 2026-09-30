"""RTTI labels must follow checked pointers and unambiguous map identities."""
import struct
import unittest
from types import SimpleNamespace
from unittest.mock import patch

import rtti_join as rtti


class RTTIJoinTests(unittest.TestCase):
    def reader(self):
        self.image = bytearray(0x500)
        base = 0x400000
        def words(rva, *values):
            struct.pack_into("<" + "I" * len(values), self.image, rva, *values)
        words(0x11c, base + 0x180)
        words(0x120, base + 0x50)
        words(0x180, 0, 0, 0, base + 0x300, base + 0x1a0)
        words(0x1a0, 0, 0, 1, base + 0x1b0)
        words(0x1b0, base + 0x1c0)
        struct.pack_into("<IIiiiI", self.image, 0x1c0, base + 0x300, 0, 0, -1, 0, 0)
        words(0x300, base + 0x100, 0)
        name = b".?AVexample@@\0"
        self.image[0x308:0x308 + len(name)] = name
        return rtti.RTTIReader(self.image, base, [(".text", 0, 0x100), (".rdata", 0x100, 0x300),
                                               (".data", 0x300, 0x500)], {0x300: ".?AVexample@@"})

    def test_pointer_chain_and_descriptor_identity(self):
        h = self.reader().hierarchy(0x120)
        self.assertEqual((h['col'], h['chd'], h['array'], h['td']), (0x180, 0x1a0, 0x1b0, 0x300))
        b = h['entries'][0]
        self.assertEqual(rtti.bcd_name(b['name'], b['pmd'], b['flags']), "??_R1A@?0A@A@example@@8")

    def test_invalid_pointer_is_rejected(self):
        reader = self.reader()
        struct.pack_into("<I", self.image, 0x1ac, 0x4004fc)
        with self.assertRaises(ValueError):
            reader.hierarchy(0x120)

    def test_invalid_subtree_is_rejected(self):
        reader = self.reader()
        struct.pack_into("<I", self.image, 0x1c4, 10)
        with self.assertRaises(ValueError):
            reader.hierarchy(0x120)

    def test_type_name_is_checked_against_bytes(self):
        reader = self.reader()
        reader.types[0x300] = ".?AVdifferent@@"
        with self.assertRaises(ValueError):
            reader.hierarchy(0x120)

    def test_msvc_integer_encoding(self):
        for number, encoded in [(0, "A@"), (-1, "?0"), (8, "7"), (9, "8"), (10, "9"), (16, "BA@"), (-16, "?BA@")]:
            self.assertEqual(rtti.msvc_integer(number), encoded)

    def test_duplicates_and_aliases_are_held_out(self):
        symbols = [dict(id="1", mangled="??_R3example@@8")]
        row = dict(name=symbols[0]['mangled'], rva=0x100, size=16, method="rtti-hierarchy-pointer", evidence="pointer chain")
        self.assertEqual(len(rtti.unique_pairs(symbols, [row, row])), 1)
        self.assertEqual(rtti.unique_pairs(symbols, [row, dict(row, rva=0x200)]), [])
        self.assertEqual(rtti.unique_pairs(symbols + [dict(symbols[0], id="2")], [row]), [])
        other = dict(id="2", mangled="??_R3other@@8")
        self.assertEqual(rtti.unique_pairs(symbols + [other], [row, dict(row, name=other['mangled'])]), [])

    def test_primary_vftable_copies_and_duplicate_map_names_are_held_out(self):
        symbol = dict(id="1", mangled="??_7example@@6B@")
        row = dict(name=symbol['mangled'], rva=0x100, size=4,
                   method="rtti-primary-vftable", evidence="checked hierarchy")
        self.assertEqual(len(rtti.unique_pairs([symbol], [row], "??_7")), 1)
        self.assertEqual(rtti.unique_pairs([symbol], [row, dict(row, rva=0x200)], "??_7"), [])
        self.assertEqual(rtti.unique_pairs([symbol, dict(symbol, id="2")], [row], "??_7"), [])

    def primary_pairs(self, reader):
        pe = SimpleNamespace(
            sections=[SimpleNamespace(Name=n.encode(), VirtualAddress=lo, Misc_VirtualSize=hi-lo)
                      for n, lo, hi in reader.sections],
            OPTIONAL_HEADER=SimpleNamespace(ImageBase=reader.base),
            get_memory_mapped_image=lambda: reader.image)
        inputs = [[dict(td_rva="300", **{"class": ".?AVexample@@"})],
                  [dict(rva="120", nslots="1")],
                  [dict(id="1", mangled="??_7example@@6B@")]]
        with (patch.object(rtti.pefile, "PE", return_value=pe),
              patch.object(rtti.paths, "exe", return_value="unused.exe"),
              patch.object(rtti.paths, "features", return_value="unused.tsv"),
              patch.object(rtti, "read_tsv", side_effect=inputs)):
            return rtti.primary_vftables("test")

    def test_primary_vftable_revalidates_hierarchy_and_code(self):
        reader = self.reader()
        pairs = self.primary_pairs(reader)
        self.assertEqual([(r['rva'], r['size'], r['tier']) for r in pairs], [(0x120, 4, 'A')])
        struct.pack_into('<I', self.image, 0x120, 0x400300)  # slot points to data
        self.assertEqual(self.primary_pairs(reader), [])

    def test_secondary_construction_and_malformed_tables_are_excluded(self):
        for offset, value in [(0x184, 4), (0x188, 4), (0x1ac, 0x4004fc)]:
            with self.subTest(offset=offset):
                reader = self.reader()
                struct.pack_into('<I', self.image, offset, value)
                self.assertEqual(self.primary_pairs(reader), [])


if __name__ == '__main__':
    unittest.main()
