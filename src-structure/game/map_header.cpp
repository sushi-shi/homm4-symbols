// map_header.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 10/12 (A:3 B:7 C:0); unaccounted 2; skipped std 3.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (10 symbols) ===

// confidence:A; dyninit-init; owner-conf-B; map:64541; name:A (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00703070, 0x11, STATIC_INIT_DISPATCH, k_default_loss_condition)

// confidence:B; dyninit-ctor; owner-conf-B; map:64542; name:A (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00703090, 0xd1, STATIC_CTOR, k_default_loss_condition)

// name:A; dyninit; see ledger; map:64543
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, k_default_loss_condition)

// confidence:B; dyninit-dtor; owner-conf-B; map:64544; name:A (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00703170, 0xa, STATIC_DTOR, k_default_loss_condition)

// confidence:A; dyninit-init; owner-conf-B; map:64545; name:A (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00703180, 0x11, STATIC_INIT_DISPATCH, k_default_victory_condition)

// confidence:B; dyninit-ctor; owner-conf-B; map:64546; name:A (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007031a0, 0xd1, STATIC_CTOR, k_default_victory_condition)

// name:A; dyninit; see ledger; map:64547
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, k_default_victory_condition)

// confidence:B; dyninit-dtor; owner-conf-B; map:64548; name:A (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00703280, 0xa, STATIC_DTOR, k_default_victory_condition)

// confidence:B; align-order; retn,stable; map:28850
VA_CHT_1(0x00703290, 0x7f0)
bool read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_map_header& arg_1,
    t_progress_handler* arg_2
)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:64549; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00703a80, 0x20, STATIC_INIT_DISPATCH, map_header)

// === .bss (2 symbols) ===

// confidence:B; dyninit-global; owner-conf-B; map:60275
DATA_CHT_1(0x009f20e8)
t_external_string const k_default_loss_condition; // Initial value unavailable.

// confidence:B; dyninit-global; owner-conf-B; map:60276
DATA_CHT_1(0x009f20fc)
t_external_string const k_default_victory_condition; // Initial value unavailable.
