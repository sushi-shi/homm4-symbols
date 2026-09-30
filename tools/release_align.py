"""Release-to-release assembly matching, dispatched by align.py --source.

No debug-build bytes exist. Source names and their confidence come from names.tsv;
the correspondence comes from the two retail images. RTTI slots and call targets
are held out for evaluation. Only emit_map.py publishes names.
"""
import bisect
import collections
import csv
import difflib
import hashlib
import json
import os
import subprocess
import sys

import capstone
import pefile

import paths

VERSION = 1
COLUMNS = ["source_rva", "rva", "size", "method", "similarity", "margin", "hop_tier",
           "source_retn", "retn", "evidence"]


def read_tsv(path):
    with open(path) as f:
        return list(csv.DictReader(f, delimiter="\t"))


def sha(path):
    with open(path, "rb") as f:
        return hashlib.file_digest(f, "sha256").hexdigest()


def normalize(code, address, sections):
    """Keep opcodes/registers/ordinary constants; abstract image addresses.

    RET cleanup is always excluded from tokens so --no-retn really holds it out.
    Local branches retain their relative destination. Remote branch/call targets
    and image pointers are masked, and their reference kind remains in the token.
    """
    md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    md.detail = True
    tokens, calls, rets = [], [], set()
    decoded = masked = 0
    for ins in md.disasm(code, address):
        decoded += ins.size
        if ins.group(capstone.CS_GRP_RET):
            rets.add(ins.operands[0].imm if ins.operands else 0)
            tokens.append("ret")
            continue
        data = bytearray(ins.bytes)
        tags = []
        branch = ins.group(capstone.CS_GRP_CALL) or ins.group(capstone.CS_GRP_JUMP)
        for operand in ins.operands:
            if branch and operand.type == capstone.x86.X86_OP_IMM:
                value = operand.imm & 0xffffffff
                if ins.group(capstone.CS_GRP_CALL):
                    calls.append(value)
                if address <= value < address + len(code):
                    tags.append(f"local:{value-address:x}")
                else:
                    tags.append("external-control")
                offset, length = ins.imm_offset, ins.imm_size
            else:
                if operand.type == capstone.x86.X86_OP_IMM:
                    value = operand.imm & 0xffffffff
                    offset, length = ins.imm_offset, ins.imm_size
                elif operand.type == capstone.x86.X86_OP_MEM:
                    value = operand.mem.disp & 0xffffffff
                    offset, length = ins.disp_offset, ins.disp_size
                else:
                    continue
                section = next((name for name, lo, hi in sections if lo <= value < hi), None)
                if section is None or length != 4:
                    continue
                tags.append("address:" + section)
            if length:
                data[offset:offset+length] = b"\0" * length
                masked += length
        tokens.append(ins.mnemonic + ":" + data.hex() + ":" + ",".join(tags))
    return dict(tokens=tokens, calls=calls, retn=next(iter(rets)) if len(rets) == 1 else -1,
                complete=decoded == len(code), masked=masked)


def load(target):
    exe_hash = sha(paths.exe(target))
    if exe_hash != paths.target_meta(target)["sha256"]:
        raise ValueError(f"{target}: exe hash differs from target.json")
    feature_path = paths.features(target, "functions")
    key = [VERSION, exe_hash, sha(feature_path)]
    cache = paths.work(target, "release_asm.json")
    if os.path.exists(cache):
        with open(cache) as f:
            old = json.load(f)
        if old["key"] == key:
            return old["functions"]
    import align
    funcs, _ = align.load_target(target)
    pe = pefile.PE(paths.exe(target), fast_load=True)
    image, base = pe.get_memory_mapped_image(), pe.OPTIONAL_HEADER.ImageBase
    sections = [(s.Name.rstrip(b"\0").decode(), base+s.VirtualAddress,
                 base+s.VirtualAddress+s.Misc_VirtualSize) for s in pe.sections]
    result = []
    for f in funcs:
        if not 1 <= f["size"] <= 65536 or int(f["body"], 16) != f["size"]:
            continue  # discontiguous/shared bodies need separate handling
        rva, size = f["rva"], f["size"]
        if not any(n == ".text" and lo <= base+rva and base+rva+size <= hi for n, lo, hi in sections):
            continue
        asm = normalize(image[rva:rva+size], base+rva, sections)
        if not asm.pop("complete"):
            continue
        asm.update(rva=rva, size=size, nblocks=int(f["nblocks"]),
                   digest=hashlib.sha256("\n".join(asm["tokens"]).encode()).hexdigest())
        asm["calls"] = [a-base for a in asm["calls"]]
        result.append(asm)
    with open(cache, "w") as f:
        json.dump(dict(key=key, functions=result), f, separators=(",", ":"))
    print(f"{target}: decoded {len(result)} contiguous function bodies", file=sys.stderr)
    return result


def strong(f):
    return len(f["tokens"]) >= 8 and f["size"] >= 32 and f["masked"] <= f["size"] * .4


def exact_pairs(a, b, use_retn=True):
    indexes = []
    for funcs in (a, b):
        groups = collections.defaultdict(list)
        for i, f in enumerate(funcs):
            groups[f["digest"]].append(i)
        indexes.append(groups)
    pairs = []
    for digest, aa in indexes[0].items():
        bb = indexes[1].get(digest, [])
        if len(aa) != 1 or len(bb) != 1:
            continue
        i, j = aa[0], bb[0]
        if not strong(a[i]) or not strong(b[j]):
            continue
        if use_retn and a[i]["retn"] >= 0 and b[j]["retn"] >= 0 and a[i]["retn"] != b[j]["retn"]:
            continue
        pairs.append((i, j))
    return sorted(pairs)


def increasing(pairs):
    """Longest strictly increasing target subsequence of exact assembly anchors."""
    tails, indices, previous = [], [], []
    for k, (_, j) in enumerate(pairs):
        p = bisect.bisect_left(tails, j)
        previous.append(indices[p-1] if p else -1)
        if p == len(tails):
            tails.append(j); indices.append(k)
        else:
            tails[p], indices[p] = j, k
    result = []
    k = indices[-1] if indices else -1
    while k >= 0:
        result.append(pairs[k]); k = previous[k]
    return result[::-1]


def similarity(a, b):
    aa, bb = a["tokens"], b["tokens"]
    if min(len(aa), len(bb)) < 4 or min(len(aa), len(bb))/max(len(aa), len(bb)) < .7:
        return 0.0
    if a["digest"] == b["digest"]:
        return 1.0
    overlap = sum((collections.Counter(aa) & collections.Counter(bb)).values())
    if 2*overlap/(len(aa)+len(bb)) < .8:
        return 0.0
    # Avoid quadratic matching of enormous repetitive bodies.
    if max(len(aa), len(bb)) > 2000:
        return 0.0
    return difflib.SequenceMatcher(None, aa, bb, autojunk=False).ratio()


def ordered_pairs(na, nb, scores):
    lines = [f"{na} {nb} {len(scores)}"]
    lines.extend(f"{i} {j} {score}" for (i, j), score in scores.items())
    p = subprocess.run([paths.NW, "--release"], input="\n".join(lines)+"\n",
                       text=True, capture_output=True, check=True)
    return [tuple(map(int, line.split())) for line in p.stdout.splitlines()]


def match(a, b, use_retn=True):
    exact = exact_pairs(a, b, use_retn)
    spine = increasing(exact)
    used_a, used_b = {i for i, _ in exact}, {j for _, j in exact}
    results = {(i, j): ("asm-unique", 1.0, 1.0, "B") for i, j in exact}
    bounds = [(-1, -1)] + spine + [(len(a), len(b))]
    skipped = 0
    for (ai, bi), (az, bz) in zip(bounds, bounds[1:]):
        aa = [i for i in range(ai+1, az) if i not in used_a]
        bb = [j for j in range(bi+1, bz) if j not in used_b]
        if not aa or not bb:
            continue
        # Do not force speculative correspondences across a long unanchored region.
        if len(aa) > 120 or len(bb) > 120:
            skipped += 1
            continue
        scores = {}
        for i, x in enumerate(aa):
            for j, y in enumerate(bb):
                if use_retn and a[x]["retn"] >= 0 and b[y]["retn"] >= 0 and a[x]["retn"] != b[y]["retn"]:
                    continue
                score = similarity(a[x], b[y])
                if score >= .8:
                    scores[i, j] = score
        for i, j in ordered_pairs(len(aa), len(bb), scores) if scores else []:
            score = scores[i, j]
            alternative = max((s for (x, y), s in scores.items() if (x == i or y == j) and (x, y) != (i, j)), default=0)
            margin = score-alternative
            if margin < .03:
                continue  # repeated tiny bodies / ties do not get arbitrary names
            x, y = aa[i], bb[j]
            tier = "B" if score >= .95 and margin >= .10 and strong(a[x]) and strong(b[y]) else "C"
            results[x, y] = ("asm-ordered", score, margin, tier)
    print(f"assembly: {len(exact)} unique pairs; {len(spine)} monotone anchors; "
          f"{len(results)-len(exact)} ordered pairs; {skipped} large gaps held out", file=sys.stderr)
    return results, spine


def main(target, source, use_retn=True):
    a, b = load(source), load(target)
    pairs, spine = match(a, b, use_retn)
    filename = "release.tsv" if use_retn else "release_noretn.tsv"
    rows = []
    for (i, j), (method, score, margin, tier) in sorted(pairs.items(), key=lambda p: b[p[0][1]]["rva"]):
        x, y = a[i], b[j]
        # Unknown cleanup does not substantiate a B correspondence.
        if use_retn and (x["retn"] < 0 or y["retn"] < 0):
            tier = "C"
        evidence = (f"source={source};source-rva={x['rva']:x};normalized-asm={score:.6f};"
                    f"candidate-margin={margin:.6f};instructions={len(x['tokens'])}/{len(y['tokens'])};"
                    f"retn={x['retn']}/{y['retn']};retn-scored={int(use_retn)};"
                    "vftables-and-call-targets-held-out")
        rows.append(dict(source_rva=f"{x['rva']:x}", rva=f"{y['rva']:x}", size=f"{y['size']:x}",
                         method=method, similarity=f"{score:.6f}", margin=f"{margin:.6f}", hop_tier=tier,
                         source_retn=x["retn"], retn=y["retn"], evidence=evidence))
    with open(paths.work(target, filename), "w") as f:
        writer = csv.DictWriter(f, COLUMNS, delimiter="\t", lineterminator="\n")
        writer.writeheader(); writer.writerows(rows)
    manifest = dict(source=source, target=target, version=VERSION, source_sha256=sha(paths.exe(source)),
                    target_sha256=sha(paths.exe(target)), source_names_sha256=sha(paths.maps(source, "names.tsv")),
                    source_features_sha256=sha(paths.features(source, "functions")),
                    target_features_sha256=sha(paths.features(target, "functions")),
                    pairs_sha256=sha(paths.work(target, filename)))
    with open(paths.work(target, filename.replace(".tsv", ".json")), "w") as f:
        json.dump(manifest, f, indent=2); f.write("\n")
    return rows
