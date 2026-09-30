// battlefield_window.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\battlefield_window.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 53/151 (A:31 B:7 C:15); unaccounted 98; skipped std 47.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (124 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:68992; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00569db0, 0x15, STATIC_INIT_DISPATCH, "battlefield_window#1")

// name:C; dyninit; see ledger; map:68993
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "battlefield_window#1")

// confidence:A; dyninit-init; owner-conf-C; map:68994; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00569dd0, 0x15, STATIC_INIT_DISPATCH, "battlefield_window#2")

// name:C; dyninit; see ledger; map:68995
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "battlefield_window#2")

// confidence:A; dyninit-init; owner-conf-C; map:68996; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00569df0, 0x15, STATIC_INIT_DISPATCH, "battlefield_window#3")

// name:C; dyninit; see ledger; map:68997
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "battlefield_window#3")

// confidence:A; dyninit-init; owner-conf-C; map:68998; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00569e10, 0x15, STATIC_INIT_DISPATCH, "battlefield_window#4")

// name:C; dyninit; see ledger; map:68999
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "battlefield_window#4")

// confidence:A; dyninit-init; owner-conf-C; map:69000; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00569e30, 0x10, STATIC_INIT_DISPATCH, "battlefield_window#5")

// name:C; dyninit; see ledger; map:69001
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "battlefield_window#5")

// confidence:A; dyninit-init; owner-conf-C; map:69002; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00569e40, 0x15, STATIC_INIT_DISPATCH, "battlefield_window#6")

// name:C; dyninit; see ledger; map:69003
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "battlefield_window#6")

// confidence:A; dyninit-init; owner-conf-C; map:69004; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00569e60, 0x15, STATIC_INIT_DISPATCH, "battlefield_window#7")

// name:C; dyninit; see ledger; map:69005
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "battlefield_window#7")

namespace {

// name:A; map symbol; map:17760
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int greatest_common_divisor(int arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:17761
VA_CHT_1(0x00569e80, 0x105)
t_bitmap16_scaler::t_bitmap16_scaler(
    t_abstract_bitmap<unsigned short> const& arg_0,
    t_screen_point const& arg_1
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:17762
VA_CHT_1(0x00569f90, 0x253)
std::auto_ptr<t_abstract_bitmap<unsigned short>> t_bitmap16_scaler::operator()()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:17763
VA_CHT_1(0x0056a1f0, 0x128)
void t_bitmap16_scaler::accumulate_src_row(unsigned short const* arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:17764
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bitmap16_scaler::fill_dest_row(unsigned short* arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:17765
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_battle_view_cells::set_size(t_screen_point const& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; vptr; map:17766
VA_CHT_1(0x0056a320, 0x471)
t_battlefield_window::t_battlefield_window(
    t_screen_point const& arg_0,
    t_window* arg_1,
    t_counted_ptr<t_battlefield> arg_2,
    t_battlefield_terrain_map const& arg_3,
    std::vector<t_cached_ptr<t_battlefield_preset_map_in_game>, std::allocator<t_cached_ptr<t_battlefield_preset_map_in_game>>> const& arg_4,
    bool arg_5
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vptr; map:17767
VA_CHT_1(0x0056a970, 0x11b)
t_battlefield_window::~t_battlefield_window()
{
    // Body unavailable.
}

// confidence:C; align-order; map:17768
VA_CHT_1(0x0056aa90, 0x11)
void t_battlefield_window::remove_underlays()
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:69006
VA_CHT_1(0x0056aab0, 0xd3)
static void remove_underlays(t_battlefield& arg_0, t_abstract_bitmap<unsigned short>& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:17769
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_battlefield_window::draw_preset_background_onto(
    std::vector<t_cached_ptr<t_battlefield_preset_map_in_game>, std::allocator<t_cached_ptr<t_battlefield_preset_map_in_game>>> const& arg_0,
    t_abstract_bitmap<unsigned short>* arg_1
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:17770
VA_CHT_1(0x0056ab90, 0x23f)
void t_battlefield_window::invalidate_object(t_abstract_combat_object& arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:69007
VA_CHT_1(0x0056adf0, 0x64)
static void compute_view_rect(t_screen_rect const& arg_0, t_screen_rect& arg_1, t_screen_point const& arg_2)
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:69008
VA_CHT_1(0x0056ae60, 0x15d)
static void update_view_rect(
    t_battlefield& arg_0,
    t_screen_rect const& arg_1,
    t_counted_ptr<t_abstract_combat_object> arg_2,
    t_screen_rect const& arg_3,
    t_battle_view_cells& arg_4
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:69009
VA_CHT_1(0x0056afc0, 0x143)
static void insert_in_draw_order(
    t_battlefield& arg_0,
    t_abstract_combat_object* arg_1,
    t_combat_object_list& arg_2
)
{
    // Body unavailable.
}

// confidence:A; align-order; stable,vslot; map:17771
VA_CHT_1(0x0056b110, 0x21)
std::string t_battlefield_window::get_help_text(t_screen_point arg_0) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:17772
VA_CHT_1(0x0056b270, 0x32d)
void t_battlefield_window::paint(t_paint_surface& arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:69010
VA_CHT_1(0x0056b5a0, 0x9a)
static void create_draw_list(
    t_battlefield& arg_0,
    t_screen_rect const& arg_1,
    t_battle_view_cells const& arg_2,
    t_combat_object_list& arg_3
)
{
    // Body unavailable.
}

// confidence:A; align-order; vslot; map:17773
VA_CHT_1(0x0056b640, 0xb)
void t_battlefield_window::left_button_down(t_mouse_event const& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; vslot; map:17774
VA_CHT_1(0x0056b650, 0xb)
void t_battlefield_window::left_button_up(t_mouse_event const& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; vslot; map:17775
VA_CHT_1(0x0056b660, 0xb)
void t_battlefield_window::right_button_up(t_mouse_event const& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vslot; map:17776
VA_CHT_1(0x0056b670, 0x5b)
void t_battlefield_window::mouse_move(t_mouse_event const& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn; map:17777
VA_CHT_1(0x0056b6d0, 0x72)
void t_battlefield_window::update_cursor()
{
    // Body unavailable.
}

// confidence:C; align-order; map:17778
VA_CHT_1(0x0056ba20, 0x37)
void t_battlefield_window::update_cursor(t_screen_point arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn; map:17779
VA_CHT_1(0x0056ba90, 0x20)
t_combat_object_list& t_battlefield_window::get_objects(t_screen_point const& arg_0)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:69011; name:B (dyninit; see ledger)
VA_CHT_1(0x0056c400, 0x20)
// battlefield_window$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:A; dyninit-tinit; owner-conf-B; map:69013; name:B (dyninit; see ledger)
VA_CHT_1(0x0056c420, 0x20)
// battlefield_window$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:69014
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// battlefield_window$tatexit2
// Function body not reconstructed; signature retained as a comment.

namespace {

// name:A; map symbol; map:17780
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap16_scaler::t_work_pixel::t_work_pixel()
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:17781
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
unsigned short convert_to_16_bit(t_pixel_24 const& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-band; retn; map:17782
VA_CHT_1(0x0056b9d0, 0x16)
void t_battlefield::add_viewer(t_battlefield_window* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:17783
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_battlefield::get_base_height() const
{
    // Body unavailable.
}

namespace {

// confidence:C; align-band; retn; map:17784
VA_CHT_1(0x0056a7f0, 0x65)
std::auto_ptr<t_abstract_bitmap<unsigned short>> scale_bitmap16(
    t_abstract_bitmap<unsigned short> const& arg_0,
    t_screen_point const& arg_1
)
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:17785
VA_CHT_1(0x0056a860, 0x1c)
t_bitmap16_scaler::~t_bitmap16_scaler()
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:A; align-band; retn,stable,vslot; map:17786
VA_CHT_1_COMPGEN(0x0056a880, 0x1e, SCALAR_DELETING_DTOR, t_battlefield_window)

// name:A; map symbol; map:17787
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_battlefield_window)

// name:A; map symbol; map:17788
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_battle_view_cells::t_battle_view_cells()
{
    // Body unavailable.
}

// name:A; map symbol; map:17789
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_battle_view_cells::~t_battle_view_cells()
{
    // Body unavailable.
}

// name:A; map symbol; map:17790
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_battlefield::remove_viewer(t_battlefield_window* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:17791
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_point const& t_abstract_combat_object::get_shadow_screen_point() const
{
    // Body unavailable.
}

// name:A; map symbol; map:17792
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_point const& t_battle_view_cells::get_size() const
{
    // Body unavailable.
}

// name:A; map symbol; map:17793
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_rect const& t_abstract_combat_object::get_shadow_view_rect() const
{
    // Body unavailable.
}

// name:A; map symbol; map:17794
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_rect const& t_abstract_combat_object::get_view_rect() const
{
    // Body unavailable.
}

// confidence:C; align-band; retn; map:17795
VA_CHT_1(0x0056b750, 0x2b)
void t_abstract_combat_object::set_shadow_view_rect(t_screen_rect const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:17796
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_abstract_combat_object::set_view_rect(t_screen_rect const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:17797
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool operator!=(t_screen_rect const& arg_0, t_screen_rect const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:17798
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool operator==(t_screen_rect const& arg_0, t_screen_rect const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:17799
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_object_list& t_battle_view_cells::get(t_screen_point const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:17800
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::string t_battlefield::get_help_text() const
{
    // Body unavailable.
}

// name:A; map symbol; map:17801
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_abstract_combat_object::set_on_draw_list(bool arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:17802
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_paint_surface::draw(t_abstract_bitmap<unsigned short> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:17803
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_abstract_combat_object::is_on_draw_list() const
{
    // Body unavailable.
}

// name:A; map symbol; map:17804
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_object_list const& t_battle_view_cells::get(t_screen_point const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:17805
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_point operator>>(t_screen_point const& arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:17806
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_point& t_screen_point::operator>>=(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:17807
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_abstract_bitmap<unsigned short>::get_height() const
{
    // Body unavailable.
}

// name:A; map symbol; map:17808
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_abstract_bitmap<unsigned short>::get_width() const
{
    // Body unavailable.
}

// name:A; map symbol; map:17843
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_battlefield>::t_counted_ptr<t_battlefield>()
{
    // Body unavailable.
}

// name:A; map symbol; map:17844
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_battlefield>& t_counted_ptr<t_battlefield>::operator=(
    t_counted_ptr<t_battlefield> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17845
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_battlefield* t_counted_ptr<t_battlefield>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:17846
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_battlefield& t_counted_ptr<t_battlefield>::operator*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:17847
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_ptr<t_abstract_bitmap<unsigned short>>::t_owned_ptr<t_abstract_bitmap<unsigned short>>(
    t_abstract_bitmap<unsigned short>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17848
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_ptr<t_abstract_bitmap<unsigned short>>::~t_owned_ptr<t_abstract_bitmap<unsigned short>>()
{
    // Body unavailable.
}

// name:A; map symbol; map:17849
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_bitmap<unsigned short>* t_owned_ptr<t_abstract_bitmap<unsigned short>>::get() const
{
    // Body unavailable.
}

// confidence:C; align-band; retn; map:17850
VA_CHT_1(0x0056baf0, 0x11a)
void t_owned_ptr<t_abstract_bitmap<unsigned short>>::reset(t_abstract_bitmap<unsigned short>* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:17851
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_bitmap<unsigned short>& t_owned_ptr<t_abstract_bitmap<unsigned short>>::operator*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:17852
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_ptr<t_abstract_bitmap<unsigned short>>& t_owned_ptr<t_abstract_bitmap<unsigned short>>::operator=(
    std::auto_ptr<t_abstract_bitmap<unsigned short>> arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17853
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_memory_bitmap<unsigned short>::t_memory_bitmap<unsigned short>(int arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:17854
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_memory_bitmap<unsigned short>::~t_memory_bitmap<unsigned short>()
{
    // Body unavailable.
}

// name:A; map symbol; map:17855
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void draw_terrain(
    t_battlefield_terrain_map const& arg_0,
    int arg_1,
    t_screen_rect const& arg_2,
    t_abstract_bitmap<unsigned short>& arg_3,
    t_screen_point const& arg_4,
    bool arg_5
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17856
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_bitmap<unsigned short>& t_shared_ptr<t_abstract_bitmap<unsigned short>>::operator*() const
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:17866
VA_CHT_1_COMPGEN(0x0056be00, 0x1e, SCALAR_DELETING_DTOR, "t_memory_bitmap<unsigned short>")

// name:A; map symbol; map:17867
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_memory_bitmap<unsigned short>")

// name:A; map symbol; map:17868
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_combat_object_list)

// name:A; map symbol; map:17870
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_memory_bitmap<unsigned short>::init(int arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:17871
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
draw_terrain_details::t_draw_tile_func<t_battlefield_terrain_map const&>::t_draw_tile_func<t_battlefield_terrain_map const&>(
    t_abstract_bitmap<unsigned short>& arg_0,
    bool arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17872
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void enumerate_tile_points_within_screen_rect(
    t_battlefield_terrain_map const& arg_0,
    int arg_1,
    t_screen_rect const& arg_2,
    t_screen_point const& arg_3,
    draw_terrain_details::t_draw_tile_func<t_battlefield_terrain_map const&> arg_4
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17873
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void draw_terrain_details::t_draw_tile_func<t_battlefield_terrain_map const&>::operator()(
    t_battlefield_terrain_map const& arg_0,
    t_level_map_point_2d const& arg_1,
    t_screen_point const& arg_2,
    t_screen_rect const& arg_3
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:17874
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_quad<t_abstract_tile_vertex const&>::t_quad<t_abstract_tile_vertex const&>(
    t_quad<t_battlefield_terrain_tile_vertex const&> const& arg_0
)
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:17875
VA_CHT_1(0x0056d090, 0x13e)
void draw_terrain_details::draw_tile(
    t_battlefield_terrain_map const& arg_0,
    t_level_map_point_2d const& arg_1,
    t_abstract_bitmap<unsigned short>& arg_2,
    t_screen_point const& arg_3,
    t_screen_rect const& arg_4,
    bool arg_5
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17876
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_quad<int>::t_quad<int>(int arg_0, int arg_1, int arg_2, int arg_3)
{
    // Body unavailable.
}

// name:A; map symbol; map:17877
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void draw_terrain_details::draw_tile_layer(
    t_battlefield_terrain_map const& arg_0,
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

// name:A; map symbol; map:17878
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_metatile_map::t_tile_info::get_intersecting_metatile_count() const
{
    // Body unavailable.
}

// name:A; map symbol; map:17879
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_point_2d t_metatile_map::t_tile_info::get_intersecting_metatile_point(int arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:17880
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool draw_terrain_details::is_terrain_type_overlapped(t_terrain_type arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:17881
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_metatile_map::t_tile_info::t_point& t_owned_array<t_metatile_map::t_tile_info::t_point>::operator[](
    int arg_0
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:17882
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void draw_terrain_details::draw_terrain_transitions(
    t_battlefield_terrain_map const& arg_0,
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

// name:A; map symbol; map:17883
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_transition_mask::get_bits() const
{
    // Body unavailable.
}

// confidence:C; align-band; retn; map:17884
VA_CHT_1(0x0056c440, 0x355)
void draw_terrain_details::draw_road(
    t_battlefield_terrain_map const& arg_0,
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

// name:A; map symbol; map:17885
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_composite_transition_mask::t_composite_transition_mask()
{
    // Body unavailable.
}

// name:A; map symbol; map:17886
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
unsigned long& t_composite_transition_mask::get_column_mask(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:17887
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
unsigned long t_transition_mask::get_column_mask(int arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:17888
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
unsigned char const* t_transition_mask::get_column(int arg_0) const
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:17890
VA_CHT_1(0x0056cd30, 0x32a)
void fill_adventure_tile(
    unsigned short arg_0,
    t_abstract_bitmap<unsigned short>& arg_1,
    t_screen_point const& arg_2,
    t_screen_rect const& arg_3,
    t_quad<int> const& arg_4
)
{
    // Body unavailable.
}

// name:A; dyninit; see ledger; map:17891
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, draw_terrain_details::draw_road::inner_composite_buffer)

// name:A; dyninit; see ledger; map:17892
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, draw_terrain_details::draw_road::composite_mask)

// name:A; dyninit; see ledger; map:17893
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, draw_terrain_details::draw_road::composite_buffer)

// name:A; dyninit; see ledger; map:17894
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, draw_terrain_details::draw_terrain_transitions::composite_buffer)

// name:A; map symbol; map:17895
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_composite_tile_texture::~t_composite_tile_texture()
{
    // Body unavailable.
}

// name:A; map symbol; map:17896
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_tile_texture const& draw_terrain_details::get_terrain_texture(
    t_battlefield_terrain_map const& arg_0,
    t_terrain_type arg_1,
    int arg_2,
    t_level_map_point_2d const& arg_3,
    t_map_point_2d const& arg_4,
    unsigned short const*& arg_5
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17897
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_metatile_map::t_metatile_info::get_texture_num(t_terrain_type arg_0, int arg_1) const
{
    // Body unavailable.
}

// name:A; map symbol; map:17898
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_point_2d const& t_metatile_map::t_metatile_info::get_offset() const
{
    // Body unavailable.
}

// name:A; map symbol; map:17899
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_tile_texture const& t_metatile_texture_base::get_adventure_tile_texture(
    t_map_point_2d const& arg_0
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:17900
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
unsigned short const* t_metatile_texture::get_palette() const
{
    // Body unavailable.
}

// name:A; map symbol; map:17902
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void draw_terrain_details::draw_tile_layer(
    t_battlefield_terrain_map const& arg_0,
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

// confidence:C; align-band; retn,stable; map:17903
VA_CHT_1(0x0056d1d0, 0x11a)
t_adventure_tile_texture const& draw_terrain_details::get_road_texture(
    t_battlefield_terrain_map const& arg_0,
    t_road_type arg_1,
    t_level_map_point_2d const& arg_2,
    t_map_point_2d const& arg_3,
    unsigned short const*& arg_4
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17904
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_metatile_map::t_metatile_info::get_texture_num(t_road_type arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:17905
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void draw_terrain_details::draw_road_layer(
    t_battlefield_terrain_map const& arg_0,
    t_level_map_point_2d const& arg_1,
    t_road_type arg_2,
    t_composite_tile_texture& arg_3,
    t_screen_point const& arg_4,
    t_screen_rect const& arg_5
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17906
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cached_ptr<t_metatile_texture>::~t_cached_ptr<t_metatile_texture>()
{
    // Body unavailable.
}

// name:A; map symbol; map:17907
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_metatile_texture& t_cached_ptr<t_metatile_texture>::operator*() const
{
    // Body unavailable.
}

// === .rdata (3 symbols) ===

// confidence:A; rtti-name; map:43716
DATA_CHT_1_COMPGEN(0x008d7544, "const t_battlefield_window::`vftable'")

// confidence:A; rtti-name; map:43717
DATA_CHT_1_COMPGEN(0x008d753c, "const t_memory_bitmap<unsigned short>::`vftable'")

// name:A; map symbol; map:43718
DATA_CHT_1(UNACCOUNTED)
// bool const* const `bool draw_terrain_details::is_terrain_type_overlapped(t_terrain_type)'::`2'::k_terrain_type_overlapped_array

// === .rdata$r (8 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_battlefield_window@@;bcd=5013e4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50187
DATA_CHT_1_COMPGEN(0x009013e4, "t_battlefield_window::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_battlefield_window@@;vft=4d7544;col=501420;td=59546c;chd=501410;offset=0;cdOffset=0;validated-hierarchy; map:50188
DATA_CHT_1_COMPGEN(0x009013fc, "t_battlefield_window::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_battlefield_window@@;vft=4d7544;col=501420;td=59546c;chd=501410;offset=0;cdOffset=0;validated-hierarchy; map:50189
DATA_CHT_1_COMPGEN(0x00901410, "t_battlefield_window::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_battlefield_window@@;vft=4d7544;col=501420;td=59546c;chd=501410;offset=0;cdOffset=0;validated-hierarchy; map:50190
DATA_CHT_1_COMPGEN(0x00901420, "const t_battlefield_window::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_memory_bitmap@G@@;bcd=501398;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50191
DATA_CHT_1_COMPGEN(0x00901398, "t_memory_bitmap<unsigned short>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_memory_bitmap@G@@;vft=4d753c;col=5013d0;td=595448;chd=5013c0;offset=0;cdOffset=0;validated-hierarchy; map:50192
DATA_CHT_1_COMPGEN(0x009013b0, "t_memory_bitmap<unsigned short>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_memory_bitmap@G@@;vft=4d753c;col=5013d0;td=595448;chd=5013c0;offset=0;cdOffset=0;validated-hierarchy; map:50193
DATA_CHT_1_COMPGEN(0x009013c0, "t_memory_bitmap<unsigned short>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_memory_bitmap@G@@;vft=4d753c;col=5013d0;td=595448;chd=5013c0;offset=0;cdOffset=0;validated-hierarchy; map:50194
DATA_CHT_1_COMPGEN(0x009013d0, "const t_memory_bitmap<unsigned short>::`RTTI Complete Object Locator'")

// === .data (16 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_battlefield_window@@;td=59546c;validated-header; map:58049
DATA_CHT_1_COMPGEN(0x0099546c, "t_battlefield_window `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_memory_bitmap@G@@;td=595448;validated-header; map:58050
DATA_CHT_1_COMPGEN(0x00995448, "t_memory_bitmap<unsigned short> `RTTI Type Descriptor'")

// name:A; map symbol; map:58051
DATA_CHT_1_COMPGEN(UNACCOUNTED, "metatile_num >= 0&& metatile_nu...")

// name:A; map symbol; map:58052
DATA_CHT_1_COMPGEN(UNACCOUNTED, "C:\\\\work\\\\game\\\\metatile_map.h")

// name:A; map symbol; map:58053
DATA_CHT_1_COMPGEN(UNACCOUNTED, "C:\\\\work\\\\game\\\\draw_terrain.h")

// name:A; map symbol; map:58054
DATA_CHT_1_COMPGEN(UNACCOUNTED, "mask.get_bits() == 1")

// name:A; map symbol; map:58055
DATA_CHT_1_COMPGEN(UNACCOUNTED, "transition_road_type != k_road_n...")

// name:A; map symbol; map:58056
DATA_CHT_1_COMPGEN(UNACCOUNTED, "column >= 0&& column < k_advent...")

// name:A; map symbol; map:58057
DATA_CHT_1_COMPGEN(UNACCOUNTED, "C:\\\\work\\\\game\\\\draw_adventure_tile...")

// name:A; map symbol; map:58058
DATA_CHT_1_COMPGEN(UNACCOUNTED, "is_normalized( clip_rect )")

// name:A; map symbol; map:58059
DATA_CHT_1_COMPGEN(UNACCOUNTED, "terrain_subtype >= 0&& terrain_...")

// name:A; map symbol; map:58060
DATA_CHT_1_COMPGEN(UNACCOUNTED, "pos.column >= 0&& pos.column < ...")

// name:A; map symbol; map:58061
DATA_CHT_1_COMPGEN(UNACCOUNTED, "pos.row >= 0&& pos.row < k_meta...")

// name:A; map symbol; map:58062
DATA_CHT_1_COMPGEN(UNACCOUNTED, "C:\\\\work\\\\game\\\\metatile_texture.h")

// name:A; map symbol; map:58063
DATA_CHT_1_COMPGEN(UNACCOUNTED, "road_type != k_road_none")

// name:A; map symbol; map:58064
DATA_CHT_1_COMPGEN(UNACCOUNTED, "road_type >= 0&& road_type < k_...")
