// town_drawing.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\town_drawing.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 4/7 (A:1 B:0 C:3); unaccounted 3; skipped std 2.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (6 symbols) ===

namespace {

// confidence:C; align-order; retn,stable; map:39353
VA_CHT_1(0x0080d520, 0xae)
t_replacement_array::t_replacement_array()
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:C; align-order; retn,stable; map:39354
VA_CHT_1(0x0080d5d0, 0x8)
t_town_drawing_order const& get_drawing_order(t_town_type arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:39355
VA_CHT_1(0x0080d5e0, 0x39)
std::bitset<43> const& get_replaced_buildings(t_town_building arg_0)
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:61697
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// get_replaced_buildings$sdtor
// Function body not reconstructed; signature retained as a comment.

// confidence:A; dyninit-tinit; owner-conf-B; map:61698; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0080d630, 0x20, STATIC_INIT_DISPATCH, town_drawing)

namespace {

// name:A; map symbol; map:39356
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::bitset<43> const& t_replacement_array::operator[](t_town_building arg_0) const
{
    // Body unavailable.
}

} // anonymous namespace

// === .data (1 symbols) ===

// name:A; map symbol; map:59656
DATA_CHT_1(UNACCOUNTED)
// t_town_building*k_replacement_list
