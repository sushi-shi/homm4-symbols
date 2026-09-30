// adv_mercenary_camp.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 23/37 (A:19 B:2 C:2); unaccounted 14; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (16 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:71040; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00441970, 0x1c, STATIC_INIT_DISPATCH, "adv_mercenary_camp#1")

// name:C; dyninit; see ledger; map:71041
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adv_mercenary_camp#1")

// confidence:A; align-order; retn,stable,vptr; map:4832
VA_CHT_1(0x00441990, 0x157)
t_adv_mercenary_camp::t_adv_mercenary_camp(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:4833
VA_CHT_1(0x00441b80, 0x144)
std::string t_adv_mercenary_camp::add_icons(
    t_basic_dialog* arg_0,
    std::string const& arg_1,
    std::vector<t_hero*, std::allocator<t_hero*>> const& arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:4834
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adv_mercenary_camp::visit(t_hero* arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:4835
VA_CHT_1(0x00441ce0, 0x6a)
float t_adv_mercenary_camp::ai_value(
    t_adventure_ai const& arg_0,
    t_creature_array const& arg_1,
    int arg_2
) const
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:71042; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00441dc0, 0x20, STATIC_INIT_DISPATCH, adv_mercenary_camp)

// confidence:A; align-band; retn,stable,vslot; map:4836
VA_CHT_1_COMPGEN(0x00441af0, 0x2d, VECTOR_DELETING_DTOR, t_adv_mercenary_camp)

// name:A; map symbol; map:4837
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_adv_mercenary_camp)

// confidence:C; align-band; retn,stable; map:4838
VA_CHT_1(0x00441b20, 0x57)
// public: void t_adv_mercenary_camp::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:4839
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_mercenary_camp::~t_adv_mercenary_camp()
{
    // Body unavailable.
}

// name:A; map symbol; map:4840
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_registration<t_adv_mercenary_camp>::t_object_registration<t_adv_mercenary_camp>(
    t_adv_object_type arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:4841
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_factory<t_adv_mercenary_camp>::t_object_factory<t_adv_mercenary_camp>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:4842
VA_CHT_1(0x00441d50, 0x62)
t_stationary_adventure_object* t_object_factory<t_adv_mercenary_camp>::create(
    std::string const& arg_0,
    t_qualified_adv_object_type const& arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:4843
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_adv_mercenary_camp)

// confidence:C; align-order; stable; map:4844
VA_CHT_1_COMPGEN(0x00441df0, 0xb, VECTOR_DELETING_DTOR, t_adv_mercenary_camp)

// === .rdata (8 symbols) ===

// name:A; map symbol; map:42897
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_mercenary_camp::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:42898
DATA_CHT_1_COMPGEN(0x008d05d4, "const t_adv_mercenary_camp::`vftable'")

// confidence:B; rtti-order; map:42899
DATA_CHT_1_COMPGEN(0x008d0694, "const t_adv_mercenary_camp::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:42900
DATA_CHT_1_COMPGEN(0x008d069c, "const t_adv_mercenary_camp::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:42901
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_mercenary_camp::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:42902
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_mercenary_camp::`vbtable'{for `t_abstract_stationary_adv_object'}")

// name:A; map symbol; map:42903
DATA_CHT_1(UNACCOUNTED)
// __real@4@3fffc000000000000000

// confidence:A; rtti-name; map:42904
DATA_CHT_1_COMPGEN(0x008d05cc, "const t_object_factory<t_adv_mercenary_camp>::`vftable'")

// === .rdata$r (11 symbols) ===

// name:A; map symbol; map:48127
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_mercenary_camp::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_adv_mercenary_camp@@;vft=4d05d4;col=4f7d4c;td=588ce8;chd=4f7d3c;offset=88;cdOffset=0;validated-hierarchy; map:48128
DATA_CHT_1_COMPGEN(0x008f7d4c, "const t_adv_mercenary_camp::`RTTI Complete Object Locator'")

// name:A; map symbol; map:48129
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_mercenary_camp::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adv_mercenary_camp@@;bcd=4f7cf8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48130
DATA_CHT_1_COMPGEN(0x008f7cf8, "t_adv_mercenary_camp::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adv_mercenary_camp@@;vft=4d05d4;col=4f7d4c;td=588ce8;chd=4f7d3c;offset=88;cdOffset=0;validated-hierarchy; map:48131
DATA_CHT_1_COMPGEN(0x008f7d10, "t_adv_mercenary_camp::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adv_mercenary_camp@@;vft=4d05d4;col=4f7d4c;td=588ce8;chd=4f7d3c;offset=88;cdOffset=0;validated-hierarchy; map:48132
DATA_CHT_1_COMPGEN(0x008f7d3c, "t_adv_mercenary_camp::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:48133
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_mercenary_camp::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_object_factory@Vt_adv_mercenary_camp@@@@;bcd=4f7c74;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48134
DATA_CHT_1_COMPGEN(0x008f7c74, "t_object_factory<t_adv_mercenary_camp>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_object_factory@Vt_adv_mercenary_camp@@@@;vft=4d05cc;col=4f7ca8;td=588cac;chd=4f7c98;offset=0;cdOffset=0;validated-hierarchy; map:48135
DATA_CHT_1_COMPGEN(0x008f7c8c, "t_object_factory<t_adv_mercenary_camp>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_object_factory@Vt_adv_mercenary_camp@@@@;vft=4d05cc;col=4f7ca8;td=588cac;chd=4f7c98;offset=0;cdOffset=0;validated-hierarchy; map:48136
DATA_CHT_1_COMPGEN(0x008f7c98, "t_object_factory<t_adv_mercenary_camp>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_object_factory@Vt_adv_mercenary_camp@@@@;vft=4d05cc;col=4f7ca8;td=588cac;chd=4f7c98;offset=0;cdOffset=0;validated-hierarchy; map:48137
DATA_CHT_1_COMPGEN(0x008f7ca8, "const t_object_factory<t_adv_mercenary_camp>::`RTTI Complete Object Locator'")

// === .data (2 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_adv_mercenary_camp@@;td=588ce8;validated-header; map:57503
DATA_CHT_1_COMPGEN(0x00988ce8, "t_adv_mercenary_camp `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_object_factory@Vt_adv_mercenary_camp@@@@;td=588cac;validated-header; map:57504
DATA_CHT_1_COMPGEN(0x00988cac, "t_object_factory<t_adv_mercenary_camp> `RTTI Type Descriptor'")
