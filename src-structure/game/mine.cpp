// mine.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\mine.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 103/146 (A:51 B:8 C:44); unaccounted 43; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (101 symbols) ===

// name:C; dyninit; see ledger; map:64280
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_INIT_DISPATCH, "mine#1")

// name:C; dyninit; see ledger; map:64281
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "mine#1")

// name:C; dyninit; see ledger; map:64282
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "mine#1")

// name:C; dyninit; see ledger; map:64283
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "mine#1")

// name:C; dyninit; see ledger; map:64284
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_INIT_DISPATCH, "mine#2")

// name:C; dyninit; see ledger; map:64285
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "mine#2")

// name:C; dyninit; see ledger; map:64286
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "mine#2")

// name:C; dyninit; see ledger; map:64287
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "mine#2")

// confidence:A; dyninit-init; owner-conf-C; map:64288; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00723330, 0x15, STATIC_INIT_DISPATCH, "mine#3")

// name:C; dyninit; see ledger; map:64289
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "mine#3")

// confidence:A; dyninit-init; owner-conf-B; map:64290; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00723350, 0x1c, STATIC_INIT_DISPATCH, k_mine_registration)

// name:B; dyninit; see ledger; map:64291
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, k_mine_registration)

// confidence:A; dyninit-init; owner-conf-B; map:64292; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00723370, 0x1c, STATIC_INIT_DISPATCH, k_vein_registration)

// name:B; dyninit; see ledger; map:64293
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, k_vein_registration)

// confidence:C; align-order; retn,stable; map:29993
VA_CHT_1(0x00723390, 0x8)
int get_mine_production(int arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:29994
VA_CHT_1(0x007233a0, 0xf5)
t_mine::t_mine(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:29995
VA_CHT_1(0x00723680, 0x196)
t_mine::t_mine(t_material arg_0, t_two_way_facing arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:64294
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
static char const* get_model_name(t_material arg_0, t_two_way_facing arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:29996
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_mine::get_production(t_material arg_0) const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:29997
VA_CHT_1(0x00723820, 0xd)
int t_mine::get_production() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:29998
VA_CHT_1(0x00723830, 0xa8)
void t_mine::set_owner(int arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:29999
VA_CHT_1(0x007238e0, 0x66)
void t_mine::process_new_day()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:30000
VA_CHT_1(0x00723950, 0x5d5)
void t_mine::activate_trigger(
    t_army* arg_0,
    t_adv_map_point const& arg_1,
    t_direction arg_2,
    t_adventure_frame* arg_3
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:30001
VA_CHT_1(0x00723f30, 0x5e)
void t_mine::on_combat_end(
    t_army* arg_0,
    t_combat_result arg_1,
    t_creature_array* arg_2,
    t_adventure_frame* arg_3
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:30002
VA_CHT_1(0x00723f90, 0x756)
void t_mine::visit(t_army* arg_0, t_adventure_frame* arg_1, bool arg_2)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:30003
VA_CHT_1(0x00724720, 0x3e)
void t_mine::left_double_click(t_mouse_event const& arg_0, t_adventure_frame* arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:30004
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_cursor const& t_mine::get_cursor(t_adventure_map_window const& arg_0, t_army const* arg_1) const
{
    // Body unavailable.
}

// confidence:A; align-order; stable,vslot; map:30005
VA_CHT_1(0x00724760, 0x37)
void t_mine::right_click(t_mouse_event const& arg_0, t_adventure_frame* arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:30006
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_mine::destroy()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:30007
VA_CHT_1(0x007247a0, 0x61)
void t_mine::place(t_adventure_map& arg_0, t_adv_map_point const& arg_1)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:30008
VA_CHT_1(0x00724810, 0x3d)
void t_mine::initialize(t_adventure_map& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:30009
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_mine::get_version() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:30010
VA_CHT_1(0x00724860, 0x24)
bool t_mine::read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_qualified_adv_object_type const& arg_1,
    int arg_2
)
{
    // Body unavailable.
}

// confidence:A; align-order; stable,vslot; map:30011
VA_CHT_1(0x00724890, 0x5)
void t_mine::read_postplacement(t_adventure_map& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:30012
VA_CHT_1(0x007248a0, 0xce)
float t_mine::ai_value(t_adventure_ai const& arg_0, t_creature_array const& arg_1, int arg_2) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:30013
VA_CHT_1(0x00724970, 0x4b)
float t_mine::ai_activation_value_drop(t_creature_array const& arg_0) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:30014
VA_CHT_1(0x007249c0, 0x175)
t_adv_vein::t_adv_vein(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:30015
VA_CHT_1(0x00724bf0, 0x8bb)
void t_adv_vein::activate_trigger(
    t_army* arg_0,
    t_adv_map_point const& arg_1,
    t_direction arg_2,
    t_adventure_frame* arg_3
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:30016
VA_CHT_1(0x007254b0, 0xb3)
float t_adv_vein::ai_value(t_adventure_ai const& arg_0, t_creature_array const& arg_1, int arg_2) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vslot; map:30017
VA_CHT_1(0x00725570, 0x31)
void t_adv_vein::place(t_adventure_map& arg_0, t_adv_map_point const& arg_1)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:64295; name:B (dyninit; see ledger)
VA_CHT_1(0x00725690, 0x20)
// mine$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:A; dyninit-tinit; owner-conf-B; map:64297; name:B (dyninit; see ledger)
VA_CHT_1(0x007256b0, 0x5c)
// mine$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:64298
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// mine$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:64299
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// mine$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:64300
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// mine$tatexit4
// Function body not reconstructed; signature retained as a comment.

// confidence:A; align-band; retn,stable,vslot; map:30018
VA_CHT_1_COMPGEN(0x007234a0, 0x33, SCALAR_DELETING_DTOR, t_mine)

// name:A; map symbol; map:30019
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_mine)

// confidence:C; align-band; retn,stable; map:30020
VA_CHT_1(0x00724b90, 0x57)
// public: void t_mine::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:30021
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_mine::~t_mine()
{
    // Body unavailable.
}

// name:A; map symbol; map:30022
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_material t_mine::get_material() const
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:30023
VA_CHT_1_COMPGEN(0x00724b60, 0x2d, VECTOR_DELETING_DTOR, t_adv_vein)

// name:A; map symbol; map:30024
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_adv_vein)

// name:A; map symbol; map:30025
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// public: void t_adv_vein::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:30026
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_vein::~t_adv_vein()
{
    // Body unavailable.
}

// name:A; map symbol; map:30027
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_registration<t_mine>::t_object_registration<t_mine>(t_adv_object_type arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:30028
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_registration<t_adv_vein>::t_object_registration<t_adv_vein>(t_adv_object_type arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:30029
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_factory<t_mine>::t_object_factory<t_mine>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:30030
VA_CHT_1(0x007255b0, 0x65)
t_stationary_adventure_object* t_object_factory<t_mine>::create(
    std::string const& arg_0,
    t_qualified_adv_object_type const& arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:30031
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_factory<t_adv_vein>::t_object_factory<t_adv_vein>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,vslot; map:30032
VA_CHT_1(0x00725620, 0x62)
t_stationary_adventure_object* t_object_factory<t_adv_vein>::create(
    std::string const& arg_0,
    t_qualified_adv_object_type const& arg_1
) const
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:30033
VA_CHT_1_COMPGEN(0x00725710, 0x8, VECTOR_DELETING_DTOR, t_mine)

// confidence:C; align-order; stable; map:30034
VA_CHT_1_COMPGEN(0x00725720, 0xb, VECTOR_DELETING_DTOR, t_mine)

// confidence:C; align-order; stable; map:30035
VA_CHT_1_COMPGEN(0x00725730, 0x8, VECTOR_DELETING_DTOR, t_mine)

// confidence:C; align-order; stable; map:30036
VA_CHT_1(0x00725740, 0x8)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::accept`vtordisp{-4, 168}'(t_abstract_adv_object_visitor&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:30037
VA_CHT_1(0x00725750, 0xe)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::accept`vtordisp{-4, 168}'(t_abstract_adv_object_visitor&)
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:30038
VA_CHT_1(0x00725760, 0xe)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::animates`vtordisp{-4, 168}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:30039
VA_CHT_1(0x00725770, 0xe)
// [thunk]: public: virtual std::auto_ptr<t_abstract_adv_object> t_adventure_object::clone`adjustor{176}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:30040
VA_CHT_1(0x00725780, 0xe)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_shadow_to`vtordisp{-4, 168}'(unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:30041
VA_CHT_1(0x00725790, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_shadow_to`vtordisp{-4, 168}'(unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:30042
VA_CHT_1(0x007257a0, 0xe)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_subimage_to`vtordisp{-4, 168}'(int, unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:30043
VA_CHT_1(0x007257b0, 0xe)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_subimage_to`vtordisp{-4, 168}'(int, unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&, int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:30044
VA_CHT_1(0x007257c0, 0xe)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_to`vtordisp{-4, 168}'(unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:30045
VA_CHT_1(0x007257d0, 0xe)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_to`vtordisp{-4, 168}'(unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:30046
VA_CHT_1(0x007257e0, 0xe)
// [thunk]: public: virtual t_footprint const& t_abstract_stationary_adv_object::get_footprint`vtordisp{-4, 168}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:30047
VA_CHT_1(0x007257f0, 0xe)
// [thunk]: public: virtual t_player_color t_owned_adv_object::get_player_color`vtordisp{-4, 156}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:30048
VA_CHT_1(0x00725800, 0xe)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_rect`vtordisp{-4, 168}'(unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:30049
VA_CHT_1(0x00725810, 0xe)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_rect`vtordisp{-4, 168}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:30050
VA_CHT_1(0x00725820, 0xe)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_shadow_rect`vtordisp{-4, 168}'(unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:30051
VA_CHT_1(0x00725830, 0xe)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_shadow_rect`vtordisp{-4, 168}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:30052
VA_CHT_1(0x00725840, 0xe)
// [thunk]: public: virtual int t_abstract_stationary_adv_object::get_subimage_count`vtordisp{-4, 168}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:30053
VA_CHT_1(0x00725850, 0xe)
// [thunk]: public: virtual int t_stationary_adventure_object::get_subimage_depth_offset`vtordisp{-4, 168}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:30054
VA_CHT_1(0x00725860, 0xe)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_subimage_rect`vtordisp{-4, 168}'(int, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:30055
VA_CHT_1(0x00725870, 0xe)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_subimage_rect`vtordisp{-4, 168}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:30056
VA_CHT_1(0x00725880, 0xe)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::hit_test`vtordisp{-4, 168}'(unsigned long, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:30057
VA_CHT_1(0x00725890, 0xe)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::is_decorative`vtordisp{-4, 168}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:30058
VA_CHT_1(0x007258a0, 0xe)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::needs_redrawing`vtordisp{-4, 168}'(unsigned long, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:30059
VA_CHT_1(0x007258b0, 0xe)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::subimage_animates`vtordisp{-4, 168}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:30060
VA_CHT_1(0x007258c0, 0xe)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::subimage_is_underlay`vtordisp{-4, 168}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:30061
VA_CHT_1(0x007258d0, 0xe)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::subimage_needs_redrawing`vtordisp{-4, 168}'(int, unsigned long, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:30062
VA_CHT_1(0x007258e0, 0xe)
// [thunk]: public: virtual bool t_adventure_object::uses_bridge_heights`adjustor{176}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:30063
VA_CHT_1(0x007258f0, 0xe)
// [thunk]: public: virtual t_adventure_ai const* t_adventure_object::get_ai`vtordisp{-4, 176}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:30064
VA_CHT_1(0x00725900, 0xb)
// [thunk]: public: virtual t_adventure_frame* t_adventure_object::get_adventure_frame`vtordisp{-4, 176}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:30065
VA_CHT_1(0x00725910, 0xe)
// [thunk]: public: virtual t_adventure_object* t_adventure_object::get_adventure_object`vtordisp{-4, 176}'(void)
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:30066
VA_CHT_1(0x00725920, 0xe)
// [thunk]: public: virtual t_creature_array* t_creature_array::get_creature_array`adjustor{92}'(void)
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:30067
VA_CHT_1(0x00725930, 0xe)
// [thunk]: public: virtual t_adventure_map* t_adventure_object::get_map`vtordisp{-4, 176}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:30068
VA_CHT_1(0x00725940, 0x8)
// [thunk]: public: virtual t_ownable_garrisonable_adv_object* t_ownable_garrisonable_adv_object::get_ownable_garrison`vtordisp{-4, 16}'(void)
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:30069
VA_CHT_1(0x00725950, 0xe)
// [thunk]: public: virtual int t_owned_adv_object::get_owner_number`vtordisp{-4, 156}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:30070
VA_CHT_1(0x00725960, 0xb)
// [thunk]: public: virtual t_adv_map_point t_adventure_object::get_position`vtordisp{-4, 176}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:30071
VA_CHT_1(0x00725970, 0xe)
// [thunk]: public: virtual bool t_ownable_garrisonable_adv_object::get_virtual_position`vtordisp{-4, 16}'(t_adv_map_point&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:30072
VA_CHT_1_COMPGEN(0x00725980, 0xe, VECTOR_DELETING_DTOR, t_adv_vein)

// confidence:C; align-order; stable; map:30073
VA_CHT_1_COMPGEN(0x00725990, 0xb, VECTOR_DELETING_DTOR, t_adv_vein)

// === .rdata (16 symbols) ===

// name:A; map symbol; map:44855
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_mine::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:44856
DATA_CHT_1_COMPGEN(0x008e5cf4, "const t_mine::`vftable'")

// confidence:B; rtti-order; map:44857
DATA_CHT_1_COMPGEN(0x008e5db4, "const t_mine::`vftable'{for `t_creature_array'}")

// confidence:B; rtti-order; map:44858
DATA_CHT_1_COMPGEN(0x008e5de8, "const t_mine::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:44859
DATA_CHT_1_COMPGEN(0x008e5df4, "const t_mine::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:44860
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_mine::`vbtable'")

// name:A; map symbol; map:44861
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_mine::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:44862
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_mine::`vbtable'{for `t_abstract_stationary_adv_object'}")

// name:A; map symbol; map:44863
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_vein::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:44864
DATA_CHT_1_COMPGEN(0x008e5ed4, "const t_adv_vein::`vftable'")

// confidence:B; rtti-order; map:44865
DATA_CHT_1_COMPGEN(0x008e5f94, "const t_adv_vein::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:44866
DATA_CHT_1_COMPGEN(0x008e5f9c, "const t_adv_vein::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:44867
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_vein::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:44868
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_vein::`vbtable'{for `t_abstract_stationary_adv_object'}")

// confidence:A; rtti-name; map:44869
DATA_CHT_1_COMPGEN(0x008e5ce0, "const t_object_factory<t_mine>::`vftable'")

// confidence:A; rtti-name; map:44870
DATA_CHT_1_COMPGEN(0x008e5ce8, "const t_object_factory<t_adv_vein>::`vftable'")

// === .rdata$r (23 symbols) ===

// name:A; map symbol; map:53439
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_mine::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_mine@@;vft=4e5cf4;col=5102d0;td=5ad06c;chd=5102c0;offset=252;cdOffset=0;validated-hierarchy; map:53440
DATA_CHT_1_COMPGEN(0x009102d0, "const t_mine::`RTTI Complete Object Locator'")

// name:A; map symbol; map:53441
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_mine::`RTTI Complete Object Locator'{for `t_creature_array'}")

// name:A; map symbol; map:53442
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_mine::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_mine@@;bcd=51026c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53443
DATA_CHT_1_COMPGEN(0x0091026c, "t_mine::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_mine@@;vft=4e5cf4;col=5102d0;td=5ad06c;chd=5102c0;offset=252;cdOffset=0;validated-hierarchy; map:53444
DATA_CHT_1_COMPGEN(0x00910284, "t_mine::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_mine@@;vft=4e5cf4;col=5102d0;td=5ad06c;chd=5102c0;offset=252;cdOffset=0;validated-hierarchy; map:53445
DATA_CHT_1_COMPGEN(0x009102c0, "t_mine::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:53446
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_mine::`RTTI Complete Object Locator'{for `t_counted_object'}")

// name:A; map symbol; map:53447
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_vein::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_adv_vein@@;vft=4e5ed4;col=510370;td=5ad094;chd=510360;offset=116;cdOffset=0;validated-hierarchy; map:53448
DATA_CHT_1_COMPGEN(0x00910370, "const t_adv_vein::`RTTI Complete Object Locator'")

// name:A; map symbol; map:53449
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_vein::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adv_vein@@;bcd=510320;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53450
DATA_CHT_1_COMPGEN(0x00910320, "t_adv_vein::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adv_vein@@;vft=4e5ed4;col=510370;td=5ad094;chd=510360;offset=116;cdOffset=0;validated-hierarchy; map:53451
DATA_CHT_1_COMPGEN(0x00910338, "t_adv_vein::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adv_vein@@;vft=4e5ed4;col=510370;td=5ad094;chd=510360;offset=116;cdOffset=0;validated-hierarchy; map:53452
DATA_CHT_1_COMPGEN(0x00910360, "t_adv_vein::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:53453
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_vein::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_object_factory@Vt_mine@@@@;bcd=51018c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53454
DATA_CHT_1_COMPGEN(0x0091018c, "t_object_factory<t_mine>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_object_factory@Vt_mine@@@@;vft=4e5ce0;col=5101c0;td=5ad010;chd=5101b0;offset=0;cdOffset=0;validated-hierarchy; map:53455
DATA_CHT_1_COMPGEN(0x009101a4, "t_object_factory<t_mine>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_object_factory@Vt_mine@@@@;vft=4e5ce0;col=5101c0;td=5ad010;chd=5101b0;offset=0;cdOffset=0;validated-hierarchy; map:53456
DATA_CHT_1_COMPGEN(0x009101b0, "t_object_factory<t_mine>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_object_factory@Vt_mine@@@@;vft=4e5ce0;col=5101c0;td=5ad010;chd=5101b0;offset=0;cdOffset=0;validated-hierarchy; map:53457
DATA_CHT_1_COMPGEN(0x009101c0, "const t_object_factory<t_mine>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_object_factory@Vt_adv_vein@@@@;bcd=5101d4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53458
DATA_CHT_1_COMPGEN(0x009101d4, "t_object_factory<t_adv_vein>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_object_factory@Vt_adv_vein@@@@;vft=4e5ce8;col=510208;td=5ad03c;chd=5101f8;offset=0;cdOffset=0;validated-hierarchy; map:53459
DATA_CHT_1_COMPGEN(0x009101ec, "t_object_factory<t_adv_vein>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_object_factory@Vt_adv_vein@@@@;vft=4e5ce8;col=510208;td=5ad03c;chd=5101f8;offset=0;cdOffset=0;validated-hierarchy; map:53460
DATA_CHT_1_COMPGEN(0x009101f8, "t_object_factory<t_adv_vein>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_object_factory@Vt_adv_vein@@@@;vft=4e5ce8;col=510208;td=5ad03c;chd=5101f8;offset=0;cdOffset=0;validated-hierarchy; map:53461
DATA_CHT_1_COMPGEN(0x00910208, "const t_object_factory<t_adv_vein>::`RTTI Complete Object Locator'")

// === .data (4 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_mine@@;td=5ad06c;validated-header; map:58847
DATA_CHT_1_COMPGEN(0x009ad06c, "t_mine `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_adv_vein@@;td=5ad094;validated-header; map:58848
DATA_CHT_1_COMPGEN(0x009ad094, "t_adv_vein `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_object_factory@Vt_mine@@@@;td=5ad010;validated-header; map:58849
DATA_CHT_1_COMPGEN(0x009ad010, "t_object_factory<t_mine> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_object_factory@Vt_adv_vein@@@@;td=5ad03c;validated-header; map:58850
DATA_CHT_1_COMPGEN(0x009ad03c, "t_object_factory<t_adv_vein> `RTTI Type Descriptor'")

// === .bss (2 symbols) ===

namespace {

// confidence:B; dyninit-global; owner-conf-B; map:60286
DATA_CHT_1(0x009f2880)
t_object_registration<t_adv_vein> k_vein_registration; // Initial value unavailable.

// confidence:B; dyninit-global; owner-conf-B; map:60287
DATA_CHT_1(0x009f2884)
t_object_registration<t_mine> k_mine_registration; // Initial value unavailable.

} // anonymous namespace
