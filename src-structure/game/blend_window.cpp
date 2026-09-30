// blend_window.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 9/13 (A:9 B:0 C:0); unaccounted 4; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (7 symbols) ===

// confidence:A; align-order; stable,vptr; map:18437
VA_CHT_1(0x00580800, 0xb6)
t_blend_window::t_blend_window(
    t_pixel_24 arg_0,
    unsigned char arg_1,
    t_screen_rect const& arg_2,
    t_window* arg_3
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:18438
VA_CHT_1(0x005808c0, 0x16f)
void t_blend_window::paint(t_paint_surface& arg_0)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:68901; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00580a30, 0x20, STATIC_INIT_DISPATCH, blend_window)

// name:A; map symbol; map:18439
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_blend_window)

// name:A; map symbol; map:18440
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_blend_window)

// name:A; map symbol; map:18441
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_blend_window::~t_blend_window()
{
    // Body unavailable.
}

// name:A; map symbol; map:18442
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_rect const& t_paint_surface::get_screen_rect() const
{
    // Body unavailable.
}

// === .rdata (1 symbols) ===

// confidence:A; rtti-name; map:43780
DATA_CHT_1_COMPGEN(0x008d7f04, "const t_blend_window::`vftable'")

// === .rdata$r (4 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_blend_window@@;bcd=502054;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50350
DATA_CHT_1_COMPGEN(0x00902054, "t_blend_window::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_blend_window@@;vft=4d7f04;col=502090;td=595f08;chd=502080;offset=0;cdOffset=0;validated-hierarchy; map:50351
DATA_CHT_1_COMPGEN(0x0090206c, "t_blend_window::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_blend_window@@;vft=4d7f04;col=502090;td=595f08;chd=502080;offset=0;cdOffset=0;validated-hierarchy; map:50352
DATA_CHT_1_COMPGEN(0x00902080, "t_blend_window::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_blend_window@@;vft=4d7f04;col=502090;td=595f08;chd=502080;offset=0;cdOffset=0;validated-hierarchy; map:50353
DATA_CHT_1_COMPGEN(0x00902090, "const t_blend_window::`RTTI Complete Object Locator'")

// === .data (1 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_blend_window@@;td=595f08;validated-header; map:58103
DATA_CHT_1_COMPGEN(0x00995f08, "t_blend_window `RTTI Type Descriptor'")
