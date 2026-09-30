// window_clip_list.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 16/24 (A:0 B:0 C:0); unaccounted 8; skipped std 14.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (24 symbols) ===

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40619
VA_CHT_1(0x00836b20, 0x34)
t_window_clip_list::t_window_clip_list()
{
    // Body unavailable.
}

// name:A; map symbol; map:40620
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_window_clip_list::t_window_clip_list(t_window_rect const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40621
VA_CHT_1(0x00836b60, 0x59)
void t_window_clip_list::clear()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40622
VA_CHT_1(0x00836c60, 0x317)
bool t_window_clip_list::contains(t_screen_rect const& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40623
VA_CHT_1(0x00836f80, 0x83)
bool t_window_clip_list::intersects(t_screen_rect const& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40624
VA_CHT_1(0x00837010, 0xb6)
void t_window_clip_list::offset(t_screen_point const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40625
VA_CHT_1(0x008370d0, 0x1af)
void t_window_clip_list::update_extent()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40626
VA_CHT_1(0x008374d0, 0x3ea)
bool t_window_clip_list::remove(t_screen_rect const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40627
VA_CHT_1(0x008378c0, 0xe)
t_window_clip_list& t_window_clip_list::operator-=(t_screen_rect const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40628
VA_CHT_1(0x00837c30, 0x2f1)
bool t_window_clip_list::remove(t_clip_list const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40629
VA_CHT_1(0x00837f30, 0x2a)
t_window_clip_list& t_window_clip_list::operator-=(t_clip_list const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40630
VA_CHT_1(0x00837f60, 0x58)
void subtract(t_clip_list& arg_0, t_window_clip_list const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40631
VA_CHT_1(0x00838010, 0x44)
void t_window_clip_list::merge_rectangles()
{
    // Body unavailable.
}

// name:A; map symbol; map:40632
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_window_clip_list& t_window_clip_list::operator+=(t_window_rect const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40633
VA_CHT_1(0x00838060, 0x117)
t_window_clip_list& t_window_clip_list::operator+=(t_window_clip_list const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40634
VA_CHT_1(0x008381d0, 0x2a)
void t_window_clip_list::add(t_clip_list& arg_0, t_window* arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:40635
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_window_clip_list::intersect(t_screen_rect const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:40636
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_window_clip_list::intersect(t_clip_list const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:40637
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::list<t_window_rect, std::allocator<t_window_rect>>::const_iterator t_window_clip_list::begin() const
{
    // Body unavailable.
}

// name:A; map symbol; map:40638
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::list<t_window_rect, std::allocator<t_window_rect>>::const_iterator t_window_clip_list::end() const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40639
VA_CHT_1(0x00837fc0, 0x41)
t_window_rect::t_window_rect(t_screen_rect const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:40640
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_window_clip_list::empty() const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40641
VA_CHT_1(0x008378e0, 0x141)
t_window_rect::t_window_rect(t_screen_rect const& arg_0, t_window* arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:40652
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_clip_list::t_clip_list(
    std::list<t_window_rect, std::allocator<t_window_rect>>::const_iterator arg_0,
    std::list<t_window_rect, std::allocator<t_window_rect>>::const_iterator arg_1
)
{
    // Body unavailable.
}
