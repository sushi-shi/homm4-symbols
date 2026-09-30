// bitmap_layer_window.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 10/13 (A:4 B:0 C:0); unaccounted 3; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (9 symbols) ===

// confidence:D; align-order; stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:18230
VA_CHT_1(0x00579c80, 0xfb)
t_bitmap_layer_window::t_bitmap_layer_window(
    t_bitmap_layer const* arg_0,
    t_screen_point arg_1,
    t_window* arg_2,
    bool arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:18231
VA_CHT_1(0x00579d80, 0x92)
void t_bitmap_layer_window::set_bitmap(t_bitmap_layer const* arg_0, bool arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:18232
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bitmap_layer_window::on_bitmap_changed()
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:18233
VA_CHT_1(0x00579e20, 0xc7)
void t_bitmap_layer_window::set_bitmap(t_bitmap_layer const* arg_0, t_screen_point arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:18234
VA_CHT_1(0x00579ef0, 0x9e)
bool t_bitmap_layer_window::is_contained(t_screen_point arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:18235
VA_CHT_1(0x00579f90, 0x110)
void t_bitmap_layer_window::paint(t_paint_surface& arg_0)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:68951; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0057a0a0, 0x20, STATIC_INIT_DISPATCH, bitmap_layer_window)

// name:A; map symbol; map:18236
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_bitmap_layer_window)

// name:A; map symbol; map:18237
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_bitmap_layer_window)

// === .rdata (1 symbols) ===

// confidence:A; rtti-name; map:43752
DATA_CHT_1_COMPGEN(0x008d7c04, "const t_bitmap_layer_window::`vftable'")

// === .rdata$r (3 symbols) ===

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_bitmap_layer_window@@;vft=4d7c04;col=501a34;td=58f47c;chd=501a24;offset=0;cdOffset=0;validated-hierarchy; map:50266
DATA_CHT_1_COMPGEN(0x00901a10, "t_bitmap_layer_window::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_bitmap_layer_window@@;vft=4d7c04;col=501a34;td=58f47c;chd=501a24;offset=0;cdOffset=0;validated-hierarchy; map:50267
DATA_CHT_1_COMPGEN(0x00901a24, "t_bitmap_layer_window::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_bitmap_layer_window@@;vft=4d7c04;col=501a34;td=58f47c;chd=501a24;offset=0;cdOffset=0;validated-hierarchy; map:50268
DATA_CHT_1_COMPGEN(0x00901a34, "const t_bitmap_layer_window::`RTTI Complete Object Locator'")
