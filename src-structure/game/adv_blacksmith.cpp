// adv_blacksmith.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 63/94 (A:13 B:2 C:0); unaccounted 31; skipped std 71.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (73 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:71207; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00432d20, 0x15, STATIC_INIT_DISPATCH, "adv_blacksmith#1")

// name:C; dyninit; see ledger; map:71208
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adv_blacksmith#1")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:71209; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00432d40, 0x1c, STATIC_INIT_DISPATCH, "adv_blacksmith#2")

// name:C; dyninit; see ledger; map:71210
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adv_blacksmith#2")

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:4035
VA_CHT_1(0x00432d60, 0x15d)
t_adv_blacksmith::t_adv_blacksmith(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:4036
VA_CHT_1(0x00432f70, 0x208)
void t_adv_blacksmith::activate_trigger(
    t_army* arg_0,
    t_adv_map_point const& arg_1,
    t_direction arg_2,
    t_adventure_frame* arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4037
VA_CHT_1(0x00433180, 0x4b3)
void t_adv_blacksmith::create_items_list()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:71211
VA_CHT_1(0x004337e0, 0x156)
static std::vector<t_artifact_type, std::allocator<t_artifact_type>> get_potion_vector()
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:71212
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// get_potion_vector$sdtor3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:71213
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// get_potion_vector$sdtor2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:71214
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// get_potion_vector$sdtor1
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:4038
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_adv_blacksmith::get_version() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:4039
VA_CHT_1(0x004339b0, 0xf3)
bool t_adv_blacksmith::read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_qualified_adv_object_type const& arg_1,
    int arg_2
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:4040
VA_CHT_1(0x00433ab0, 0x25)
void t_adv_blacksmith::place(t_adventure_map& arg_0, t_adv_map_point const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:4041
VA_CHT_1(0x00433ae0, 0xd6)
bool t_adv_blacksmith::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:4042
VA_CHT_1(0x00433bc0, 0x5d5)
void t_adv_blacksmith::right_click(t_mouse_event const& arg_0, t_adventure_frame* arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:4043
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adv_blacksmith::visit(t_hero* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:4044
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adv_blacksmith::calculate_purchase_options(
    std::map<float, int, std::less<float>, std::allocator<int>>& arg_0,
    t_creature_array const& arg_1
) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:4045
VA_CHT_1(0x004342c0, 0x9)
float t_adv_blacksmith::ai_value(t_adventure_ai const& arg_0, t_creature_array const& arg_1, int arg_2) const
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:71215; name:B (dyninit; see ledger)
VA_CHT_1(0x004346a0, 0x20)
// adv_blacksmith$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:D; dyninit-tinit; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:71217; name:B (dyninit; see ledger)
VA_CHT_1(0x004346c0, 0x5c)
// adv_blacksmith$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:71218
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adv_blacksmith$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:71219
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adv_blacksmith$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:71220
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adv_blacksmith$tatexit4
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:4046
VA_CHT_1_COMPGEN(0x00432ec0, 0x33, SCALAR_DELETING_DTOR, t_adv_blacksmith)

// name:A; map symbol; map:4047
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_adv_blacksmith)

// name:A; map symbol; map:4048
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// public: void t_adv_blacksmith::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:4049
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_blacksmith::~t_adv_blacksmith()
{
    // Body unavailable.
}

// name:A; map symbol; map:4050
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adventure_frame::update_funds()
{
    // Body unavailable.
}

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:4051
VA_CHT_1(0x00433940, 0x20)
t_counted_ptr<t_dialog_blacksmith>::~t_counted_ptr<t_dialog_blacksmith>()
{
    // Body unavailable.
}

// name:A; map symbol; map:4052
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_artifact_set const& t_adventure_map::get_allowed_artifacts() const
{
    // Body unavailable.
}

// name:A; map symbol; map:4053
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_artifact_value_query::~t_artifact_value_query()
{
    // Body unavailable.
}

// name:A; map symbol; map:4113
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_registration<t_adv_blacksmith>::t_object_registration<t_adv_blacksmith>(t_adv_object_type arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:4114
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_artifact_type enum_incr(t_artifact_type& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:4116
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_dialog_blacksmith>::t_counted_ptr<t_dialog_blacksmith>()
{
    // Body unavailable.
}

// name:A; map symbol; map:4117
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_dialog_blacksmith>& t_counted_ptr<t_dialog_blacksmith>::operator=(t_dialog_blacksmith* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:4118
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_dialog_blacksmith* t_counted_ptr<t_dialog_blacksmith>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:4119
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
unsigned int t_random_number_generator::operator()(int arg_0, unsigned int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:4128
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_factory<t_adv_blacksmith>::t_object_factory<t_adv_blacksmith>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,vslot;vftable-certificate=34620:4129;class=t_object_factory<class t_adv_blacksmith>;proof=unique-hierarchy-method-and-slot-cleanup;cleanup=8;checked-rtti-and-raw-slots;vft=4ce30c,col=4f6a5c,offset=0,slot=0,entry=34620; map:4129
VA_CHT_1(0x00434620, 0x65)
t_stationary_adventure_object* t_object_factory<t_adv_blacksmith>::create(
    std::string const& arg_0,
    t_qualified_adv_object_type const& arg_1
) const
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4132
VA_CHT_1_COMPGEN(0x00434720, 0x8, VECTOR_DELETING_DTOR, t_adv_blacksmith)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4133
VA_CHT_1_COMPGEN(0x00434730, 0xe, VECTOR_DELETING_DTOR, t_adv_blacksmith)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4134
VA_CHT_1(0x00434740, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::accept`vtordisp{-4, 56}'(t_abstract_adv_object_visitor&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4135
VA_CHT_1(0x00434750, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::accept`vtordisp{-4, 56}'(t_abstract_adv_object_visitor&)
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4136
VA_CHT_1(0x00434760, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::animates`vtordisp{-4, 56}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4137
VA_CHT_1(0x00434770, 0x8)
// [thunk]: public: virtual std::auto_ptr<t_abstract_adv_object> t_adventure_object::clone`adjustor{64}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4138
VA_CHT_1(0x00434780, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_shadow_to`vtordisp{-4, 56}'(unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4139
VA_CHT_1(0x00434790, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_shadow_to`vtordisp{-4, 56}'(unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4140
VA_CHT_1(0x004347a0, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_subimage_to`vtordisp{-4, 56}'(int, unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4141
VA_CHT_1(0x004347b0, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_subimage_to`vtordisp{-4, 56}'(int, unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&, int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4142
VA_CHT_1(0x004347c0, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_to`vtordisp{-4, 56}'(unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4143
VA_CHT_1(0x004347d0, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_to`vtordisp{-4, 56}'(unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4144
VA_CHT_1(0x004347e0, 0xb)
// [thunk]: public: virtual t_footprint const& t_abstract_stationary_adv_object::get_footprint`vtordisp{-4, 56}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4145
VA_CHT_1(0x004347f0, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_rect`vtordisp{-4, 56}'(unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4146
VA_CHT_1(0x00434800, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_rect`vtordisp{-4, 56}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4147
VA_CHT_1(0x00434810, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_shadow_rect`vtordisp{-4, 56}'(unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4148
VA_CHT_1(0x00434820, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_shadow_rect`vtordisp{-4, 56}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4149
VA_CHT_1(0x00434830, 0xb)
// [thunk]: public: virtual int t_abstract_stationary_adv_object::get_subimage_count`vtordisp{-4, 56}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4150
VA_CHT_1(0x00434840, 0xb)
// [thunk]: public: virtual int t_stationary_adventure_object::get_subimage_depth_offset`vtordisp{-4, 56}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4151
VA_CHT_1(0x00434850, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_subimage_rect`vtordisp{-4, 56}'(int, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4152
VA_CHT_1(0x00434860, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_subimage_rect`vtordisp{-4, 56}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4153
VA_CHT_1(0x00434870, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::hit_test`vtordisp{-4, 56}'(unsigned long, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4154
VA_CHT_1(0x00434880, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::is_decorative`vtordisp{-4, 56}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4155
VA_CHT_1(0x00434890, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::needs_redrawing`vtordisp{-4, 56}'(unsigned long, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4156
VA_CHT_1(0x004348a0, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::subimage_animates`vtordisp{-4, 56}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4157
VA_CHT_1(0x004348b0, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::subimage_is_underlay`vtordisp{-4, 56}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4158
VA_CHT_1(0x004348c0, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::subimage_needs_redrawing`vtordisp{-4, 56}'(int, unsigned long, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4159
VA_CHT_1(0x004348d0, 0x8)
// [thunk]: public: virtual bool t_adventure_object::uses_bridge_heights`adjustor{64}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4160
VA_CHT_1(0x004348e0, 0xb)
// [thunk]: public: virtual t_adventure_ai const* t_adventure_object::get_ai`vtordisp{-4, 64}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4161
VA_CHT_1(0x004348f0, 0xb)
// [thunk]: public: virtual t_adventure_frame* t_adventure_object::get_adventure_frame`vtordisp{-4, 64}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4162
VA_CHT_1(0x00434900, 0xb)
// [thunk]: public: virtual t_adventure_object* t_adventure_object::get_adventure_object`vtordisp{-4, 64}'(void)
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4163
VA_CHT_1(0x00434910, 0xb)
// [thunk]: public: virtual t_adventure_map* t_adventure_object::get_map`vtordisp{-4, 64}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4164
VA_CHT_1(0x00434920, 0xb)
// [thunk]: public: virtual t_adv_map_point t_adventure_object::get_position`vtordisp{-4, 64}'(void) const
// Function body not reconstructed; signature retained as a comment.

// === .rdata (7 symbols) ===

// name:A; map symbol; map:42749
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_blacksmith::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:42750
DATA_CHT_1_COMPGEN(0x008ce314, "const t_adv_blacksmith::`vftable'")

// confidence:B; rtti-order; map:42751
DATA_CHT_1_COMPGEN(0x008ce3d4, "const t_adv_blacksmith::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:42752
DATA_CHT_1_COMPGEN(0x008ce3dc, "const t_adv_blacksmith::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:42753
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_blacksmith::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:42754
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_blacksmith::`vbtable'{for `t_abstract_stationary_adv_object'}")

// confidence:A; rtti-name; map:42755
DATA_CHT_1_COMPGEN(0x008ce30c, "const t_object_factory<t_adv_blacksmith>::`vftable'")

// === .rdata$r (11 symbols) ===

// name:A; map symbol; map:47910
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_blacksmith::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_adv_blacksmith@@;vft=4ce314;col=4f6b00;td=588100;chd=4f6af0;offset=140;cdOffset=0;validated-hierarchy; map:47911
DATA_CHT_1_COMPGEN(0x008f6b00, "const t_adv_blacksmith::`RTTI Complete Object Locator'")

// name:A; map symbol; map:47912
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_blacksmith::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adv_blacksmith@@;bcd=4f6aac;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47913
DATA_CHT_1_COMPGEN(0x008f6aac, "t_adv_blacksmith::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adv_blacksmith@@;vft=4ce314;col=4f6b00;td=588100;chd=4f6af0;offset=140;cdOffset=0;validated-hierarchy; map:47914
DATA_CHT_1_COMPGEN(0x008f6ac4, "t_adv_blacksmith::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adv_blacksmith@@;vft=4ce314;col=4f6b00;td=588100;chd=4f6af0;offset=140;cdOffset=0;validated-hierarchy; map:47915
DATA_CHT_1_COMPGEN(0x008f6af0, "t_adv_blacksmith::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:47916
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_blacksmith::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_object_factory@Vt_adv_blacksmith@@@@;bcd=4f6a28;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47917
DATA_CHT_1_COMPGEN(0x008f6a28, "t_object_factory<t_adv_blacksmith>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_object_factory@Vt_adv_blacksmith@@@@;vft=4ce30c;col=4f6a5c;td=5880c8;chd=4f6a4c;offset=0;cdOffset=0;validated-hierarchy; map:47918
DATA_CHT_1_COMPGEN(0x008f6a40, "t_object_factory<t_adv_blacksmith>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_object_factory@Vt_adv_blacksmith@@@@;vft=4ce30c;col=4f6a5c;td=5880c8;chd=4f6a4c;offset=0;cdOffset=0;validated-hierarchy; map:47919
DATA_CHT_1_COMPGEN(0x008f6a4c, "t_object_factory<t_adv_blacksmith>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_object_factory@Vt_adv_blacksmith@@@@;vft=4ce30c;col=4f6a5c;td=5880c8;chd=4f6a4c;offset=0;cdOffset=0;validated-hierarchy; map:47920
DATA_CHT_1_COMPGEN(0x008f6a5c, "const t_object_factory<t_adv_blacksmith>::`RTTI Complete Object Locator'")

// === .data (2 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_adv_blacksmith@@;td=588100;validated-header; map:57464
DATA_CHT_1_COMPGEN(0x00988100, "t_adv_blacksmith `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_object_factory@Vt_adv_blacksmith@@@@;td=5880c8;validated-header; map:57465
DATA_CHT_1_COMPGEN(0x009880c8, "t_object_factory<t_adv_blacksmith> `RTTI Type Descriptor'")

// === .bss (1 symbols) ===

// name:A; map symbol; map:59947
DATA_CHT_1(UNACCOUNTED)
std::_Tree<float, std::pair<float const, int>, std::map<float, int, std::less<float>, std::allocator<int>>::_Kfn, std::less<float>, std::allocator<int>>::_Node*std::_Tree<float, std::pair<float const, int>, std::map<float, int, std::less<float>, std::allocator<int>>::_Kfn, std::less<float>, std::allocator<int>>::_Nil; // Initial value unavailable.
