import hashlib
import json
from pathlib import Path
import tempfile
import unittest
from unittest.mock import patch
import vftable_functions as vf
from vftable_functions import unique_body, unique_method


def method(cls, name, retn):
    return dict(cls=cls, dem=f'virtual void {cls}::{name}(int)', mangled=f'{cls}::{name}', retn=retn)


class IdentityTests(unittest.TestCase):
    def test_own_class_membership_does_not_resolve_same_cleanup_methods(self):
        a, b = method('C', 'draw', 4), method('C', 'read', 4)
        self.assertFalse(unique_method(a, [a, b], []))

    def test_inherited_method_competes(self):
        a, b = method('C', 'draw', 4), method('Base', 'read', 4)
        self.assertFalse(unique_method(a, [a], [b]))

    def test_override_replaces_its_base_declaration(self):
        a, b = method('C', 'draw', 4), method('Base', 'draw', 4)
        self.assertTrue(unique_method(a, [a], [b]))

    def test_unknown_signature_prevents_unique_identity(self):
        a, b = method('C', 'draw', 4), method('C', 'read', None)
        self.assertFalse(unique_method(a, [a, b], []))
        self.assertFalse(unique_method(b, [b], []))

    def test_unknown_or_second_slot_body_is_not_ignored(self):
        self.assertTrue(unique_body(16, 4, {16:4, 32:8}))
        self.assertFalse(unique_body(16, 4, {16:4, 32:4}))
        self.assertFalse(unique_body(16, 4, {16:4, 32:-1}))
        self.assertFalse(unique_body(16, 4, {32:4}))


class CertificateTests(unittest.TestCase):
    def test_changed_inputs_or_certificate_bytes_are_rejected(self):
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            certificate = root / 'vftable-functions.tsv'
            certificate.write_text('rva\tmap_id\tname\n10\t1\tmethod\n')
            original = certificate.read_bytes()
            manifest = dict(target='test', version=vf.VERSION, inputs={'exe': 'image', 'reviews': 'old'},
                            certificates_sha256=hashlib.sha256(original).hexdigest())
            (root / 'vftable-functions.json').write_text(json.dumps(manifest))
            with (patch.object(vf.paths, 'maps', side_effect=lambda t, n: str(root/n)),
                  patch.object(vf.paths, 'target_meta', return_value={'sha256': 'image'}),
                  patch.object(vf, 'inputs', return_value=dict(manifest['inputs'])) as inputs):
                self.assertEqual(set(vf.load_checked('test')), {(16, '1', 'method')})
                inputs.return_value['reviews'] = 'new'
                with self.assertRaisesRegex(ValueError, 'stale'):
                    vf.load_checked('test')
                inputs.return_value = dict(manifest['inputs'])
                certificate.write_bytes(original.replace(b'method', b'other'))
                with self.assertRaisesRegex(ValueError, 'stale'):
                    vf.load_checked('test')


if __name__ == '__main__':
    unittest.main()
