// adventure_map.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\adventure_map.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 403/840 (A:65 B:2 C:0); unaccounted 437; skipped std 1684.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (725 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69876; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x004b9050, 0x15, STATIC_INIT_DISPATCH, "adventure_map#1")

// name:C; dyninit; see ledger; map:69877
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adventure_map#1")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69878; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x004b9070, 0x1e, STATIC_INIT_DISPATCH, "adventure_map#2")

// name:C; dyninit; see ledger; map:69879
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adventure_map#2")

namespace {

// name:A; map symbol; map:9373
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int get_tile_version_from_map_version(int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9374
VA_CHT_1(0x004b9090, 0x2a)
int get_tile_version_from_saved_game_version(int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9375
VA_CHT_1(0x004b90c0, 0x186)
bool read_old_timed_event(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1,
    t_global_timed_event& arg_2
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9376
VA_CHT_1(0x004b9250, 0x4)
void handle_used_artifacts(t_artifact_type arg_0, bool& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9377
VA_CHT_1(0x004b9260, 0x2b)
void handle_allowed_artifacts(t_artifact_type arg_0, bool& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9378
VA_CHT_1(0x004b9290, 0x166)
t_vector_set<t_map_point_2d, std::less<t_map_point_2d>, std::allocator<t_map_point_2d>> build_visibility_difference_set(
    t_adventure_map const& arg_0,
    int arg_1,
    int arg_2,
    t_vector_set<t_visibility_point, std::less<t_visibility_point>, std::allocator<t_visibility_point>> const& arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9379
VA_CHT_1(0x004b9400, 0x18c)
t_vector_set<t_map_point_2d, std::less<t_map_point_2d>, std::allocator<t_map_point_2d>> build_transition_test_set(
    t_adventure_map const& arg_0,
    t_vector_set<t_map_point_2d, std::less<t_map_point_2d>, std::allocator<t_map_point_2d>> const& arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9380
VA_CHT_1(0x004b9590, 0x6c)
std::bitset<67> const& get_respawn_as_water_creature()
{
    // Body unavailable.
}

} // anonymous namespace

// name:B; dyninit; see ledger; map:69880
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// get_respawn_as_water_creature$sdtor
// Function body not reconstructed; signature retained as a comment.

namespace {

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:9381
VA_CHT_1(0x004b9600, 0x1)
std::bitset<67> const& get_respawn_as_land_creature()
{
    // Body unavailable.
}

} // anonymous namespace

// name:B; dyninit; see ledger; map:69881
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// get_respawn_as_land_creature$sdtor
// Function body not reconstructed; signature retained as a comment.

namespace {

// name:A; map symbol; map:9382
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void add_artifacts_to_carryover_data(
    t_creature const& arg_0,
    t_artifact_set const& arg_1,
    t_carryover_data& arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:9383
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void strip_extra_artifacts(t_hero_carryover_data& arg_0, t_artifact_set const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:9384
VA_CHT_1(0x004b9610, 0x1)
void give_artifacts(t_creature_stack& arg_0, std::vector<t_artifact, std::allocator<t_artifact>> const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:9385
VA_CHT_1(0x004b9620, 0x284)
int compute_power(t_hero const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:9386
VA_CHT_1(0x004b98b0, 0x197)
t_vector_set<t_creature_stack*, std::less<t_creature_stack*>, std::allocator<t_creature_stack*>> build_creature_stack_set(
    t_adventure_map const& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:9387
VA_CHT_1(0x004b9a50, 0x286)
void distribute_artifacts(t_carryover_data& arg_0, t_adventure_map& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:9388
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void mark_cell_as_impassable(t_adventure_map& arg_0, t_adv_map_point arg_1, t_adventure_tile& arg_2)
{
    // Body unavailable.
}

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:9389
VA_CHT_1(0x004b9ce0, 0x206)
void mark_lava_rivers(t_adventure_map& arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:9390
VA_CHT_1(0x004b9ef0, 0x7f)
t_map_rect_2d get_visibility_rect(t_map_point_2d const& arg_0, int arg_1, int arg_2)
{
    // Body unavailable.
}

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:9391
VA_CHT_1(0x004b9f70, 0xf4)
bool t_adventure_tile::blocks_army(
    t_creature_array const& arg_0,
    t_adventure_map const& arg_1,
    bool arg_2,
    t_path_search_type arg_3
) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:9392
VA_CHT_1(0x004ba070, 0x6f3)
t_adventure_map::t_adventure_map()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:9393
VA_CHT_1(0x004bb2a0, 0x715)
t_adventure_map::t_adventure_map(int arg_0, int arg_1, int arg_2, t_difficulty arg_3, int arg_4, bool arg_5)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:9394
VA_CHT_1(0x004bb9c0, 0x773)
t_adventure_map::~t_adventure_map()
{
    // Body unavailable.
}

// name:A; map symbol; map:9395
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adventure_map::initialize()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9396
VA_CHT_1(0x004bc140, 0xda)
float t_adventure_map::get_percent_explored(int arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9397
VA_CHT_1(0x004bc220, 0x428)
void t_adventure_map::initialize(int arg_0, int arg_1, int arg_2, t_difficulty arg_3, int arg_4)
{
    // Body unavailable.
}

// name:A; map symbol; map:9398
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adventure_map::add_respawn_point(t_respawn_point const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9399
VA_CHT_1(0x004bc650, 0x3c)
std::list<t_counted_ptr<t_adventure_event_base>, std::allocator<t_counted_ptr<t_adventure_event_base>>> const& t_adventure_map::get_events_list(

)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9400
VA_CHT_1(0x004bc690, 0xe1)
t_adventure_ai const& t_adventure_map::get_ai() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9401
VA_CHT_1(0x004bc780, 0x124)
t_adventure_ai& t_adventure_map::get_ai()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9402
VA_CHT_1(0x004bc900, 0xd)
void t_adventure_map::attach(t_adventure_map_window* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9403
VA_CHT_1(0x004bc910, 0x7)
t_adventure_map_window* t_adventure_map::get_map_window() const
{
    // Body unavailable.
}

// name:A; map symbol; map:9404
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_adventure_tile const& t_adventure_map::get_tile(t_level_map_point_2d arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:9405
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_adventure_tile& t_adventure_map::get_tile(t_level_map_point_2d arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:9406
VA_CHT_1(0x004bc920, 0x3b)
t_abstract_adventure_tile_vertex const& t_adventure_map::get_tile_vertex(t_level_map_point_2d arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:9407
VA_CHT_1(0x004bc960, 0x37)
t_abstract_adventure_tile_vertex& t_adventure_map::get_tile_vertex(t_level_map_point_2d arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:9408
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_quad<t_abstract_adventure_tile_vertex const&> t_adventure_map::get_tile_vertex_quad(
    t_level_map_point_2d arg_0
) const
{
    // Body unavailable.
}

// confidence:D; align-order; stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:9409
VA_CHT_1(0x004bc9a0, 0xe1)
t_quad<t_abstract_adventure_tile_vertex&> t_adventure_map::get_tile_vertex_quad(t_level_map_point_2d arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9410
VA_CHT_1(0x004bca90, 0x26e)
int t_adventure_map::place_object(t_adventure_object* arg_0, t_adv_map_point arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9411
VA_CHT_1(0x004bcd00, 0x156)
void t_adventure_map::remove_object(t_adventure_object* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9412
VA_CHT_1(0x004bce60, 0x5a)
void t_adventure_map::remove_object(unsigned int const& arg_0)
{
    // Body unavailable.
}

namespace {

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9413
VA_CHT_1(0x004bcec0, 0x444)
bool read_objects(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    std::list<t_object_position, std::allocator<t_object_position>>& arg_1,
    t_progress_handler* arg_2,
    int arg_3
)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9414
VA_CHT_1(0x004bd340, 0x273)
void t_adventure_map::read_heights(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_progress_handler* arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9415
VA_CHT_1(0x004bd5c0, 0x3c6)
void t_adventure_map::add_player(t_shared_ptr<t_player> arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9416
VA_CHT_1(0x004bd990, 0xf5)
bool t_adventure_map::set_players(t_map_header const& arg_0, t_player_setup const* arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:69882
VA_CHT_1(0x004bda90, 0xdf)
static void set_alignment(t_player_setup const& arg_0, t_player& arg_1, t_map_header const& arg_2)
{
    // Body unavailable.
}

// name:A; map symbol; map:9417
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adventure_map::read_tile(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_adventure_tile& arg_1,
    t_level_map_point_2d const& arg_2,
    t_map_header const& arg_3,
    t_progress_handler* arg_4
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9418
VA_CHT_1(0x004bdb70, 0x260)
bool t_adventure_map::read_timed_events_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_map_header const& arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9419
VA_CHT_1(0x004bddf0, 0x23d)
bool t_adventure_map::read_triggerable_events_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_map_header const& arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9420
VA_CHT_1(0x004be0e0, 0x23d)
bool t_adventure_map::read_continuous_events_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_map_header const& arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9421
VA_CHT_1(0x004be340, 0x280)
bool t_adventure_map::read_placed_events_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_map_header const& arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9422
VA_CHT_1(0x004be5e0, 0x7d)
bool t_adventure_map::read_obelisk_data_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_map_header const& arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:9423
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adventure_map::read_player_data_body_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_map_header const& arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9424
VA_CHT_1(0x004be660, 0x20a)
bool t_adventure_map::read_allowed_artifacts_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_map_header const& arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9425
VA_CHT_1(0x004be870, 0x1ae)
bool t_adventure_map::read_allowed_heroes_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_map_header const& arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9426
VA_CHT_1(0x004bea20, 0x2de)
bool t_adventure_map::read_allowed_skills_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_map_header const& arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9427
VA_CHT_1(0x004bed00, 0x2d5)
bool t_adventure_map::read_allowed_spells_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_map_header const& arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:9428
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adventure_map::read_carryover_artifacts_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_map_header const& arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9429
VA_CHT_1(0x004bf160, 0x23c)
bool t_adventure_map::read_cut_scene_info_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_map_header const& arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9430
VA_CHT_1(0x004bf3a0, 0xb79)
bool t_adventure_map::read_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_campaign_file_ref const& arg_1,
    int arg_2,
    bool arg_3,
    t_progress_handler* arg_4,
    t_player_setup const* arg_5,
    t_difficulty arg_6,
    int arg_7,
    t_counted_ptr<t_carryover_data> arg_8,
    bool arg_9
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9431
VA_CHT_1(0x004c0100, 0x27)
void t_adventure_map::clear_saved_combat()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9432
VA_CHT_1(0x004c0130, 0xc48)
void t_adventure_map::write(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_progress_handler* arg_1,
    t_saved_combat* arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:9433
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adventure_map::write_defeated_heroes(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9434
VA_CHT_1(0x004c0d80, 0x273)
bool t_adventure_map::read_defeated_heroes(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9435
VA_CHT_1(0x004c1000, 0x161)
bool t_adventure_map::write_adventure_object(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_saved_game_header const& arg_1,
    t_adventure_object* arg_2
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:9436
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adventure_map::write_replay_events(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9437
VA_CHT_1(0x004c1170, 0xb3)
bool t_adventure_map::write_replay_event_state_cache(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0
) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9438
VA_CHT_1(0x004c1230, 0x4a4)
bool t_adventure_map::read_and_place_adventure_object(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_saved_game_header const& arg_1,
    t_counted_ptr<t_adventure_object>& arg_2
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9439
VA_CHT_1(0x004c16e0, 0x111f)
bool t_adventure_map::read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_progress_handler* arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9440
VA_CHT_1(0x004c2800, 0x1cf)
bool t_adventure_map::read_replay_events(std::basic_streambuf<char, std::char_traits<char>>& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9441
VA_CHT_1(0x004c29d0, 0x13e)
bool t_adventure_map::read_replay_event_state_cache(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9442
VA_CHT_1(0x004c2b10, 0x393)
void t_adventure_map::assign_global_id(t_adventure_object* arg_0, unsigned int const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9443
VA_CHT_1(0x004c2ed0, 0x6c)
t_adventure_object* t_adventure_map::get_adventure_object_with_gid(unsigned int const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:9444
VA_CHT_1(0x004c2f40, 0x173)
int t_adventure_map::compute_height(
    t_abstract_adv_object const& arg_0,
    t_level_map_point_2d const& arg_1
) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9445
VA_CHT_1(0x004c30c0, 0x1a6)
void t_adventure_map::stamp_object_height(t_adventure_object const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:9446
VA_CHT_1(0x004c3270, 0x70e)
void t_adventure_map::stamp_object(int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:9447
VA_CHT_1(0x004c39c0, 0x6bf)
void t_adventure_map::unstamp_object(int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9448
VA_CHT_1(0x004c4080, 0x243)
t_adventure_object* t_adventure_map::get_trigger_object(
    t_adv_map_point const& arg_0,
    t_direction arg_1,
    t_creature_array const* arg_2
) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9449
VA_CHT_1(0x004c42d0, 0x106)
t_adventure_object* t_adventure_map::get_trigger_object(
    t_adv_map_point const& arg_0,
    t_creature_array const* arg_1
) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9450
VA_CHT_1(0x004c43e0, 0x163)
bool t_adventure_map::activate_trigger(
    t_army* arg_0,
    t_adv_map_point const& arg_1,
    t_direction arg_2,
    t_adventure_frame* arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9451
VA_CHT_1(0x004c4550, 0x148)
void t_adventure_map::post_trigger(t_army* arg_0, t_adventure_object* arg_1, t_adventure_frame* arg_2)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9452
VA_CHT_1(0x004c46a0, 0x7a)
bool t_adventure_map::corners_block(
    t_adv_map_point const& arg_0,
    t_adv_map_point const& arg_1,
    t_direction arg_2
) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9453
VA_CHT_1(0x004c4720, 0x1ec)
bool t_adventure_map::is_blocked(t_adv_map_point const& arg_0, t_direction arg_1) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9454
VA_CHT_1(0x004c4910, 0x203)
bool t_adventure_map::is_ramp_open(t_adv_map_point const& arg_0, t_direction arg_1) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9455
VA_CHT_1(0x004c4b20, 0x99)
void t_adventure_map::clear_path()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9456
VA_CHT_1(0x004c4bc0, 0x3ad)
void t_adventure_map::mark_danger()
{
    // Body unavailable.
}

// name:A; map symbol; map:69883
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
static void clear_danger(t_adventure_map& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:69884
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
static void mark_attack_area(t_army& arg_0, t_adventure_map& arg_1, t_adventure_path_finder& arg_2)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9457
VA_CHT_1(0x004c4f70, 0x266)
void t_adventure_map::display_path(t_adventure_path const& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9458
VA_CHT_1(0x004c51e0, 0x37)
void t_adventure_map::clear_selection()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9459
VA_CHT_1(0x004c5220, 0x10c)
void t_adventure_map::display_selection(t_adventure_object* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:9460
VA_CHT_1(0x004c5330, 0x7)
int t_adventure_map::get_first_object_id() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:9461
VA_CHT_1(0x004c5340, 0x7)
int t_adventure_map::get_last_object_id() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:9462
VA_CHT_1(0x004c5350, 0x24)
int t_adventure_map::get_next_object_id(int arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:9463
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_adv_object& t_adventure_map::get_object(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:9464
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_adv_object const& t_adventure_map::get_object(int arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:9465
VA_CHT_1(0x004c5380, 0x49)
t_level_map_point_2d t_adventure_map::get_object_pos(int arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:9466
VA_CHT_1(0x004c53d0, 0x1e)
int t_adventure_map::get_prev_object_id(int arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:9467
VA_CHT_1(0x004c53f0, 0x16)
bool t_adventure_map::is_floating(int arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9468
VA_CHT_1(0x004c5410, 0x7)
int t_adventure_map::get_current_player_number() const
{
    // Body unavailable.
}

// name:A; map symbol; map:9469
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_player& t_adventure_map::get_current_player()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9470
VA_CHT_1(0x004c5420, 0x14)
t_player const& t_adventure_map::get_current_player() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9471
VA_CHT_1(0x004c5440, 0x63)
bool t_adventure_map::has_human_players(int arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9472
VA_CHT_1(0x004c54b0, 0x9c)
int t_adventure_map::which_team_owns_all_towns() const
{
    // Body unavailable.
}

// name:A; map symbol; map:9473
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adventure_map::initialize_players(t_difficulty arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:9474
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adventure_map::set_current_player(int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9475
VA_CHT_1(0x004c5550, 0x54)
void t_adventure_map::add_free_materials()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9476
VA_CHT_1(0x004c55b0, 0x2e9)
void t_adventure_map::process_new_day()
{
    // Body unavailable.
}

// name:A; map symbol; map:69885
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
static void adjust_ai_income(t_player& arg_0, t_difficulty arg_1, int arg_2)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9477
VA_CHT_1(0x004c58a0, 0x294)
void t_adventure_map::do_new_month()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9478
VA_CHT_1(0x004c5b40, 0x6e8)
void t_adventure_map::choose_next_month_creature()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9479
VA_CHT_1(0x004c6230, 0x26b)
t_artifact_type t_adventure_map::get_random_artifact(t_artifact_level arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9480
VA_CHT_1(0x004c64a0, 0x267)
t_artifact_type t_adventure_map::get_random_artifact(t_artifact_type const* arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9481
VA_CHT_1(0x004c6710, 0x25d)
t_artifact_type t_adventure_map::get_random_potion()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9482
VA_CHT_1(0x004c6970, 0x2ca)
std::string t_adventure_map::get_random_name(t_qualified_adv_object_type const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9483
VA_CHT_1(0x004c6c40, 0x180)
t_spell t_adventure_map::get_random_parchment(int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9484
VA_CHT_1(0x004c6dc0, 0x70)
void t_adventure_map::reuse(t_artifact_type arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9485
VA_CHT_1(0x004c6e30, 0xa4)
t_hero* t_adventure_map::create_hero(t_default_hero const& arg_0, t_town_type arg_1) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9486
VA_CHT_1(0x004c6ee0, 0x52)
int t_adventure_map::get_player_number(t_player_color arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9487
VA_CHT_1(0x004c6f40, 0x17c)
int t_adventure_map::get_or_add_player_number(t_player_color arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:9488
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adventure_map::is_hotseat() const
{
    // Body unavailable.
}

// name:A; map symbol; map:9489
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adventure_map::is_network() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9490
VA_CHT_1(0x004c70c0, 0xa8)
bool t_adventure_map::is_multiplayer() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9491
VA_CHT_1(0x004c7170, 0xc2)
void t_adventure_map::add(t_army* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9492
VA_CHT_1(0x004c7240, 0xbc)
void t_adventure_map::remove(t_army* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9493
VA_CHT_1(0x004c7300, 0xa9)
void t_adventure_map::add(t_ownable_garrisonable_adv_object* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9494
VA_CHT_1(0x004c73b0, 0xb4)
void t_adventure_map::remove(t_ownable_garrisonable_adv_object* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9495
VA_CHT_1(0x004c7470, 0xa9)
void t_adventure_map::add(t_town* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9496
VA_CHT_1(0x004c7520, 0xb4)
void t_adventure_map::remove(t_town* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:9497
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adventure_map::is_ocean(t_level_map_point_2d const& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9498
VA_CHT_1(0x004c75e0, 0xd5)
bool t_adventure_map::is_river(t_level_map_point_2d const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:69886
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
static int sum_land_transitions(t_adventure_tile const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9499
VA_CHT_1(0x004c76c0, 0xc3)
bool t_adventure_map::is_land(t_level_map_point_2d const& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9500
VA_CHT_1(0x004c7790, 0xf6)
void t_adventure_map::add_ferry(t_counted_const_ptr<t_adv_ferry> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:9501
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adventure_map::calculate_ferry_groups_push(
    t_level_map_point_2d const& arg_0,
    t_level_map_point_2d_list& arg_1,
    t_bool_array& arg_2
) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9502
VA_CHT_1(0x004c7890, 0x211)
void t_adventure_map::calculate_ferry_groups_add_ferry(
    t_adv_ferry const* arg_0,
    t_level_map_point_2d_list& arg_1,
    t_bool_array& arg_2,
    int arg_3,
    std::vector<t_counted_const_ptr<t_adv_ferry>, std::allocator<t_counted_const_ptr<t_adv_ferry>>>& arg_4,
    std::map<t_adv_ferry const*, t_level_map_point_2d_list, std::less<t_adv_ferry const*>, std::allocator<t_level_map_point_2d_list>> const& arg_5
) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9503
VA_CHT_1(0x004c7b30, 0x7da)
void t_adventure_map::calculate_ferry_groups() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9504
VA_CHT_1(0x004c8500, 0x193)
void t_adventure_map::add_gateway(t_counted_ptr<t_gateway> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:9505
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adventure_map::add_magi_eye(t_adv_magi_eye& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:9506
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adventure_map::add_subterranean_gate(t_counted_ptr<t_adv_subterranean_gate> arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9507
VA_CHT_1(0x004c86a0, 0x1d7)
void t_adventure_map::add_teleporter_exit(t_counted_ptr<t_adv_teleporter_exit> const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9508
VA_CHT_1(0x004c8880, 0x6c)
void t_adventure_map::add_whirlpool(t_counted_ptr<t_adv_whirlpool> const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9509
VA_CHT_1(0x004c88f0, 0x193)
std::vector<t_counted_const_ptr<t_adv_ferry>, std::allocator<t_counted_const_ptr<t_adv_ferry>>> t_adventure_map::get_ferries(

) const
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9510
VA_CHT_1(0x004c8a90, 0x17f)
std::vector<t_counted_const_ptr<t_adv_ferry>, std::allocator<t_counted_const_ptr<t_adv_ferry>>> t_adventure_map::get_ferries_in_group(
    t_counted_const_ptr<t_adv_ferry> arg_0
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:9511
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::vector<t_counted_ptr<t_gateway>, std::allocator<t_counted_ptr<t_gateway>>> t_adventure_map::get_gateways(
    int arg_0
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9512
VA_CHT_1(0x004c8c10, 0x27f)
std::vector<t_counted_const_ptr<t_gateway>, std::allocator<t_counted_const_ptr<t_gateway>>> t_adventure_map::get_gateways(
    int arg_0
) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9513
VA_CHT_1(0x004c8e90, 0xa6)
std::vector<t_counted_ptr<t_adv_teleporter_exit>, std::allocator<t_counted_ptr<t_adv_teleporter_exit>>> t_adventure_map::get_teleporter_exits(
    int arg_0
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9514
VA_CHT_1(0x004c8f40, 0xa6)
std::vector<t_counted_const_ptr<t_adv_teleporter_exit>, std::allocator<t_counted_const_ptr<t_adv_teleporter_exit>>> t_adventure_map::get_teleporter_exits(
    int arg_0
) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9515
VA_CHT_1(0x004c8ff0, 0x86)
std::vector<t_counted_ptr<t_adv_whirlpool>, std::allocator<t_counted_ptr<t_adv_whirlpool>>> t_adventure_map::get_whirlpools(

)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9516
VA_CHT_1(0x004c9080, 0xe0)
std::vector<t_counted_const_ptr<t_adv_whirlpool>, std::allocator<t_counted_const_ptr<t_adv_whirlpool>>> t_adventure_map::get_whirlpools(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:9517
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adventure_map::remove_ferry(t_counted_const_ptr<t_adv_ferry> const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9518
VA_CHT_1(0x004c9160, 0xae)
void t_adventure_map::remove_gateway(t_counted_ptr<t_gateway> const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9519
VA_CHT_1(0x004c9210, 0x9c)
void t_adventure_map::remove_subterranean_gate(t_counted_ptr<t_adv_subterranean_gate> const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9520
VA_CHT_1(0x004c92b0, 0xae)
void t_adventure_map::remove_teleporter_exit(t_counted_ptr<t_adv_teleporter_exit> const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9521
VA_CHT_1(0x004c9360, 0x9c)
void t_adventure_map::remove_whirlpool(t_counted_ptr<t_adv_whirlpool> const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9522
VA_CHT_1(0x004c9400, 0x15)
void t_adventure_map::add_to_total_income(int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9523
VA_CHT_1(0x004c9420, 0x1ff)
void t_adventure_map::add_obelisk(t_adv_obelisk& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9524
VA_CHT_1(0x004c9620, 0x29)
t_level_map_point_2d t_adventure_map::get_obelisk_artifact_position(t_obelisk_color arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9525
VA_CHT_1(0x004c9650, 0x25)
void t_adventure_map::set_obelisk_artifact_position(t_obelisk_color arg_0, t_level_map_point_2d const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9526
VA_CHT_1(0x004c9680, 0x232)
bool t_adventure_map::write_events(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9527
VA_CHT_1(0x004c98c0, 0x94f)
bool t_adventure_map::read_events(std::basic_streambuf<char, std::char_traits<char>>& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9528
VA_CHT_1(0x004ca210, 0x1a)
std::vector<t_counted_ptr<t_adv_subterranean_gate>, std::allocator<t_counted_ptr<t_adv_subterranean_gate>>> const& t_adventure_map::get_subterranean_gates(

)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9529
VA_CHT_1(0x004ca2c0, 0x113)
std::vector<t_adv_obelisk, std::allocator<t_adv_obelisk>> t_adventure_map::get_obelisk_list(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:9530
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adventure_map::set_boolean_script_variable(std::string const& arg_0, bool arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9531
VA_CHT_1(0x004ca3e0, 0x113)
void t_adventure_map::set_numeric_script_variable(std::string const& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9532
VA_CHT_1(0x004ca500, 0x66)
bool t_adventure_map::get_numeric_script_variable(std::string const& arg_0, int& arg_1) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9533
VA_CHT_1(0x004ca570, 0x66)
bool t_adventure_map::get_boolean_script_variable(std::string const& arg_0, bool& arg_1) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9534
VA_CHT_1(0x004ca5e0, 0x215)
void t_adventure_map::process_timed_events(t_adventure_frame* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9535
VA_CHT_1(0x004ca800, 0x1a6)
void t_adventure_map::process_continuous_events(t_adventure_frame* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9536
VA_CHT_1(0x004ca9b0, 0x1ed)
void t_adventure_map::process_triggerable_events(std::string const& arg_0, t_adventure_frame* arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9537
VA_CHT_1(0x004caba0, 0x2b5)
void t_adventure_map::process_placed_events(
    std::string const& arg_0,
    t_army& arg_1,
    t_counted_ptr<t_adventure_object> arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:9538
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adventure_map::is_permanently_blocked(t_adv_map_point const& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9539
VA_CHT_1(0x004cae60, 0x2fa)
bool t_adventure_map::can_place_new_boat(t_adv_map_point const& arg_0, bool arg_1) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9540
VA_CHT_1(0x004cb160, 0x1e5)
bool t_adventure_map::write_script_variable_maps(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0
) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9541
VA_CHT_1(0x004cb350, 0x1fa)
bool t_adventure_map::write_deletion_marker_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0
) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9542
VA_CHT_1(0x004cb550, 0x286)
bool t_adventure_map::read_script_variable_maps(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9543
VA_CHT_1(0x004cb7e0, 0x2da)
bool t_adventure_map::read_deletion_marker_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9544
VA_CHT_1(0x004cbb60, 0x19c)
void t_adventure_map::add_deletion_marker(std::string const& arg_0, t_adv_map_point const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9545
VA_CHT_1(0x004cbd00, 0x251)
void t_adventure_map::remove_by_deletion_marker(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9546
VA_CHT_1(0x004cbf60, 0xe9)
void t_adventure_map::add_mapped_name(std::string const& arg_0, t_hero* arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9547
VA_CHT_1(0x004cc050, 0xe9)
void t_adventure_map::add_mapped_name(std::string const& arg_0, t_town* arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:9548
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_hero* t_adventure_map::get_mapped_hero(std::string const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:9549
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_hero const* t_adventure_map::get_mapped_hero(std::string const& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9550
VA_CHT_1(0x004cc140, 0x5e)
t_town* t_adventure_map::get_mapped_town(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9551
VA_CHT_1(0x004cc1a0, 0x5e)
t_town const* t_adventure_map::get_mapped_town(std::string const& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9552
VA_CHT_1(0x004cc200, 0x54)
void t_adventure_map::set_obelisk_completed(t_obelisk_color arg_0, bool arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9553
VA_CHT_1(0x004cc260, 0x37)
bool t_adventure_map::get_obelisk_completed(t_obelisk_color arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9554
VA_CHT_1(0x004cc2a0, 0x54)
void t_adventure_map::set_obelisk_treasure_placed(t_obelisk_color arg_0, bool arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9555
VA_CHT_1(0x004cc300, 0x37)
bool t_adventure_map::get_obelisk_treasure_placed(t_obelisk_color arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9556
VA_CHT_1(0x004cc340, 0x109)
bool t_adventure_map::read_obelisk_data(std::basic_streambuf<char, std::char_traits<char>>& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9557
VA_CHT_1(0x004cc450, 0xab)
bool t_adventure_map::write_obelisk_data(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9558
VA_CHT_1(0x004cc500, 0x7)
std::list<t_counted_ptr<t_adv_shipyard>, std::allocator<t_counted_ptr<t_adv_shipyard>>>& t_adventure_map::get_shipyards(

)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9559
VA_CHT_1(0x004cc510, 0xa9)
void t_adventure_map::add_shipyard(t_adv_shipyard& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9560
VA_CHT_1(0x004cc5c0, 0xb4)
void t_adventure_map::remove_shipyard(t_adv_shipyard& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9561
VA_CHT_1(0x004cc680, 0x2e8)
bool t_adventure_map::read_allowed_artifacts(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:9562
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adventure_map::read_allowed_heroes(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:9563
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adventure_map::read_allowed_skills(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9564
VA_CHT_1(0x004cc970, 0x2f9)
bool t_adventure_map::read_allowed_spells(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:9565
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adventure_map::write_allowed_artifacts(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:9566
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adventure_map::write_allowed_heroes(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:9567
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adventure_map::write_allowed_skills(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9568
VA_CHT_1(0x004ccc70, 0x18b)
bool t_adventure_map::write_allowed_spells(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9569
VA_CHT_1(0x004cce00, 0x316)
bool t_adventure_map::read_carryover_artifacts(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9570
VA_CHT_1(0x004cd670, 0x4c)
bool t_adventure_map::write_carryover_artifacts(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:9571
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adventure_map::read_carryover_data(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:9572
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adventure_map::write_carryover_data(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:9573
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adventure_map::remove_visibility(
    int arg_0,
    t_level_map_point_2d const& arg_1,
    t_map_point_2d const& arg_2,
    int arg_3,
    t_vector_set<t_visibility_point, std::less<t_visibility_point>, std::allocator<t_visibility_point>>& arg_4
)
{
    // Body unavailable.
}

namespace {

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9574
VA_CHT_1(0x004cd6e0, 0x143)
void do_increase_visibility(
    t_abstract_adventure_tile& arg_0,
    t_map_point_2d const& arg_1,
    int arg_2,
    t_tile_visibility arg_3,
    t_skill_mastery arg_4,
    t_increase_visibility_type arg_5,
    t_vector_set<t_visibility_point, std::less<t_visibility_point>, std::allocator<t_visibility_point>>& arg_6
)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9575
VA_CHT_1(0x004cd830, 0x2f)
void t_adventure_map::increase_visibility(
    int arg_0,
    t_level_map_point_2d const& arg_1,
    t_map_point_2d const& arg_2,
    int arg_3,
    t_tile_visibility arg_4,
    t_vector_set<t_visibility_point, std::less<t_visibility_point>, std::allocator<t_visibility_point>>& arg_5,
    t_increase_visibility_type arg_6
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9576
VA_CHT_1(0x004cd860, 0x2f)
void t_adventure_map::increase_visibility(
    int arg_0,
    t_level_map_point_2d const& arg_1,
    t_map_point_2d const& arg_2,
    int arg_3,
    int arg_4,
    t_skill_mastery arg_5,
    t_vector_set<t_visibility_point, std::less<t_visibility_point>, std::allocator<t_visibility_point>>& arg_6
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9577
VA_CHT_1(0x004cd890, 0x2c0)
void t_adventure_map::increase_visibility(
    int arg_0,
    t_level_map_point_2d const& arg_1,
    t_map_point_2d const& arg_2,
    int arg_3,
    int arg_4,
    t_tile_visibility arg_5,
    t_skill_mastery arg_6,
    t_vector_set<t_visibility_point, std::less<t_visibility_point>, std::allocator<t_visibility_point>>& arg_7,
    t_increase_visibility_type arg_8
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9578
VA_CHT_1(0x004cdb50, 0x1c4)
void t_adventure_map::on_visibility_changed(
    int arg_0,
    int arg_1,
    t_vector_set<t_visibility_point, std::less<t_visibility_point>, std::allocator<t_visibility_point>>& arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:9579
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_shroud_transition_map* t_adventure_map::get_shroud_transition_map_ptr(int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:9580
VA_CHT_1(0x004cdd20, 0xe)
t_shroud_transition_map const* t_adventure_map::get_shroud_transition_map_ptr(int arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9581
VA_CHT_1(0x004cdd30, 0xd8)
void t_adventure_map::create_shroud_transition_maps()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9582
VA_CHT_1(0x004cde10, 0x217)
void t_adventure_map::rebuild_shroud_transitions()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9583
VA_CHT_1(0x004ce030, 0x2a9)
bool t_adventure_map::write_shroud_transition_maps(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0
) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9584
VA_CHT_1(0x004ce2e0, 0x4e6)
bool t_adventure_map::read_shroud_transition_maps(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9585
VA_CHT_1(0x004ce7d0, 0x10a)
bool t_adventure_map::read_terrain_map(std::basic_streambuf<char, std::char_traits<char>>& arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:9586
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adventure_map::read_monthly_creatures(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9587
VA_CHT_1(0x004ce8e0, 0x127)
bool t_adventure_map::write_monthly_creatures(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9588
VA_CHT_1(0x004cea10, 0x103)
bool t_adventure_map::record_replay_shroud()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9589
VA_CHT_1(0x004ceb20, 0xf2)
bool t_adventure_map::use_replay_shroud()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9590
VA_CHT_1(0x004cec20, 0x4a3)
t_counted_ptr<t_adventure_map> t_adventure_map::create_replay_map(t_progress_handler* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9591
VA_CHT_1(0x004cf0d0, 0x24b)
void t_adventure_map::cache_adventure_object_state(t_adventure_object* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9592
VA_CHT_1(0x004cf330, 0x59)
void t_adventure_map::attach_event_to_state_cache(t_adventure_object* arg_0, t_adventure_event_base* arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9593
VA_CHT_1(0x004cf390, 0x163)
void t_adventure_map::attach_event_to_adventure_map(t_adventure_object* arg_0, t_adventure_event_base* arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:9594
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adventure_map::memory_cache_refrence_remove(unsigned int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9595
VA_CHT_1(0x004cf500, 0x7)
t_adventure_object_cache_manager* t_adventure_map::get_cache_manager()
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9596
VA_CHT_1(0x004cf510, 0x1da)
bool t_adventure_map::record_mover_event(
    t_army* arg_0,
    t_adventure_path const& arg_1,
    bool arg_2,
    t_adv_map_point arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9597
VA_CHT_1(0x004cf6f0, 0x1b6)
bool t_adventure_map::record_look_trigger_event(t_actor* arg_0, t_direction arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:9598
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adventure_map::record_placement_event(t_adventure_object* arg_0, t_level_map_point_2d arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9599
VA_CHT_1(0x004cf8b0, 0x227)
bool t_adventure_map::record_remove_event(t_adventure_object* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9600
VA_CHT_1(0x004cfae0, 0x1be)
bool t_adventure_map::record_set_action_event(t_actor* arg_0, t_adv_actor_action_id arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:9601
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adventure_map::record_set_owner_event(t_owned_adv_object* arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9602
VA_CHT_1(0x004cfca0, 0x1b0)
bool t_adventure_map::record_set_owner_event(t_army* arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9603
VA_CHT_1(0x004cfe50, 0x1e3)
bool t_adventure_map::record_teleport_event(
    t_adventure_object* arg_0,
    t_adv_map_point arg_1,
    t_level_map_point_2d arg_2
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9604
VA_CHT_1(0x004d0040, 0x1fa)
bool t_adventure_map::record_update_event(t_adventure_object* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9605
VA_CHT_1(0x004d0240, 0x1be)
bool t_adventure_map::record_visiblity_event(
    t_army* arg_0,
    t_adv_map_point const& arg_1,
    t_direction arg_2,
    t_adventure_object* arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9606
VA_CHT_1(0x004d0400, 0x1bc)
bool t_adventure_map::record_adv_spell_effect(t_army* arg_0, k_spell_effects_event_id arg_1, bool arg_2)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9607
VA_CHT_1(0x004d07e0, 0x7e)
void t_adventure_map::adventure_event_finished(t_adventure_event_base* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9608
VA_CHT_1(0x004d0bc0, 0x1d8)
bool t_adventure_map::read_winloss_strings(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9609
VA_CHT_1(0x004d1450, 0x2a)
t_saved_game_header const& t_adventure_map::get_event_header()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9610
VA_CHT_1(0x004d1c60, 0x30)
void t_adventure_map::set_event_header(t_saved_game_header const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9611
VA_CHT_1(0x004d24c0, 0xb1)
void t_adventure_map::update_event_buffer(int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9612
VA_CHT_1(0x004d2cc0, 0x38)
void t_adventure_map::start_event_record()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9613
VA_CHT_1(0x004d2f90, 0x38)
void t_adventure_map::stop_event_record()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9614
VA_CHT_1(0x004d3390, 0x1b)
void t_adventure_map::start_event_playback()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9615
VA_CHT_1(0x004d3830, 0x18)
void t_adventure_map::stop_event_playback()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9616
VA_CHT_1(0x004d49f0, 0x43)
void t_adventure_map::event_playback_finish()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9617
VA_CHT_1(0x004d5880, 0x18)
void t_adventure_map::increment_event_tick()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9618
VA_CHT_1(0x004d65c0, 0x3b)
void t_adventure_map::rollback_replay_events(int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9619
VA_CHT_1(0x004d6910, 0x52)
bool t_adventure_map::write_terrain_map(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9620
VA_CHT_1(0x004d6970, 0x56)
bool t_adventure_map::write_winloss_strings(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9621
VA_CHT_1(0x004d6de0, 0x3b)
void t_adventure_map::add_caravan(t_counted_ptr<t_caravan> arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9622
VA_CHT_1(0x004d6e20, 0x91)
void t_adventure_map::remove_caravan(t_counted_ptr<t_caravan> arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9623
VA_CHT_1(0x004d6ec0, 0x41b)
bool t_adventure_map::read_caravans(std::basic_streambuf<char, std::char_traits<char>>& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9624
VA_CHT_1(0x004d72e0, 0x43)
bool t_adventure_map::write_caravans(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9625
VA_CHT_1(0x004d7fb0, 0x43)
t_ai_importance t_adventure_map::get_ai_importance_for_artifact(t_artifact const& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9626
VA_CHT_1(0x004d80a0, 0x432)
t_ai_importance t_adventure_map::get_ai_importance_for_artifact(t_artifact_type arg_0, t_spell arg_1) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9627
VA_CHT_1(0x004d84e0, 0x43)
bool t_adventure_map::read_ai_importance_maps(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9628
VA_CHT_1(0x004d9890, 0x43)
bool t_adventure_map::read_ai_importance_maps_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_map_header const& arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9629
VA_CHT_1(0x004daef0, 0x43)
bool t_adventure_map::write_ai_importance_maps(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0
) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9630
VA_CHT_1(0x004db250, 0x406)
bool t_adventure_map::read_cut_scene_info(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9631
VA_CHT_1(0x004db660, 0x3b)
bool t_adventure_map::write_cut_scene_info(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9632
VA_CHT_1(0x004dba60, 0x2d)
t_counted_ptr<t_carryover_data> t_adventure_map::build_carry_out_data()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9633
VA_CHT_1(0x004dba90, 0x52)
bool t_adventure_map::has_empty_boat(t_player const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9634
VA_CHT_1(0x004dbaf0, 0x19)
t_carryover_data* t_adventure_map::get_carry_in_data()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9635
VA_CHT_1(0x004dbed0, 0x19)
t_carryover_data const* t_adventure_map::get_carry_out_data() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9636
VA_CHT_1(0x004dc0e0, 0x51)
t_carryover_data* t_adventure_map::get_carry_out_data()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9637
VA_CHT_1(0x004dc200, 0x51)
bool t_adventure_map::is_game_over()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9638
VA_CHT_1(0x004dc300, 0x56)
int t_adventure_map::get_team_lighthouse_count(int arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9639
VA_CHT_1(0x004dc360, 0x51)
void t_adventure_map::begin_neutral_turn()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9640
VA_CHT_1(0x004dc4c0, 0x51)
int t_adventure_map::get_next_player() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9641
VA_CHT_1(0x004dc600, 0x56)
void t_adventure_map::process_day_end(t_adventure_frame* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9642
VA_CHT_1(0x004dc6c0, 0x52)
void t_adventure_map::set_next_player(t_adventure_frame* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9643
VA_CHT_1(0x004dc720, 0x56)
void t_adventure_map::resume_turn(t_adventure_frame* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9644
VA_CHT_1(0x004dce90, 0x5e)
std::bitset<188> t_adventure_map::select_spells(std::bitset<188> const& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9645
VA_CHT_1(0x004dd560, 0xd7)
void t_adventure_map::add_defeated_hero(t_hero* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9646
VA_CHT_1(0x004de580, 0xec)
void t_adventure_map::store_map_score(int arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:69887; name:B (dyninit; see ledger)
VA_CHT_1(0x004df930, 0x20)
// adventure_map$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:69889; name:B (dyninit; see ledger)
VA_CHT_1(0x004dfc60, 0x5c)
// adventure_map$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:69890
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adventure_map$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:69891
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adventure_map$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:69892
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adventure_map$tatexit4
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9647
VA_CHT_1(0x004dcce0, 0x18)
t_tile_visibility t_visibility_point::get_visibility() const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9648
VA_CHT_1(0x004c3980, 0x3d)
t_artifact const& t_hero_carryover_data::get_artifact(t_artifact_slot arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9649
VA_CHT_1(0x004d90d0, 0x19)
std::vector<t_artifact, std::allocator<t_artifact>> const& t_hero_carryover_data::get_backpack() const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9650
VA_CHT_1(0x004dcca0, 0x3e)
void t_hero_carryover_data::set_artifact(t_artifact_slot arg_0, t_artifact const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9651
VA_CHT_1(0x004dcd60, 0x21)
void t_hero_carryover_data::set_backpack(std::vector<t_artifact, std::allocator<t_artifact>> const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9652
VA_CHT_1(0x004d2d00, 0x2d)
std::list<t_counted_ptr<t_town>, std::allocator<t_counted_ptr<t_town>>>::const_iterator t_adventure_map::get_towns_begin(

) const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9653
VA_CHT_1(0x004dbe40, 0x2d)
std::list<t_counted_ptr<t_town>, std::allocator<t_counted_ptr<t_town>>>::const_iterator t_adventure_map::get_towns_end(

) const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9654
VA_CHT_1(0x004dc5e0, 0x19)
std::vector<t_town_prisoner, std::allocator<t_town_prisoner>>& t_town::get_prisoner_list()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9655
VA_CHT_1(0x004de300, 0x22)
t_vector_set<t_creature_stack*, std::less<t_creature_stack*>, std::allocator<t_creature_stack*>>::~t_vector_set<t_creature_stack*, std::less<t_creature_stack*>, std::allocator<t_creature_stack*>>(

)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9656
VA_CHT_1(0x004dc880, 0x2d)
t_vector_set<t_creature_stack*, std::less<t_creature_stack*>, std::allocator<t_creature_stack*>>::t_vector_set<t_creature_stack*, std::less<t_creature_stack*>, std::allocator<t_creature_stack*>>(
    t_vector_set<t_creature_stack*, std::less<t_creature_stack*>, std::allocator<t_creature_stack*>> const& arg_0
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9657
VA_CHT_1(0x004dcd00, 0x19)
t_artifact_set const& t_adventure_map::get_carry_in_artifacts() const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9658
VA_CHT_1(0x004e0050, 0x39)
void t_adventure_tile::change_edge_block_count(bool arg_0, bool arg_1, int arg_2)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9659
VA_CHT_1(0x004def80, 0x21)
void t_adventure_tile::increment_block()
{
    // Body unavailable.
}

// name:A; map symbol; map:9660
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_rect_2d::t_map_rect_2d(int arg_0, int arg_1, int arg_2, int arg_3)
{
    // Body unavailable.
}

// name:A; map symbol; map:9661
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool intersect(t_map_rect_2d const& arg_0, t_map_rect_2d const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9662
VA_CHT_1(0x004d08b0, 0xc4)
t_map_rect_2d intersection(t_map_rect_2d const& arg_0, t_map_rect_2d const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9663
VA_CHT_1(0x004dca50, 0x2d)
t_adventure_object const& t_adventure_map::get_adv_object(int arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9664
VA_CHT_1(0x004defb0, 0x1e)
t_artifact_set::t_artifact_set()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9665
VA_CHT_1(0x004d5280, 0x2a)
t_caravan_set::t_caravan_set(
    t_caravan_sorting_predicate const& arg_0,
    std::allocator<t_counted_ptr<t_caravan>> const& arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:9666
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_scenario_cut_scene_info::t_scenario_cut_scene_info()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9667
VA_CHT_1(0x004bb0c0, 0x26)
t_skill_set::t_skill_set()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:9668
VA_CHT_1_COMPGEN(0x004ba770, 0x1e, SCALAR_DELETING_DTOR, t_adventure_map)

// name:A; map symbol; map:9669
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_adventure_map)

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9670
VA_CHT_1(0x004dcde0, 0x2c)
t_artifact_ai_importance_map::t_artifact_ai_importance_map()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9671
VA_CHT_1(0x004bd310, 0x26)
t_artifact_ai_importance_map::~t_artifact_ai_importance_map()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9672
VA_CHT_1(0x004cd6c0, 0x1c)
t_counted_ptr<t_carryover_data>::~t_counted_ptr<t_carryover_data>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9673
VA_CHT_1(0x004dba00, 0x51)
t_default_hero_list::~t_default_hero_list()
{
    // Body unavailable.
}

// name:A; map symbol; map:9674
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_scenario_cut_scene_info::~t_scenario_cut_scene_info()
{
    // Body unavailable.
}

// name:A; map symbol; map:9677
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_isometric_map<t_adventure_tile>::~t_isometric_map<t_adventure_tile>()
{
    // Body unavailable.
}

// name:A; map symbol; map:9682
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_obelisk_data::~t_obelisk_data()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9684
VA_CHT_1(0x004bff60, 0x28)
t_spell_ai_importance_map::t_spell_ai_importance_map()
{
    // Body unavailable.
}

// name:A; map symbol; map:9685
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_spell_ai_importance_map::~t_spell_ai_importance_map()
{
    // Body unavailable.
}

// name:A; map symbol; map:9686
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_adventure_object_cache_manager>::~t_counted_ptr<t_adventure_object_cache_manager>()
{
    // Body unavailable.
}

// name:A; map symbol; map:9687
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// public: void t_owned_ptr<t_shroud_transition_map>::`default ctor closure'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:9688
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_map::t_town_list::t_town_list()
{
    // Body unavailable.
}

// name:A; map symbol; map:9689
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_map::t_town_list::~t_town_list()
{
    // Body unavailable.
}

// name:A; map symbol; map:9690
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_isometric_vertex_map<t_adventure_tile_vertex>::~t_isometric_vertex_map<t_adventure_tile_vertex>()
{
    // Body unavailable.
}

// name:A; map symbol; map:9693
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_tile_vertex::t_adventure_tile_vertex()
{
    // Body unavailable.
}

// name:A; map symbol; map:9694
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_adventure_tile_vertex::t_abstract_adventure_tile_vertex()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9695
VA_CHT_1(0x004d2670, 0x43)
t_abstract_tile_vertex::t_abstract_tile_vertex()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9696
VA_CHT_1(0x004ddec0, 0xa0)
t_adventure_tile::t_adventure_tile()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9697
VA_CHT_1(0x004d2c70, 0x43)
t_abstract_adventure_tile::t_abstract_adventure_tile()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9698
VA_CHT_1(0x004c7ab0, 0x71)
t_abstract_tile::t_abstract_tile()
{
    // Body unavailable.
}

// name:A; map symbol; map:9699
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_tile::~t_abstract_tile()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9700
VA_CHT_1(0x004d45f0, 0x43)
t_abstract_adventure_tile::~t_abstract_adventure_tile()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9702
VA_CHT_1(0x004dbb70, 0x51)
t_adventure_tile::~t_adventure_tile()
{
    // Body unavailable.
}

// name:A; map symbol; map:9703
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_tile_vertex::~t_adventure_tile_vertex()
{
    // Body unavailable.
}

// name:A; map symbol; map:9704
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_adventure_tile_vertex::~t_abstract_adventure_tile_vertex()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9705
VA_CHT_1(0x004dcd20, 0x19)
t_abstract_tile_vertex::~t_abstract_tile_vertex()
{
    // Body unavailable.
}

// name:A; map symbol; map:9706
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_map::t_object_node::t_object_node()
{
    // Body unavailable.
}

// name:A; map symbol; map:9707
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_map::t_object_node::~t_object_node()
{
    // Body unavailable.
}

// name:A; map symbol; map:9708
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool operator!=(t_qualified_adv_object_type const& arg_0, t_qualified_adv_object_type const& arg_1)
{
    // Body unavailable.
}

namespace {

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9709
VA_CHT_1(0x004d3de0, 0x68)
t_object_position::t_object_position(t_adventure_object* arg_0, t_level_map_point_2d const& arg_1)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:9710
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_stationary_adventure_object>::~t_counted_ptr<t_stationary_adventure_object>()
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:9711
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_position::~t_object_position()
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9712
VA_CHT_1(0x004daed0, 0x16)
void t_adventure_tile_vertex::set_bridge_height(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:9713
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_isometric_vertex_map<int>::~t_isometric_vertex_map<int>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9714
VA_CHT_1(0x004bff20, 0x14)
void t_player::set_color(t_player_color arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9715
VA_CHT_1(0x004d33b0, 0x1d)
void t_player::set_name(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9716
VA_CHT_1(0x004bff40, 0x14)
void t_player::set_alignment(t_town_type arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:9717
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_global_timed_event::t_global_timed_event()
{
    // Body unavailable.
}

// name:A; map symbol; map:9718
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_global_player_filtered_event::t_global_player_filtered_event()
{
    // Body unavailable.
}

// name:A; map symbol; map:9719
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_global_timed_event>::~t_counted_ptr<t_global_timed_event>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9720
VA_CHT_1_COMPGEN(0x004de330, 0x1e, VECTOR_DELETING_DTOR, t_global_timed_event)

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9721
VA_CHT_1_COMPGEN(0x004de350, 0x1e, SCALAR_DELETING_DTOR, t_global_timed_event)

// name:A; map symbol; map:9722
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_global_timed_event::~t_global_timed_event()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9723
VA_CHT_1(0x004dcd40, 0x19)
t_global_player_filtered_event::~t_global_player_filtered_event()
{
    // Body unavailable.
}

// name:A; map symbol; map:9724
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_global_triggerable_event::t_global_triggerable_event()
{
    // Body unavailable.
}

// name:A; map symbol; map:9725
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_global_triggerable_event>::~t_counted_ptr<t_global_triggerable_event>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9726
VA_CHT_1_COMPGEN(0x004de370, 0x1e, VECTOR_DELETING_DTOR, t_global_triggerable_event)

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9727
VA_CHT_1_COMPGEN(0x004de390, 0x1e, SCALAR_DELETING_DTOR, t_global_triggerable_event)

// name:A; map symbol; map:9728
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_global_triggerable_event::~t_global_triggerable_event()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:9729
VA_CHT_1(0x004ca230, 0x26)
t_global_continuous_event::t_global_continuous_event()
{
    // Body unavailable.
}

// name:A; map symbol; map:9730
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_global_continuous_event>::~t_counted_ptr<t_global_continuous_event>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9731
VA_CHT_1_COMPGEN(0x004de3b0, 0x1e, VECTOR_DELETING_DTOR, t_global_continuous_event)

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9732
VA_CHT_1_COMPGEN(0x004de3d0, 0x1e, SCALAR_DELETING_DTOR, t_global_continuous_event)

// name:A; map symbol; map:9733
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_global_continuous_event::~t_global_continuous_event()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:9734
VA_CHT_1(0x004ca260, 0x41)
t_global_placed_event::t_global_placed_event()
{
    // Body unavailable.
}

// name:A; map symbol; map:9735
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_global_placed_event>::~t_counted_ptr<t_global_placed_event>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:9736
VA_CHT_1_COMPGEN(0x004be5c0, 0x1e, SCALAR_DELETING_DTOR, t_global_placed_event)

// name:A; map symbol; map:9737
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_global_placed_event)

// name:A; map symbol; map:9738
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_global_placed_event::~t_global_placed_event()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9739
VA_CHT_1(0x004d3940, 0x14)
void t_player::set_ai_importance(t_ai_importance arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:9740
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_player::set_max_level(unsigned short arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:9741
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_default_hero_list::set_allowed_portrait_list(t_bool_array const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:9742
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bool_array& t_bool_array::operator=(t_bool_array const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:9743
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_skill_set::t_skill_set(std::bitset<36> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:9744
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_scenario_cut_scene_info& t_scenario_cut_scene_info::operator=(t_scenario_cut_scene_info const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9745
VA_CHT_1(0x004d3130, 0x4e)
int t_isometric_map_base_base::get_row_size(int arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:9746
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_progress_handler::increment_maximum(int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9747
VA_CHT_1(0x004de0b0, 0xa0)
t_map_header::t_map_header()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9748
VA_CHT_1(0x004d2440, 0x77)
t_map_header::~t_map_header()
{
    // Body unavailable.
}

// name:A; map symbol; map:9749
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_campaign_file_ref& t_campaign_file_ref::operator=(t_campaign_file_ref const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:9750
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_difficulty t_adventure_map::get_player_difficulty() const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9751
VA_CHT_1(0x004d3030, 0x31)
void t_adventure_object::set_global_id(unsigned int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:9752
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_artifact_set::t_artifact_set(std::bitset<232> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:9753
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_adventure_map::get_map_number() const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9754
VA_CHT_1(0x004d60d0, 0x38)
void t_carryover_data::add_scenario_score(int arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:9755
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_carryover_data::get_scenario_score_count() const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9756
VA_CHT_1(0x004d3850, 0x1a)
t_random_number_generator::t_random_number_generator(long arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:9757
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_adventure_event_base>::~t_counted_ptr<t_adventure_event_base>()
{
    // Body unavailable.
}

// name:A; map symbol; map:9758
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_adventure_tile_vertex::get_bridge_height() const
{
    // Body unavailable.
}

// name:A; map symbol; map:9759
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_level_map_point_2d operator+(t_map_point_2d const& arg_0, t_level_map_point_2d const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:9760
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adventure_tile::change_bridge_count(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:9761
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adventure_tile::change_ramp_count(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:9762
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adventure_tile::change_ramp_open_count(bool arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:9763
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adventure_tile::add_trigger(int arg_0, bool arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:9764
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adventure_tile::increment_left_trigger(bool arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:9765
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adventure_tile::increment_right_trigger(bool arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9766
VA_CHT_1(0x004d5a30, 0x4d)
bool t_footprint::is_edge_blocked(t_map_point_2d const& arg_0, bool arg_1, bool arg_2) const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9767
VA_CHT_1(0x004d5db0, 0x68)
void t_adventure_tile::remove_trigger(int arg_0, bool arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:9768
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adventure_tile::decrement_block()
{
    // Body unavailable.
}

// name:A; map symbol; map:9769
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adventure_tile::decrement_left_trigger(bool arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:9770
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adventure_tile::decrement_right_trigger(bool arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:9771
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adventure_tile::left_is_trigger(bool arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:9772
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adventure_tile::right_is_trigger(bool arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:9773
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adventure_tile::is_edge_blocked(bool arg_0, bool arg_1) const
{
    // Body unavailable.
}

// name:A; map symbol; map:9774
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adventure_tile::is_ramp_open(bool arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9775
VA_CHT_1(0x004d4380, 0x22)
void t_adventure_tile::set_dangerous(bool arg_0, bool arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:9776
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adventure_tile::is_dangerous(bool arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:9777
VA_CHT_1(0x004e23c0, 0x1d)
t_adventure_path_point::t_adventure_path_point()
{
    // Body unavailable.
}

// name:A; map symbol; map:9778
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adventure_object::is_floating() const
{
    // Body unavailable.
}

// name:A; map symbol; map:9779
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_town_type t_respawn_point::get_alignment() const
{
    // Body unavailable.
}

// name:A; map symbol; map:9780
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_respawn_point::get_on_water() const
{
    // Body unavailable.
}

// name:A; map symbol; map:9781
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::vector<t_terrain_transition, std::allocator<t_terrain_transition>> const& t_abstract_tile::get_terrain_transition_vector(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:9782
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int get_transition_code(t_terrain_transition const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:9783
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_transition_mask::get_code() const
{
    // Body unavailable.
}

// name:A; map symbol; map:9788
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_counted_ptr_base::operator!=(t_counted_ptr_base const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:9789
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_gateway::get_gateway_type() const
{
    // Body unavailable.
}

// name:A; map symbol; map:9790
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_adv_teleporter_exit::get_teleporter_type() const
{
    // Body unavailable.
}

// name:A; map symbol; map:9791
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_const_ptr<t_gateway>::~t_counted_const_ptr<t_gateway>()
{
    // Body unavailable.
}

// name:A; map symbol; map:9792
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_const_ptr<t_adv_teleporter_exit>::~t_counted_const_ptr<t_adv_teleporter_exit>()
{
    // Body unavailable.
}

// name:A; map symbol; map:9793
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_const_ptr<t_adv_whirlpool>::~t_counted_const_ptr<t_adv_whirlpool>()
{
    // Body unavailable.
}

// name:A; map symbol; map:9794
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_global_triggerable_event::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:9795
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_global_continuous_event::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9796
VA_CHT_1(0x004d4f80, 0x22)
bool t_global_triggerable_event::read(std::basic_streambuf<char, std::char_traits<char>>& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9797
VA_CHT_1(0x004d4ff0, 0x21)
bool t_global_continuous_event::read(std::basic_streambuf<char, std::char_traits<char>>& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9799
VA_CHT_1(0x004d58a0, 0x1a)
t_script_context_global::t_script_context_global(t_adventure_map* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:9800
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_context_army::t_script_context_army(
    t_adventure_map* arg_0,
    t_creature_array* arg_1,
    t_player* arg_2,
    t_creature_array* arg_3,
    t_player* arg_4,
    t_adv_map_point const* arg_5,
    t_adventure_object* arg_6
)
{
    // Body unavailable.
}

// name:A; map symbol; map:9801
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::string const& t_discrete_event::get_message() const
{
    // Body unavailable.
}

// name:A; map symbol; map:9802
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::string const& t_global_placed_event::get_name() const
{
    // Body unavailable.
}

// name:A; map symbol; map:9806
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_obelisk_marker::t_obelisk_marker()
{
    // Body unavailable.
}

// name:A; map symbol; map:9807
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_carryover_data::t_carryover_data()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:9808
VA_CHT_1_COMPGEN(0x004cd120, 0x1e, VECTOR_DELETING_DTOR, t_carryover_data)

// name:A; map symbol; map:9809
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_carryover_data)

// name:A; map symbol; map:9812
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_carryover_data::~t_carryover_data()
{
    // Body unavailable.
}

// name:A; map symbol; map:9813
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_point_2d operator*(t_map_point_2d const& arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:9814
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_point_2d& t_map_point_2d::operator*=(int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9815
VA_CHT_1(0x004d51e0, 0x50)
t_visibility_point::t_visibility_point(
    t_map_point_2d const& arg_0,
    t_tile_visibility arg_1,
    t_skill_mastery arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:9816
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_tile_visibility_data::t_tile_visibility_data(bool arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:9817
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_skill_mastery t_tile_visibility_data::get_anti_stealth() const
{
    // Body unavailable.
}

// name:A; map symbol; map:9818
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_tile_visibility_data::is_visible() const
{
    // Body unavailable.
}

// name:A; map symbol; map:9819
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_segment_overlay<t_tile_visibility_data>::~t_map_segment_overlay<t_tile_visibility_data>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9820
VA_CHT_1(0x004dc660, 0x51)
bool is_water_terrain(t_terrain_type arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9821
VA_CHT_1(0x004dfbe0, 0x77)
t_shroud_transition_map::t_shroud_transition_map(int arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:9822
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_isometric_map<t_copy_on_write_ptr<std::vector<t_shroud_transition, std::allocator<t_shroud_transition>>>>::~t_isometric_map<t_copy_on_write_ptr<std::vector<t_shroud_transition, std::allocator<t_shroud_transition>>>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:9823
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
unsigned int t_shroud_transition::get_id() const
{
    // Body unavailable.
}

// name:A; map symbol; map:9824
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
unsigned int t_shroud_transition::get_mask_set() const
{
    // Body unavailable.
}

// name:A; map symbol; map:9825
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_tile_visibility t_shroud_transition::get_visibility() const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9826
VA_CHT_1(0x004d8530, 0x43)
std::vector<t_shroud_transition, std::allocator<t_shroud_transition>> const& t_shroud_transition_map::get_transitions(
    t_level_map_point_2d const& arg_0
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:9827
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_shroud_transition::set_id(unsigned int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:9828
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_shroud_transition::set_mask_set(unsigned int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9829
VA_CHT_1(0x004d8d70, 0x43)
void t_shroud_transition::set_visibility(t_tile_visibility arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9830
VA_CHT_1(0x004d3e50, 0x98)
void t_shroud_transition_map::take_transitions(
    t_level_map_point_2d const& arg_0,
    std::vector<t_shroud_transition, std::allocator<t_shroud_transition>>& arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9831
VA_CHT_1(0x004daec0, 0xe)
void t_adventure_map::set_is_replay_map(bool arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9832
VA_CHT_1(0x004d1920, 0x9e)
t_saved_game_header& t_saved_game_header::operator=(t_saved_game_header const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9833
VA_CHT_1(0x004da9b0, 0xc)
void t_adventure_event_base::set_players_turn_on(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:9834
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adventure_event_base::set_event_tick(unsigned int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:9835
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
unsigned int t_adventure_event_base::get_event_tick()
{
    // Body unavailable.
}

// name:A; map symbol; map:9836
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_artifact_effect_list const& t_artifact::get_effects() const
{
    // Body unavailable.
}

// name:A; map symbol; map:9837
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_spell t_artifact_prop::t_single_spell::get_spell() const
{
    // Body unavailable.
}

// name:A; map symbol; map:9838
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_creature const* t_creature_stack::get_creature() const
{
    // Body unavailable.
}

// name:A; map symbol; map:9839
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_hero_carryover_data>::~t_counted_ptr<t_hero_carryover_data>()
{
    // Body unavailable.
}

// name:A; map symbol; map:9840
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_player::get_lighthouse_count() const
{
    // Body unavailable.
}

// name:A; map symbol; map:9841
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adventure_map::decrement_victory_timer()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9892
VA_CHT_1(0x004db9b0, 0x43)
t_basic_isometric_map<t_isometric_tile_map_base, t_copy_on_write_ptr<std::vector<t_shroud_transition, std::allocator<t_shroud_transition>>>>::~t_basic_isometric_map<t_isometric_tile_map_base, t_copy_on_write_ptr<std::vector<t_shroud_transition, std::allocator<t_shroud_transition>>>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:9893
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::vector<t_shroud_transition, std::allocator<t_shroud_transition>> const& t_copy_on_write_ptr<std::vector<t_shroud_transition, std::allocator<t_shroud_transition>>>::operator*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:9894
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::vector<t_shroud_transition, std::allocator<t_shroud_transition>>* t_copy_on_write_ptr<std::vector<t_shroud_transition, std::allocator<t_shroud_transition>>>::operator->(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:9986
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_isometric_map<t_adventure_tile>::t_isometric_map<t_adventure_tile>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:9987
VA_CHT_1(0x004dc830, 0x43)
t_basic_isometric_map<t_isometric_tile_map_base, t_adventure_tile>::~t_basic_isometric_map<t_isometric_tile_map_base, t_adventure_tile>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:10145
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_isometric_vertex_map<t_adventure_tile_vertex>::t_isometric_vertex_map<t_adventure_tile_vertex>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:10146
VA_CHT_1(0x004dc910, 0x43)
t_basic_isometric_map<t_isometric_vertex_map_base, t_adventure_tile_vertex>::~t_basic_isometric_map<t_isometric_vertex_map_base, t_adventure_tile_vertex>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:10166
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_visibility_point const* t_vector_set<t_visibility_point, std::less<t_visibility_point>, std::allocator<t_visibility_point>>::begin(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:10167
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_visibility_point const* t_vector_set<t_visibility_point, std::less<t_visibility_point>, std::allocator<t_visibility_point>>::end(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:10173
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_vector_set<t_creature_stack*, std::less<t_creature_stack*>, std::allocator<t_creature_stack*>>::t_vector_set<t_creature_stack*, std::less<t_creature_stack*>, std::allocator<t_creature_stack*>>(
    std::less<t_creature_stack*> const& arg_0,
    std::allocator<t_creature_stack*> const& arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:10174
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_creature_stack* const* t_vector_set<t_creature_stack*, std::less<t_creature_stack*>, std::allocator<t_creature_stack*>>::begin(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:10175
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_vector_set<t_creature_stack*, std::less<t_creature_stack*>, std::allocator<t_creature_stack*>>::empty(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:10176
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_creature_stack* const* t_vector_set<t_creature_stack*, std::less<t_creature_stack*>, std::allocator<t_creature_stack*>>::end(

) const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:10206
VA_CHT_1(0x004dc960, 0x43)
t_basic_isometric_map<t_isometric_vertex_map_base, int>::~t_basic_isometric_map<t_isometric_vertex_map_base, int>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:10217
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int* t_static_vector<int, 67>::begin()
{
    // Body unavailable.
}

// name:A; map symbol; map:10218
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int* t_static_vector<int, 67>::end()
{
    // Body unavailable.
}

// name:A; map symbol; map:10219
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int& t_static_vector<int, 67>::operator[](unsigned int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:10220
VA_CHT_1(0x004ca2b0, 0x7)
unsigned int t_static_vector<int, 7>::size()
{
    // Body unavailable.
}

// name:A; map symbol; map:10221
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int* t_static_vector<int, 7>::begin()
{
    // Body unavailable.
}

// name:A; map symbol; map:10222
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int* t_static_vector<int, 7>::end()
{
    // Body unavailable.
}

// name:A; map symbol; map:10223
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int& t_static_vector<int, 7>::operator[](unsigned int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:10301
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::vector<t_shroud_transition, std::allocator<t_shroud_transition>> const* t_copy_on_write_ptr<std::vector<t_shroud_transition, std::allocator<t_shroud_transition>>>::get(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:10714
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_counted_ptr_base::operator<(t_counted_ptr_base const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:11172
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_vector_set<t_map_point_2d, std::less<t_map_point_2d>, std::allocator<t_map_point_2d>>::swap(
    t_vector_set<t_map_point_2d, std::less<t_map_point_2d>, std::allocator<t_map_point_2d>>& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11173
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_adventure_object_cache_manager>::t_counted_ptr<t_adventure_object_cache_manager>()
{
    // Body unavailable.
}

// name:A; map symbol; map:11174
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_adventure_object_cache_manager>& t_counted_ptr<t_adventure_object_cache_manager>::operator=(
    t_adventure_object_cache_manager* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11175
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_object_cache_manager* t_counted_ptr<t_adventure_object_cache_manager>::operator t_adventure_object_cache_manager*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:11176
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_object_cache_manager* t_counted_ptr<t_adventure_object_cache_manager>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:11177
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_artifact_effect* t_counted_ptr<t_artifact_effect>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:11178
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_adventure_event_base>::t_counted_ptr<t_adventure_event_base>(t_adventure_event_base* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:11179
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_adventure_event_base>::t_counted_ptr<t_adventure_event_base>()
{
    // Body unavailable.
}

// name:A; map symbol; map:11180
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_adventure_event_base>& t_counted_ptr<t_adventure_event_base>::operator=(
    t_adventure_event_base* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11181
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_event_base* t_counted_ptr<t_adventure_event_base>::operator t_adventure_event_base*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:11182
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_event_base* t_counted_ptr<t_adventure_event_base>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:11183
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_campaign_file_ref_body>& t_counted_ptr<t_campaign_file_ref_body>::operator=(
    t_counted_ptr<t_campaign_file_ref_body> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11184
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_copy_on_write_ptr<std::vector<t_shroud_transition, std::allocator<t_shroud_transition>>> const& t_basic_isometric_map<t_isometric_tile_map_base, t_copy_on_write_ptr<std::vector<t_shroud_transition, std::allocator<t_shroud_transition>>>>::get(
    t_level_map_point_2d const& arg_0
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:11185
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_copy_on_write_ptr<std::vector<t_shroud_transition, std::allocator<t_shroud_transition>>>& t_basic_isometric_map<t_isometric_tile_map_base, t_copy_on_write_ptr<std::vector<t_shroud_transition, std::allocator<t_shroud_transition>>>>::get(
    t_level_map_point_2d const& arg_0
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:11186
VA_CHT_1(0x004dc580, 0x52)
bool t_basic_isometric_map<t_isometric_tile_map_base, t_copy_on_write_ptr<std::vector<t_shroud_transition, std::allocator<t_shroud_transition>>>>::is_valid(
    t_level_map_point_2d const& arg_0
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:11187
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_isometric_map<t_copy_on_write_ptr<std::vector<t_shroud_transition, std::allocator<t_shroud_transition>>>>::t_isometric_map<t_copy_on_write_ptr<std::vector<t_shroud_transition, std::allocator<t_shroud_transition>>>>(
    int arg_0,
    int arg_1,
    int arg_2,
    t_copy_on_write_ptr<std::vector<t_shroud_transition, std::allocator<t_shroud_transition>>> const& arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11188
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_copy_on_write_ptr<std::vector<t_shroud_transition, std::allocator<t_shroud_transition>>>::t_copy_on_write_ptr<std::vector<t_shroud_transition, std::allocator<t_shroud_transition>>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:11189
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_copy_on_write_ptr<std::vector<t_shroud_transition, std::allocator<t_shroud_transition>>>::~t_copy_on_write_ptr<std::vector<t_shroud_transition, std::allocator<t_shroud_transition>>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:11190
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::vector<t_shroud_transition, std::allocator<t_shroud_transition>>* t_copy_on_write_ptr<std::vector<t_shroud_transition, std::allocator<t_shroud_transition>>>::get(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:11191
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_copy_on_write_ptr<std::vector<t_shroud_transition, std::allocator<t_shroud_transition>>>& t_copy_on_write_ptr<std::vector<t_shroud_transition, std::allocator<t_shroud_transition>>>::operator=(
    t_copy_on_write_ptr<std::vector<t_shroud_transition, std::allocator<t_shroud_transition>>> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11193
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_shared_ptr<t_player>::t_shared_ptr<t_player>(t_player* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:11194
VA_CHT_1(0x004de410, 0x83)
t_shared_ptr<t_player>::~t_shared_ptr<t_player>()
{
    // Body unavailable.
}

// name:A; map symbol; map:11195
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_ownable_garrisonable_adv_object>::t_counted_ptr<t_ownable_garrisonable_adv_object>(
    t_ownable_garrisonable_adv_object* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11196
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_carryover_data>::t_counted_ptr<t_carryover_data>(t_counted_ptr<t_carryover_data> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:11197
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_carryover_data>::t_counted_ptr<t_carryover_data>(t_carryover_data* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:11198
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_carryover_data>::t_counted_ptr<t_carryover_data>()
{
    // Body unavailable.
}

// name:A; map symbol; map:11199
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_carryover_data* t_counted_ptr<t_carryover_data>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:11200
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_carryover_data>& t_counted_ptr<t_carryover_data>::operator=(
    t_counted_ptr<t_carryover_data> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11201
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_carryover_data>& t_counted_ptr<t_carryover_data>::operator=(t_carryover_data* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:11202
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_carryover_data* t_counted_ptr<t_carryover_data>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:11203
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_carryover_data& t_counted_ptr<t_carryover_data>::operator*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:11204
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_ptr<t_adventure_ai>::t_owned_ptr<t_adventure_ai>(t_adventure_ai* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:11205
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_ptr<t_adventure_ai>::~t_owned_ptr<t_adventure_ai>()
{
    // Body unavailable.
}

// name:A; map symbol; map:11206
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_owned_ptr<t_adventure_ai>::reset(t_adventure_ai* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:11207
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_ai& t_owned_ptr<t_adventure_ai>::operator*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:11208
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_ai* t_owned_ptr<t_adventure_ai>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:11209
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_basic_isometric_map<t_isometric_tile_map_base, t_adventure_tile>::get_levels() const
{
    // Body unavailable.
}

// name:A; map symbol; map:11210
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_basic_isometric_map<t_isometric_tile_map_base, t_adventure_tile>::initialize(
    int arg_0,
    int arg_1,
    int arg_2,
    t_adventure_tile const& arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11211
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_basic_isometric_map<t_isometric_tile_map_base, t_adventure_tile>::is_valid(
    t_level_map_point_2d const& arg_0
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:11212
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_basic_isometric_map<t_isometric_tile_map_base, t_adventure_tile>::t_basic_isometric_map<t_isometric_tile_map_base, t_adventure_tile>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:11213
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_ptr<t_saved_combat>::t_owned_ptr<t_saved_combat>(t_saved_combat* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:11214
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_ptr<t_saved_combat>::~t_owned_ptr<t_saved_combat>()
{
    // Body unavailable.
}

// name:A; map symbol; map:11215
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_owned_ptr<t_saved_combat>::reset(t_saved_combat* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:11216
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_saved_combat* t_owned_ptr<t_saved_combat>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:11217
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_adv_shipyard>::t_counted_ptr<t_adv_shipyard>(t_adv_shipyard* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:11218
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_ptr<t_shroud_transition_map>::t_owned_ptr<t_shroud_transition_map>(t_shroud_transition_map* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:11219
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_ptr<t_shroud_transition_map>::~t_owned_ptr<t_shroud_transition_map>()
{
    // Body unavailable.
}

// name:A; map symbol; map:11220
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_shroud_transition_map* t_owned_ptr<t_shroud_transition_map>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:11221
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_owned_ptr<t_shroud_transition_map>::reset(t_shroud_transition_map* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:11222
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_owned_ptr<t_shroud_transition_map>::swap(t_owned_ptr<t_shroud_transition_map>& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:11223
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_shroud_transition_map& t_owned_ptr<t_shroud_transition_map>::operator*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:11224
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_shroud_transition_map* t_owned_ptr<t_shroud_transition_map>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:11225
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_tile_vertex const& t_basic_isometric_map<t_isometric_vertex_map_base, t_adventure_tile_vertex>::get(
    t_level_map_point_2d const& arg_0
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:11226
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_tile_vertex& t_basic_isometric_map<t_isometric_vertex_map_base, t_adventure_tile_vertex>::get(
    t_level_map_point_2d const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11227
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_basic_isometric_map<t_isometric_vertex_map_base, t_adventure_tile_vertex>::initialize(
    int arg_0,
    int arg_1,
    int arg_2,
    t_adventure_tile_vertex const& arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11228
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_basic_isometric_map<t_isometric_vertex_map_base, t_adventure_tile_vertex>::is_valid(
    t_level_map_point_2d const& arg_0
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:11229
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_basic_isometric_map<t_isometric_vertex_map_base, t_adventure_tile_vertex>::t_basic_isometric_map<t_isometric_vertex_map_base, t_adventure_tile_vertex>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:11230
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_hero_carryover_data>::t_counted_ptr<t_hero_carryover_data>(
    t_counted_ptr<t_hero_carryover_data> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11231
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_hero_carryover_data>::t_counted_ptr<t_hero_carryover_data>(t_hero_carryover_data* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:11232
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_hero_carryover_data& t_counted_ptr<t_hero_carryover_data>::operator*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:11233
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_hero>::t_counted_ptr<t_hero>()
{
    // Body unavailable.
}

// name:A; map symbol; map:11234
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_hero>& t_counted_ptr<t_hero>::operator=(t_counted_ptr<t_hero> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:11235
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::pair<t_visibility_point const*, bool> t_vector_set<t_visibility_point, std::less<t_visibility_point>, std::allocator<t_visibility_point>>::insert(
    t_visibility_point const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11236
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::pair<t_creature_stack* const*, bool> t_vector_set<t_creature_stack*, std::less<t_creature_stack*>, std::allocator<t_creature_stack*>>::insert(
    t_creature_stack* const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11237
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_vector_set<t_creature_stack*, std::less<t_creature_stack*>, std::allocator<t_creature_stack*>>::swap(
    t_vector_set<t_creature_stack*, std::less<t_creature_stack*>, std::allocator<t_creature_stack*>>& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11238
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_stationary_adventure_object>::t_counted_ptr<t_stationary_adventure_object>()
{
    // Body unavailable.
}

// name:A; map symbol; map:11239
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_stationary_adventure_object* t_counted_ptr<t_stationary_adventure_object>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:11240
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_stationary_adventure_object>& t_counted_ptr<t_stationary_adventure_object>::operator=(
    t_stationary_adventure_object* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11241
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_stationary_adventure_object* t_counted_ptr<t_stationary_adventure_object>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:11242
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int& t_basic_isometric_map<t_isometric_vertex_map_base, int>::get(t_level_map_point_2d const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:11243
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_isometric_vertex_map<int>::t_isometric_vertex_map<int>(int arg_0, int arg_1, int arg_2, int const& arg_3)
{
    // Body unavailable.
}

// name:A; map symbol; map:11244
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_global_timed_event>::t_counted_ptr<t_global_timed_event>(t_global_timed_event* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:11245
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_global_timed_event>& t_counted_ptr<t_global_timed_event>::operator=(
    t_global_timed_event* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11246
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_global_timed_event* t_counted_ptr<t_global_timed_event>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:11247
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_global_timed_event& t_counted_ptr<t_global_timed_event>::operator*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:11248
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_global_triggerable_event>::t_counted_ptr<t_global_triggerable_event>(
    t_global_triggerable_event* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11249
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_global_triggerable_event>& t_counted_ptr<t_global_triggerable_event>::operator=(
    t_global_triggerable_event* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11250
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_global_triggerable_event* t_counted_ptr<t_global_triggerable_event>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:11251
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_global_continuous_event>::t_counted_ptr<t_global_continuous_event>(
    t_global_continuous_event* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11252
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_global_continuous_event>& t_counted_ptr<t_global_continuous_event>::operator=(
    t_global_continuous_event* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11253
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_global_continuous_event* t_counted_ptr<t_global_continuous_event>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:11254
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_global_placed_event>::t_counted_ptr<t_global_placed_event>(t_global_placed_event* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:11255
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_global_placed_event>& t_counted_ptr<t_global_placed_event>::operator=(
    t_global_placed_event* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11256
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_global_placed_event* t_counted_ptr<t_global_placed_event>::operator->() const
{
    // Body unavailable.
}

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:11257
VA_CHT_1(0x004c8310, 0xf3)
t_handler_2<t_artifact_type, bool&> function_2_handler(void (* arg_0)(t_artifact_type, bool&))
{
    // Body unavailable.
}

// name:A; map symbol; map:11258
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_array<unsigned char>::t_owned_array<unsigned char>(unsigned char* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:11259
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_array<unsigned char>::~t_owned_array<unsigned char>()
{
    // Body unavailable.
}

// name:A; map symbol; map:11260
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
unsigned char* t_owned_array<unsigned char>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:11261
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
unsigned char& t_owned_array<unsigned char>::operator[](int arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:11262
VA_CHT_1(0x004bb0f0, 0xea)
void put_bitset(std::basic_streambuf<char, std::char_traits<char>>& arg_0, std::bitset<12> const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:11263
VA_CHT_1(0x004cbac0, 0x9f)
std::bitset<232> get_bitset(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:11264
VA_CHT_1(0x004d3d40, 0x9f)
std::bitset<12> get_bitset(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:11265
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<t_adventure_event_base*> bound_handler(
    t_adventure_map& arg_0,
    void (t_adventure_map::*)(t_adventure_event_base*)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11266
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_material enum_incr(t_material& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:11267
VA_CHT_1(0x004d32f0, 0x97)
t_static_vector<int, 67>::t_static_vector<int, 67>()
{
    // Body unavailable.
}

// name:A; map symbol; map:11268
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_static_vector<int, 67>::~t_static_vector<int, 67>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:11269
VA_CHT_1(0x004d38a0, 0x97)
t_static_vector<int, 7>::t_static_vector<int, 7>()
{
    // Body unavailable.
}

// name:A; map symbol; map:11270
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_static_vector<int, 7>::~t_static_vector<int, 7>()
{
    // Body unavailable.
}

// name:A; map symbol; map:11275
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int square(int const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:11276
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_gateway* t_counted_ptr<t_gateway>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:11277
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_const_ptr<t_gateway>::t_counted_const_ptr<t_gateway>(t_counted_ptr<t_gateway> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:11278
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_const_ptr<t_adv_teleporter_exit>::t_counted_const_ptr<t_adv_teleporter_exit>(
    t_counted_ptr<t_adv_teleporter_exit> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11279
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_const_ptr<t_adv_whirlpool>::t_counted_const_ptr<t_adv_whirlpool>(
    t_counted_ptr<t_adv_whirlpool> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11280
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_direction enum_incr(t_direction& arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:11282
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_segment_overlay<t_tile_visibility_data>::t_map_segment_overlay<t_tile_visibility_data>(
    t_map_rect_2d const& arg_0,
    t_tile_visibility_data const& arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11283
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_map_rect_2d::height() const
{
    // Body unavailable.
}

// name:A; map symbol; map:11284
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_map_rect_2d::width() const
{
    // Body unavailable.
}

// name:A; map symbol; map:11285
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_tile_visibility_data& t_map_segment_overlay<t_tile_visibility_data>::operator[](t_map_point_2d const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:11286
VA_CHT_1(0x004c8410, 0xea)
void put_bitset(std::basic_streambuf<char, std::char_traits<char>>& arg_0, std::bitset<6> const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:11287
VA_CHT_1(0x004dd920, 0xa0)
std::bitset<6> get_bitset(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:11468
VA_CHT_1_COMPGEN(0x004de3f0, 0x1e, SCALAR_DELETING_DTOR, t_adventure_ai)

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:11469
VA_CHT_1_COMPGEN(0x004deea0, 0x1e, SCALAR_DELETING_DTOR, t_saved_combat)

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:11470
VA_CHT_1_COMPGEN(0x004df620, 0x1e, SCALAR_DELETING_DTOR, t_shroud_transition_map)

// name:A; map symbol; map:11471
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_counted_ptr<t_adventure_event_base>")

// name:A; map symbol; map:11472
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_counted_ptr<t_hero>")

// name:A; map symbol; map:11475
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_magi_eye& t_adv_magi_eye::operator=(t_adv_magi_eye const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:11476
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_obelisk& t_adv_obelisk::operator=(t_adv_obelisk const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:11477
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_obelisk::t_adv_obelisk(t_adv_obelisk const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:11478
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_map::t_object_node& t_adventure_map::t_object_node::operator=(
    t_adventure_map::t_object_node const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11479
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_adventure_map::t_object_node)

// name:A; map symbol; map:11480
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_counted_ptr<t_global_placed_event>")

// name:A; map symbol; map:11481
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_shared_ptr<t_player>")

// name:A; map symbol; map:11482
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_counted_ptr<t_adv_shipyard>")

// name:A; map symbol; map:11483
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_counted_ptr<t_adv_subterranean_gate>")

// name:A; map symbol; map:11485
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_counted_ptr<t_global_timed_event>")

// name:A; map symbol; map:11486
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_counted_ptr<t_global_triggerable_event>")

// name:A; map symbol; map:11487
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_counted_ptr<t_global_continuous_event>")

// name:A; map symbol; map:11488
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_bool_array)

// name:A; map symbol; map:11489
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_counted_ptr<t_hero_carryover_data>")

// name:A; map symbol; map:11490
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_counted_ptr<t_gateway>")

namespace {

// name:A; map symbol; map:11491
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_position::t_object_position(t_object_position const& arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:11492
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_counted_const_ptr<t_gateway>")

// name:A; map symbol; map:11493
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_counted_const_ptr<t_adv_teleporter_exit>")

// name:A; map symbol; map:11494
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_counted_const_ptr<t_adv_whirlpool>")

// name:A; map symbol; map:11495
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_copy_on_write_ptr<std::vector<t_shroud_transition, std::allocator<t_shroud_transition>>>")

// name:A; map symbol; map:11499
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_adventure_tile)

// name:A; map symbol; map:11508
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bool_array::t_bool_array(t_bool_array const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:11509
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_adventure_tile_vertex)

// name:A; map symbol; map:11510
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_object_position)

// name:A; map symbol; map:11514
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_magi_eye::t_adv_magi_eye(t_adv_magi_eye const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:11515
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_map::t_object_node::t_object_node(t_adventure_map::t_object_node const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:11516
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_saved_combat::~t_saved_combat()
{
    // Body unavailable.
}

// name:A; map symbol; map:11517
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_battlefield>::~t_counted_ptr<t_battlefield>()
{
    // Body unavailable.
}

// name:A; map symbol; map:11518
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_shroud_transition_map::~t_shroud_transition_map()
{
    // Body unavailable.
}

// name:A; map symbol; map:11519
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_adv_object& t_abstract_adv_object::operator=(t_abstract_adv_object const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:11520
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_object_map_info& t_adv_object_map_info::operator=(t_adv_object_map_info const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:11521
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_stationary_adventure_object& t_stationary_adventure_object::operator=(
    t_stationary_adventure_object const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11522
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_gateway>::~t_counted_ptr<t_gateway>()
{
    // Body unavailable.
}

// name:A; map symbol; map:11523
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_battlefield_terrain_map>::~t_counted_ptr<t_battlefield_terrain_map>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:11524
VA_CHT_1(0x004d1650, 0xee)
t_adventure_object& t_adventure_object::operator=(t_adventure_object const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:11525
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_object_memory_cache_refrence& t_adventure_object_memory_cache_refrence::operator=(
    t_adventure_object_memory_cache_refrence const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11527
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<t_adventure_event_base*>::t_handler_1<t_adventure_event_base*>(
    t_handler_base_1<t_adventure_event_base*>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11529
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_artifact_type, bool&>::t_handler_2<t_artifact_type, bool&>(
    t_handler_base_2<t_artifact_type, bool&>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11541
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::less<t_visibility_point> t_vector_set<t_visibility_point, std::less<t_visibility_point>, std::allocator<t_visibility_point>>::key_comp(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:11545
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::less<t_creature_stack*> t_vector_set<t_creature_stack*, std::less<t_creature_stack*>, std::allocator<t_creature_stack*>>::key_comp(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:11557
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_function_handler_2<void (*)(t_artifact_type, bool&), t_artifact_type, bool&>::t_function_handler_2<void (*)(t_artifact_type, bool&), t_artifact_type, bool&>(
    void (* arg_0)(t_artifact_type, bool&)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11558
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_function_handler_2<void (*)(t_artifact_type, bool&), t_artifact_type, bool&>::operator()(
    t_artifact_type arg_0,
    bool& arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11559
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_1<t_adventure_map, t_adventure_event_base*>::t_bound_handler_1<t_adventure_map, t_adventure_event_base*>(
    t_adventure_map& arg_0,
    void (t_adventure_map::*)(t_adventure_event_base*)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11560
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_1<t_adventure_map, t_adventure_event_base*>::operator()(t_adventure_event_base* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:11561
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_function_handler_2<void (*)(t_artifact_type, bool&), t_artifact_type, bool&>")

// name:A; map symbol; map:11562
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_function_handler_2<void (*)(t_artifact_type, bool&), t_artifact_type, bool&>")

// name:A; map symbol; map:11563
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_artifact_type, bool&>::t_handler_base_2<t_artifact_type, bool&>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:11564
VA_CHT_1_COMPGEN(0x004deee0, 0x1e, SCALAR_DELETING_DTOR, "t_bound_handler_1<t_adventure_map, t_adventure_event_base*>")

// name:A; map symbol; map:11565
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_1<t_adventure_map, t_adventure_event_base*>")

// name:A; map symbol; map:11566
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_1<t_adventure_event_base*>::t_handler_base_1<t_adventure_event_base*>()
{
    // Body unavailable.
}

// name:A; map symbol; map:11567
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_function_handler_2<void (*)(t_artifact_type, bool&), t_artifact_type, bool&>::~t_function_handler_2<void (*)(t_artifact_type, bool&), t_artifact_type, bool&>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:11568
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_artifact_type, bool&>::~t_handler_base_2<t_artifact_type, bool&>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:11569
VA_CHT_1(0x004def20, 0x21)
t_abstract_function_2<void, t_artifact_type, bool&>::~t_abstract_function_2<void, t_artifact_type, bool&>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:11570
VA_CHT_1_COMPGEN(0x004deec0, 0x20, SCALAR_DELETING_DTOR, "t_abstract_function_2<void, t_artifact_type, bool&>")

// name:A; map symbol; map:11571
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_abstract_function_2<void, t_artifact_type, bool&>")

// name:A; map symbol; map:11572
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_handler_base_2<t_artifact_type, bool&>")

// name:A; map symbol; map:11573
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_handler_base_2<t_artifact_type, bool&>")

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:11574
VA_CHT_1(0x004dcd90, 0x4e)
t_abstract_function_2<void, t_artifact_type, bool&>::t_abstract_function_2<void, t_artifact_type, bool&>()
{
    // Body unavailable.
}

// name:A; map symbol; map:11575
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_1<t_adventure_map, t_adventure_event_base*>::~t_bound_handler_1<t_adventure_map, t_adventure_event_base*>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:11576
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_1<t_adventure_event_base*>::~t_handler_base_1<t_adventure_event_base*>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:11577
VA_CHT_1(0x004def50, 0x21)
t_abstract_function_1<void, t_adventure_event_base*>::~t_abstract_function_1<void, t_adventure_event_base*>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:11578
VA_CHT_1_COMPGEN(0x004def00, 0x20, VECTOR_DELETING_DTOR, "t_abstract_function_1<void, t_adventure_event_base*>")

// name:A; map symbol; map:11579
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_abstract_function_1<void, t_adventure_event_base*>")

// name:A; map symbol; map:11580
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_handler_base_1<t_adventure_event_base*>")

// name:A; map symbol; map:11581
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_handler_base_1<t_adventure_event_base*>")

// name:A; map symbol; map:11582
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_function_1<void, t_adventure_event_base*>::t_abstract_function_1<void, t_adventure_event_base*>()
{
    // Body unavailable.
}

// name:A; map symbol; map:11626
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_adventure_object_cache_manager>& t_counted_ptr<t_adventure_object_cache_manager>::operator=(
    t_counted_ptr<t_adventure_object_cache_manager> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11627
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_adventure_event_base>::t_counted_ptr<t_adventure_event_base>(
    t_counted_ptr<t_adventure_event_base> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11628
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_basic_isometric_map<t_isometric_tile_map_base, t_copy_on_write_ptr<std::vector<t_shroud_transition, std::allocator<t_shroud_transition>>>>::t_basic_isometric_map<t_isometric_tile_map_base, t_copy_on_write_ptr<std::vector<t_shroud_transition, std::allocator<t_shroud_transition>>>>(
    int arg_0,
    int arg_1,
    int arg_2,
    t_copy_on_write_ptr<std::vector<t_shroud_transition, std::allocator<t_shroud_transition>>> const& arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11629
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
copy_on_write_ptr_details::t_body<std::vector<t_shroud_transition, std::allocator<t_shroud_transition>>>* t_copy_on_write_ptr<std::vector<t_shroud_transition, std::allocator<t_shroud_transition>>>::get_default_body(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:11630
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_copy_on_write_ptr<std::vector<t_shroud_transition, std::allocator<t_shroud_transition>>>::split()
{
    // Body unavailable.
}

// name:A; map symbol; map:11631
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_shared_ptr<t_player>::t_shared_ptr<t_player>(t_shared_ptr<t_player> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:11632
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_shared_ptr<t_player>& t_shared_ptr<t_player>::operator=(t_shared_ptr<t_player> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:11633
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_shared_ptr<t_player>::set(t_player* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:11634
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_shared_ptr<t_player>::construct(t_player* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:11635
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_adventure_object>& t_counted_ptr<t_adventure_object>::operator=(
    t_counted_ptr<t_adventure_object> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11639
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_hero>::t_counted_ptr<t_hero>(t_counted_ptr<t_hero> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:11640
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_visibility_point const* t_vector_set<t_visibility_point, std::less<t_visibility_point>, std::allocator<t_visibility_point>>::lower_bound(
    t_visibility_point const& arg_0
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:11641
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_creature_stack* const* t_vector_set<t_creature_stack*, std::less<t_creature_stack*>, std::allocator<t_creature_stack*>>::lower_bound(
    t_creature_stack* const& arg_0
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:11643
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_basic_isometric_map<t_isometric_vertex_map_base, int>::t_basic_isometric_map<t_isometric_vertex_map_base, int>(
    int arg_0,
    int arg_1,
    int arg_2,
    int const& arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11644
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_global_timed_event>::t_counted_ptr<t_global_timed_event>(
    t_counted_ptr<t_global_timed_event> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11645
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_global_timed_event>& t_counted_ptr<t_global_timed_event>::operator=(
    t_counted_ptr<t_global_timed_event> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11646
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_global_triggerable_event>::t_counted_ptr<t_global_triggerable_event>(
    t_counted_ptr<t_global_triggerable_event> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11647
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_global_triggerable_event>& t_counted_ptr<t_global_triggerable_event>::operator=(
    t_counted_ptr<t_global_triggerable_event> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11648
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_global_continuous_event>::t_counted_ptr<t_global_continuous_event>(
    t_counted_ptr<t_global_continuous_event> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11649
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_global_continuous_event>& t_counted_ptr<t_global_continuous_event>::operator=(
    t_counted_ptr<t_global_continuous_event> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11650
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_global_placed_event>::t_counted_ptr<t_global_placed_event>(
    t_counted_ptr<t_global_placed_event> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11651
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_global_placed_event>& t_counted_ptr<t_global_placed_event>::operator=(
    t_counted_ptr<t_global_placed_event> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11654
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_gateway>::t_counted_ptr<t_gateway>(t_counted_ptr<t_gateway> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:11655
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_gateway>& t_counted_ptr<t_gateway>::operator=(t_counted_ptr<t_gateway> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:11656
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_adv_teleporter_exit>::t_counted_ptr<t_adv_teleporter_exit>(
    t_counted_ptr<t_adv_teleporter_exit> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11657
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_adv_teleporter_exit>& t_counted_ptr<t_adv_teleporter_exit>::operator=(
    t_counted_ptr<t_adv_teleporter_exit> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11658
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_const_ptr<t_gateway>::t_counted_const_ptr<t_gateway>(t_counted_const_ptr<t_gateway> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:11659
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_const_ptr<t_gateway>& t_counted_const_ptr<t_gateway>::operator=(
    t_counted_const_ptr<t_gateway> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11660
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_const_ptr<t_adv_teleporter_exit>::t_counted_const_ptr<t_adv_teleporter_exit>(
    t_counted_const_ptr<t_adv_teleporter_exit> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11661
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_const_ptr<t_adv_teleporter_exit>& t_counted_const_ptr<t_adv_teleporter_exit>::operator=(
    t_counted_const_ptr<t_adv_teleporter_exit> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11662
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_const_ptr<t_adv_whirlpool>::t_counted_const_ptr<t_adv_whirlpool>(
    t_counted_const_ptr<t_adv_whirlpool> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11663
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_const_ptr<t_adv_whirlpool>& t_counted_const_ptr<t_adv_whirlpool>::operator=(
    t_counted_const_ptr<t_adv_whirlpool> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11664
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
unsigned int t_map_segment_overlay<t_tile_visibility_data>::compute_index(t_map_point_2d arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:11669
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_adventure_object_memory_cache>& t_counted_ptr<t_adventure_object_memory_cache>::operator=(
    t_counted_ptr<t_adventure_object_memory_cache> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11672
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_1<t_adventure_event_base*>>::t_counted_ptr<t_handler_base_1<t_adventure_event_base*>>(
    t_handler_base_1<t_adventure_event_base*>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11673
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_2<t_artifact_type, bool&>>::t_counted_ptr<t_handler_base_2<t_artifact_type, bool&>>(
    t_handler_base_2<t_artifact_type, bool&>* arg_0
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:11700
VA_CHT_1(0x004d1320, 0x10a)
t_adventure_tile& t_adventure_tile::operator=(t_adventure_tile const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:11701
VA_CHT_1(0x004d0ae0, 0xd9)
t_adventure_tile::t_adventure_tile(t_adventure_tile const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:11702
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_adventure_tile& t_abstract_adventure_tile::operator=(t_abstract_adventure_tile const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:11703
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_adventure_tile::t_abstract_adventure_tile(t_abstract_adventure_tile const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:11704
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_tile& t_abstract_tile::operator=(t_abstract_tile const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:11705
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_tile::t_abstract_tile(t_abstract_tile const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:11708
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
copy_on_write_ptr_details::t_body<std::vector<t_shroud_transition, std::allocator<t_shroud_transition>>>::t_body<std::vector<t_shroud_transition, std::allocator<t_shroud_transition>>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:11709
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
copy_on_write_ptr_details::t_body<std::vector<t_shroud_transition, std::allocator<t_shroud_transition>>>::t_body<std::vector<t_shroud_transition, std::allocator<t_shroud_transition>>>(
    std::vector<t_shroud_transition, std::allocator<t_shroud_transition>> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11711
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_copy_on_write_ptr<t_abstract_tile::t_transition_info>::t_copy_on_write_ptr<t_abstract_tile::t_transition_info>(
    t_copy_on_write_ptr<t_abstract_tile::t_transition_info> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11712
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_copy_on_write_ptr<std::vector<int, std::allocator<int>>>& t_copy_on_write_ptr<std::vector<int, std::allocator<int>>>::operator=(
    t_copy_on_write_ptr<std::vector<int, std::allocator<int>>> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11713
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_basic_isometric_map<t_isometric_tile_map_base, t_copy_on_write_ptr<std::vector<t_shroud_transition, std::allocator<t_shroud_transition>>>>::initialize(
    int arg_0,
    int arg_1,
    int arg_2,
    t_copy_on_write_ptr<std::vector<t_shroud_transition, std::allocator<t_shroud_transition>>> const& arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:11714
VA_CHT_1(0x004dfeb0, 0xad)
void t_shared_ptr<t_player>::assign(t_player* arg_0, t_shared_ptr_base const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:11715
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_shared_ptr<t_player>::add_link(t_shared_ptr_base const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:11718
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_basic_isometric_map<t_isometric_vertex_map_base, int>::initialize(
    int arg_0,
    int arg_1,
    int arg_2,
    int const& arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11743
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_copy_on_write_ptr<std::vector<t_shroud_transition, std::allocator<t_shroud_transition>>>::t_copy_on_write_ptr<std::vector<t_shroud_transition, std::allocator<t_shroud_transition>>>(
    t_copy_on_write_ptr<std::vector<t_shroud_transition, std::allocator<t_shroud_transition>>> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11750
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_handler_base_1<t_adventure_event_base*>")

// name:A; map symbol; map:11751
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_handler_base_2<t_artifact_type, bool&>")

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:11752
VA_CHT_1_COMPGEN(0x004e00f0, 0x8, VECTOR_DELETING_DTOR, "t_bound_handler_1<t_adventure_map, t_adventure_event_base*>")

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:11753
VA_CHT_1_COMPGEN(0x004e0100, 0x8, VECTOR_DELETING_DTOR, t_adventure_map)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:11754
VA_CHT_1_COMPGEN(0x004e0110, 0x8, VECTOR_DELETING_DTOR, "t_function_handler_2<void (*)(t_artifact_type, bool&), t_artifact_type, bool&>")

// === .rdata (18 symbols) ===

// confidence:A; rtti-name; map:43270
DATA_CHT_1_COMPGEN(0x008d412c, "const t_adventure_map::`vftable'{for `t_counted_object'}")

// confidence:B; rtti-order; map:43271
DATA_CHT_1_COMPGEN(0x008d4134, "const t_adventure_map::`vftable'{for `t_abstract_adventure_map'}")

// confidence:A; rtti-name; map:43272
DATA_CHT_1_COMPGEN(0x008d4188, "const t_global_timed_event::`vftable'")

// confidence:A; rtti-name; map:43273
DATA_CHT_1_COMPGEN(0x008d4190, "const t_global_triggerable_event::`vftable'")

// confidence:A; rtti-name; map:43274
DATA_CHT_1_COMPGEN(0x008d4198, "const t_global_continuous_event::`vftable'")

// confidence:A; rtti-name; map:43275
DATA_CHT_1_COMPGEN(0x008d41a0, "const t_global_placed_event::`vftable'")

// name:A; map symbol; map:43276
DATA_CHT_1(UNACCOUNTED)
// __real@8@4001e000000000000000

// confidence:A; rtti-name; map:43277
DATA_CHT_1_COMPGEN(0x008d41b4, "const t_carryover_data::`vftable'")

// name:A; map symbol; map:43278
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_function_handler_2<void (*)(t_artifact_type, bool&), t_artifact_type, bool&>::`vftable'{for `t_abstract_function_2<void, t_artifact_type, bool&>'}")

// name:A; map symbol; map:43279
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_function_handler_2<void (*)(t_artifact_type, bool&), t_artifact_type, bool&>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:43280
DATA_CHT_1_COMPGEN(0x008d41dc, "const t_bound_handler_1<t_adventure_map, t_adventure_event_base*>::`vftable'{for `t_abstract_function_1<void, t_adventure_event_base*>'}")

// confidence:B; rtti-order; map:43281
DATA_CHT_1_COMPGEN(0x008d41e8, "const t_bound_handler_1<t_adventure_map, t_adventure_event_base*>::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:43282
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_2<t_artifact_type, bool&>::`vftable'{for `t_abstract_function_2<void, t_artifact_type, bool&>'}")

// name:A; map symbol; map:43283
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_2<t_artifact_type, bool&>::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:43284
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_1<t_adventure_event_base*>::`vftable'{for `t_abstract_function_1<void, t_adventure_event_base*>'}")

// name:A; map symbol; map:43285
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_1<t_adventure_event_base*>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:43286
DATA_CHT_1_COMPGEN(0x008d41d0, "const t_abstract_function_2<void, t_artifact_type, bool&>::`vftable'")

// confidence:A; rtti-name; map:43287
DATA_CHT_1_COMPGEN(0x008d41f0, "const t_abstract_function_1<void, t_adventure_event_base*>::`vftable'")

// === .rdata$r (59 symbols) ===

// confidence:A; rtti-col-pointer; type-name=.?AVt_adventure_map@@;vft=4d412c;col=4fba68;td=58e174;chd=4fba58;offset=8;cdOffset=0;validated-hierarchy; map:48951
DATA_CHT_1_COMPGEN(0x008fba68, "const t_adventure_map::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_uncopyable@@;bcd=4fb9fc;pmd=16,-1,0;attributes=9;validated-hierarchy-link; map:48952
DATA_CHT_1_COMPGEN(0x008fb9fc, "t_uncopyable::`RTTI Base Class Descriptor at (16, -1, 0, 9)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_counted_object@@;bcd=4fba14;pmd=8,-1,0;attributes=0;validated-hierarchy-link; map:48953
DATA_CHT_1_COMPGEN(0x008fba14, "t_counted_object::`RTTI Base Class Descriptor at (8, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adventure_map@@;bcd=4fba2c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48954
DATA_CHT_1_COMPGEN(0x008fba2c, "t_adventure_map::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adventure_map@@;vft=4d412c;col=4fba68;td=58e174;chd=4fba58;offset=8;cdOffset=0;validated-hierarchy; map:48955
DATA_CHT_1_COMPGEN(0x008fba44, "t_adventure_map::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adventure_map@@;vft=4d412c;col=4fba68;td=58e174;chd=4fba58;offset=8;cdOffset=0;validated-hierarchy; map:48956
DATA_CHT_1_COMPGEN(0x008fba58, "t_adventure_map::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:48957
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adventure_map::`RTTI Complete Object Locator'{for `t_abstract_adventure_map'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_global_player_filtered_event@@;bcd=4fba7c;pmd=64,-1,0;attributes=0;validated-hierarchy-link; map:48958
DATA_CHT_1_COMPGEN(0x008fba7c, "t_global_player_filtered_event::`RTTI Base Class Descriptor at (64, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_global_timed_event@@;bcd=4fba94;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48959
DATA_CHT_1_COMPGEN(0x008fba94, "t_global_timed_event::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_global_timed_event@@;vft=4d4188;col=4fbad8;td=58e1c4;chd=4fbac8;offset=0;cdOffset=0;validated-hierarchy; map:48960
DATA_CHT_1_COMPGEN(0x008fbaac, "t_global_timed_event::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_global_timed_event@@;vft=4d4188;col=4fbad8;td=58e1c4;chd=4fbac8;offset=0;cdOffset=0;validated-hierarchy; map:48961
DATA_CHT_1_COMPGEN(0x008fbac8, "t_global_timed_event::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_global_timed_event@@;vft=4d4188;col=4fbad8;td=58e1c4;chd=4fbac8;offset=0;cdOffset=0;validated-hierarchy; map:48962
DATA_CHT_1_COMPGEN(0x008fbad8, "const t_global_timed_event::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_global_triggerable_event@@;bcd=4fbaec;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48963
DATA_CHT_1_COMPGEN(0x008fbaec, "t_global_triggerable_event::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_global_triggerable_event@@;vft=4d4190;col=4fbb2c;td=58e1e8;chd=4fbb1c;offset=0;cdOffset=0;validated-hierarchy; map:48964
DATA_CHT_1_COMPGEN(0x008fbb04, "t_global_triggerable_event::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_global_triggerable_event@@;vft=4d4190;col=4fbb2c;td=58e1e8;chd=4fbb1c;offset=0;cdOffset=0;validated-hierarchy; map:48965
DATA_CHT_1_COMPGEN(0x008fbb1c, "t_global_triggerable_event::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_global_triggerable_event@@;vft=4d4190;col=4fbb2c;td=58e1e8;chd=4fbb1c;offset=0;cdOffset=0;validated-hierarchy; map:48966
DATA_CHT_1_COMPGEN(0x008fbb2c, "const t_global_triggerable_event::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_global_continuous_event@@;bcd=4fbb40;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48967
DATA_CHT_1_COMPGEN(0x008fbb40, "t_global_continuous_event::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_global_continuous_event@@;vft=4d4198;col=4fbb7c;td=58e214;chd=4fbb6c;offset=0;cdOffset=0;validated-hierarchy; map:48968
DATA_CHT_1_COMPGEN(0x008fbb58, "t_global_continuous_event::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_global_continuous_event@@;vft=4d4198;col=4fbb7c;td=58e214;chd=4fbb6c;offset=0;cdOffset=0;validated-hierarchy; map:48969
DATA_CHT_1_COMPGEN(0x008fbb6c, "t_global_continuous_event::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_global_continuous_event@@;vft=4d4198;col=4fbb7c;td=58e214;chd=4fbb6c;offset=0;cdOffset=0;validated-hierarchy; map:48970
DATA_CHT_1_COMPGEN(0x008fbb7c, "const t_global_continuous_event::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_global_player_filtered_event@@;bcd=4fbb90;pmd=56,-1,0;attributes=0;validated-hierarchy-link; map:48971
DATA_CHT_1_COMPGEN(0x008fbb90, "t_global_player_filtered_event::`RTTI Base Class Descriptor at (56, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_global_placed_event@@;bcd=4fbba8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48972
DATA_CHT_1_COMPGEN(0x008fbba8, "t_global_placed_event::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_global_placed_event@@;vft=4d41a0;col=4fbbe8;td=58e23c;chd=4fbbd8;offset=0;cdOffset=0;validated-hierarchy; map:48973
DATA_CHT_1_COMPGEN(0x008fbbc0, "t_global_placed_event::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_global_placed_event@@;vft=4d41a0;col=4fbbe8;td=58e23c;chd=4fbbd8;offset=0;cdOffset=0;validated-hierarchy; map:48974
DATA_CHT_1_COMPGEN(0x008fbbd8, "t_global_placed_event::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_global_placed_event@@;vft=4d41a0;col=4fbbe8;td=58e23c;chd=4fbbd8;offset=0;cdOffset=0;validated-hierarchy; map:48975
DATA_CHT_1_COMPGEN(0x008fbbe8, "const t_global_placed_event::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_carryover_data@@;bcd=4fbbfc;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48976
DATA_CHT_1_COMPGEN(0x008fbbfc, "t_carryover_data::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_carryover_data@@;vft=4d41b4;col=4fbc30;td=58e260;chd=4fbc20;offset=0;cdOffset=0;validated-hierarchy; map:48977
DATA_CHT_1_COMPGEN(0x008fbc14, "t_carryover_data::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_carryover_data@@;vft=4d41b4;col=4fbc30;td=58e260;chd=4fbc20;offset=0;cdOffset=0;validated-hierarchy; map:48978
DATA_CHT_1_COMPGEN(0x008fbc20, "t_carryover_data::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_carryover_data@@;vft=4d41b4;col=4fbc30;td=58e260;chd=4fbc20;offset=0;cdOffset=0;validated-hierarchy; map:48979
DATA_CHT_1_COMPGEN(0x008fbc30, "const t_carryover_data::`RTTI Complete Object Locator'")

// name:A; map symbol; map:48980
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_function_handler_2<void (*)(t_artifact_type, bool&), t_artifact_type, bool&>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_artifact_type, bool&>'}")

// name:A; map symbol; map:48981
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_abstract_function_2<void, t_artifact_type, bool&>::`RTTI Base Class Descriptor at (8, -1, 0, 0)'")

// name:A; map symbol; map:48982
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_handler_base_2<t_artifact_type, bool&>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// name:A; map symbol; map:48983
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_function_handler_2<void (*)(t_artifact_type, bool&), t_artifact_type, bool&>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// name:A; map symbol; map:48984
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_function_handler_2<void (*)(t_artifact_type, bool&), t_artifact_type, bool&>::`RTTI Base Class Array'")

// name:A; map symbol; map:48985
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_function_handler_2<void (*)(t_artifact_type, bool&), t_artifact_type, bool&>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:48986
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_function_handler_2<void (*)(t_artifact_type, bool&), t_artifact_type, bool&>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_1@Vt_adventure_map@@PAVt_adventure_event_base@@@@;vft=4d41dc;col=4fbde0;td=58e428;chd=4fbdd0;offset=8;cdOffset=0;validated-hierarchy; map:48987
DATA_CHT_1_COMPGEN(0x008fbde0, "const t_bound_handler_1<t_adventure_map, t_adventure_event_base*>::`RTTI Complete Object Locator'{for `t_abstract_function_1<void, t_adventure_event_base*>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_1@XPAVt_adventure_event_base@@@@;bcd=4fbd74;pmd=8,-1,0;attributes=0;validated-hierarchy-link; map:48988
DATA_CHT_1_COMPGEN(0x008fbd74, "t_abstract_function_1<void, t_adventure_event_base*>::`RTTI Base Class Descriptor at (8, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_handler_base_1@PAVt_adventure_event_base@@@@;bcd=4fbd8c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48989
DATA_CHT_1_COMPGEN(0x008fbd8c, "t_handler_base_1<t_adventure_event_base*>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_1@Vt_adventure_map@@PAVt_adventure_event_base@@@@;bcd=4fbda4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48990
DATA_CHT_1_COMPGEN(0x008fbda4, "t_bound_handler_1<t_adventure_map, t_adventure_event_base*>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_1@Vt_adventure_map@@PAVt_adventure_event_base@@@@;vft=4d41dc;col=4fbde0;td=58e428;chd=4fbdd0;offset=8;cdOffset=0;validated-hierarchy; map:48991
DATA_CHT_1_COMPGEN(0x008fbdbc, "t_bound_handler_1<t_adventure_map, t_adventure_event_base*>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_1@Vt_adventure_map@@PAVt_adventure_event_base@@@@;vft=4d41dc;col=4fbde0;td=58e428;chd=4fbdd0;offset=8;cdOffset=0;validated-hierarchy; map:48992
DATA_CHT_1_COMPGEN(0x008fbdd0, "t_bound_handler_1<t_adventure_map, t_adventure_event_base*>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:48993
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_1<t_adventure_map, t_adventure_event_base*>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// name:A; map symbol; map:48994
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_2<t_artifact_type, bool&>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_artifact_type, bool&>'}")

// name:A; map symbol; map:48995
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_handler_base_2<t_artifact_type, bool&>::`RTTI Base Class Array'")

// name:A; map symbol; map:48996
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_handler_base_2<t_artifact_type, bool&>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:48997
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_2<t_artifact_type, bool&>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// name:A; map symbol; map:48998
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_1<t_adventure_event_base*>::`RTTI Complete Object Locator'{for `t_abstract_function_1<void, t_adventure_event_base*>'}")

// name:A; map symbol; map:48999
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_handler_base_1<t_adventure_event_base*>::`RTTI Base Class Array'")

// name:A; map symbol; map:49000
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_handler_base_1<t_adventure_event_base*>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:49001
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_1<t_adventure_event_base*>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_2@XW4t_artifact_type@@AA_N@@;bcd=4fbc44;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49002
DATA_CHT_1_COMPGEN(0x008fbc44, "t_abstract_function_2<void, t_artifact_type, bool&>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_function_2@XW4t_artifact_type@@AA_N@@;vft=4d41d0;col=4fbc74;td=58e2d0;chd=4fbc64;offset=0;cdOffset=0;validated-hierarchy; map:49003
DATA_CHT_1_COMPGEN(0x008fbc5c, "t_abstract_function_2<void, t_artifact_type, bool&>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_function_2@XW4t_artifact_type@@AA_N@@;vft=4d41d0;col=4fbc74;td=58e2d0;chd=4fbc64;offset=0;cdOffset=0;validated-hierarchy; map:49004
DATA_CHT_1_COMPGEN(0x008fbc64, "t_abstract_function_2<void, t_artifact_type, bool&>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_function_2@XW4t_artifact_type@@AA_N@@;vft=4d41d0;col=4fbc74;td=58e2d0;chd=4fbc64;offset=0;cdOffset=0;validated-hierarchy; map:49005
DATA_CHT_1_COMPGEN(0x008fbc74, "const t_abstract_function_2<void, t_artifact_type, bool&>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_1@XPAVt_adventure_event_base@@@@;bcd=4fbd1c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49006
DATA_CHT_1_COMPGEN(0x008fbd1c, "t_abstract_function_1<void, t_adventure_event_base*>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_function_1@XPAVt_adventure_event_base@@@@;vft=4d41f0;col=4fbd4c;td=58e3a0;chd=4fbd3c;offset=0;cdOffset=0;validated-hierarchy; map:49007
DATA_CHT_1_COMPGEN(0x008fbd34, "t_abstract_function_1<void, t_adventure_event_base*>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_function_1@XPAVt_adventure_event_base@@@@;vft=4d41f0;col=4fbd4c;td=58e3a0;chd=4fbd3c;offset=0;cdOffset=0;validated-hierarchy; map:49008
DATA_CHT_1_COMPGEN(0x008fbd3c, "t_abstract_function_1<void, t_adventure_event_base*>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_function_1@XPAVt_adventure_event_base@@@@;vft=4d41f0;col=4fbd4c;td=58e3a0;chd=4fbd3c;offset=0;cdOffset=0;validated-hierarchy; map:49009
DATA_CHT_1_COMPGEN(0x008fbd4c, "const t_abstract_function_1<void, t_adventure_event_base*>::`RTTI Complete Object Locator'")

// === .data (29 symbols) ===

// name:A; map symbol; map:57714
DATA_CHT_1_COMPGEN(UNACCOUNTED, "slot >= 0&& slot < k_artifact_s...")

// name:A; map symbol; map:57715
DATA_CHT_1_COMPGEN(UNACCOUNTED, "C:\\\\work\\\\game\\\\carryover_data.h")

// confidence:A; rtti-type-name; type-name=.?AVt_adventure_map@@;td=58e174;validated-header; map:57716
DATA_CHT_1_COMPGEN(0x0098e174, "t_adventure_map `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_global_player_filtered_event@@;td=58e194;validated-header; map:57717
DATA_CHT_1_COMPGEN(0x0098e194, "t_global_player_filtered_event `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_global_timed_event@@;td=58e1c4;validated-header; map:57718
DATA_CHT_1_COMPGEN(0x0098e1c4, "t_global_timed_event `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_global_triggerable_event@@;td=58e1e8;validated-header; map:57719
DATA_CHT_1_COMPGEN(0x0098e1e8, "t_global_triggerable_event `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_global_continuous_event@@;td=58e214;validated-header; map:57720
DATA_CHT_1_COMPGEN(0x0098e214, "t_global_continuous_event `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_global_placed_event@@;td=58e23c;validated-header; map:57721
DATA_CHT_1_COMPGEN(0x0098e23c, "t_global_placed_event `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_carryover_data@@;td=58e260;validated-header; map:57722
DATA_CHT_1_COMPGEN(0x0098e260, "t_carryover_data `RTTI Type Descriptor'")

// name:A; map symbol; map:57723
DATA_CHT_1_COMPGEN(UNACCOUNTED, "anti_stealth >= k_mastery_none&...")

// name:A; map symbol; map:57724
DATA_CHT_1_COMPGEN(UNACCOUNTED, "visibility >= 0&& visibility < ...")

// name:A; map symbol; map:57725
DATA_CHT_1_COMPGEN(UNACCOUNTED, "C:\\\\work\\\\game\\\\visibility_point.h")

// name:A; map symbol; map:57726
DATA_CHT_1_COMPGEN(UNACCOUNTED, "type >= 0&& type < k_terrain_co...")

// name:A; map symbol; map:57727
DATA_CHT_1_COMPGEN(UNACCOUNTED, "m_impl.is_valid( point )")

// name:A; map symbol; map:57728
DATA_CHT_1_COMPGEN(UNACCOUNTED, "C:\\\\work\\\\game\\\\shroud_transition_m...")

// name:A; map symbol; map:57729
DATA_CHT_1_COMPGEN(UNACCOUNTED, "new_visibility >= 0&& new_visib...")

// confidence:A; rtti-type-name; type-name=.?AVt_artifact_effect@@;td=58e280;validated-header; map:57730
DATA_CHT_1_COMPGEN(0x0098e280, "t_artifact_effect `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_single_spell@t_artifact_prop@@;td=58e2a0;validated-header; map:57731
DATA_CHT_1_COMPGEN(0x0098e2a0, "t_artifact_prop::t_single_spell `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_function_2@XW4t_artifact_type@@AA_N@@;td=58e2d0;validated-header; map:57732
DATA_CHT_1_COMPGEN(0x0098e2d0, "t_abstract_function_2<void, t_artifact_type, bool&> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_handler_base_2@W4t_artifact_type@@AA_N@@;td=58e310;validated-header; map:57733
DATA_CHT_1_COMPGEN(0x0098e310, "t_handler_base_2<t_artifact_type, bool&> `RTTI Type Descriptor'")

// name:A; map symbol; map:57734
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_function_handler_2<void (*)(t_artifact_type, bool&), t_artifact_type, bool&> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_function_1@XPAVt_adventure_event_base@@@@;td=58e3a0;validated-header; map:57735
DATA_CHT_1_COMPGEN(0x0098e3a0, "t_abstract_function_1<void, t_adventure_event_base*> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_handler_base_1@PAVt_adventure_event_base@@@@;td=58e3e4;validated-header; map:57736
DATA_CHT_1_COMPGEN(0x0098e3e4, "t_handler_base_1<t_adventure_event_base*> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_1@Vt_adventure_map@@PAVt_adventure_event_base@@@@;td=58e428;validated-header; map:57737
DATA_CHT_1_COMPGEN(0x0098e428, "t_bound_handler_1<t_adventure_map, t_adventure_event_base*> `RTTI Type Descriptor'")

// name:A; map symbol; map:57738
DATA_CHT_1_COMPGEN(UNACCOUNTED, "point.column < m_extent.bottom_r...")

// name:A; map symbol; map:57739
DATA_CHT_1_COMPGEN(UNACCOUNTED, "point.row < m_extent.bottom_righ...")

// name:A; map symbol; map:57740
DATA_CHT_1_COMPGEN(UNACCOUNTED, "point.column >= m_extent.top_lef...")

// name:A; map symbol; map:57741
DATA_CHT_1_COMPGEN(UNACCOUNTED, "point.row >= m_extent.top_left.r...")

// name:A; map symbol; map:57742
DATA_CHT_1_COMPGEN(UNACCOUNTED, "C:\\\\work\\\\game\\\\map_segment_overlay...")

// === .bss (9 symbols) ===

// name:A; map symbol; map:60008
DATA_CHT_1(UNACCOUNTED)
std::_Tree<t_artifact_type, std::pair<t_artifact_type const, t_ai_importance>, std::map<t_artifact_type, t_ai_importance, std::less<t_artifact_type>, std::allocator<t_ai_importance>>::_Kfn, std::less<t_artifact_type>, std::allocator<t_ai_importance>>::_Node*std::_Tree<t_artifact_type, std::pair<t_artifact_type const, t_ai_importance>, std::map<t_artifact_type, t_ai_importance, std::less<t_artifact_type>, std::allocator<t_ai_importance>>::_Kfn, std::less<t_artifact_type>, std::allocator<t_ai_importance>>::_Nil; // Initial value unavailable.

// name:A; map symbol; map:60010
DATA_CHT_1(UNACCOUNTED)
std::_Tree<t_spell, std::pair<t_spell const, t_ai_importance>, std::map<t_spell, t_ai_importance, std::less<t_spell>, std::allocator<t_ai_importance>>::_Kfn, std::less<t_spell>, std::allocator<t_ai_importance>>::_Node*std::_Tree<t_spell, std::pair<t_spell const, t_ai_importance>, std::map<t_spell, t_ai_importance, std::less<t_spell>, std::allocator<t_ai_importance>>::_Kfn, std::less<t_spell>, std::allocator<t_ai_importance>>::_Nil; // Initial value unavailable.

// name:A; map symbol; map:60012
DATA_CHT_1(UNACCOUNTED)
std::_Tree<t_counted_const_ptr<t_adv_ferry>, std::pair<t_counted_const_ptr<t_adv_ferry> const, int>, std::map<t_counted_const_ptr<t_adv_ferry>, int, std::less<t_counted_const_ptr<t_adv_ferry>>, std::allocator<int>>::_Kfn, std::less<t_counted_const_ptr<t_adv_ferry>>, std::allocator<int>>::_Node*std::_Tree<t_counted_const_ptr<t_adv_ferry>, std::pair<t_counted_const_ptr<t_adv_ferry> const, int>, std::map<t_counted_const_ptr<t_adv_ferry>, int, std::less<t_counted_const_ptr<t_adv_ferry>>, std::allocator<int>>::_Kfn, std::less<t_counted_const_ptr<t_adv_ferry>>, std::allocator<int>>::_Nil; // Initial value unavailable.

// name:A; map symbol; map:60015
DATA_CHT_1(UNACCOUNTED)
std::_Tree<std::string, std::pair<std::string const, bool>, std::map<std::string, bool, t_string_insensitive_less, std::allocator<bool>>::_Kfn, t_string_insensitive_less, std::allocator<bool>>::_Node*std::_Tree<std::string, std::pair<std::string const, bool>, std::map<std::string, bool, t_string_insensitive_less, std::allocator<bool>>::_Kfn, t_string_insensitive_less, std::allocator<bool>>::_Nil; // Initial value unavailable.

// name:A; map symbol; map:60017
DATA_CHT_1(UNACCOUNTED)
std::_Tree<std::string, std::pair<std::string const, std::list<t_adv_map_point, std::allocator<t_adv_map_point>>>, std::map<std::string, std::list<t_adv_map_point, std::allocator<t_adv_map_point>>, t_string_insensitive_less, std::allocator<std::list<t_adv_map_point, std::allocator<t_adv_map_point>>>>::_Kfn, t_string_insensitive_less, std::allocator<std::list<t_adv_map_point, std::allocator<t_adv_map_point>>>>::_Node*std::_Tree<std::string, std::pair<std::string const, std::list<t_adv_map_point, std::allocator<t_adv_map_point>>>, std::map<std::string, std::list<t_adv_map_point, std::allocator<t_adv_map_point>>, t_string_insensitive_less, std::allocator<std::list<t_adv_map_point, std::allocator<t_adv_map_point>>>>::_Kfn, t_string_insensitive_less, std::allocator<std::list<t_adv_map_point, std::allocator<t_adv_map_point>>>>::_Nil; // Initial value unavailable.

// name:A; map symbol; map:60019
DATA_CHT_1(UNACCOUNTED)
std::_Tree<std::string, std::pair<std::string const, t_hero*>, std::map<std::string, t_hero*, t_string_insensitive_less, std::allocator<t_hero*>>::_Kfn, t_string_insensitive_less, std::allocator<t_hero*>>::_Node*std::_Tree<std::string, std::pair<std::string const, t_hero*>, std::map<std::string, t_hero*, t_string_insensitive_less, std::allocator<t_hero*>>::_Kfn, t_string_insensitive_less, std::allocator<t_hero*>>::_Nil; // Initial value unavailable.

// name:A; map symbol; map:60021
DATA_CHT_1(UNACCOUNTED)
std::_Tree<std::string, std::pair<std::string const, t_town*>, std::map<std::string, t_town*, t_string_insensitive_less, std::allocator<t_town*>>::_Kfn, t_string_insensitive_less, std::allocator<t_town*>>::_Node*std::_Tree<std::string, std::pair<std::string const, t_town*>, std::map<std::string, t_town*, t_string_insensitive_less, std::allocator<t_town*>>::_Kfn, t_string_insensitive_less, std::allocator<t_town*>>::_Nil; // Initial value unavailable.

// name:A; map symbol; map:60023
DATA_CHT_1(UNACCOUNTED)
std::_Tree<t_adv_ferry const*, std::pair<t_adv_ferry const* const, t_level_map_point_2d_list>, std::map<t_adv_ferry const*, t_level_map_point_2d_list, std::less<t_adv_ferry const*>, std::allocator<t_level_map_point_2d_list>>::_Kfn, std::less<t_adv_ferry const*>, std::allocator<t_level_map_point_2d_list>>::_Node*std::_Tree<t_adv_ferry const*, std::pair<t_adv_ferry const* const, t_level_map_point_2d_list>, std::map<t_adv_ferry const*, t_level_map_point_2d_list, std::less<t_adv_ferry const*>, std::allocator<t_level_map_point_2d_list>>::_Kfn, std::less<t_adv_ferry const*>, std::allocator<t_level_map_point_2d_list>>::_Nil; // Initial value unavailable.

// name:A; map symbol; map:60025
DATA_CHT_1(UNACCOUNTED)
std::_Tree<t_level_map_point_2d, std::pair<t_level_map_point_2d const, t_adv_ferry const*>, std::multimap<t_level_map_point_2d, t_adv_ferry const*, std::less<t_level_map_point_2d>, std::allocator<t_adv_ferry const*>>::_Kfn, std::less<t_level_map_point_2d>, std::allocator<t_adv_ferry const*>>::_Node*std::_Tree<t_level_map_point_2d, std::pair<t_level_map_point_2d const, t_adv_ferry const*>, std::multimap<t_level_map_point_2d, t_adv_ferry const*, std::less<t_level_map_point_2d>, std::allocator<t_adv_ferry const*>>::_Kfn, std::less<t_level_map_point_2d>, std::allocator<t_adv_ferry const*>>::_Nil; // Initial value unavailable.
