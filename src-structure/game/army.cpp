// army.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\army.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 153/235 (A:13 B:6 C:0); unaccounted 82; skipped std 7.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (203 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69650; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0050a6b0, 0x15, STATIC_INIT_DISPATCH, "army#1")

// name:C; dyninit; see ledger; map:69651
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "army#1")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69652; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0050a6d0, 0xa, STATIC_INIT_DISPATCH, "army#2")

// name:C; dyninit; see ledger; map:69653
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "army#2")

// confidence:D; dyninit-init; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:69654; name:A (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0050a6e0, 0x11, STATIC_INIT_DISPATCH, k_text_empty_ship_name)

// confidence:D; dyninit-ctor; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:69655; name:A (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0050a700, 0xd1, STATIC_CTOR, k_text_empty_ship_name)

// name:A; dyninit; see ledger; map:69656
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, k_text_empty_ship_name)

// confidence:D; dyninit-dtor; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:69657; name:A (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0050a7e0, 0xa, STATIC_DTOR, k_text_empty_ship_name)

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:13810
VA_CHT_1(0x0050a7f0, 0x1d5)
t_army::t_army()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:13811
VA_CHT_1(0x0050aa20, 0x1da)
t_army::t_army(t_creature_array* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:13812
VA_CHT_1(0x0050ac00, 0x208)
t_army::t_army(t_army* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:13813
VA_CHT_1(0x0050ae10, 0x1df)
t_army::t_army(t_town_type arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:13814
VA_CHT_1(0x0050aff0, 0x25c)
t_army::t_army(
    t_creature_type arg_0,
    int arg_1,
    int arg_2,
    int arg_3,
    int arg_4,
    t_patrol_type arg_5,
    unsigned char arg_6,
    t_adv_map_point arg_7
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13815
VA_CHT_1(0x0050b250, 0x24f)
void t_army::init()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:13816
VA_CHT_1(0x0050b4a0, 0x26c)
t_army::~t_army()
{
    // Body unavailable.
}

// name:A; map symbol; map:13817
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_army::add_to_owner_army_list()
{
    // Body unavailable.
}

// name:A; map symbol; map:13818
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_army::add_to_owner_graveyard_list()
{
    // Body unavailable.
}

// name:A; map symbol; map:13819
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_army::add_to_owner_object_list()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13820
VA_CHT_1(0x0050b710, 0x48)
void t_army::remove_from_owner_army_list()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13821
VA_CHT_1(0x0050b760, 0x48)
void t_army::remove_from_owner_graveyard_list()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13822
VA_CHT_1(0x0050b7b0, 0x32)
void t_army::remove_from_owner_object_list()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13823
VA_CHT_1(0x0050b7f0, 0x32)
void t_army::add_to_owner_lists()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13824
VA_CHT_1(0x0050b830, 0x35)
void t_army::remove_from_owner_lists()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:13825
VA_CHT_1(0x0050b870, 0x655)
void t_army::update_state()
{
    // Body unavailable.
}

// name:A; map symbol; map:13826
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_army::process_new_day()
{
    // Body unavailable.
}

// confidence:D; align-order; stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:13827
VA_CHT_1(0x0050bed0, 0x15)
t_army* t_army::get_army()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:13828
VA_CHT_1(0x0050bef0, 0x7)
t_army const* t_army::get_army() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:13829
VA_CHT_1(0x0050bf00, 0x7)
t_adv_actor_model const& t_army::get_model() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:13830
VA_CHT_1(0x0050bf10, 0xe5)
void t_army::right_click(t_mouse_event const& arg_0, t_adventure_frame* arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:13831
VA_CHT_1(0x0050c000, 0x8f)
std::string t_army::get_name() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13832
VA_CHT_1(0x0050c090, 0x8f)
void t_army::set_path(t_adventure_path const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:13833
VA_CHT_1(0x0050c120, 0xd7)
t_bitmap_cursor const& t_army::get_cursor(t_adventure_map_window const& arg_0, t_army const* arg_1) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13834
VA_CHT_1(0x0050c200, 0x8f)
void t_army::move(t_level_map_point_2d const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13835
VA_CHT_1(0x0050c290, 0x1df)
void t_army::leave_boat(t_level_map_point_2d const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:13836
VA_CHT_1(0x0050c470, 0x9)
bool t_army::is_graveyard() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13837
VA_CHT_1(0x0050c480, 0x5b)
void merge(t_creature_array& arg_0, t_creature_array& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13838
VA_CHT_1(0x0050c4e0, 0xae4)
void t_army::do_charm(t_army* arg_0, t_adventure_frame* arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:69658
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
static void get_charmed_creatures(
    t_creature_array& arg_0,
    t_creature_array const& arg_1,
    int arg_2,
    t_hero const& arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:69659
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
static void get_diplomacy_creatures(
    t_creature_array& arg_0,
    t_creature_array const& arg_1,
    t_creature_array const& arg_2,
    int arg_3,
    t_hero const& arg_4
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:69660
VA_CHT_1(0x0050cfd0, 0xa8)
static void remove(t_creature_array& arg_0, t_creature_array const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:13839
VA_CHT_1(0x0050d080, 0x40)
void t_army::activate_trigger(
    t_army* arg_0,
    t_adv_map_point const& arg_1,
    t_direction arg_2,
    t_adventure_frame* arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13840
VA_CHT_1(0x0050d0c0, 0x75e)
void t_army::touch_armies(
    t_army* arg_0,
    t_adv_map_point const& arg_1,
    t_direction arg_2,
    t_adventure_frame* arg_3,
    t_adv_map_point const& arg_4
)
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:69661
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// t_army::touch_armies$sdtor
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:13841
VA_CHT_1(0x0050d830, 0x33c)
void t_army::on_combat_end(
    t_army* arg_0,
    t_combat_result arg_1,
    t_creature_array* arg_2,
    t_adventure_frame* arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:13842
VA_CHT_1(0x0050db70, 0x28)
void t_army::set_in_combat(bool arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13843
VA_CHT_1(0x0050dba0, 0x41)
int t_army::get_next_step_cost() const
{
    // Body unavailable.
}

// name:A; map symbol; map:13844
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_army::update_frame()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:13845
VA_CHT_1(0x0050dbf0, 0x4)
int t_army::get_owner_number() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:13846
VA_CHT_1(0x0050dc00, 0x23)
t_player_color t_army::get_owner_color() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:13847
VA_CHT_1(0x0050dc30, 0x26)
t_player_color t_army::get_player_color() const
{
    // Body unavailable.
}

// name:A; map symbol; map:13848
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_army::get_version() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:13849
VA_CHT_1(0x0050dc70, 0x342)
bool t_army::write_object(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:13850
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_army::read(std::basic_streambuf<char, std::char_traits<char>>& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13851
VA_CHT_1(0x0050e370, 0x6b)
void t_army::take_events(t_army::t_events& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:13852
VA_CHT_1(0x0050e3e0, 0x521)
bool t_army::read_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_progress_handler* arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:13853
VA_CHT_1(0x0050ea20, 0x15c)
void t_army::place(t_adventure_map& arg_0, t_adv_map_point const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:13854
VA_CHT_1(0x0050eb80, 0xba)
void t_army::destroy()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:13855
VA_CHT_1(0x0050ec40, 0xdd)
bool t_army::preplacement(t_adventure_map& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:13856
VA_CHT_1(0x0050ed20, 0x25e)
void t_army::initialize(t_adventure_map& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13857
VA_CHT_1(0x0050ef80, 0x20c)
void t_army::set_owner(int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:13858
VA_CHT_1(0x0050f190, 0x1b)
bool t_army::subimage_is_underlay(int arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:13859
VA_CHT_1(0x0050f1b0, 0x1a9)
bool t_army::blocks_army(t_creature_array const& arg_0, t_path_search_type arg_1) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:13860
VA_CHT_1(0x0050f360, 0x56)
t_footprint const& t_army::get_footprint() const
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:69662
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// t_army::get_footprint$sdtor
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:13861
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_army::is_removable() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:13862
VA_CHT_1(0x0050f410, 0x3bf)
bool t_army::process_timed_events(t_adventure_map& arg_0, bool arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:13863
VA_CHT_1(0x0050f7d0, 0x315)
bool t_army::process_continuous_events(t_adventure_map& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:13864
VA_CHT_1(0x0050faf0, 0x356)
bool t_army::process_triggerable_events(t_adventure_map& arg_0, std::string const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:13865
VA_CHT_1(0x0050fe50, 0x22)
int t_army::get_subimage_depth_offset(int arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:13866
VA_CHT_1(0x0050fe80, 0x7)
int t_army::get_scouting_range() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:13867
VA_CHT_1(0x0050fe90, 0x2f)
int t_army::compute_scouting_range() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13868
VA_CHT_1(0x0050fec0, 0x28)
void t_army::update_scouting_range()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:13869
VA_CHT_1(0x0050fef0, 0x132)
bool t_army::is_triggered_by(t_creature_array const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:13870
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_army::read_postplacement(t_adventure_map& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13871
VA_CHT_1(0x00510040, 0x140)
bool t_army::read_built_in_events(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1,
    int arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:13872
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_army::write_built_in_events(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13873
VA_CHT_1(0x00510180, 0x2af)
void t_army::execute_script(t_army_scriptable_event arg_0, t_army* arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:13874
VA_CHT_1(0x00510430, 0xf)
bool t_army::is_boat() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:13875
VA_CHT_1(0x00510440, 0x3d)
void t_army::expend_all_movement()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:13876
VA_CHT_1(0x00510480, 0x42)
void t_army::expend_most_movement(int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:13877
VA_CHT_1(0x005104d0, 0x42)
void t_army::change_movement(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:13878
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_army::expend_embarkation_movement()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13879
VA_CHT_1(0x00510520, 0x7f)
t_respawn_point t_army::get_respawn_data() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13880
VA_CHT_1(0x005105a0, 0x114)
void t_army::compute_initial_alignment_and_xp()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13881
VA_CHT_1(0x005106c0, 0x131)
t_army::t_events::t_events()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13882
VA_CHT_1(0x00510800, 0x5e)
bool t_army::t_events::read_from_map(std::basic_streambuf<char, std::char_traits<char>>& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13883
VA_CHT_1(0x00510860, 0x116)
bool t_army::t_events::read_built_in_events_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:13884
VA_CHT_1(0x00510980, 0x149)
bool t_army::is_visible_to(int arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:13885
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_army::can_be_hidden() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:13886
VA_CHT_1(0x00510ad0, 0x7)
int t_army::ai_get_wander_direction() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13887
VA_CHT_1(0x00510ae0, 0xd)
void t_army::ai_set_wander_direction(int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:13888
VA_CHT_1(0x00510af0, 0x2aa)
float t_army::ai_value(t_adventure_ai const& arg_0, t_creature_array const& arg_1, int arg_2) const
{
    // Body unavailable.
}

// name:A; map symbol; map:13889
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_army::on_begin_turn()
{
    // Body unavailable.
}

// name:A; map symbol; map:13890
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_army::on_end_turn()
{
    // Body unavailable.
}

// confidence:D; align-order; stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:13891
VA_CHT_1(0x00510da0, 0x13)
t_adv_object_icon_type t_army::get_icon_type() const
{
    // Body unavailable.
}

// confidence:D; align-order; stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:13892
VA_CHT_1(0x00510dc0, 0x13)
int t_army::get_attack_range() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:13893
VA_CHT_1(0x00510de0, 0x10)
t_skill_mastery t_army::get_anti_stealth_level() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13894
VA_CHT_1(0x00510e00, 0x3fe)
void t_army::trigger_events()
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:13895
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_graveyard_footprint::are_any_cells_flat() const
{
    // Body unavailable.
}

// name:A; map symbol; map:13896
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_graveyard_footprint::are_any_cells_impassable() const
{
    // Body unavailable.
}

// name:A; map symbol; map:13897
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_point_2d t_graveyard_footprint::get_size() const
{
    // Body unavailable.
}

// name:A; map symbol; map:13898
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_graveyard_footprint::is_cell_flat(t_map_point_2d const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:13899
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_graveyard_footprint::is_cell_impassable(t_map_point_2d const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:13900
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_graveyard_footprint::is_left_edge_trigger(t_map_point_2d const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:13901
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_graveyard_footprint::is_right_edge_trigger(t_map_point_2d const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:13902
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_graveyard_footprint::is_trigger_cell(t_map_point_2d const& arg_0) const
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:13903
VA_CHT_1(0x00511220, 0x89)
bool t_army::trigger_event(t_army& arg_0)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:69663; name:B (dyninit; see ledger)
VA_CHT_1(0x005120f0, 0x20)
// army$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:69665; name:B (dyninit; see ledger)
VA_CHT_1(0x005121c0, 0x5c)
// army$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:69666
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// army$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:69667
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// army$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:69668
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// army$tatexit4
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:13904
VA_CHT_1(0x0050a9d0, 0x4)
t_town_type t_army::get_boat_type() const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:13905
VA_CHT_1_COMPGEN(0x0050a9e0, 0x37, SCALAR_DELETING_DTOR, t_army)

// name:A; map symbol; map:13906
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_army)

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13907
VA_CHT_1(0x005112b0, 0x2c)
// public: void t_army::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:13908
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_hero::is_male() const
{
    // Body unavailable.
}

// name:A; map symbol; map:13909
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_hero::uses_spellcaster_model() const
{
    // Body unavailable.
}

// name:A; map symbol; map:13910
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_creature_stack const& t_creature_array::get_leader() const
{
    // Body unavailable.
}

// name:A; map symbol; map:13911
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_cursor const& t_adventure_map_window::get_normal_cursor() const
{
    // Body unavailable.
}

// name:A; map symbol; map:13912
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_cursor const& t_adventure_map_window::get_transfer_cursor() const
{
    // Body unavailable.
}

// name:A; map symbol; map:13913
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_hero* t_creature_array::get_most_powerful_skill(t_skill_type arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:13914
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_dialog_charm::get_diplomacy_cost() const
{
    // Body unavailable.
}

// name:A; map symbol; map:13915
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int get_skill_power(t_hero const* arg_0, t_skill_type arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:13916
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_skill_mastery get_charm_skill_level(t_hero const* arg_0, t_skill_type arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:13917
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_dialog_charm>::~t_counted_ptr<t_dialog_charm>()
{
    // Body unavailable.
}

// name:A; map symbol; map:13918
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_dialog_full_army>::~t_counted_ptr<t_dialog_full_army>()
{
    // Body unavailable.
}

// name:A; map symbol; map:13919
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_dialog_enemy_runs::enemy_ran() const
{
    // Body unavailable.
}

// name:A; map symbol; map:13920
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_dialog_enemy_runs::use_quick_combat() const
{
    // Body unavailable.
}

// name:A; map symbol; map:13921
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_dialog_enemy_runs>::~t_counted_ptr<t_dialog_enemy_runs>()
{
    // Body unavailable.
}

// name:A; map symbol; map:13922
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_creature_array::set_importance(t_ai_importance arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:13923
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_army::t_events::~t_events()
{
    // Body unavailable.
}

namespace {

// confidence:D; align-band; retn,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:13924
VA_CHT_1(0x0050f3d0, 0x9)
t_graveyard_footprint::t_graveyard_footprint()
{
    // Body unavailable.
}

// name:A; map symbol; map:13925
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_graveyard_footprint::~t_graveyard_footprint()
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:13926
VA_CHT_1_COMPGEN(0x0050f3f0, 0x1e, SCALAR_DELETING_DTOR, t_graveyard_footprint)

// name:A; map symbol; map:13927
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_graveyard_footprint)

// name:A; map symbol; map:13930
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cached_ptr<t_adv_actor_model>::t_cached_ptr<t_adv_actor_model>()
{
    // Body unavailable.
}

// name:A; map symbol; map:13931
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_actor_model& t_cached_ptr<t_adv_actor_model>::operator*() const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13932
VA_CHT_1(0x0050dfc0, 0x30)
t_cached_ptr<t_adv_actor_model>& t_cached_ptr<t_adv_actor_model>::operator=(
    t_cached_ptr<t_adv_actor_model> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:13933
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_dialog_charm>::t_counted_ptr<t_dialog_charm>()
{
    // Body unavailable.
}

// name:A; map symbol; map:13934
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_dialog_charm>& t_counted_ptr<t_dialog_charm>::operator=(t_dialog_charm* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:13935
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_dialog_charm* t_counted_ptr<t_dialog_charm>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:13936
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_dialog_full_army>::t_counted_ptr<t_dialog_full_army>()
{
    // Body unavailable.
}

// name:A; map symbol; map:13937
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_dialog_full_army>& t_counted_ptr<t_dialog_full_army>::operator=(t_dialog_full_army* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:13938
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_dialog_full_army* t_counted_ptr<t_dialog_full_army>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:13939
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_dialog_enemy_runs>::t_counted_ptr<t_dialog_enemy_runs>(t_dialog_enemy_runs* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:13940
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_dialog_enemy_runs* t_counted_ptr<t_dialog_enemy_runs>::operator->() const
{
    // Body unavailable.
}

namespace {

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13941
VA_CHT_1(0x0050e910, 0x10e)
bool write_events(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    std::vector<t_counted_ptr<t_ownable_timed_event>, std::allocator<t_counted_ptr<t_ownable_timed_event>>> const& arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:13942
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool write_events(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    std::vector<t_counted_ptr<t_ownable_triggerable_event>, std::allocator<t_counted_ptr<t_ownable_triggerable_event>>> const& arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:13943
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool write_events(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    std::vector<t_counted_ptr<t_ownable_continuous_event>, std::allocator<t_counted_ptr<t_ownable_continuous_event>>> const& arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13944
VA_CHT_1(0x005112e0, 0x253)
bool read_events(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1,
    int arg_2,
    std::vector<t_counted_ptr<t_ownable_timed_event>, std::allocator<t_counted_ptr<t_ownable_timed_event>>>& arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13945
VA_CHT_1(0x005117a0, 0x254)
bool read_events(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1,
    int arg_2,
    std::vector<t_counted_ptr<t_ownable_triggerable_event>, std::allocator<t_counted_ptr<t_ownable_triggerable_event>>>& arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13946
VA_CHT_1(0x00511540, 0x25e)
bool read_events(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1,
    int arg_2,
    std::vector<t_counted_ptr<t_ownable_continuous_event>, std::allocator<t_counted_ptr<t_ownable_continuous_event>>>& arg_3
)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:13948
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_army_scriptable_event enum_incr(t_army_scriptable_event& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:13949
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_frame* t_counted_ptr<t_adventure_frame>::operator t_adventure_frame*() const
{
    // Body unavailable.
}

namespace {

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13950
VA_CHT_1(0x00512110, 0xa6)
bool read_events_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1,
    std::vector<t_counted_ptr<t_ownable_timed_event>, std::allocator<t_counted_ptr<t_ownable_timed_event>>>& arg_2
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:13951
VA_CHT_1(0x00511c50, 0x24b)
bool read_events_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1,
    std::vector<t_counted_ptr<t_ownable_triggerable_event>, std::allocator<t_counted_ptr<t_ownable_triggerable_event>>>& arg_2
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:13952
VA_CHT_1(0x00511a00, 0x24e)
bool read_events_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1,
    std::vector<t_counted_ptr<t_ownable_continuous_event>, std::allocator<t_counted_ptr<t_ownable_continuous_event>>>& arg_2
)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:13953
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_cached_ptr<t_adv_actor_model>::assign(t_adv_actor_model* arg_0, t_cached_ptr_base const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:13957
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_ownable_built_in_event>::t_counted_ptr<t_ownable_built_in_event>(
    t_counted_ptr<t_ownable_built_in_event> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:13958
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_army)

// name:A; map symbol; map:13959
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_army)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13960
VA_CHT_1_COMPGEN(0x00512220, 0x8, VECTOR_DELETING_DTOR, t_army)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13961
VA_CHT_1(0x00512230, 0x8)
// [thunk]: public: virtual void t_abstract_adv_actor::accept`vtordisp{-4, 356}'(t_abstract_adv_object_visitor&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13962
VA_CHT_1(0x00512240, 0xe)
// [thunk]: public: virtual void t_abstract_adv_actor::accept`vtordisp{-4, 356}'(t_abstract_adv_object_visitor&)
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13963
VA_CHT_1(0x00512250, 0xe)
// [thunk]: public: virtual bool t_abstract_adv_actor::animates`vtordisp{-4, 356}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13964
VA_CHT_1(0x00512260, 0xe)
// [thunk]: public: virtual bool t_army::can_be_hidden`vtordisp{-4, 0}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13965
VA_CHT_1(0x00512270, 0xe)
// [thunk]: public: virtual std::auto_ptr<t_abstract_adv_object> t_adventure_object::clone`adjustor{292}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13966
VA_CHT_1(0x00512280, 0xb)
// [thunk]: public: virtual void t_actor::draw_shadow_to`vtordisp{-4, 252}'(unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13967
VA_CHT_1(0x00512290, 0xe)
// [thunk]: public: virtual void t_actor::draw_shadow_to`vtordisp{-4, 252}'(unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13968
VA_CHT_1(0x005122a0, 0xe)
// [thunk]: public: virtual void t_abstract_adv_actor::draw_subimage_to`vtordisp{-4, 356}'(int, unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13969
VA_CHT_1(0x005122b0, 0xe)
// [thunk]: public: virtual void t_abstract_adv_actor::draw_subimage_to`vtordisp{-4, 356}'(int, unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&, int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13970
VA_CHT_1(0x005122c0, 0xe)
// [thunk]: public: virtual void t_abstract_adv_actor::draw_to`vtordisp{-4, 356}'(unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13971
VA_CHT_1(0x005122d0, 0xe)
// [thunk]: public: virtual void t_abstract_adv_actor::draw_to`vtordisp{-4, 356}'(unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13972
VA_CHT_1(0x005122e0, 0xe)
// [thunk]: public: virtual t_footprint const& t_army::get_footprint`vtordisp{-4, 0}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13973
VA_CHT_1(0x005122f0, 0x8)
// [thunk]: public: virtual t_player_color t_army::get_player_color`vtordisp{-4, 0}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13974
VA_CHT_1(0x00512300, 0x8)
// [thunk]: public: virtual t_screen_rect t_abstract_adv_actor::get_rect`vtordisp{-4, 356}'(unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13975
VA_CHT_1(0x00512310, 0xe)
// [thunk]: public: virtual t_screen_rect t_abstract_adv_actor::get_rect`vtordisp{-4, 356}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13976
VA_CHT_1(0x00512320, 0xe)
// [thunk]: public: virtual t_screen_rect t_actor::get_shadow_rect`vtordisp{-4, 252}'(unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13977
VA_CHT_1(0x00512330, 0xe)
// [thunk]: public: virtual t_screen_rect t_actor::get_shadow_rect`vtordisp{-4, 252}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13978
VA_CHT_1(0x00512340, 0xe)
// [thunk]: public: virtual int t_abstract_adv_actor::get_subimage_count`vtordisp{-4, 356}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13979
VA_CHT_1(0x00512350, 0xe)
// [thunk]: public: virtual int t_army::get_subimage_depth_offset`vtordisp{-4, 0}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13980
VA_CHT_1(0x00512360, 0x8)
// [thunk]: public: virtual t_screen_rect t_abstract_adv_actor::get_subimage_rect`vtordisp{-4, 356}'(int, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13981
VA_CHT_1(0x00512370, 0xe)
// [thunk]: public: virtual t_screen_rect t_abstract_adv_actor::get_subimage_rect`vtordisp{-4, 356}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13982
VA_CHT_1(0x00512380, 0xe)
// [thunk]: public: virtual bool t_abstract_adv_actor::hit_test`vtordisp{-4, 356}'(unsigned long, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13983
VA_CHT_1(0x00512390, 0xe)
// [thunk]: public: virtual bool t_army::is_visible_to`vtordisp{-4, 0}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13984
VA_CHT_1(0x005123a0, 0x8)
// [thunk]: public: virtual bool t_abstract_adv_actor::needs_redrawing`vtordisp{-4, 356}'(unsigned long, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13985
VA_CHT_1(0x005123b0, 0xe)
// [thunk]: public: virtual bool t_abstract_adv_actor::subimage_animates`vtordisp{-4, 356}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13986
VA_CHT_1(0x005123c0, 0xe)
// [thunk]: public: virtual bool t_army::subimage_is_underlay`vtordisp{-4, 0}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13987
VA_CHT_1(0x005123d0, 0x8)
// [thunk]: public: virtual bool t_abstract_adv_actor::subimage_needs_redrawing`vtordisp{-4, 356}'(int, unsigned long, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13988
VA_CHT_1(0x005123e0, 0xe)
// [thunk]: public: virtual bool t_adventure_object::uses_bridge_heights`adjustor{292}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13989
VA_CHT_1(0x005123f0, 0xb)
// [thunk]: public: virtual bool t_abstract_adv_actor::visible_through_obstacles`vtordisp{-4, 356}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13990
VA_CHT_1(0x00512400, 0xe)
// [thunk]: public: virtual t_adventure_ai const* t_adventure_object::get_ai`vtordisp{-4, 292}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13991
VA_CHT_1(0x00512410, 0xe)
// [thunk]: public: virtual t_army const* t_army::get_army`vtordisp{-4, 0}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13992
VA_CHT_1(0x00512420, 0x8)
// [thunk]: public: virtual t_army* t_army::get_army`vtordisp{-4, 0}'(void)
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13993
VA_CHT_1(0x00512430, 0xe)
// [thunk]: public: virtual t_adventure_frame* t_adventure_object::get_adventure_frame`vtordisp{-4, 292}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13994
VA_CHT_1(0x00512440, 0xe)
// [thunk]: public: virtual t_adventure_object* t_adventure_object::get_adventure_object`vtordisp{-4, 292}'(void)
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13995
VA_CHT_1(0x00512450, 0xb)
// [thunk]: public: virtual t_creature_array* t_creature_array::get_creature_array`adjustor{188}'(void)
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13996
VA_CHT_1(0x00512460, 0xe)
// [thunk]: public: virtual t_adventure_map* t_adventure_object::get_map`vtordisp{-4, 292}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13997
VA_CHT_1(0x00512470, 0x8)
// [thunk]: public: virtual int t_army::get_owner_number`vtordisp{-4, 0}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13998
VA_CHT_1(0x00512480, 0xe)
// [thunk]: public: virtual t_adv_map_point t_adventure_object::get_position`vtordisp{-4, 292}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13999
VA_CHT_1(0x00512490, 0xe)
// [thunk]: public: virtual bool t_actor::is_actor`vtordisp{-4, 252}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:14000
VA_CHT_1(0x005124a0, 0x8)
// [thunk]: public: virtual bool t_army::is_boat`vtordisp{-4, 0}'(void) const
// Function body not reconstructed; signature retained as a comment.

// === .rdata (11 symbols) ===

// confidence:B; rtti-order; map:43389
DATA_CHT_1_COMPGEN(0x008d50bc, "const t_army::`vftable'{for `t_adv_object_map_info'}")

// confidence:B; rtti-order; map:43390
DATA_CHT_1_COMPGEN(0x008d50fc, "const t_army::`vftable'{for `t_abstract_adv_object'}")

// confidence:A; rtti-name; map:43391
DATA_CHT_1_COMPGEN(0x008d517c, "const t_army::`vftable'{for `t_creature_array'}")

// confidence:B; rtti-order; map:43392
DATA_CHT_1_COMPGEN(0x008d51b0, "const t_army::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:43393
DATA_CHT_1_COMPGEN(0x008d51bc, "const t_army::`vftable'{for `t_counted_object'}")

// confidence:B; rtti-order; map:43394
DATA_CHT_1_COMPGEN(0x008d5264, "const t_army::`vftable'{for `t_abstract_adv_actor'}")

// name:A; map symbol; map:43395
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_army::`vbtable'")

// name:A; map symbol; map:43396
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_army::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:43397
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_army::`vbtable'{for `t_abstract_adv_actor'}")

// confidence:A; rtti-name; map:43398
DATA_CHT_1_COMPGEN(0x008d52b8, "const t_graveyard_footprint::`vftable'")

// name:A; map symbol; map:43399
DATA_CHT_1(UNACCOUNTED)
// __real@4@400a9c40000000000000

// === .rdata$r (15 symbols) ===

// name:A; map symbol; map:49188
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_army::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// name:A; map symbol; map:49189
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_army::`RTTI Complete Object Locator'{for `t_abstract_adv_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_army@@;vft=4d517c;col=4fcb84;td=58b9d8;chd=4fcc28;offset=116;cdOffset=0;validated-hierarchy; map:49190
DATA_CHT_1_COMPGEN(0x008fcb84, "const t_army::`RTTI Complete Object Locator'{for `t_creature_array'}")

// name:A; map symbol; map:49191
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_army::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// name:A; map symbol; map:49192
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_army::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_uncopyable@@;bcd=4fcbac;pmd=124,-1,0;attributes=9;validated-hierarchy-link; map:49193
DATA_CHT_1_COMPGEN(0x008fcbac, "t_uncopyable::`RTTI Base Class Descriptor at (124, -1, 0, 9)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_creature_array@@;bcd=4fcbc4;pmd=116,-1,0;attributes=0;validated-hierarchy-link; map:49194
DATA_CHT_1_COMPGEN(0x008fcbc4, "t_creature_array::`RTTI Base Class Descriptor at (116, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_army@@;bcd=4fcbdc;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49195
DATA_CHT_1_COMPGEN(0x008fcbdc, "t_army::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_army@@;vft=4d517c;col=4fcb84;td=58b9d8;chd=4fcc28;offset=116;cdOffset=0;validated-hierarchy; map:49196
DATA_CHT_1_COMPGEN(0x008fcbf4, "t_army::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_army@@;vft=4d517c;col=4fcb84;td=58b9d8;chd=4fcc28;offset=116;cdOffset=0;validated-hierarchy; map:49197
DATA_CHT_1_COMPGEN(0x008fcc28, "t_army::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:49198
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_army::`RTTI Complete Object Locator'{for `t_abstract_adv_actor'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_graveyard_footprint@?%C:\Work\game\army.cpp684230526@@;bcd=4fcc4c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49199
DATA_CHT_1_COMPGEN(0x008fcc4c, "t_graveyard_footprint::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_graveyard_footprint@?%C:\Work\game\army.cpp684230526@@;vft=4d52b8;col=4fcc80;td=58f3e8;chd=4fcc70;offset=0;cdOffset=0;validated-hierarchy; map:49200
DATA_CHT_1_COMPGEN(0x008fcc64, "t_graveyard_footprint::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_graveyard_footprint@?%C:\Work\game\army.cpp684230526@@;vft=4d52b8;col=4fcc80;td=58f3e8;chd=4fcc70;offset=0;cdOffset=0;validated-hierarchy; map:49201
DATA_CHT_1_COMPGEN(0x008fcc70, "t_graveyard_footprint::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_graveyard_footprint@?%C:\Work\game\army.cpp684230526@@;vft=4d52b8;col=4fcc80;td=58f3e8;chd=4fcc70;offset=0;cdOffset=0;validated-hierarchy; map:49202
DATA_CHT_1_COMPGEN(0x008fcc80, "const t_graveyard_footprint::`RTTI Complete Object Locator'")

// === .data (5 symbols) ===

// name:A; map symbol; map:57805
DATA_CHT_1_COMPGEN(UNACCOUNTED, "m_gender != k_gender_unknown")

// name:A; map symbol; map:57806
DATA_CHT_1_COMPGEN(UNACCOUNTED, "C:\\\\work\\\\game\\\\hero.h")

// confidence:A; rtti-type-name; type-name=.?AVt_graveyard_footprint@?%C:\Work\game\army.cpp684230526@@;td=58f3e8;validated-header; map:57807
DATA_CHT_1_COMPGEN(0x0098f3e8, "t_graveyard_footprint `RTTI Type Descriptor'")

// name:A; map symbol; map:57808
DATA_CHT_1_COMPGEN(UNACCOUNTED, "version >= 4")

// name:A; map symbol; map:57809
DATA_CHT_1_COMPGEN(UNACCOUNTED, "C:\\\\work\\\\game\\\\army.cpp")

// === .bss (1 symbols) ===

// confidence:B; dyninit-global; owner-conf-B; map:60054
DATA_CHT_1(0x009d141c)
t_external_string const k_text_empty_ship_name; // Initial value unavailable.
