// town_properties.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 4/8 (A:1 B:1 C:2); unaccounted 4; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (8 symbols) ===

// confidence:C; align-order; retn,stable; map:39505
VA_CHT_1(0x00812fe0, 0x407)
std::string get_town_type_name(t_town_type arg_0)
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:61639
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// get_town_type_name$sdtor
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; retn,stable; map:39506
VA_CHT_1(0x008133f0, 0x14)
std::string get_alignment_name(t_town_type arg_0)
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:61640
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// get_alignment_name$sdtor
// Function body not reconstructed; signature retained as a comment.

// confidence:B; align-order; retn,stable; map:39507
VA_CHT_1(0x00813410, 0x6da)
t_cached_ptr<t_bitmap_group> get_town_thumbnail(t_town_type arg_0, int arg_1)
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:61641
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// get_town_thumbnail$sdtor2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:61642
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// get_town_thumbnail$sdtor1
// Function body not reconstructed; signature retained as a comment.

// confidence:A; dyninit-tinit; owner-conf-B; map:61643; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00813b30, 0x20, STATIC_INIT_DISPATCH, town_properties)
