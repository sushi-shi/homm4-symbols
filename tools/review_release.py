"""Render raw disassembly and reference context for a frozen manual review sample.

Usage: review_release.py <target>
Reads maps/<target>/review-sample.tsv, writes work/<target>/review/<case_id>.txt.
This tool collects evidence; it never assigns a review verdict or a symbol name.
"""
import collections
import hashlib
import json
import os
import sys

import capstone
import pefile

import paths
from release_align import read_tsv


class Image:
    def __init__(self, target):
        self.target = target
        pe = pefile.PE(paths.exe(target))
        self.base = pe.OPTIONAL_HEADER.ImageBase
        self.image = pe.get_memory_mapped_image()
        self.functions = {int(r['rva'], 16): r for r in read_tsv(paths.features(target, 'functions'))}
        self.names = {int(r['rva'], 16): r for r in read_tsv(paths.maps(target, 'names.tsv'))}
        self.slots = collections.defaultdict(list)
        for v in read_tsv(paths.features(target, 'vftables')):
            for i, r in enumerate(v['slots'].split(',')):
                if r:
                    self.slots[int(r, 16)].append(f"{v['map_name']} slot={i} offset={v['col_offset']}")
        self.imports = {}
        for dll in getattr(pe, 'DIRECTORY_ENTRY_IMPORT', []):
            for imp in dll.imports:
                self.imports[imp.address-self.base] = dll.dll.decode()+':'+(imp.name.decode() if imp.name else str(imp.ordinal))
        self.md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
        self.md.detail = True

    def describe(self, rva):
        if rva in self.imports:
            return self.imports[rva]
        if rva in self.names:
            n = self.names[rva]
            return f"proposed[{n['tier']}] {n['demangled'] or n['name']}"
        if 0 <= rva < len(self.image):
            data = self.image[rva:rva+160].split(b'\0')[0]
            if len(data) >= 4 and all(32 <= b < 127 for b in data):
                return repr(data.decode())
        return ''

    def body(self, rva):
        f = self.functions.get(rva)
        if not f:
            return f"No extracted function at {rva:x}\n"
        n = self.names.get(rva)
        out = [f"{self.target}: RVA {rva:x}, size {f['size']}, blocks {f['nblocks']}, ret {f['retn']}",
               'PROPOSAL: '+(str(n) if n else '(unnamed)'),
               'RTTI SLOT MEMBERSHIP: '+(' | '.join(self.slots[rva]) or '(none)')]
        lo, hi = rva, rva+int(f['size'], 16)
        for ins in self.md.disasm(self.image[lo:hi], self.base+lo):
            notes = []
            for op in ins.operands:
                value = (op.imm if op.type == capstone.x86.X86_OP_IMM else
                         op.mem.disp if op.type == capstone.x86.X86_OP_MEM else 0) & 0xffffffff
                rr = value-self.base
                if 0 <= rr < len(self.image) and not lo <= rr < hi:
                    note = self.describe(rr)
                    if note:
                        notes.append(f"{rr:x}: {note}")
            out.append(f"{ins.address-self.base:08x}  {ins.bytes.hex():24s} {ins.mnemonic:8s} {ins.op_str:45s} {' | '.join(notes)}")
        # Caller names are proposals, not validation of this function's identity.
        callers = [r for r, ff in self.functions.items() if f"{rva:x}" in ff['callees'].split(',')]
        out.append('CALLERS (proposed names):')
        out.extend(f"{r:x}: {self.describe(r)}" for r in callers[:30])
        return '\n'.join(out)+'\n'


def main(target):
    source = paths.target_meta(target)['source']
    with open(paths.maps(target, 'review-sample.json')) as f:
        manifest = json.load(f)
    for t, field in ((source, 'source_sha256'), (target, 'target_sha256')):
        with open(paths.exe(t), 'rb') as f:
            if hashlib.file_digest(f, 'sha256').hexdigest() != manifest[field]:
                raise ValueError('review sample executable hash mismatch')
    with open(paths.maps(target, 'review-sample.tsv'), 'rb') as f:
        if hashlib.file_digest(f, 'sha256').hexdigest() != manifest['sample_sha256']:
            raise ValueError('frozen review sample hash mismatch')
    images = [Image(source), Image(target)]
    directory = paths.work(target, 'review')
    os.makedirs(directory, exist_ok=True)
    for row in read_tsv(paths.maps(target, 'review-sample.tsv')):
        with open(os.path.join(directory, row['case_id']+'.txt'), 'w') as f:
            f.write(str(row)+'\n\n')
            for image, column in zip(images, ('source_rva', 'rva')):
                f.write(image.body(int(row[column], 16))+'\n')


if __name__ == '__main__':
    main(sys.argv[1])
