// adv_teleporter_exit.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 26/43 (A:22 B:2 C:2); unaccounted 17; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (23 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:70748; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0046a230, 0x15, STATIC_INIT_DISPATCH, "adv_teleporter_exit#1")

// name:C; dyninit; see ledger; map:70749
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adv_teleporter_exit#1")

// confidence:A; dyninit-init; owner-conf-C; map:70750; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0046a250, 0x1c, STATIC_INIT_DISPATCH, "adv_teleporter_exit#2")

// name:C; dyninit; see ledger; map:70751
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adv_teleporter_exit#2")

// confidence:A; align-order; retn,stable,vptr; map:6077
VA_CHT_1(0x0046a270, 0x15e)
t_adv_teleporter_exit::t_adv_teleporter_exit(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:6078
VA_CHT_1(0x0046a490, 0x1c5)
void t_adv_teleporter_exit::activate_trigger(
    t_army* arg_0,
    t_adv_map_point const& arg_1,
    t_direction arg_2,
    t_adventure_frame* arg_3
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:6079
VA_CHT_1(0x0046a660, 0x75)
void t_adv_teleporter_exit::destroy()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vslot; map:6080
VA_CHT_1(0x0046a6e0, 0x81)
void t_adv_teleporter_exit::place(t_adventure_map& arg_0, t_adv_map_point const& arg_1)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:70752; name:B (dyninit; see ledger)
VA_CHT_1(0x0046a7e0, 0x20)
// adv_teleporter_exit$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:A; dyninit-tinit; owner-conf-B; map:70754; name:B (dyninit; see ledger)
VA_CHT_1(0x0046a800, 0x5c)
// adv_teleporter_exit$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:70755
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adv_teleporter_exit$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:70756
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adv_teleporter_exit$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:70757
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adv_teleporter_exit$tatexit4
// Function body not reconstructed; signature retained as a comment.

// confidence:A; align-band; retn,stable,vslot; map:6081
VA_CHT_1_COMPGEN(0x0046a3d0, 0x2d, SCALAR_DELETING_DTOR, t_adv_teleporter_exit)

// name:A; map symbol; map:6082
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_adv_teleporter_exit)

// name:A; map symbol; map:6083
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// public: void t_adv_teleporter_exit::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:6084
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_teleporter_exit::~t_adv_teleporter_exit()
{
    // Body unavailable.
}

// name:A; map symbol; map:6085
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_registration<t_adv_teleporter_exit>::t_object_registration<t_adv_teleporter_exit>(
    t_adv_object_type arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:6086
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_adv_teleporter_exit>::t_counted_ptr<t_adv_teleporter_exit>(t_adv_teleporter_exit* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:6087
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_factory<t_adv_teleporter_exit>::t_object_factory<t_adv_teleporter_exit>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,vslot; map:6088
VA_CHT_1(0x0046a770, 0x62)
t_stationary_adventure_object* t_object_factory<t_adv_teleporter_exit>::create(
    std::string const& arg_0,
    t_qualified_adv_object_type const& arg_1
) const
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:6089
VA_CHT_1_COMPGEN(0x0046a860, 0x8, VECTOR_DELETING_DTOR, t_adv_teleporter_exit)

// confidence:C; align-order; stable; map:6090
VA_CHT_1_COMPGEN(0x0046a870, 0xb, VECTOR_DELETING_DTOR, t_adv_teleporter_exit)

// === .rdata (7 symbols) ===

// name:A; map symbol; map:43048
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_teleporter_exit::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:43049
DATA_CHT_1_COMPGEN(0x008d2574, "const t_adv_teleporter_exit::`vftable'")

// confidence:B; rtti-order; map:43050
DATA_CHT_1_COMPGEN(0x008d2634, "const t_adv_teleporter_exit::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:43051
DATA_CHT_1_COMPGEN(0x008d263c, "const t_adv_teleporter_exit::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:43052
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_teleporter_exit::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:43053
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_teleporter_exit::`vbtable'{for `t_abstract_stationary_adv_object'}")

// confidence:A; rtti-name; map:43054
DATA_CHT_1_COMPGEN(0x008d256c, "const t_object_factory<t_adv_teleporter_exit>::`vftable'")

// === .rdata$r (11 symbols) ===

// name:A; map symbol; map:48392
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_teleporter_exit::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_adv_teleporter_exit@@;vft=4d2574;col=4f91bc;td=58adcc;chd=4f91ac;offset=100;cdOffset=0;validated-hierarchy; map:48393
DATA_CHT_1_COMPGEN(0x008f91bc, "const t_adv_teleporter_exit::`RTTI Complete Object Locator'")

// name:A; map symbol; map:48394
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_teleporter_exit::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adv_teleporter_exit@@;bcd=4f9168;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48395
DATA_CHT_1_COMPGEN(0x008f9168, "t_adv_teleporter_exit::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adv_teleporter_exit@@;vft=4d2574;col=4f91bc;td=58adcc;chd=4f91ac;offset=100;cdOffset=0;validated-hierarchy; map:48396
DATA_CHT_1_COMPGEN(0x008f9180, "t_adv_teleporter_exit::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adv_teleporter_exit@@;vft=4d2574;col=4f91bc;td=58adcc;chd=4f91ac;offset=100;cdOffset=0;validated-hierarchy; map:48397
DATA_CHT_1_COMPGEN(0x008f91ac, "t_adv_teleporter_exit::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:48398
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_teleporter_exit::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_object_factory@Vt_adv_teleporter_exit@@@@;bcd=4f90e4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48399
DATA_CHT_1_COMPGEN(0x008f90e4, "t_object_factory<t_adv_teleporter_exit>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_object_factory@Vt_adv_teleporter_exit@@@@;vft=4d256c;col=4f9118;td=58ad90;chd=4f9108;offset=0;cdOffset=0;validated-hierarchy; map:48400
DATA_CHT_1_COMPGEN(0x008f90fc, "t_object_factory<t_adv_teleporter_exit>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_object_factory@Vt_adv_teleporter_exit@@@@;vft=4d256c;col=4f9118;td=58ad90;chd=4f9108;offset=0;cdOffset=0;validated-hierarchy; map:48401
DATA_CHT_1_COMPGEN(0x008f9108, "t_object_factory<t_adv_teleporter_exit>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_object_factory@Vt_adv_teleporter_exit@@@@;vft=4d256c;col=4f9118;td=58ad90;chd=4f9108;offset=0;cdOffset=0;validated-hierarchy; map:48402
DATA_CHT_1_COMPGEN(0x008f9118, "const t_object_factory<t_adv_teleporter_exit>::`RTTI Complete Object Locator'")

// === .data (2 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_adv_teleporter_exit@@;td=58adcc;validated-header; map:57567
DATA_CHT_1_COMPGEN(0x0098adcc, "t_adv_teleporter_exit `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_object_factory@Vt_adv_teleporter_exit@@@@;td=58ad90;validated-header; map:57568
DATA_CHT_1_COMPGEN(0x0098ad90, "t_object_factory<t_adv_teleporter_exit> `RTTI Type Descriptor'")
