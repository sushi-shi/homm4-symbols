// spell_icon.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\spell_icon.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 10/16 (A:3 B:5 C:2); unaccounted 6; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (16 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:62577; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007cfbf0, 0x11, STATIC_INIT_DISPATCH, "spell_icon#1")

// confidence:B; dyninit-ctor; owner-conf-C; map:62578; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007cfc10, 0x2d9, STATIC_CTOR, "spell_icon#1")

// name:C; dyninit; see ledger; map:62579
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "spell_icon#1")

// confidence:B; dyninit-dtor; owner-conf-C; map:62580; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007cfef0, 0x14, STATIC_DTOR, "spell_icon#1")

// confidence:A; dyninit-init; owner-conf-C; map:62581; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007cff10, 0x11, STATIC_INIT_DISPATCH, "spell_icon#2")

// confidence:B; dyninit-ctor; owner-conf-C; map:62582; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007cff30, 0x2d9, STATIC_CTOR, "spell_icon#2")

// name:C; dyninit; see ledger; map:62583
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "spell_icon#2")

// confidence:B; dyninit-dtor; owner-conf-C; map:62584; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007d0210, 0x14, STATIC_DTOR, "spell_icon#2")

namespace {

// confidence:C; align-order; retn,stable; map:38031
VA_CHT_1(0x007d0230, 0x196)
t_spell_definitions::t_spell_definitions()
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:B; align-order; retn,stable; map:38032
VA_CHT_1(0x007d03d0, 0x2f0)
t_cached_ptr<t_bitmap_layer> get_spell_icon(t_spell arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:62585
VA_CHT_1(0x007d06c0, 0x17)
static t_spell_definitions const& get_definitions()
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:62586
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// get_definitions$sdtor1
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:62587
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// get_definitions$sdtor3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:62588
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// get_definitions$sdtor2
// Function body not reconstructed; signature retained as a comment.

// confidence:A; dyninit-tinit; owner-conf-B; map:62589; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007d0db0, 0x20, STATIC_INIT_DISPATCH, spell_icon)

namespace {

// name:A; map symbol; map:38033
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_spell_definitions::~t_spell_definitions()
{
    // Body unavailable.
}

} // anonymous namespace
