// material_icons.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\material_icons.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 7/12 (A:0 B:0 C:1); unaccounted 5; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (10 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:64436; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00717da0, 0x11, STATIC_INIT_DISPATCH, g_material_icons)

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:64437; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00717dc0, 0xd7, STATIC_CTOR, g_material_icons)

// name:C; dyninit; see ledger; map:64438
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, g_material_icons)

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:64439; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00717ea0, 0xa, STATIC_DTOR, g_material_icons)

namespace {

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:29583
VA_CHT_1(0x00717eb0, 0x180)
t_material_cache::t_material_cache()
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:29584
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cached_ptr<t_bitmap_layer> get_material_icon(t_material arg_0)
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:64440
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// get_material_icon$sdtor
// Function body not reconstructed; signature retained as a comment.

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:64441; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007182f0, 0x20, STATIC_INIT_DISPATCH, material_icons)

namespace {

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:29585
VA_CHT_1(0x007182a0, 0x47)
t_bitmap_layer_cache const& t_material_cache::operator[](t_material arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:29586
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_material_cache::~t_material_cache()
{
    // Body unavailable.
}

} // anonymous namespace

// === .data (1 symbols) ===

// name:A; map symbol; map:58827
DATA_CHT_1(UNACCOUNTED)
char const**k_material_keyword; // Initial value unavailable.

// === .bss (1 symbols) ===

// confidence:C; dyninit-global; owner-conf-C; map:60283
DATA_CHT_1(0x009f229c)
t_bitmap_group_cache g_material_icons; // Initial value unavailable.
