// adventure_object.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\adventure_object.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 81/196 (A:52 B:11 C:18); unaccounted 115; skipped std 9.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (142 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:69812; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x004e4fc0, 0x15, STATIC_INIT_DISPATCH, "adventure_object#1")

// name:C; dyninit; see ledger; map:69813
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adventure_object#1")

// confidence:A; align-order; retn,stable,vptr; map:11886
VA_CHT_1(0x004e4fe0, 0xdf)
t_adventure_object::t_adventure_object()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:11887
VA_CHT_1(0x004e50c0, 0x97)
t_adventure_object::~t_adventure_object()
{
    // Body unavailable.
}

// name:A; map symbol; map:11888
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::auto_ptr<t_abstract_adv_object> t_adventure_object::clone() const
{
    // Body unavailable.
}

// name:A; map symbol; map:11889
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adventure_object::activate_trigger(
    t_army* arg_0,
    t_adv_map_point const& arg_1,
    t_direction arg_2,
    t_adventure_frame* arg_3
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:11890
VA_CHT_1(0x004e5160, 0x4)
bool t_adventure_object::is_event_recordable() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:11891
VA_CHT_1(0x004e5170, 0xa)
void t_adventure_object::set_event_recordable(bool arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:11892
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::string t_adventure_object::get_balloon_help() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:11893
VA_CHT_1(0x004e5180, 0x1b)
void t_adventure_object::initialize(t_adventure_map& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:11894
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adventure_object::is_bridge() const
{
    // Body unavailable.
}

// name:A; map symbol; map:11895
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adventure_object::is_ramp() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:11896
VA_CHT_1(0x004e51a0, 0x16e)
void t_adventure_object::place(t_adventure_map& arg_0, t_adv_map_point const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:11897
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adventure_object::preplacement(t_adventure_map& arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:11898
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adventure_object::destroy()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:11899
VA_CHT_1(0x004e5310, 0x17)
void t_adventure_object::on_adventure_map_destruction()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:11900
VA_CHT_1(0x004e5330, 0xec)
void t_adventure_object::on_removed()
{
    // Body unavailable.
}

// name:A; map symbol; map:11901
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_adventure_object::get_scouting_range() const
{
    // Body unavailable.
}

// name:A; map symbol; map:11902
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_adventure_object::get_version() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:11903
VA_CHT_1(0x004e5420, 0x43)
void t_adventure_object::on_move_begin()
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:11904
VA_CHT_1(0x004e5470, 0x46)
void t_adventure_object::on_move_end()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:11905
VA_CHT_1(0x004e54c0, 0x24f)
void t_adventure_object::move(t_adv_map_point const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:11906
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adventure_object::is_triggered_by(t_creature_array const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:11907
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adventure_object::blocks_army(t_creature_array const& arg_0, t_path_search_type arg_1) const
{
    // Body unavailable.
}

// name:A; map symbol; map:11908
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adventure_object::left_double_click(t_mouse_event const& arg_0, t_adventure_frame* arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:11909
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adventure_object::right_click(t_mouse_event const& arg_0, t_adventure_frame* arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:11910
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adventure_object::update_state()
{
    // Body unavailable.
}

// name:A; map symbol; map:11911
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adventure_object::preprocess_new_day()
{
    // Body unavailable.
}

// name:A; map symbol; map:11912
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adventure_object::process_new_day()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:11913
VA_CHT_1(0x004e5710, 0xba)
bool t_adventure_object::get_trigger_cell(t_adv_map_point& arg_0) const
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:11914
VA_CHT_1(0x004e57d0, 0x285)
bool t_adventure_object::scan_adjacent_spaces(
    t_handler_3<t_adv_map_point const&, t_adv_map_point const&, bool&> arg_0,
    t_adv_map_point& arg_1
) const
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:11915
VA_CHT_1(0x004e5a60, 0x94)
bool t_adventure_object::find_adjacent_space(
    t_adv_map_point& arg_0,
    t_creature_array const& arg_1,
    t_handler_2<t_adv_map_point const&, bool&> arg_2
) const
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:11916
VA_CHT_1(0x004e5b00, 0x1d5)
bool t_adventure_object::find_adjacent_space(
    t_adv_map_point& arg_0,
    t_creature_array const& arg_1,
    bool arg_2,
    t_handler_2<t_adv_map_point const&, bool&> arg_3
) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:69814
VA_CHT_1(0x004e5ce0, 0xf0)
static void find_adjacent_space_helper(
    t_adv_map_point const& arg_0,
    bool& arg_1,
    t_find_adjacent_space_helper_data& arg_2
)
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:11917
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_find_nearby_space_scanner::find_nearby_space(
    t_adv_map_point& arg_0,
    t_adventure_path_finder& arg_1,
    t_creature_array const& arg_2
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:11918
VA_CHT_1(0x004e5df0, 0x12a)
void t_find_nearby_space_scanner::pathfinder_callback(t_adventure_path_point const& arg_0, bool& arg_1)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:B; align-order; retn,stable; map:11919
VA_CHT_1(0x004e5f20, 0x2c2)
bool t_adventure_object::find_nearby_space(t_adv_map_point& arg_0, t_creature_array const& arg_1) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:11920
VA_CHT_1(0x004e61f0, 0x20)
t_bitmap_cursor const& t_adventure_object::get_cursor(
    t_adventure_map_window const& arg_0,
    t_army const* arg_1
) const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:11921
VA_CHT_1(0x004e6210, 0xf)
t_adventure_map_window* t_adventure_object::get_map_window() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:11922
VA_CHT_1(0x004e6220, 0x1a)
t_adventure_frame* t_adventure_object::get_adventure_frame() const
{
    // Body unavailable.
}

// confidence:A; align-order; stable,vslot; map:11923
VA_CHT_1(0x004e6240, 0x8)
t_adventure_ai const* t_adventure_object::get_ai() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:11924
VA_CHT_1(0x004e6250, 0x4)
t_adventure_map* t_adventure_object::get_map() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:11925
VA_CHT_1(0x004e6260, 0x18)
void t_adventure_object::float_object()
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:11926
VA_CHT_1(0x004e6280, 0x18)
void t_adventure_object::sink_object()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:11927
VA_CHT_1(0x004e62a0, 0x40)
bool t_adventure_object::read_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_progress_handler* arg_1
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:11928
VA_CHT_1(0x004e62e0, 0x4)
bool t_adventure_object::is_removable() const
{
    // Body unavailable.
}

// name:A; map symbol; map:11929
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adventure_object::uses_bridge_heights() const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:11930
VA_CHT_1(0x004e62f0, 0x3af)
void t_adventure_object::mark_visibility(
    int arg_0,
    t_map_segment_overlay<t_tile_visibility_data>& arg_1
) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:11931
VA_CHT_1(0x004e66a0, 0x1e8)
void t_adventure_object::on_owner_changed(int arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:11932
VA_CHT_1(0x004e6890, 0x132)
void t_adventure_object::on_scouting_range_changed(int arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:11933
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adventure_object::process_timed_events(t_adventure_map& arg_0, bool arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:11934
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adventure_object::process_continuous_events(t_adventure_map& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:11935
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adventure_object::process_triggerable_events(t_adventure_map& arg_0, std::string const& arg_1)
{
    // Body unavailable.
}

// confidence:C; align-order; retn; map:11936
VA_CHT_1(0x004e69d0, 0x29)
bool t_adventure_object::is_under_fog_of_war(int arg_0) const
{
    // Body unavailable.
}

// confidence:C; align-order; retn; map:11937
VA_CHT_1(0x004e6a00, 0x66)
bool t_adventure_object::is_under_shroud(int arg_0) const
{
    // Body unavailable.
}

// confidence:C; align-order; retn; map:11938
VA_CHT_1(0x004e6d80, 0xbb)
bool t_adventure_object::hidden_by_fog_of_war(int arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:11939
VA_CHT_1(0x004e6e40, 0x57)
bool t_adventure_object::hidden_by_shroud(int arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:11940
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adventure_object::pathing_destination_query(
    t_adventure_path_point const& arg_0,
    t_adventure_path_finder& arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:11941
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_object* t_adventure_object::get_adventure_object()
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:11942
VA_CHT_1(0x004e6ea0, 0xd)
void t_adventure_object::on_begin_turn()
{
    // Body unavailable.
}

// name:A; map symbol; map:11943
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adventure_object::on_end_turn()
{
    // Body unavailable.
}

// name:A; map symbol; map:11944
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_object_icon_type t_adventure_object::get_icon_type() const
{
    // Body unavailable.
}

// name:A; map symbol; map:11945
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adventure_object::on_combat_end(
    t_army* arg_0,
    t_combat_result arg_1,
    t_creature_array* arg_2,
    t_adventure_frame* arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11946
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adventure_object::trigger_event(t_army& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:11947
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_adventure_object::get_attack_range() const
{
    // Body unavailable.
}

// name:A; map symbol; map:11948
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_skill_mastery t_adventure_object::get_anti_stealth_level() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn; map:11949
VA_CHT_1(0x004e6f80, 0x58)
t_skill_mastery t_adventure_object::get_information_level() const
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:69815; name:B (dyninit; see ledger)
VA_CHT_1(0x004e7010, 0x20)
// adventure_object$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:A; dyninit-tinit; owner-conf-B; map:69817; name:B (dyninit; see ledger)
VA_CHT_1(0x004e7030, 0x5c)
// adventure_object$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:69818
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adventure_object$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:69819
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adventure_object$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:69820
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adventure_object$tatexit4
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:11950
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
unsigned int t_adventure_map::get_new_global_adventure_id()
{
    // Body unavailable.
}

// name:A; map symbol; map:11951
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_vector_set<t_visibility_point, std::less<t_visibility_point>, std::allocator<t_visibility_point>>::~t_vector_set<t_visibility_point, std::less<t_visibility_point>, std::allocator<t_visibility_point>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:11952
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_adv_map_point const&, bool&>::t_handler_2<t_adv_map_point const&, bool&>(
    t_handler_2<t_adv_map_point const&, bool&> const& arg_0
)
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:11953
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_find_adjacent_space_helper_data::t_find_adjacent_space_helper_data()
{
    // Body unavailable.
}

// name:A; map symbol; map:11954
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_find_adjacent_space_helper_data::~t_find_adjacent_space_helper_data()
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:11955
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_adv_map_point const&, bool&>& t_handler_2<t_adv_map_point const&, bool&>::operator=(
    t_handler_2<t_adv_map_point const&, bool&> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11956
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_3<t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>::~t_handler_3<t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:11957
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_3<t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>::t_handler_3<t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>(
    t_handler_3<t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11958
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_3<t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>>::~t_counted_ptr<t_handler_base_3<t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>>(

)
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:11959
VA_CHT_1(0x004e5dd0, 0x17)
t_adventure_map* t_adventure_enemy_marker::get_map() const
{
    // Body unavailable.
}

// name:A; map symbol; map:11960
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adventure_map::float_object(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:11961
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adventure_map::sink_object(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:11962
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_tile_visibility_data::t_tile_visibility_data(t_skill_mastery arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:11963
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_handler_3<t_adv_map_point const&, t_adv_map_point const&, bool&>::operator()(
    t_adv_map_point const& arg_0,
    t_adv_map_point const& arg_1,
    bool& arg_2
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:11965
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_vector_set<t_visibility_point, std::less<t_visibility_point>, std::allocator<t_visibility_point>>::t_vector_set<t_visibility_point, std::less<t_visibility_point>, std::allocator<t_visibility_point>>(
    std::less<t_visibility_point> const& arg_0,
    std::allocator<t_visibility_point> const& arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11966
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_vector_set<t_visibility_point, std::less<t_visibility_point>, std::allocator<t_visibility_point>>::clear(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:11967
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_vector_set<t_visibility_point, std::less<t_visibility_point>, std::allocator<t_visibility_point>>::empty(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:11974
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_2<t_adv_map_point const&, bool&>>::t_counted_ptr<t_handler_base_2<t_adv_map_point const&, bool&>>(
    t_counted_ptr<t_handler_base_2<t_adv_map_point const&, bool&>> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11975
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_2<t_adv_map_point const&, bool&>>& t_counted_ptr<t_handler_base_2<t_adv_map_point const&, bool&>>::operator=(
    t_counted_ptr<t_handler_base_2<t_adv_map_point const&, bool&>> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11976
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_3<t_adv_map_point const&, t_adv_map_point const&, bool&>& t_counted_ptr<t_handler_base_3<t_adv_map_point const&, t_adv_map_point const&, bool&>>::operator*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:11977
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_3<t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>>::t_counted_ptr<t_handler_base_3<t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>>(
    t_counted_ptr<t_handler_base_3<t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11978
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_3<t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&> function_3_handler(
    void (* arg_0)(t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11979
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_adv_map_point const&, bool&> add_3rd_argument(
    t_handler_3<t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&> arg_0,
    t_find_adjacent_space_helper_data& arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11980
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_adventure_path_point const&, bool&> bound_handler(
    t_find_nearby_space_scanner& arg_0,
    void (t_find_nearby_space_scanner::*)(t_adventure_path_point const&, bool&)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11981
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_pathfinding_subject* t_counted_ptr<t_pathfinding_subject>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:11982
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_rect_2d const& t_map_segment_overlay<t_tile_visibility_data>::get_extent() const
{
    // Body unavailable.
}

// name:A; map symbol; map:11984
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_adventure_path_point const&, bool&>::t_handler_2<t_adventure_path_point const&, bool&>(
    t_handler_base_2<t_adventure_path_point const&, bool&>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11985
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_3<t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>::t_handler_3<t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>(
    t_handler_base_3<t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11986
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_3<t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>* t_handler_3<t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>::operator t_handler_base_3<t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:11987
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_function_handler_3<void (*)(t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&), t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>::t_function_handler_3<void (*)(t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&), t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>(
    void (* arg_0)(t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11988
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_function_handler_3<void (*)(t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&), t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>::operator()(
    t_adv_map_point const& arg_0,
    bool& arg_1,
    t_find_adjacent_space_helper_data& arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11989
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_add_3rd_handler_2<t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>::t_add_3rd_handler_2<t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>(
    t_handler_base_3<t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>* arg_0,
    t_find_adjacent_space_helper_data& arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11990
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_add_3rd_handler_2<t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>::operator()(
    t_adv_map_point const& arg_0,
    bool& arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11991
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_2<t_find_nearby_space_scanner, t_adventure_path_point const&, bool&>::t_bound_handler_2<t_find_nearby_space_scanner, t_adventure_path_point const&, bool&>(
    t_find_nearby_space_scanner& arg_0,
    void (t_find_nearby_space_scanner::*)(t_adventure_path_point const&, bool&)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11992
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_2<t_find_nearby_space_scanner, t_adventure_path_point const&, bool&>::operator()(
    t_adventure_path_point const& arg_0,
    bool& arg_1
)
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:11993
VA_CHT_1_COMPGEN(0x004e6ed0, 0x1e, VECTOR_DELETING_DTOR, "t_function_handler_3<void (*)(t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&), t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>")

// name:A; map symbol; map:11994
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_function_handler_3<void (*)(t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&), t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>")

// name:A; map symbol; map:11995
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_3<t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>::t_handler_base_3<t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>(

)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:11996
VA_CHT_1_COMPGEN(0x004e6ef0, 0x1e, SCALAR_DELETING_DTOR, "t_add_3rd_handler_2<t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>")

// name:A; map symbol; map:11997
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_add_3rd_handler_2<t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>")

// confidence:A; align-band; retn,stable,vslot; map:11998
VA_CHT_1_COMPGEN(0x004e6f10, 0x1e, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_find_nearby_space_scanner, t_adventure_path_point const&, bool&>")

// name:A; map symbol; map:11999
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_2<t_find_nearby_space_scanner, t_adventure_path_point const&, bool&>")

// name:A; map symbol; map:12000
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_adventure_path_point const&, bool&>::t_handler_base_2<t_adventure_path_point const&, bool&>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:12001
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_function_handler_3<void (*)(t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&), t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>::~t_function_handler_3<void (*)(t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&), t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:12002
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_3<t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>::~t_handler_base_3<t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>(

)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,vptr; map:12003
VA_CHT_1(0x004e6f50, 0x21)
t_abstract_function_3<void, t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>::~t_abstract_function_3<void, t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>(

)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:12004
VA_CHT_1_COMPGEN(0x004e6eb0, 0x20, VECTOR_DELETING_DTOR, "t_abstract_function_3<void, t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>")

// name:A; map symbol; map:12005
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_abstract_function_3<void, t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>")

// name:A; map symbol; map:12006
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_handler_base_3<t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>")

// name:A; map symbol; map:12007
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_handler_base_3<t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>")

// confidence:A; align-band; retn,vptr; map:12008
VA_CHT_1(0x004e6d30, 0x4e)
t_abstract_function_3<void, t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>::t_abstract_function_3<void, t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:12009
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_add_3rd_handler_2<t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>::~t_add_3rd_handler_2<t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:12010
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_2<t_find_nearby_space_scanner, t_adventure_path_point const&, bool&>::~t_bound_handler_2<t_find_nearby_space_scanner, t_adventure_path_point const&, bool&>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:12011
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_adventure_path_point const&, bool&>::~t_handler_base_2<t_adventure_path_point const&, bool&>(

)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,vptr; map:12012
VA_CHT_1(0x004e6fe0, 0x21)
t_abstract_function_2<void, t_adventure_path_point const&, bool&>::~t_abstract_function_2<void, t_adventure_path_point const&, bool&>(

)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:12013
VA_CHT_1_COMPGEN(0x004e6f30, 0x20, SCALAR_DELETING_DTOR, "t_abstract_function_2<void, t_adventure_path_point const&, bool&>")

// name:A; map symbol; map:12014
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_abstract_function_2<void, t_adventure_path_point const&, bool&>")

// name:A; map symbol; map:12015
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_handler_base_2<t_adventure_path_point const&, bool&>")

// name:A; map symbol; map:12016
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_handler_base_2<t_adventure_path_point const&, bool&>")

// name:A; map symbol; map:12017
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_function_2<void, t_adventure_path_point const&, bool&>::t_abstract_function_2<void, t_adventure_path_point const&, bool&>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:12018
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_handler_3<t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>::operator()(
    t_adv_map_point const& arg_0,
    bool& arg_1,
    t_find_adjacent_space_helper_data& arg_2
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:12019
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_3<t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>>::t_counted_ptr<t_handler_base_3<t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>>(
    t_handler_base_3<t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:12020
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_3<t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>* t_counted_ptr<t_handler_base_3<t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>>::operator t_handler_base_3<t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:12021
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_3<t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>& t_counted_ptr<t_handler_base_3<t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>>::operator*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:12022
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_2<t_adventure_path_point const&, bool&>>::t_counted_ptr<t_handler_base_2<t_adventure_path_point const&, bool&>>(
    t_handler_base_2<t_adventure_path_point const&, bool&>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:12023
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_function_handler_3<void (*)(t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&), t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>")

// name:A; map symbol; map:12024
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_add_3rd_handler_2<t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>")

// confidence:C; align-order; stable; map:12025
VA_CHT_1_COMPGEN(0x004e7090, 0x8, VECTOR_DELETING_DTOR, "t_handler_base_2<t_adventure_path_point const&, bool&>")

// confidence:C; align-order; stable; map:12026
VA_CHT_1_COMPGEN(0x004e70a0, 0x8, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_find_nearby_space_scanner, t_adventure_path_point const&, bool&>")

// confidence:C; align-order; stable; map:12027
VA_CHT_1_COMPGEN(0x004e70b0, 0x8, VECTOR_DELETING_DTOR, "t_handler_base_3<t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>")

// === .rdata (12 symbols) ===

// name:A; map symbol; map:43301
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_function_handler_3<void (*)(t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&), t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>::`vftable'{for `t_abstract_function_3<void, t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>'}")

// name:A; map symbol; map:43302
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_function_handler_3<void (*)(t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&), t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:43303
DATA_CHT_1_COMPGEN(0x008d43bc, "const t_add_3rd_handler_2<t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>::`vftable'{for `t_abstract_function_2<void, t_adv_map_point const&, bool&>'}")

// confidence:B; rtti-order; map:43304
DATA_CHT_1_COMPGEN(0x008d43c8, "const t_add_3rd_handler_2<t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:43305
DATA_CHT_1_COMPGEN(0x008d43d0, "const t_bound_handler_2<t_find_nearby_space_scanner, t_adventure_path_point const&, bool&>::`vftable'{for `t_abstract_function_2<void, t_adventure_path_point const&, bool&>'}")

// confidence:B; rtti-order; map:43306
DATA_CHT_1_COMPGEN(0x008d43dc, "const t_bound_handler_2<t_find_nearby_space_scanner, t_adventure_path_point const&, bool&>::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:43307
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_3<t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>::`vftable'{for `t_abstract_function_3<void, t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>'}")

// name:A; map symbol; map:43308
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_3<t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:43309
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_2<t_adventure_path_point const&, bool&>::`vftable'{for `t_abstract_function_2<void, t_adventure_path_point const&, bool&>'}")

// name:A; map symbol; map:43310
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_2<t_adventure_path_point const&, bool&>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:43311
DATA_CHT_1_COMPGEN(0x008d43b0, "const t_abstract_function_3<void, t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>::`vftable'")

// confidence:A; rtti-name; map:43312
DATA_CHT_1_COMPGEN(0x008d43e4, "const t_abstract_function_2<void, t_adventure_path_point const&, bool&>::`vftable'")

// === .rdata$r (35 symbols) ===

// name:A; map symbol; map:49051
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_function_handler_3<void (*)(t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&), t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>::`RTTI Complete Object Locator'{for `t_abstract_function_3<void, t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>'}")

// name:A; map symbol; map:49052
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_abstract_function_3<void, t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>::`RTTI Base Class Descriptor at (8, -1, 0, 0)'")

// name:A; map symbol; map:49053
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_handler_base_3<t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// name:A; map symbol; map:49054
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_function_handler_3<void (*)(t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&), t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// name:A; map symbol; map:49055
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_function_handler_3<void (*)(t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&), t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>::`RTTI Base Class Array'")

// name:A; map symbol; map:49056
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_function_handler_3<void (*)(t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&), t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:49057
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_function_handler_3<void (*)(t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&), t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_add_3rd_handler_2@ABUt_adv_map_point@@AA_NAAUt_find_adjacent_space_helper_data@?%C:\Work\game\adventure_object.cpp1519615388@@@@;vft=4d43bc;col=4fc240;td=58e8e0;chd=4fc230;offset=8;cdOffset=0;validated-hierarchy; map:49058
DATA_CHT_1_COMPGEN(0x008fc240, "const t_add_3rd_handler_2<t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_adv_map_point const&, bool&>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_add_3rd_handler_2@ABUt_adv_map_point@@AA_NAAUt_find_adjacent_space_helper_data@?%C:\Work\game\adventure_object.cpp1519615388@@@@;bcd=4fc204;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49059
DATA_CHT_1_COMPGEN(0x008fc204, "t_add_3rd_handler_2<t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_add_3rd_handler_2@ABUt_adv_map_point@@AA_NAAUt_find_adjacent_space_helper_data@?%C:\Work\game\adventure_object.cpp1519615388@@@@;vft=4d43bc;col=4fc240;td=58e8e0;chd=4fc230;offset=8;cdOffset=0;validated-hierarchy; map:49060
DATA_CHT_1_COMPGEN(0x008fc21c, "t_add_3rd_handler_2<t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_add_3rd_handler_2@ABUt_adv_map_point@@AA_NAAUt_find_adjacent_space_helper_data@?%C:\Work\game\adventure_object.cpp1519615388@@@@;vft=4d43bc;col=4fc240;td=58e8e0;chd=4fc230;offset=8;cdOffset=0;validated-hierarchy; map:49061
DATA_CHT_1_COMPGEN(0x008fc230, "t_add_3rd_handler_2<t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:49062
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_add_3rd_handler_2<t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_2@Vt_find_nearby_space_scanner@?%C:\Work\game\adventure_object.cpp1519615388@@ABUt_adventure_path_point@@AA_N@@;vft=4d43d0;col=4fc318;td=58ea08;chd=4fc308;offset=8;cdOffset=0;validated-hierarchy; map:49063
DATA_CHT_1_COMPGEN(0x008fc318, "const t_bound_handler_2<t_find_nearby_space_scanner, t_adventure_path_point const&, bool&>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_adventure_path_point const&, bool&>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_2@XABUt_adventure_path_point@@AA_N@@;bcd=4fc2ac;pmd=8,-1,0;attributes=0;validated-hierarchy-link; map:49064
DATA_CHT_1_COMPGEN(0x008fc2ac, "t_abstract_function_2<void, t_adventure_path_point const&, bool&>::`RTTI Base Class Descriptor at (8, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_handler_base_2@ABUt_adventure_path_point@@AA_N@@;bcd=4fc2c4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49065
DATA_CHT_1_COMPGEN(0x008fc2c4, "t_handler_base_2<t_adventure_path_point const&, bool&>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_2@Vt_find_nearby_space_scanner@?%C:\Work\game\adventure_object.cpp1519615388@@ABUt_adventure_path_point@@AA_N@@;bcd=4fc2dc;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49066
DATA_CHT_1_COMPGEN(0x008fc2dc, "t_bound_handler_2<t_find_nearby_space_scanner, t_adventure_path_point const&, bool&>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_2@Vt_find_nearby_space_scanner@?%C:\Work\game\adventure_object.cpp1519615388@@ABUt_adventure_path_point@@AA_N@@;vft=4d43d0;col=4fc318;td=58ea08;chd=4fc308;offset=8;cdOffset=0;validated-hierarchy; map:49067
DATA_CHT_1_COMPGEN(0x008fc2f4, "t_bound_handler_2<t_find_nearby_space_scanner, t_adventure_path_point const&, bool&>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_2@Vt_find_nearby_space_scanner@?%C:\Work\game\adventure_object.cpp1519615388@@ABUt_adventure_path_point@@AA_N@@;vft=4d43d0;col=4fc318;td=58ea08;chd=4fc308;offset=8;cdOffset=0;validated-hierarchy; map:49068
DATA_CHT_1_COMPGEN(0x008fc308, "t_bound_handler_2<t_find_nearby_space_scanner, t_adventure_path_point const&, bool&>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:49069
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_2<t_find_nearby_space_scanner, t_adventure_path_point const&, bool&>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// name:A; map symbol; map:49070
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_3<t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>::`RTTI Complete Object Locator'{for `t_abstract_function_3<void, t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>'}")

// name:A; map symbol; map:49071
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_handler_base_3<t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>::`RTTI Base Class Array'")

// name:A; map symbol; map:49072
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_handler_base_3<t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:49073
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_3<t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// name:A; map symbol; map:49074
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_2<t_adventure_path_point const&, bool&>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_adventure_path_point const&, bool&>'}")

// name:A; map symbol; map:49075
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_handler_base_2<t_adventure_path_point const&, bool&>::`RTTI Base Class Array'")

// name:A; map symbol; map:49076
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_handler_base_2<t_adventure_path_point const&, bool&>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:49077
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_2<t_adventure_path_point const&, bool&>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_3@XABUt_adv_map_point@@AA_NAAUt_find_adjacent_space_helper_data@?%C:\Work\game\adventure_object.cpp1519615388@@@@;bcd=4fc118;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49078
DATA_CHT_1_COMPGEN(0x008fc118, "t_abstract_function_3<void, t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_function_3@XABUt_adv_map_point@@AA_NAAUt_find_adjacent_space_helper_data@?%C:\Work\game\adventure_object.cpp1519615388@@@@;vft=4d43b0;col=4fc148;td=58e710;chd=4fc138;offset=0;cdOffset=0;validated-hierarchy; map:49079
DATA_CHT_1_COMPGEN(0x008fc130, "t_abstract_function_3<void, t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_function_3@XABUt_adv_map_point@@AA_NAAUt_find_adjacent_space_helper_data@?%C:\Work\game\adventure_object.cpp1519615388@@@@;vft=4d43b0;col=4fc148;td=58e710;chd=4fc138;offset=0;cdOffset=0;validated-hierarchy; map:49080
DATA_CHT_1_COMPGEN(0x008fc138, "t_abstract_function_3<void, t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_function_3@XABUt_adv_map_point@@AA_NAAUt_find_adjacent_space_helper_data@?%C:\Work\game\adventure_object.cpp1519615388@@@@;vft=4d43b0;col=4fc148;td=58e710;chd=4fc138;offset=0;cdOffset=0;validated-hierarchy; map:49081
DATA_CHT_1_COMPGEN(0x008fc148, "const t_abstract_function_3<void, t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_2@XABUt_adventure_path_point@@AA_N@@;bcd=4fc254;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49082
DATA_CHT_1_COMPGEN(0x008fc254, "t_abstract_function_2<void, t_adventure_path_point const&, bool&>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_function_2@XABUt_adventure_path_point@@AA_N@@;vft=4d43e4;col=4fc284;td=58e978;chd=4fc274;offset=0;cdOffset=0;validated-hierarchy; map:49083
DATA_CHT_1_COMPGEN(0x008fc26c, "t_abstract_function_2<void, t_adventure_path_point const&, bool&>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_function_2@XABUt_adventure_path_point@@AA_N@@;vft=4d43e4;col=4fc284;td=58e978;chd=4fc274;offset=0;cdOffset=0;validated-hierarchy; map:49084
DATA_CHT_1_COMPGEN(0x008fc274, "t_abstract_function_2<void, t_adventure_path_point const&, bool&>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_function_2@XABUt_adventure_path_point@@AA_N@@;vft=4d43e4;col=4fc284;td=58e978;chd=4fc274;offset=0;cdOffset=0;validated-hierarchy; map:49085
DATA_CHT_1_COMPGEN(0x008fc284, "const t_abstract_function_2<void, t_adventure_path_point const&, bool&>::`RTTI Complete Object Locator'")

// === .data (7 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_function_3@XABUt_adv_map_point@@AA_NAAUt_find_adjacent_space_helper_data@?%C:\Work\game\adventure_object.cpp1519615388@@@@;td=58e710;validated-header; map:57761
DATA_CHT_1_COMPGEN(0x0098e710, "t_abstract_function_3<void, t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_handler_base_3@ABUt_adv_map_point@@AA_NAAUt_find_adjacent_space_helper_data@?%C:\Work\game\adventure_object.cpp1519615388@@@@;td=58e7a8;validated-header; map:57762
DATA_CHT_1_COMPGEN(0x0098e7a8, "t_handler_base_3<t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&> `RTTI Type Descriptor'")

// name:A; map symbol; map:57763
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_function_handler_3<void (*)(t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&), t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_add_3rd_handler_2@ABUt_adv_map_point@@AA_NAAUt_find_adjacent_space_helper_data@?%C:\Work\game\adventure_object.cpp1519615388@@@@;td=58e8e0;validated-header; map:57764
DATA_CHT_1_COMPGEN(0x0098e8e0, "t_add_3rd_handler_2<t_adv_map_point const&, bool&, t_find_adjacent_space_helper_data&> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_function_2@XABUt_adventure_path_point@@AA_N@@;td=58e978;validated-header; map:57765
DATA_CHT_1_COMPGEN(0x0098e978, "t_abstract_function_2<void, t_adventure_path_point const&, bool&> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_handler_base_2@ABUt_adventure_path_point@@AA_N@@;td=58e9c0;validated-header; map:57766
DATA_CHT_1_COMPGEN(0x0098e9c0, "t_handler_base_2<t_adventure_path_point const&, bool&> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_2@Vt_find_nearby_space_scanner@?%C:\Work\game\adventure_object.cpp1519615388@@ABUt_adventure_path_point@@AA_N@@;td=58ea08;validated-header; map:57767
DATA_CHT_1_COMPGEN(0x0098ea08, "t_bound_handler_2<t_find_nearby_space_scanner, t_adventure_path_point const&, bool&> `RTTI Type Descriptor'")
