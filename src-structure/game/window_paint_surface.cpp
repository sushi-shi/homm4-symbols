// window_paint_surface.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 19/24 (A:19 B:0 C:0); unaccounted 5; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (12 symbols) ===

// confidence:A; align-order; vptr; map:40657
VA_CHT_1(0x00838240, 0x140)
t_window_paint_surface::t_window_paint_surface(
    t_screen_point arg_0,
    IDirectDrawSurface7* arg_1,
    t_screen_point arg_2,
    t_screen_rect const& arg_3,
    t_shared_ptr<t_dib_section<unsigned short>> arg_4
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:40658
VA_CHT_1(0x00838420, 0x30)
t_shared_ptr<t_abstract_bitmap<unsigned short>> t_window_paint_surface::get_bitmap()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:40659
VA_CHT_1(0x00838450, 0x9e)
void t_window_paint_surface::copy_buffer()
{
    // Body unavailable.
}

// confidence:A; align-order; vptr; map:40660
VA_CHT_1(0x008384f0, 0x130)
t_buffered_window_paint_surface::t_buffered_window_paint_surface(
    t_screen_point arg_0,
    IDirectDrawSurface7* arg_1,
    t_screen_point arg_2,
    t_screen_rect const& arg_3,
    t_shared_ptr<t_dib_section<unsigned short>> arg_4
)
{
    // Body unavailable.
}

// name:A; map symbol; map:40661
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_buffered_window_paint_surface::draw_direct(
    t_screen_point const& arg_0,
    t_dib_section<unsigned short> const& arg_1,
    t_screen_rect const& arg_2
)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:61260; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x008386c0, 0x20, STATIC_INIT_DISPATCH, window_paint_surface)

// confidence:A; align-band; retn,vslot; map:40662
VA_CHT_1_COMPGEN(0x00838380, 0x1e, VECTOR_DELETING_DTOR, t_window_paint_surface)

// name:A; map symbol; map:40663
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_window_paint_surface)

// name:A; map symbol; map:40664
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_window_paint_surface::~t_window_paint_surface()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:40665
VA_CHT_1_COMPGEN(0x00838620, 0x1e, VECTOR_DELETING_DTOR, t_buffered_window_paint_surface)

// name:A; map symbol; map:40666
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_buffered_window_paint_surface)

// name:A; map symbol; map:40667
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_buffered_window_paint_surface::~t_buffered_window_paint_surface()
{
    // Body unavailable.
}

// === .rdata (2 symbols) ===

// confidence:A; rtti-name; map:46041
DATA_CHT_1_COMPGEN(0x008f0f2c, "const t_window_paint_surface::`vftable'")

// confidence:A; rtti-name; map:46042
DATA_CHT_1_COMPGEN(0x008f0f40, "const t_buffered_window_paint_surface::`vftable'")

// === .rdata$r (8 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_window_paint_surface@@;bcd=51e6f4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:57001
DATA_CHT_1_COMPGEN(0x0091e6f4, "t_window_paint_surface::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_window_paint_surface@@;vft=4f0f2c;col=51e728;td=5bfbe0;chd=51e718;offset=0;cdOffset=0;validated-hierarchy; map:57002
DATA_CHT_1_COMPGEN(0x0091e70c, "t_window_paint_surface::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_window_paint_surface@@;vft=4f0f2c;col=51e728;td=5bfbe0;chd=51e718;offset=0;cdOffset=0;validated-hierarchy; map:57003
DATA_CHT_1_COMPGEN(0x0091e718, "t_window_paint_surface::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_window_paint_surface@@;vft=4f0f2c;col=51e728;td=5bfbe0;chd=51e718;offset=0;cdOffset=0;validated-hierarchy; map:57004
DATA_CHT_1_COMPGEN(0x0091e728, "const t_window_paint_surface::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_buffered_window_paint_surface@@;bcd=51e73c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:57005
DATA_CHT_1_COMPGEN(0x0091e73c, "t_buffered_window_paint_surface::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_buffered_window_paint_surface@@;vft=4f0f40;col=51e774;td=5bfc08;chd=51e764;offset=0;cdOffset=0;validated-hierarchy; map:57006
DATA_CHT_1_COMPGEN(0x0091e754, "t_buffered_window_paint_surface::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_buffered_window_paint_surface@@;vft=4f0f40;col=51e774;td=5bfc08;chd=51e764;offset=0;cdOffset=0;validated-hierarchy; map:57007
DATA_CHT_1_COMPGEN(0x0091e764, "t_buffered_window_paint_surface::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_buffered_window_paint_surface@@;vft=4f0f40;col=51e774;td=5bfc08;chd=51e764;offset=0;cdOffset=0;validated-hierarchy; map:57008
DATA_CHT_1_COMPGEN(0x0091e774, "const t_buffered_window_paint_surface::`RTTI Complete Object Locator'")

// === .data (2 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_window_paint_surface@@;td=5bfbe0;validated-header; map:59717
DATA_CHT_1_COMPGEN(0x009bfbe0, "t_window_paint_surface `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_buffered_window_paint_surface@@;td=5bfc08;validated-header; map:59718
DATA_CHT_1_COMPGEN(0x009bfc08, "t_buffered_window_paint_surface `RTTI Type Descriptor'")
