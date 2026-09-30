"""Assembly matching must mask relocation, not semantic constants or ambiguity."""
import unittest

import release_align as ra


class AssemblyTests(unittest.TestCase):
    def asm(self, code, address=0x401000):
        return ra.normalize(bytes.fromhex(code), address,
                            [(".text", 0x401000, 0x500000), (".data", 0x600000, 0x700000)])

    def test_call_destinations_are_held_out(self):
        a, b = self.asm("e8fb0f0000 c3"), self.asm("e8fb1f0000 c3")
        self.assertEqual(a['tokens'], b['tokens'])
        self.assertNotEqual(a['calls'], b['calls'])

    def test_image_addresses_are_masked_but_field_offsets_and_constants_remain(self):
        self.assertEqual(self.asm("b800006000 c3")['tokens'], self.asm("b800106000 c3")['tokens'])
        self.assertNotEqual(self.asm("b801000000 c3")['tokens'], self.asm("b802000000 c3")['tokens'])
        self.assertNotEqual(self.asm("8b4104 c3")['tokens'], self.asm("8b4108 c3")['tokens'])

    def test_local_branch_destinations_remain(self):
        self.assertNotEqual(self.asm("7401 90 90 c3")['tokens'], self.asm("7402 90 90 c3")['tokens'])

    def test_ret_cleanup_is_separate_from_tokens(self):
        a, b = self.asm("c20400"), self.asm("c20800")
        self.assertEqual(a['tokens'], b['tokens'])
        self.assertEqual((a['retn'], b['retn']), (4, 8))

    def test_incomplete_disassembly_is_rejected(self):
        self.assertFalse(self.asm("90 0f")['complete'])

    def test_unique_anchors_reject_duplicates_and_cleanup_contradictions(self):
        f = dict(digest="same", tokens=["instruction"]*8, size=32, masked=0, retn=4)
        self.assertEqual(ra.exact_pairs([f], [f]), [(0, 0)])
        self.assertEqual(ra.exact_pairs([f, f], [f]), [])
        self.assertEqual(ra.exact_pairs([f], [dict(f, retn=8)]), [])
        self.assertEqual(ra.exact_pairs([f], [dict(f, retn=8)], use_retn=False), [(0, 0)])

    def test_ordered_core_does_not_force_missing_or_crossing_pairs(self):
        self.assertEqual(ra.ordered_pairs(3, 3, {(0, 0): 1, (2, 2): 1}), [(0, 0), (2, 2)])
        self.assertEqual(ra.ordered_pairs(2, 2, {(0, 1): 1, (1, 0): .8}), [(0, 1)])
        self.assertEqual(ra.ordered_pairs(3, 3, {}), [])

    def test_monotone_anchors_allow_unordered_exact_matches(self):
        self.assertEqual(ra.increasing([(0, 1), (1, 0), (2, 2), (3, 3)]), [(1, 0), (2, 2), (3, 3)])


if __name__ == '__main__':
    unittest.main()
