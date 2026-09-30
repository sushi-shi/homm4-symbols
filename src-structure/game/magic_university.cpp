// magic_university.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\magic_university.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 86/120 (A:24 B:6 C:0); unaccounted 34; skipped std 8.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (77 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:64705; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006f4df0, 0x15, STATIC_INIT_DISPATCH, "magic_university#1")

// name:C; dyninit; see ledger; map:64706
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "magic_university#1")

// confidence:D; dyninit-init; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:64707; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006f4e10, 0x1e, STATIC_INIT_DISPATCH, k_registration)

// name:B; dyninit; see ledger; map:64708
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, k_registration)

// confidence:D; dyninit-init; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:64709; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006f4e30, 0x1e, STATIC_INIT_DISPATCH, k_war_university_registration)

// name:B; dyninit; see ledger; map:64710
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, k_war_university_registration)

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:28454
VA_CHT_1(0x006f4e50, 0x185)
t_magic_university::t_magic_university(t_stationary_adventure_object const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:28455
VA_CHT_1(0x006f5090, 0x777)
void t_magic_university::activate_trigger(
    t_army* arg_0,
    t_adv_map_point const& arg_1,
    t_direction arg_2,
    t_adventure_frame* arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28456
VA_CHT_1(0x006f5810, 0xe)
t_skill_set const& t_magic_university::get_default_available_skill_set()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28457
VA_CHT_1(0x006f5820, 0x240)
void t_magic_university::set_available_skills()
{
    // Body unavailable.
}

// name:A; map symbol; map:28458
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_magic_university::select_heroes_dialog(
    std::vector<t_hero*, std::allocator<t_hero*>> const& arg_0,
    t_window* arg_1,
    t_army* arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:28459
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_magic_university::read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_qualified_adv_object_type const& arg_1,
    int arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:28460
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_magic_university::read_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_progress_handler* arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:28461
VA_CHT_1(0x006f5d50, 0x238)
void t_magic_university::right_click(t_mouse_event const& arg_0, t_adventure_frame* arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:28462
VA_CHT_1(0x006f5f90, 0x34)
void t_magic_university::place(t_adventure_map& arg_0, t_adv_map_point const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:28463
VA_CHT_1(0x006f5fd0, 0x6a)
bool t_magic_university::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:28464
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_magic_university::get_version() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:28465
VA_CHT_1(0x006f6050, 0x89)
float t_magic_university::ai_value(
    t_adventure_ai const& arg_0,
    t_creature_array const& arg_1,
    int arg_2
) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28466
VA_CHT_1(0x006f60e0, 0xd2)
float t_magic_university::sum_available_skill_values(t_creature_array const& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28467
VA_CHT_1(0x006f61c0, 0xb5)
t_skill_type t_magic_university::get_best_compatible_skill(
    t_hero const* arg_0,
    t_creature_array const* arg_1
) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:28468
VA_CHT_1(0x006f6280, 0xc3)
t_war_college::t_war_college(t_stationary_adventure_object const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28469
VA_CHT_1(0x006f6400, 0xe)
t_skill_set const& t_war_college::get_default_available_skill_set()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:28470
VA_CHT_1(0x006f6410, 0x89)
float t_war_college::ai_value(t_adventure_ai const& arg_0, t_creature_array const& arg_1, int arg_2) const
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:64711; name:B (dyninit; see ledger)
VA_CHT_1(0x006f67f0, 0x20)
// magic_university$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:64713; name:B (dyninit; see ledger)
VA_CHT_1(0x006f6810, 0x5c)
// magic_university$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:64714
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// magic_university$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:64715
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// magic_university$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:64716
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// magic_university$tatexit4
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:28471
VA_CHT_1_COMPGEN(0x006f4fe0, 0x30, VECTOR_DELETING_DTOR, t_magic_university)

// name:A; map symbol; map:28472
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_magic_university)

// name:A; map symbol; map:28473
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// public: void t_magic_university::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:28474
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_magic_university::~t_magic_university()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:28475
VA_CHT_1_COMPGEN(0x006f6350, 0x30, SCALAR_DELETING_DTOR, t_war_college)

// name:A; map symbol; map:28476
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_war_college)

// name:A; map symbol; map:28477
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// public: void t_war_college::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:28478
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_war_college::~t_war_college()
{
    // Body unavailable.
}

// name:A; map symbol; map:28486
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_registration<t_magic_university>::t_object_registration<t_magic_university>(
    t_adv_object_type arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:28487
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_registration<t_war_college>::t_object_registration<t_war_college>(t_adv_object_type arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:28488
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_factory<t_magic_university>::t_object_factory<t_magic_university>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:28489
VA_CHT_1(0x006f6550, 0x14d)
t_stationary_adventure_object* t_object_factory<t_magic_university>::create(
    std::string const& arg_0,
    t_qualified_adv_object_type const& arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:28490
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_factory<t_war_college>::t_object_factory<t_war_college>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:28491
VA_CHT_1(0x006f66a0, 0x14d)
t_stationary_adventure_object* t_object_factory<t_war_college>::create(
    std::string const& arg_0,
    t_qualified_adv_object_type const& arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:28492
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_war_college)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28493
VA_CHT_1_COMPGEN(0x006f6870, 0x8, VECTOR_DELETING_DTOR, t_war_college)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28494
VA_CHT_1(0x006f6880, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::accept`vtordisp{-4, 48}'(t_abstract_adv_object_visitor&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28495
VA_CHT_1(0x006f6890, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::accept`vtordisp{-4, 48}'(t_abstract_adv_object_visitor&)
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28496
VA_CHT_1(0x006f68a0, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::animates`vtordisp{-4, 48}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28497
VA_CHT_1(0x006f68b0, 0xb)
// [thunk]: public: virtual std::auto_ptr<t_abstract_adv_object> t_adventure_object::clone`adjustor{56}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28498
VA_CHT_1(0x006f68c0, 0x8)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_shadow_to`vtordisp{-4, 48}'(unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28499
VA_CHT_1(0x006f68d0, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_shadow_to`vtordisp{-4, 48}'(unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28500
VA_CHT_1(0x006f68e0, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_subimage_to`vtordisp{-4, 48}'(int, unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28501
VA_CHT_1(0x006f68f0, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_subimage_to`vtordisp{-4, 48}'(int, unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&, int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28502
VA_CHT_1(0x006f6900, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_to`vtordisp{-4, 48}'(unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28503
VA_CHT_1(0x006f6910, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_to`vtordisp{-4, 48}'(unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28504
VA_CHT_1(0x006f6920, 0xb)
// [thunk]: public: virtual t_footprint const& t_abstract_stationary_adv_object::get_footprint`vtordisp{-4, 48}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28505
VA_CHT_1(0x006f6930, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_rect`vtordisp{-4, 48}'(unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28506
VA_CHT_1(0x006f6940, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_rect`vtordisp{-4, 48}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28507
VA_CHT_1(0x006f6950, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_shadow_rect`vtordisp{-4, 48}'(unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28508
VA_CHT_1(0x006f6970, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_shadow_rect`vtordisp{-4, 48}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28509
VA_CHT_1(0x006f6980, 0xb)
// [thunk]: public: virtual int t_abstract_stationary_adv_object::get_subimage_count`vtordisp{-4, 48}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28510
VA_CHT_1(0x006f6990, 0xb)
// [thunk]: public: virtual int t_stationary_adventure_object::get_subimage_depth_offset`vtordisp{-4, 48}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28511
VA_CHT_1(0x006f69a0, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_subimage_rect`vtordisp{-4, 48}'(int, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28512
VA_CHT_1(0x006f69b0, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_subimage_rect`vtordisp{-4, 48}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28513
VA_CHT_1(0x006f69c0, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::hit_test`vtordisp{-4, 48}'(unsigned long, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28514
VA_CHT_1(0x006f69d0, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::is_decorative`vtordisp{-4, 48}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28515
VA_CHT_1(0x006f69e0, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::needs_redrawing`vtordisp{-4, 48}'(unsigned long, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28516
VA_CHT_1(0x006f69f0, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::subimage_animates`vtordisp{-4, 48}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28517
VA_CHT_1(0x006f6a00, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::subimage_is_underlay`vtordisp{-4, 48}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28518
VA_CHT_1(0x006f6a10, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::subimage_needs_redrawing`vtordisp{-4, 48}'(int, unsigned long, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28519
VA_CHT_1(0x006f6a20, 0x8)
// [thunk]: public: virtual bool t_adventure_object::uses_bridge_heights`adjustor{56}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28520
VA_CHT_1(0x006f6a30, 0xb)
// [thunk]: public: virtual t_adventure_ai const* t_adventure_object::get_ai`vtordisp{-4, 56}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28521
VA_CHT_1(0x006f6a40, 0xb)
// [thunk]: public: virtual t_adventure_frame* t_adventure_object::get_adventure_frame`vtordisp{-4, 56}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28522
VA_CHT_1(0x006f6a50, 0xb)
// [thunk]: public: virtual t_adventure_object* t_adventure_object::get_adventure_object`vtordisp{-4, 56}'(void)
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28523
VA_CHT_1(0x006f6a60, 0xb)
// [thunk]: public: virtual t_adventure_map* t_adventure_object::get_map`vtordisp{-4, 56}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28524
VA_CHT_1(0x006f6a70, 0xb)
// [thunk]: public: virtual t_adv_map_point t_adventure_object::get_position`vtordisp{-4, 56}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28525
VA_CHT_1_COMPGEN(0x006f6a80, 0x8, VECTOR_DELETING_DTOR, t_magic_university)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28526
VA_CHT_1_COMPGEN(0x006f6a90, 0xb, VECTOR_DELETING_DTOR, t_magic_university)

// === .rdata (15 symbols) ===

// name:A; map symbol; map:44720
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_magic_university::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:44721
DATA_CHT_1_COMPGEN(0x008e485c, "const t_magic_university::`vftable'")

// confidence:B; rtti-order; map:44722
DATA_CHT_1_COMPGEN(0x008e491c, "const t_magic_university::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:44723
DATA_CHT_1_COMPGEN(0x008e4924, "const t_magic_university::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:44724
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_magic_university::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:44725
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_magic_university::`vbtable'{for `t_abstract_stationary_adv_object'}")

// name:A; map symbol; map:44726
DATA_CHT_1(UNACCOUNTED)
// __real@4@4009fa00000000000000

// name:A; map symbol; map:44727
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_war_college::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:44728
DATA_CHT_1_COMPGEN(0x008e49fc, "const t_war_college::`vftable'")

// confidence:B; rtti-order; map:44729
DATA_CHT_1_COMPGEN(0x008e4abc, "const t_war_college::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:44730
DATA_CHT_1_COMPGEN(0x008e4ac4, "const t_war_college::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:44731
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_war_college::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:44732
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_war_college::`vbtable'{for `t_abstract_stationary_adv_object'}")

// confidence:A; rtti-name; map:44733
DATA_CHT_1_COMPGEN(0x008e484c, "const t_object_factory<t_magic_university>::`vftable'")

// confidence:A; rtti-name; map:44734
DATA_CHT_1_COMPGEN(0x008e4854, "const t_object_factory<t_war_college>::`vftable'")

// === .rdata$r (22 symbols) ===

// name:A; map symbol; map:53062
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_magic_university::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_magic_university@@;vft=4e485c;col=50e74c;td=5aae44;chd=50e73c;offset=132;cdOffset=0;validated-hierarchy; map:53063
DATA_CHT_1_COMPGEN(0x0090e74c, "const t_magic_university::`RTTI Complete Object Locator'")

// name:A; map symbol; map:53064
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_magic_university::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_magic_university@@;bcd=50e6fc;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53065
DATA_CHT_1_COMPGEN(0x0090e6fc, "t_magic_university::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_magic_university@@;vft=4e485c;col=50e74c;td=5aae44;chd=50e73c;offset=132;cdOffset=0;validated-hierarchy; map:53066
DATA_CHT_1_COMPGEN(0x0090e714, "t_magic_university::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_magic_university@@;vft=4e485c;col=50e74c;td=5aae44;chd=50e73c;offset=132;cdOffset=0;validated-hierarchy; map:53067
DATA_CHT_1_COMPGEN(0x0090e73c, "t_magic_university::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:53068
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_magic_university::`RTTI Complete Object Locator'{for `t_counted_object'}")

// name:A; map symbol; map:53069
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_war_college::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_war_college@@;vft=4e49fc;col=50e7f0;td=5aae74;chd=50e7e0;offset=132;cdOffset=0;validated-hierarchy; map:53070
DATA_CHT_1_COMPGEN(0x0090e7f0, "const t_war_college::`RTTI Complete Object Locator'")

// name:A; map symbol; map:53071
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_war_college::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_war_college@@;bcd=50e79c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53072
DATA_CHT_1_COMPGEN(0x0090e79c, "t_war_college::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_war_college@@;vft=4e49fc;col=50e7f0;td=5aae74;chd=50e7e0;offset=132;cdOffset=0;validated-hierarchy; map:53073
DATA_CHT_1_COMPGEN(0x0090e7b4, "t_war_college::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_war_college@@;vft=4e49fc;col=50e7f0;td=5aae74;chd=50e7e0;offset=132;cdOffset=0;validated-hierarchy; map:53074
DATA_CHT_1_COMPGEN(0x0090e7e0, "t_war_college::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:53075
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_war_college::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_object_factory@Vt_magic_university@@@@;bcd=50e630;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53076
DATA_CHT_1_COMPGEN(0x0090e630, "t_object_factory<t_magic_university>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_object_factory@Vt_magic_university@@@@;vft=4e484c;col=50e664;td=5aadd8;chd=50e654;offset=0;cdOffset=0;validated-hierarchy; map:53077
DATA_CHT_1_COMPGEN(0x0090e648, "t_object_factory<t_magic_university>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_object_factory@Vt_magic_university@@@@;vft=4e484c;col=50e664;td=5aadd8;chd=50e654;offset=0;cdOffset=0;validated-hierarchy; map:53078
DATA_CHT_1_COMPGEN(0x0090e654, "t_object_factory<t_magic_university>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_object_factory@Vt_magic_university@@@@;vft=4e484c;col=50e664;td=5aadd8;chd=50e654;offset=0;cdOffset=0;validated-hierarchy; map:53079
DATA_CHT_1_COMPGEN(0x0090e664, "const t_object_factory<t_magic_university>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_object_factory@Vt_war_college@@@@;bcd=50e678;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53080
DATA_CHT_1_COMPGEN(0x0090e678, "t_object_factory<t_war_college>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_object_factory@Vt_war_college@@@@;vft=4e4854;col=50e6ac;td=5aae10;chd=50e69c;offset=0;cdOffset=0;validated-hierarchy; map:53081
DATA_CHT_1_COMPGEN(0x0090e690, "t_object_factory<t_war_college>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_object_factory@Vt_war_college@@@@;vft=4e4854;col=50e6ac;td=5aae10;chd=50e69c;offset=0;cdOffset=0;validated-hierarchy; map:53082
DATA_CHT_1_COMPGEN(0x0090e69c, "t_object_factory<t_war_college>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_object_factory@Vt_war_college@@@@;vft=4e4854;col=50e6ac;td=5aae10;chd=50e69c;offset=0;cdOffset=0;validated-hierarchy; map:53083
DATA_CHT_1_COMPGEN(0x0090e6ac, "const t_object_factory<t_war_college>::`RTTI Complete Object Locator'")

// === .data (4 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_magic_university@@;td=5aae44;validated-header; map:58748
DATA_CHT_1_COMPGEN(0x009aae44, "t_magic_university `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_war_college@@;td=5aae74;validated-header; map:58749
DATA_CHT_1_COMPGEN(0x009aae74, "t_war_college `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_object_factory@Vt_magic_university@@@@;td=5aadd8;validated-header; map:58750
DATA_CHT_1_COMPGEN(0x009aadd8, "t_object_factory<t_magic_university> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_object_factory@Vt_war_college@@@@;td=5aae10;validated-header; map:58751
DATA_CHT_1_COMPGEN(0x009aae10, "t_object_factory<t_war_college> `RTTI Type Descriptor'")

// === .bss (2 symbols) ===

namespace {

// confidence:B; dyninit-global; owner-conf-B; map:60271
DATA_CHT_1(0x009f1eb0)
t_object_registration<t_war_college> k_war_university_registration; // Initial value unavailable.

// confidence:B; dyninit-global; owner-conf-B; map:60272
DATA_CHT_1(0x009f1eb4)
t_object_registration<t_magic_university> k_registration; // Initial value unavailable.

} // anonymous namespace
