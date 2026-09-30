// bitmap_raw_window.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 9/19 (A:6 B:0 C:0); unaccounted 10; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (13 symbols) ===

// confidence:D; align-order; vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:18348
VA_CHT_1(0x0057bc70, 0xdd)
t_bitmap_raw_window::t_bitmap_raw_window(
    t_cached_ptr<t_bitmap_raw_16> const& arg_0,
    t_screen_point arg_1,
    t_window* arg_2,
    bool arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:18349
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bitmap_raw_window::set_bitmap(t_bitmap_raw_16 const* arg_0, bool arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:18350
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bitmap_raw_window::on_bitmap_changed()
{
    // Body unavailable.
}

// name:A; map symbol; map:18351
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bitmap_raw_window::set_bitmap(t_bitmap_raw_16 const* arg_0, t_screen_point arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:18352
VA_CHT_1(0x0057bd50, 0x40)
bool t_bitmap_raw_window::is_contained(t_screen_point arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:18353
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bitmap_raw_window::paint(t_paint_surface& arg_0)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:68943; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0057be70, 0x20, STATIC_INIT_DISPATCH, bitmap_raw_window)

// name:A; map symbol; map:18354
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_bitmap_raw_window)

// name:A; map symbol; map:18355
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_bitmap_raw_window)

// name:A; map symbol; map:18356
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_raw_window::~t_bitmap_raw_window()
{
    // Body unavailable.
}

// name:A; map symbol; map:18357
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_raw_16* t_cached_ptr<t_bitmap_raw_16>::operator t_bitmap_raw_16*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:18358
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_raw_16* t_cached_ptr<t_bitmap_raw_16>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:18359
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_cached_ptr<t_bitmap_raw_16>::operator==(t_bitmap_raw_16 const* arg_0) const
{
    // Body unavailable.
}

// === .rdata (1 symbols) ===

// confidence:A; rtti-name; map:43766
DATA_CHT_1_COMPGEN(0x008d7d4c, "const t_bitmap_raw_window::`vftable'")

// === .rdata$r (4 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_bitmap_raw_window@@;bcd=501d44;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50307
DATA_CHT_1_COMPGEN(0x00901d44, "t_bitmap_raw_window::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_bitmap_raw_window@@;vft=4d7d4c;col=501d80;td=595914;chd=501d70;offset=0;cdOffset=0;validated-hierarchy; map:50308
DATA_CHT_1_COMPGEN(0x00901d5c, "t_bitmap_raw_window::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_bitmap_raw_window@@;vft=4d7d4c;col=501d80;td=595914;chd=501d70;offset=0;cdOffset=0;validated-hierarchy; map:50309
DATA_CHT_1_COMPGEN(0x00901d70, "t_bitmap_raw_window::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_bitmap_raw_window@@;vft=4d7d4c;col=501d80;td=595914;chd=501d70;offset=0;cdOffset=0;validated-hierarchy; map:50310
DATA_CHT_1_COMPGEN(0x00901d80, "const t_bitmap_raw_window::`RTTI Complete Object Locator'")

// === .data (1 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_bitmap_raw_window@@;td=595914;validated-header; map:58092
DATA_CHT_1_COMPGEN(0x00995914, "t_bitmap_raw_window `RTTI Type Descriptor'")
