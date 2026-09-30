// flotsam.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 25/37 (A:12 B:2 C:0); unaccounted 12; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (17 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65423; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006ae0b0, 0x1c, STATIC_INIT_DISPATCH, "flotsam#1")

// name:C; dyninit; see ledger; map:65424
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "flotsam#1")

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:26303
VA_CHT_1(0x006ae0d0, 0x16f)
t_flotsam::t_flotsam(t_stationary_adventure_object const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:26304
VA_CHT_1(0x006ae2d0, 0x388)
void t_flotsam::activate_trigger(
    t_army* arg_0,
    t_adv_map_point const& arg_1,
    t_direction arg_2,
    t_adventure_frame* arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:26305
VA_CHT_1(0x006ae660, 0x79)
bool t_flotsam::read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_qualified_adv_object_type const& arg_1,
    int arg_2
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26306
VA_CHT_1(0x006ae6e0, 0x69)
bool t_flotsam::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:26307
VA_CHT_1(0x006ae750, 0x2e)
float t_flotsam::ai_value(t_adventure_ai const& arg_0, t_creature_array const& arg_1, int arg_2) const
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:65425; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006ae8d0, 0x20, STATIC_INIT_DISPATCH, flotsam)

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:26308
VA_CHT_1_COMPGEN(0x006ae240, 0x2d, SCALAR_DELETING_DTOR, t_flotsam)

// name:A; map symbol; map:26309
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_flotsam)

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26310
VA_CHT_1(0x006ae270, 0x57)
// public: void t_flotsam::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:26311
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_flotsam::~t_flotsam()
{
    // Body unavailable.
}

// name:A; map symbol; map:26312
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_registration<t_flotsam>::t_object_registration<t_flotsam>(t_adv_object_type arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:26313
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_factory<t_flotsam>::t_object_factory<t_flotsam>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:26314
VA_CHT_1(0x006ae780, 0x14a)
t_stationary_adventure_object* t_object_factory<t_flotsam>::create(
    std::string const& arg_0,
    t_qualified_adv_object_type const& arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:26315
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_flotsam)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26316
VA_CHT_1_COMPGEN(0x006ae900, 0xb, VECTOR_DELETING_DTOR, t_flotsam)

// === .rdata (7 symbols) ===

// name:A; map symbol; map:44521
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_flotsam::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:44522
DATA_CHT_1_COMPGEN(0x008e1834, "const t_flotsam::`vftable'")

// confidence:B; rtti-order; map:44523
DATA_CHT_1_COMPGEN(0x008e18f4, "const t_flotsam::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:44524
DATA_CHT_1_COMPGEN(0x008e18fc, "const t_flotsam::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:44525
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_flotsam::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:44526
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_flotsam::`vbtable'{for `t_abstract_stationary_adv_object'}")

// confidence:A; rtti-name; map:44527
DATA_CHT_1_COMPGEN(0x008e182c, "const t_object_factory<t_flotsam>::`vftable'")

// === .rdata$r (11 symbols) ===

// name:A; map symbol; map:52566
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_flotsam::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_flotsam@@;vft=4e1834;col=50c2c4;td=5a4eb0;chd=50c2b4;offset=92;cdOffset=0;validated-hierarchy; map:52567
DATA_CHT_1_COMPGEN(0x0090c2c4, "const t_flotsam::`RTTI Complete Object Locator'")

// name:A; map symbol; map:52568
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_flotsam::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_flotsam@@;bcd=50c274;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52569
DATA_CHT_1_COMPGEN(0x0090c274, "t_flotsam::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_flotsam@@;vft=4e1834;col=50c2c4;td=5a4eb0;chd=50c2b4;offset=92;cdOffset=0;validated-hierarchy; map:52570
DATA_CHT_1_COMPGEN(0x0090c28c, "t_flotsam::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_flotsam@@;vft=4e1834;col=50c2c4;td=5a4eb0;chd=50c2b4;offset=92;cdOffset=0;validated-hierarchy; map:52571
DATA_CHT_1_COMPGEN(0x0090c2b4, "t_flotsam::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:52572
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_flotsam::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_object_factory@Vt_flotsam@@@@;bcd=50c1f0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52573
DATA_CHT_1_COMPGEN(0x0090c1f0, "t_object_factory<t_flotsam>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_object_factory@Vt_flotsam@@@@;vft=4e182c;col=50c224;td=5a4e80;chd=50c214;offset=0;cdOffset=0;validated-hierarchy; map:52574
DATA_CHT_1_COMPGEN(0x0090c208, "t_object_factory<t_flotsam>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_object_factory@Vt_flotsam@@@@;vft=4e182c;col=50c224;td=5a4e80;chd=50c214;offset=0;cdOffset=0;validated-hierarchy; map:52575
DATA_CHT_1_COMPGEN(0x0090c214, "t_object_factory<t_flotsam>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_object_factory@Vt_flotsam@@@@;vft=4e182c;col=50c224;td=5a4e80;chd=50c214;offset=0;cdOffset=0;validated-hierarchy; map:52576
DATA_CHT_1_COMPGEN(0x0090c224, "const t_object_factory<t_flotsam>::`RTTI Complete Object Locator'")

// === .data (2 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_flotsam@@;td=5a4eb0;validated-header; map:58629
DATA_CHT_1_COMPGEN(0x009a4eb0, "t_flotsam `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_object_factory@Vt_flotsam@@@@;td=5a4e80;validated-header; map:58630
DATA_CHT_1_COMPGEN(0x009a4e80, "t_object_factory<t_flotsam> `RTTI Type Descriptor'")
