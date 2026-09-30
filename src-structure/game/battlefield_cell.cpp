// battlefield_cell.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 24/32 (A:8 B:10 C:6); unaccounted 8; skipped std 3.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (32 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:69052; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005667e0, 0x15, STATIC_INIT_DISPATCH, "battlefield_cell#1")

// name:C; dyninit; see ledger; map:69053
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "battlefield_cell#1")

// confidence:A; dyninit-init; owner-conf-C; map:69054; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00566800, 0x15, STATIC_INIT_DISPATCH, "battlefield_cell#2")

// name:C; dyninit; see ledger; map:69055
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "battlefield_cell#2")

// confidence:A; dyninit-init; owner-conf-C; map:69056; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00566820, 0x15, STATIC_INIT_DISPATCH, "battlefield_cell#3")

// name:C; dyninit; see ledger; map:69057
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "battlefield_cell#3")

// confidence:A; dyninit-init; owner-conf-C; map:69058; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00566840, 0x15, STATIC_INIT_DISPATCH, "battlefield_cell#4")

// name:C; dyninit; see ledger; map:69059
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "battlefield_cell#4")

// confidence:A; dyninit-init; owner-conf-C; map:69060; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00566860, 0x10, STATIC_INIT_DISPATCH, "battlefield_cell#5")

// name:C; dyninit; see ledger; map:69061
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "battlefield_cell#5")

// confidence:A; dyninit-init; owner-conf-C; map:69062; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00566870, 0x15, STATIC_INIT_DISPATCH, "battlefield_cell#6")

// name:C; dyninit; see ledger; map:69063
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "battlefield_cell#6")

// confidence:C; align-order; retn,stable; map:17461
VA_CHT_1(0x00566890, 0x85)
t_battlefield_cell::t_battlefield_cell()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:17462
VA_CHT_1(0x00566920, 0xb7)
void t_battlefield_cell::add_threat(t_combat_creature* arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:17463
VA_CHT_1(0x005669e0, 0x4d)
void t_battlefield_cell::remove_threat(t_combat_creature* arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:17464
VA_CHT_1(0x00566a30, 0x52)
void t_battlefield_cell::update_obstacles()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:17465
VA_CHT_1(0x00566a90, 0x23)
void t_battlefield_cell::set_terrain_type(t_terrain_type arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:17466
VA_CHT_1(0x00566ac0, 0xa7)
void t_battlefield_cell::add(t_abstract_combat_object* arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:17467
VA_CHT_1(0x00566b70, 0x56)
t_combat_creature* t_battlefield_cell::get_creature() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:17468
VA_CHT_1(0x00566bd0, 0x39)
t_stationary_combat_object* t_battlefield_cell::get_obstacle() const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:17469
VA_CHT_1(0x00566c10, 0x59)
t_stationary_combat_object* t_battlefield_cell::get_obstacle(t_obstacle_type arg_0) const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:17470
VA_CHT_1(0x00566c70, 0x3e)
t_abstract_combat_object* t_battlefield_cell::get_attackable_object() const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:17471
VA_CHT_1(0x00566cb0, 0x54)
void t_battlefield_cell::remove(t_abstract_combat_object* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:17472
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_battlefield_cell::is_blocked(
    t_combat_object_base const* arg_0,
    t_combat_object_base const* arg_1
) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:17473
VA_CHT_1(0x00566d10, 0x5b)
bool t_battlefield_cell::is_blocked(t_combat_object_base const* arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:17474
VA_CHT_1(0x00566d70, 0xd2)
bool t_battlefield_cell::read(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:17475
VA_CHT_1(0x00566e50, 0xb3)
bool t_battlefield_cell::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:17476
VA_CHT_1(0x00566f10, 0x6)
t_battlefield_cell_vertex::t_battlefield_cell_vertex()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:17477
VA_CHT_1(0x00566f20, 0x9)
void t_battlefield_cell_vertex::set_height(int arg_0)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:69064; name:B (dyninit; see ledger)
VA_CHT_1(0x00566f30, 0x20)
// battlefield_cell$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:A; dyninit-tinit; owner-conf-B; map:69066; name:B (dyninit; see ledger)
VA_CHT_1(0x00566f50, 0x20)
// battlefield_cell$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:69067
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// battlefield_cell$tatexit2
// Function body not reconstructed; signature retained as a comment.
