// combat_actor_action.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\combat_actor_action.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 6/14 (A:0 B:0 C:1); unaccounted 8; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (12 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:68160; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005abb30, 0x24, STATIC_INIT_DISPATCH, k_map)

// name:C; dyninit; see ledger; map:68161
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, k_map)

// name:C; dyninit; see ledger; map:68162
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, k_map)

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:68163; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005abb60, 0xa, STATIC_DTOR, k_map)

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:19652
VA_CHT_1(0x005abb80, 0x1d)
std::string get_combat_actor_action_name(t_combat_actor_action_id arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:19653
VA_CHT_1(0x005abba0, 0x1e7)
t_combat_actor_action_id get_combat_action(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:68164; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005abd90, 0x20, STATIC_INIT_DISPATCH, combat_actor_action)

// name:A; map symbol; map:19654
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_enum_map<t_combat_actor_action_id>::~t_enum_map<t_combat_actor_action_id>()
{
    // Body unavailable.
}

// name:A; map symbol; map:19655
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_enum_map<t_combat_actor_action_id>::t_enum_map<t_combat_actor_action_id>(
    t_char_ptr_pair const* arg_0,
    t_char_ptr_pair const* arg_1,
    t_combat_actor_action_id arg_2,
    t_combat_actor_action_id arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:19656
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_actor_action_id t_enum_map<t_combat_actor_action_id>::operator[](std::string arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:19657
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::string t_enum_map<t_combat_actor_action_id>::operator[](t_combat_actor_action_id arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:19658
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_enum_map<t_combat_actor_action_id>::find(std::string arg_0, t_combat_actor_action_id& arg_1) const
{
    // Body unavailable.
}

// === .data (1 symbols) ===

// name:A; map symbol; map:58170
DATA_CHT_1(UNACCOUNTED)
// t_char_ptr_pair*k_definitions

// === .bss (1 symbols) ===

namespace {

// confidence:C; dyninit-global; owner-conf-C; map:60100
DATA_CHT_1(0x009dd1f8)
t_enum_map<t_combat_actor_action_id> k_map; // Initial value unavailable.

} // anonymous namespace
