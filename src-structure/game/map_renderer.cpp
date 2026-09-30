// map_renderer.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\map_renderer.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 195/438 (A:67 B:1 C:0); unaccounted 243; skipped std 215.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (355 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:64525; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00703aa0, 0x15, STATIC_INIT_DISPATCH, "map_renderer#1")

// name:C; dyninit; see ledger; map:64526
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "map_renderer#1")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:64527; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00703ac0, 0x15, STATIC_INIT_DISPATCH, "map_renderer#2")

// name:C; dyninit; see ledger; map:64528
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "map_renderer#2")

namespace {

// confidence:A; align-order; retn,stable,vslot;vftable-certificate=303ae0:28853;class=?%C:\work\game\map_renderer.cpp259823810::t_adventure_metatile_map::t_adventure_map_adapter;proof=unique-hierarchy-method-and-slot-cleanup;cleanup=8;checked-rtti-and-raw-slots;vft=4e4f90,col=50f08c,offset=0,slot=0,entry=303ae0; map:28853
VA_CHT_1(0x00703ae0, 0x23)
void t_adventure_metatile_map::t_adventure_map_adapter::get_size(int& arg_0, int& arg_1) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot;vftable-certificate=303b10:28854;class=?%C:\work\game\map_renderer.cpp259823810::t_adventure_metatile_map::t_adventure_map_adapter;proof=unique-hierarchy-method-and-slot-cleanup;cleanup=12;checked-rtti-and-raw-slots;vft=4e4f90,col=50f08c,offset=0,slot=1,entry=303b10; map:28854
VA_CHT_1(0x00703b10, 0x2b)
void t_adventure_metatile_map::t_adventure_map_adapter::get_row_bounds(
    int arg_0,
    int& arg_1,
    int& arg_2
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:28855
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_margin_type compute_tile_point_margin_type(
    t_abstract_adventure_map const& arg_0,
    t_map_point_2d const& arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28856
VA_CHT_1(0x00703b40, 0x25)
t_map_point_2d compute_top_margin_column_tile_point(t_abstract_adventure_map const& arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:28857
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_point_2d compute_bottom_margin_column_tile_point(t_abstract_adventure_map const& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:28858
VA_CHT_1(0x00703b70, 0x1b0)
t_shroud_bitmap::t_shroud_bitmap()
{
    // Body unavailable.
}

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:28859
VA_CHT_1(0x00703d40, 0x57)
void t_shroud_bitmap::init()
{
    // Body unavailable.
}

} // anonymous namespace

// name:B; dyninit; see ledger; map:64529
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// t_shroud_bitmap::init$sdtor
// Function body not reconstructed; signature retained as a comment.

namespace {

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:28860
VA_CHT_1(0x00703da0, 0x1b4)
void t_shroud_bitmap::on_pixel_masks_changed()
{
    // Body unavailable.
}

// confidence:D; align-order; review-status=unreviewed;classification=D:not-a-best-guess; map:28861
VA_CHT_1(0x00703f60, 0xa)
t_bitmap_layer const& find(t_bitmap_group const& arg_0, char const* arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:28862
VA_CHT_1(0x00703f80, 0x288)
t_border_frame_layers::t_border_frame_layers()
{
    // Body unavailable.
}

} // anonymous namespace

// name:B; dyninit; see ledger; map:64530
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// t_border_frame_layers::t_border_frame_layers$sdtor
// Function body not reconstructed; signature retained as a comment.

namespace {

// name:A; map symbol; map:28863
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_margin_texture_layers::t_margin_texture_layers()
{
    // Body unavailable.
}

} // anonymous namespace

// name:B; dyninit; see ledger; map:64531
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// t_margin_texture_layers::t_margin_texture_layers$sdtor
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; retn,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:28864
VA_CHT_1(0x00704230, 0x1ec)
map_renderer_details::t_internal_map_data::t_internal_map_data(t_abstract_adventure_map const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; RETN!;review-status=unreviewed;classification=D:not-a-best-guess; map:28865
VA_CHT_1(0x00704480, 0x90)
int map_renderer_details::t_internal_map_data::add_map_renderer(t_map_renderer* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:28866
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int map_renderer_details::t_internal_map_data::get_bottom_margin_height(int arg_0, int arg_1) const
{
    // Body unavailable.
}

// name:A; map symbol; map:28867
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int map_renderer_details::t_internal_map_data::get_top_margin_height(int arg_0, int arg_1) const
{
    // Body unavailable.
}

// name:A; map symbol; map:28868
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int map_renderer_details::t_internal_map_data::remove_map_renderer(t_map_renderer* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:28869
VA_CHT_1(0x00704510, 0x261)
void map_renderer_details::t_internal_map_data::compute_margin_point_heights()
{
    // Body unavailable.
}

// name:A; map symbol; map:28870
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void map_renderer_details::t_internal_map_data::on_terrain_changed_helper(
    int arg_0,
    t_vector_set<t_map_point_2d, std::less<t_map_point_2d>, std::allocator<t_map_point_2d>> const& arg_1,
    std::map<int, int, std::less<int>, std::allocator<int>>& arg_2,
    std::map<int, int, std::less<int>, std::allocator<int>>& arg_3
)
{
    // Body unavailable.
}

namespace {

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28871
VA_CHT_1(0x007048f0, 0x120)
t_counted_ptr<t_internal_map_data_map> get_internal_map_list()
{
    // Body unavailable.
}

} // anonymous namespace

// name:B; dyninit; see ledger; map:64532
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// get_internal_map_list$sdtor
// Function body not reconstructed; signature retained as a comment.

namespace {

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28872
VA_CHT_1(0x00704a10, 0x72)
void clip_to_dest(
    t_screen_point const& arg_0,
    t_screen_point& arg_1,
    t_screen_point& arg_2,
    t_screen_point& arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28873
VA_CHT_1(0x00704a90, 0x82)
void clip(
    t_screen_point const& arg_0,
    t_screen_point const& arg_1,
    t_screen_point& arg_2,
    t_screen_point& arg_3,
    t_screen_point& arg_4
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28874
VA_CHT_1(0x00704b20, 0x9d)
void clip_horizontal_source(
    t_screen_point const& arg_0,
    int arg_1,
    t_screen_point& arg_2,
    int& arg_3,
    t_screen_point& arg_4
)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28875
VA_CHT_1(0x00704bc0, 0x245)
void bit_blt_shroud_with_mask(
    t_abstract_bitmap<unsigned short>& arg_0,
    t_screen_point arg_1,
    t_abstract_bitmap<unsigned short> const& arg_2,
    t_screen_point arg_3,
    t_abstract_bitmap<unsigned char> const& arg_4,
    t_screen_point arg_5,
    t_screen_point arg_6
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28876
VA_CHT_1(0x00704e10, 0x2d5)
void wrap_draw_top_left_helper(
    t_abstract_bitmap<unsigned short>& arg_0,
    t_screen_rect const& arg_1,
    t_bitmap_layer const& arg_2,
    t_screen_point const& arg_3,
    t_screen_rect const& arg_4,
    int arg_5
)
{
    // Body unavailable.
}

// confidence:D; align-order; RETN!,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28877
VA_CHT_1(0x007050f0, 0x27)
void wrap_draw_top_left(
    t_abstract_bitmap<unsigned short>& arg_0,
    t_screen_rect const& arg_1,
    t_bitmap_layer const& arg_2,
    t_screen_point const& arg_3,
    t_screen_rect const& arg_4
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28878
VA_CHT_1(0x00705120, 0x27d)
void wrap_draw_top_right_helper(
    t_abstract_bitmap<unsigned short>& arg_0,
    t_screen_rect const& arg_1,
    t_bitmap_layer const& arg_2,
    t_screen_point const& arg_3,
    t_screen_rect const& arg_4,
    int arg_5
)
{
    // Body unavailable.
}

// name:A; map symbol; map:28879
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void wrap_draw_top_right(
    t_abstract_bitmap<unsigned short>& arg_0,
    t_screen_rect const& arg_1,
    t_bitmap_layer const& arg_2,
    t_screen_point const& arg_3,
    t_screen_rect const& arg_4
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28880
VA_CHT_1(0x007053a0, 0x27f)
void wrap_draw_bottom_left_helper(
    t_abstract_bitmap<unsigned short>& arg_0,
    t_screen_rect const& arg_1,
    t_bitmap_layer const& arg_2,
    t_screen_point const& arg_3,
    t_screen_rect const& arg_4,
    int arg_5
)
{
    // Body unavailable.
}

// name:A; map symbol; map:28881
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void wrap_draw_bottom_left(
    t_abstract_bitmap<unsigned short>& arg_0,
    t_screen_rect const& arg_1,
    t_bitmap_layer const& arg_2,
    t_screen_point const& arg_3,
    t_screen_rect const& arg_4
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28882
VA_CHT_1(0x00705620, 0x2dd)
void wrap_draw_bottom_right_helper(
    t_abstract_bitmap<unsigned short>& arg_0,
    t_screen_rect const& arg_1,
    t_bitmap_layer const& arg_2,
    t_screen_point const& arg_3,
    t_screen_rect const& arg_4,
    int arg_5
)
{
    // Body unavailable.
}

// name:A; map symbol; map:28883
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void wrap_draw_bottom_right(
    t_abstract_bitmap<unsigned short>& arg_0,
    t_screen_rect const& arg_1,
    t_bitmap_layer const& arg_2,
    t_screen_point const& arg_3,
    t_screen_rect const& arg_4
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28884
VA_CHT_1(0x00705900, 0x1e5)
void compute_tile_passability_info(
    t_abstract_adventure_map const& arg_0,
    t_level_map_point_2d const& arg_1,
    t_tile_passability_info& arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:28885
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_passability_color_maintainer::on_pixel_masks_changed()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28886
VA_CHT_1(0x00705af0, 0x55)
void t_passability_color_maintainer::update_passability_colors()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28887
VA_CHT_1(0x00705b50, 0x287)
void draw_tile_passability(
    t_abstract_adventure_map const& arg_0,
    t_level_map_point_2d const& arg_1,
    t_abstract_bitmap<unsigned short>& arg_2,
    t_screen_point const& arg_3,
    t_screen_rect const& arg_4
)
{
    // Body unavailable.
}

} // anonymous namespace

// name:B; dyninit; see ledger; map:64533
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// draw_tile_passability$sdtor
// Function body not reconstructed; signature retained as a comment.

namespace {

// name:A; map symbol; map:28888
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void draw_tile_shroud_mask(
    t_abstract_adventure_map const& arg_0,
    int arg_1,
    t_level_map_point_2d const& arg_2,
    t_quad<int> const& arg_3,
    t_abstract_bitmap<unsigned char>& arg_4,
    t_screen_point const& arg_5,
    t_screen_rect const& arg_6
)
{
    // Body unavailable.
}

// confidence:D; align-order; RETN!,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28889
VA_CHT_1(0x00705de0, 0x66)
void draw_tile_shroud_mask(
    t_abstract_adventure_map const& arg_0,
    int arg_1,
    t_level_map_point_2d const& arg_2,
    t_abstract_bitmap<unsigned char>& arg_3,
    t_screen_point const& arg_4,
    t_screen_rect const& arg_5
)
{
    // Body unavailable.
}

// name:A; map symbol; map:28890
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void draw_tile_half_horizontal_shroud_mask(
    t_abstract_adventure_map const& arg_0,
    int arg_1,
    t_level_map_point_2d const& arg_2,
    bool arg_3,
    t_bitmap_1d<unsigned char>& arg_4
)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28891
VA_CHT_1(0x00705e50, 0x5)
void t_map_renderer_client::on_rects_dirtied(
    std::vector<t_screen_rect, std::allocator<t_screen_rect>> const& arg_0
)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28892
VA_CHT_1(0x00705e60, 0xa)
void t_map_renderer_client::on_view_moved(int arg_0, t_screen_point const& arg_1, t_screen_point const& arg_2)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28893
VA_CHT_1(0x007062b0, 0x30)
void t_map_renderer::t_impl::t_draw_tile_shroud_mask_func::operator()(
    t_map_renderer::t_impl::t_draw_terrain_map_adapter arg_0,
    t_level_map_point_2d const& arg_1,
    t_screen_point const& arg_2,
    t_screen_rect const& arg_3
) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:28894
VA_CHT_1(0x007063b0, 0x354)
t_map_renderer::t_impl::t_impl(
    t_map_renderer& arg_0,
    t_map_renderer_client* arg_1,
    t_abstract_adventure_map const& arg_2
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:28895
VA_CHT_1(0x00706850, 0x1e4)
t_map_renderer::t_impl::~t_impl()
{
    // Body unavailable.
}

// name:A; map symbol; map:28896
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_map_renderer::t_impl::add_animating_object_id(int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28897
VA_CHT_1(0x00706a40, 0x3f0)
void t_map_renderer::t_impl::adjust_object_animation_for_shroud_change(
    t_vector_set<t_map_point_2d, std::less<t_map_point_2d>, std::allocator<t_map_point_2d>> const& arg_0,
    t_clip_list& arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28898
VA_CHT_1(0x00706e50, 0x412)
void t_map_renderer::t_impl::adjust_object_visibility_for_visibility_change(
    t_vector_set<t_visibility_point, std::less<t_visibility_point>, std::allocator<t_visibility_point>> const& arg_0,
    t_clip_list& arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28899
VA_CHT_1(0x00707270, 0x1c5)
t_clip_list t_map_renderer::t_impl::build_clip_list(
    t_vector_set<t_map_point_2d, std::less<t_map_point_2d>, std::allocator<t_map_point_2d>> const& arg_0
) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28900
VA_CHT_1(0x00707440, 0x232)
t_clip_list t_map_renderer::t_impl::build_clip_list_for_shroud(
    t_vector_set<t_map_point_2d, std::less<t_map_point_2d>, std::allocator<t_map_point_2d>> const& arg_0
) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28901
VA_CHT_1(0x00707680, 0x1b3)
t_vector_set<t_map_point_2d, std::less<t_map_point_2d>, std::allocator<t_map_point_2d>> t_map_renderer::t_impl::build_map_rect_point_set(
    t_map_point_2d const& arg_0,
    t_map_point_2d const& arg_1
) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28902
VA_CHT_1(0x00707840, 0x47)
void t_map_renderer::t_impl::clear_animating_object_ids()
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28903
VA_CHT_1(0x00707890, 0xba)
void t_map_renderer::t_impl::dirty(t_screen_rect const& arg_0)
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:64534
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// t_map_renderer::t_impl::dirty$sdtor
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28904
VA_CHT_1(0x00707970, 0xf5)
void t_map_renderer::t_impl::dirty(t_clip_list const& arg_0)
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:64535
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// t_map_renderer::t_impl::dirty$sdtor
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28905
VA_CHT_1(0x00707aa0, 0x1a3)
void t_map_renderer::t_impl::draw_bottom_edge(t_screen_rect const& arg_0, t_screen_rect const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28906
VA_CHT_1(0x00707c50, 0x13f)
void t_map_renderer::t_impl::draw_bottom_left_edge(t_screen_rect const& arg_0, t_screen_rect const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28907
VA_CHT_1(0x00707d90, 0x1c3)
void t_map_renderer::t_impl::draw_bottom_margin_column(t_screen_rect const& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28908
VA_CHT_1(0x00707f60, 0x319)
void t_map_renderer::t_impl::draw_bottom_margin_column_shroud_mask(
    int arg_0,
    t_screen_rect const& arg_1,
    t_screen_point const& arg_2
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28909
VA_CHT_1(0x00708290, 0x134)
void t_map_renderer::t_impl::draw_bottom_right_edge(t_screen_rect const& arg_0, t_screen_rect const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28910
VA_CHT_1(0x007083d0, 0xe0)
void t_map_renderer::t_impl::draw_edges_and_adjust_rect(t_screen_rect& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28911
VA_CHT_1(0x007084b0, 0x137)
void t_map_renderer::t_impl::draw_left_edge(t_screen_rect const& arg_0, t_screen_rect const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28912
VA_CHT_1(0x007085f0, 0x11f)
void t_map_renderer::t_impl::draw_map(t_screen_rect const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28913
VA_CHT_1(0x00708710, 0xaf)
void t_map_renderer::t_impl::draw_map_margins(t_screen_rect const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28914
VA_CHT_1(0x007087c0, 0x945)
void t_map_renderer::t_impl::draw_objects(t_screen_rect const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28915
VA_CHT_1(0x00709110, 0x124)
void t_map_renderer::t_impl::draw_right_edge(t_screen_rect const& arg_0, t_screen_rect const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28916
VA_CHT_1(0x00709240, 0x3fd)
void t_map_renderer::t_impl::draw_shroud(t_screen_rect const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28917
VA_CHT_1(0x00709650, 0x3e3)
void t_map_renderer::t_impl::draw_terrain(t_screen_rect const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28918
VA_CHT_1(0x00709a40, 0x2ec)
void t_map_renderer::t_impl::draw_to_shroud_mask(t_screen_rect const& arg_0, t_screen_point const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28919
VA_CHT_1(0x00709d30, 0x1a7)
void t_map_renderer::t_impl::draw_top_edge(t_screen_rect const& arg_0, t_screen_rect const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28920
VA_CHT_1(0x00709ee0, 0x161)
void t_map_renderer::t_impl::draw_top_left_edge(t_screen_rect const& arg_0, t_screen_rect const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:28921
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_map_renderer::t_impl::draw_passability(t_screen_rect const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28922
VA_CHT_1(0x0070a0e0, 0x1c5)
void t_map_renderer::t_impl::draw_top_margin_column(t_screen_rect const& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28923
VA_CHT_1(0x0070a2b0, 0x2bc)
void t_map_renderer::t_impl::draw_top_margin_column_shroud_mask(
    int arg_0,
    t_screen_rect const& arg_1,
    t_screen_point const& arg_2
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28924
VA_CHT_1(0x0070a570, 0x152)
void t_map_renderer::t_impl::draw_top_right_edge(t_screen_rect const& arg_0, t_screen_rect const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:28925
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_point t_map_renderer::t_impl::get_adv_object_screen_point(int arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:28926
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
unsigned long t_map_renderer::t_impl::get_last_update_time(
    int arg_0,
    t_abstract_adv_object const& arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:28927
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
unsigned long t_map_renderer::t_impl::get_last_update_time(int arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:28928
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_map_renderer::t_impl::invalidate(
    std::map<int, int, std::less<int>, std::allocator<int>> const& arg_0,
    t_clip_list& arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28929
VA_CHT_1(0x0070a740, 0x208)
void t_map_renderer::t_impl::invalidate_object(
    t_abstract_adv_object const& arg_0,
    t_level_map_point_3d const& arg_1,
    unsigned long arg_2,
    t_clip_list& arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:28930
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_map_renderer::t_impl::invalidate_object(int arg_0, unsigned long arg_1, t_clip_list& arg_2)
{
    // Body unavailable.
}

// name:A; map symbol; map:28931
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_map_renderer::t_impl::invalidate_object_if_visible(int arg_0, unsigned long arg_1, t_clip_list& arg_2)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28932
VA_CHT_1(0x0070a950, 0x130)
void t_map_renderer::t_impl::on_adv_object_moved(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:28933
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_map_renderer::t_impl::on_adv_object_moved(
    int arg_0,
    int arg_1,
    t_vector_set<t_map_point_2d, std::less<t_map_point_2d>, std::allocator<t_map_point_2d>> const& arg_2,
    std::map<int, int, std::less<int>, std::allocator<int>> const& arg_3,
    std::map<int, int, std::less<int>, std::allocator<int>> const& arg_4,
    std::map<int, int, std::less<int>, std::allocator<int>> const& arg_5
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28934
VA_CHT_1(0x0070aa80, 0x130)
void t_map_renderer::t_impl::on_adv_object_placed(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:28935
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_map_renderer::t_impl::on_adv_object_placed(
    int arg_0,
    int arg_1,
    t_vector_set<t_map_point_2d, std::less<t_map_point_2d>, std::allocator<t_map_point_2d>> const& arg_2,
    std::map<int, int, std::less<int>, std::allocator<int>> const& arg_3,
    std::map<int, int, std::less<int>, std::allocator<int>> const& arg_4,
    std::map<int, int, std::less<int>, std::allocator<int>> const& arg_5
)
{
    // Body unavailable.
}

// name:A; map symbol; map:28936
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_map_renderer::t_impl::on_adv_object_removed(
    t_abstract_adv_object const& arg_0,
    t_level_map_point_2d const& arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:28937
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_map_renderer::t_impl::on_idle()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28938
VA_CHT_1(0x0070b090, 0x1a5)
void t_map_renderer::t_impl::on_moving_adv_object(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:28939
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_map_renderer::t_impl::on_multiple_adv_objects_removed()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28940
VA_CHT_1(0x0070b240, 0x1a5)
void t_map_renderer::t_impl::on_removing_adv_object(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:28941
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_map_renderer::t_impl::on_removing_multiple_adv_objects(
    t_vector_set<int, std::less<int>, std::allocator<int>> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:28942
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_map_renderer::t_impl::on_rock_terrain_changed(
    int arg_0,
    t_vector_set<t_map_point_2d, std::less<t_map_point_2d>, std::allocator<t_map_point_2d>> const& arg_1,
    t_vector_set<int, std::less<int>, std::allocator<int>> const& arg_2
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28943
VA_CHT_1(0x0070b3f0, 0x132)
void t_map_renderer::t_impl::on_terrain_changed(
    int arg_0,
    t_vector_set<t_map_point_2d, std::less<t_map_point_2d>, std::allocator<t_map_point_2d>> const& arg_1,
    std::map<int, int, std::less<int>, std::allocator<int>> const& arg_2,
    std::map<int, int, std::less<int>, std::allocator<int>> const& arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:28944
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_map_renderer::t_impl::on_terrain_changed(
    int arg_0,
    t_vector_set<t_map_point_2d, std::less<t_map_point_2d>, std::allocator<t_map_point_2d>> const& arg_1,
    std::map<int, int, std::less<int>, std::allocator<int>> const& arg_2,
    std::map<int, int, std::less<int>, std::allocator<int>> const& arg_3,
    std::map<int, int, std::less<int>, std::allocator<int>> const& arg_4
)
{
    // Body unavailable.
}

// name:A; map symbol; map:28945
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_map_renderer::t_impl::on_terrain_changed_helper(
    t_vector_set<t_map_point_2d, std::less<t_map_point_2d>, std::allocator<t_map_point_2d>> const& arg_0,
    std::map<int, int, std::less<int>, std::allocator<int>> const& arg_1,
    std::map<int, int, std::less<int>, std::allocator<int>> const& arg_2,
    t_clip_list& arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:28946
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_map_renderer::t_impl::on_visibility_changed(
    int arg_0,
    int arg_1,
    t_vector_set<t_visibility_point, std::less<t_visibility_point>, std::allocator<t_visibility_point>> const& arg_2,
    t_vector_set<t_map_point_2d, std::less<t_map_point_2d>, std::allocator<t_map_point_2d>> const& arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28947
VA_CHT_1(0x0070b530, 0x495)
void t_map_renderer::t_impl::record_animating_object_ids_in_rect(t_screen_rect const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28948
VA_CHT_1(0x0070b9d0, 0x1ee)
bool t_map_renderer::t_impl::record_if_animating(int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28949
VA_CHT_1(0x0070bbc0, 0x187)
void t_map_renderer::t_impl::reevaluate_animating_object_ids()
{
    // Body unavailable.
}

// name:A; map symbol; map:28950
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_map_renderer::t_impl::reevaluate_animating_object_ids(
    std::map<int, int, std::less<int>, std::allocator<int>> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:28951
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_map_renderer::t_impl::refresh_terrain(t_clip_list const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:28952
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_map_renderer::t_impl::refresh_terrain(
    t_vector_set<t_map_point_2d, std::less<t_map_point_2d>, std::allocator<t_map_point_2d>> const& arg_0,
    t_clip_list& arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:28953
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_map_renderer::t_impl::remove_animating_object_id(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:28954
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int const* t_map_renderer::t_impl::remove_animating_object_id(int const* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28955
VA_CHT_1(0x0070bd50, 0x2d6)
void t_map_renderer::t_impl::update_shroud_mask(t_screen_rect const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28956
VA_CHT_1(0x0070c030, 0x405)
void t_map_renderer::t_impl::update_terrain_buffer(t_screen_rect const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:28957
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void map_renderer_details::t_internal_map_data::on_adv_object_moved(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:28958
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void map_renderer_details::t_internal_map_data::on_adv_object_moved(
    int arg_0,
    int arg_1,
    t_vector_set<t_map_point_2d, std::less<t_map_point_2d>, std::allocator<t_map_point_2d>> const& arg_2,
    std::map<int, int, std::less<int>, std::allocator<int>> const& arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:28959
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void map_renderer_details::t_internal_map_data::on_adv_object_placed(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:28960
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void map_renderer_details::t_internal_map_data::on_adv_object_placed(
    int arg_0,
    int arg_1,
    t_vector_set<t_map_point_2d, std::less<t_map_point_2d>, std::allocator<t_map_point_2d>> const& arg_2,
    std::map<int, int, std::less<int>, std::allocator<int>> const& arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:28961
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void map_renderer_details::t_internal_map_data::on_adv_object_removed(
    t_abstract_adv_object const& arg_0,
    t_level_map_point_2d const& arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:28962
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void map_renderer_details::t_internal_map_data::on_moving_adv_object(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:28963
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void map_renderer_details::t_internal_map_data::on_multiple_adv_objects_removed()
{
    // Body unavailable.
}

// name:A; map symbol; map:28964
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void map_renderer_details::t_internal_map_data::on_removing_adv_object(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:28965
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void map_renderer_details::t_internal_map_data::on_removing_multiple_adv_objects(
    t_vector_set<int, std::less<int>, std::allocator<int>> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:28966
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void map_renderer_details::t_internal_map_data::on_rock_terrain_changed(
    int arg_0,
    t_vector_set<t_map_point_2d, std::less<t_map_point_2d>, std::allocator<t_map_point_2d>> const& arg_1,
    t_vector_set<int, std::less<int>, std::allocator<int>> const& arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:28967
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void map_renderer_details::t_internal_map_data::on_terrain_changed(
    int arg_0,
    t_vector_set<t_map_point_2d, std::less<t_map_point_2d>, std::allocator<t_map_point_2d>> const& arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:28968
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void map_renderer_details::t_internal_map_data::on_terrain_changed(
    int arg_0,
    t_vector_set<t_map_point_2d, std::less<t_map_point_2d>, std::allocator<t_map_point_2d>> const& arg_1,
    std::map<int, int, std::less<int>, std::allocator<int>> const& arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:28969
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void map_renderer_details::t_internal_map_data::on_visibility_changed(
    int arg_0,
    int arg_1,
    t_vector_set<t_visibility_point, std::less<t_visibility_point>, std::allocator<t_visibility_point>> const& arg_2,
    t_vector_set<t_map_point_2d, std::less<t_map_point_2d>, std::allocator<t_map_point_2d>> const& arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:28970
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void map_renderer_details::t_internal_map_data::refresh()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:28971
VA_CHT_1(0x0070c440, 0x66)
t_map_renderer::t_map_renderer(t_abstract_adventure_map const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:28972
VA_CHT_1(0x0070c4d0, 0x69)
t_map_renderer::t_map_renderer(t_map_renderer_client& arg_0, t_abstract_adventure_map const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:28973
VA_CHT_1(0x0070c540, 0x14)
t_map_renderer::~t_map_renderer()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28974
VA_CHT_1(0x0070c560, 0x255)
int t_map_renderer::adv_object_hit_test_helper(
    t_screen_point const& arg_0,
    t_map_renderer::t_abstract_exclude_func const& arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:28975
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_point t_map_renderer::clamp_to_map(t_screen_point const& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28976
VA_CHT_1(0x0070c7c0, 0xa)
int t_map_renderer::get_team_view() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28977
VA_CHT_1(0x0070c7d0, 0x1cc)
void t_map_renderer::set_team_view(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:28978
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_rect t_map_renderer::get_adv_object_extent(int arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:28979
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_adventure_map const& t_map_renderer::get_adventure_map() const
{
    // Body unavailable.
}

// name:A; map symbol; map:28980
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_map_renderer::get_view_grid() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:28981
VA_CHT_1(0x0070c9a0, 0x7)
int t_map_renderer::get_view_level() const
{
    // Body unavailable.
}

// name:A; map symbol; map:28982
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_map_renderer::get_view_passability() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:28983
VA_CHT_1(0x0070c9b0, 0x15)
t_screen_point t_map_renderer::get_view_pos() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:28984
VA_CHT_1(0x0070c9d0, 0x15)
t_screen_point t_map_renderer::get_view_size() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:28985
VA_CHT_1(0x0070c9f0, 0xae)
void t_map_renderer::refresh(t_abstract_adventure_map const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:28986
VA_CHT_1(0x0070caa0, 0x33)
void t_map_renderer::on_adv_object_moved(t_abstract_adventure_map const& arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:28987
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_map_renderer::on_adv_object_moved(
    t_abstract_adventure_map const& arg_0,
    int arg_1,
    int arg_2,
    t_vector_set<t_map_point_2d, std::less<t_map_point_2d>, std::allocator<t_map_point_2d>> const& arg_3,
    std::map<int, int, std::less<int>, std::allocator<int>> const& arg_4
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:28988
VA_CHT_1(0x0070cae0, 0x33)
void t_map_renderer::on_adv_object_placed(t_abstract_adventure_map const& arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:28989
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_map_renderer::on_adv_object_placed(
    t_abstract_adventure_map const& arg_0,
    int arg_1,
    int arg_2,
    t_vector_set<t_map_point_2d, std::less<t_map_point_2d>, std::allocator<t_map_point_2d>> const& arg_3,
    std::map<int, int, std::less<int>, std::allocator<int>> const& arg_4
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:28990
VA_CHT_1(0x0070cb20, 0x8)
void t_map_renderer::on_adv_object_removed(
    t_abstract_adventure_map const& arg_0,
    t_abstract_adv_object const& arg_1,
    t_level_map_point_2d const& arg_2
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:28991
VA_CHT_1(0x0070cb30, 0x33)
void t_map_renderer::on_moving_adv_object(t_abstract_adventure_map const& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:28992
VA_CHT_1(0x0070cb70, 0x33)
void t_map_renderer::on_multiple_adv_objects_removed(t_abstract_adventure_map const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:28993
VA_CHT_1(0x0070e510, 0x139)
void t_map_renderer::on_removing_adv_object(t_abstract_adventure_map const& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:28994
VA_CHT_1(0x0070eb70, 0x48)
void t_map_renderer::on_removing_multiple_adv_objects(
    t_abstract_adventure_map const& arg_0,
    t_vector_set<int, std::less<int>, std::allocator<int>> const& arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28995
VA_CHT_1(0x0070ef10, 0x31)
void t_map_renderer::on_rock_terrain_changed(
    t_abstract_adventure_map const& arg_0,
    int arg_1,
    t_vector_set<t_map_point_2d, std::less<t_map_point_2d>, std::allocator<t_map_point_2d>> const& arg_2,
    t_vector_set<int, std::less<int>, std::allocator<int>> const& arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28996
VA_CHT_1(0x0070f600, 0x43)
void t_map_renderer::on_terrain_changed(
    t_abstract_adventure_map const& arg_0,
    int arg_1,
    t_vector_set<t_map_point_2d, std::less<t_map_point_2d>, std::allocator<t_map_point_2d>> const& arg_2
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28997
VA_CHT_1(0x0070f980, 0x56)
void t_map_renderer::on_terrain_changed(
    t_abstract_adventure_map const& arg_0,
    int arg_1,
    t_vector_set<t_map_point_2d, std::less<t_map_point_2d>, std::allocator<t_map_point_2d>> const& arg_2,
    std::map<int, int, std::less<int>, std::allocator<int>> const& arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:28998
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_map_renderer::on_visibility_changed(
    t_abstract_adventure_map const& arg_0,
    int arg_1,
    int arg_2,
    t_vector_set<t_visibility_point, std::less<t_visibility_point>, std::allocator<t_visibility_point>> const& arg_3,
    t_vector_set<t_map_point_2d, std::less<t_map_point_2d>, std::allocator<t_map_point_2d>> const& arg_4
)
{
    // Body unavailable.
}

// name:A; map symbol; map:28999
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_map_renderer::move_view(t_screen_point const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:29000
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_map_renderer::move_view(t_screen_point const& arg_0, t_screen_point const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:29001
VA_CHT_1(0x0070f9e0, 0x51)
void t_map_renderer::refresh()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:29002
VA_CHT_1(0x0070fef0, 0x5b)
void t_map_renderer::set_view_grid(bool arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:29003
VA_CHT_1(0x0070ff50, 0xcf)
void t_map_renderer::set_view_level(int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:29004
VA_CHT_1(0x00710020, 0x53)
void t_map_renderer::set_view_passability(bool arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:29005
VA_CHT_1(0x00710080, 0xa1)
bool t_map_renderer::subtile_hit_test(t_screen_point const& arg_0, t_map_point_2d& arg_1) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:29006
VA_CHT_1(0x00710e60, 0xcb)
bool t_map_renderer::tile_hit_test(t_screen_point const& arg_0, t_map_point_2d& arg_1) const
{
    // Body unavailable.
}

// name:A; map symbol; map:29007
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_shared_ptr<t_abstract_bitmap<unsigned short>> t_map_renderer::create_back_buffer(
    t_screen_point const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:29008
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_map_renderer::on_rects_dirtied(std::vector<t_screen_rect, std::allocator<t_screen_rect>> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:29009
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_map_renderer::on_view_moved(int arg_0, t_screen_point const& arg_1, t_screen_point const& arg_2)
{
    // Body unavailable.
}

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:29010
VA_CHT_1(0x00710f30, 0x3d)
void t_map_renderer::enable_animation(bool arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:29011
VA_CHT_1(0x00711f40, 0x1f)
void t_map_renderer::update(t_screen_rect const& arg_0)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:64536; name:B (dyninit; see ledger)
VA_CHT_1(0x00711f60, 0x20)
// map_renderer$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:64538; name:B (dyninit; see ledger)
VA_CHT_1(0x00712300, 0x3f)
// map_renderer$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:64539
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// map_renderer$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:64540
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// map_renderer$tatexit3
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:29012
VA_CHT_1_COMPGEN(0x00703d20, 0x1e, SCALAR_DELETING_DTOR, t_shroud_bitmap)

// name:A; map symbol; map:29013
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_shroud_bitmap)

namespace {

// name:A; map symbol; map:29014
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_shroud_bitmap::~t_shroud_bitmap()
{
    // Body unavailable.
}

// name:A; map symbol; map:29015
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_metatile_map::t_adventure_metatile_map(t_abstract_adventure_map const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:29016
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_metatile_map::t_adventure_map_adapter::t_adventure_map_adapter(
    t_abstract_adventure_map const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:29017
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_metatile_map::t_adventure_map_adapter::~t_adventure_map_adapter()
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:29018
VA_CHT_1_COMPGEN(0x00704430, 0x1e, VECTOR_DELETING_DTOR, t_adventure_metatile_map)

// name:A; map symbol; map:29019
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_adventure_metatile_map)

namespace {

// name:A; map symbol; map:29020
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_metatile_map::~t_adventure_metatile_map()
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:29021
VA_CHT_1_COMPGEN(0x00704460, 0x1e, SCALAR_DELETING_DTOR, map_renderer_details::t_internal_map_data)

// name:A; map symbol; map:29022
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, map_renderer_details::t_internal_map_data)

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:29023
VA_CHT_1(0x00707950, 0x20)
t_vector_set<t_map_renderer*, std::less<t_map_renderer*>, std::allocator<t_map_renderer*>>::~t_vector_set<t_map_renderer*, std::less<t_map_renderer*>, std::allocator<t_map_renderer*>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:29024
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
map_renderer_details::t_internal_map_data::~t_internal_map_data()
{
    // Body unavailable.
}

namespace {

// confidence:D; align-band; retn,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:29025
VA_CHT_1(0x00704780, 0x13a)
t_internal_map_data_map::t_internal_map_data_map()
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:29026
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_internal_map_data_map>::~t_counted_ptr<t_internal_map_data_map>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:29027
VA_CHT_1_COMPGEN(0x007048d0, 0x1e, VECTOR_DELETING_DTOR, t_internal_map_data_map)

// name:A; map symbol; map:29028
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_internal_map_data_map)

namespace {

// name:A; map symbol; map:29029
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_internal_map_data_map::~t_internal_map_data_map()
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:29031
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_point operator<<(t_screen_point const& arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:29032
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_point& t_screen_point::operator<<=(int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:29033
VA_CHT_1(0x00710130, 0x4e)
t_screen_rect operator>>(t_screen_rect const& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:29034
VA_CHT_1(0x0070ea10, 0x43)
t_screen_rect& t_screen_rect::operator>>=(int arg_0)
{
    // Body unavailable.
}

namespace {

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:29035
VA_CHT_1(0x00712340, 0x39)
void wrap_draw(
    t_abstract_bitmap<unsigned short>& arg_0,
    t_screen_point const& arg_1,
    t_bitmap_layer const& arg_2,
    t_screen_point const& arg_3,
    t_screen_point const& arg_4
)
{
    // Body unavailable.
}

// name:A; map symbol; map:29036
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_passability_color_maintainer::t_passability_color_maintainer()
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:29037
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_passability_color_maintainer)

// name:A; map symbol; map:29038
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_passability_color_maintainer)

namespace {

// name:A; map symbol; map:29039
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_passability_color_maintainer::~t_passability_color_maintainer()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:29040
VA_CHT_1(0x007101a0, 0x27)
unsigned char get_visibility_alpha(t_tile_visibility arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:29041
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_1d_to_2d_horizontal_adapter<unsigned char>::~t_bitmap_1d_to_2d_horizontal_adapter<unsigned char>()
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:29042
VA_CHT_1_COMPGEN(0x00706730, 0x1e, SCALAR_DELETING_DTOR, t_map_renderer::t_impl)

// name:A; map symbol; map:29043
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_map_renderer::t_impl)

namespace {

// name:A; map symbol; map:29044
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_border_frame_layers::~t_border_frame_layers()
{
    // Body unavailable.
}

// name:A; map symbol; map:29045
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_margin_texture_layers::~t_margin_texture_layers()
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:29046
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<map_renderer_details::t_internal_map_data>::~t_counted_ptr<map_renderer_details::t_internal_map_data>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:29049
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_map_renderer::t_impl::is_under_fog_of_war(int arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:29050
VA_CHT_1(0x00710de0, 0x16)
t_skill_mastery t_visibility_point::get_anti_stealth() const
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:29051
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_layer const& t_border_frame_layers::get_bottom() const
{
    // Body unavailable.
}

// name:A; map symbol; map:29052
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_layer const& t_border_frame_layers::get_bottom_left() const
{
    // Body unavailable.
}

// name:A; map symbol; map:29053
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_layer const& t_margin_texture_layers::get_bottom() const
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:29054
VA_CHT_1(0x0070f590, 0x68)
int map_renderer_details::t_internal_map_data::get_bottom_margin_point_height(int arg_0, int arg_1) const
{
    // Body unavailable.
}

// name:A; map symbol; map:29055
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
map_renderer_details::t_internal_map_data& t_map_renderer::t_impl::get_internal_map_data() const
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:29056
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_1d<unsigned char>& get_margin_column_shroud_mask()
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; dyninit; see ledger; map:29057
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, get_margin_column_shroud_mask::instance)

namespace {

// name:A; map symbol; map:29058
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_1d<unsigned char>::~t_bitmap_1d<unsigned char>()
{
    // Body unavailable.
}

// name:A; map symbol; map:29059
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_layer const& t_border_frame_layers::get_bottom_right() const
{
    // Body unavailable.
}

// name:A; map symbol; map:29060
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_layer const& t_border_frame_layers::get_left() const
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:29061
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_map_view_cell::t_object_subimage_info const* t_adventure_map_view_cell::object_subimage_begin(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:29062
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_map_view_cell::t_object_subimage_info const* t_adventure_map_view_cell::object_subimage_end(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:29063
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::reverse_iterator<t_adventure_map_view_cell::t_object_subimage_info const*, t_adventure_map_view_cell::t_object_subimage_info, t_adventure_map_view_cell::t_object_subimage_info const&, t_adventure_map_view_cell::t_object_subimage_info const*, int> t_adventure_map_view_cell::object_subimage_rbegin(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:29064
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::reverse_iterator<t_adventure_map_view_cell::t_object_subimage_info const*, t_adventure_map_view_cell::t_object_subimage_info, t_adventure_map_view_cell::t_object_subimage_info const&, t_adventure_map_view_cell::t_object_subimage_info const*, int> t_adventure_map_view_cell::object_subimage_rend(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:29065
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int const* t_adventure_map_view_cell::shadow_begin() const
{
    // Body unavailable.
}

// name:A; map symbol; map:29066
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int const* t_adventure_map_view_cell::shadow_end() const
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:29067
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_layer const& t_border_frame_layers::get_right() const
{
    // Body unavailable.
}

// name:A; map symbol; map:29068
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_shroud_bitmap const& get_shroud_texture()
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; dyninit; see ledger; map:29069
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, get_shroud_texture::instance)

// name:A; map symbol; map:29070
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_renderer::t_impl::t_draw_terrain_map_adapter::t_draw_terrain_map_adapter(t_map_renderer::t_impl& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:29071
VA_CHT_1(0x0070ebc0, 0x6c)
t_map_renderer::t_impl::t_draw_tile_shroud_mask_func::t_draw_tile_shroud_mask_func(
    t_abstract_bitmap<unsigned char>& arg_0,
    t_abstract_adventure_map const& arg_1,
    int arg_2
)
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:29072
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_layer const& t_border_frame_layers::get_top() const
{
    // Body unavailable.
}

// name:A; map symbol; map:29073
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_layer const& t_border_frame_layers::get_top_left() const
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:29074
VA_CHT_1(0x0070a050, 0x21)
t_map_renderer::t_impl::t_draw_tile_passability_func::t_draw_tile_passability_func(
    t_abstract_adventure_map const& arg_0,
    t_abstract_bitmap<unsigned short>& arg_1
)
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:29075
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_layer const& t_margin_texture_layers::get_top() const
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:29076
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int map_renderer_details::t_internal_map_data::get_top_margin_point_height(int arg_0, int arg_1) const
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:29077
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_layer const& t_border_frame_layers::get_top_right() const
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:29078
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_level_map_point_3d::t_level_map_point_3d(t_level_map_point_2d const& arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:29079
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int map_renderer_details::t_internal_map_data::get_bottom_margin_column_height(int arg_0, int arg_1) const
{
    // Body unavailable.
}

// name:A; map symbol; map:29080
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int map_renderer_details::t_internal_map_data::get_top_margin_column_height(int arg_0, int arg_1) const
{
    // Body unavailable.
}

// name:A; map symbol; map:29081
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_clip_list::swap(t_clip_list& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:29082
VA_CHT_1_COMPGEN(0x0070c4b0, 0x1e, SCALAR_DELETING_DTOR, t_map_renderer)

// name:A; map symbol; map:29083
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_map_renderer)

namespace {

// name:A; map symbol; map:29084
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
map_renderer_details::t_internal_map_data* get_internal_map_data_ptr(t_abstract_adventure_map const& arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:29085
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_map_renderer::t_impl::enable_animation(bool arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:29088
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::vector<t_adventure_map_view_cell::t_object_subimage_info, std::allocator<t_adventure_map_view_cell::t_object_subimage_info>> const* t_copy_on_write_ptr<std::vector<t_adventure_map_view_cell::t_object_subimage_info, std::allocator<t_adventure_map_view_cell::t_object_subimage_info>>>::operator->(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:29102
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_vector_set<t_map_renderer*, std::less<t_map_renderer*>, std::allocator<t_map_renderer*>>::t_vector_set<t_map_renderer*, std::less<t_map_renderer*>, std::allocator<t_map_renderer*>>(
    std::less<t_map_renderer*> const& arg_0,
    std::allocator<t_map_renderer*> const& arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:29103
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_renderer* const* t_vector_set<t_map_renderer*, std::less<t_map_renderer*>, std::allocator<t_map_renderer*>>::begin(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:29104
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_renderer* const* t_vector_set<t_map_renderer*, std::less<t_map_renderer*>, std::allocator<t_map_renderer*>>::end(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:29105
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
unsigned int t_vector_set<t_map_renderer*, std::less<t_map_renderer*>, std::allocator<t_map_renderer*>>::size(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:29130
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
unsigned char const* t_abstract_bitmap<unsigned char>::advance_line(unsigned char const* arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:29131
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_vector_set<int, std::less<int>, std::allocator<int>>::clear()
{
    // Body unavailable.
}

// name:A; map symbol; map:29132
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_vector_set<int, std::less<int>, std::allocator<int>>::empty() const
{
    // Body unavailable.
}

// name:A; map symbol; map:29136
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::vector<t_adventure_map_view_cell::t_object_subimage_info, std::allocator<t_adventure_map_view_cell::t_object_subimage_info>> const* t_copy_on_write_ptr<std::vector<t_adventure_map_view_cell::t_object_subimage_info, std::allocator<t_adventure_map_view_cell::t_object_subimage_info>>>::get(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:29141
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void swap(
    std::_Tree<int, std::pair<int const, int>, std::map<int, int, std::less<int>, std::allocator<int>>::_Kfn, std::less<int>, std::allocator<int>>& arg_0,
    std::_Tree<int, std::pair<int const, int>, std::map<int, int, std::less<int>, std::allocator<int>>::_Kfn, std::less<int>, std::allocator<int>>& arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:29230
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_ptr<t_map_renderer::t_impl>::t_owned_ptr<t_map_renderer::t_impl>(t_map_renderer::t_impl* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:29231
VA_CHT_1(0x0070fa40, 0x43)
t_owned_ptr<t_map_renderer::t_impl>::~t_owned_ptr<t_map_renderer::t_impl>()
{
    // Body unavailable.
}

// name:A; map symbol; map:29232
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_renderer::t_impl& t_owned_ptr<t_map_renderer::t_impl>::operator*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:29233
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_renderer::t_impl* t_owned_ptr<t_map_renderer::t_impl>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:29235
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
unsigned int t_vector_set<t_map_renderer*, std::less<t_map_renderer*>, std::allocator<t_map_renderer*>>::erase(
    t_map_renderer* const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:29236
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_renderer* const* t_vector_set<t_map_renderer*, std::less<t_map_renderer*>, std::allocator<t_map_renderer*>>::find(
    t_map_renderer* const& arg_0
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:29237
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::pair<t_map_renderer* const*, bool> t_vector_set<t_map_renderer*, std::less<t_map_renderer*>, std::allocator<t_map_renderer*>>::insert(
    t_map_renderer* const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:29238
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<map_renderer_details::t_internal_map_data>::t_counted_ptr<map_renderer_details::t_internal_map_data>(
    map_renderer_details::t_internal_map_data* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:29239
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
map_renderer_details::t_internal_map_data* t_counted_ptr<map_renderer_details::t_internal_map_data>::get(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:29240
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
map_renderer_details::t_internal_map_data* t_counted_ptr<map_renderer_details::t_internal_map_data>::operator->(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:29241
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
map_renderer_details::t_internal_map_data& t_counted_ptr<map_renderer_details::t_internal_map_data>::operator*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:29242
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_internal_map_data_map>::t_counted_ptr<t_internal_map_data_map>(
    t_counted_ptr<t_internal_map_data_map> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:29243
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_internal_map_data_map>::t_counted_ptr<t_internal_map_data_map>(t_internal_map_data_map* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:29244
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_internal_map_data_map>::t_counted_ptr<t_internal_map_data_map>()
{
    // Body unavailable.
}

// name:A; map symbol; map:29245
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_internal_map_data_map>& t_counted_ptr<t_internal_map_data_map>::operator=(
    t_counted_ptr<t_internal_map_data_map> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:29246
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_internal_map_data_map* t_counted_ptr<t_internal_map_data_map>::operator->() const
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:29247
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void wrap_draw_helper(
    t_abstract_bitmap<unsigned short>& arg_0,
    t_screen_point arg_1,
    t_bitmap_layer const& arg_2,
    t_screen_point arg_3,
    t_screen_point arg_4,
    t_bitmap_layer_draw_to_func arg_5
)
{
    // Body unavailable.
}

// name:A; map symbol; map:29248
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bitmap_layer_draw_to_func::operator()(
    t_bitmap_layer const& arg_0,
    t_screen_rect const& arg_1,
    t_abstract_bitmap<unsigned short>& arg_2,
    t_screen_point const& arg_3
) const
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:29249
VA_CHT_1(0x0070fbc0, 0x32d)
void fill_adventure_tile(
    unsigned char arg_0,
    t_abstract_bitmap<unsigned char>& arg_1,
    t_screen_point const& arg_2,
    t_screen_rect const& arg_3,
    t_quad<int> const& arg_4
)
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:29250
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_1d_to_2d_horizontal_adapter<unsigned char>::t_bitmap_1d_to_2d_horizontal_adapter<unsigned char>(
    t_bitmap_1d<unsigned char>& arg_0
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:29251
VA_CHT_1(0x0070f8c0, 0x52)
t_bitmap_1d<unsigned char>::t_bitmap_1d<unsigned char>(int arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:29252
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
unsigned int t_vector_set<int, std::less<int>, std::allocator<int>>::erase(int const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:29253
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int const* t_vector_set<int, std::less<int>, std::allocator<int>>::erase(int const* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:29254
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int const* t_vector_set<int, std::less<int>, std::allocator<int>>::find(int const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:29255
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_shared_ptr<t_abstract_bitmap<unsigned short>>::t_shared_ptr<t_abstract_bitmap<unsigned short>>(
    t_shared_ptr<t_abstract_bitmap<unsigned short>> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:29256
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_shared_ptr<t_abstract_bitmap<unsigned short>>::t_shared_ptr<t_abstract_bitmap<unsigned short>>()
{
    // Body unavailable.
}

// name:A; map symbol; map:29257
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_shared_ptr<t_abstract_bitmap<unsigned short>>& t_shared_ptr<t_abstract_bitmap<unsigned short>>::operator=(
    t_shared_ptr<t_abstract_bitmap<unsigned short>> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:29258
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_shared_ptr<t_abstract_bitmap<unsigned short>>& t_shared_ptr<t_abstract_bitmap<unsigned short>>::operator=(
    t_abstract_bitmap<unsigned short>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:29259
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_owned_ptr<t_memory_bitmap<unsigned short>>::swap(t_owned_ptr<t_memory_bitmap<unsigned short>>& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:29260
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_ptr<t_memory_bitmap<unsigned char>>::t_owned_ptr<t_memory_bitmap<unsigned char>>(
    t_memory_bitmap<unsigned char>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:29261
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_ptr<t_memory_bitmap<unsigned char>>::~t_owned_ptr<t_memory_bitmap<unsigned char>>()
{
    // Body unavailable.
}

// name:A; map symbol; map:29262
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_memory_bitmap<unsigned char>* t_owned_ptr<t_memory_bitmap<unsigned char>>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:29263
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_owned_ptr<t_memory_bitmap<unsigned char>>::reset(t_memory_bitmap<unsigned char>* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:29264
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_owned_ptr<t_memory_bitmap<unsigned char>>::swap(t_owned_ptr<t_memory_bitmap<unsigned char>>& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:29265
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_memory_bitmap<unsigned char>& t_owned_ptr<t_memory_bitmap<unsigned char>>::operator*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:29266
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_memory_bitmap<unsigned char>* t_owned_ptr<t_memory_bitmap<unsigned char>>::operator->() const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:29271
VA_CHT_1(0x0070d1b0, 0x1355)
t_memory_bitmap<unsigned char>::t_memory_bitmap<unsigned char>(int arg_0, int arg_1)
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:29272
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void bit_blt_horizontal_source(
    t_abstract_bitmap<unsigned char>& arg_0,
    t_screen_point arg_1,
    t_bitmap_1d<unsigned char> const& arg_2,
    int arg_3,
    t_screen_point arg_4
)
{
    // Body unavailable.
}

// name:A; map symbol; map:29273
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void bit_blt_horizontal_source_bottom_right(
    t_abstract_bitmap<unsigned char>& arg_0,
    t_screen_rect const& arg_1,
    t_bitmap_1d<unsigned char> const& arg_2,
    int arg_3,
    t_screen_rect const& arg_4
)
{
    // Body unavailable.
}

// name:A; map symbol; map:29274
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void bit_blt_horizontal_source_bottom_left(
    t_abstract_bitmap<unsigned char>& arg_0,
    t_screen_rect const& arg_1,
    t_bitmap_1d<unsigned char> const& arg_2,
    int arg_3,
    t_screen_rect const& arg_4
)
{
    // Body unavailable.
}

// name:A; map symbol; map:29276
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void bit_blt(
    t_abstract_bitmap<unsigned short>& arg_0,
    t_screen_point arg_1,
    t_abstract_bitmap<unsigned short> const& arg_2,
    t_screen_point arg_3,
    t_screen_point arg_4
)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:29277
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void enumerate_tile_points_within_screen_rect(
    t_map_renderer::t_impl::t_draw_terrain_map_adapter arg_0,
    int arg_1,
    t_screen_rect const& arg_2,
    t_screen_point const& arg_3,
    t_map_renderer::t_impl::t_draw_tile_shroud_mask_func arg_4
)
{
    // Body unavailable.
}

// name:A; map symbol; map:29278
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_point t_map_renderer::t_impl::t_draw_terrain_map_adapter::get_screen_point(
    t_map_point_2d const& arg_0
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:29279
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_map_renderer::t_impl::t_draw_terrain_map_adapter::get_size() const
{
    // Body unavailable.
}

// name:A; map symbol; map:29280
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_quad<t_abstract_tile_vertex const&> t_map_renderer::t_impl::t_draw_terrain_map_adapter::get_tile_vertex_quad(
    t_level_map_point_2d const& arg_0
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:29281
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_point t_map_renderer::t_impl::t_draw_terrain_map_adapter::get_view_size() const
{
    // Body unavailable.
}

// name:A; map symbol; map:29282
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_map_renderer::t_impl::t_draw_terrain_map_adapter::is_valid(t_map_point_2d const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:29283
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_quad<t_abstract_tile_vertex const&>::t_quad<t_abstract_tile_vertex const&>(
    t_quad<t_abstract_adventure_tile_vertex const&> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:29284
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void enumerate_tile_points_within_screen_rect(
    t_map_renderer::t_impl::t_draw_terrain_map_adapter arg_0,
    int arg_1,
    t_screen_rect const& arg_2,
    t_screen_point const& arg_3,
    t_map_renderer::t_impl::t_draw_tile_passability_func arg_4
)
{
    // Body unavailable.
}

// name:A; map symbol; map:29285
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_map_renderer::t_impl::t_draw_tile_passability_func::operator()(
    t_map_renderer::t_impl::t_draw_terrain_map_adapter arg_0,
    t_level_map_point_2d const& arg_1,
    t_screen_point const& arg_2,
    t_screen_rect const& arg_3
) const
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:29286
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void bit_blt_horizontal_source_top_right(
    t_abstract_bitmap<unsigned char>& arg_0,
    t_screen_rect const& arg_1,
    t_bitmap_1d<unsigned char> const& arg_2,
    int arg_3,
    t_screen_rect const& arg_4
)
{
    // Body unavailable.
}

// name:A; map symbol; map:29287
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void bit_blt_horizontal_source_top_left(
    t_abstract_bitmap<unsigned char>& arg_0,
    t_screen_rect const& arg_1,
    t_bitmap_1d<unsigned char> const& arg_2,
    int arg_3,
    t_screen_rect const& arg_4
)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:29288
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void draw_terrain(
    t_map_renderer::t_impl::t_draw_terrain_map_adapter arg_0,
    int arg_1,
    t_screen_rect const& arg_2,
    t_abstract_bitmap<unsigned short>& arg_3,
    t_screen_point const& arg_4,
    bool arg_5
)
{
    // Body unavailable.
}

namespace {

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:29289
VA_CHT_1(0x0070cc00, 0x5a5)
void scroll(t_abstract_bitmap<unsigned short>& arg_0, t_screen_rect const& arg_1, t_screen_point const& arg_2)
{
    // Body unavailable.
}

// name:A; map symbol; map:29290
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void bit_blt(
    t_abstract_bitmap<unsigned char>& arg_0,
    t_screen_point arg_1,
    t_abstract_bitmap<unsigned char> const& arg_2,
    t_screen_point arg_3,
    t_screen_point arg_4
)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:29291
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_point_2d operator|(t_map_point_2d const& arg_0, t_map_point_2d const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:29292
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_point_2d& t_map_point_2d::operator|=(t_map_point_2d const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:29313
VA_CHT_1_COMPGEN(0x00710e00, 0x1e, VECTOR_DELETING_DTOR, "t_bitmap_1d_to_2d_horizontal_adapter<unsigned char>")

// name:A; map symbol; map:29314
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bitmap_1d_to_2d_horizontal_adapter<unsigned char>")

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:29315
VA_CHT_1_COMPGEN(0x00710e20, 0x1e, SCALAR_DELETING_DTOR, "t_memory_bitmap<unsigned char>")

// name:A; map symbol; map:29316
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_memory_bitmap<unsigned char>")

// confidence:D; align-band; retn,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:29317
VA_CHT_1(0x00710e40, 0x1d)
t_memory_bitmap<unsigned char>::~t_memory_bitmap<unsigned char>()
{
    // Body unavailable.
}

// name:A; map symbol; map:29321
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::less<t_map_renderer*> t_vector_set<t_map_renderer*, std::less<t_map_renderer*>, std::allocator<t_map_renderer*>>::key_comp(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:29340
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::pair<t_map_renderer* const*, t_map_renderer* const*> t_vector_set<t_map_renderer*, std::less<t_map_renderer*>, std::allocator<t_map_renderer*>>::equal_range(
    t_map_renderer* const& arg_0
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:29341
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_renderer* const* t_vector_set<t_map_renderer*, std::less<t_map_renderer*>, std::allocator<t_map_renderer*>>::erase(
    t_map_renderer* const* arg_0,
    t_map_renderer* const* arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:29342
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_renderer* const* t_vector_set<t_map_renderer*, std::less<t_map_renderer*>, std::allocator<t_map_renderer*>>::lower_bound(
    t_map_renderer* const& arg_0
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:29343
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<map_renderer_details::t_internal_map_data>::t_counted_ptr<map_renderer_details::t_internal_map_data>(
    t_counted_ptr<map_renderer_details::t_internal_map_data> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:29344
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_bitmap<unsigned char>::t_abstract_bitmap<unsigned char>(
    int arg_0,
    int arg_1,
    int arg_2,
    unsigned char* arg_3
)
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:29345
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
unsigned char const* t_bitmap_1d<unsigned char>::get_data_ptr() const
{
    // Body unavailable.
}

// name:A; map symbol; map:29346
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
unsigned char* t_bitmap_1d<unsigned char>::get_data_ptr()
{
    // Body unavailable.
}

// name:A; map symbol; map:29347
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_bitmap_1d<unsigned char>::get_size() const
{
    // Body unavailable.
}

// name:A; map symbol; map:29348
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bitmap_1d<unsigned char>::init(int arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:29349
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::pair<int const*, int const*> t_vector_set<int, std::less<int>, std::allocator<int>>::equal_range(
    int const& arg_0
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:29350
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int const* t_vector_set<int, std::less<int>, std::allocator<int>>::erase(int const* arg_0, int const* arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:29351
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_shared_ptr<t_abstract_bitmap<unsigned short>>::assign(
    t_abstract_bitmap<unsigned short>* arg_0,
    t_shared_ptr_base const& arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:29352
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_shared_ptr<t_abstract_bitmap<unsigned short>>::construct(t_abstract_bitmap<unsigned short>* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:29354
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_memory_bitmap<unsigned char>::init(int arg_0, int arg_1)
{
    // Body unavailable.
}

namespace {

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:29355
VA_CHT_1(0x00712ce0, 0x14a)
void bit_blt_horizontal_source_bottom_right_helper(
    t_abstract_bitmap<unsigned char>& arg_0,
    t_screen_rect const& arg_1,
    t_bitmap_1d<unsigned char> const& arg_2,
    int arg_3,
    t_screen_rect const& arg_4,
    int arg_5
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:29356
VA_CHT_1(0x00711250, 0x242)
void bit_blt_horizontal_source_bottom_left_helper(
    t_abstract_bitmap<unsigned char>& arg_0,
    t_screen_rect const& arg_1,
    t_bitmap_1d<unsigned char> const& arg_2,
    int arg_3,
    t_screen_rect const& arg_4,
    int arg_5
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:29358
VA_CHT_1(0x00711710, 0x253)
void bit_blt_horizontal_source_top_right_helper(
    t_abstract_bitmap<unsigned char>& arg_0,
    t_screen_rect const& arg_1,
    t_bitmap_1d<unsigned char> const& arg_2,
    int arg_3,
    t_screen_rect const& arg_4,
    int arg_5
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:29359
VA_CHT_1(0x0070f650, 0x264)
void bit_blt_horizontal_source_top_left_helper(
    t_abstract_bitmap<unsigned char>& arg_0,
    t_screen_rect const& arg_1,
    t_bitmap_1d<unsigned char> const& arg_2,
    int arg_3,
    t_screen_rect const& arg_4,
    int arg_5
)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:29360
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
draw_terrain_details::t_draw_tile_func<t_map_renderer::t_impl::t_draw_terrain_map_adapter>::t_draw_tile_func<t_map_renderer::t_impl::t_draw_terrain_map_adapter>(
    t_abstract_bitmap<unsigned short>& arg_0,
    bool arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:29361
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void enumerate_tile_points_within_screen_rect(
    t_map_renderer::t_impl::t_draw_terrain_map_adapter arg_0,
    int arg_1,
    t_screen_rect const& arg_2,
    t_screen_point const& arg_3,
    draw_terrain_details::t_draw_tile_func<t_map_renderer::t_impl::t_draw_terrain_map_adapter> arg_4
)
{
    // Body unavailable.
}

// name:A; map symbol; map:29373
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void draw_terrain_details::t_draw_tile_func<t_map_renderer::t_impl::t_draw_terrain_map_adapter>::operator()(
    t_map_renderer::t_impl::t_draw_terrain_map_adapter arg_0,
    t_level_map_point_2d const& arg_1,
    t_screen_point const& arg_2,
    t_screen_rect const& arg_3
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:29379
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void draw_terrain_details::draw_tile(
    t_map_renderer::t_impl::t_draw_terrain_map_adapter arg_0,
    t_level_map_point_2d const& arg_1,
    t_abstract_bitmap<unsigned short>& arg_2,
    t_screen_point const& arg_3,
    t_screen_rect const& arg_4,
    bool arg_5
)
{
    // Body unavailable.
}

// name:A; map symbol; map:29380
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_tile const& t_map_renderer::t_impl::t_draw_terrain_map_adapter::get_tile(
    t_level_map_point_2d const& arg_0
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:29387
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void draw_terrain_details::draw_tile_layer(
    t_map_renderer::t_impl::t_draw_terrain_map_adapter arg_0,
    t_level_map_point_2d const& arg_1,
    t_terrain_type arg_2,
    int arg_3,
    t_quad<int> const& arg_4,
    t_quad<int> const& arg_5,
    t_abstract_bitmap<unsigned short>& arg_6,
    t_screen_point const& arg_7,
    t_screen_rect const& arg_8
)
{
    // Body unavailable.
}

// name:A; map symbol; map:29388
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_metatile_map const& t_map_renderer::t_impl::t_draw_terrain_map_adapter::get_metatile_map() const
{
    // Body unavailable.
}

// name:A; map symbol; map:29389
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_metatile_map const& map_renderer_details::t_internal_map_data::get_metatile_map() const
{
    // Body unavailable.
}

// name:A; map symbol; map:29390
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void draw_terrain_details::draw_terrain_transitions(
    t_map_renderer::t_impl::t_draw_terrain_map_adapter arg_0,
    t_level_map_point_2d const& arg_1,
    t_abstract_tile const& arg_2,
    t_quad<int> const& arg_3,
    t_quad<int> const& arg_4,
    t_abstract_bitmap<unsigned short>& arg_5,
    t_screen_point const& arg_6,
    t_screen_rect const& arg_7
)
{
    // Body unavailable.
}

// name:A; map symbol; map:29391
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void draw_terrain_details::draw_road(
    t_map_renderer::t_impl::t_draw_terrain_map_adapter arg_0,
    t_level_map_point_2d const& arg_1,
    t_abstract_tile const& arg_2,
    t_quad<int> const& arg_3,
    t_quad<int> const& arg_4,
    t_abstract_bitmap<unsigned short>& arg_5,
    t_screen_point const& arg_6,
    t_screen_rect const& arg_7
)
{
    // Body unavailable.
}

// name:A; dyninit; see ledger; map:29392
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, draw_terrain_details::draw_road::inner_composite_buffer)

// name:A; dyninit; see ledger; map:29393
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, draw_terrain_details::draw_road::composite_mask)

// name:A; dyninit; see ledger; map:29394
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, draw_terrain_details::draw_road::composite_buffer)

// name:A; dyninit; see ledger; map:29395
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, draw_terrain_details::draw_terrain_transitions::composite_buffer)

// name:A; map symbol; map:29401
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_tile_texture const& draw_terrain_details::get_terrain_texture(
    t_map_renderer::t_impl::t_draw_terrain_map_adapter arg_0,
    t_terrain_type arg_1,
    int arg_2,
    t_level_map_point_2d const& arg_3,
    t_map_point_2d const& arg_4,
    unsigned short const*& arg_5
)
{
    // Body unavailable.
}

// name:A; map symbol; map:29402
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void draw_terrain_details::draw_tile_layer(
    t_map_renderer::t_impl::t_draw_terrain_map_adapter arg_0,
    t_level_map_point_2d const& arg_1,
    t_terrain_type arg_2,
    int arg_3,
    t_composite_tile_texture& arg_4,
    t_screen_point const& arg_5,
    t_screen_rect const& arg_6
)
{
    // Body unavailable.
}

// name:A; map symbol; map:29403
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_tile_texture const& draw_terrain_details::get_road_texture(
    t_map_renderer::t_impl::t_draw_terrain_map_adapter arg_0,
    t_road_type arg_1,
    t_level_map_point_2d const& arg_2,
    t_map_point_2d const& arg_3,
    unsigned short const*& arg_4
)
{
    // Body unavailable.
}

// name:A; map symbol; map:29404
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void draw_terrain_details::draw_road_layer(
    t_map_renderer::t_impl::t_draw_terrain_map_adapter arg_0,
    t_level_map_point_2d const& arg_1,
    t_road_type arg_2,
    t_composite_tile_texture& arg_3,
    t_screen_point const& arg_4,
    t_screen_rect const& arg_5
)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:29405
VA_CHT_1_COMPGEN(0x00712f60, 0x8, VECTOR_DELETING_DTOR, t_shroud_bitmap)

// === .rdata (12 symbols) ===

// confidence:A; rtti-name; map:44780
DATA_CHT_1_COMPGEN(0x008e4f6c, "const t_shroud_bitmap::`vftable'{for `t_pixel_mask_viewer'}")

// confidence:B; rtti-order; map:44781
DATA_CHT_1_COMPGEN(0x008e4f78, "const t_shroud_bitmap::`vftable'{for `t_memory_bitmap<unsigned short>'}")

// confidence:A; rtti-name; map:44782
DATA_CHT_1_COMPGEN(0x008e4f80, "const map_renderer_details::t_internal_map_data::`vftable'")

// confidence:A; rtti-name; map:44783
DATA_CHT_1_COMPGEN(0x008e4f88, "const t_adventure_metatile_map::`vftable'")

// confidence:A; rtti-name; map:44784
DATA_CHT_1_COMPGEN(0x008e4f90, "const t_adventure_metatile_map::t_adventure_map_adapter::`vftable'")

// confidence:A; rtti-name; map:44785
DATA_CHT_1_COMPGEN(0x008e4f9c, "const t_internal_map_data_map::`vftable'")

// confidence:A; rtti-name; map:44786
DATA_CHT_1_COMPGEN(0x008e4fa4, "const t_passability_color_maintainer::`vftable'")

// name:A; map symbol; map:44787
DATA_CHT_1(UNACCOUNTED)
// unsigned char const* const `unsigned char get_visibility_alpha(t_tile_visibility)'::`2'::k_visibility_alphas

// confidence:A; rtti-name; map:44788
DATA_CHT_1_COMPGEN(0x008e4fbc, "const t_map_renderer::t_impl::`vftable'")

// confidence:A; rtti-name; map:44789
DATA_CHT_1_COMPGEN(0x008e4fc8, "const t_map_renderer::`vftable'")

// confidence:A; rtti-name; map:44790
DATA_CHT_1_COMPGEN(0x008e4fb4, "const t_bitmap_1d_to_2d_horizontal_adapter<unsigned char>::`vftable'")

// confidence:A; rtti-name; map:44791
DATA_CHT_1_COMPGEN(0x008e4fdc, "const t_memory_bitmap<unsigned char>::`vftable'")

// === .rdata$r (45 symbols) ===

// confidence:A; rtti-col-pointer; type-name=.?AVt_shroud_bitmap@?%C:\Work\game\map_renderer.cpp1898831149@@;vft=4e4f6c;col=50f044;td=5aba68;chd=50f034;offset=20;cdOffset=0;validated-hierarchy; map:53206
DATA_CHT_1_COMPGEN(0x0090f044, "const t_shroud_bitmap::`RTTI Complete Object Locator'{for `t_pixel_mask_viewer'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_pixel_mask_viewer@@;bcd=50efec;pmd=20,-1,0;attributes=9;validated-hierarchy-link; map:53207
DATA_CHT_1_COMPGEN(0x0090efec, "t_pixel_mask_viewer::`RTTI Base Class Descriptor at (20, -1, 0, 9)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_shroud_bitmap@?%C:\Work\game\map_renderer.cpp1898831149@@;bcd=50f004;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53208
DATA_CHT_1_COMPGEN(0x0090f004, "t_shroud_bitmap::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_shroud_bitmap@?%C:\Work\game\map_renderer.cpp1898831149@@;vft=4e4f6c;col=50f044;td=5aba68;chd=50f034;offset=20;cdOffset=0;validated-hierarchy; map:53209
DATA_CHT_1_COMPGEN(0x0090f01c, "t_shroud_bitmap::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_shroud_bitmap@?%C:\Work\game\map_renderer.cpp1898831149@@;vft=4e4f6c;col=50f044;td=5aba68;chd=50f034;offset=20;cdOffset=0;validated-hierarchy; map:53210
DATA_CHT_1_COMPGEN(0x0090f034, "t_shroud_bitmap::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:53211
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_shroud_bitmap::`RTTI Complete Object Locator'{for `t_memory_bitmap<unsigned short>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_internal_map_data@map_renderer_details@@;bcd=50f100;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53212
DATA_CHT_1_COMPGEN(0x0090f100, "map_renderer_details::t_internal_map_data::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_internal_map_data@map_renderer_details@@;vft=4e4f80;col=50f134;td=5abbb4;chd=50f124;offset=0;cdOffset=0;validated-hierarchy; map:53213
DATA_CHT_1_COMPGEN(0x0090f118, "map_renderer_details::t_internal_map_data::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_internal_map_data@map_renderer_details@@;vft=4e4f80;col=50f134;td=5abbb4;chd=50f124;offset=0;cdOffset=0;validated-hierarchy; map:53214
DATA_CHT_1_COMPGEN(0x0090f124, "map_renderer_details::t_internal_map_data::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_internal_map_data@map_renderer_details@@;vft=4e4f80;col=50f134;td=5abbb4;chd=50f124;offset=0;cdOffset=0;validated-hierarchy; map:53215
DATA_CHT_1_COMPGEN(0x0090f134, "const map_renderer_details::t_internal_map_data::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_metatile_map@@;bcd=50f0a0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53216
DATA_CHT_1_COMPGEN(0x0090f0a0, "t_metatile_map::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adventure_metatile_map@?%C:\Work\game\map_renderer.cpp1898831149@@;bcd=50f0b8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53217
DATA_CHT_1_COMPGEN(0x0090f0b8, "t_adventure_metatile_map::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adventure_metatile_map@?%C:\Work\game\map_renderer.cpp1898831149@@;vft=4e4f88;col=50f0ec;td=5abb60;chd=50f0dc;offset=0;cdOffset=0;validated-hierarchy; map:53218
DATA_CHT_1_COMPGEN(0x0090f0d0, "t_adventure_metatile_map::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adventure_metatile_map@?%C:\Work\game\map_renderer.cpp1898831149@@;vft=4e4f88;col=50f0ec;td=5abb60;chd=50f0dc;offset=0;cdOffset=0;validated-hierarchy; map:53219
DATA_CHT_1_COMPGEN(0x0090f0dc, "t_adventure_metatile_map::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_adventure_metatile_map@?%C:\Work\game\map_renderer.cpp1898831149@@;vft=4e4f88;col=50f0ec;td=5abb60;chd=50f0dc;offset=0;cdOffset=0;validated-hierarchy; map:53220
DATA_CHT_1_COMPGEN(0x0090f0ec, "const t_adventure_metatile_map::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adventure_map_adapter@t_adventure_metatile_map@?%C:\Work\game\map_renderer.cpp1898831149@@;bcd=50f058;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53221
DATA_CHT_1_COMPGEN(0x0090f058, "t_adventure_metatile_map::t_adventure_map_adapter::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adventure_map_adapter@t_adventure_metatile_map@?%C:\Work\game\map_renderer.cpp1898831149@@;vft=4e4f90;col=50f08c;td=5abad0;chd=50f07c;offset=0;cdOffset=0;validated-hierarchy; map:53222
DATA_CHT_1_COMPGEN(0x0090f070, "t_adventure_metatile_map::t_adventure_map_adapter::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adventure_map_adapter@t_adventure_metatile_map@?%C:\Work\game\map_renderer.cpp1898831149@@;vft=4e4f90;col=50f08c;td=5abad0;chd=50f07c;offset=0;cdOffset=0;validated-hierarchy; map:53223
DATA_CHT_1_COMPGEN(0x0090f07c, "t_adventure_metatile_map::t_adventure_map_adapter::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_adventure_map_adapter@t_adventure_metatile_map@?%C:\Work\game\map_renderer.cpp1898831149@@;vft=4e4f90;col=50f08c;td=5abad0;chd=50f07c;offset=0;cdOffset=0;validated-hierarchy; map:53224
DATA_CHT_1_COMPGEN(0x0090f08c, "const t_adventure_metatile_map::t_adventure_map_adapter::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$map@PBVt_abstract_adventure_map@@V?$t_counted_ptr@Vt_internal_map_data@map_renderer_details@@@@U?$less@PBVt_abstract_adventure_map@@@std@@V?$allocator@V?$t_counted_ptr@Vt_internal_map_data@map_renderer_details@@@@@4@@std@@;bcd=50f148;pmd=8,-1,0;attributes=0;validated-hierarchy-link; map:53225
DATA_CHT_1_COMPGEN(0x0090f148, "std::map<t_abstract_adventure_map const*, t_counted_ptr<map_renderer_details::t_internal_map_data>, std::less<t_abstract_adventure_map const*>, std::allocator<t_counted_ptr<map_renderer_details::t_internal_map_data>>>::`RTTI Base Class Descriptor at (8, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_internal_map_data_map@?%C:\Work\game\map_renderer.cpp1898831149@@;bcd=50f160;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53226
DATA_CHT_1_COMPGEN(0x0090f160, "t_internal_map_data_map::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_internal_map_data_map@?%C:\Work\game\map_renderer.cpp1898831149@@;vft=4e4f9c;col=50f198;td=5abce0;chd=50f188;offset=0;cdOffset=0;validated-hierarchy; map:53227
DATA_CHT_1_COMPGEN(0x0090f178, "t_internal_map_data_map::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_internal_map_data_map@?%C:\Work\game\map_renderer.cpp1898831149@@;vft=4e4f9c;col=50f198;td=5abce0;chd=50f188;offset=0;cdOffset=0;validated-hierarchy; map:53228
DATA_CHT_1_COMPGEN(0x0090f188, "t_internal_map_data_map::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_internal_map_data_map@?%C:\Work\game\map_renderer.cpp1898831149@@;vft=4e4f9c;col=50f198;td=5abce0;chd=50f188;offset=0;cdOffset=0;validated-hierarchy; map:53229
DATA_CHT_1_COMPGEN(0x0090f198, "const t_internal_map_data_map::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_passability_color_maintainer@?%C:\Work\game\map_renderer.cpp1898831149@@;bcd=50f1ac;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53230
DATA_CHT_1_COMPGEN(0x0090f1ac, "t_passability_color_maintainer::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_passability_color_maintainer@?%C:\Work\game\map_renderer.cpp1898831149@@;vft=4e4fa4;col=50f1e0;td=5abd30;chd=50f1d0;offset=0;cdOffset=0;validated-hierarchy; map:53231
DATA_CHT_1_COMPGEN(0x0090f1c4, "t_passability_color_maintainer::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_passability_color_maintainer@?%C:\Work\game\map_renderer.cpp1898831149@@;vft=4e4fa4;col=50f1e0;td=5abd30;chd=50f1d0;offset=0;cdOffset=0;validated-hierarchy; map:53232
DATA_CHT_1_COMPGEN(0x0090f1d0, "t_passability_color_maintainer::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_passability_color_maintainer@?%C:\Work\game\map_renderer.cpp1898831149@@;vft=4e4fa4;col=50f1e0;td=5abd30;chd=50f1d0;offset=0;cdOffset=0;validated-hierarchy; map:53233
DATA_CHT_1_COMPGEN(0x0090f1e0, "const t_passability_color_maintainer::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_idle_processor@@;bcd=50f240;pmd=0,-1,0;attributes=9;validated-hierarchy-link; map:53234
DATA_CHT_1_COMPGEN(0x0090f240, "t_idle_processor::`RTTI Base Class Descriptor at (0, -1, 0, 9)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_impl@t_map_renderer@@;bcd=50f258;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53235
DATA_CHT_1_COMPGEN(0x0090f258, "t_map_renderer::t_impl::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_impl@t_map_renderer@@;vft=4e4fbc;col=50f28c;td=5abdec;chd=50f27c;offset=0;cdOffset=0;validated-hierarchy; map:53236
DATA_CHT_1_COMPGEN(0x0090f270, "t_map_renderer::t_impl::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_impl@t_map_renderer@@;vft=4e4fbc;col=50f28c;td=5abdec;chd=50f27c;offset=0;cdOffset=0;validated-hierarchy; map:53237
DATA_CHT_1_COMPGEN(0x0090f27c, "t_map_renderer::t_impl::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_impl@t_map_renderer@@;vft=4e4fbc;col=50f28c;td=5abdec;chd=50f27c;offset=0;cdOffset=0;validated-hierarchy; map:53238
DATA_CHT_1_COMPGEN(0x0090f28c, "const t_map_renderer::t_impl::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_map_renderer@@;bcd=50f2a0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53239
DATA_CHT_1_COMPGEN(0x0090f2a0, "t_map_renderer::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_map_renderer@@;vft=4e4fc8;col=50f2d4;td=58e4f0;chd=50f2c4;offset=0;cdOffset=0;validated-hierarchy; map:53240
DATA_CHT_1_COMPGEN(0x0090f2b8, "t_map_renderer::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_map_renderer@@;vft=4e4fc8;col=50f2d4;td=58e4f0;chd=50f2c4;offset=0;cdOffset=0;validated-hierarchy; map:53241
DATA_CHT_1_COMPGEN(0x0090f2c4, "t_map_renderer::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_map_renderer@@;vft=4e4fc8;col=50f2d4;td=58e4f0;chd=50f2c4;offset=0;cdOffset=0;validated-hierarchy; map:53242
DATA_CHT_1_COMPGEN(0x0090f2d4, "const t_map_renderer::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bitmap_1d_to_2d_horizontal_adapter@E@?%C:\Work\game\map_renderer.cpp1898831149@@;bcd=50f1f4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53243
DATA_CHT_1_COMPGEN(0x0090f1f4, "t_bitmap_1d_to_2d_horizontal_adapter<unsigned char>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bitmap_1d_to_2d_horizontal_adapter@E@?%C:\Work\game\map_renderer.cpp1898831149@@;vft=4e4fb4;col=50f22c;td=5abd88;chd=50f21c;offset=0;cdOffset=0;validated-hierarchy; map:53244
DATA_CHT_1_COMPGEN(0x0090f20c, "t_bitmap_1d_to_2d_horizontal_adapter<unsigned char>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bitmap_1d_to_2d_horizontal_adapter@E@?%C:\Work\game\map_renderer.cpp1898831149@@;vft=4e4fb4;col=50f22c;td=5abd88;chd=50f21c;offset=0;cdOffset=0;validated-hierarchy; map:53245
DATA_CHT_1_COMPGEN(0x0090f21c, "t_bitmap_1d_to_2d_horizontal_adapter<unsigned char>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bitmap_1d_to_2d_horizontal_adapter@E@?%C:\Work\game\map_renderer.cpp1898831149@@;vft=4e4fb4;col=50f22c;td=5abd88;chd=50f21c;offset=0;cdOffset=0;validated-hierarchy; map:53246
DATA_CHT_1_COMPGEN(0x0090f22c, "const t_bitmap_1d_to_2d_horizontal_adapter<unsigned char>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_memory_bitmap@E@@;bcd=50f2e8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53247
DATA_CHT_1_COMPGEN(0x0090f2e8, "t_memory_bitmap<unsigned char>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_memory_bitmap@E@@;vft=4e4fdc;col=50f320;td=5abe10;chd=50f310;offset=0;cdOffset=0;validated-hierarchy; map:53248
DATA_CHT_1_COMPGEN(0x0090f300, "t_memory_bitmap<unsigned char>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_memory_bitmap@E@@;vft=4e4fdc;col=50f320;td=5abe10;chd=50f310;offset=0;cdOffset=0;validated-hierarchy; map:53249
DATA_CHT_1_COMPGEN(0x0090f310, "t_memory_bitmap<unsigned char>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_memory_bitmap@E@@;vft=4e4fdc;col=50f320;td=5abe10;chd=50f310;offset=0;cdOffset=0;validated-hierarchy; map:53250
DATA_CHT_1_COMPGEN(0x0090f320, "const t_memory_bitmap<unsigned char>::`RTTI Complete Object Locator'")

// === .data (23 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_shroud_bitmap@?%C:\Work\game\map_renderer.cpp1898831149@@;td=5aba68;validated-header; map:58777
DATA_CHT_1_COMPGEN(0x009aba68, "t_shroud_bitmap `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_internal_map_data@map_renderer_details@@;td=5abbb4;validated-header; map:58778
DATA_CHT_1_COMPGEN(0x009abbb4, "map_renderer_details::t_internal_map_data `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_metatile_map@@;td=5abb3c;validated-header; map:58779
DATA_CHT_1_COMPGEN(0x009abb3c, "t_metatile_map `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_adventure_metatile_map@?%C:\Work\game\map_renderer.cpp1898831149@@;td=5abb60;validated-header; map:58780
DATA_CHT_1_COMPGEN(0x009abb60, "t_adventure_metatile_map `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_adventure_map_adapter@t_adventure_metatile_map@?%C:\Work\game\map_renderer.cpp1898831149@@;td=5abad0;validated-header; map:58781
DATA_CHT_1_COMPGEN(0x009abad0, "t_adventure_metatile_map::t_adventure_map_adapter `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$map@PBVt_abstract_adventure_map@@V?$t_counted_ptr@Vt_internal_map_data@map_renderer_details@@@@U?$less@PBVt_abstract_adventure_map@@@std@@V?$allocator@V?$t_counted_ptr@Vt_internal_map_data@map_renderer_details@@@@@4@@std@@;td=5abbf0;validated-header; map:58782
DATA_CHT_1_COMPGEN(0x009abbf0, "std::map<t_abstract_adventure_map const*, t_counted_ptr<map_renderer_details::t_internal_map_data>, std::less<t_abstract_adventure_map const*>, std::allocator<t_counted_ptr<map_renderer_details::t_internal_map_data>>> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_internal_map_data_map@?%C:\Work\game\map_renderer.cpp1898831149@@;td=5abce0;validated-header; map:58783
DATA_CHT_1_COMPGEN(0x009abce0, "t_internal_map_data_map `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_passability_color_maintainer@?%C:\Work\game\map_renderer.cpp1898831149@@;td=5abd30;validated-header; map:58784
DATA_CHT_1_COMPGEN(0x009abd30, "t_passability_color_maintainer `RTTI Type Descriptor'")

// name:A; map symbol; map:58785
DATA_CHT_1_COMPGEN(UNACCOUNTED, "C:\\\\work\\\\game\\\\map_renderer.cpp")

// confidence:A; rtti-type-name; type-name=.?AVt_impl@t_map_renderer@@;td=5abdec;validated-header; map:58786
DATA_CHT_1_COMPGEN(0x009abdec, "t_map_renderer::t_impl `RTTI Type Descriptor'")

// name:A; map symbol; map:58787
DATA_CHT_1_COMPGEN(UNACCOUNTED, "margin_point_num >= 0&& margin_...")

// name:A; map symbol; map:58788
DATA_CHT_1_COMPGEN(UNACCOUNTED, "level >= 0&& level < m_adventur...")

// name:A; map symbol; map:58789
DATA_CHT_1_COMPGEN(UNACCOUNTED, "m_team_view >= 0")

// name:A; map symbol; map:58790
DATA_CHT_1_COMPGEN(UNACCOUNTED, "margin_column_num >= 0&& margin...")

// name:A; map symbol; map:58791
DATA_CHT_1_COMPGEN(UNACCOUNTED, "source_size.y > 0")

// name:A; map symbol; map:58792
DATA_CHT_1_COMPGEN(UNACCOUNTED, "source_size.x > 0")

// name:A; map symbol; map:58793
DATA_CHT_1_COMPGEN(UNACCOUNTED, "source.get_rect().top == 0")

// name:A; map symbol; map:58794
DATA_CHT_1_COMPGEN(UNACCOUNTED, "source.get_rect().left == 0")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bitmap_1d_to_2d_horizontal_adapter@E@?%C:\Work\game\map_renderer.cpp1898831149@@;td=5abd88;validated-header; map:58795
DATA_CHT_1_COMPGEN(0x009abd88, "t_bitmap_1d_to_2d_horizontal_adapter<unsigned char> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_memory_bitmap@E@@;td=5abe10;validated-header; map:58796
DATA_CHT_1_COMPGEN(0x009abe10, "t_memory_bitmap<unsigned char> `RTTI Type Descriptor'")

// name:A; map symbol; map:58797
DATA_CHT_1_COMPGEN(UNACCOUNTED, "&src !=&dest")

// name:A; map symbol; map:58798
DATA_CHT_1_COMPGEN(UNACCOUNTED, "pitch >= width* sizeof( t_pixel...")

// name:A; map symbol; map:58799
DATA_CHT_1_COMPGEN(UNACCOUNTED, "size >= 0")

// === .bss (3 symbols) ===

namespace {

// name:A; map symbol; map:60277
DATA_CHT_1(UNACCOUNTED)
unsigned short g_trigger_color; // Initial value unavailable.

// name:A; map symbol; map:60278
DATA_CHT_1(UNACCOUNTED)
unsigned short g_impassable_color; // Initial value unavailable.

} // anonymous namespace

// name:A; map symbol; map:60279
DATA_CHT_1(UNACCOUNTED)
std::_Tree<t_abstract_adventure_map const*, std::pair<t_abstract_adventure_map const* const, t_counted_ptr<map_renderer_details::t_internal_map_data>>, std::map<t_abstract_adventure_map const*, t_counted_ptr<map_renderer_details::t_internal_map_data>, std::less<t_abstract_adventure_map const*>, std::allocator<t_counted_ptr<map_renderer_details::t_internal_map_data>>>::_Kfn, std::less<t_abstract_adventure_map const*>, std::allocator<t_counted_ptr<map_renderer_details::t_internal_map_data>>>::_Node*std::_Tree<t_abstract_adventure_map const*, std::pair<t_abstract_adventure_map const* const, t_counted_ptr<map_renderer_details::t_internal_map_data>>, std::map<t_abstract_adventure_map const*, t_counted_ptr<map_renderer_details::t_internal_map_data>, std::less<t_abstract_adventure_map const*>, std::allocator<t_counted_ptr<map_renderer_details::t_internal_map_data>>>::_Kfn, std::less<t_abstract_adventure_map const*>, std::allocator<t_counted_ptr<map_renderer_details::t_internal_map_data>>>::_Nil; // Initial value unavailable.
