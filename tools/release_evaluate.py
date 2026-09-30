"""Evidence not scored by the retail assembly matcher: slots and call targets."""
import collections
import csv

import match_vftables
import paths
import release_align as ra


def slot_expectations(source, target):
    by_target = []
    for t in (source, target):
        tables = collections.defaultdict(list)
        for v in ra.read_tsv(paths.features(t, "vftables")):
            if v["col_offset"] == "0":
                tables[match_vftables.norm(v["map_name"])].append(v)
        by_target.append(tables)
    forward, reverse = collections.defaultdict(set), collections.defaultdict(set)
    for name, left in by_target[0].items():
        right = by_target[1].get(name, [])
        if len(left) != 1 or len(right) != 1:
            continue
        a = [int(x, 16) for x in left[0]["slots"].split(",") if x]
        b = [int(x, 16) for x in right[0]["slots"].split(",") if x]
        if len(a) != len(b):
            continue  # version changes may add virtual slots
        for x, y in zip(a, b):
            forward[x].add(y); reverse[y].add(x)
    # Shared and ICF-folded bodies do not assert a single name/correspondence.
    return {x: next(iter(ys)) for x, ys in forward.items()
            if len(ys) == 1 and len(reverse[next(iter(ys))]) == 1}


def main(target):
    import json
    with open(paths.work(target, "release.json")) as f:
        source = json.load(f)["source"]
    a, b = {f["rva"]: f for f in ra.load(source)}, {f["rva"]: f for f in ra.load(target)}
    rows = ra.read_tsv(paths.work(target, "release.tsv"))
    pairs = {int(r["source_rva"], 16): int(r["rva"], 16) for r in rows}
    named = {int(r["rva"], 16): r for r in ra.read_tsv(paths.maps(source, "names.tsv")) if r["kind"] == "func"}
    expected = slot_expectations(source, target)
    stats, discrepancies = collections.Counter(), []
    report = []

    def record(check, tier, agree, disagree, detail):
        n = agree+disagree
        print(f"{check} [{tier}]: {agree}/{n} ({agree/max(n,1):.1%}); {detail}")
        report.append(dict(check=check, tier=tier, agree=agree, disagree=disagree,
                           rate=f"{agree/n:.6f}" if n else "", detail=detail))

    for row in rows:
        x, y = int(row["source_rva"], 16), int(row["rva"], 16)
        tier = max(row["hop_tier"], named[x]["tier"]) if x in named else "unnamed"
        if x in expected and a[x]["size"] >= 32 and b[y]["size"] >= 32:
            ok = y == expected[x]
            stats["vftable-slot", tier, ok] += 1
            if not ok:
                discrepancies.append(dict(source_rva=f"{x:x}", rva=f"{y:x}",
                                          expected_rva=f"{expected[x]:x}", tier=tier, method=row["method"]))
        # Direct call addresses were masked; no callee correspondence enters scores.
        ac, bc = a[x]["calls"], b[y]["calls"]
        if len(ac) == len(bc):
            for ca, cb in zip(ac, bc):
                if ca in pairs and ca != x:
                    stats["held-out-call-target", tier, pairs[ca] == cb] += 1
        stats["held-out-block-count", tier, a[x]["nblocks"] == b[y]["nblocks"]] += 1
    print(f"release correspondence {source} -> {target}: {len(rows)} pairs; "
          f"{sum(x in named for x in pairs)} carry source names")
    for check in ("vftable-slot", "held-out-call-target", "held-out-block-count"):
        for tier in ("A", "B", "C", "D", "unnamed"):
            yes, no = stats[check, tier, True], stats[check, tier, False]
            if yes+no:
                record(check, tier, yes, no, "diagnostic, not a measured name precision")
    heldout_path = paths.work(target, "release_noretn.tsv")
    import os
    if os.path.exists(heldout_path):
        heldout = ra.read_tsv(heldout_path)
        yes = no = 0
        for row in heldout:
            x, y = int(row["source_rva"], 16), int(row["rva"], 16)
            if a[x]["retn"] > 0 and b[y]["retn"] >= 0:
                yes += a[x]["retn"] == b[y]["retn"]
                no += a[x]["retn"] != b[y]["retn"]
        record("held-out-ret-N", "all", yes, no, "RET immediates excluded from assembly tokens in both runs")
        h = {int(r["source_rva"], 16): int(r["rva"], 16) for r in heldout}
        same = sum(h.get(x) == y for x, y in pairs.items())
        record("ret-ablation-stability", "all", same, len(pairs)-same, "missing correspondences count as unstable")
    ordered = [(int(r["source_rva"], 16), int(r["rva"], 16)) for r in rows if r["method"] == "asm-ordered"]
    ordered.sort()
    inversions = sum(y2 <= y1 for (_, y1), (_, y2) in zip(ordered, ordered[1:]))
    record("ordered-backbone", "all", max(0, len(ordered)-1-inversions), inversions,
           "unique assembly matches may move across releases; ordered gap matches must remain monotonic")
    with open(paths.work(target, "release-evaluation.tsv"), "w") as f:
        w = csv.DictWriter(f, ["check", "tier", "agree", "disagree", "rate", "detail"], delimiter="\t", lineterminator="\n")
        w.writeheader(); w.writerows(report)
    with open(paths.work(target, "release-slot-disagreements.tsv"), "w") as f:
        w = csv.DictWriter(f, ["source_rva", "rva", "expected_rva", "tier", "method"], delimiter="\t", lineterminator="\n")
        w.writeheader(); w.writerows(discrepancies)
