// combat_sounds.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 6/10 (A:1 B:4 C:1); unaccounted 4; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (10 symbols) ===

// confidence:B; align-order; retn,stable; map:21605
VA_CHT_1(0x005de420, 0x80)
t_cached_ptr<t_sound> get_combat_sound(t_creature_stack const& arg_0, t_combat_actor_action_id arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:67630
VA_CHT_1(0x005de4a0, 0x2e3)
static t_cached_ptr<t_sound> get_sound(t_creature_type arg_0, t_combat_actor_action_id arg_1)
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:67631
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// get_sound$sdtor
// Function body not reconstructed; signature retained as a comment.

// confidence:B; align-order; retn,stable; map:67632
VA_CHT_1(0x005de7b0, 0x3c2)
static t_cached_ptr<t_sound> get_sound(
    t_town_type arg_0,
    bool arg_1,
    bool arg_2,
    bool arg_3,
    t_combat_actor_action_id arg_4
)
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:67633
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// get_sound$sdtor
// Function body not reconstructed; signature retained as a comment.

// confidence:B; align-order; retn,stable; map:21606
VA_CHT_1(0x005deba0, 0xa7)
t_cached_ptr<t_sound> get_combat_sound(t_creature_stack const& arg_0, t_adv_actor_action_id arg_1)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:21607
VA_CHT_1(0x005dec60, 0x251)
t_cached_ptr<t_sound> get_combat_sound(t_spell arg_0)
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:67634
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// get_combat_sound$sdtor
// Function body not reconstructed; signature retained as a comment.

// confidence:A; dyninit-tinit; owner-conf-B; map:67635; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005deee0, 0x20, STATIC_INIT_DISPATCH, combat_sounds)

// name:A; map symbol; map:21608
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_cached_ptr<t_sound>::operator==(t_sound const* arg_0) const
{
    // Body unavailable.
}
