// adv_garrison.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\adv_garrison.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 42/80 (A:27 B:4 C:11); unaccounted 38; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (53 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:71132; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0043c140, 0x15, STATIC_INIT_DISPATCH, "adv_garrison#1")

// name:C; dyninit; see ledger; map:71133
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adv_garrison#1")

// confidence:A; dyninit-init; owner-conf-B; map:71134; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0043c160, 0x1c, STATIC_INIT_DISPATCH, g_garrison_registration)

// name:B; dyninit; see ledger; map:71135
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, g_garrison_registration)

// name:A; map symbol; map:4602
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_adv_garrison::get_version() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:4603
VA_CHT_1(0x0043c180, 0x2f)
bool t_adv_garrison::read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_qualified_adv_object_type const& arg_1,
    int arg_2
)
{
    // Body unavailable.
}

// confidence:A; align-order; stable,vslot; map:4604
VA_CHT_1(0x0043c1b0, 0x5)
bool t_adv_garrison::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:4605
VA_CHT_1(0x0043c1c0, 0x20e)
void t_adv_garrison::activate_trigger(
    t_army* arg_0,
    t_adv_map_point const& arg_1,
    t_direction arg_2,
    t_adventure_frame* arg_3
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:4606
VA_CHT_1(0x0043c3d0, 0x72)
void t_adv_garrison::on_combat_end(
    t_army* arg_0,
    t_combat_result arg_1,
    t_creature_array* arg_2,
    t_adventure_frame* arg_3
)
{
    // Body unavailable.
}

// confidence:C; align-order; retn; map:4607
VA_CHT_1(0x0043c450, 0xa0)
void t_adv_garrison::visit(t_army* arg_0, t_adventure_frame* arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:4608
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_town_image_level t_adv_garrison::get_castle_level() const
{
    // Body unavailable.
}

// name:A; map symbol; map:4609
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_cursor const& t_adv_garrison::get_cursor(
    t_adventure_map_window const& arg_0,
    t_army const* arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:4610
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adv_garrison::left_double_click(t_mouse_event const& arg_0, t_adventure_frame* arg_1)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vslot; map:4611
VA_CHT_1(0x0043c5a0, 0x9f)
void t_adv_garrison::right_click(t_mouse_event const& arg_0, t_adventure_frame* arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:4612
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adv_garrison::blocks_army(t_creature_array const& arg_0, t_path_search_type arg_1) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:4613
VA_CHT_1(0x0043c640, 0x109)
bool t_adv_garrison::is_triggered_by(t_creature_array const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:4614
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
float t_adv_garrison::ai_activation_value_drop(t_creature_array const& arg_0) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:4615
VA_CHT_1(0x0043c7c0, 0xcd)
float t_adv_garrison::ai_value(t_adventure_ai const& arg_0, t_creature_array const& arg_1, int arg_2) const
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:71136; name:B (dyninit; see ledger)
VA_CHT_1(0x0043cb40, 0x20)
// adv_garrison$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:A; dyninit-tinit; owner-conf-C; map:71138; name:B (dyninit; see ledger)
VA_CHT_1(0x0043cb60, 0x5c)
// adv_garrison$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:71139
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adv_garrison$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:71140
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adv_garrison$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:71141
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adv_garrison$tatexit4
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:4616
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_creature_array& t_ownable_garrisonable_adv_object::get_garrison()
{
    // Body unavailable.
}

// name:A; map symbol; map:4617
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool same_team(t_player const* arg_0, t_player const* arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:4618
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_context_hero::t_script_context_hero(
    t_adventure_map* arg_0,
    t_hero* arg_1,
    t_creature_array* arg_2,
    t_player* arg_3,
    t_creature_array* arg_4,
    t_player* arg_5,
    t_adv_map_point const* arg_6
)
{
    // Body unavailable.
}

// name:A; map symbol; map:4619
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_ownable_garrisonable_adv_object::set_can_remove_garrison(bool arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:4620
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool defender_lost(t_combat_result arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:4621
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_cursor const& t_adventure_map_window::get_activate_cursor() const
{
    // Body unavailable.
}

// name:A; map symbol; map:4622
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_cursor const& t_adventure_map_window::get_attack_cursor() const
{
    // Body unavailable.
}

// name:A; map symbol; map:4623
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_map_point const& t_army::get_destination() const
{
    // Body unavailable.
}

// name:A; map symbol; map:4624
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_creature_array const& t_ownable_garrisonable_adv_object::get_garrison() const
{
    // Body unavailable.
}

// name:A; map symbol; map:4625
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
float t_ai_army_data_cache::get_bounty() const
{
    // Body unavailable.
}

// name:A; map symbol; map:4626
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_ai_army_data_cache* t_counted_ptr<t_ai_army_data_cache>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:4627
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_registration<t_adv_garrison>::t_object_registration<t_adv_garrison>(t_adv_object_type arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:4628
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_factory<t_adv_garrison>::t_object_factory<t_adv_garrison>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:4629
VA_CHT_1(0x0043c890, 0x103)
t_stationary_adventure_object* t_object_factory<t_adv_garrison>::create(
    std::string const& arg_0,
    t_qualified_adv_object_type const& arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:4630
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_garrison::t_adv_garrison(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:4631
VA_CHT_1_COMPGEN(0x0043c9a0, 0x33, SCALAR_DELETING_DTOR, t_adv_garrison)

// name:A; map symbol; map:4632
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_adv_garrison)

// name:A; map symbol; map:4633
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// public: void t_adv_garrison::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:4634
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_garrison::~t_adv_garrison()
{
    // Body unavailable.
}

// name:A; map symbol; map:4635
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_ownable_garrisonable_adv_object::~t_ownable_garrisonable_adv_object()
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:4636
VA_CHT_1_COMPGEN(0x0043cbc0, 0x8, VECTOR_DELETING_DTOR, t_adv_garrison)

// confidence:C; align-order; stable; map:4637
VA_CHT_1_COMPGEN(0x0043cbd0, 0x8, VECTOR_DELETING_DTOR, t_adv_garrison)

// confidence:C; align-order; stable; map:4638
VA_CHT_1(0x0043cbe0, 0x8)
// [thunk]: protected: virtual int t_ownable_garrisonable_adv_object::compute_scouting_range`adjustor{84}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:4639
VA_CHT_1_COMPGEN(0x0043cbf0, 0xe, VECTOR_DELETING_DTOR, t_adv_garrison)

// confidence:C; align-order; stable; map:4640
VA_CHT_1(0x0043cc00, 0xe)
// [thunk]: public: virtual t_player_color t_owned_adv_object::get_player_color`vtordisp{-4, 140}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:4641
VA_CHT_1(0x0043cc10, 0x8)
// [thunk]: public: virtual t_town_image_level t_adv_garrison::get_castle_level`vtordisp{-4, 0}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:4642
VA_CHT_1(0x0043cc20, 0x8)
// [thunk]: public: virtual t_creature_array* t_creature_array::get_creature_array`adjustor{76}'(void)
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:4643
VA_CHT_1(0x0043cc30, 0x8)
// [thunk]: public: virtual t_ownable_garrisonable_adv_object* t_ownable_garrisonable_adv_object::get_ownable_garrison`vtordisp{-4, 0}'(void)
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:4644
VA_CHT_1(0x0043cc40, 0xe)
// [thunk]: public: virtual int t_owned_adv_object::get_owner_number`vtordisp{-4, 140}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:4645
VA_CHT_1(0x0043cc50, 0x8)
// [thunk]: public: virtual bool t_ownable_garrisonable_adv_object::get_virtual_position`vtordisp{-4, 0}'(t_adv_map_point&) const
// Function body not reconstructed; signature retained as a comment.

// === .rdata (10 symbols) ===

// name:A; map symbol; map:42824
DATA_CHT_1(UNACCOUNTED)
// __real@4@400b9c40000000000000

// confidence:A; rtti-name; map:42825
DATA_CHT_1_COMPGEN(0x008cf4ec, "const t_object_factory<t_adv_garrison>::`vftable'")

// name:A; map symbol; map:42826
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_garrison::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:42827
DATA_CHT_1_COMPGEN(0x008cf4fc, "const t_adv_garrison::`vftable'")

// confidence:B; rtti-order; map:42828
DATA_CHT_1_COMPGEN(0x008cf5bc, "const t_adv_garrison::`vftable'{for `t_creature_array'}")

// confidence:B; rtti-order; map:42829
DATA_CHT_1_COMPGEN(0x008cf5f0, "const t_adv_garrison::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:42830
DATA_CHT_1_COMPGEN(0x008cf5fc, "const t_adv_garrison::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:42831
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_garrison::`vbtable'")

// name:A; map symbol; map:42832
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_garrison::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:42833
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_garrison::`vbtable'{for `t_abstract_stationary_adv_object'}")

// === .rdata$r (13 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_object_factory@Vt_adv_garrison@@@@;bcd=4f7314;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48015
DATA_CHT_1_COMPGEN(0x008f7314, "t_object_factory<t_adv_garrison>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_object_factory@Vt_adv_garrison@@@@;vft=4cf4ec;col=4f7348;td=588860;chd=4f7338;offset=0;cdOffset=0;validated-hierarchy; map:48016
DATA_CHT_1_COMPGEN(0x008f732c, "t_object_factory<t_adv_garrison>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_object_factory@Vt_adv_garrison@@@@;vft=4cf4ec;col=4f7348;td=588860;chd=4f7338;offset=0;cdOffset=0;validated-hierarchy; map:48017
DATA_CHT_1_COMPGEN(0x008f7338, "t_object_factory<t_adv_garrison>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_object_factory@Vt_adv_garrison@@@@;vft=4cf4ec;col=4f7348;td=588860;chd=4f7338;offset=0;cdOffset=0;validated-hierarchy; map:48018
DATA_CHT_1_COMPGEN(0x008f7348, "const t_object_factory<t_adv_garrison>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:48019
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_garrison::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_adv_garrison@@;vft=4cf4fc;col=4f7428;td=5888c4;chd=4f7418;offset=236;cdOffset=0;validated-hierarchy; map:48020
DATA_CHT_1_COMPGEN(0x008f7428, "const t_adv_garrison::`RTTI Complete Object Locator'")

// name:A; map symbol; map:48021
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_garrison::`RTTI Complete Object Locator'{for `t_creature_array'}")

// name:A; map symbol; map:48022
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_garrison::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_ownable_garrisonable_adv_object@@;bcd=4f73ac;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48023
DATA_CHT_1_COMPGEN(0x008f73ac, "t_ownable_garrisonable_adv_object::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adv_garrison@@;bcd=4f73c4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48024
DATA_CHT_1_COMPGEN(0x008f73c4, "t_adv_garrison::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adv_garrison@@;vft=4cf4fc;col=4f7428;td=5888c4;chd=4f7418;offset=236;cdOffset=0;validated-hierarchy; map:48025
DATA_CHT_1_COMPGEN(0x008f73dc, "t_adv_garrison::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adv_garrison@@;vft=4cf4fc;col=4f7428;td=5888c4;chd=4f7418;offset=236;cdOffset=0;validated-hierarchy; map:48026
DATA_CHT_1_COMPGEN(0x008f7418, "t_adv_garrison::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:48027
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_garrison::`RTTI Complete Object Locator'{for `t_counted_object'}")

// === .data (3 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AV?$t_object_factory@Vt_adv_garrison@@@@;td=588860;validated-header; map:57482
DATA_CHT_1_COMPGEN(0x00988860, "t_object_factory<t_adv_garrison> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_ownable_garrisonable_adv_object@@;td=588894;validated-header; map:57483
DATA_CHT_1_COMPGEN(0x00988894, "t_ownable_garrisonable_adv_object `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_adv_garrison@@;td=5888c4;validated-header; map:57484
DATA_CHT_1_COMPGEN(0x009888c4, "t_adv_garrison `RTTI Type Descriptor'")

// === .bss (1 symbols) ===

namespace {

// confidence:B; dyninit-global; owner-conf-B; map:59951
DATA_CHT_1(0x009c7404)
t_object_registration<t_adv_garrison> g_garrison_registration; // Initial value unavailable.

} // anonymous namespace
