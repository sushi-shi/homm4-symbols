// translation_animation.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 19/30 (A:6 B:2 C:0); unaccounted 11; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (20 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:61305; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0082f8a0, 0x15, STATIC_INIT_DISPATCH, "translation_animation#1")

// name:C; dyninit; see ledger; map:61306
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "translation_animation#1")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:61307; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0082f8c0, 0x15, STATIC_INIT_DISPATCH, "translation_animation#2")

// name:C; dyninit; see ledger; map:61308
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "translation_animation#2")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:61309; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0082f8e0, 0x15, STATIC_INIT_DISPATCH, "translation_animation#3")

// name:C; dyninit; see ledger; map:61310
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "translation_animation#3")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:61311; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0082f900, 0x15, STATIC_INIT_DISPATCH, "translation_animation#4")

// name:C; dyninit; see ledger; map:61312
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "translation_animation#4")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:61313; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0082f920, 0x10, STATIC_INIT_DISPATCH, "translation_animation#5")

// name:C; dyninit; see ledger; map:61314
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "translation_animation#5")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:61315; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0082f930, 0x15, STATIC_INIT_DISPATCH, "translation_animation#6")

// name:C; dyninit; see ledger; map:61316
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "translation_animation#6")

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:40415
VA_CHT_1(0x0082f950, 0x13d)
t_translation_animation::t_translation_animation(t_combat_creature& arg_0, t_map_point_3d const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:40416
VA_CHT_1(0x0082fb20, 0x17e)
void t_translation_animation::on_idle()
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:61317; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0082fca0, 0x20, STATIC_INIT_DISPATCH, translation_animation)

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:40417
VA_CHT_1_COMPGEN(0x0082fa90, 0x1e, SCALAR_DELETING_DTOR, t_translation_animation)

// name:A; map symbol; map:40418
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_translation_animation)

// name:A; map symbol; map:40419
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_translation_animation::~t_translation_animation()
{
    // Body unavailable.
}

// name:A; map symbol; map:40420
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_translation_animation)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40421
VA_CHT_1_COMPGEN(0x0082fcd0, 0x8, VECTOR_DELETING_DTOR, t_translation_animation)

// === .rdata (3 symbols) ===

// confidence:B; rtti-order; map:46002
DATA_CHT_1_COMPGEN(0x008f07bc, "const t_translation_animation::`vftable'")

// confidence:A; rtti-name; map:46003
DATA_CHT_1_COMPGEN(0x008f07cc, "const t_translation_animation::`vftable'{for `t_idle_processor'}")

// confidence:B; rtti-order; map:46004
DATA_CHT_1_COMPGEN(0x008f07d8, "const t_translation_animation::`vftable'{for `t_counted_object'}")

// === .rdata$r (6 symbols) ===

// name:A; map symbol; map:56908
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_translation_animation::`RTTI Complete Object Locator'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_translation_animation@@;vft=4f07cc;col=51e04c;td=5bf5d4;chd=51e098;offset=8;cdOffset=0;validated-hierarchy; map:56909
DATA_CHT_1_COMPGEN(0x0091e04c, "const t_translation_animation::`RTTI Complete Object Locator'{for `t_idle_processor'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_translation_animation@@;bcd=51e060;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56910
DATA_CHT_1_COMPGEN(0x0091e060, "t_translation_animation::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_translation_animation@@;vft=4f07cc;col=51e04c;td=5bf5d4;chd=51e098;offset=8;cdOffset=0;validated-hierarchy; map:56911
DATA_CHT_1_COMPGEN(0x0091e078, "t_translation_animation::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_translation_animation@@;vft=4f07cc;col=51e04c;td=5bf5d4;chd=51e098;offset=8;cdOffset=0;validated-hierarchy; map:56912
DATA_CHT_1_COMPGEN(0x0091e098, "t_translation_animation::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:56913
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_translation_animation::`RTTI Complete Object Locator'{for `t_counted_object'}")

// === .data (1 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_translation_animation@@;td=5bf5d4;validated-header; map:59697
DATA_CHT_1_COMPGEN(0x009bf5d4, "t_translation_animation `RTTI Type Descriptor'")
