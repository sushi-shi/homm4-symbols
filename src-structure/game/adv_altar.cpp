// adv_altar.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\adv_altar.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 85/127 (A:24 B:6 C:0); unaccounted 42; skipped std 35.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (84 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:71269; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0042b310, 0x15, STATIC_INIT_DISPATCH, "adv_altar#1")

// name:C; dyninit; see ledger; map:71270
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adv_altar#1")

// confidence:D; dyninit-init; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:71271; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0042b330, 0x1c, STATIC_INIT_DISPATCH, k_registration)

// name:B; dyninit; see ledger; map:71272
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, k_registration)

// confidence:D; dyninit-init; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:71273; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0042b350, 0x1c, STATIC_INIT_DISPATCH, k_random_registration)

// name:B; dyninit; see ledger; map:71274
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, k_random_registration)

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3593
VA_CHT_1(0x0042b370, 0x58)
t_skill_type hero_can_learn_more_skill(t_skill_type arg_0, t_hero const* arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:3594
VA_CHT_1(0x0042b3d0, 0x11b)
t_adv_altar::t_adv_altar(std::string const& arg_0, t_qualified_adv_object_type const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:3595
VA_CHT_1(0x0042b580, 0x1a5)
t_adv_altar::t_adv_altar(t_skill_type arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:3596
VA_CHT_1(0x0042b730, 0x647)
void t_adv_altar::activate_trigger(
    t_army* arg_0,
    t_adv_map_point const& arg_1,
    t_direction arg_2,
    t_adventure_frame* arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3597
VA_CHT_1(0x0042bd80, 0x1f2)
void t_adv_altar::select_skill_for_computer(t_army& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:3598
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adv_altar::read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_qualified_adv_object_type const& arg_1,
    int arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:3599
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adv_altar::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:3600
VA_CHT_1(0x0042bf80, 0x144)
float t_adv_altar::ai_value(t_adventure_ai const& arg_0, t_creature_array const& arg_1, int arg_2) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:3601
VA_CHT_1(0x0042c0d0, 0x131)
t_random_altar::t_random_altar(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:3602
VA_CHT_1(0x0042c2d0, 0x105)
bool t_random_altar::read_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_progress_handler* arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:3603
VA_CHT_1(0x0042c3e0, 0x222)
bool t_random_altar::preplacement(t_adventure_map& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:3604
VA_CHT_1(0x0042c630, 0x6f)
void t_random_altar::place(t_adventure_map& arg_0, t_adv_map_point const& arg_1)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:71275; name:B (dyninit; see ledger)
VA_CHT_1(0x0042c940, 0x20)
// adv_altar$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:71277; name:B (dyninit; see ledger)
VA_CHT_1(0x0042c960, 0x5c)
// adv_altar$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:71278
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adv_altar$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:71279
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adv_altar$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:71280
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adv_altar$tatexit4
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:3605
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_skill::t_skill(t_skill_type arg_0, t_skill_mastery arg_1)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:3606
VA_CHT_1_COMPGEN(0x0042b4f0, 0x2d, VECTOR_DELETING_DTOR, t_adv_altar)

// name:A; map symbol; map:3607
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_adv_altar)

// name:A; map symbol; map:3608
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// public: void t_adv_altar::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:3609
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_altar::~t_adv_altar()
{
    // Body unavailable.
}

// name:A; map symbol; map:3610
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_dialog_altar>::~t_counted_ptr<t_dialog_altar>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:3611
VA_CHT_1_COMPGEN(0x0042c210, 0x2d, VECTOR_DELETING_DTOR, t_random_altar)

// name:A; map symbol; map:3612
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_random_altar)

// name:A; map symbol; map:3613
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// public: void t_random_altar::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:3614
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_random_altar::~t_random_altar()
{
    // Body unavailable.
}

// name:A; map symbol; map:3615
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_linkage_data::~t_linkage_data()
{
    // Body unavailable.
}

// name:A; map symbol; map:3621
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::bitset<9> operator&(std::bitset<9> const& arg_0, std::bitset<9> const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:3648
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_register_with_type<t_adv_altar>::t_register_with_type<t_adv_altar>(t_adv_object_type arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:3649
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_registration<t_random_altar>::t_object_registration<t_random_altar>(t_adv_object_type arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:3650
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_skill_type enum_incr(t_skill_type& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:3651
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_skill_mastery enum_add(t_skill_mastery arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:3652
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_dialog_altar>::t_counted_ptr<t_dialog_altar>()
{
    // Body unavailable.
}

// name:A; map symbol; map:3653
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_dialog_altar>& t_counted_ptr<t_dialog_altar>::operator=(t_dialog_altar* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:3654
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_dialog_altar* t_counted_ptr<t_dialog_altar>::operator->() const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3655
VA_CHT_1(0x0042c240, 0x85)
std::bitset<9> get_bitset(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:3656
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
unsigned int t_random_number_generator::operator()(unsigned int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:3660
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_factory_with_type<t_adv_altar>::t_object_factory_with_type<t_adv_altar>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:3661
VA_CHT_1(0x0042c860, 0x67)
t_stationary_adventure_object* t_object_factory_with_type<t_adv_altar>::create(
    std::string const& arg_0,
    t_qualified_adv_object_type const& arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:3662
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_factory<t_random_altar>::t_object_factory<t_random_altar>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:3663
VA_CHT_1(0x0042c8d0, 0x62)
t_stationary_adventure_object* t_object_factory<t_random_altar>::create(
    std::string const& arg_0,
    t_qualified_adv_object_type const& arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:3664
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_skill_mastery enum_incr(t_skill_mastery& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3665
VA_CHT_1_COMPGEN(0x0042c9c0, 0x8, VECTOR_DELETING_DTOR, t_adv_altar)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3666
VA_CHT_1_COMPGEN(0x0042c9d0, 0xb, VECTOR_DELETING_DTOR, t_adv_altar)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3667
VA_CHT_1_COMPGEN(0x0042c9e0, 0xb, VECTOR_DELETING_DTOR, t_random_altar)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3668
VA_CHT_1_COMPGEN(0x0042c9f0, 0xb, VECTOR_DELETING_DTOR, t_random_altar)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3669
VA_CHT_1(0x0042ca00, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::accept`vtordisp{-4, 36}'(t_abstract_adv_object_visitor&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3670
VA_CHT_1(0x0042ca10, 0x8)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::accept`vtordisp{-4, 36}'(t_abstract_adv_object_visitor&)
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3671
VA_CHT_1(0x0042ca20, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::animates`vtordisp{-4, 36}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3672
VA_CHT_1(0x0042ca30, 0xb)
// [thunk]: public: virtual std::auto_ptr<t_abstract_adv_object> t_adventure_object::clone`adjustor{44}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3673
VA_CHT_1(0x0042ca40, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_shadow_to`vtordisp{-4, 36}'(unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3674
VA_CHT_1(0x0042ca50, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_shadow_to`vtordisp{-4, 36}'(unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3675
VA_CHT_1(0x0042ca60, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_subimage_to`vtordisp{-4, 36}'(int, unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3676
VA_CHT_1(0x0042ca70, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_subimage_to`vtordisp{-4, 36}'(int, unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&, int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3677
VA_CHT_1(0x0042ca80, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_to`vtordisp{-4, 36}'(unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3678
VA_CHT_1(0x0042ca90, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_to`vtordisp{-4, 36}'(unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3679
VA_CHT_1(0x0042caa0, 0xb)
// [thunk]: public: virtual t_footprint const& t_abstract_stationary_adv_object::get_footprint`vtordisp{-4, 36}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3680
VA_CHT_1(0x0042cab0, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_rect`vtordisp{-4, 36}'(unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3681
VA_CHT_1(0x0042cac0, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_rect`vtordisp{-4, 36}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3682
VA_CHT_1(0x0042cad0, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_shadow_rect`vtordisp{-4, 36}'(unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3683
VA_CHT_1(0x0042cae0, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_shadow_rect`vtordisp{-4, 36}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3684
VA_CHT_1(0x0042caf0, 0xb)
// [thunk]: public: virtual int t_abstract_stationary_adv_object::get_subimage_count`vtordisp{-4, 36}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3685
VA_CHT_1(0x0042cb00, 0xb)
// [thunk]: public: virtual int t_stationary_adventure_object::get_subimage_depth_offset`vtordisp{-4, 36}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3686
VA_CHT_1(0x0042cb10, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_subimage_rect`vtordisp{-4, 36}'(int, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3687
VA_CHT_1(0x0042cb20, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_subimage_rect`vtordisp{-4, 36}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3688
VA_CHT_1(0x0042cb30, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::hit_test`vtordisp{-4, 36}'(unsigned long, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3689
VA_CHT_1(0x0042cb40, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::is_decorative`vtordisp{-4, 36}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3690
VA_CHT_1(0x0042cb50, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::needs_redrawing`vtordisp{-4, 36}'(unsigned long, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3691
VA_CHT_1(0x0042cb60, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::subimage_animates`vtordisp{-4, 36}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3692
VA_CHT_1(0x0042cb70, 0x8)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::subimage_is_underlay`vtordisp{-4, 36}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3693
VA_CHT_1(0x0042cb80, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::subimage_needs_redrawing`vtordisp{-4, 36}'(int, unsigned long, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3694
VA_CHT_1(0x0042cb90, 0xb)
// [thunk]: public: virtual bool t_adventure_object::uses_bridge_heights`adjustor{44}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3695
VA_CHT_1(0x0042cba0, 0xb)
// [thunk]: public: virtual t_adventure_ai const* t_adventure_object::get_ai`vtordisp{-4, 44}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3696
VA_CHT_1(0x0042cbb0, 0xb)
// [thunk]: public: virtual t_adventure_frame* t_adventure_object::get_adventure_frame`vtordisp{-4, 44}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3697
VA_CHT_1(0x0042cbc0, 0xb)
// [thunk]: public: virtual t_adventure_object* t_adventure_object::get_adventure_object`vtordisp{-4, 44}'(void)
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3698
VA_CHT_1(0x0042cbd0, 0x8)
// [thunk]: public: virtual t_adventure_map* t_adventure_object::get_map`vtordisp{-4, 44}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3699
VA_CHT_1(0x0042cbe0, 0xb)
// [thunk]: public: virtual t_adv_map_point t_adventure_object::get_position`vtordisp{-4, 44}'(void) const
// Function body not reconstructed; signature retained as a comment.

// === .rdata (14 symbols) ===

// name:A; map symbol; map:42664
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_altar::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:42665
DATA_CHT_1_COMPGEN(0x008ccd44, "const t_adv_altar::`vftable'")

// confidence:B; rtti-order; map:42666
DATA_CHT_1_COMPGEN(0x008cce04, "const t_adv_altar::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:42667
DATA_CHT_1_COMPGEN(0x008cce0c, "const t_adv_altar::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:42668
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_altar::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:42669
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_altar::`vbtable'{for `t_abstract_stationary_adv_object'}")

// name:A; map symbol; map:42670
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_random_altar::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:42671
DATA_CHT_1_COMPGEN(0x008ccedc, "const t_random_altar::`vftable'")

// confidence:B; rtti-order; map:42672
DATA_CHT_1_COMPGEN(0x008ccf9c, "const t_random_altar::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:42673
DATA_CHT_1_COMPGEN(0x008ccfa4, "const t_random_altar::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:42674
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_random_altar::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:42675
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_random_altar::`vbtable'{for `t_abstract_stationary_adv_object'}")

// confidence:A; rtti-name; map:42676
DATA_CHT_1_COMPGEN(0x008ccd34, "const t_object_factory_with_type<t_adv_altar>::`vftable'")

// confidence:A; rtti-name; map:42677
DATA_CHT_1_COMPGEN(0x008ccd3c, "const t_object_factory<t_random_altar>::`vftable'")

// === .rdata$r (22 symbols) ===

// name:A; map symbol; map:47755
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_altar::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_adv_altar@@;vft=4ccd44;col=4f5f14;td=586928;chd=4f5f04;offset=88;cdOffset=0;validated-hierarchy; map:47756
DATA_CHT_1_COMPGEN(0x008f5f14, "const t_adv_altar::`RTTI Complete Object Locator'")

// name:A; map symbol; map:47757
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_altar::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adv_altar@@;bcd=4f5ec4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47758
DATA_CHT_1_COMPGEN(0x008f5ec4, "t_adv_altar::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adv_altar@@;vft=4ccd44;col=4f5f14;td=586928;chd=4f5f04;offset=88;cdOffset=0;validated-hierarchy; map:47759
DATA_CHT_1_COMPGEN(0x008f5edc, "t_adv_altar::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adv_altar@@;vft=4ccd44;col=4f5f14;td=586928;chd=4f5f04;offset=88;cdOffset=0;validated-hierarchy; map:47760
DATA_CHT_1_COMPGEN(0x008f5f04, "t_adv_altar::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:47761
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_altar::`RTTI Complete Object Locator'{for `t_counted_object'}")

// name:A; map symbol; map:47762
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_random_altar::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_random_altar@@;vft=4ccedc;col=4f5fb4;td=586958;chd=4f5fa4;offset=120;cdOffset=0;validated-hierarchy; map:47763
DATA_CHT_1_COMPGEN(0x008f5fb4, "const t_random_altar::`RTTI Complete Object Locator'")

// name:A; map symbol; map:47764
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_random_altar::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_random_altar@@;bcd=4f5f64;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47765
DATA_CHT_1_COMPGEN(0x008f5f64, "t_random_altar::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_random_altar@@;vft=4ccedc;col=4f5fb4;td=586958;chd=4f5fa4;offset=120;cdOffset=0;validated-hierarchy; map:47766
DATA_CHT_1_COMPGEN(0x008f5f7c, "t_random_altar::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_random_altar@@;vft=4ccedc;col=4f5fb4;td=586958;chd=4f5fa4;offset=120;cdOffset=0;validated-hierarchy; map:47767
DATA_CHT_1_COMPGEN(0x008f5fa4, "t_random_altar::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:47768
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_random_altar::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_object_factory_with_type@Vt_adv_altar@@@@;bcd=4f5df8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47769
DATA_CHT_1_COMPGEN(0x008f5df8, "t_object_factory_with_type<t_adv_altar>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_object_factory_with_type@Vt_adv_altar@@@@;vft=4ccd34;col=4f5e2c;td=5868b8;chd=4f5e1c;offset=0;cdOffset=0;validated-hierarchy; map:47770
DATA_CHT_1_COMPGEN(0x008f5e10, "t_object_factory_with_type<t_adv_altar>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_object_factory_with_type@Vt_adv_altar@@@@;vft=4ccd34;col=4f5e2c;td=5868b8;chd=4f5e1c;offset=0;cdOffset=0;validated-hierarchy; map:47771
DATA_CHT_1_COMPGEN(0x008f5e1c, "t_object_factory_with_type<t_adv_altar>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_object_factory_with_type@Vt_adv_altar@@@@;vft=4ccd34;col=4f5e2c;td=5868b8;chd=4f5e1c;offset=0;cdOffset=0;validated-hierarchy; map:47772
DATA_CHT_1_COMPGEN(0x008f5e2c, "const t_object_factory_with_type<t_adv_altar>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_object_factory@Vt_random_altar@@@@;bcd=4f5e40;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47773
DATA_CHT_1_COMPGEN(0x008f5e40, "t_object_factory<t_random_altar>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_object_factory@Vt_random_altar@@@@;vft=4ccd3c;col=4f5e74;td=5868f4;chd=4f5e64;offset=0;cdOffset=0;validated-hierarchy; map:47774
DATA_CHT_1_COMPGEN(0x008f5e58, "t_object_factory<t_random_altar>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_object_factory@Vt_random_altar@@@@;vft=4ccd3c;col=4f5e74;td=5868f4;chd=4f5e64;offset=0;cdOffset=0;validated-hierarchy; map:47775
DATA_CHT_1_COMPGEN(0x008f5e64, "t_object_factory<t_random_altar>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_object_factory@Vt_random_altar@@@@;vft=4ccd3c;col=4f5e74;td=5868f4;chd=4f5e64;offset=0;cdOffset=0;validated-hierarchy; map:47776
DATA_CHT_1_COMPGEN(0x008f5e74, "const t_object_factory<t_random_altar>::`RTTI Complete Object Locator'")

// === .data (5 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_adv_altar@@;td=586928;validated-header; map:57434
DATA_CHT_1_COMPGEN(0x00986928, "t_adv_altar `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_random_altar@@;td=586958;validated-header; map:57435
DATA_CHT_1_COMPGEN(0x00986958, "t_random_altar `RTTI Type Descriptor'")

// name:A; map symbol; map:57436
DATA_CHT_1_COMPGEN(UNACCOUNTED, "\\0\\x01\\x01\\x02\\x01\\x02\\x02\\x03\\x01\\x02\\x02\\x03\\x02\\x03\\x03\\x04")

// confidence:A; rtti-type-name; type-name=.?AV?$t_object_factory_with_type@Vt_adv_altar@@@@;td=5868b8;validated-header; map:57437
DATA_CHT_1_COMPGEN(0x009868b8, "t_object_factory_with_type<t_adv_altar> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_object_factory@Vt_random_altar@@@@;td=5868f4;validated-header; map:57438
DATA_CHT_1_COMPGEN(0x009868f4, "t_object_factory<t_random_altar> `RTTI Type Descriptor'")

// === .bss (2 symbols) ===

namespace {

// confidence:B; dyninit-global; owner-conf-B; map:59944
DATA_CHT_1(0x009c6418)
t_register_with_type<t_adv_altar> k_registration; // Initial value unavailable.

// confidence:B; dyninit-global; owner-conf-B; map:59945
DATA_CHT_1(0x009c641c)
t_object_registration<t_random_altar> k_random_registration; // Initial value unavailable.

} // anonymous namespace
