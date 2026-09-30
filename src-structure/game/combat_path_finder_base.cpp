// combat_path_finder_base.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 22/38 (A:4 B:0 C:0); unaccounted 16; skipped std 15.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (34 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67671; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005dc560, 0x15, STATIC_INIT_DISPATCH, "combat_path_finder_base#1")

// name:C; dyninit; see ledger; map:67672
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_path_finder_base#1")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67673; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005dc580, 0x15, STATIC_INIT_DISPATCH, "combat_path_finder_base#2")

// name:C; dyninit; see ledger; map:67674
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_path_finder_base#2")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67675; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005dc5a0, 0x15, STATIC_INIT_DISPATCH, "combat_path_finder_base#3")

// name:C; dyninit; see ledger; map:67676
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_path_finder_base#3")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67677; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005dc5c0, 0x15, STATIC_INIT_DISPATCH, "combat_path_finder_base#4")

// name:C; dyninit; see ledger; map:67678
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_path_finder_base#4")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67679; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005dc5e0, 0x10, STATIC_INIT_DISPATCH, "combat_path_finder_base#5")

// name:C; dyninit; see ledger; map:67680
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_path_finder_base#5")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67681; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005dc5f0, 0x15, STATIC_INIT_DISPATCH, "combat_path_finder_base#6")

// name:C; dyninit; see ledger; map:67682
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_path_finder_base#6")

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:21486
VA_CHT_1(0x005dc610, 0x13a)
t_combat_path_map::t_combat_path_map(int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:21487
VA_CHT_1(0x005dc750, 0x140)
void t_combat_path_map::init_map(
    t_battlefield const& arg_0,
    t_combat_path_blockage_map const& arg_1,
    t_combat_footprint const& arg_2
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:21488
VA_CHT_1(0x005dc890, 0x151)
void t_combat_path_map::mark_obstacle(t_combat_object_base const& arg_0, t_combat_path_blockage const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:21489
VA_CHT_1(0x005dc9f0, 0x18a)
t_combat_path_finder_base::t_combat_path_finder_base(int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:21490
VA_CHT_1(0x005dcb80, 0x11d)
void t_combat_path_finder_base::push_first_point(t_map_point_2d const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:21491
VA_CHT_1(0x005dcca0, 0xea)
void t_combat_path_finder_base::push(t_combat_path_point const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:21492
VA_CHT_1(0x005dcd90, 0x174)
void t_combat_path_finder_base::mark_reachable_points(t_combat_footprint const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:21493
VA_CHT_1(0x005dcf10, 0x143)
bool t_combat_path_finder_base::get_path(t_map_point_2d arg_0, t_combat_path& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:21494
VA_CHT_1(0x005dd060, 0x207)
void t_combat_path_blockage_map::mark_obstacles(t_battlefield& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:21495
VA_CHT_1(0x005dd270, 0xd2)
t_combat_path_blockage t_combat_path_blockage_map::can_place(
    t_map_point_2d const& arg_0,
    t_combat_footprint const& arg_1
) const
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:21496
VA_CHT_1(0x005dd350, 0x9e)
void t_combat_path_blockage_map::mark(
    t_map_point_2d const& arg_0,
    t_combat_footprint const& arg_1,
    t_combat_path_blockage arg_2
)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:67683; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005dd3f0, 0x20, STATIC_INIT_DISPATCH, combat_path_finder_base)

// name:A; map symbol; map:21497
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_path_queue::t_combat_path_queue()
{
    // Body unavailable.
}

// name:A; map symbol; map:21498
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_battlefield_cell::is_forbidden() const
{
    // Body unavailable.
}

// name:A; map symbol; map:21499
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_isometric_map<t_combat_path_data>::t_isometric_map<t_combat_path_data>()
{
    // Body unavailable.
}

// name:A; map symbol; map:21502
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_path_blockage const& t_basic_isometric_map<t_isometric_tile_map_base, t_combat_path_blockage>::get(
    t_map_point_2d const& arg_0
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:21503
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_path_blockage& t_basic_isometric_map<t_isometric_tile_map_base, t_combat_path_blockage>::get(
    t_map_point_2d const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:21504
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_basic_isometric_map<t_isometric_tile_map_base, t_combat_path_blockage>::is_valid(
    t_map_point_2d const& arg_0
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:21505
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_path_data& t_basic_isometric_map<t_isometric_tile_map_base, t_combat_path_data>::get(
    t_level_map_point_2d const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:21506
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_basic_isometric_map<t_isometric_tile_map_base, t_combat_path_data>::initialize(
    int arg_0,
    int arg_1,
    t_screen_point const& arg_2,
    t_combat_path_data const& arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:21507
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_basic_isometric_map<t_isometric_tile_map_base, t_combat_path_data>::t_basic_isometric_map<t_isometric_tile_map_base, t_combat_path_data>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:21508
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_stationary_combat_object* t_counted_ptr<t_stationary_combat_object>::get() const
{
    // Body unavailable.
}

// === .rdata (1 symbols) ===

// confidence:A; rtti-name; map:43979
DATA_CHT_1_COMPGEN(0x008dc98c, "const t_combat_path_finder_base::`vftable'")

// === .rdata$r (3 symbols) ===

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_combat_path_finder_base@@;vft=4dc98c;col=5047dc;td=5995f4;chd=5047cc;offset=0;cdOffset=0;validated-hierarchy; map:50879
DATA_CHT_1_COMPGEN(0x009047c4, "t_combat_path_finder_base::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_combat_path_finder_base@@;vft=4dc98c;col=5047dc;td=5995f4;chd=5047cc;offset=0;cdOffset=0;validated-hierarchy; map:50880
DATA_CHT_1_COMPGEN(0x009047cc, "t_combat_path_finder_base::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_combat_path_finder_base@@;vft=4dc98c;col=5047dc;td=5995f4;chd=5047cc;offset=0;cdOffset=0;validated-hierarchy; map:50881
DATA_CHT_1_COMPGEN(0x009047dc, "const t_combat_path_finder_base::`RTTI Complete Object Locator'")
