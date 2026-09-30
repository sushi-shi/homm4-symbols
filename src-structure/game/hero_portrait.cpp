// hero_portrait.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\hero_portrait.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 15/23 (A:5 B:7 C:3); unaccounted 8; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (21 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:65211; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006cbb50, 0x11, STATIC_INIT_DISPATCH, "hero_portrait#1")

// confidence:B; dyninit-ctor; owner-conf-C; map:65212; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006cbb70, 0x372, STATIC_CTOR, "hero_portrait#1")

// name:C; dyninit; see ledger; map:65213
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "hero_portrait#1")

// confidence:B; dyninit-dtor; owner-conf-C; map:65214; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006cbef0, 0x14, STATIC_DTOR, "hero_portrait#1")

// confidence:A; dyninit-init; owner-conf-C; map:65215; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006cbf10, 0x11, STATIC_INIT_DISPATCH, "hero_portrait#2")

// confidence:B; dyninit-ctor; owner-conf-C; map:65216; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006cbf30, 0x372, STATIC_CTOR, "hero_portrait#2")

// name:C; dyninit; see ledger; map:65217
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "hero_portrait#2")

// confidence:B; dyninit-dtor; owner-conf-C; map:65218; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006cc2b0, 0x14, STATIC_DTOR, "hero_portrait#2")

// confidence:A; dyninit-init; owner-conf-C; map:65219; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006cc2d0, 0x25, STATIC_INIT_DISPATCH, "hero_portrait#3")

// name:C; dyninit; see ledger; map:65220
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "hero_portrait#3")

// name:C; dyninit; see ledger; map:65221
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "hero_portrait#3")

// confidence:B; dyninit-dtor; owner-conf-C; map:65222; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006cc300, 0xa, STATIC_DTOR, "hero_portrait#3")

// confidence:A; dyninit-init; owner-conf-C; map:65223; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006cc310, 0x25, STATIC_INIT_DISPATCH, "hero_portrait#4")

// name:C; dyninit; see ledger; map:65224
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "hero_portrait#4")

// name:C; dyninit; see ledger; map:65225
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "hero_portrait#4")

// confidence:B; dyninit-dtor; owner-conf-C; map:65226; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006cc340, 0xa, STATIC_DTOR, "hero_portrait#4")

// confidence:C; align-order; retn,stable; map:27361
VA_CHT_1(0x006cc350, 0xc)
int find_hero_portrait(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:27362
VA_CHT_1(0x006cc360, 0x2d)
t_cached_ptr<t_bitmap_layer> get_hero_portrait(int arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:27363
VA_CHT_1(0x006cc390, 0x6)
int get_hero_portrait_count()
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:27364
VA_CHT_1(0x006cc3a0, 0x113)
t_cached_ptr<t_bitmap_layer> get_dead_portrait(int arg_0)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:65227; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006cc4c0, 0x20, STATIC_INIT_DISPATCH, hero_portrait)

// === .bss (2 symbols) ===

// name:A; map symbol; map:60242
DATA_CHT_1(UNACCOUNTED)
// t_bitmap_group_cache*g_bitmap_82_cache

// name:A; map symbol; map:60243
DATA_CHT_1(UNACCOUNTED)
// t_bitmap_group_cache*g_bitmap_cache
