#!/usr/bin/env python3
"""Write the complete map for a target: maps/<target>/names.tsv.

usage: emit_map.py <target_id> [--structural-only | --source <retail_source>]
reads work/<target>/{align,align_novft,vftables}.tsv, dyninit_join and rtti_join pairs,
      symbols/symbols.tsv, maps/<target>/manual.tsv and reviews.tsv (optional)

--structural-only verifies the exe hash and emits checked RTTI data/primary vftables
without reading alignments, static-init pairs, or manual overrides.
For target.json source != map, the default combines these structures with validated
retail assembly transfers, capped by the source tier and held-out stability.
Review vetoes/caps run last, including after manual overrides. --reviews-only applies
them to the current map without regenerating the alignment proposals.

names.tsv columns:
  rva, size, kind (func|vftable|data), tier, name (mangled, or an owner-based name for
  static-init routines), demangled, method, evidence, map_id (symbols.tsv id), map_va,
  obj, score, via (empty for names taken straight from the map)

Tiers:
  A  exact structural evidence: vftable slot, vptr store, .CRT$XCU slot, paired vftable
     by RTTI name; no ret N contradiction
  B  ordered match with ret N agreement (non-zero), stable without vftable evidence;
     static-init pieces (ctor/atexit/dtor) of an XCU slot; vftables paired by order
  C  uncertain name (reviewed unresolved when the D policy is enabled)
  D  unreviewed function proposal, not a best guess
"""
import argparse
import csv
import hashlib
import json
import os
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import dyninit_join  # noqa: E402
import paths  # noqa: E402
import rtti_join  # noqa: E402

COLUMNS = ["rva", "size", "kind", "tier", "name", "demangled", "method", "evidence",
           "map_id", "map_va", "obj", "score", "via"]
TIERS = "ABCD"


def read_tsv(path):
    with open(path) as f:
        return list(csv.DictReader(f, delimiter="\t"))


def apply_reviews(target, rows):
    """Apply manual vetoes/caps to exact identities; a review never promotes a tier."""
    filename = paths.maps(target, "reviews.tsv")
    unreviewed_d = paths.target_meta(target).get("unreviewed_function_tier") == "D"
    if not os.path.exists(filename) and not unreviewed_d:
        return rows
    with open(paths.exe(target), "rb") as f:
        actual = hashlib.file_digest(f, "sha256").hexdigest()
    if actual != paths.target_meta(target)["sha256"]:
        raise ValueError("target executable SHA-256 differs from target.json")
    reviews = read_tsv(filename) if os.path.exists(filename) else []
    seen = set()
    result = {rva: dict(row) for rva, row in rows.items()}
    for review in reviews:
        if review["exe_sha256"] != actual:
            raise ValueError("manual review executable SHA-256 mismatch")
        if review["action"] not in ("keep", "cap-C", "withhold") or not review["evidence"]:
            raise ValueError("manual review requires a valid action and evidence")
        key = (int(review["rva"], 16), review["map_id"], review["name"])
        if key in seen:
            raise ValueError("duplicate manual review identity")
        seen.add(key)
        r = result.get(key[0])
        # Missing/replaced proposals are fine: never apply a verdict to a new identity.
        if not r or (r["map_id"], r["name"]) != key[1:]:
            continue
        if review["action"] == "withhold":
            del result[key[0]]
        elif review["action"] == "cap-C":
            r["tier"] = max(r["tier"], "C")
            marker = "manual-review=" + review["case_id"] + ":unresolved"
            if marker not in r["evidence"].split(";"):
                r["evidence"] = ";".join(filter(None, (r["evidence"], marker)))
    if unreviewed_d:
        for rva, r in result.items():
            if r["kind"] == "func" and (rva, r["map_id"], r["name"]) not in seen:
                r["tier"] = "D"
                marker = "review-status=unreviewed;classification=D:not-a-best-guess"
                if "review-status=unreviewed" not in r["evidence"].split(";"):
                    r["evidence"] = ";".join(filter(None, (r["evidence"], marker)))
    return result


def write_names(target, rows):
    with open(paths.maps(target, "names.tsv"), "w") as f:
        f.write("\t".join(COLUMNS) + "\n")
        for rva in sorted(rows):
            r = dict(rows[rva], rva=f"{rva:x}")
            f.write("\t".join(str(r[c]) for c in COLUMNS) + "\n")
    from collections import Counter
    print(f"{len(rows)} names -> maps/{target}/names.tsv",
          dict(sorted(Counter((r["kind"], r["tier"]) for r in rows.values()).items())), file=sys.stderr)


def main(target, structural_only=False, source=None, reviews_only=False):
    if reviews_only:
        rows = {int(r["rva"], 16): r for r in read_tsv(paths.maps(target, "names.tsv"))}
        write_names(target, apply_reviews(target, rows))
        return
    meta = paths.target_meta(target)
    if not structural_only and source is None and meta.get("source", "map") != "map":
        source = meta["source"]
    structures = structural_only or source is not None
    if structures:
        with open(paths.exe(target), "rb") as f:
            actual = hashlib.file_digest(f, "sha256").hexdigest()
        if actual != meta["sha256"]:
            raise ValueError("target executable SHA-256 differs from target.json")
    syms = {s["id"]: s for s in read_tsv(paths.symbols("symbols.tsv"))}
    rows = {}

    def add(rva, size, kind, tier, map_id, method, evidence="", score="", name=""):
        s = syms[map_id]
        r = dict(rva=rva, size=size, kind=kind, tier=tier, name=name or s["mangled"],
                 demangled="" if name else s["demangled"], method=method, evidence=evidence,
                 map_id=map_id, map_va=s["va"], obj=s["obj"], score=score, via="")
        cur = rows.get(rva)
        if cur is None or TIERS.index(tier) < TIERS.index(cur["tier"]):
            rows[rva] = r

    nov = {} if structures else {r["map_id"]: r["rva"] for r in read_tsv(paths.work(target, "align_novft.tsv"))}
    dj = [] if structures else dyninit_join.join(target)
    dj_ids = {d["map_id"] for d in dj}
    for r in ([] if structures else read_tsv(paths.work(target, "align.tsv"))):
        if r["map_id"] in dj_ids:
            continue  # pinned static-init routine: named below with its owner-based name
        ev = set(filter(None, r["evidence"].split(",")))
        stable = nov.get(r["map_id"]) == r["rva"]
        if "RETN!" in ev:
            tier = "C"
        elif ev & {"vslot", "vptr", "xcu", "atexit"}:
            tier = "A"
        elif r["pass"] == "order" and "retn" in ev and r["exp_retn"] not in ("", "0") and stable:
            tier = "B"
        else:
            tier = "C"
        if stable:
            ev.add("stable")
        add(int(r["rva"], 16), r["size"], "func", tier, r["map_id"], f"align-{r['pass']}",
            ",".join(sorted(ev)), r["score"])
    for d in dj:
        tier = ("A" if d["role"] in ("init", "tinit") else "B") if d["kind"] == "func" else d["conf"]
        add(d["rva"], "", d["kind"], tier, d["map_id"], f"dyninit-{d['role']}",
            f"owner-conf-{d['conf']}", name=d["name"])
    for v in ([] if structures else read_tsv(paths.work(target, "vftables.tsv"))):
        add(int(v["rva"], 16), f"{4 * int(v['nslots']):x}", "vftable", "A" if v["how"] == "name" else "B",
            v["map_id"], f"rtti-{v['how']}")

    if structures:
        for r in rtti_join.primary_vftables(target):
            add(r["rva"], f"{r['size']:x}", "vftable", r["tier"], r["map_id"], r["method"], r["evidence"])

    for r in rtti_join.join(target):
        if r["rva"] not in rows:
            add(r["rva"], f"{r['size']:x}", "data", r["tier"], r["map_id"], r["method"], r["evidence"])

    if source and not structural_only:
        for r in release_names(target, source):
            rva = int(r["rva"], 16)
            if rva in rows:
                raise ValueError(f"assembly mapping overlaps structural data at {rva:x}")
            rows[rva] = dict(r, rva=rva)

    manual = paths.maps(target, "manual.tsv")
    if not structural_only and os.path.exists(manual):
        for m in read_tsv(manual):
            rva = int(m["rva"], 16)
            r = rows.get(rva, dict.fromkeys(COLUMNS, ""))
            r.update(rva=rva, kind=m.get("kind") or r["kind"] or "func", tier="A", name=m["mangled"],
                     demangled="", method="manual", evidence=m.get("note", ""))
            rows[rva] = r

    write_names(target, apply_reviews(target, rows))


def release_names(target, source):
    """Publish only current correspondences, capped by both hop and source tiers."""
    import release_align
    for filename in ("release", "release_noretn"):
        with open(paths.work(target, filename + ".json")) as f:
            manifest = json.load(f)
        expected = dict(source=source, target=target, version=release_align.VERSION,
                        source_sha256=release_align.sha(paths.exe(source)),
                        target_sha256=release_align.sha(paths.exe(target)),
                        source_names_sha256=release_align.sha(paths.maps(source, "names.tsv")),
                        source_features_sha256=release_align.sha(paths.features(source, "functions")),
                        target_features_sha256=release_align.sha(paths.features(target, "functions")),
                        pairs_sha256=release_align.sha(paths.work(target, filename + ".tsv")))
        if manifest != expected:
            raise ValueError(f"stale or mismatched {filename} inputs; rerun align.py --source")
    names = {r["rva"]: r for r in read_tsv(paths.maps(source, "names.tsv")) if r["kind"] == "func"}
    heldout = {r["source_rva"]: r["rva"] for r in read_tsv(paths.work(target, "release_noretn.tsv"))}
    # A measured contradiction can veto a proposed name without feeding the held-out
    # evidence back into alignment scores. evaluate.py reports the raw pairs first.
    from release_evaluate import slot_expectations
    expected_slots = slot_expectations(source, target)
    rejected = []
    result, seen_source, seen_target = [], set(), set()
    for match in read_tsv(paths.work(target, "release.tsv")):
        src, dst = match["source_rva"], match["rva"]
        if src in seen_source or dst in seen_target:
            raise ValueError("assembly mapping is not one-to-one")
        seen_source.add(src); seen_target.add(dst)
        if src not in names:
            continue
        expected = expected_slots.get(int(src, 16))
        if expected is not None and expected != int(dst, 16):
            rejected.append(dict(source_rva=src, rva=dst, expected_rva=f"{expected:x}",
                                 name=names[src]["name"], reason="held-out-vftable-slot-conflict"))
            continue
        origin = names[src]
        stable = heldout.get(src) == dst
        tier = max(origin["tier"], match["hop_tier"], "B" if stable else "C")
        evidence = (match["evidence"] + f";ret-heldout-stable={int(stable)};"
                    f"source-tier={origin['tier']};source-method={origin['method']};"
                    f"source-evidence=[{origin['evidence'] or origin['method']}]")
        result.append(dict(origin, rva=dst, size=match["size"], tier=tier,
                           method="release-" + match["method"], evidence=evidence,
                           score=match["similarity"], via=src))
    with open(paths.work(target, "release-rejected.tsv"), "w") as f:
        writer = csv.DictWriter(f, ["source_rva", "rva", "expected_rva", "name", "reason"],
                                delimiter="\t", lineterminator="\n")
        writer.writeheader(); writer.writerows(rejected)
    print(f"release validation: {len(rejected)} named slot conflicts withheld", file=sys.stderr)
    return result


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("target")
    parser.add_argument("--structural-only", action="store_true",
                        help="emit only checked RTTI data and primary vftables; no alignment or static-init assumptions")
    parser.add_argument("--source", help="source retail target for assembly correspondence")
    parser.add_argument("--reviews-only", action="store_true",
                        help="apply review vetoes/caps to current names without regenerating alignment proposals")
    args = parser.parse_args()
    if args.reviews_only and (args.structural_only or args.source):
        parser.error("--reviews-only cannot be combined with alignment/structural options")
    main(args.target, args.structural_only, args.source, args.reviews_only)
