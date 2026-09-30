// carryover_hero.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\carryover_hero.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 59/78 (A:22 B:4 C:33); unaccounted 19; skipped std 2.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (57 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:68476; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00598910, 0x15, STATIC_INIT_DISPATCH, "carryover_hero#1")

// name:C; dyninit; see ledger; map:68477
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "carryover_hero#1")

// confidence:A; dyninit-init; owner-conf-B; map:68478; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00598930, 0x1c, STATIC_INIT_DISPATCH, g_registration)

// name:B; dyninit; see ledger; map:68479
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, g_registration)

namespace {

// confidence:B; align-order; retn,stable; map:19123
VA_CHT_1(0x00598950, 0x2a9)
void strip_invalid_artifacts(
    t_hero_carryover_data& arg_0,
    t_carryover_data& arg_1,
    t_artifact_set const& arg_2
)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:A; align-order; retn,stable,vptr; map:19124
VA_CHT_1(0x00598c00, 0x25a)
t_carryover_hero::t_carryover_hero(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:19125
VA_CHT_1(0x00599020, 0x385)
void t_carryover_hero::place(t_adventure_map& arg_0, t_adv_map_point const& arg_1)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:19126
VA_CHT_1(0x005993b0, 0xab)
bool t_carryover_hero::preplacement(t_adventure_map& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:19127
VA_CHT_1(0x00599460, 0x1ab)
bool t_carryover_hero::read_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_progress_handler* arg_1
)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:68480; name:B (dyninit; see ledger)
VA_CHT_1(0x00599680, 0x20)
// carryover_hero$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:A; dyninit-tinit; owner-conf-B; map:68482; name:B (dyninit; see ledger)
VA_CHT_1(0x005996a0, 0x5c)
// carryover_hero$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:68483
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// carryover_hero$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:68484
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// carryover_hero$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:68485
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// carryover_hero$tatexit4
// Function body not reconstructed; signature retained as a comment.

// confidence:A; align-band; retn,stable,vslot; map:19128
VA_CHT_1_COMPGEN(0x00598e60, 0x33, SCALAR_DELETING_DTOR, t_carryover_hero)

// name:A; map symbol; map:19129
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_carryover_hero)

// name:A; map symbol; map:19130
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// public: void t_carryover_hero::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:19131
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_carryover_hero::~t_carryover_hero()
{
    // Body unavailable.
}

// name:A; map symbol; map:19132
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_creature_stack::set_raw_adventure_movement(float arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:19133
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_town_type t_hero_carryover_data::get_alignment() const
{
    // Body unavailable.
}

// name:A; map symbol; map:19134
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_hero_carryover_data>& t_counted_ptr<t_hero_carryover_data>::operator=(
    t_hero_carryover_data* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:19135
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_registration<t_carryover_hero>::t_object_registration<t_carryover_hero>(t_adv_object_type arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:19137
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_factory<t_carryover_hero>::t_object_factory<t_carryover_hero>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:19138
VA_CHT_1(0x00599610, 0x65)
t_stationary_adventure_object* t_object_factory<t_carryover_hero>::create(
    std::string const& arg_0,
    t_qualified_adv_object_type const& arg_1
) const
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:19139
VA_CHT_1_COMPGEN(0x00599700, 0x8, VECTOR_DELETING_DTOR, t_carryover_hero)

// confidence:C; align-order; stable; map:19140
VA_CHT_1_COMPGEN(0x00599710, 0xe, VECTOR_DELETING_DTOR, t_carryover_hero)

// confidence:C; align-order; stable; map:19141
VA_CHT_1(0x00599720, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::accept`vtordisp{-4, 92}'(t_abstract_adv_object_visitor&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:19142
VA_CHT_1(0x00599730, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::accept`vtordisp{-4, 92}'(t_abstract_adv_object_visitor&)
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:19143
VA_CHT_1(0x00599740, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::animates`vtordisp{-4, 92}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:19144
VA_CHT_1(0x00599750, 0x8)
// [thunk]: public: virtual std::auto_ptr<t_abstract_adv_object> t_adventure_object::clone`adjustor{100}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:19145
VA_CHT_1(0x00599760, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_shadow_to`vtordisp{-4, 92}'(unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:19146
VA_CHT_1(0x00599770, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_shadow_to`vtordisp{-4, 92}'(unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:19147
VA_CHT_1(0x00599780, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_subimage_to`vtordisp{-4, 92}'(int, unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:19148
VA_CHT_1(0x00599790, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_subimage_to`vtordisp{-4, 92}'(int, unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&, int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:19149
VA_CHT_1(0x005997a0, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_to`vtordisp{-4, 92}'(unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:19150
VA_CHT_1(0x005997b0, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_to`vtordisp{-4, 92}'(unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:19151
VA_CHT_1(0x005997c0, 0xb)
// [thunk]: public: virtual t_footprint const& t_abstract_stationary_adv_object::get_footprint`vtordisp{-4, 92}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:19152
VA_CHT_1(0x005997d0, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_rect`vtordisp{-4, 92}'(unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:19153
VA_CHT_1(0x005997e0, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_rect`vtordisp{-4, 92}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:19154
VA_CHT_1(0x005997f0, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_shadow_rect`vtordisp{-4, 92}'(unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:19155
VA_CHT_1(0x00599800, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_shadow_rect`vtordisp{-4, 92}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:19156
VA_CHT_1(0x00599810, 0xb)
// [thunk]: public: virtual int t_abstract_stationary_adv_object::get_subimage_count`vtordisp{-4, 92}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:19157
VA_CHT_1(0x00599820, 0xb)
// [thunk]: public: virtual int t_stationary_adventure_object::get_subimage_depth_offset`vtordisp{-4, 92}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:19158
VA_CHT_1(0x00599830, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_subimage_rect`vtordisp{-4, 92}'(int, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:19159
VA_CHT_1(0x00599840, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_subimage_rect`vtordisp{-4, 92}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:19160
VA_CHT_1(0x00599850, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::hit_test`vtordisp{-4, 92}'(unsigned long, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:19161
VA_CHT_1(0x00599860, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::is_decorative`vtordisp{-4, 92}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:19162
VA_CHT_1(0x00599870, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::needs_redrawing`vtordisp{-4, 92}'(unsigned long, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:19163
VA_CHT_1(0x00599880, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::subimage_animates`vtordisp{-4, 92}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:19164
VA_CHT_1(0x00599890, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::subimage_is_underlay`vtordisp{-4, 92}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:19165
VA_CHT_1(0x005998a0, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::subimage_needs_redrawing`vtordisp{-4, 92}'(int, unsigned long, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:19166
VA_CHT_1(0x005998b0, 0x8)
// [thunk]: public: virtual bool t_adventure_object::uses_bridge_heights`adjustor{100}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:19167
VA_CHT_1(0x005998c0, 0xb)
// [thunk]: public: virtual t_adventure_ai const* t_adventure_object::get_ai`vtordisp{-4, 100}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:19168
VA_CHT_1(0x005998d0, 0xb)
// [thunk]: public: virtual t_adventure_frame* t_adventure_object::get_adventure_frame`vtordisp{-4, 100}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:19169
VA_CHT_1(0x005998e0, 0xb)
// [thunk]: public: virtual t_adventure_object* t_adventure_object::get_adventure_object`vtordisp{-4, 100}'(void)
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:19170
VA_CHT_1(0x005998f0, 0xb)
// [thunk]: public: virtual t_adventure_map* t_adventure_object::get_map`vtordisp{-4, 100}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:19171
VA_CHT_1(0x00599900, 0xb)
// [thunk]: public: virtual t_adv_map_point t_adventure_object::get_position`vtordisp{-4, 100}'(void) const
// Function body not reconstructed; signature retained as a comment.

// === .rdata (7 symbols) ===

// name:A; map symbol; map:43832
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_carryover_hero::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:43833
DATA_CHT_1_COMPGEN(0x008d8c34, "const t_carryover_hero::`vftable'")

// confidence:B; rtti-order; map:43834
DATA_CHT_1_COMPGEN(0x008d8cf4, "const t_carryover_hero::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:43835
DATA_CHT_1_COMPGEN(0x008d8cfc, "const t_carryover_hero::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:43836
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_carryover_hero::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:43837
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_carryover_hero::`vbtable'{for `t_abstract_stationary_adv_object'}")

// confidence:A; rtti-name; map:43838
DATA_CHT_1_COMPGEN(0x008d8c2c, "const t_object_factory<t_carryover_hero>::`vftable'")

// === .rdata$r (11 symbols) ===

// name:A; map symbol; map:50501
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_carryover_hero::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_carryover_hero@@;vft=4d8c34;col=502c7c;td=597a04;chd=502c6c;offset=176;cdOffset=0;validated-hierarchy; map:50502
DATA_CHT_1_COMPGEN(0x00902c7c, "const t_carryover_hero::`RTTI Complete Object Locator'")

// name:A; map symbol; map:50503
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_carryover_hero::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_carryover_hero@@;bcd=502c2c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50504
DATA_CHT_1_COMPGEN(0x00902c2c, "t_carryover_hero::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_carryover_hero@@;vft=4d8c34;col=502c7c;td=597a04;chd=502c6c;offset=176;cdOffset=0;validated-hierarchy; map:50505
DATA_CHT_1_COMPGEN(0x00902c44, "t_carryover_hero::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_carryover_hero@@;vft=4d8c34;col=502c7c;td=597a04;chd=502c6c;offset=176;cdOffset=0;validated-hierarchy; map:50506
DATA_CHT_1_COMPGEN(0x00902c6c, "t_carryover_hero::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:50507
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_carryover_hero::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_object_factory@Vt_carryover_hero@@@@;bcd=502ba8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50508
DATA_CHT_1_COMPGEN(0x00902ba8, "t_object_factory<t_carryover_hero>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_object_factory@Vt_carryover_hero@@@@;vft=4d8c2c;col=502bdc;td=5979cc;chd=502bcc;offset=0;cdOffset=0;validated-hierarchy; map:50509
DATA_CHT_1_COMPGEN(0x00902bc0, "t_object_factory<t_carryover_hero>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_object_factory@Vt_carryover_hero@@@@;vft=4d8c2c;col=502bdc;td=5979cc;chd=502bcc;offset=0;cdOffset=0;validated-hierarchy; map:50510
DATA_CHT_1_COMPGEN(0x00902bcc, "t_object_factory<t_carryover_hero>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_object_factory@Vt_carryover_hero@@@@;vft=4d8c2c;col=502bdc;td=5979cc;chd=502bcc;offset=0;cdOffset=0;validated-hierarchy; map:50511
DATA_CHT_1_COMPGEN(0x00902bdc, "const t_object_factory<t_carryover_hero>::`RTTI Complete Object Locator'")

// === .data (2 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_carryover_hero@@;td=597a04;validated-header; map:58145
DATA_CHT_1_COMPGEN(0x00997a04, "t_carryover_hero `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_object_factory@Vt_carryover_hero@@@@;td=5979cc;validated-header; map:58146
DATA_CHT_1_COMPGEN(0x009979cc, "t_object_factory<t_carryover_hero> `RTTI Type Descriptor'")

// === .bss (1 symbols) ===

namespace {

// confidence:B; dyninit-global; owner-conf-B; map:60097
DATA_CHT_1(0x009dcc1c)
t_object_registration<t_carryover_hero> g_registration; // Initial value unavailable.

} // anonymous namespace
