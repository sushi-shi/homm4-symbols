// transition_calculator.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\transition_calculator.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 43/143 (A:0 B:0 C:0); unaccounted 100; skipped std 84.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (123 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:61340; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0082a490, 0x15, STATIC_INIT_DISPATCH, "transition_calculator#1")

// name:C; dyninit; see ledger; map:61341
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "transition_calculator#1")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:61342; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0082a4b0, 0x27, STATIC_INIT_DISPATCH, g_transition_ids)

// name:C; dyninit; see ledger; map:61343
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, g_transition_ids)

// name:C; dyninit; see ledger; map:61344
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, g_transition_ids)

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:61345; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0082a4e0, 0x17, STATIC_DTOR, g_transition_ids)

namespace {

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40092
VA_CHT_1(0x0082a770, 0x1)
void initialize_transition_ids()
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40093
VA_CHT_1(0x0082a8b0, 0x16f)
int choose_set(t_full_terrain_type arg_0, t_full_terrain_type arg_1)
{
    // Body unavailable.
}

} // anonymous namespace

// name:B; dyninit; see ledger; map:61346
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// choose_set$sdtor
// Function body not reconstructed; signature retained as a comment.

namespace {

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40094
VA_CHT_1(0x0082aa20, 0x20)
int choose_set(t_road_type arg_0, t_road_type arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40095
VA_CHT_1(0x0082b080, 0x17)
int choose_set(t_tile_visibility arg_0, t_tile_visibility arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40096
VA_CHT_1(0x0082b200, 0x7)
void clamp_to_map(int arg_0, t_screen_point const& arg_1, t_map_point_2d& arg_2)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40097
VA_CHT_1(0x0082b6f0, 0x103)
std::vector<t_full_terrain_type, std::allocator<t_full_terrain_type>> const& get_terrain_evaluation_type_vector(

)
{
    // Body unavailable.
}

} // anonymous namespace

// name:B; dyninit; see ledger; map:61347
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// get_terrain_evaluation_type_vector$sdtor
// Function body not reconstructed; signature retained as a comment.

namespace {

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40098
VA_CHT_1(0x0082b860, 0x36)
t_abstract_tile const* t_terrain_transition_traits_base::get_tile(
    transition_calculator_details::t_abstract_terrain_map const& arg_0,
    t_level_map_point_2d const& arg_1,
    t_direction arg_2
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40099
VA_CHT_1(0x0082b8a0, 0x52)
t_shroud_tile t_shroud_transition_traits::get_tile(
    t_shroud_map const& arg_0,
    t_level_map_point_2d const& arg_1,
    t_direction arg_2
)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40100
VA_CHT_1(0x0082bb70, 0x65)
t_transition_calculator::t_impl::t_impl()
{
    // Body unavailable.
}

// name:A; map symbol; map:40101
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_transition_calculator::t_impl::set_transitions(
    transition_calculator_details::t_abstract_terrain_map& arg_0,
    t_level_map_point_2d const& arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40102
VA_CHT_1(0x0082bfe0, 0x67)
t_transition_calculator::t_transition_calculator()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40103
VA_CHT_1(0x0082c190, 0x22)
t_transition_calculator::~t_transition_calculator()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40104
VA_CHT_1(0x0082c1f0, 0x2d)
bool t_transition_calculator::do_set_transitions(
    transition_calculator_details::t_abstract_terrain_map& arg_0,
    t_level_map_point_2d const& arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40105
VA_CHT_1(0x0082c2e0, 0xc8)
t_shroud_transition_calculator::t_impl::t_impl()
{
    // Body unavailable.
}

// name:A; map symbol; map:40106
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_shroud_transition_calculator::t_impl::set_transitions(
    t_abstract_adventure_map& arg_0,
    int arg_1,
    t_level_map_point_2d const& arg_2
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40107
VA_CHT_1(0x0082c4e0, 0xf7)
t_shroud_transition_calculator::t_shroud_transition_calculator()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40108
VA_CHT_1(0x0082cda0, 0x84)
t_shroud_transition_calculator::~t_shroud_transition_calculator()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40109
VA_CHT_1(0x0082d360, 0x29)
bool t_shroud_transition_calculator::set_transitions(
    t_abstract_adventure_map& arg_0,
    int arg_1,
    t_level_map_point_2d const& arg_2
)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:61348; name:B (dyninit; see ledger)
VA_CHT_1(0x0082d390, 0x20)
// transition_calculator$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:61350; name:B (dyninit; see ledger)
VA_CHT_1(0x0082d960, 0x3f)
// transition_calculator$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:61351
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// transition_calculator$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:61352
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// transition_calculator$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:40111
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_full_terrain_type::get_subtype() const
{
    // Body unavailable.
}

// name:A; map symbol; map:40112
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_terrain_type t_full_terrain_type::get_type() const
{
    // Body unavailable.
}

// name:A; map symbol; map:40113
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_terrain_type t_full_terrain_type::operator t_terrain_type() const
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:40114
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int select_water_to_land_set()
{
    // Body unavailable.
}

// name:A; map symbol; map:40115
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int select_land_to_water_set()
{
    // Body unavailable.
}

// name:A; map symbol; map:40116
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int select_land_set()
{
    // Body unavailable.
}

// name:A; map symbol; map:40117
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int select_road_set()
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:40118
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_full_terrain_type::t_full_terrain_type(t_terrain_type arg_0, int arg_1)
{
    // Body unavailable.
}

namespace {

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40119
VA_CHT_1(0x0082b040, 0x18)
t_shroud_tile::t_shroud_tile(t_abstract_adventure_tile const* arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:40120
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_calculator_base<t_terrain_transition_traits>::t_calculator_base<t_terrain_transition_traits>()
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:40121
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_full_terrain_type::t_full_terrain_type()
{
    // Body unavailable.
}

namespace {

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40122
VA_CHT_1(0x0082c1c0, 0x24)
t_calculator_base<t_terrain_transition_traits>::~t_calculator_base<t_terrain_transition_traits>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40123
VA_CHT_1(0x0082b1c0, 0x3d)
t_calculator_base<t_road_transition_traits>::t_calculator_base<t_road_transition_traits>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40124
VA_CHT_1(0x0082abd0, 0x1c)
t_calculator_base<t_road_transition_traits>::~t_calculator_base<t_road_transition_traits>()
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40125
VA_CHT_1(0x0082b900, 0x31)
t_abstract_tile const& transition_calculator_details::t_abstract_terrain_map::get_const_tile(
    t_level_map_point_2d const& arg_0
) const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40126
VA_CHT_1(0x0082b210, 0x1c)
std::vector<t_road_transition, std::allocator<t_road_transition>> const& t_abstract_tile::get_road_transition_vector(

) const
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:40127
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_calculator_base_base<t_shroud_tile>::t_calculator_base_base<t_shroud_tile>()
{
    // Body unavailable.
}

// name:A; map symbol; map:40128
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_shroud_tile::t_shroud_tile()
{
    // Body unavailable.
}

// name:A; map symbol; map:40129
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_calculator_base<t_shroud_transition_traits>::t_calculator_base<t_shroud_transition_traits>()
{
    // Body unavailable.
}

// name:A; map symbol; map:40130
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_calculator_base<t_shroud_transition_traits>::~t_calculator_base<t_shroud_transition_traits>()
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:40131
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_shroud_transition_map const* t_abstract_adventure_map::get_const_shroud_transition_map_ptr(int arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:40132
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_adventure_tile const& t_abstract_adventure_map::get_const_tile(t_level_map_point_2d arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:40137
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::bitset<19> operator|(std::bitset<19> const& arg_0, std::bitset<19> const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:40169
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_ptr<t_transition_calculator::t_impl>::t_owned_ptr<t_transition_calculator::t_impl>(
    t_transition_calculator::t_impl* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:40170
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_ptr<t_transition_calculator::t_impl>::~t_owned_ptr<t_transition_calculator::t_impl>()
{
    // Body unavailable.
}

// name:A; map symbol; map:40171
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_transition_calculator::t_impl* t_owned_ptr<t_transition_calculator::t_impl>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:40172
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_ptr<t_shroud_transition_calculator::t_impl>::t_owned_ptr<t_shroud_transition_calculator::t_impl>(
    t_shroud_transition_calculator::t_impl* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:40173
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_ptr<t_shroud_transition_calculator::t_impl>::~t_owned_ptr<t_shroud_transition_calculator::t_impl>()
{
    // Body unavailable.
}

// name:A; map symbol; map:40174
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_shroud_transition_calculator::t_impl* t_owned_ptr<t_shroud_transition_calculator::t_impl>::operator->(

) const
{
    // Body unavailable.
}

namespace {

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40175
VA_CHT_1(0x0082c070, 0x118)
void clamp_to_map(transition_calculator_details::t_abstract_terrain_map const& arg_0, t_map_point_2d& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:40176
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void clamp_to_map(t_abstract_adventure_map const& arg_0, t_map_point_2d& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40177
VA_CHT_1(0x0082c3c0, 0x11c)
void t_calculator_base<t_terrain_transition_traits>::merge_equivalent_transitions(
    std::vector<t_terrain_transition, std::allocator<t_terrain_transition>> const& arg_0,
    std::vector<t_terrain_transition, std::allocator<t_terrain_transition>>& arg_1
)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:40178
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool operator==(t_full_terrain_type const& arg_0, t_full_terrain_type const& arg_1)
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:40179
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool same_group(int arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:40180
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int mask_group(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:40181
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_full_terrain_type t_terrain_transition_traits::get_type(t_terrain_transition const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:40182
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_calculator_base<t_terrain_transition_traits>::transition_vectors_differ(
    std::vector<t_terrain_transition, std::allocator<t_terrain_transition>> const& arg_0,
    std::vector<t_terrain_transition, std::allocator<t_terrain_transition>> const& arg_1
)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:40183
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool operator!=(t_full_terrain_type const& arg_0, t_full_terrain_type const& arg_1)
{
    // Body unavailable.
}

namespace {

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40184
VA_CHT_1(0x0082b230, 0x32b)
void t_calculator_base<t_terrain_transition_traits>::calculate_transitions(
    transition_calculator_details::t_abstract_terrain_map const& arg_0,
    t_level_map_point_2d const& arg_1,
    std::vector<t_terrain_transition, std::allocator<t_terrain_transition>>& arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:40185
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_terrain_mask_code_array::clear()
{
    // Body unavailable.
}

// name:A; map symbol; map:40186
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int get_edge_priority(t_full_terrain_type arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:40187
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int get_diagonal_priority(t_full_terrain_type arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:40188
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_full_terrain_type t_terrain_transition_traits::get_type(t_abstract_tile const* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40189
VA_CHT_1(0x0082ba40, 0x12b)
void t_calculator_base<t_road_transition_traits>::merge_equivalent_transitions(
    std::vector<t_road_transition, std::allocator<t_road_transition>> const& arg_0,
    std::vector<t_road_transition, std::allocator<t_road_transition>>& arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:40190
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_road_type t_road_transition_traits::get_type(t_road_transition const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:40191
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_calculator_base<t_road_transition_traits>::transition_vectors_differ(
    std::vector<t_road_transition, std::allocator<t_road_transition>> const& arg_0,
    std::vector<t_road_transition, std::allocator<t_road_transition>> const& arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40192
VA_CHT_1(0x0082d750, 0x206)
void t_calculator_base<t_road_transition_traits>::calculate_transitions(
    transition_calculator_details::t_abstract_terrain_map const& arg_0,
    t_level_map_point_2d const& arg_1,
    std::vector<t_road_transition, std::allocator<t_road_transition>>& arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:40193
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_road_mask_code_array::clear()
{
    // Body unavailable.
}

// name:A; map symbol; map:40194
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int get_edge_priority(t_road_type arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:40195
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int get_diagonal_priority(t_road_type arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:40196
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_road_type t_road_transition_traits::get_type(t_abstract_tile const* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:40197
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_calculator_base<t_shroud_transition_traits>::merge_equivalent_transitions(
    std::vector<t_shroud_transition, std::allocator<t_shroud_transition>> const& arg_0,
    std::vector<t_shroud_transition, std::allocator<t_shroud_transition>>& arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:40198
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_tile_visibility t_shroud_transition_traits::get_type(t_shroud_transition const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:40199
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_calculator_base<t_shroud_transition_traits>::transition_vectors_differ(
    std::vector<t_shroud_transition, std::allocator<t_shroud_transition>> const& arg_0,
    std::vector<t_shroud_transition, std::allocator<t_shroud_transition>> const& arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40200
VA_CHT_1(0x0082bbe0, 0x3f4)
void t_calculator_base<t_shroud_transition_traits>::calculate_transitions(
    t_shroud_map const& arg_0,
    t_level_map_point_2d const& arg_1,
    std::vector<t_shroud_transition, std::allocator<t_shroud_transition>>& arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:40201
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_shroud_mask_code_array::clear()
{
    // Body unavailable.
}

// name:A; map symbol; map:40202
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int get_edge_priority(t_tile_visibility arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:40203
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int get_diagonal_priority(t_tile_visibility arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:40204
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_tile_visibility t_shroud_transition_traits::get_type(t_shroud_tile arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:40213
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_transition_calculator::t_impl)

// name:A; map symbol; map:40214
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_shroud_transition_calculator::t_impl)

// name:A; map symbol; map:40215
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_transition_calculator::t_impl::~t_impl()
{
    // Body unavailable.
}

// name:A; map symbol; map:40216
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_shroud_transition_calculator::t_impl::~t_impl()
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:40221
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_calculator_base<t_terrain_transition_traits>::add_transition(t_full_terrain_type arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:40222
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
unsigned char& t_terrain_mask_code_array::operator[](t_full_terrain_type arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:40223
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_terrain_transition_traits::set_type(t_terrain_transition& arg_0, t_full_terrain_type arg_1)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40224
VA_CHT_1(0x0082b0a0, 0x11e)
void t_calculator_base<t_terrain_transition_traits>::corner_is_same()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40225
VA_CHT_1(0x0082cf30, 0x123)
void t_calculator_base<t_terrain_transition_traits>::left_is_same()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40226
VA_CHT_1(0x0082ce30, 0xf7)
void t_calculator_base<t_terrain_transition_traits>::left_matches_right()
{
    // Body unavailable.
}

// name:A; map symbol; map:40227
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_calculator_base<t_terrain_transition_traits>::right_is_same()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40228
VA_CHT_1(0x0082d160, 0x1f3)
void t_calculator_base<t_terrain_transition_traits>::write_transitions(
    std::vector<t_terrain_transition, std::allocator<t_terrain_transition>>& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:40229
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_terrain_transition_traits::get_evaluation_type_count()
{
    // Body unavailable.
}

// name:A; map symbol; map:40230
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_full_terrain_type t_terrain_transition_traits::get_evaluation_type(int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40232
VA_CHT_1(0x0082ccd0, 0xc1)
void t_calculator_base<t_road_transition_traits>::add_transition(t_road_type arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:40233
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
unsigned char& t_road_mask_code_array::operator[](t_road_type arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:40234
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_road_transition_traits::set_type(t_road_transition& arg_0, t_road_type arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:40235
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_calculator_base<t_road_transition_traits>::corner_is_same()
{
    // Body unavailable.
}

// name:A; map symbol; map:40236
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_calculator_base<t_road_transition_traits>::left_is_same()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40237
VA_CHT_1(0x0082d060, 0xf9)
void t_calculator_base<t_road_transition_traits>::left_matches_right()
{
    // Body unavailable.
}

// name:A; map symbol; map:40238
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_calculator_base<t_road_transition_traits>::right_is_same()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40239
VA_CHT_1(0x0082ca80, 0x245)
void t_calculator_base<t_road_transition_traits>::write_transitions(
    std::vector<t_road_transition, std::allocator<t_road_transition>>& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:40240
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_road_transition_traits::get_evaluation_type_count()
{
    // Body unavailable.
}

// name:A; map symbol; map:40241
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_road_type t_road_transition_traits::get_evaluation_type(int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40242
VA_CHT_1(0x0082aaf0, 0xd7)
void t_calculator_base<t_shroud_transition_traits>::add_transition(t_tile_visibility arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:40243
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
unsigned char& t_shroud_mask_code_array::operator[](t_tile_visibility arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:40244
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_shroud_transition_traits::set_type(t_shroud_transition& arg_0, t_tile_visibility arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:40245
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_calculator_base<t_shroud_transition_traits>::corner_is_same()
{
    // Body unavailable.
}

// name:A; map symbol; map:40246
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_calculator_base<t_shroud_transition_traits>::left_is_same()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40247
VA_CHT_1(0x0082c5e0, 0x104)
void t_calculator_base<t_shroud_transition_traits>::left_matches_right()
{
    // Body unavailable.
}

// name:A; map symbol; map:40248
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_calculator_base<t_shroud_transition_traits>::right_is_same()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40249
VA_CHT_1(0x0082c6f0, 0x2a8)
void t_calculator_base<t_shroud_transition_traits>::write_transitions(
    std::vector<t_shroud_transition, std::allocator<t_shroud_transition>>& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:40250
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_shroud_transition_traits::get_evaluation_type_count()
{
    // Body unavailable.
}

// name:A; map symbol; map:40251
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_tile_visibility t_shroud_transition_traits::get_evaluation_type(int arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// === .rdata (8 symbols) ===

// name:A; map symbol; map:45981
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_transition_calculator::t_impl::`vbtable'{for `t_calculator_base<t_road_transition_traits>'}")

// name:A; map symbol; map:45982
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_transition_calculator::t_impl::`vbtable'{for `t_calculator_base<t_terrain_transition_traits>'}")

// name:A; map symbol; map:45983
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_calculator_base<t_terrain_transition_traits>::`vbtable'")

// name:A; map symbol; map:45984
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_calculator_base<t_road_transition_traits>::`vbtable'")

// name:A; map symbol; map:45985
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_shroud_transition_calculator::t_impl::`vbtable'")

// name:A; map symbol; map:45986
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_calculator_base<t_shroud_transition_traits>::`vbtable'")

// name:A; map symbol; map:45987
DATA_CHT_1(UNACCOUNTED)
// int const* const `int get_edge_priority(t_full_terrain_type)'::`2'::k_edge_priority

// name:A; map symbol; map:45988
DATA_CHT_1(UNACCOUNTED)
// int const* const `int get_diagonal_priority(t_full_terrain_type)'::`2'::k_diagonal_priority

// === .data (10 symbols) ===

// name:A; map symbol; map:59682
DATA_CHT_1_COMPGEN(UNACCOUNTED, "m_subtype >= 0&& m_subtype < ge...")

// name:A; map symbol; map:59683
DATA_CHT_1_COMPGEN(UNACCOUNTED, "m_type >= 0&& m_type < k_terrai...")

// name:A; map symbol; map:59684
DATA_CHT_1_COMPGEN(UNACCOUNTED, "tile != 0")

// name:A; map symbol; map:59685
DATA_CHT_1_COMPGEN(UNACCOUNTED, "C:\\\\work\\\\game\\\\transition_calculat...")

// name:A; map symbol; map:59686
DATA_CHT_1_COMPGEN(UNACCOUNTED, "tile.tile_ptr != 0")

// name:A; map symbol; map:59687
DATA_CHT_1_COMPGEN(UNACCOUNTED, "evaluation_num >= 0&& evaluatio...")

// name:A; map symbol; map:59688
DATA_CHT_1_COMPGEN(UNACCOUNTED, "index >= 0&& index < k_road_typ...")

// name:A; map symbol; map:59689
DATA_CHT_1_COMPGEN(UNACCOUNTED, "evaluation_num >= 0&& evaluatio...")

// name:A; map symbol; map:59690
DATA_CHT_1_COMPGEN(UNACCOUNTED, "index >= 0&& index < k_tile_vis...")

// name:A; map symbol; map:59691
DATA_CHT_1_COMPGEN(UNACCOUNTED, "evaluation_num >= 0&& evaluatio...")

// === .bss (2 symbols) ===

// name:A; map symbol; map:60432
DATA_CHT_1(UNACCOUNTED)
unsigned char*g_corner_transitions; // Initial value unavailable.

// name:A; map symbol; map:60433
DATA_CHT_1(UNACCOUNTED)
std::vector<unsigned char, std::allocator<unsigned char>>*g_transition_ids; // Initial value unavailable.
