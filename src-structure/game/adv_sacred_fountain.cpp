// adv_sacred_fountain.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 23/35 (A:13 B:2 C:0); unaccounted 12; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (15 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:70864; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00460f70, 0x1c, STATIC_INIT_DISPATCH, "adv_sacred_fountain#1")

// name:C; dyninit; see ledger; map:70865
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adv_sacred_fountain#1")

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:5698
VA_CHT_1(0x00460f90, 0x157)
t_adv_sacred_fountain::t_adv_sacred_fountain(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:5699
VA_CHT_1(0x00461180, 0x144)
std::string t_adv_sacred_fountain::add_icons(
    t_basic_dialog* arg_0,
    std::string const& arg_1,
    std::vector<t_hero*, std::allocator<t_hero*>> const& arg_2
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:5700
VA_CHT_1(0x004612d0, 0x11)
void t_adv_sacred_fountain::visit(t_hero* arg_0)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:70866; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00461360, 0x20, STATIC_INIT_DISPATCH, adv_sacred_fountain)

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:5701
VA_CHT_1_COMPGEN(0x004610f0, 0x2d, SCALAR_DELETING_DTOR, t_adv_sacred_fountain)

// name:A; map symbol; map:5702
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_adv_sacred_fountain)

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:5703
VA_CHT_1(0x00461120, 0x57)
// public: void t_adv_sacred_fountain::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:5704
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_sacred_fountain::~t_adv_sacred_fountain()
{
    // Body unavailable.
}

// name:A; map symbol; map:5705
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_registration<t_adv_sacred_fountain>::t_object_registration<t_adv_sacred_fountain>(
    t_adv_object_type arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:5706
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_factory<t_adv_sacred_fountain>::t_object_factory<t_adv_sacred_fountain>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot;vftable-certificate=612f0:5707;class=t_object_factory<class t_adv_sacred_fountain>;proof=unique-hierarchy-method-and-slot-cleanup;cleanup=8;checked-rtti-and-raw-slots;vft=4d14c4,col=4f8808,offset=0,slot=0,entry=612f0; map:5707
VA_CHT_1(0x004612f0, 0x62)
t_stationary_adventure_object* t_object_factory<t_adv_sacred_fountain>::create(
    std::string const& arg_0,
    t_qualified_adv_object_type const& arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:5708
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_adv_sacred_fountain)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:5709
VA_CHT_1_COMPGEN(0x00461390, 0xb, VECTOR_DELETING_DTOR, t_adv_sacred_fountain)

// === .rdata (7 symbols) ===

// name:A; map symbol; map:42976
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_sacred_fountain::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:42977
DATA_CHT_1_COMPGEN(0x008d14cc, "const t_adv_sacred_fountain::`vftable'")

// confidence:B; rtti-order; map:42978
DATA_CHT_1_COMPGEN(0x008d158c, "const t_adv_sacred_fountain::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:42979
DATA_CHT_1_COMPGEN(0x008d1594, "const t_adv_sacred_fountain::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:42980
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_sacred_fountain::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:42981
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_sacred_fountain::`vbtable'{for `t_abstract_stationary_adv_object'}")

// confidence:A; rtti-name; map:42982
DATA_CHT_1_COMPGEN(0x008d14c4, "const t_object_factory<t_adv_sacred_fountain>::`vftable'")

// === .rdata$r (11 symbols) ===

// name:A; map symbol; map:48283
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_sacred_fountain::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_adv_sacred_fountain@@;vft=4d14cc;col=4f88ac;td=58a9e8;chd=4f889c;offset=88;cdOffset=0;validated-hierarchy; map:48284
DATA_CHT_1_COMPGEN(0x008f88ac, "const t_adv_sacred_fountain::`RTTI Complete Object Locator'")

// name:A; map symbol; map:48285
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_sacred_fountain::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adv_sacred_fountain@@;bcd=4f8858;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48286
DATA_CHT_1_COMPGEN(0x008f8858, "t_adv_sacred_fountain::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adv_sacred_fountain@@;vft=4d14cc;col=4f88ac;td=58a9e8;chd=4f889c;offset=88;cdOffset=0;validated-hierarchy; map:48287
DATA_CHT_1_COMPGEN(0x008f8870, "t_adv_sacred_fountain::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adv_sacred_fountain@@;vft=4d14cc;col=4f88ac;td=58a9e8;chd=4f889c;offset=88;cdOffset=0;validated-hierarchy; map:48288
DATA_CHT_1_COMPGEN(0x008f889c, "t_adv_sacred_fountain::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:48289
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_sacred_fountain::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_object_factory@Vt_adv_sacred_fountain@@@@;bcd=4f87d4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48290
DATA_CHT_1_COMPGEN(0x008f87d4, "t_object_factory<t_adv_sacred_fountain>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_object_factory@Vt_adv_sacred_fountain@@@@;vft=4d14c4;col=4f8808;td=58a9ac;chd=4f87f8;offset=0;cdOffset=0;validated-hierarchy; map:48291
DATA_CHT_1_COMPGEN(0x008f87ec, "t_object_factory<t_adv_sacred_fountain>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_object_factory@Vt_adv_sacred_fountain@@@@;vft=4d14c4;col=4f8808;td=58a9ac;chd=4f87f8;offset=0;cdOffset=0;validated-hierarchy; map:48292
DATA_CHT_1_COMPGEN(0x008f87f8, "t_object_factory<t_adv_sacred_fountain>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_object_factory@Vt_adv_sacred_fountain@@@@;vft=4d14c4;col=4f8808;td=58a9ac;chd=4f87f8;offset=0;cdOffset=0;validated-hierarchy; map:48293
DATA_CHT_1_COMPGEN(0x008f8808, "const t_object_factory<t_adv_sacred_fountain>::`RTTI Complete Object Locator'")

// === .data (2 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_adv_sacred_fountain@@;td=58a9e8;validated-header; map:57548
DATA_CHT_1_COMPGEN(0x0098a9e8, "t_adv_sacred_fountain `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_object_factory@Vt_adv_sacred_fountain@@@@;td=58a9ac;validated-header; map:57549
DATA_CHT_1_COMPGEN(0x0098a9ac, "t_object_factory<t_adv_sacred_fountain> `RTTI Type Descriptor'")
