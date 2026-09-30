// combat_terrain_map.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 14/26 (A:0 B:0 C:0); unaccounted 12; skipped std 33.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (26 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67388; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005f1720, 0x15, STATIC_INIT_DISPATCH, "combat_terrain_map#1")

// name:C; dyninit; see ledger; map:67389
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_terrain_map#1")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67390; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005f1740, 0x15, STATIC_INIT_DISPATCH, "combat_terrain_map#2")

// name:C; dyninit; see ledger; map:67391
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_terrain_map#2")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67392; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005f1760, 0x15, STATIC_INIT_DISPATCH, "combat_terrain_map#3")

// name:C; dyninit; see ledger; map:67393
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_terrain_map#3")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67394; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005f1780, 0x15, STATIC_INIT_DISPATCH, "combat_terrain_map#4")

// name:C; dyninit; see ledger; map:67395
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_terrain_map#4")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67396; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005f17a0, 0x10, STATIC_INIT_DISPATCH, "combat_terrain_map#5")

// name:C; dyninit; see ledger; map:67397
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_terrain_map#5")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67398; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005f17b0, 0x15, STATIC_INIT_DISPATCH, "combat_terrain_map#6")

// name:C; dyninit; see ledger; map:67399
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_terrain_map#6")

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:22293
VA_CHT_1(0x005f17d0, 0xf9)
t_combat_terrain_map::t_combat_terrain_map(int arg_0, t_battlefield& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:67400
VA_CHT_1(0x005f18d0, 0x1fe)
static unsigned long get_terrain_flags(
    t_battlefield& arg_0,
    t_map_point_2d const& arg_1,
    t_combat_footprint const& arg_2,
    t_combat_creature const* arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:67401
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
static int get_terrain_bit(t_terrain_type arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:67402
VA_CHT_1(0x005f1ad0, 0x6f)
static int get_brush_terrain_bit(t_terrain_type arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:22294
VA_CHT_1(0x005f1b40, 0xc6)
void t_combat_terrain_map::set_points(t_map_rect_2d const& arg_0, t_combat_creature const* arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:22295
VA_CHT_1(0x005f1c10, 0x63)
void t_combat_terrain_map::refresh(t_combat_creature const* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:22296
VA_CHT_1(0x005f1c80, 0x42)
void t_combat_terrain_map::refresh(t_map_rect_2d const& arg_0, t_combat_creature const* arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:22297
VA_CHT_1(0x005f1cd0, 0x36f)
void t_terrain_bit_cost_array::compute(t_combat_creature const& arg_0)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:67403; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005f2040, 0x20, STATIC_INIT_DISPATCH, combat_terrain_map)

// name:A; map symbol; map:22298
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_terrain_bit_cost::t_terrain_bit_cost(unsigned long arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:22307
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_isometric_map<unsigned long>::t_isometric_map<unsigned long>(
    int arg_0,
    int arg_1,
    t_screen_point const& arg_2,
    unsigned long const& arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:22313
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_basic_isometric_map<t_isometric_tile_map_base, unsigned long>::t_basic_isometric_map<t_isometric_tile_map_base, unsigned long>(
    int arg_0,
    int arg_1,
    t_screen_point const& arg_2,
    unsigned long const& arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:22317
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_basic_isometric_map<t_isometric_tile_map_base, unsigned long>::initialize(
    int arg_0,
    int arg_1,
    t_screen_point const& arg_2,
    unsigned long const& arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:22321
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool operator<(t_terrain_bit_cost const& arg_0, t_terrain_bit_cost const& arg_1)
{
    // Body unavailable.
}
