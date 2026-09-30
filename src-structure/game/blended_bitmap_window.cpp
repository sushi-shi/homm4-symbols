// blended_bitmap_window.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 11/14 (A:10 B:1 C:0); unaccounted 3; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (8 symbols) ===

// confidence:A; align-order; stable,vptr; map:18443
VA_CHT_1(0x00580a50, 0xb6)
t_blended_bitmap_window::t_blended_bitmap_window(
    t_bitmap_layer const* arg_0,
    t_screen_point arg_1,
    t_window* arg_2,
    bool arg_3,
    int arg_4
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:18444
VA_CHT_1(0x00580b10, 0x15d)
void t_blended_bitmap_window::paint(t_paint_surface& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:18445
VA_CHT_1(0x00580c70, 0x48)
void t_blended_bitmap_window::on_bitmap_changed()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:18446
VA_CHT_1(0x00580cc0, 0x53)
void t_blended_bitmap_window::set_alpha(int arg_0)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:68899; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00580d20, 0x20, STATIC_INIT_DISPATCH, blended_bitmap_window)

// name:A; map symbol; map:18447
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_blended_bitmap_window)

// name:A; map symbol; map:18448
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_blended_bitmap_window)

// name:A; map symbol; map:18449
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_blended_bitmap_window::~t_blended_bitmap_window()
{
    // Body unavailable.
}

// === .rdata (1 symbols) ===

// confidence:A; rtti-name; map:43781
DATA_CHT_1_COMPGEN(0x008d7f7c, "const t_blended_bitmap_window::`vftable'")

// === .rdata$r (4 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_blended_bitmap_window@@;bcd=5020a4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50354
DATA_CHT_1_COMPGEN(0x009020a4, "t_blended_bitmap_window::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_blended_bitmap_window@@;vft=4d7f7c;col=5020e4;td=595f28;chd=5020d4;offset=0;cdOffset=0;validated-hierarchy; map:50355
DATA_CHT_1_COMPGEN(0x009020bc, "t_blended_bitmap_window::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_blended_bitmap_window@@;vft=4d7f7c;col=5020e4;td=595f28;chd=5020d4;offset=0;cdOffset=0;validated-hierarchy; map:50356
DATA_CHT_1_COMPGEN(0x009020d4, "t_blended_bitmap_window::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_blended_bitmap_window@@;vft=4d7f7c;col=5020e4;td=595f28;chd=5020d4;offset=0;cdOffset=0;validated-hierarchy; map:50357
DATA_CHT_1_COMPGEN(0x009020e4, "const t_blended_bitmap_window::`RTTI Complete Object Locator'")

// === .data (1 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_blended_bitmap_window@@;td=595f28;validated-header; map:58104
DATA_CHT_1_COMPGEN(0x00995f28, "t_blended_bitmap_window `RTTI Type Descriptor'")
