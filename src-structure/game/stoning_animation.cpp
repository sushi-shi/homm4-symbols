// stoning_animation.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 32/50 (A:12 B:4 C:0); unaccounted 18; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (30 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:62310; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007e5450, 0x15, STATIC_INIT_DISPATCH, "stoning_animation#1")

// name:C; dyninit; see ledger; map:62311
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "stoning_animation#1")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:62312; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007e5470, 0x15, STATIC_INIT_DISPATCH, "stoning_animation#2")

// name:C; dyninit; see ledger; map:62313
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "stoning_animation#2")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:62314; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007e5490, 0x15, STATIC_INIT_DISPATCH, "stoning_animation#3")

// name:C; dyninit; see ledger; map:62315
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "stoning_animation#3")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:62316; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007e54b0, 0x15, STATIC_INIT_DISPATCH, "stoning_animation#4")

// name:C; dyninit; see ledger; map:62317
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "stoning_animation#4")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:62318; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007e54d0, 0x10, STATIC_INIT_DISPATCH, "stoning_animation#5")

// name:C; dyninit; see ledger; map:62319
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "stoning_animation#5")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:62320; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007e54e0, 0x15, STATIC_INIT_DISPATCH, "stoning_animation#6")

// name:C; dyninit; see ledger; map:62321
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "stoning_animation#6")

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:38435
VA_CHT_1(0x007e5500, 0xff)
t_stoning_animation::t_stoning_animation(t_combat_creature& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:38436
VA_CHT_1(0x007e5690, 0x20d)
void t_stoning_animation::on_idle()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:38437
VA_CHT_1(0x007e58a0, 0x13d)
t_freeze_animation::t_freeze_animation(t_combat_creature& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:38438
VA_CHT_1(0x007e5a70, 0x12c)
void t_freeze_animation::on_idle()
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:62322; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007e5ba0, 0x20, STATIC_INIT_DISPATCH, stoning_animation)

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:38439
VA_CHT_1_COMPGEN(0x007e5600, 0x1e, SCALAR_DELETING_DTOR, t_stoning_animation)

// name:A; map symbol; map:38440
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_stoning_animation)

// name:A; map symbol; map:38441
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_stoning_animation::~t_stoning_animation()
{
    // Body unavailable.
}

// name:A; map symbol; map:38442
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_combat_actor::get_saturation() const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:38443
VA_CHT_1_COMPGEN(0x007e59e0, 0x1e, SCALAR_DELETING_DTOR, t_freeze_animation)

// name:A; map symbol; map:38444
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_freeze_animation)

// name:A; map symbol; map:38445
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_freeze_animation::~t_freeze_animation()
{
    // Body unavailable.
}

// name:A; map symbol; map:38446
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_combat_actor::get_brightness() const
{
    // Body unavailable.
}

// name:A; map symbol; map:38447
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_combat_actor::get_hue_delta() const
{
    // Body unavailable.
}

// name:A; map symbol; map:38448
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_stoning_animation)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:38449
VA_CHT_1_COMPGEN(0x007e5bd0, 0x8, VECTOR_DELETING_DTOR, t_stoning_animation)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:38450
VA_CHT_1_COMPGEN(0x007e5be0, 0x8, VECTOR_DELETING_DTOR, t_freeze_animation)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:38451
VA_CHT_1_COMPGEN(0x007e5bf0, 0x8, VECTOR_DELETING_DTOR, t_freeze_animation)

// === .rdata (6 symbols) ===

// confidence:B; rtti-order; map:45863
DATA_CHT_1_COMPGEN(0x008ee1a4, "const t_stoning_animation::`vftable'")

// confidence:A; rtti-name; map:45864
DATA_CHT_1_COMPGEN(0x008ee1b4, "const t_stoning_animation::`vftable'{for `t_idle_processor'}")

// confidence:B; rtti-order; map:45865
DATA_CHT_1_COMPGEN(0x008ee1c0, "const t_stoning_animation::`vftable'{for `t_counted_object'}")

// confidence:B; rtti-order; map:45866
DATA_CHT_1_COMPGEN(0x008ee1c8, "const t_freeze_animation::`vftable'")

// confidence:A; rtti-name; map:45867
DATA_CHT_1_COMPGEN(0x008ee1d8, "const t_freeze_animation::`vftable'{for `t_idle_processor'}")

// confidence:B; rtti-order; map:45868
DATA_CHT_1_COMPGEN(0x008ee1e4, "const t_freeze_animation::`vftable'{for `t_counted_object'}")

// === .rdata$r (12 symbols) ===

// name:A; map symbol; map:56598
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_stoning_animation::`RTTI Complete Object Locator'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_stoning_animation@@;vft=4ee1b4;col=51c844;td=5bcf88;chd=51c890;offset=8;cdOffset=0;validated-hierarchy; map:56599
DATA_CHT_1_COMPGEN(0x0091c844, "const t_stoning_animation::`RTTI Complete Object Locator'{for `t_idle_processor'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_stoning_animation@@;bcd=51c858;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56600
DATA_CHT_1_COMPGEN(0x0091c858, "t_stoning_animation::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_stoning_animation@@;vft=4ee1b4;col=51c844;td=5bcf88;chd=51c890;offset=8;cdOffset=0;validated-hierarchy; map:56601
DATA_CHT_1_COMPGEN(0x0091c870, "t_stoning_animation::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_stoning_animation@@;vft=4ee1b4;col=51c844;td=5bcf88;chd=51c890;offset=8;cdOffset=0;validated-hierarchy; map:56602
DATA_CHT_1_COMPGEN(0x0091c890, "t_stoning_animation::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:56603
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_stoning_animation::`RTTI Complete Object Locator'{for `t_counted_object'}")

// name:A; map symbol; map:56604
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_freeze_animation::`RTTI Complete Object Locator'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_freeze_animation@@;vft=4ee1d8;col=51c8c8;td=5bcfac;chd=51c914;offset=8;cdOffset=0;validated-hierarchy; map:56605
DATA_CHT_1_COMPGEN(0x0091c8c8, "const t_freeze_animation::`RTTI Complete Object Locator'{for `t_idle_processor'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_freeze_animation@@;bcd=51c8dc;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56606
DATA_CHT_1_COMPGEN(0x0091c8dc, "t_freeze_animation::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_freeze_animation@@;vft=4ee1d8;col=51c8c8;td=5bcfac;chd=51c914;offset=8;cdOffset=0;validated-hierarchy; map:56607
DATA_CHT_1_COMPGEN(0x0091c8f4, "t_freeze_animation::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_freeze_animation@@;vft=4ee1d8;col=51c8c8;td=5bcfac;chd=51c914;offset=8;cdOffset=0;validated-hierarchy; map:56608
DATA_CHT_1_COMPGEN(0x0091c914, "t_freeze_animation::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:56609
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_freeze_animation::`RTTI Complete Object Locator'{for `t_counted_object'}")

// === .data (2 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_stoning_animation@@;td=5bcf88;validated-header; map:59619
DATA_CHT_1_COMPGEN(0x009bcf88, "t_stoning_animation `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_freeze_animation@@;td=5bcfac;validated-header; map:59620
DATA_CHT_1_COMPGEN(0x009bcfac, "t_freeze_animation `RTTI Type Descriptor'")
