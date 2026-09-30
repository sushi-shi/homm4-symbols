"""The initial structural pass must not silently consume speculative mappings."""
import csv
import hashlib
import json
import tempfile
import unittest
from pathlib import Path
from unittest.mock import patch

import emit_map
import release_align


class StructuralEmissionTests(unittest.TestCase):
    def test_only_checked_structures_with_provenance(self):
        with tempfile.TemporaryDirectory() as d:
            root = Path(d)
            exe = root / "heroes4.exe"
            exe.write_bytes(b"test image")
            # A manual override must not enter the structural-only output.
            (root / "manual.tsv").write_text("rva\tmangled\tnote\n30\tunverified\tmanual\n")
            symbol = dict(id="1", mangled="??_7example@@6B@", demangled="example vftable",
                          va="a00000", obj="example.obj")
            proposal = dict(rva=0x20, size=4, tier="A", map_id="1",
                            method="rtti-primary-vftable", evidence="validated pointer chain")
            with (patch.object(emit_map.paths, "target_meta", return_value={
                    "sha256": hashlib.sha256(exe.read_bytes()).hexdigest(),
                    "vftable_function_recovery": True}),
                  patch('vftable_functions.main', side_effect=AssertionError('no function recovery')),
                  patch('vftable_functions.load_checked', side_effect=AssertionError('no function certificates')),
                  patch.object(emit_map.paths, "exe", return_value=str(exe)),
                  patch.object(emit_map.paths, "maps", side_effect=lambda t, n: str(root / n)),
                  patch.object(emit_map, "read_tsv", return_value=[symbol]) as read,
                  patch.object(emit_map.dyninit_join, "join", side_effect=AssertionError("no XCU assumptions")),
                  patch.object(emit_map.rtti_join, "primary_vftables", return_value=[proposal]),
                  patch.object(emit_map.rtti_join, "join", return_value=[])):
                emit_map.main("test", structural_only=True)
                self.assertEqual(read.call_count, 1)  # symbols only, no alignment or manual files
            with (root / "names.tsv").open() as f:
                rows = list(csv.DictReader(f, delimiter="\t"))
            self.assertEqual(len(rows), 1)
            self.assertEqual((rows[0]["tier"], rows[0]["kind"]), ("A", "vftable"))
            self.assertEqual(rows[0]["map_id"], "1")
            self.assertEqual(rows[0]["evidence"], proposal["evidence"])

    def test_wrong_executable_is_rejected_before_emission(self):
        with tempfile.NamedTemporaryFile() as exe:
            with (patch.object(emit_map.paths, "target_meta", return_value={"sha256": "wrong"}),
                  patch.object(emit_map.paths, "exe", return_value=exe.name)):
                with self.assertRaisesRegex(ValueError, "SHA-256"):
                    emit_map.main("test", structural_only=True)


class ReleaseEmissionTests(unittest.TestCase):
    def transfer(self, source_tier, stable=True, stale=False, conflict=False):
        with tempfile.TemporaryDirectory() as d:
            root = Path(d)
            origin = dict.fromkeys(emit_map.COLUMNS, "")
            origin.update(rva="10", size="40", kind="func", tier=source_tier, name="?method@@",
                          map_id="123", map_va="400010", obj="test.obj", method="align-order", evidence="source proof")
            match = dict.fromkeys(release_align.COLUMNS, "")
            match.update(source_rva="10", rva="20", size="40", method="asm-unique", similarity="1.0",
                         hop_tier="B", evidence="assembly proof")
            for filename, fields, rows in [("source-names.tsv", emit_map.COLUMNS, [origin]),
                                           ("release.tsv", release_align.COLUMNS, [match]),
                                           ("release_noretn.tsv", release_align.COLUMNS, [match] if stable else [])]:
                with (root/filename).open('w') as f:
                    w = csv.DictWriter(f, fields, delimiter='\t'); w.writeheader(); w.writerows(rows)
            manifest = dict(source="source", target="target", version=release_align.VERSION,
                            source_sha256="hash", target_sha256="hash", source_names_sha256="hash",
                            source_features_sha256="hash", target_features_sha256="hash", pairs_sha256="hash")
            if stale:
                manifest['source_sha256'] = "old hash"
            for filename in ("release.json", "release_noretn.json"):
                (root/filename).write_text(json.dumps(manifest))
            with (patch.object(release_align, "sha", return_value="hash"),
                  patch("release_evaluate.slot_expectations", return_value={0x10: 0x30} if conflict else {}),
                  patch.object(emit_map.paths, "exe", return_value="unused.exe"),
                  patch.object(emit_map.paths, "features", return_value="unused.tsv"),
                  patch.object(emit_map.paths, "maps", return_value=str(root/"source-names.tsv")),
                  patch.object(emit_map.paths, "work", side_effect=lambda t, n: str(root/n))):
                return emit_map.release_names("target", "source")

    def test_transferred_name_never_exceeds_source_confidence(self):
        for source_tier, expected in [("A", "B"), ("B", "B"), ("C", "C"), ("D", "D")]:
            row, = self.transfer(source_tier)
            self.assertEqual(row['tier'], expected)
            self.assertEqual((row['via'], row['map_id'], row['obj']), ('10', '123', 'test.obj'))
            self.assertIn('source proof', row['evidence'])

    def test_unstable_correspondence_is_c(self):
        self.assertEqual(self.transfer("A", stable=False)[0]['tier'], "C")

    def test_stale_inputs_are_rejected(self):
        with self.assertRaisesRegex(ValueError, "stale"):
            self.transfer("A", stale=True)

    def test_known_slot_conflict_is_withheld(self):
        self.assertEqual(self.transfer("A", conflict=True), [])


class ManualReviewTests(unittest.TestCase):
    def apply(self, rows, reviews, bad_hash=False, unreviewed_d=False, certificates=None):
        with tempfile.TemporaryDirectory() as d:
            root = Path(d)
            exe = root / "heroes4.exe"
            exe.write_bytes(b"reviewed executable")
            digest = hashlib.sha256(exe.read_bytes()).hexdigest()
            fields = ["case_id", "rva", "name", "map_id", "action", "evidence", "exe_sha256"]
            with (root / "reviews.tsv").open("w") as f:
                w = csv.DictWriter(f, fields, delimiter="\t")
                w.writeheader()
                for r in reviews:
                    w.writerow(dict(case_id="R1", evidence="Raw body contradicts the name",
                                    exe_sha256="wrong" if bad_hash else digest, **r))
            with (patch.object(emit_map.paths, "exe", return_value=str(exe)),
                  patch.object(emit_map.paths, "target_meta", return_value={
                      "sha256": digest, "unreviewed_function_tier": "D" if unreviewed_d else "",
                      "vftable_function_recovery": certificates is not None}),
                  patch('vftable_functions.load_checked', return_value=certificates or {}),
                  patch.object(emit_map.paths, "maps", side_effect=lambda t,n: str(root/n))):
                return emit_map.apply_reviews("test", rows)

    def test_veto_applies_even_to_a_or_manual_name(self):
        rows = {16: dict(name="bad", map_id="1", tier="A", method="manual", evidence="old")}
        self.assertEqual(self.apply(rows, [dict(rva="10", name="bad", map_id="1", action="withhold")]), {})
        self.assertIn(16, rows)  # does not mutate its input

    def test_cap_is_idempotent_and_keep_never_promotes(self):
        rows = {16: dict(name="uncertain", map_id="1", tier="B", evidence="asm")}
        review = dict(rva="10", name="uncertain", map_id="1", action="cap-C")
        capped = self.apply(rows, [review])
        self.assertEqual(capped[16]["tier"], "C")
        self.assertEqual(capped, self.apply(capped, [review]))
        self.assertEqual(capped, self.apply(capped, [dict(review, action="keep")]))

    def test_changed_identity_is_not_rejected(self):
        rows = {16: dict(name="new", map_id="2", tier="B", evidence="new")}
        self.assertEqual(rows, self.apply(rows, [dict(rva="10", name="old", map_id="1", action="withhold")]))

    def test_changed_executable_rejects_review(self):
        with self.assertRaisesRegex(ValueError, "SHA-256"):
            self.apply({}, [dict(rva="10", name="old", map_id="1", action="withhold")], bad_hash=True)

    def test_unreviewed_policy_preserves_reviews_and_structures(self):
        rows = {i: dict(name=str(i), map_id=str(i), kind="func", tier="B", evidence="asm")
                for i in range(16, 21)}
        rows[20]["kind"] = "vftable"
        reviews = [dict(rva="10", name="16", map_id="16", action="keep"),
                   dict(rva="11", name="17", map_id="17", action="cap-C"),
                   dict(rva="12", name="18", map_id="18", action="withhold"),
                   dict(rva="13", name="obsolete", map_id="old", action="keep")]
        result = self.apply(rows, reviews, unreviewed_d=True)
        self.assertEqual({i: r["tier"] for i, r in result.items()}, {16: "B", 17: "C", 19: "D", 20: "B"})
        self.assertIn("review-status=unreviewed", result[19]["evidence"])
        self.assertEqual(result, self.apply(result, reviews, unreviewed_d=True))

    def test_c_cap_never_promotes_d(self):
        rows = {16: dict(name="uncertain", map_id="1", tier="D", evidence="asm")}
        result = self.apply(rows, [dict(rva="10", name="uncertain", map_id="1", action="cap-C")])
        self.assertEqual(result[16]["tier"], "D")

    def test_structural_a_preserves_manual_veto_caps_and_exact_identity(self):
        rows = {i: dict(name=str(i), map_id=str(i), kind='func', tier='D',
                        evidence='asm;review-status=unreviewed;classification=D:not-a-best-guess')
                for i in range(16, 20)}
        certs = {(i, str(i), str(i)): dict(rva=f'{i:x}', map_id=str(i), evidence='checked slots')
                 for i in range(16, 19)}
        certs[(19, 'old', 'old')] = dict(rva='13', map_id='old', evidence='obsolete')
        reviews = [dict(rva='11', name='17', map_id='17', action='cap-C'),
                   dict(rva='12', name='18', map_id='18', action='withhold')]
        result = self.apply(rows, reviews, unreviewed_d=True, certificates=certs)
        self.assertEqual({i:r['tier'] for i,r in result.items()}, {16:'A', 17:'C', 19:'D'})
        self.assertNotIn('review-status=unreviewed', result[16]['evidence'])
        self.assertEqual(result, self.apply(result, reviews, unreviewed_d=True, certificates=certs))


if __name__ == "__main__":
    unittest.main()
