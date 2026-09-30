// play_combat_walk.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 23/34 (A:17 B:3 C:3); unaccounted 11; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (24 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:63717; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0075b680, 0x15, STATIC_INIT_DISPATCH, "play_combat_walk#1")

// name:C; dyninit; see ledger; map:63718
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "play_combat_walk#1")

// confidence:A; dyninit-init; owner-conf-C; map:63719; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0075b6a0, 0x15, STATIC_INIT_DISPATCH, "play_combat_walk#2")

// name:C; dyninit; see ledger; map:63720
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "play_combat_walk#2")

// confidence:A; dyninit-init; owner-conf-C; map:63721; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0075b6c0, 0x15, STATIC_INIT_DISPATCH, "play_combat_walk#3")

// name:C; dyninit; see ledger; map:63722
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "play_combat_walk#3")

// confidence:A; dyninit-init; owner-conf-C; map:63723; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0075b6e0, 0x15, STATIC_INIT_DISPATCH, "play_combat_walk#4")

// name:C; dyninit; see ledger; map:63724
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "play_combat_walk#4")

// confidence:A; dyninit-init; owner-conf-C; map:63725; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0075b700, 0x10, STATIC_INIT_DISPATCH, "play_combat_walk#5")

// name:C; dyninit; see ledger; map:63726
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "play_combat_walk#5")

// confidence:A; dyninit-init; owner-conf-C; map:63727; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0075b710, 0x15, STATIC_INIT_DISPATCH, "play_combat_walk#6")

// name:C; dyninit; see ledger; map:63728
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "play_combat_walk#6")

// confidence:A; align-order; stable,vptr; map:31854
VA_CHT_1(0x0075b730, 0x1f4)
t_play_combat_walk::t_play_combat_walk(
    t_combat_creature& arg_0,
    t_combat_path const& arg_1,
    t_handler_1<t_combat_creature&> arg_2
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:31855
VA_CHT_1(0x0075b950, 0xea)
t_play_combat_walk::~t_play_combat_walk()
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:31856
VA_CHT_1(0x0075ba40, 0x140)
void t_play_combat_walk::begin_move()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:31857
VA_CHT_1(0x0075bb80, 0xdb)
void t_play_combat_walk::calculate_threshold(t_combat_actor_action_id arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:31858
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_play_combat_walk::end_move()
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:31859
VA_CHT_1(0x0075bc60, 0x114)
void t_play_combat_walk::enter_tower()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:31860
VA_CHT_1(0x0075bd80, 0x39b)
void t_play_combat_walk::on_idle()
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:63729; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0075c1a0, 0x20, STATIC_INIT_DISPATCH, play_combat_walk)

// confidence:A; align-band; retn,stable,vslot; map:31861
VA_CHT_1_COMPGEN(0x0075b930, 0x1e, SCALAR_DELETING_DTOR, t_play_combat_walk)

// name:A; map symbol; map:31862
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_play_combat_walk)

// name:A; map symbol; map:31863
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_play_combat_walk)

// confidence:C; align-order; stable; map:31864
VA_CHT_1_COMPGEN(0x0075c1d0, 0x8, VECTOR_DELETING_DTOR, t_play_combat_walk)

// === .rdata (3 symbols) ===

// confidence:B; rtti-order; map:45041
DATA_CHT_1_COMPGEN(0x008e7a00, "const t_play_combat_walk::`vftable'")

// confidence:A; rtti-name; map:45042
DATA_CHT_1_COMPGEN(0x008e79f4, "const t_play_combat_walk::`vftable'{for `t_idle_processor'}")

// confidence:B; rtti-order; map:45043
DATA_CHT_1_COMPGEN(0x008e7a08, "const t_play_combat_walk::`vftable'{for `t_counted_object'}")

// === .rdata$r (6 symbols) ===

// name:A; map symbol; map:53912
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_play_combat_walk::`RTTI Complete Object Locator'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_play_combat_walk@@;vft=4e79f4;col=512508;td=5b0514;chd=5124f8;offset=8;cdOffset=0;validated-hierarchy; map:53913
DATA_CHT_1_COMPGEN(0x00912508, "const t_play_combat_walk::`RTTI Complete Object Locator'{for `t_idle_processor'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_play_combat_walk@@;bcd=5124c0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53914
DATA_CHT_1_COMPGEN(0x009124c0, "t_play_combat_walk::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_play_combat_walk@@;vft=4e79f4;col=512508;td=5b0514;chd=5124f8;offset=8;cdOffset=0;validated-hierarchy; map:53915
DATA_CHT_1_COMPGEN(0x009124d8, "t_play_combat_walk::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_play_combat_walk@@;vft=4e79f4;col=512508;td=5b0514;chd=5124f8;offset=8;cdOffset=0;validated-hierarchy; map:53916
DATA_CHT_1_COMPGEN(0x009124f8, "t_play_combat_walk::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:53917
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_play_combat_walk::`RTTI Complete Object Locator'{for `t_counted_object'}")

// === .data (1 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_play_combat_walk@@;td=5b0514;validated-header; map:58955
DATA_CHT_1_COMPGEN(0x009b0514, "t_play_combat_walk `RTTI Type Descriptor'")
