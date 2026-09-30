// combat_flinch.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 10/17 (A:8 B:1 C:1); unaccounted 7; skipped std 7.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (17 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:67809; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005cbe60, 0x15, STATIC_INIT_DISPATCH, "combat_flinch#1")

// name:C; dyninit; see ledger; map:67810
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_flinch#1")

// confidence:A; dyninit-init; owner-conf-C; map:67811; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005cbe80, 0x15, STATIC_INIT_DISPATCH, "combat_flinch#2")

// name:C; dyninit; see ledger; map:67812
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_flinch#2")

// confidence:A; dyninit-init; owner-conf-C; map:67813; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005cbea0, 0x15, STATIC_INIT_DISPATCH, "combat_flinch#3")

// name:C; dyninit; see ledger; map:67814
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_flinch#3")

// confidence:A; dyninit-init; owner-conf-C; map:67815; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005cbec0, 0x15, STATIC_INIT_DISPATCH, "combat_flinch#4")

// name:C; dyninit; see ledger; map:67816
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_flinch#4")

// confidence:A; dyninit-init; owner-conf-C; map:67817; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005cbee0, 0x10, STATIC_INIT_DISPATCH, "combat_flinch#5")

// name:C; dyninit; see ledger; map:67818
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_flinch#5")

// confidence:A; dyninit-init; owner-conf-C; map:67819; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005cbef0, 0x15, STATIC_INIT_DISPATCH, "combat_flinch#6")

// name:C; dyninit; see ledger; map:67820
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_flinch#6")

// confidence:B; align-order; retn,stable; map:20675
VA_CHT_1(0x005cbf10, 0xed)
void t_combat_flinch::add(t_attackable_object& arg_0, bool arg_1)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:20676
VA_CHT_1(0x005cc000, 0x75)
void t_combat_flinch::operator()(t_combat_creature& arg_0)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:67821; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005cc0a0, 0x20, STATIC_INIT_DISPATCH, combat_flinch)

// name:A; map symbol; map:20677
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_flinch::t_flincher::t_flincher()
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:20684
VA_CHT_1(0x005cc080, 0x20)
t_combat_flinch::t_flincher::t_flincher(t_combat_flinch::t_flincher const& arg_0)
{
    // Body unavailable.
}
