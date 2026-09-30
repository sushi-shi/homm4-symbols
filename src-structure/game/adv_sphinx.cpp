// adv_sphinx.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 24/39 (A:13 B:2 C:0); unaccounted 15; skipped std 3.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (19 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:70796; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00466550, 0x1c, STATIC_INIT_DISPATCH, "adv_sphinx#1")

// name:C; dyninit; see ledger; map:70797
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adv_sphinx#1")

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:5877
VA_CHT_1(0x00466570, 0x157)
t_adv_sphinx::t_adv_sphinx(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:5878
VA_CHT_1(0x004666d0, 0x2d)
bool t_adv_sphinx::are_all_heroes_ineligible(t_army* arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:5879
VA_CHT_1(0x004667e0, 0x182)
std::string t_adv_sphinx::add_icons(
    t_basic_dialog* arg_0,
    std::string const& arg_1,
    std::vector<t_hero*, std::allocator<t_hero*>> const& arg_2
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:5880
VA_CHT_1(0x00466970, 0x2e)
void t_adv_sphinx::visit(t_hero* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:5881
VA_CHT_1(0x004669a0, 0x8d)
float t_adv_sphinx::ai_value(t_adventure_ai const& arg_0, t_creature_array const& arg_1, int arg_2) const
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:70798; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00466aa0, 0x20, STATIC_INIT_DISPATCH, adv_sphinx)

// name:A; map symbol; map:5882
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_adv_sphinx)

// name:A; map symbol; map:5883
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_adv_sphinx)

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:5884
VA_CHT_1(0x00466700, 0x57)
// public: void t_adv_sphinx::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:5885
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_sphinx::~t_adv_sphinx()
{
    // Body unavailable.
}

// name:A; map symbol; map:5886
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_hero::get_sphinx_count() const
{
    // Body unavailable.
}

// name:A; map symbol; map:5887
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_hero::visit_sphinx()
{
    // Body unavailable.
}

// name:A; map symbol; map:5890
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_registration<t_adv_sphinx>::t_object_registration<t_adv_sphinx>(t_adv_object_type arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:5891
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_factory<t_adv_sphinx>::t_object_factory<t_adv_sphinx>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot;vftable-certificate=66a30:5892;class=t_object_factory<class t_adv_sphinx>;proof=unique-hierarchy-method-and-slot-cleanup;cleanup=8;checked-rtti-and-raw-slots;vft=4d1ec4,col=4f8d6c,offset=0,slot=0,entry=66a30; map:5892
VA_CHT_1(0x00466a30, 0x62)
t_stationary_adventure_object* t_object_factory<t_adv_sphinx>::create(
    std::string const& arg_0,
    t_qualified_adv_object_type const& arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:5893
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_adv_sphinx)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:5894
VA_CHT_1_COMPGEN(0x00466ad0, 0xb, VECTOR_DELETING_DTOR, t_adv_sphinx)

// === .rdata (7 symbols) ===

// name:A; map symbol; map:43020
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_sphinx::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:43021
DATA_CHT_1_COMPGEN(0x008d1ecc, "const t_adv_sphinx::`vftable'")

// confidence:B; rtti-order; map:43022
DATA_CHT_1_COMPGEN(0x008d1f8c, "const t_adv_sphinx::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:43023
DATA_CHT_1_COMPGEN(0x008d1f94, "const t_adv_sphinx::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:43024
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_sphinx::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:43025
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_sphinx::`vbtable'{for `t_abstract_stationary_adv_object'}")

// confidence:A; rtti-name; map:43026
DATA_CHT_1_COMPGEN(0x008d1ec4, "const t_object_factory<t_adv_sphinx>::`vftable'")

// === .rdata$r (11 symbols) ===

// name:A; map symbol; map:48348
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_sphinx::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_adv_sphinx@@;vft=4d1ecc;col=4f8e10;td=58ac54;chd=4f8e00;offset=88;cdOffset=0;validated-hierarchy; map:48349
DATA_CHT_1_COMPGEN(0x008f8e10, "const t_adv_sphinx::`RTTI Complete Object Locator'")

// name:A; map symbol; map:48350
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_sphinx::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adv_sphinx@@;bcd=4f8dbc;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48351
DATA_CHT_1_COMPGEN(0x008f8dbc, "t_adv_sphinx::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adv_sphinx@@;vft=4d1ecc;col=4f8e10;td=58ac54;chd=4f8e00;offset=88;cdOffset=0;validated-hierarchy; map:48352
DATA_CHT_1_COMPGEN(0x008f8dd4, "t_adv_sphinx::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adv_sphinx@@;vft=4d1ecc;col=4f8e10;td=58ac54;chd=4f8e00;offset=88;cdOffset=0;validated-hierarchy; map:48353
DATA_CHT_1_COMPGEN(0x008f8e00, "t_adv_sphinx::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:48354
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_sphinx::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_object_factory@Vt_adv_sphinx@@@@;bcd=4f8d38;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48355
DATA_CHT_1_COMPGEN(0x008f8d38, "t_object_factory<t_adv_sphinx>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_object_factory@Vt_adv_sphinx@@@@;vft=4d1ec4;col=4f8d6c;td=58ac20;chd=4f8d5c;offset=0;cdOffset=0;validated-hierarchy; map:48356
DATA_CHT_1_COMPGEN(0x008f8d50, "t_object_factory<t_adv_sphinx>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_object_factory@Vt_adv_sphinx@@@@;vft=4d1ec4;col=4f8d6c;td=58ac20;chd=4f8d5c;offset=0;cdOffset=0;validated-hierarchy; map:48357
DATA_CHT_1_COMPGEN(0x008f8d5c, "t_object_factory<t_adv_sphinx>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_object_factory@Vt_adv_sphinx@@@@;vft=4d1ec4;col=4f8d6c;td=58ac20;chd=4f8d5c;offset=0;cdOffset=0;validated-hierarchy; map:48358
DATA_CHT_1_COMPGEN(0x008f8d6c, "const t_object_factory<t_adv_sphinx>::`RTTI Complete Object Locator'")

// === .data (2 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_adv_sphinx@@;td=58ac54;validated-header; map:57559
DATA_CHT_1_COMPGEN(0x0098ac54, "t_adv_sphinx `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_object_factory@Vt_adv_sphinx@@@@;td=58ac20;validated-header; map:57560
DATA_CHT_1_COMPGEN(0x0098ac20, "t_object_factory<t_adv_sphinx> `RTTI Type Descriptor'")
