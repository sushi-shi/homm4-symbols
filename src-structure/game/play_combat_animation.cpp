// play_combat_animation.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 20/30 (A:16 B:3 C:1); unaccounted 10; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (21 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:63745; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007599d0, 0x15, STATIC_INIT_DISPATCH, "play_combat_animation#1")

// name:C; dyninit; see ledger; map:63746
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "play_combat_animation#1")

// confidence:A; dyninit-init; owner-conf-C; map:63747; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007599f0, 0x15, STATIC_INIT_DISPATCH, "play_combat_animation#2")

// name:C; dyninit; see ledger; map:63748
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "play_combat_animation#2")

// confidence:A; dyninit-init; owner-conf-C; map:63749; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00759a10, 0x15, STATIC_INIT_DISPATCH, "play_combat_animation#3")

// name:C; dyninit; see ledger; map:63750
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "play_combat_animation#3")

// confidence:A; dyninit-init; owner-conf-C; map:63751; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00759a30, 0x15, STATIC_INIT_DISPATCH, "play_combat_animation#4")

// name:C; dyninit; see ledger; map:63752
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "play_combat_animation#4")

// confidence:A; dyninit-init; owner-conf-C; map:63753; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00759a50, 0x10, STATIC_INIT_DISPATCH, "play_combat_animation#5")

// name:C; dyninit; see ledger; map:63754
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "play_combat_animation#5")

// confidence:A; dyninit-init; owner-conf-C; map:63755; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00759a60, 0x15, STATIC_INIT_DISPATCH, "play_combat_animation#6")

// name:C; dyninit; see ledger; map:63756
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "play_combat_animation#6")

// confidence:A; align-order; retn,stable,vptr; map:31810
VA_CHT_1(0x00759a80, 0x1be)
t_play_combat_animation::t_play_combat_animation(
    t_combat_creature& arg_0,
    t_direction arg_1,
    t_combat_actor_action_id arg_2,
    bool arg_3
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:31811
VA_CHT_1(0x00759c60, 0xc0)
t_play_combat_animation::~t_play_combat_animation()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:31812
VA_CHT_1(0x00759d20, 0x33)
void t_play_combat_animation::set_reverse(bool arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:31813
VA_CHT_1(0x00759d60, 0x3ef)
void t_play_combat_animation::on_idle()
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:63757; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0075a150, 0x20, STATIC_INIT_DISPATCH, play_combat_animation)

// confidence:A; align-band; retn,stable,vslot; map:31814
VA_CHT_1_COMPGEN(0x00759c40, 0x1e, VECTOR_DELETING_DTOR, t_play_combat_animation)

// name:A; map symbol; map:31815
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_play_combat_animation)

// name:A; map symbol; map:31816
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_play_combat_animation)

// confidence:C; align-order; stable; map:31817
VA_CHT_1_COMPGEN(0x0075a180, 0x8, VECTOR_DELETING_DTOR, t_play_combat_animation)

// === .rdata (3 symbols) ===

// confidence:B; rtti-order; map:45035
DATA_CHT_1_COMPGEN(0x008e7994, "const t_play_combat_animation::`vftable'")

// confidence:A; rtti-name; map:45036
DATA_CHT_1_COMPGEN(0x008e79a4, "const t_play_combat_animation::`vftable'{for `t_idle_processor'}")

// confidence:B; rtti-order; map:45037
DATA_CHT_1_COMPGEN(0x008e79b0, "const t_play_combat_animation::`vftable'{for `t_counted_object'}")

// === .rdata$r (6 symbols) ===

// name:A; map symbol; map:53900
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_play_combat_animation::`RTTI Complete Object Locator'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_play_combat_animation@@;vft=4e79a4;col=5123a4;td=598df0;chd=5123f0;offset=8;cdOffset=0;validated-hierarchy; map:53901
DATA_CHT_1_COMPGEN(0x009123a4, "const t_play_combat_animation::`RTTI Complete Object Locator'{for `t_idle_processor'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_play_combat_animation@@;bcd=5123b8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53902
DATA_CHT_1_COMPGEN(0x009123b8, "t_play_combat_animation::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_play_combat_animation@@;vft=4e79a4;col=5123a4;td=598df0;chd=5123f0;offset=8;cdOffset=0;validated-hierarchy; map:53903
DATA_CHT_1_COMPGEN(0x009123d0, "t_play_combat_animation::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_play_combat_animation@@;vft=4e79a4;col=5123a4;td=598df0;chd=5123f0;offset=8;cdOffset=0;validated-hierarchy; map:53904
DATA_CHT_1_COMPGEN(0x009123f0, "t_play_combat_animation::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:53905
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_play_combat_animation::`RTTI Complete Object Locator'{for `t_counted_object'}")
