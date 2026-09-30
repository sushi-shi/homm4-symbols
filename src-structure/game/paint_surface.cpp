// paint_surface.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 18/27 (A:16 B:1 C:1); unaccounted 9; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (17 symbols) ===

// confidence:A; align-order; stable,vptr; map:31633
VA_CHT_1(0x00757ad0, 0x68)
t_paint_surface::t_paint_surface(
    t_screen_point arg_0,
    IDirectDrawSurface7* arg_1,
    t_screen_point arg_2,
    t_screen_rect const& arg_3
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:31634
VA_CHT_1(0x00757b60, 0x7)
t_paint_surface::~t_paint_surface()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:31635
VA_CHT_1(0x00757b70, 0xe1)
void t_paint_surface::draw(
    t_screen_point const& arg_0,
    t_abstract_bitmap<unsigned short> const& arg_1,
    t_screen_rect const& arg_2
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:31636
VA_CHT_1(0x00757c60, 0x22b)
void t_paint_surface::draw_direct(
    t_screen_point const& arg_0,
    t_dib_section<unsigned short> const& arg_1,
    t_screen_rect const& arg_2
)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:63797; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00757f20, 0x20, STATIC_INIT_DISPATCH, paint_surface)

// confidence:A; align-band; retn,stable,vslot; map:31637
VA_CHT_1_COMPGEN(0x00757b40, 0x20, SCALAR_DELETING_DTOR, t_paint_surface)

// name:A; map symbol; map:31638
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_paint_surface)

// confidence:C; align-band; retn,stable; map:31639
VA_CHT_1(0x00757f10, 0xd)
HBITMAP__* t_dib_section<unsigned short>::get_handle() const
{
    // Body unavailable.
}

// name:A; map symbol; map:31640
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_compatible_dc::t_compatible_dc(HDC__* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:31641
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_compatible_dc::~t_compatible_dc()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:31642
VA_CHT_1_COMPGEN(0x00757ed0, 0x1e, VECTOR_DELETING_DTOR, t_compatible_dc)

// name:A; map symbol; map:31643
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_compatible_dc)

// name:A; map symbol; map:31644
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_direct_device_context::t_direct_device_context(IDirectDrawSurface7* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:31645
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_direct_device_context::~t_direct_device_context()
{
    // Body unavailable.
}

// name:A; map symbol; map:31646
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
HDC__* t_direct_device_context::operator HDC__*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:31647
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_gdi_selector<HBITMAP__*>::~t_gdi_selector<HBITMAP__*>()
{
    // Body unavailable.
}

// name:A; map symbol; map:31648
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_gdi_selector<HBITMAP__*>::t_gdi_selector<HBITMAP__*>(HDC__* arg_0, HBITMAP__* arg_1)
{
    // Body unavailable.
}

// === .rdata (2 symbols) ===

// confidence:A; rtti-name; map:45001
DATA_CHT_1_COMPGEN(0x008e724c, "const t_paint_surface::`vftable'")

// confidence:A; rtti-name; map:45002
DATA_CHT_1_COMPGEN(0x008e7268, "const t_compatible_dc::`vftable'")

// === .rdata$r (7 symbols) ===

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_paint_surface@@;vft=4e724c;col=511ed8;td=5a42dc;chd=511ec8;offset=0;cdOffset=0;validated-hierarchy; map:53845
DATA_CHT_1_COMPGEN(0x00911ec0, "t_paint_surface::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_paint_surface@@;vft=4e724c;col=511ed8;td=5a42dc;chd=511ec8;offset=0;cdOffset=0;validated-hierarchy; map:53846
DATA_CHT_1_COMPGEN(0x00911ec8, "t_paint_surface::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_paint_surface@@;vft=4e724c;col=511ed8;td=5a42dc;chd=511ec8;offset=0;cdOffset=0;validated-hierarchy; map:53847
DATA_CHT_1_COMPGEN(0x00911ed8, "const t_paint_surface::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_compatible_dc@@;bcd=511eec;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53848
DATA_CHT_1_COMPGEN(0x00911eec, "t_compatible_dc::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_compatible_dc@@;vft=4e7268;col=511f24;td=5af6b0;chd=511f14;offset=0;cdOffset=0;validated-hierarchy; map:53849
DATA_CHT_1_COMPGEN(0x00911f04, "t_compatible_dc::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_compatible_dc@@;vft=4e7268;col=511f24;td=5af6b0;chd=511f14;offset=0;cdOffset=0;validated-hierarchy; map:53850
DATA_CHT_1_COMPGEN(0x00911f14, "t_compatible_dc::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_compatible_dc@@;vft=4e7268;col=511f24;td=5af6b0;chd=511f14;offset=0;cdOffset=0;validated-hierarchy; map:53851
DATA_CHT_1_COMPGEN(0x00911f24, "const t_compatible_dc::`RTTI Complete Object Locator'")

// === .data (1 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_compatible_dc@@;td=5af6b0;validated-header; map:58945
DATA_CHT_1_COMPGEN(0x009af6b0, "t_compatible_dc `RTTI Type Descriptor'")
