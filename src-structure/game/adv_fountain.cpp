// adv_fountain.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\adv_fountain.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 22/39 (A:12 B:2 C:0); unaccounted 17; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (17 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:71142; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0043b5d0, 0x1c, STATIC_INIT_DISPATCH, "adv_fountain#1")

// name:C; dyninit; see ledger; map:71143
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adv_fountain#1")

namespace {

// name:A; map symbol; map:4588
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
float ai_additional_hit_point_value(t_hero const* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:4589
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
float ai_additional_damage_value(t_hero const* arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-order; retn,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:4590
VA_CHT_1(0x0043b5f0, 0x111)
t_adv_fountain::t_adv_fountain(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:4591
VA_CHT_1(0x0043b7a0, 0x63f)
void t_adv_fountain::activate_trigger(
    t_army* arg_0,
    t_adv_map_point const& arg_1,
    t_direction arg_2,
    t_adventure_frame* arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:4592
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
float t_adv_fountain::ai_value(t_adventure_ai const& arg_0, t_creature_array const& arg_1, int arg_2) const
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:71144; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0043c100, 0x20, STATIC_INIT_DISPATCH, adv_fountain)

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:4593
VA_CHT_1_COMPGEN(0x0043b710, 0x2d, VECTOR_DELETING_DTOR, t_adv_fountain)

// name:A; map symbol; map:4594
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_adv_fountain)

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:4595
VA_CHT_1(0x0043b740, 0x57)
// public: void t_adv_fountain::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:4596
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_fountain::~t_adv_fountain()
{
    // Body unavailable.
}

// name:A; map symbol; map:4597
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_registration<t_adv_fountain>::t_object_registration<t_adv_fountain>(t_adv_object_type arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:4598
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_factory<t_adv_fountain>::t_object_factory<t_adv_fountain>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:4599
VA_CHT_1(0x0043c090, 0x62)
t_stationary_adventure_object* t_object_factory<t_adv_fountain>::create(
    std::string const& arg_0,
    t_qualified_adv_object_type const& arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:4600
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_adv_fountain)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4601
VA_CHT_1_COMPGEN(0x0043c130, 0xb, VECTOR_DELETING_DTOR, t_adv_fountain)

// === .rdata (9 symbols) ===

// name:A; map symbol; map:42815
DATA_CHT_1(UNACCOUNTED)
// __real@4@3ffccccccd0000000000

// name:A; map symbol; map:42816
DATA_CHT_1(UNACCOUNTED)
// __real@8@3ffcccccccccccccd000

// name:A; map symbol; map:42817
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_fountain::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:42818
DATA_CHT_1_COMPGEN(0x008cf34c, "const t_adv_fountain::`vftable'")

// confidence:B; rtti-order; map:42819
DATA_CHT_1_COMPGEN(0x008cf40c, "const t_adv_fountain::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:42820
DATA_CHT_1_COMPGEN(0x008cf414, "const t_adv_fountain::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:42821
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_fountain::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:42822
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_fountain::`vbtable'{for `t_abstract_stationary_adv_object'}")

// confidence:A; rtti-name; map:42823
DATA_CHT_1_COMPGEN(0x008cf334, "const t_object_factory<t_adv_fountain>::`vftable'")

// === .rdata$r (11 symbols) ===

// name:A; map symbol; map:48004
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_fountain::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_adv_fountain@@;vft=4cf34c;col=4f7300;td=588840;chd=4f72f0;offset=84;cdOffset=0;validated-hierarchy; map:48005
DATA_CHT_1_COMPGEN(0x008f7300, "const t_adv_fountain::`RTTI Complete Object Locator'")

// name:A; map symbol; map:48006
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_fountain::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adv_fountain@@;bcd=4f72b0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48007
DATA_CHT_1_COMPGEN(0x008f72b0, "t_adv_fountain::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adv_fountain@@;vft=4cf34c;col=4f7300;td=588840;chd=4f72f0;offset=84;cdOffset=0;validated-hierarchy; map:48008
DATA_CHT_1_COMPGEN(0x008f72c8, "t_adv_fountain::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adv_fountain@@;vft=4cf34c;col=4f7300;td=588840;chd=4f72f0;offset=84;cdOffset=0;validated-hierarchy; map:48009
DATA_CHT_1_COMPGEN(0x008f72f0, "t_adv_fountain::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:48010
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_fountain::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_object_factory@Vt_adv_fountain@@@@;bcd=4f722c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48011
DATA_CHT_1_COMPGEN(0x008f722c, "t_object_factory<t_adv_fountain>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_object_factory@Vt_adv_fountain@@@@;vft=4cf334;col=4f7260;td=58880c;chd=4f7250;offset=0;cdOffset=0;validated-hierarchy; map:48012
DATA_CHT_1_COMPGEN(0x008f7244, "t_object_factory<t_adv_fountain>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_object_factory@Vt_adv_fountain@@@@;vft=4cf334;col=4f7260;td=58880c;chd=4f7250;offset=0;cdOffset=0;validated-hierarchy; map:48013
DATA_CHT_1_COMPGEN(0x008f7250, "t_object_factory<t_adv_fountain>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_object_factory@Vt_adv_fountain@@@@;vft=4cf334;col=4f7260;td=58880c;chd=4f7250;offset=0;cdOffset=0;validated-hierarchy; map:48014
DATA_CHT_1_COMPGEN(0x008f7260, "const t_object_factory<t_adv_fountain>::`RTTI Complete Object Locator'")

// === .data (2 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_adv_fountain@@;td=588840;validated-header; map:57480
DATA_CHT_1_COMPGEN(0x00988840, "t_adv_fountain `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_object_factory@Vt_adv_fountain@@@@;td=58880c;validated-header; map:57481
DATA_CHT_1_COMPGEN(0x0098880c, "t_object_factory<t_adv_fountain> `RTTI Type Descriptor'")
