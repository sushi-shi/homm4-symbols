// draw_terrain.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 5/8 (A:4 B:1 C:0); unaccounted 3; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (8 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:65516; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006a4c30, 0x15, STATIC_INIT_DISPATCH, "draw_terrain#1")

// name:C; dyninit; see ledger; map:65517
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "draw_terrain#1")

// confidence:A; dyninit-init; owner-conf-C; map:65518; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006a4c50, 0x15, STATIC_INIT_DISPATCH, "draw_terrain#2")

// name:C; dyninit; see ledger; map:65519
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "draw_terrain#2")

// confidence:B; align-order; retn,stable; map:25868
VA_CHT_1(0x006a4c70, 0xb4)
void draw_terrain_details::draw_grid(
    t_quad<int> const& arg_0,
    t_abstract_bitmap<unsigned short>& arg_1,
    t_screen_point const& arg_2,
    t_screen_rect const& arg_3
)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:65520; name:B (dyninit; see ledger)
VA_CHT_1(0x006a4d30, 0x20)
// draw_terrain$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:A; dyninit-tinit; owner-conf-B; map:65522; name:B (dyninit; see ledger)
VA_CHT_1(0x006a4d50, 0x20)
// draw_terrain$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:65523
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// draw_terrain$tatexit2
// Function body not reconstructed; signature retained as a comment.
