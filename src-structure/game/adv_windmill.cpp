// adv_windmill.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\adv_windmill.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 59/84 (A:12 B:2 C:0); unaccounted 25; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (63 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:70692; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00470080, 0x1c, STATIC_INIT_DISPATCH, "adv_windmill#1")

// name:C; dyninit; see ledger; map:70693
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adv_windmill#1")

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:6280
VA_CHT_1(0x004700a0, 0x1b7)
t_adv_windmill::t_adv_windmill(std::string const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:6281
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_material t_adv_windmill::get_material() const
{
    // Body unavailable.
}

// name:A; map symbol; map:6282
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_adv_windmill::get_production()
{
    // Body unavailable.
}

// name:A; map symbol; map:6283
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_adv_windmill::get_version() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:6284
VA_CHT_1(0x004702a0, 0x92)
void t_adv_windmill::reset()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:6285
VA_CHT_1(0x00470340, 0x772)
void t_adv_windmill::activate_trigger(
    t_army* arg_0,
    t_adv_map_point const& arg_1,
    t_direction arg_2,
    t_adventure_frame* arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:6286
VA_CHT_1(0x00470ac0, 0xaa)
void t_adv_windmill::place(t_adventure_map& arg_0, t_adv_map_point const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:6287
VA_CHT_1(0x00470b80, 0x114)
void t_adv_windmill::process_new_day()
{
    // Body unavailable.
}

// name:A; map symbol; map:6288
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adv_windmill::randomize_production()
{
    // Body unavailable.
}

// name:A; map symbol; map:6289
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adv_windmill::read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_qualified_adv_object_type const& arg_1,
    int arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:6290
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adv_windmill::read_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_progress_handler* arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:6291
VA_CHT_1(0x00470e30, 0xbd)
bool t_adv_windmill::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:6292
VA_CHT_1(0x00470ef0, 0x69)
float t_adv_windmill::ai_value(t_adventure_ai const& arg_0, t_creature_array const& arg_1, int arg_2) const
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:70694; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00470fd0, 0x20, STATIC_INIT_DISPATCH, adv_windmill)

// name:A; map symbol; map:6293
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_material_amount::t_material_amount(t_material arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:6294
VA_CHT_1_COMPGEN(0x00470270, 0x2d, SCALAR_DELETING_DTOR, t_adv_windmill)

// name:A; map symbol; map:6295
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_adv_windmill)

// name:A; map symbol; map:6296
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// public: void t_adv_windmill::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:6297
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_windmill::~t_adv_windmill()
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:6298
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int to_base_save_format_version(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:6299
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int to_base_map_format_version(int arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:6300
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
float const& t_static_vector<float, 7>::operator[](unsigned int arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:6301
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
float const* t_static_vector<float, 7>::begin() const
{
    // Body unavailable.
}

// name:A; map symbol; map:6302
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_registration<t_adv_windmill>::t_object_registration<t_adv_windmill>(t_adv_object_type arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:6303
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_factory<t_adv_windmill>::t_object_factory<t_adv_windmill>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:6304
VA_CHT_1(0x00470f60, 0x65)
t_stationary_adventure_object* t_object_factory<t_adv_windmill>::create(
    std::string const& arg_0,
    t_qualified_adv_object_type const& arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:6305
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_adv_windmill)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:6306
VA_CHT_1_COMPGEN(0x00471000, 0xb, VECTOR_DELETING_DTOR, t_adv_windmill)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:6307
VA_CHT_1(0x00471010, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::accept`vtordisp{-4, 40}'(t_abstract_adv_object_visitor&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:6308
VA_CHT_1(0x00471020, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::accept`vtordisp{-4, 40}'(t_abstract_adv_object_visitor&)
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:6309
VA_CHT_1(0x00471030, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::animates`vtordisp{-4, 40}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:6310
VA_CHT_1(0x00471040, 0x8)
// [thunk]: public: virtual std::auto_ptr<t_abstract_adv_object> t_adventure_object::clone`adjustor{48}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:6311
VA_CHT_1(0x00471050, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_shadow_to`vtordisp{-4, 40}'(unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:6312
VA_CHT_1(0x00471060, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_shadow_to`vtordisp{-4, 40}'(unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:6313
VA_CHT_1(0x00471070, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_subimage_to`vtordisp{-4, 40}'(int, unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:6314
VA_CHT_1(0x00471080, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_subimage_to`vtordisp{-4, 40}'(int, unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&, int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:6315
VA_CHT_1(0x00471090, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_to`vtordisp{-4, 40}'(unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:6316
VA_CHT_1(0x004710a0, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_to`vtordisp{-4, 40}'(unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:6317
VA_CHT_1(0x004710b0, 0xb)
// [thunk]: public: virtual t_footprint const& t_abstract_stationary_adv_object::get_footprint`vtordisp{-4, 40}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:6318
VA_CHT_1(0x004710c0, 0xb)
// [thunk]: public: virtual t_player_color t_owned_adv_object::get_player_color`vtordisp{-4, 28}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:6319
VA_CHT_1(0x004710d0, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_rect`vtordisp{-4, 40}'(unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:6320
VA_CHT_1(0x004710e0, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_rect`vtordisp{-4, 40}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:6321
VA_CHT_1(0x004710f0, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_shadow_rect`vtordisp{-4, 40}'(unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:6322
VA_CHT_1(0x00471100, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_shadow_rect`vtordisp{-4, 40}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:6323
VA_CHT_1(0x00471110, 0xb)
// [thunk]: public: virtual int t_abstract_stationary_adv_object::get_subimage_count`vtordisp{-4, 40}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:6324
VA_CHT_1(0x00471120, 0xb)
// [thunk]: public: virtual int t_stationary_adventure_object::get_subimage_depth_offset`vtordisp{-4, 40}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:6325
VA_CHT_1(0x00471130, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_subimage_rect`vtordisp{-4, 40}'(int, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:6326
VA_CHT_1(0x00471140, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_subimage_rect`vtordisp{-4, 40}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:6327
VA_CHT_1(0x00471150, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::hit_test`vtordisp{-4, 40}'(unsigned long, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:6328
VA_CHT_1(0x00471160, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::is_decorative`vtordisp{-4, 40}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:6329
VA_CHT_1(0x00471170, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::needs_redrawing`vtordisp{-4, 40}'(unsigned long, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:6330
VA_CHT_1(0x00471180, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::subimage_animates`vtordisp{-4, 40}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:6331
VA_CHT_1(0x00471190, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::subimage_is_underlay`vtordisp{-4, 40}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:6332
VA_CHT_1(0x004711a0, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::subimage_needs_redrawing`vtordisp{-4, 40}'(int, unsigned long, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:6333
VA_CHT_1(0x004711b0, 0x8)
// [thunk]: public: virtual bool t_adventure_object::uses_bridge_heights`adjustor{48}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:6334
VA_CHT_1(0x004711c0, 0xb)
// [thunk]: public: virtual t_adventure_ai const* t_adventure_object::get_ai`vtordisp{-4, 48}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:6335
VA_CHT_1(0x004711d0, 0xb)
// [thunk]: public: virtual t_adventure_frame* t_adventure_object::get_adventure_frame`vtordisp{-4, 48}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:6336
VA_CHT_1(0x004711e0, 0xb)
// [thunk]: public: virtual t_adventure_object* t_adventure_object::get_adventure_object`vtordisp{-4, 48}'(void)
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:6337
VA_CHT_1(0x004711f0, 0xb)
// [thunk]: public: virtual t_adventure_map* t_adventure_object::get_map`vtordisp{-4, 48}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:6338
VA_CHT_1(0x00471200, 0xb)
// [thunk]: public: virtual int t_owned_adv_object::get_owner_number`vtordisp{-4, 28}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:6339
VA_CHT_1(0x00471210, 0xb)
// [thunk]: public: virtual t_adv_map_point t_adventure_object::get_position`vtordisp{-4, 48}'(void) const
// Function body not reconstructed; signature retained as a comment.

// === .rdata (8 symbols) ===

// name:A; map symbol; map:43109
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_windmill::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:43110
DATA_CHT_1_COMPGEN(0x008d32e4, "const t_adv_windmill::`vftable'")

// confidence:B; rtti-order; map:43111
DATA_CHT_1_COMPGEN(0x008d33a4, "const t_adv_windmill::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:43112
DATA_CHT_1_COMPGEN(0x008d33ac, "const t_adv_windmill::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:43113
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_windmill::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:43114
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_windmill::`vbtable'{for `t_abstract_stationary_adv_object'}")

// name:A; map symbol; map:43115
DATA_CHT_1(UNACCOUNTED)
// __real@4@3fff99999a0000000000

// confidence:A; rtti-name; map:43116
DATA_CHT_1_COMPGEN(0x008d32dc, "const t_object_factory<t_adv_windmill>::`vftable'")

// === .rdata$r (11 symbols) ===

// name:A; map symbol; map:48495
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_windmill::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_adv_windmill@@;vft=4d32e4;col=4f99e8;td=58b2e4;chd=4f99d8;offset=124;cdOffset=0;validated-hierarchy; map:48496
DATA_CHT_1_COMPGEN(0x008f99e8, "const t_adv_windmill::`RTTI Complete Object Locator'")

// name:A; map symbol; map:48497
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_windmill::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adv_windmill@@;bcd=4f9990;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48498
DATA_CHT_1_COMPGEN(0x008f9990, "t_adv_windmill::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adv_windmill@@;vft=4d32e4;col=4f99e8;td=58b2e4;chd=4f99d8;offset=124;cdOffset=0;validated-hierarchy; map:48499
DATA_CHT_1_COMPGEN(0x008f99a8, "t_adv_windmill::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adv_windmill@@;vft=4d32e4;col=4f99e8;td=58b2e4;chd=4f99d8;offset=124;cdOffset=0;validated-hierarchy; map:48500
DATA_CHT_1_COMPGEN(0x008f99d8, "t_adv_windmill::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:48501
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_windmill::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_object_factory@Vt_adv_windmill@@@@;bcd=4f990c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48502
DATA_CHT_1_COMPGEN(0x008f990c, "t_object_factory<t_adv_windmill>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_object_factory@Vt_adv_windmill@@@@;vft=4d32dc;col=4f9940;td=58b2b0;chd=4f9930;offset=0;cdOffset=0;validated-hierarchy; map:48503
DATA_CHT_1_COMPGEN(0x008f9924, "t_object_factory<t_adv_windmill>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_object_factory@Vt_adv_windmill@@@@;vft=4d32dc;col=4f9940;td=58b2b0;chd=4f9930;offset=0;cdOffset=0;validated-hierarchy; map:48504
DATA_CHT_1_COMPGEN(0x008f9930, "t_object_factory<t_adv_windmill>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_object_factory@Vt_adv_windmill@@@@;vft=4d32dc;col=4f9940;td=58b2b0;chd=4f9930;offset=0;cdOffset=0;validated-hierarchy; map:48505
DATA_CHT_1_COMPGEN(0x008f9940, "const t_object_factory<t_adv_windmill>::`RTTI Complete Object Locator'")

// === .data (2 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_adv_windmill@@;td=58b2e4;validated-header; map:57587
DATA_CHT_1_COMPGEN(0x0098b2e4, "t_adv_windmill `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_object_factory@Vt_adv_windmill@@@@;td=58b2b0;validated-header; map:57588
DATA_CHT_1_COMPGEN(0x0098b2b0, "t_object_factory<t_adv_windmill> `RTTI Type Descriptor'")
