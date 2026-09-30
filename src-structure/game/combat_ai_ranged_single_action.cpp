// combat_ai_ranged_single_action.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 13/25 (A:0 B:0 C:0); unaccounted 12; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (25 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67945; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005b9850, 0x15, STATIC_INIT_DISPATCH, "combat_ai_ranged_single_action#1")

// name:C; dyninit; see ledger; map:67946
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_ai_ranged_single_action#1")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67947; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005b9870, 0x15, STATIC_INIT_DISPATCH, "combat_ai_ranged_single_action#2")

// name:C; dyninit; see ledger; map:67948
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_ai_ranged_single_action#2")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67949; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005b9890, 0x15, STATIC_INIT_DISPATCH, "combat_ai_ranged_single_action#3")

// name:C; dyninit; see ledger; map:67950
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_ai_ranged_single_action#3")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67951; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005b98b0, 0x15, STATIC_INIT_DISPATCH, "combat_ai_ranged_single_action#4")

// name:C; dyninit; see ledger; map:67952
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_ai_ranged_single_action#4")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67953; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005b98d0, 0x10, STATIC_INIT_DISPATCH, "combat_ai_ranged_single_action#5")

// name:C; dyninit; see ledger; map:67954
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_ai_ranged_single_action#5")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67955; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005b98e0, 0x15, STATIC_INIT_DISPATCH, "combat_ai_ranged_single_action#6")

// name:C; dyninit; see ledger; map:67956
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_ai_ranged_single_action#6")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67957; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005b9900, 0x16, STATIC_INIT_DISPATCH, "combat_ai_ranged_single_action#7")

// name:C; dyninit; see ledger; map:67958
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_ai_ranged_single_action#7")

// name:C; dyninit; see ledger; map:67959
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "combat_ai_ranged_single_action#7")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67960; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005b9920, 0xa, STATIC_DTOR, "combat_ai_ranged_single_action#7")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67961; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005b9930, 0x16, STATIC_INIT_DISPATCH, "combat_ai_ranged_single_action#8")

// name:C; dyninit; see ledger; map:67962
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_ai_ranged_single_action#8")

// name:C; dyninit; see ledger; map:67963
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "combat_ai_ranged_single_action#8")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67964; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005b9950, 0xa, STATIC_DTOR, "combat_ai_ranged_single_action#8")

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:20214
VA_CHT_1(0x005b9960, 0xfa)
void t_combat_ai_ranged_single_action::weigh_action(t_combat_ai const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:20215
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
double t_combat_ai_ranged_single_action::get_attack_weight(
    t_combat_creature const& arg_0,
    t_combat_creature const& arg_1,
    int arg_2
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:20216
VA_CHT_1(0x005b9a60, 0x98)
void t_combat_ai_ranged_single_action::perform_action()
{
    // Body unavailable.
}

// name:A; map symbol; map:67965
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
static bool should_wait(t_combat_creature const& arg_0, t_combat_creature const& arg_1)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:67966; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005b9b00, 0x20, STATIC_INIT_DISPATCH, combat_ai_ranged_single_action)
