// bitmap_group_window.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 14/17 (A:4 B:0 C:0); unaccounted 3; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (13 symbols) ===

// confidence:D; align-order; stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:18072
VA_CHT_1(0x00572300, 0x13a)
t_bitmap_group_window::t_bitmap_group_window(
    t_cached_ptr<t_bitmap_group> const& arg_0,
    t_screen_point arg_1,
    int arg_2,
    t_window* arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:18073
VA_CHT_1(0x00572460, 0x139)
t_bitmap_group_window::t_bitmap_group_window(
    t_cached_ptr<t_bitmap_group> const& arg_0,
    t_screen_point arg_1,
    std::string const& arg_2,
    t_window* arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:18074
VA_CHT_1(0x005725a0, 0x2b)
int t_bitmap_group_window::get_frame_count() const
{
    // Body unavailable.
}

// confidence:D; align-order; stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:18075
VA_CHT_1(0x005725d0, 0x6d)
bool t_bitmap_group_window::is_contained(t_screen_point arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:18076
VA_CHT_1(0x00572640, 0xf4)
void t_bitmap_group_window::paint(t_paint_surface& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:18077
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bitmap_group_window::set_bitmaps(t_cached_ptr<t_bitmap_group> const& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:18078
VA_CHT_1(0x00572740, 0xc5)
void t_bitmap_group_window::set_frame(int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:18079
VA_CHT_1(0x00572810, 0xf9)
void t_bitmap_group_window::set_frame(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:18080
VA_CHT_1(0x00572910, 0xa5)
void t_bitmap_group_window::set_size_from_frame()
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:68967; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005729c0, 0x20, STATIC_INIT_DISPATCH, bitmap_group_window)

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:18081
VA_CHT_1_COMPGEN(0x00572440, 0x1e, SCALAR_DELETING_DTOR, t_bitmap_group_window)

// name:A; map symbol; map:18082
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_bitmap_group_window)

// name:A; map symbol; map:18083
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_group& t_cached_ptr<t_bitmap_group>::operator*() const
{
    // Body unavailable.
}

// === .rdata (1 symbols) ===

// confidence:A; rtti-name; map:43746
DATA_CHT_1_COMPGEN(0x008d7a84, "const t_bitmap_group_window::`vftable'")

// === .rdata$r (3 symbols) ===

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_bitmap_group_window@@;vft=4d7a84;col=501870;td=58f34c;chd=501860;offset=0;cdOffset=0;validated-hierarchy; map:50243
DATA_CHT_1_COMPGEN(0x0090184c, "t_bitmap_group_window::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_bitmap_group_window@@;vft=4d7a84;col=501870;td=58f34c;chd=501860;offset=0;cdOffset=0;validated-hierarchy; map:50244
DATA_CHT_1_COMPGEN(0x00901860, "t_bitmap_group_window::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_bitmap_group_window@@;vft=4d7a84;col=501870;td=58f34c;chd=501860;offset=0;cdOffset=0;validated-hierarchy; map:50245
DATA_CHT_1_COMPGEN(0x00901870, "const t_bitmap_group_window::`RTTI Complete Object Locator'")
