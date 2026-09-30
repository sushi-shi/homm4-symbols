// random.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 2/3 (A:0 B:0 C:1); unaccounted 1; skipped std 0.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (2 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:63589; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0076cf80, 0x13, STATIC_INIT_DISPATCH, random)

// name:C; dyninit; see ledger; map:63590
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, random)

// === .bss (1 symbols) ===

// confidence:C; dyninit-global; owner-conf-C; map:60332
DATA_CHT_1(0x009f3da0)
t_random_number_generator random; // Initial value unavailable.
