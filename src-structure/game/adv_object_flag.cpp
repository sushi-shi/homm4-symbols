// adv_object_flag.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\adv_object_flag.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 15/22 (A:0 B:0 C:0); unaccounted 7; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (22 symbols) ===

namespace {

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4987
VA_CHT_1(0x004442f0, 0x30c)
t_cached_ptr<t_animation> get_flag_animation(t_player_color arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// name:B; dyninit; see ledger; map:71004
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// get_flag_animation$sdtor
// Function body not reconstructed; signature retained as a comment.

namespace {

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4988
VA_CHT_1(0x00444600, 0x14)
t_screen_point get_base_point(t_animation const& arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4989
VA_CHT_1(0x00444620, 0x24f)
t_screen_rect const& t_adv_object_flag::get_flag_extent()
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:71005
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// t_adv_object_flag::get_flag_extent$sdtor
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:4990
VA_CHT_1(0x00444880, 0xef)
t_adv_object_flag::t_adv_object_flag(t_player_color arg_0, t_screen_point const& arg_1, int arg_2)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:4991
VA_CHT_1(0x00444970, 0x8f)
t_adv_object_flag::~t_adv_object_flag()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4992
VA_CHT_1(0x00444a00, 0x33)
int t_adv_object_flag::compute_frame(unsigned long arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:4993
VA_CHT_1(0x00444a40, 0x157)
void t_adv_object_flag::draw_to(
    int arg_0,
    t_screen_rect const& arg_1,
    t_abstract_bitmap<unsigned short>& arg_2,
    t_screen_point const& arg_3,
    int arg_4
) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:4994
VA_CHT_1(0x00444ba0, 0x7a)
void t_adv_object_flag::draw_to(
    int arg_0,
    t_abstract_bitmap<unsigned short>& arg_1,
    t_screen_point const& arg_2
) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:4995
VA_CHT_1(0x00444c20, 0x4)
int t_adv_object_flag::get_depth_offset() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4996
VA_CHT_1(0x00444c30, 0x19)
int t_adv_object_flag::get_frame_count() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:4997
VA_CHT_1(0x00444c50, 0x5c)
t_screen_rect t_adv_object_flag::get_rect() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:4998
VA_CHT_1(0x00444cb0, 0x69)
t_screen_rect t_adv_object_flag::get_rect(int arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4999
VA_CHT_1(0x00444d20, 0x4c)
bool t_adv_object_flag::hit_test(int arg_0, t_screen_point const& arg_1) const
{
    // Body unavailable.
}

// name:A; map symbol; map:5000
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adv_object_flag::is_underlay() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:5001
VA_CHT_1(0x00444ed0, 0xca)
void t_adv_object_flag::set_color(t_player_color arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:5002
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
unsigned long t_adv_object_flag::pick_time_offset() const
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:71006; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00444fa0, 0x20, STATIC_INIT_DISPATCH, adv_object_flag)

// name:A; map symbol; map:5003
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cached_ptr<t_animation>& t_cached_ptr<t_animation>::operator=(t_cached_ptr<t_animation> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:5004
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_player_color enum_incr(t_player_color& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:5005
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_cached_ptr<t_animation>::assign(t_animation* arg_0, t_cached_ptr_base const& arg_1)
{
    // Body unavailable.
}
