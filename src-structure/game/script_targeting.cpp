// script_targeting.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 12/20 (A:3 B:7 C:2); unaccounted 8; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (18 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:62915; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007a6910, 0x15, STATIC_INIT_DISPATCH, "script_targeting#1")

// name:C; dyninit; see ledger; map:62916
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "script_targeting#1")

// confidence:B; align-order; retn,stable; map:36627
VA_CHT_1(0x007a6930, 0xb8)
t_hero const* select_hero_by_target(
    t_script_hero_target arg_0,
    t_creature_array const* arg_1,
    t_hero const* arg_2,
    t_creature_array const* arg_3,
    t_creature_array const* arg_4
)
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:36628
VA_CHT_1(0x007a6a10, 0x5)
t_hero* select_hero_by_target(
    t_script_hero_target arg_0,
    t_creature_array* arg_1,
    t_hero* arg_2,
    t_creature_array* arg_3,
    t_creature_array* arg_4
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:36629
VA_CHT_1(0x007a6a20, 0x74)
t_player const* select_player_by_target(
    t_script_player_target arg_0,
    t_adventure_map const* arg_1,
    t_owned_adv_object const* arg_2,
    t_player const* arg_3,
    t_player const* arg_4
)
{
    // Body unavailable.
}

// name:A; map symbol; map:36630
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_player* select_player_by_target(
    t_script_player_target arg_0,
    t_adventure_map* arg_1,
    t_owned_adv_object* arg_2,
    t_player* arg_3,
    t_player* arg_4
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:36631
VA_CHT_1(0x007a6aa0, 0x34)
t_creature_array const* select_creature_array_by_target(
    t_script_stack_target arg_0,
    t_creature_array const* arg_1,
    t_creature_array const* arg_2,
    t_creature_array const* arg_3
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:36632
VA_CHT_1(0x007a6af0, 0x34)
t_creature_array* select_creature_array_by_target(
    t_script_stack_target arg_0,
    t_creature_array* arg_1,
    t_creature_array* arg_2,
    t_creature_array* arg_3
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:36633
VA_CHT_1(0x007a6b40, 0x33)
t_creature_array const* select_army_by_target(
    t_script_army_target arg_0,
    t_creature_array const* arg_1,
    t_creature_array const* arg_2,
    t_creature_array const* arg_3
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:36634
VA_CHT_1(0x007a6b80, 0x2e)
t_creature_array* select_army_by_target(
    t_script_army_target arg_0,
    t_creature_array* arg_1,
    t_creature_array* arg_2,
    t_creature_array* arg_3
)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:36635
VA_CHT_1(0x007a6bb0, 0x3e)
void post_execute_validate(t_creature_array* arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:36636
VA_CHT_1(0x007a6bf0, 0x1b5)
void execute_hero_script(
    t_hero_scriptable_event arg_0,
    t_script_context_hero const& arg_1,
    t_creature_array const* arg_2
)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:62917; name:B (dyninit; see ledger)
VA_CHT_1(0x007a6db0, 0x20)
// script_targeting$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:A; dyninit-tinit; owner-conf-B; map:62919; name:B (dyninit; see ledger)
VA_CHT_1(0x007a6dd0, 0x5c)
// script_targeting$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:62920
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// script_targeting$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:62921
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// script_targeting$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:62922
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// script_targeting$tatexit4
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:36637
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_player_color get_player_color(t_script_player_target arg_0)
{
    // Body unavailable.
}

// === .data (2 symbols) ===

// name:A; map symbol; map:59487
DATA_CHT_1_COMPGEN(UNACCOUNTED, "target >= k_script_player_target...")

// name:A; map symbol; map:59488
DATA_CHT_1_COMPGEN(UNACCOUNTED, "C:\\\\work\\\\game\\\\script_target_type....")
