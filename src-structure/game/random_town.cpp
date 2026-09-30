// random_town.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\random_town.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 66/84 (A:22 B:6 C:38); unaccounted 18; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (58 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:63555; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0076ee20, 0x15, STATIC_INIT_DISPATCH, "random_town#1")

// name:C; dyninit; see ledger; map:63556
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "random_town#1")

// confidence:A; dyninit-init; owner-conf-B; map:63557; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0076ee40, 0x1c, STATIC_INIT_DISPATCH, k_registration)

// name:B; dyninit; see ledger; map:63558
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, k_registration)

// confidence:A; align-order; retn,stable,vptr; map:32974
VA_CHT_1(0x0076ee60, 0x11b)
t_random_town::t_random_town(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:32975
VA_CHT_1(0x0076f070, 0xde)
bool t_random_town::read_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_progress_handler* arg_1
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:32976
VA_CHT_1(0x0076f150, 0x2aa)
bool t_random_town::preplacement(t_adventure_map& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vslot; map:32977
VA_CHT_1(0x0076f400, 0x12)
void t_random_town::place(t_adventure_map& arg_0, t_adv_map_point const& arg_1)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:63559; name:B (dyninit; see ledger)
VA_CHT_1(0x0076f490, 0x20)
// random_town$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:A; dyninit-tinit; owner-conf-B; map:63561; name:B (dyninit; see ledger)
VA_CHT_1(0x0076f4b0, 0x5c)
// random_town$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:63562
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// random_town$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:63563
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// random_town$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:63564
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// random_town$tatexit4
// Function body not reconstructed; signature retained as a comment.

// confidence:A; align-band; retn,stable,vslot; map:32978
VA_CHT_1_COMPGEN(0x0076ef80, 0x33, SCALAR_DELETING_DTOR, t_random_town)

// name:A; map symbol; map:32979
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_random_town)

// name:A; map symbol; map:32980
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// public: void t_random_town::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:32981
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_random_town::~t_random_town()
{
    // Body unavailable.
}

// name:A; map symbol; map:32982
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_registration<t_random_town>::t_object_registration<t_random_town>(t_adv_object_type arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:32983
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_factory<t_random_town>::t_object_factory<t_random_town>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,vslot; map:32984
VA_CHT_1(0x0076f420, 0x65)
t_stationary_adventure_object* t_object_factory<t_random_town>::create(
    std::string const& arg_0,
    t_qualified_adv_object_type const& arg_1
) const
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:32985
VA_CHT_1_COMPGEN(0x0076f510, 0x8, VECTOR_DELETING_DTOR, t_random_town)

// confidence:C; align-order; stable; map:32986
VA_CHT_1_COMPGEN(0x0076f520, 0x8, VECTOR_DELETING_DTOR, t_random_town)

// confidence:C; align-order; stable; map:32987
VA_CHT_1_COMPGEN(0x0076f530, 0xb, VECTOR_DELETING_DTOR, t_random_town)

// confidence:C; align-order; stable; map:32988
VA_CHT_1_COMPGEN(0x0076f540, 0xe, VECTOR_DELETING_DTOR, t_random_town)

// confidence:C; align-order; stable; map:32989
VA_CHT_1(0x0076f550, 0xe)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::accept`vtordisp{-4, 264}'(t_abstract_adv_object_visitor&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32990
VA_CHT_1(0x0076f560, 0xe)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::accept`vtordisp{-4, 264}'(t_abstract_adv_object_visitor&)
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32991
VA_CHT_1(0x0076f570, 0xe)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::animates`vtordisp{-4, 264}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32992
VA_CHT_1(0x0076f580, 0xb)
// [thunk]: public: virtual std::auto_ptr<t_abstract_adv_object> t_adventure_object::clone`adjustor{272}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32993
VA_CHT_1(0x0076f590, 0xe)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_shadow_to`vtordisp{-4, 264}'(unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32994
VA_CHT_1(0x0076f5a0, 0xe)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_shadow_to`vtordisp{-4, 264}'(unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32995
VA_CHT_1(0x0076f5b0, 0xe)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_subimage_to`vtordisp{-4, 264}'(int, unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32996
VA_CHT_1(0x0076f5c0, 0xe)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_subimage_to`vtordisp{-4, 264}'(int, unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&, int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32997
VA_CHT_1(0x0076f5d0, 0xe)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_to`vtordisp{-4, 264}'(unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32998
VA_CHT_1(0x0076f5e0, 0xe)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_to`vtordisp{-4, 264}'(unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32999
VA_CHT_1(0x0076f5f0, 0xe)
// [thunk]: public: virtual t_footprint const& t_abstract_stationary_adv_object::get_footprint`vtordisp{-4, 264}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:33000
VA_CHT_1(0x0076f600, 0xe)
// [thunk]: public: virtual t_player_color t_owned_adv_object::get_player_color`vtordisp{-4, 252}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:33001
VA_CHT_1(0x0076f610, 0xe)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_rect`vtordisp{-4, 264}'(unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:33002
VA_CHT_1(0x0076f620, 0xe)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_rect`vtordisp{-4, 264}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:33003
VA_CHT_1(0x0076f630, 0xe)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_shadow_rect`vtordisp{-4, 264}'(unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:33004
VA_CHT_1(0x0076f640, 0xe)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_shadow_rect`vtordisp{-4, 264}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:33005
VA_CHT_1(0x0076f650, 0xe)
// [thunk]: public: virtual int t_abstract_stationary_adv_object::get_subimage_count`vtordisp{-4, 264}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:33006
VA_CHT_1(0x0076f660, 0xe)
// [thunk]: public: virtual int t_stationary_adventure_object::get_subimage_depth_offset`vtordisp{-4, 264}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:33007
VA_CHT_1(0x0076f670, 0xe)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_subimage_rect`vtordisp{-4, 264}'(int, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:33008
VA_CHT_1(0x0076f680, 0xe)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_subimage_rect`vtordisp{-4, 264}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:33009
VA_CHT_1(0x0076f690, 0xe)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::hit_test`vtordisp{-4, 264}'(unsigned long, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:33010
VA_CHT_1(0x0076f6a0, 0xe)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::is_decorative`vtordisp{-4, 264}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:33011
VA_CHT_1(0x0076f6b0, 0xe)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::needs_redrawing`vtordisp{-4, 264}'(unsigned long, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:33012
VA_CHT_1(0x0076f6c0, 0xe)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::subimage_animates`vtordisp{-4, 264}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:33013
VA_CHT_1(0x0076f6d0, 0xe)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::subimage_is_underlay`vtordisp{-4, 264}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:33014
VA_CHT_1(0x0076f6e0, 0xe)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::subimage_needs_redrawing`vtordisp{-4, 264}'(int, unsigned long, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:33015
VA_CHT_1(0x0076f6f0, 0xb)
// [thunk]: public: virtual bool t_adventure_object::uses_bridge_heights`adjustor{272}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:33016
VA_CHT_1(0x0076f700, 0xe)
// [thunk]: public: virtual t_adventure_ai const* t_adventure_object::get_ai`vtordisp{-4, 272}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:33017
VA_CHT_1(0x0076f710, 0xe)
// [thunk]: public: virtual t_adventure_frame* t_adventure_object::get_adventure_frame`vtordisp{-4, 272}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:33018
VA_CHT_1(0x0076f720, 0xe)
// [thunk]: public: virtual t_adventure_object* t_adventure_object::get_adventure_object`vtordisp{-4, 272}'(void)
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:33019
VA_CHT_1(0x0076f730, 0xb)
// [thunk]: public: virtual t_town_image_level t_abstract_town::get_castle_level`vtordisp{-4, 52}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:33020
VA_CHT_1(0x0076f740, 0xe)
// [thunk]: public: virtual t_adventure_map* t_adventure_object::get_map`vtordisp{-4, 272}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:33021
VA_CHT_1(0x0076f750, 0xe)
// [thunk]: public: virtual int t_owned_adv_object::get_owner_number`vtordisp{-4, 252}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:33022
VA_CHT_1(0x0076f760, 0xe)
// [thunk]: public: virtual t_adv_map_point t_adventure_object::get_position`vtordisp{-4, 272}'(void) const
// Function body not reconstructed; signature retained as a comment.

// === .rdata (10 symbols) ===

// confidence:B; rtti-order; map:45185
DATA_CHT_1_COMPGEN(0x008e904c, "const t_random_town::`vftable'{for `t_adv_object_map_info'}")

// confidence:B; rtti-order; map:45186
DATA_CHT_1_COMPGEN(0x008e908c, "const t_random_town::`vftable'{for `t_owned_adv_object'}")

// confidence:A; rtti-name; map:45187
DATA_CHT_1_COMPGEN(0x008e910c, "const t_random_town::`vftable'{for `t_abstract_grail_data_source'}")

// confidence:B; rtti-order; map:45188
DATA_CHT_1_COMPGEN(0x008e9118, "const t_random_town::`vftable'{for `t_creature_array'}")

// confidence:B; rtti-order; map:45189
DATA_CHT_1_COMPGEN(0x008e914c, "const t_random_town::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:45190
DATA_CHT_1_COMPGEN(0x008e9154, "const t_random_town::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:45191
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_random_town::`vbtable'")

// name:A; map symbol; map:45192
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_random_town::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:45193
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_random_town::`vbtable'{for `t_abstract_stationary_adv_object'}")

// confidence:A; rtti-name; map:45194
DATA_CHT_1_COMPGEN(0x008e9044, "const t_object_factory<t_random_town>::`vftable'")

// === .rdata$r (13 symbols) ===

// name:A; map symbol; map:54282
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_random_town::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// name:A; map symbol; map:54283
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_random_town::`RTTI Complete Object Locator'{for `t_owned_adv_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_random_town@@;vft=4e910c;col=513d90;td=5b1b90;chd=513e10;offset=156;cdOffset=0;validated-hierarchy; map:54284
DATA_CHT_1_COMPGEN(0x00913d90, "const t_random_town::`RTTI Complete Object Locator'{for `t_abstract_grail_data_source'}")

// name:A; map symbol; map:54285
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_random_town::`RTTI Complete Object Locator'{for `t_creature_array'}")

// name:A; map symbol; map:54286
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_random_town::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_random_town@@;bcd=513db8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54287
DATA_CHT_1_COMPGEN(0x00913db8, "t_random_town::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_random_town@@;vft=4e910c;col=513d90;td=5b1b90;chd=513e10;offset=156;cdOffset=0;validated-hierarchy; map:54288
DATA_CHT_1_COMPGEN(0x00913dd0, "t_random_town::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_random_town@@;vft=4e910c;col=513d90;td=5b1b90;chd=513e10;offset=156;cdOffset=0;validated-hierarchy; map:54289
DATA_CHT_1_COMPGEN(0x00913e10, "t_random_town::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54290
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_random_town::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_object_factory@Vt_random_town@@@@;bcd=513d0c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54291
DATA_CHT_1_COMPGEN(0x00913d0c, "t_object_factory<t_random_town>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_object_factory@Vt_random_town@@@@;vft=4e9044;col=513d40;td=5b1b5c;chd=513d30;offset=0;cdOffset=0;validated-hierarchy; map:54292
DATA_CHT_1_COMPGEN(0x00913d24, "t_object_factory<t_random_town>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_object_factory@Vt_random_town@@@@;vft=4e9044;col=513d40;td=5b1b5c;chd=513d30;offset=0;cdOffset=0;validated-hierarchy; map:54293
DATA_CHT_1_COMPGEN(0x00913d30, "t_object_factory<t_random_town>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_object_factory@Vt_random_town@@@@;vft=4e9044;col=513d40;td=5b1b5c;chd=513d30;offset=0;cdOffset=0;validated-hierarchy; map:54294
DATA_CHT_1_COMPGEN(0x00913d40, "const t_object_factory<t_random_town>::`RTTI Complete Object Locator'")

// === .data (2 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_random_town@@;td=5b1b90;validated-header; map:59040
DATA_CHT_1_COMPGEN(0x009b1b90, "t_random_town `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_object_factory@Vt_random_town@@@@;td=5b1b5c;validated-header; map:59041
DATA_CHT_1_COMPGEN(0x009b1b5c, "t_object_factory<t_random_town> `RTTI Type Descriptor'")

// === .bss (1 symbols) ===

namespace {

// confidence:B; dyninit-global; owner-conf-B; map:60336
DATA_CHT_1(0x009f3f6c)
t_object_registration<t_random_town> k_registration; // Initial value unavailable.

} // anonymous namespace
