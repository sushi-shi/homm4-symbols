// run_combat.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 10/24 (A:4 B:4 C:2); unaccounted 14; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (19 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:63360; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00781310, 0x15, STATIC_INIT_DISPATCH, "run_combat#1")

// name:C; dyninit; see ledger; map:63361
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "run_combat#1")

// confidence:A; dyninit-init; owner-conf-C; map:63362; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00781330, 0x16, STATIC_INIT_DISPATCH, "run_combat#2")

// name:C; dyninit; see ledger; map:63363
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "run_combat#2")

// name:C; dyninit; see ledger; map:63364
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "run_combat#2")

// confidence:B; dyninit-dtor; owner-conf-C; map:63365; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00781350, 0xa, STATIC_DTOR, "run_combat#2")

// confidence:B; align-order; retn,stable; map:33399
VA_CHT_1(0x00781360, 0x1d4)
void run_result_scripts(t_combat_context& arg_0, t_creature_array const* arg_1, t_combat_result arg_2)
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:33400
VA_CHT_1(0x00781540, 0x27b)
void on_combat_end(t_combat_context& arg_0, t_combat_result arg_1, t_counted_ptr<t_army> arg_2)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:33401
VA_CHT_1(0x007817c0, 0x827)
void run_combat(t_combat_context& arg_0, bool arg_1, bool arg_2)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:33402
VA_CHT_1(0x00782010, 0xba)
t_combat_result run_combat_remote(t_combat_context& arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:33403
VA_CHT_1(0x007820d0, 0x3a)
void run_combat_apply_remote_results(t_combat_result arg_0, t_creature_array& arg_1, t_creature_array& arg_2)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:63366; name:B (dyninit; see ledger)
VA_CHT_1(0x00782110, 0x20)
// run_combat$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:A; dyninit-tinit; owner-conf-B; map:63368; name:B (dyninit; see ledger)
VA_CHT_1(0x00782130, 0x5c)
// run_combat$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:63369
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// run_combat$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:63370
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// run_combat$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:63371
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// run_combat$tatexit4
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:33404
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_player::inc_battle_score(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:33405
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_combat_context::was_cursor_visible() const
{
    // Body unavailable.
}

// name:A; map symbol; map:33406
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_combat_context::set_cursor_visible(bool arg_0)
{
    // Body unavailable.
}

// === .data (2 symbols) ===

// name:A; map symbol; map:59064
DATA_CHT_1_COMPGEN(UNACCOUNTED, "score >= 0")

// name:A; map symbol; map:59065
DATA_CHT_1_COMPGEN(UNACCOUNTED, "C:\\\\work\\\\game\\\\player.h")

// === .bss (3 symbols) ===

// name:A; map symbol; map:60338
DATA_CHT_1(UNACCOUNTED)
// t_creature_array*g_waiting_attacker_ptr

// name:A; map symbol; map:60339
DATA_CHT_1(UNACCOUNTED)
t_counted_ptr<t_basic_dialog> g_waiting_dialog_ptr; // Initial value unavailable.

// name:A; map symbol; map:60340
DATA_CHT_1(UNACCOUNTED)
// t_creature_array*g_waiting_defender_ptr
