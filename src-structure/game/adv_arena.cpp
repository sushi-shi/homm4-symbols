// adv_arena.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 23/37 (A:12 B:2 C:0); unaccounted 14; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (17 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:71265; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0042cbf0, 0x1c, STATIC_INIT_DISPATCH, "adv_arena#1")

// name:C; dyninit; see ledger; map:71266
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adv_arena#1")

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:3700
VA_CHT_1(0x0042cc10, 0x157)
t_adv_arena::t_adv_arena(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:3701
VA_CHT_1(0x0042ce00, 0x144)
std::string t_adv_arena::add_icons(
    t_basic_dialog* arg_0,
    std::string const& arg_1,
    std::vector<t_hero*, std::allocator<t_hero*>> const& arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:3702
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adv_arena::visit(t_hero* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:3703
VA_CHT_1(0x0042cf60, 0x66)
float t_adv_arena::ai_value(t_adventure_ai const& arg_0, t_creature_array const& arg_1, int arg_2) const
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:71267; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0042d040, 0x20, STATIC_INIT_DISPATCH, adv_arena)

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:3704
VA_CHT_1_COMPGEN(0x0042cd70, 0x2d, SCALAR_DELETING_DTOR, t_adv_arena)

// name:A; map symbol; map:3705
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_adv_arena)

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3706
VA_CHT_1(0x0042cda0, 0x57)
// public: void t_adv_arena::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:3707
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_arena::~t_adv_arena()
{
    // Body unavailable.
}

// name:A; map symbol; map:3708
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_creature_stack::add_bonus(t_stat_type arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:3709
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_registration<t_adv_arena>::t_object_registration<t_adv_arena>(t_adv_object_type arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:3710
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_factory<t_adv_arena>::t_object_factory<t_adv_arena>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:3711
VA_CHT_1(0x0042cfd0, 0x62)
t_stationary_adventure_object* t_object_factory<t_adv_arena>::create(
    std::string const& arg_0,
    t_qualified_adv_object_type const& arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:3712
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_adv_arena)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3713
VA_CHT_1_COMPGEN(0x0042d070, 0xb, VECTOR_DELETING_DTOR, t_adv_arena)

// === .rdata (7 symbols) ===

// name:A; map symbol; map:42678
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_arena::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:42679
DATA_CHT_1_COMPGEN(0x008cd084, "const t_adv_arena::`vftable'")

// confidence:B; rtti-order; map:42680
DATA_CHT_1_COMPGEN(0x008cd144, "const t_adv_arena::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:42681
DATA_CHT_1_COMPGEN(0x008cd14c, "const t_adv_arena::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:42682
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_arena::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:42683
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_arena::`vbtable'{for `t_abstract_stationary_adv_object'}")

// confidence:A; rtti-name; map:42684
DATA_CHT_1_COMPGEN(0x008cd07c, "const t_object_factory<t_adv_arena>::`vftable'")

// === .rdata$r (11 symbols) ===

// name:A; map symbol; map:47777
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_arena::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_adv_arena@@;vft=4cd084;col=4f60a0;td=5869bc;chd=4f6090;offset=88;cdOffset=0;validated-hierarchy; map:47778
DATA_CHT_1_COMPGEN(0x008f60a0, "const t_adv_arena::`RTTI Complete Object Locator'")

// name:A; map symbol; map:47779
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_arena::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adv_arena@@;bcd=4f604c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47780
DATA_CHT_1_COMPGEN(0x008f604c, "t_adv_arena::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adv_arena@@;vft=4cd084;col=4f60a0;td=5869bc;chd=4f6090;offset=88;cdOffset=0;validated-hierarchy; map:47781
DATA_CHT_1_COMPGEN(0x008f6064, "t_adv_arena::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adv_arena@@;vft=4cd084;col=4f60a0;td=5869bc;chd=4f6090;offset=88;cdOffset=0;validated-hierarchy; map:47782
DATA_CHT_1_COMPGEN(0x008f6090, "t_adv_arena::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:47783
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_arena::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_object_factory@Vt_adv_arena@@@@;bcd=4f5fc8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47784
DATA_CHT_1_COMPGEN(0x008f5fc8, "t_object_factory<t_adv_arena>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_object_factory@Vt_adv_arena@@@@;vft=4cd07c;col=4f5ffc;td=58698c;chd=4f5fec;offset=0;cdOffset=0;validated-hierarchy; map:47785
DATA_CHT_1_COMPGEN(0x008f5fe0, "t_object_factory<t_adv_arena>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_object_factory@Vt_adv_arena@@@@;vft=4cd07c;col=4f5ffc;td=58698c;chd=4f5fec;offset=0;cdOffset=0;validated-hierarchy; map:47786
DATA_CHT_1_COMPGEN(0x008f5fec, "t_object_factory<t_adv_arena>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_object_factory@Vt_adv_arena@@@@;vft=4cd07c;col=4f5ffc;td=58698c;chd=4f5fec;offset=0;cdOffset=0;validated-hierarchy; map:47787
DATA_CHT_1_COMPGEN(0x008f5ffc, "const t_object_factory<t_adv_arena>::`RTTI Complete Object Locator'")

// === .data (2 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_adv_arena@@;td=5869bc;validated-header; map:57439
DATA_CHT_1_COMPGEN(0x009869bc, "t_adv_arena `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_object_factory@Vt_adv_arena@@@@;td=58698c;validated-header; map:57440
DATA_CHT_1_COMPGEN(0x0098698c, "t_object_factory<t_adv_arena> `RTTI Type Descriptor'")
