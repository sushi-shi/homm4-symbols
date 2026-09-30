// obstacle_type.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\obstacle_type.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 6/13 (A:2 B:1 C:3); unaccounted 7; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (12 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:63915; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00748d10, 0x24, STATIC_INIT_DISPATCH, k_keyword_map)

// name:C; dyninit; see ledger; map:63916
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, k_keyword_map)

// name:C; dyninit; see ledger; map:63917
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, k_keyword_map)

// confidence:B; dyninit-dtor; owner-conf-C; map:63918; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00748d40, 0xa, STATIC_DTOR, k_keyword_map)

// confidence:C; align-order; retn,stable; map:31048
VA_CHT_1(0x00748d50, 0x1b5)
t_obstacle_type get_obstacle_type(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:31049
VA_CHT_1(0x00748f10, 0x1d)
std::string get_obstacle_keyword(t_obstacle_type arg_0)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:63919; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00748f30, 0x20, STATIC_INIT_DISPATCH, obstacle_type)

// name:A; map symbol; map:31050
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_enum_map<t_obstacle_type>::~t_enum_map<t_obstacle_type>()
{
    // Body unavailable.
}

// name:A; map symbol; map:31051
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_enum_map<t_obstacle_type>::t_enum_map<t_obstacle_type>(
    t_char_ptr_pair const* arg_0,
    t_char_ptr_pair const* arg_1,
    t_obstacle_type arg_2,
    t_obstacle_type arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:31052
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_obstacle_type t_enum_map<t_obstacle_type>::operator[](std::string arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:31053
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::string t_enum_map<t_obstacle_type>::operator[](t_obstacle_type arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:31054
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_enum_map<t_obstacle_type>::find(std::string arg_0, t_obstacle_type& arg_1) const
{
    // Body unavailable.
}

// === .bss (1 symbols) ===

namespace {

// confidence:C; dyninit-global; owner-conf-C; map:60322
DATA_CHT_1(0x009f3848)
t_enum_map<t_obstacle_type> k_keyword_map; // Initial value unavailable.

} // anonymous namespace
