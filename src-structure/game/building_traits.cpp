// building_traits.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\building_traits.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 14/23 (A:0 B:1 C:0); unaccounted 9; skipped std 2.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (21 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:68881; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005812e0, 0x27, STATIC_INIT_DISPATCH, "building_traits#1")

// name:C; dyninit; see ledger; map:68882
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "building_traits#1")

// name:C; dyninit; see ledger; map:68883
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "building_traits#1")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:68884; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00581310, 0x17, STATIC_DTOR, "building_traits#1")

// confidence:D; dyninit-init; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:68885; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005813e0, 0x11, STATIC_INIT_DISPATCH, g_building_table)

// confidence:D; dyninit-ctor; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:68886; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00581400, 0x121, STATIC_CTOR, g_building_table)

// name:B; dyninit; see ledger; map:68887
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, g_building_table)

// confidence:D; dyninit-dtor; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:68888; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00581530, 0xa, STATIC_DTOR, g_building_table)

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:18471
VA_CHT_1(0x00581720, 0x20)
std::vector<t_creature_type, std::allocator<t_creature_type>> const& get_portal_creature_types()
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:68889
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// get_portal_creature_types$sdtor
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:18472
VA_CHT_1(0x00581740, 0x2d)
t_building_traits const& get_traits(t_town_type arg_0, t_town_building arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:68890
VA_CHT_1(0x00581770, 0x2eb)
static void read_traits()
{
    // Body unavailable.
}

// name:A; map symbol; map:68891
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
static void init_layer_names()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:68892
VA_CHT_1(0x00581a60, 0x3b)
static void init_layer_names(t_town_type arg_0, t_layout_layer_name const* arg_1, int arg_2)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:68893
VA_CHT_1(0x00581aa0, 0x44)
static t_building_traits* find_traits(t_town_type arg_0, std::string const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:68894
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
static void set_creature_dwellings()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:18473
VA_CHT_1(0x00581af0, 0x8)
char const* get_town_image_keyword(t_town_image_level arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:18474
VA_CHT_1(0x00581b00, 0x14)
char const* get_town_model_name(t_town_type arg_0, t_town_image_level arg_1, t_two_way_facing arg_2)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:68895; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00581b20, 0x20, STATIC_INIT_DISPATCH, building_traits)

// name:A; map symbol; map:18475
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_building_traits::t_building_traits()
{
    // Body unavailable.
}

// name:A; map symbol; map:18476
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_building_traits::~t_building_traits()
{
    // Body unavailable.
}

// === .bss (2 symbols) ===

// name:A; map symbol; map:60088
DATA_CHT_1(UNACCOUNTED)
// t_building_traits (*k_building_traits)[43]

namespace {

// confidence:B; dyninit-global; owner-conf-B; map:60089
DATA_CHT_1(0x009dc610)
t_pointer_cache<t_table> g_building_table; // Initial value unavailable.

} // anonymous namespace
