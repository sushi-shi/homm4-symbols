// automatic_spells.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 4/9 (A:1 B:1 C:2); unaccounted 5; skipped std 41.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (9 symbols) ===

// confidence:C; align-order; retn,stable; map:15738
VA_CHT_1(0x0053e7e0, 0x3ae)
std::vector<t_automatic_spell_set, std::allocator<t_automatic_spell_set>> const& get_automatic_spells()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:69375
VA_CHT_1(0x0053ebe0, 0x168)
static void add_spells(
    std::vector<t_automatic_spell_set, std::allocator<t_automatic_spell_set>>& arg_0,
    t_skill_type arg_1,
    t_spell const* arg_2,
    int arg_3
)
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:69376
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// add_spells$sdtor
// Function body not reconstructed; signature retained as a comment.

// confidence:A; dyninit-tinit; owner-conf-B; map:69377; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0053f610, 0x20, STATIC_INIT_DISPATCH, automatic_spells)

// name:A; map symbol; map:15739
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_automatic_spell_set::t_automatic_spell_set()
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:15740
VA_CHT_1(0x0053eb90, 0x43)
t_automatic_spell_set::~t_automatic_spell_set()
{
    // Body unavailable.
}

// name:A; map symbol; map:15772
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_automatic_spell_set& t_automatic_spell_set::operator=(t_automatic_spell_set const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:15773
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_automatic_spell_set)

// name:A; map symbol; map:15774
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_automatic_spell_set::t_automatic_spell_set(t_automatic_spell_set const& arg_0)
{
    // Body unavailable.
}
