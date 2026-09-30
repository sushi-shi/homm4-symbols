// library.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 56/69 (A:15 B:2 C:0); unaccounted 13; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (47 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:64857; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006ead50, 0x1e, STATIC_INIT_DISPATCH, "library#1")

// name:C; dyninit; see ledger; map:64858
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "library#1")

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:28157
VA_CHT_1(0x006ead70, 0xcc)
t_library::t_library(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:28158
VA_CHT_1(0x006eaed0, 0x62)
float t_library::ai_value(t_adventure_ai const& arg_0, t_creature_array const& arg_1, int arg_2) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:28159
VA_CHT_1(0x006eaf40, 0x4b)
float t_library::ai_value_to_hero(t_hero const* arg_0, t_creature_array const* arg_1) const
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:64859; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006eb000, 0x20, STATIC_INIT_DISPATCH, library)

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:28160
VA_CHT_1_COMPGEN(0x006eae40, 0x2d, VECTOR_DELETING_DTOR, t_library)

// name:A; map symbol; map:28161
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_library)

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28162
VA_CHT_1(0x006eae70, 0x57)
// public: void t_library::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:28163
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_library::~t_library()
{
    // Body unavailable.
}

// name:A; map symbol; map:28164
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_war_institute::~t_war_institute()
{
    // Body unavailable.
}

// name:A; map symbol; map:28165
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_registration<t_library>::t_object_registration<t_library>(t_adv_object_type arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:28166
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_factory<t_library>::t_object_factory<t_library>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot;vftable-certificate=2eaf90:28167;class=t_object_factory<class t_library>;proof=unique-hierarchy-method-and-slot-cleanup;cleanup=8;checked-rtti-and-raw-slots;vft=4e3b74,col=50dc04,offset=0,slot=0,entry=2eaf90; map:28167
VA_CHT_1(0x006eaf90, 0x62)
t_stationary_adventure_object* t_object_factory<t_library>::create(
    std::string const& arg_0,
    t_qualified_adv_object_type const& arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:28168
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_library)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28169
VA_CHT_1_COMPGEN(0x006eb030, 0xb, VECTOR_DELETING_DTOR, t_library)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28170
VA_CHT_1(0x006eb040, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::accept`vtordisp{-4, 20}'(t_abstract_adv_object_visitor&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28171
VA_CHT_1(0x006eb050, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::accept`vtordisp{-4, 20}'(t_abstract_adv_object_visitor&)
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28172
VA_CHT_1(0x006eb060, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::animates`vtordisp{-4, 20}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28173
VA_CHT_1(0x006eb070, 0x8)
// [thunk]: public: virtual std::auto_ptr<t_abstract_adv_object> t_adventure_object::clone`adjustor{28}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28174
VA_CHT_1(0x006eb080, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_shadow_to`vtordisp{-4, 20}'(unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28175
VA_CHT_1(0x006eb090, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_shadow_to`vtordisp{-4, 20}'(unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28176
VA_CHT_1(0x006eb0a0, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_subimage_to`vtordisp{-4, 20}'(int, unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28177
VA_CHT_1(0x006eb0b0, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_subimage_to`vtordisp{-4, 20}'(int, unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&, int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28178
VA_CHT_1(0x006eb0c0, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_to`vtordisp{-4, 20}'(unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28179
VA_CHT_1(0x006eb0d0, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_to`vtordisp{-4, 20}'(unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28180
VA_CHT_1(0x006eb0e0, 0xb)
// [thunk]: public: virtual t_footprint const& t_abstract_stationary_adv_object::get_footprint`vtordisp{-4, 20}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28181
VA_CHT_1(0x006eb0f0, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_rect`vtordisp{-4, 20}'(unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28182
VA_CHT_1(0x006eb100, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_rect`vtordisp{-4, 20}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28183
VA_CHT_1(0x006eb110, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_shadow_rect`vtordisp{-4, 20}'(unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28184
VA_CHT_1(0x006eb120, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_shadow_rect`vtordisp{-4, 20}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28185
VA_CHT_1(0x006eb130, 0xb)
// [thunk]: public: virtual int t_abstract_stationary_adv_object::get_subimage_count`vtordisp{-4, 20}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28186
VA_CHT_1(0x006eb140, 0xb)
// [thunk]: public: virtual int t_stationary_adventure_object::get_subimage_depth_offset`vtordisp{-4, 20}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28187
VA_CHT_1(0x006eb150, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_subimage_rect`vtordisp{-4, 20}'(int, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28188
VA_CHT_1(0x006eb160, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_subimage_rect`vtordisp{-4, 20}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28189
VA_CHT_1(0x006eb170, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::hit_test`vtordisp{-4, 20}'(unsigned long, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28190
VA_CHT_1(0x006eb180, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::is_decorative`vtordisp{-4, 20}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28191
VA_CHT_1(0x006eb190, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::needs_redrawing`vtordisp{-4, 20}'(unsigned long, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28192
VA_CHT_1(0x006eb1a0, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::subimage_animates`vtordisp{-4, 20}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28193
VA_CHT_1(0x006eb1b0, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::subimage_is_underlay`vtordisp{-4, 20}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28194
VA_CHT_1(0x006eb1c0, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::subimage_needs_redrawing`vtordisp{-4, 20}'(int, unsigned long, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28195
VA_CHT_1(0x006eb1d0, 0x8)
// [thunk]: public: virtual bool t_adventure_object::uses_bridge_heights`adjustor{28}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28196
VA_CHT_1(0x006eb1e0, 0xb)
// [thunk]: public: virtual t_adventure_ai const* t_adventure_object::get_ai`vtordisp{-4, 28}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28197
VA_CHT_1(0x006eb1f0, 0xb)
// [thunk]: public: virtual t_adventure_frame* t_adventure_object::get_adventure_frame`vtordisp{-4, 28}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28198
VA_CHT_1(0x006eb200, 0xb)
// [thunk]: public: virtual t_adventure_object* t_adventure_object::get_adventure_object`vtordisp{-4, 28}'(void)
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28199
VA_CHT_1(0x006eb210, 0xb)
// [thunk]: public: virtual t_adventure_map* t_adventure_object::get_map`vtordisp{-4, 28}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28200
VA_CHT_1(0x006eb220, 0xb)
// [thunk]: public: virtual t_adv_map_point t_adventure_object::get_position`vtordisp{-4, 28}'(void) const
// Function body not reconstructed; signature retained as a comment.

// === .rdata (7 symbols) ===

// name:A; map symbol; map:44654
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_library::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:44655
DATA_CHT_1_COMPGEN(0x008e3b7c, "const t_library::`vftable'")

// confidence:B; rtti-order; map:44656
DATA_CHT_1_COMPGEN(0x008e3c3c, "const t_library::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:44657
DATA_CHT_1_COMPGEN(0x008e3c44, "const t_library::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:44658
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_library::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:44659
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_library::`vbtable'{for `t_abstract_stationary_adv_object'}")

// confidence:A; rtti-name; map:44660
DATA_CHT_1_COMPGEN(0x008e3b74, "const t_object_factory<t_library>::`vftable'")

// === .rdata$r (12 symbols) ===

// name:A; map symbol; map:52931
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_library::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_library@@;vft=4e3b7c;col=50dcc4;td=5aa490;chd=50dcb4;offset=104;cdOffset=0;validated-hierarchy; map:52932
DATA_CHT_1_COMPGEN(0x0090dcc4, "const t_library::`RTTI Complete Object Locator'")

// name:A; map symbol; map:52933
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_library::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_war_institute@@;bcd=50dc54;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52934
DATA_CHT_1_COMPGEN(0x0090dc54, "t_war_institute::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_library@@;bcd=50dc6c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52935
DATA_CHT_1_COMPGEN(0x0090dc6c, "t_library::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_library@@;vft=4e3b7c;col=50dcc4;td=5aa490;chd=50dcb4;offset=104;cdOffset=0;validated-hierarchy; map:52936
DATA_CHT_1_COMPGEN(0x0090dc84, "t_library::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_library@@;vft=4e3b7c;col=50dcc4;td=5aa490;chd=50dcb4;offset=104;cdOffset=0;validated-hierarchy; map:52937
DATA_CHT_1_COMPGEN(0x0090dcb4, "t_library::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:52938
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_library::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_object_factory@Vt_library@@@@;bcd=50dbd0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52939
DATA_CHT_1_COMPGEN(0x0090dbd0, "t_object_factory<t_library>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_object_factory@Vt_library@@@@;vft=4e3b74;col=50dc04;td=5aa440;chd=50dbf4;offset=0;cdOffset=0;validated-hierarchy; map:52940
DATA_CHT_1_COMPGEN(0x0090dbe8, "t_object_factory<t_library>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_object_factory@Vt_library@@@@;vft=4e3b74;col=50dc04;td=5aa440;chd=50dbf4;offset=0;cdOffset=0;validated-hierarchy; map:52941
DATA_CHT_1_COMPGEN(0x0090dbf4, "t_object_factory<t_library>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_object_factory@Vt_library@@@@;vft=4e3b74;col=50dc04;td=5aa440;chd=50dbf4;offset=0;cdOffset=0;validated-hierarchy; map:52942
DATA_CHT_1_COMPGEN(0x0090dc04, "const t_object_factory<t_library>::`RTTI Complete Object Locator'")

// === .data (3 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_war_institute@@;td=5aa470;validated-header; map:58722
DATA_CHT_1_COMPGEN(0x009aa470, "t_war_institute `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_library@@;td=5aa490;validated-header; map:58723
DATA_CHT_1_COMPGEN(0x009aa490, "t_library `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_object_factory@Vt_library@@@@;td=5aa440;validated-header; map:58724
DATA_CHT_1_COMPGEN(0x009aa440, "t_object_factory<t_library> `RTTI Type Descriptor'")
