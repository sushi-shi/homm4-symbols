// material_names.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 5/8 (A:2 B:2 C:1); unaccounted 3; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (6 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:64430; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00718310, 0x11, STATIC_INIT_DISPATCH, "material_names#1")

// confidence:B; dyninit-ctor; owner-conf-C; map:64431; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00718330, 0x392, STATIC_CTOR, "material_names#1")

// name:C; dyninit; see ledger; map:64432
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "material_names#1")

// confidence:B; dyninit-dtor; owner-conf-C; map:64433; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007186d0, 0x14, STATIC_DTOR, "material_names#1")

// confidence:C; align-order; retn,stable; map:29587
VA_CHT_1(0x007186f0, 0x21)
std::string const& get_material_name(t_material arg_0)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-C; map:64434; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00718720, 0x20, STATIC_INIT_DISPATCH, material_names)

// === .rdata (1 symbols) ===

// name:A; map symbol; map:44821
DATA_CHT_1(UNACCOUNTED)
int const* const k_material_value; // Initial value unavailable.

// === .bss (1 symbols) ===

// name:A; map symbol; map:60284
DATA_CHT_1(UNACCOUNTED)
t_external_string const* const k_material_name; // Initial value unavailable.
