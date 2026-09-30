// spell_actor_animation.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 19/30 (A:6 B:2 C:0); unaccounted 11; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (20 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:62630; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007cc200, 0x15, STATIC_INIT_DISPATCH, "spell_actor_animation#1")

// name:C; dyninit; see ledger; map:62631
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "spell_actor_animation#1")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:62632; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007cc220, 0x15, STATIC_INIT_DISPATCH, "spell_actor_animation#2")

// name:C; dyninit; see ledger; map:62633
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "spell_actor_animation#2")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:62634; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007cc240, 0x15, STATIC_INIT_DISPATCH, "spell_actor_animation#3")

// name:C; dyninit; see ledger; map:62635
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "spell_actor_animation#3")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:62636; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007cc260, 0x15, STATIC_INIT_DISPATCH, "spell_actor_animation#4")

// name:C; dyninit; see ledger; map:62637
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "spell_actor_animation#4")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:62638; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007cc280, 0x10, STATIC_INIT_DISPATCH, "spell_actor_animation#5")

// name:C; dyninit; see ledger; map:62639
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "spell_actor_animation#5")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:62640; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007cc290, 0x15, STATIC_INIT_DISPATCH, "spell_actor_animation#6")

// name:C; dyninit; see ledger; map:62641
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "spell_actor_animation#6")

// confidence:D; align-order; vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:37883
VA_CHT_1(0x007cc2b0, 0x136)
t_spell_actor_animation::t_spell_actor_animation(
    t_battlefield& arg_0,
    t_combat_actor& arg_1,
    t_counted_ptr<t_combat_spell> arg_2,
    t_handler arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:37884
VA_CHT_1(0x007cc4b0, 0x11b)
void t_spell_actor_animation::on_idle()
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:62642; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007cc5d0, 0x20, STATIC_INIT_DISPATCH, spell_actor_animation)

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:37885
VA_CHT_1_COMPGEN(0x007cc3f0, 0x1e, VECTOR_DELETING_DTOR, t_spell_actor_animation)

// name:A; map symbol; map:37886
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_spell_actor_animation)

// name:A; map symbol; map:37887
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_spell_actor_animation::~t_spell_actor_animation()
{
    // Body unavailable.
}

// name:A; map symbol; map:37888
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_spell_actor_animation)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:37889
VA_CHT_1_COMPGEN(0x007cc600, 0x8, VECTOR_DELETING_DTOR, t_spell_actor_animation)

// === .rdata (3 symbols) ===

// confidence:B; rtti-order; map:45801
DATA_CHT_1_COMPGEN(0x008ed4d0, "const t_spell_actor_animation::`vftable'")

// confidence:A; rtti-name; map:45802
DATA_CHT_1_COMPGEN(0x008ed4c4, "const t_spell_actor_animation::`vftable'{for `t_idle_processor'}")

// confidence:B; rtti-order; map:45803
DATA_CHT_1_COMPGEN(0x008ed4d8, "const t_spell_actor_animation::`vftable'{for `t_counted_object'}")

// === .rdata$r (6 symbols) ===

// name:A; map symbol; map:56409
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_spell_actor_animation::`RTTI Complete Object Locator'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_spell_actor_animation@@;vft=4ed4c4;col=51bb4c;td=5ba79c;chd=51bb3c;offset=8;cdOffset=0;validated-hierarchy; map:56410
DATA_CHT_1_COMPGEN(0x0091bb4c, "const t_spell_actor_animation::`RTTI Complete Object Locator'{for `t_idle_processor'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_spell_actor_animation@@;bcd=51bb04;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56411
DATA_CHT_1_COMPGEN(0x0091bb04, "t_spell_actor_animation::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_spell_actor_animation@@;vft=4ed4c4;col=51bb4c;td=5ba79c;chd=51bb3c;offset=8;cdOffset=0;validated-hierarchy; map:56412
DATA_CHT_1_COMPGEN(0x0091bb1c, "t_spell_actor_animation::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_spell_actor_animation@@;vft=4ed4c4;col=51bb4c;td=5ba79c;chd=51bb3c;offset=8;cdOffset=0;validated-hierarchy; map:56413
DATA_CHT_1_COMPGEN(0x0091bb3c, "t_spell_actor_animation::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:56414
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_spell_actor_animation::`RTTI Complete Object Locator'{for `t_counted_object'}")

// === .data (1 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_spell_actor_animation@@;td=5ba79c;validated-header; map:59578
DATA_CHT_1_COMPGEN(0x009ba79c, "t_spell_actor_animation `RTTI Type Descriptor'")
