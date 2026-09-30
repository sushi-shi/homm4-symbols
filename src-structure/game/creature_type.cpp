// creature_type.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\creature_type.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 6/13 (A:2 B:1 C:3); unaccounted 7; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (12 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:66912; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0061f6c0, 0x24, STATIC_INIT_DISPATCH, k_creature_keyword_map)

// name:C; dyninit; see ledger; map:66913
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, k_creature_keyword_map)

// name:C; dyninit; see ledger; map:66914
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, k_creature_keyword_map)

// confidence:B; dyninit-dtor; owner-conf-C; map:66915; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0061f6f0, 0xa, STATIC_DTOR, k_creature_keyword_map)

// confidence:C; align-order; retn,stable; map:23640
VA_CHT_1(0x0061f700, 0x1b5)
t_creature_type get_creature(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:23641
VA_CHT_1(0x0061f8c0, 0x1d)
std::string get_keyword(t_creature_type arg_0)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:66916; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0061f8e0, 0x20, STATIC_INIT_DISPATCH, creature_type)

// name:A; map symbol; map:23642
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_enum_map<t_creature_type>::~t_enum_map<t_creature_type>()
{
    // Body unavailable.
}

// name:A; map symbol; map:23643
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_enum_map<t_creature_type>::t_enum_map<t_creature_type>(
    t_char_ptr_pair const* arg_0,
    t_char_ptr_pair const* arg_1,
    t_creature_type arg_2,
    t_creature_type arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:23644
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_creature_type t_enum_map<t_creature_type>::operator[](std::string arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:23645
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::string t_enum_map<t_creature_type>::operator[](t_creature_type arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:23646
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_enum_map<t_creature_type>::find(std::string arg_0, t_creature_type& arg_1) const
{
    // Body unavailable.
}

// === .bss (1 symbols) ===

namespace {

// confidence:C; dyninit-global; owner-conf-C; map:60193
DATA_CHT_1(0x009eb168)
t_enum_map<t_creature_type> k_creature_keyword_map; // Initial value unavailable.

} // anonymous namespace
