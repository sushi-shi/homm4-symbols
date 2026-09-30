// adv_move_booster.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 50/83 (A:38 B:6 C:6); unaccounted 33; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (40 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:71028; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00441e00, 0x15, STATIC_INIT_DISPATCH, "adv_move_booster#1")

// name:C; dyninit; see ledger; map:71029
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adv_move_booster#1")

// confidence:A; dyninit-init; owner-conf-C; map:71030; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00441e20, 0x1c, STATIC_INIT_DISPATCH, "adv_move_booster#2")

// name:C; dyninit; see ledger; map:71031
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adv_move_booster#2")

// confidence:A; dyninit-init; owner-conf-C; map:71032; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00441e40, 0x1c, STATIC_INIT_DISPATCH, "adv_move_booster#3")

// name:C; dyninit; see ledger; map:71033
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adv_move_booster#3")

// confidence:A; align-order; retn,stable,vptr; map:4845
VA_CHT_1(0x00441e60, 0x111)
t_adv_move_booster::t_adv_move_booster(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:4846
VA_CHT_1(0x00442010, 0x312)
void t_adv_move_booster::show_dialog(
    t_army* arg_0,
    int arg_1,
    int arg_2,
    t_level_map_point_2d const& arg_3
) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:4847
VA_CHT_1(0x00442330, 0x80)
void t_adv_move_booster::activate_trigger(
    t_army* arg_0,
    t_adv_map_point const& arg_1,
    t_direction arg_2,
    t_adventure_frame* arg_3
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:4848
VA_CHT_1(0x004423b0, 0x1e8)
std::string t_adv_move_booster::get_balloon_help() const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:4849
VA_CHT_1(0x004425a0, 0x6d)
void t_adv_move_booster::get_bonus(t_creature_array const& arg_0, int& arg_1, int& arg_2) const
{
    // Body unavailable.
}

// name:A; map symbol; map:4850
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
float t_adv_move_booster::ai_value(
    t_adventure_ai const& arg_0,
    t_creature_array const& arg_1,
    int arg_2
) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:4851
VA_CHT_1(0x00442710, 0xc0)
t_adv_pathfinder::t_adv_pathfinder(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:4852
VA_CHT_1(0x00442860, 0xc6)
void t_adv_pathfinder::activate_trigger(
    t_army* arg_0,
    t_adv_map_point const& arg_1,
    t_direction arg_2,
    t_adventure_frame* arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:4853
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adv_pathfinder::get_bonus(t_creature_array const& arg_0, int& arg_1, int& arg_2) const
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:71034; name:B (dyninit; see ledger)
VA_CHT_1(0x00442b60, 0x20)
// adv_move_booster$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:A; dyninit-tinit; owner-conf-B; map:71036; name:B (dyninit; see ledger)
VA_CHT_1(0x00442b80, 0x5c)
// adv_move_booster$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:71037
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adv_move_booster$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:71038
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adv_move_booster$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:71039
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adv_move_booster$tatexit4
// Function body not reconstructed; signature retained as a comment.

// confidence:A; align-band; retn,stable,vslot; map:4854
VA_CHT_1_COMPGEN(0x00441f80, 0x2d, VECTOR_DELETING_DTOR, t_adv_move_booster)

// name:A; map symbol; map:4855
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_adv_move_booster)

// confidence:C; align-band; retn,stable; map:4856
VA_CHT_1(0x00442800, 0x57)
// public: void t_adv_move_booster::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:4857
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_move_booster::~t_adv_move_booster()
{
    // Body unavailable.
}

// name:A; map symbol; map:4858
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_creature_array const& t_army::get_creatures() const
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:4859
VA_CHT_1(0x00441fb0, 0x57)
int t_creature_array::get_max_movement() const
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:4860
VA_CHT_1_COMPGEN(0x004427d0, 0x2d, SCALAR_DELETING_DTOR, t_adv_pathfinder)

// name:A; map symbol; map:4861
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_adv_pathfinder)

// name:A; map symbol; map:4862
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// public: void t_adv_pathfinder::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:4863
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_pathfinder::~t_adv_pathfinder()
{
    // Body unavailable.
}

// name:A; map symbol; map:4864
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_registration<t_adv_move_booster>::t_object_registration<t_adv_move_booster>(t_adv_object_type arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:4865
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_registration<t_adv_pathfinder>::t_object_registration<t_adv_pathfinder>(t_adv_object_type arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:4866
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_factory<t_adv_move_booster>::t_object_factory<t_adv_move_booster>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:4867
VA_CHT_1(0x00442a80, 0x62)
t_stationary_adventure_object* t_object_factory<t_adv_move_booster>::create(
    std::string const& arg_0,
    t_qualified_adv_object_type const& arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:4868
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_factory<t_adv_pathfinder>::t_object_factory<t_adv_pathfinder>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:4869
VA_CHT_1(0x00442af0, 0x62)
t_stationary_adventure_object* t_object_factory<t_adv_pathfinder>::create(
    std::string const& arg_0,
    t_qualified_adv_object_type const& arg_1
) const
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:4870
VA_CHT_1_COMPGEN(0x00442be0, 0x8, VECTOR_DELETING_DTOR, t_adv_move_booster)

// confidence:C; align-order; stable; map:4871
VA_CHT_1_COMPGEN(0x00442bf0, 0xb, VECTOR_DELETING_DTOR, t_adv_move_booster)

// confidence:C; align-order; stable; map:4872
VA_CHT_1_COMPGEN(0x00442c00, 0x8, VECTOR_DELETING_DTOR, t_adv_pathfinder)

// confidence:C; align-order; stable; map:4873
VA_CHT_1_COMPGEN(0x00442c10, 0xb, VECTOR_DELETING_DTOR, t_adv_pathfinder)

// === .rdata (17 symbols) ===

// name:A; map symbol; map:42905
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_move_booster::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:42906
DATA_CHT_1_COMPGEN(0x008d0794, "const t_adv_move_booster::`vftable'")

// confidence:B; rtti-order; map:42907
DATA_CHT_1_COMPGEN(0x008d0854, "const t_adv_move_booster::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:42908
DATA_CHT_1_COMPGEN(0x008d085c, "const t_adv_move_booster::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:42909
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_move_booster::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:42910
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_move_booster::`vbtable'{for `t_abstract_stationary_adv_object'}")

// name:A; map symbol; map:42911
DATA_CHT_1(UNACCOUNTED)
// __real@4@3ffd99999a0000000000

// name:A; map symbol; map:42912
DATA_CHT_1(UNACCOUNTED)
// __real@4@4002e000000000000000

// name:A; map symbol; map:42913
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_pathfinder::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:42914
DATA_CHT_1_COMPGEN(0x008d0934, "const t_adv_pathfinder::`vftable'")

// confidence:B; rtti-order; map:42915
DATA_CHT_1_COMPGEN(0x008d09f4, "const t_adv_pathfinder::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:42916
DATA_CHT_1_COMPGEN(0x008d09fc, "const t_adv_pathfinder::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:42917
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_pathfinder::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:42918
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_pathfinder::`vbtable'{for `t_abstract_stationary_adv_object'}")

// name:A; map symbol; map:42919
DATA_CHT_1(UNACCOUNTED)
// __real@4@4005c800000000000000

// confidence:A; rtti-name; map:42920
DATA_CHT_1_COMPGEN(0x008d0784, "const t_object_factory<t_adv_move_booster>::`vftable'")

// confidence:A; rtti-name; map:42921
DATA_CHT_1_COMPGEN(0x008d078c, "const t_object_factory<t_adv_pathfinder>::`vftable'")

// === .rdata$r (22 symbols) ===

// name:A; map symbol; map:48138
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_move_booster::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_adv_move_booster@@;vft=4d0794;col=4f7e7c;td=588d88;chd=4f7e6c;offset=84;cdOffset=0;validated-hierarchy; map:48139
DATA_CHT_1_COMPGEN(0x008f7e7c, "const t_adv_move_booster::`RTTI Complete Object Locator'")

// name:A; map symbol; map:48140
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_move_booster::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adv_move_booster@@;bcd=4f7e2c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48141
DATA_CHT_1_COMPGEN(0x008f7e2c, "t_adv_move_booster::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adv_move_booster@@;vft=4d0794;col=4f7e7c;td=588d88;chd=4f7e6c;offset=84;cdOffset=0;validated-hierarchy; map:48142
DATA_CHT_1_COMPGEN(0x008f7e44, "t_adv_move_booster::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adv_move_booster@@;vft=4d0794;col=4f7e7c;td=588d88;chd=4f7e6c;offset=84;cdOffset=0;validated-hierarchy; map:48143
DATA_CHT_1_COMPGEN(0x008f7e6c, "t_adv_move_booster::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:48144
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_move_booster::`RTTI Complete Object Locator'{for `t_counted_object'}")

// name:A; map symbol; map:48145
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_pathfinder::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_adv_pathfinder@@;vft=4d0934;col=4f7f20;td=588dac;chd=4f7f10;offset=84;cdOffset=0;validated-hierarchy; map:48146
DATA_CHT_1_COMPGEN(0x008f7f20, "const t_adv_pathfinder::`RTTI Complete Object Locator'")

// name:A; map symbol; map:48147
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_pathfinder::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adv_pathfinder@@;bcd=4f7ecc;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48148
DATA_CHT_1_COMPGEN(0x008f7ecc, "t_adv_pathfinder::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adv_pathfinder@@;vft=4d0934;col=4f7f20;td=588dac;chd=4f7f10;offset=84;cdOffset=0;validated-hierarchy; map:48149
DATA_CHT_1_COMPGEN(0x008f7ee4, "t_adv_pathfinder::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adv_pathfinder@@;vft=4d0934;col=4f7f20;td=588dac;chd=4f7f10;offset=84;cdOffset=0;validated-hierarchy; map:48150
DATA_CHT_1_COMPGEN(0x008f7f10, "t_adv_pathfinder::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:48151
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_pathfinder::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_object_factory@Vt_adv_move_booster@@@@;bcd=4f7d60;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48152
DATA_CHT_1_COMPGEN(0x008f7d60, "t_object_factory<t_adv_move_booster>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_object_factory@Vt_adv_move_booster@@@@;vft=4d0784;col=4f7d94;td=588d18;chd=4f7d84;offset=0;cdOffset=0;validated-hierarchy; map:48153
DATA_CHT_1_COMPGEN(0x008f7d78, "t_object_factory<t_adv_move_booster>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_object_factory@Vt_adv_move_booster@@@@;vft=4d0784;col=4f7d94;td=588d18;chd=4f7d84;offset=0;cdOffset=0;validated-hierarchy; map:48154
DATA_CHT_1_COMPGEN(0x008f7d84, "t_object_factory<t_adv_move_booster>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_object_factory@Vt_adv_move_booster@@@@;vft=4d0784;col=4f7d94;td=588d18;chd=4f7d84;offset=0;cdOffset=0;validated-hierarchy; map:48155
DATA_CHT_1_COMPGEN(0x008f7d94, "const t_object_factory<t_adv_move_booster>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_object_factory@Vt_adv_pathfinder@@@@;bcd=4f7da8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48156
DATA_CHT_1_COMPGEN(0x008f7da8, "t_object_factory<t_adv_pathfinder>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_object_factory@Vt_adv_pathfinder@@@@;vft=4d078c;col=4f7ddc;td=588d50;chd=4f7dcc;offset=0;cdOffset=0;validated-hierarchy; map:48157
DATA_CHT_1_COMPGEN(0x008f7dc0, "t_object_factory<t_adv_pathfinder>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_object_factory@Vt_adv_pathfinder@@@@;vft=4d078c;col=4f7ddc;td=588d50;chd=4f7dcc;offset=0;cdOffset=0;validated-hierarchy; map:48158
DATA_CHT_1_COMPGEN(0x008f7dcc, "t_object_factory<t_adv_pathfinder>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_object_factory@Vt_adv_pathfinder@@@@;vft=4d078c;col=4f7ddc;td=588d50;chd=4f7dcc;offset=0;cdOffset=0;validated-hierarchy; map:48159
DATA_CHT_1_COMPGEN(0x008f7ddc, "const t_object_factory<t_adv_pathfinder>::`RTTI Complete Object Locator'")

// === .data (4 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_adv_move_booster@@;td=588d88;validated-header; map:57505
DATA_CHT_1_COMPGEN(0x00988d88, "t_adv_move_booster `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_adv_pathfinder@@;td=588dac;validated-header; map:57506
DATA_CHT_1_COMPGEN(0x00988dac, "t_adv_pathfinder `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_object_factory@Vt_adv_move_booster@@@@;td=588d18;validated-header; map:57507
DATA_CHT_1_COMPGEN(0x00988d18, "t_object_factory<t_adv_move_booster> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_object_factory@Vt_adv_pathfinder@@@@;td=588d50;validated-header; map:57508
DATA_CHT_1_COMPGEN(0x00988d50, "t_object_factory<t_adv_pathfinder> `RTTI Type Descriptor'")
