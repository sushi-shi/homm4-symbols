// combat_action_message.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 14/27 (A:7 B:3 C:4); unaccounted 13; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (27 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:68194; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005aa170, 0x15, STATIC_INIT_DISPATCH, "combat_action_message#1")

// name:C; dyninit; see ledger; map:68195
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_action_message#1")

// confidence:A; dyninit-init; owner-conf-C; map:68196; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005aa190, 0x15, STATIC_INIT_DISPATCH, "combat_action_message#2")

// name:C; dyninit; see ledger; map:68197
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_action_message#2")

// confidence:A; dyninit-init; owner-conf-C; map:68198; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005aa1b0, 0x15, STATIC_INIT_DISPATCH, "combat_action_message#3")

// name:C; dyninit; see ledger; map:68199
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_action_message#3")

// confidence:A; dyninit-init; owner-conf-C; map:68200; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005aa1d0, 0x15, STATIC_INIT_DISPATCH, "combat_action_message#4")

// name:C; dyninit; see ledger; map:68201
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_action_message#4")

// confidence:A; dyninit-init; owner-conf-C; map:68202; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005aa1f0, 0x10, STATIC_INIT_DISPATCH, "combat_action_message#5")

// name:C; dyninit; see ledger; map:68203
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_action_message#5")

// confidence:A; dyninit-init; owner-conf-C; map:68204; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005aa200, 0x15, STATIC_INIT_DISPATCH, "combat_action_message#6")

// name:C; dyninit; see ledger; map:68205
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_action_message#6")

// confidence:C; align-order; retn,stable; map:19563
VA_CHT_1(0x005aa220, 0x11f)
t_combat_action_message::t_combat_action_message()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:19564
VA_CHT_1(0x005aa340, 0x17a)
t_combat_action_message::t_combat_action_message(
    t_combat_creature const& arg_0,
    std::string const& arg_1,
    t_combat_action_message_priority arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:19565
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_combat_action_message::clear()
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:19566
VA_CHT_1(0x005aa5c0, 0x3)
t_combat_creature const* t_combat_action_message::get_creature() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:19567
VA_CHT_1(0x005aa5d0, 0x4)
std::string const& t_combat_action_message::get_text() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:19568
VA_CHT_1(0x005aa5e0, 0x15)
t_combat_action_message_priority t_combat_action_message::get_priority() const
{
    // Body unavailable.
}

// name:A; map symbol; map:19569
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_combat_action_message::is_displayable() const
{
    // Body unavailable.
}

// name:A; map symbol; map:19570
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_combat_action_message::set_creature(t_combat_creature const& arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:19571
VA_CHT_1(0x005aa600, 0x2b)
void t_combat_action_message::set_text(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:19572
VA_CHT_1(0x005aa630, 0xa)
void t_combat_action_message::set_priority(t_combat_action_message_priority arg_0)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:68206; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005aa640, 0x20, STATIC_INIT_DISPATCH, combat_action_message)

// name:A; map symbol; map:19573
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_const_ptr<t_combat_creature>::t_counted_const_ptr<t_combat_creature>(t_combat_creature const* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:19574
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_const_ptr<t_combat_creature>::t_counted_const_ptr<t_combat_creature>()
{
    // Body unavailable.
}

// name:A; map symbol; map:19575
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_const_ptr<t_combat_creature>& t_counted_const_ptr<t_combat_creature>::operator=(
    t_combat_creature const* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:19576
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_creature const* t_counted_const_ptr<t_combat_creature>::operator t_combat_creature const*() const
{
    // Body unavailable.
}
