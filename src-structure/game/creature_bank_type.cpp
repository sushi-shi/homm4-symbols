// creature_bank_type.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\creature_bank_type.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 5/14 (A:0 B:0 C:1); unaccounted 9; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (12 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66982; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006138a0, 0x24, STATIC_INIT_DISPATCH, k_bank_map)

// name:C; dyninit; see ledger; map:66983
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, k_bank_map)

// name:C; dyninit; see ledger; map:66984
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, k_bank_map)

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66985; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006138d0, 0xa, STATIC_DTOR, k_bank_map)

// name:A; map symbol; map:23304
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::string get_keyword(t_creature_bank_type arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23305
VA_CHT_1(0x006138e0, 0x1b5)
t_creature_bank_type get_creature_bank_type(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:66986; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00613aa0, 0x20, STATIC_INIT_DISPATCH, creature_bank_type)

// name:A; map symbol; map:23306
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_enum_map<t_creature_bank_type>::~t_enum_map<t_creature_bank_type>()
{
    // Body unavailable.
}

// name:A; map symbol; map:23307
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_enum_map<t_creature_bank_type>::t_enum_map<t_creature_bank_type>(
    t_char_ptr_pair const* arg_0,
    t_char_ptr_pair const* arg_1,
    t_creature_bank_type arg_2,
    t_creature_bank_type arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:23308
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_creature_bank_type t_enum_map<t_creature_bank_type>::operator[](std::string arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:23309
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::string t_enum_map<t_creature_bank_type>::operator[](t_creature_bank_type arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:23310
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_enum_map<t_creature_bank_type>::find(std::string arg_0, t_creature_bank_type& arg_1) const
{
    // Body unavailable.
}

// === .data (1 symbols) ===

// name:A; map symbol; map:58398
DATA_CHT_1(UNACCOUNTED)
// t_char_ptr_pair*k_keywords

// === .bss (1 symbols) ===

namespace {

// confidence:C; dyninit-global; owner-conf-C; map:60187
DATA_CHT_1(0x009e66dc)
t_enum_map<t_creature_bank_type> k_bank_map; // Initial value unavailable.

} // anonymous namespace
