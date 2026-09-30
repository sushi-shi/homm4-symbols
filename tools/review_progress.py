"""Track exhaustive manual review; packet preparation never supplies verdicts.

review_progress.py TARGET [--init BASELINE_NAMES_TSV] [--next COUNT]
The immutable roster includes every function in the baseline, including later vetoes.
Coverage counts only matching identities reviewed on the exact executable.
"""
import argparse
import csv
import hashlib
import json
from collections import Counter
from pathlib import Path

import paths
from release_align import read_tsv


def sha(filename):
    return hashlib.sha256(Path(filename).read_bytes()).hexdigest()


def write_tsv(filename, rows, fields):
    with open(filename, 'w') as f:
        writer = csv.DictWriter(f, fields, delimiter='\t', lineterminator='\n')
        writer.writeheader()
        writer.writerows(rows)


def identity(row):
    return row['rva'], row['source_rva'], row['map_id'], row['name']


def main(target, baseline=None, count=0):
    roster_path = paths.maps(target, 'review-roster.tsv')
    manifest_path = paths.maps(target, 'review-roster.json')
    source = paths.target_meta(target)['source']
    if baseline:
        if Path(roster_path).exists() or Path(manifest_path).exists():
            raise ValueError('roster already frozen; do not reset review scope')
        proposals = [r for r in read_tsv(baseline) if r['kind'] == 'func']
        proposals.sort(key=lambda r: int(r['rva'], 16))
        roster = [dict(case_id=f'F{i:05d}', rva=r['rva'], source_rva=r['via'],
                       map_id=r['map_id'], name=r['name'], demangled=r['demangled'],
                       baseline_tier=r['tier']) for i, r in enumerate(proposals, 1)]
        write_tsv(roster_path, roster, list(roster[0]))
        manifest = dict(target=target, source=source, functions=len(roster),
                        baseline_names_sha256=sha(baseline), roster_sha256=sha(roster_path),
                        target_sha256=sha(paths.exe(target)), source_sha256=sha(paths.exe(source)),
                        scope='Every baseline Complete B/C function, including subsequently withheld names; source identity and retail correspondence both require inspection.')
        Path(manifest_path).write_text(json.dumps(manifest, indent=2)+'\n')
    manifest = json.loads(Path(manifest_path).read_text())
    for field, filename in [('roster_sha256', roster_path), ('target_sha256', paths.exe(target)),
                            ('source_sha256', paths.exe(source))]:
        if manifest[field] != sha(filename):
            raise ValueError(f'review roster {field} mismatch')
    reviews = {identity(r): r for r in read_tsv(paths.maps(target, 'reviews.tsv'))
               if r['exe_sha256'] == manifest['target_sha256']}
    roster = read_tsv(roster_path)
    emitted = {(r['rva'], r['via'], r['map_id'], r['name']): r
               for r in read_tsv(paths.maps(target, 'names.tsv'))}
    coverage = []
    pending = []
    for r in roster:
        review = reviews.get(identity(r))
        state = ('unreviewed-D' if paths.target_meta(target).get('unreviewed_function_tier') == 'D'
                 else 'pending')
        current = emitted.get(identity(r))
        if current and current['tier'] == 'A' and 'vftable-certificate=' in current['evidence']:
            state = 'structural-A'
        if review:
            sv, cv = review['source_name_verdict'], review['correspondence_verdict']
            if 'contradicted' in (sv, cv):
                state = 'rejected'
            elif sv == cv == 'supported':
                state = 'supported'
            else:
                state = 'unresolved'
        else:
            pending.append(r)
        coverage.append(dict(r, status=state, review_case=review['case_id'] if review else ''))
    write_tsv(paths.maps(target, 'review-coverage.tsv'), coverage, list(coverage[0]))
    print('Frozen scope:', len(roster), 'functions;', dict(Counter(r['status'] for r in coverage)))
    if count:
        from review_release import Image
        images = Image(source), Image(target)
        directory = Path(paths.work(target, 'review'))
        directory.mkdir(exist_ok=True)
        for row in pending[:count]:
            packet = directory/(row['case_id']+'.txt')
            if not packet.exists():
                packet.write_text(str(row)+'\n\n'+images[0].body(int(row['source_rva'], 16))+
                                  '\n'+images[1].body(int(row['rva'], 16)))
            print(row['case_id'], row['rva'], row['demangled'] or row['name'])


if __name__ == '__main__':
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('target')
    p.add_argument('--init', metavar='BASELINE_NAMES_TSV')
    p.add_argument('--next', type=int, default=0, dest='count')
    a = p.parse_args()
    main(a.target, a.init, a.count)
