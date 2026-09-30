"""Recover existing function proposals using checked runtime vftable identities.

Usage: tools/py tools/vftable_functions.py TARGET
Writes hash-bound certificates, never names.tsv. A certificate is structural evidence,
not a manual review. Manual vetoes and C caps still take precedence at emission.
"""
import collections
import csv
import hashlib
import json
from pathlib import Path
import sys

import align
import match_vftables as mv
import paths
import pefile
import release_align as ra
from rtti_join import RTTIReader

VERSION = 1
FIELDS = ['rva', 'map_id', 'name', 'proof', 'source_rva', 'body_sha256', 'evidence']


def identity(row):
    return int(row['rva'], 16), row['map_id'], row['name']


def contract(method):
    return method['dem'].split(method['cls'] + '::', 1)[1]


def unique_method(method, own, inherited):
    """Overrides replace base declarations, but unrelated same-cleanup methods compete."""
    overrides = {contract(m) for m in own}
    pool = list(own) + [m for m in inherited if contract(m) not in overrides]
    candidates = {m['mangled'] for m in pool if m['retn'] is None or m['retn'] == method['retn']}
    return method['retn'] is not None and candidates == {method['mangled']}


def unique_body(rva, cleanup, bodies):
    """An unknown cleanup competes with every signature; never silently ignore it."""
    return cleanup is not None and {a for a, n in bodies.items() if n < 0 or n == cleanup} == {rva}


def inputs(target):
    files = {'symbols': paths.symbols('symbols.tsv'), 'exe': paths.exe(target),
             'target': paths.maps(target, 'target.json')}
    for name in ('functions', 'classes', 'vftables'):
        files[name] = paths.features(target, name)
    files['reviews'] = paths.maps(target, 'reviews.tsv')
    for name in ('vftable_functions.py', 'align.py', 'sig.py', 'rtti_join.py',
                 'release_align.py', 'match_vftables.py'):
        files[name] = str(Path(__file__).with_name(name))
    source = paths.target_meta(target).get('source', 'map')
    if source != 'map':
        files['source_certificates'] = paths.maps(source, 'vftable-functions.tsv')
        files['source_manifest'] = paths.maps(source, 'vftable-functions.json')
        files['source_names'] = paths.maps(source, 'names.tsv')
        files['pairs'] = paths.work(target, 'release.tsv')
        files['heldout_pairs'] = paths.work(target, 'release_noretn.tsv')
    return {key: ra.sha(filename) for key, filename in files.items()}


def load_checked(target):
    manifest = json.loads(Path(paths.maps(target, 'vftable-functions.json')).read_text())
    filename = paths.maps(target, 'vftable-functions.tsv')
    if (manifest['target'] != target or manifest['version'] != VERSION or manifest['inputs'] != inputs(target)
            or manifest['certificates_sha256'] != ra.sha(filename)
            or manifest['inputs']['exe'] != paths.target_meta(target)['sha256']):
        raise ValueError('stale vftable function certificates; rerun vftable_functions.py')
    source = paths.target_meta(target).get('source', 'map')
    if source != 'map':
        load_checked(source)
    rows = ra.read_tsv(filename)
    result = {identity(r): r for r in rows}
    if len(result) != len(rows):
        raise ValueError('duplicate vftable function certificate')
    return result


class Evidence:
    def __init__(self, target):
        self.target = target
        self.methods, symbols = align.load_map()
        self.by_id = {m['id']: m for m in self.methods}
        self.virtual = collections.defaultdict(list)
        for m in self.methods:
            if m['virtual'] and not m['deleting'] and m['cat'] != 'thunk':
                self.virtual[m['cls']].append(m)
        # Ambiguous debug type names do not identify a declaring class.
        dem = collections.defaultdict(set)
        for s in symbols:
            if s['mangled'].startswith('??_7'):
                dem[mv.vft_class(s['mangled'])].add(align.vft_class_dem(s['demangled']))
        self.dem = {k: next(iter(v)) for k, v in dem.items() if len(v) == 1}
        self.functions = {f['rva']: f for f in ra.load(target)}
        funcs = ra.read_tsv(paths.features(target, 'functions'))
        for f in funcs:
            f['rva'], f['size'] = int(f['rva'], 16), int(f['size'], 16)
        self.thunks = align.find_thunks(target, funcs)
        self.folded = align.folded_functions(target, self.thunks)
        self.deleting = align.find_deleting_dtors(target, funcs)
        pe = pefile.PE(paths.exe(target), fast_load=True)
        self.image = pe.get_memory_mapped_image()
        sections = [(s.Name.rstrip(b'\0').decode(), s.VirtualAddress,
                     s.VirtualAddress + s.Misc_VirtualSize) for s in pe.sections]
        types = {int(r['td_rva'], 16): r['class'] for r in ra.read_tsv(paths.features(target, 'classes'))}
        reader = RTTIReader(self.image, pe.OPTIONAL_HEADER.ImageBase, sections, types)
        self.tables = collections.defaultdict(list)
        self.bad_classes = set()
        for v in ra.read_tsv(paths.features(target, 'vftables')):
            cls = self.dem.get(mv.norm(v['class'][4:]))
            if cls is None:
                continue
            try:
                h = reader.hierarchy(int(v['rva'], 16))
                if h['name'] != v['class'] or h['offset'] != int(v['col_offset'], 16) or h['cd_offset']:
                    raise ValueError('construction or mismatched table')
                slots = [p - reader.base for p in reader.words(int(v['rva'], 16), int(v['nslots']))]
                if slots != [int(s, 16) for s in v['slots'].split(',')]:
                    raise ValueError('slot export does not match executable bytes')
                for rva in slots:
                    reader.check(rva, 1, ('.text',))
                ancestors = {self.dem.get(mv.norm(b['name'][4:])) for b in h['entries']}
                if None in ancestors:
                    raise ValueError('debug hierarchy lacks a type identity')
                self.tables[cls].append(dict(rva=v['rva'], slots=slots, hierarchy=h, ancestors=ancestors))
            except (ValueError, UnicodeError):
                self.bad_classes.add(cls)
        self.reviews = {identity(r): r for r in ra.read_tsv(paths.maps(target, 'reviews.tsv'))
                        if r['exe_sha256'] == paths.target_meta(target)['sha256']}

    def qualify(self, row):
        m = self.by_id.get(row['map_id'])
        if not m or row['name'] != m['mangled'] or not m['virtual'] or m['deleting'] or m['cat'] == 'thunk':
            return None, 'not-an-ordinary-virtual-method'
        rva = int(row['rva'], 16)
        if rva in self.folded or rva in self.thunks or rva in self.deleting:
            return None, 'folded-thunk-or-deleting-body'
        review = self.reviews.get(identity(row))
        if review and review['action'] != 'keep':
            return None, 'manual-veto-or-cap'
        tables = self.tables[m['cls']]
        if not tables or m['cls'] in self.bad_classes:
            return None, 'unvalidated-class-tables'
        offsets = [t['hierarchy']['offset'] for t in tables]
        if len(offsets) != len(set(offsets)):
            return None, 'duplicate-class-table-offset'
        members, occurrences = {}, []
        for table in tables:
            seen = collections.Counter()
            for slot, raw in enumerate(table['slots']):
                body = self.thunks.get(raw, raw)
                if body in self.deleting:
                    continue
                seen[body] += 1
                members[body] = self.functions.get(body, {}).get('retn', -1)
                if body == rva:
                    occurrences.append(f"vft={table['rva']},col={table['hierarchy']['col']:x},offset={table['hierarchy']['offset']:x},slot={slot},entry={raw:x}")
            if seen[rva] > 1:
                return None, 'multiple-slots-share-body'
        if not occurrences or rva not in self.functions or members[rva] != m['retn']:
            return None, 'membership-or-cleanup-mismatch'
        if review and review['source_name_verdict'] == 'supported' and (not row['via'] or review['correspondence_verdict'] == 'supported'):
            proof = 'reviewed-identity-and-runtime-vftable'
        else:
            ancestors = set.union(*(t['ancestors'] for t in tables)) - {m['cls']}
            inherited = [s for cls in ancestors for s in self.virtual[cls]]
            if not unique_method(m, self.virtual[m['cls']], inherited):
                return None, 'ambiguous-debug-method-signature'
            if not unique_body(rva, m['retn'], members):
                return None, 'ambiguous-retail-slot-body'
            proof = 'unique-hierarchy-method-and-slot-cleanup'
        f = self.functions[rva]
        evidence = (f"class={m['cls']};proof={proof};cleanup={m['retn']};"
                    f"checked-rtti-and-raw-slots;{'|'.join(occurrences)}")
        if review:
            evidence += ';manual-review=' + review['case_id']
        return dict(rva=row['rva'], map_id=row['map_id'], name=row['name'], proof=proof,
                    source_rva=row['via'], body_sha256=hashlib.sha256(self.image[rva:rva+f['size']]).hexdigest(),
                    evidence=evidence), None


def main(target, proposals=None):
    if ra.sha(paths.exe(target)) != paths.target_meta(target)['sha256']:
        raise ValueError('vftable recovery executable SHA-256 mismatch')
    evidence = Evidence(target)
    rows = proposals if proposals is not None else ra.read_tsv(paths.maps(target, 'names.tsv'))
    source = paths.target_meta(target).get('source', 'map')
    source_certificates = source_names = pairs = heldout = None
    if source != 'map':
        source_certificates = load_checked(source)
        source_names = {identity(r): r for r in ra.read_tsv(paths.maps(source, 'names.tsv')) if r['tier'] == 'A'}
        pairs = {(r['source_rva'], r['rva']): r for r in ra.read_tsv(paths.work(target, 'release.tsv'))}
        heldout = {(r['source_rva'], r['rva']) for r in ra.read_tsv(paths.work(target, 'release_noretn.tsv'))}
    certificates, rejected = [], collections.Counter()
    for row in rows:
        if row['kind'] != 'func':
            continue
        cert, reason = evidence.qualify(row)
        if reason:
            rejected[reason] += 1
            continue
        if source != 'map':
            key = (int(row['via'], 16), row['map_id'], row['name'])
            pair_key = row['via'], row['rva']
            pair = pairs.get(pair_key)
            if key not in source_certificates or key not in source_names:
                rejected['source-without-A-certificate'] += 1
                continue
            if not pair or float(pair['similarity']) < .95 or pair['hop_tier'] != 'B' or pair_key not in heldout:
                rejected['insufficient-stable-assembly-match'] += 1
                continue
            cert['evidence'] += f";source={source}:{row['via']};stable-assembly={pair['similarity']}"
        certificates.append(cert)
    filename = paths.maps(target, 'vftable-functions.tsv')
    with open(filename, 'w') as f:
        writer = csv.DictWriter(f, FIELDS, delimiter='\t', lineterminator='\n')
        writer.writeheader(); writer.writerows(certificates)
    manifest = dict(version=VERSION, target=target, inputs=inputs(target), certificates_sha256=ra.sha(filename),
                    count=len(certificates), excluded=dict(sorted(rejected.items())),
                    meaning='Structural A evidence, not manual review or measured precision; debug virtual declarations may differ by build.')
    Path(paths.maps(target, 'vftable-functions.json')).write_text(json.dumps(manifest, indent=2)+'\n')
    print(f'{target}: {len(certificates)} certificates; {dict(rejected)}')


if __name__ == '__main__':
    main(sys.argv[1])
