// adv_ocean_bottle.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 23/37 (A:15 B:2 C:0); unaccounted 14; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (15 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:70878; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0045fe90, 0x1c, STATIC_INIT_DISPATCH, "adv_ocean_bottle#1")

// name:C; dyninit; see ledger; map:70879
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adv_ocean_bottle#1")

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:5650
VA_CHT_1(0x0045feb0, 0xc0)
t_adv_ocean_bottle::t_adv_ocean_bottle(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:5651
VA_CHT_1(0x00460040, 0x29)
void t_adv_ocean_bottle::activate_trigger(
    t_army* arg_0,
    t_adv_map_point const& arg_1,
    t_direction arg_2,
    t_adventure_frame* arg_3
)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:70880; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x004600e0, 0x20, STATIC_INIT_DISPATCH, adv_ocean_bottle)

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:5652
VA_CHT_1_COMPGEN(0x0045ff70, 0x2d, VECTOR_DELETING_DTOR, t_adv_ocean_bottle)

// name:A; map symbol; map:5653
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_adv_ocean_bottle)

// name:A; map symbol; map:5654
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// public: void t_adv_ocean_bottle::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:5655
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_ocean_bottle::~t_adv_ocean_bottle()
{
    // Body unavailable.
}

// name:A; map symbol; map:5656
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_sign::~t_adv_sign()
{
    // Body unavailable.
}

// name:A; map symbol; map:5657
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_registration<t_adv_ocean_bottle>::t_object_registration<t_adv_ocean_bottle>(t_adv_object_type arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:5658
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_factory<t_adv_ocean_bottle>::t_object_factory<t_adv_ocean_bottle>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot;vftable-certificate=60070:5659;class=t_object_factory<class t_adv_ocean_bottle>;proof=unique-hierarchy-method-and-slot-cleanup;cleanup=8;checked-rtti-and-raw-slots;vft=4d1174,col=4f861c,offset=0,slot=0,entry=60070; map:5659
VA_CHT_1(0x00460070, 0x62)
t_stationary_adventure_object* t_object_factory<t_adv_ocean_bottle>::create(
    std::string const& arg_0,
    t_qualified_adv_object_type const& arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:5660
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_adv_ocean_bottle)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:5661
VA_CHT_1_COMPGEN(0x00460110, 0xb, VECTOR_DELETING_DTOR, t_adv_ocean_bottle)

// === .rdata (7 symbols) ===

// name:A; map symbol; map:42961
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_ocean_bottle::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:42962
DATA_CHT_1_COMPGEN(0x008d117c, "const t_adv_ocean_bottle::`vftable'")

// confidence:B; rtti-order; map:42963
DATA_CHT_1_COMPGEN(0x008d123c, "const t_adv_ocean_bottle::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:42964
DATA_CHT_1_COMPGEN(0x008d1244, "const t_adv_ocean_bottle::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:42965
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_ocean_bottle::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:42966
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_ocean_bottle::`vbtable'{for `t_abstract_stationary_adv_object'}")

// confidence:A; rtti-name; map:42967
DATA_CHT_1_COMPGEN(0x008d1174, "const t_object_factory<t_adv_ocean_bottle>::`vftable'")

// === .rdata$r (12 symbols) ===

// name:A; map symbol; map:48260
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_ocean_bottle::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_adv_ocean_bottle@@;vft=4d117c;col=4f86d8;td=58a918;chd=4f86c8;offset=116;cdOffset=0;validated-hierarchy; map:48261
DATA_CHT_1_COMPGEN(0x008f86d8, "const t_adv_ocean_bottle::`RTTI Complete Object Locator'")

// name:A; map symbol; map:48262
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_ocean_bottle::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adv_sign@@;bcd=4f866c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48263
DATA_CHT_1_COMPGEN(0x008f866c, "t_adv_sign::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adv_ocean_bottle@@;bcd=4f8684;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48264
DATA_CHT_1_COMPGEN(0x008f8684, "t_adv_ocean_bottle::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adv_ocean_bottle@@;vft=4d117c;col=4f86d8;td=58a918;chd=4f86c8;offset=116;cdOffset=0;validated-hierarchy; map:48265
DATA_CHT_1_COMPGEN(0x008f869c, "t_adv_ocean_bottle::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adv_ocean_bottle@@;vft=4d117c;col=4f86d8;td=58a918;chd=4f86c8;offset=116;cdOffset=0;validated-hierarchy; map:48266
DATA_CHT_1_COMPGEN(0x008f86c8, "t_adv_ocean_bottle::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:48267
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_ocean_bottle::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_object_factory@Vt_adv_ocean_bottle@@@@;bcd=4f85e8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48268
DATA_CHT_1_COMPGEN(0x008f85e8, "t_object_factory<t_adv_ocean_bottle>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_object_factory@Vt_adv_ocean_bottle@@@@;vft=4d1174;col=4f861c;td=58a8c4;chd=4f860c;offset=0;cdOffset=0;validated-hierarchy; map:48269
DATA_CHT_1_COMPGEN(0x008f8600, "t_object_factory<t_adv_ocean_bottle>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_object_factory@Vt_adv_ocean_bottle@@@@;vft=4d1174;col=4f861c;td=58a8c4;chd=4f860c;offset=0;cdOffset=0;validated-hierarchy; map:48270
DATA_CHT_1_COMPGEN(0x008f860c, "t_object_factory<t_adv_ocean_bottle>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_object_factory@Vt_adv_ocean_bottle@@@@;vft=4d1174;col=4f861c;td=58a8c4;chd=4f860c;offset=0;cdOffset=0;validated-hierarchy; map:48271
DATA_CHT_1_COMPGEN(0x008f861c, "const t_object_factory<t_adv_ocean_bottle>::`RTTI Complete Object Locator'")

// === .data (3 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_adv_sign@@;td=58a8fc;validated-header; map:57543
DATA_CHT_1_COMPGEN(0x0098a8fc, "t_adv_sign `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_adv_ocean_bottle@@;td=58a918;validated-header; map:57544
DATA_CHT_1_COMPGEN(0x0098a918, "t_adv_ocean_bottle `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_object_factory@Vt_adv_ocean_bottle@@@@;td=58a8c4;validated-header; map:57545
DATA_CHT_1_COMPGEN(0x0098a8c4, "t_object_factory<t_adv_ocean_bottle> `RTTI Type Descriptor'")
