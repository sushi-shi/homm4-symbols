// direct_paint_surface.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 20/33 (A:20 B:0 C:0); unaccounted 13; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (19 symbols) ===

// confidence:A; align-order; stable,vptr; map:25749
VA_CHT_1(0x00699210, 0x3b)
t_direct_paint_surface::t_direct_paint_surface(
    t_screen_point arg_0,
    IDirectDrawSurface7* arg_1,
    IDirectDrawSurface7* arg_2,
    t_screen_point arg_3,
    t_screen_rect const& arg_4
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:25750
VA_CHT_1(0x00699270, 0xe8)
t_shared_ptr<t_abstract_bitmap<unsigned short>> t_direct_paint_surface::get_bitmap()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:25751
VA_CHT_1(0x00699360, 0xb5)
void t_direct_paint_surface::copy_buffer()
{
    // Body unavailable.
}

// confidence:A; align-order; stable,vptr; map:25752
VA_CHT_1(0x00699420, 0x3b)
t_buffered_direct_paint_surface::t_buffered_direct_paint_surface(
    t_screen_point arg_0,
    IDirectDrawSurface7* arg_1,
    IDirectDrawSurface7* arg_2,
    t_screen_point arg_3,
    t_screen_rect const& arg_4
)
{
    // Body unavailable.
}

// name:A; map symbol; map:25753
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_buffered_direct_paint_surface::draw_direct(
    t_screen_point const& arg_0,
    t_dib_section<unsigned short> const& arg_1,
    t_screen_rect const& arg_2
)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:65550; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00699480, 0x20, STATIC_INIT_DISPATCH, direct_paint_surface)

// confidence:A; align-band; retn,vslot; map:25754
VA_CHT_1_COMPGEN(0x00699250, 0x1e, VECTOR_DELETING_DTOR, t_direct_paint_surface)

// name:A; map symbol; map:25755
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_direct_paint_surface)

// name:A; map symbol; map:25756
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_direct_paint_surface::~t_direct_paint_surface()
{
    // Body unavailable.
}

// name:A; map symbol; map:25757
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
tagRECT to_windows_rect(t_screen_rect const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:25758
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_buffered_direct_paint_surface)

// name:A; map symbol; map:25759
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_buffered_direct_paint_surface)

// name:A; map symbol; map:25760
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_buffered_direct_paint_surface::~t_buffered_direct_paint_surface()
{
    // Body unavailable.
}

// name:A; map symbol; map:25761
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_shared_ptr<t_surface_adaptor_16>::t_shared_ptr<t_surface_adaptor_16>(t_surface_adaptor_16* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:25762
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_shared_ptr<t_surface_adaptor_16>::~t_shared_ptr<t_surface_adaptor_16>()
{
    // Body unavailable.
}

// name:A; map symbol; map:25763
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_shared_ptr<t_abstract_bitmap<unsigned short>>::t_shared_ptr<t_abstract_bitmap<unsigned short>>(
    t_shared_ptr<t_surface_adaptor_16> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:25764
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_surface_adaptor_16* t_shared_ptr<t_surface_adaptor_16>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:25765
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_shared_ptr<t_surface_adaptor_16>::set(t_surface_adaptor_16* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:25766
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_shared_ptr<t_surface_adaptor_16>::construct(t_surface_adaptor_16* arg_0)
{
    // Body unavailable.
}

// === .rdata (2 symbols) ===

// confidence:A; rtti-name; map:44463
DATA_CHT_1_COMPGEN(0x008e121c, "const t_direct_paint_surface::`vftable'")

// confidence:A; rtti-name; map:44464
DATA_CHT_1_COMPGEN(0x008e1230, "const t_buffered_direct_paint_surface::`vftable'")

// === .rdata$r (9 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_paint_surface@@;bcd=50b5a0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52375
DATA_CHT_1_COMPGEN(0x0090b5a0, "t_paint_surface::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_direct_paint_surface@@;bcd=50b5b8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52376
DATA_CHT_1_COMPGEN(0x0090b5b8, "t_direct_paint_surface::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_direct_paint_surface@@;vft=4e121c;col=50b5ec;td=5a42fc;chd=50b5dc;offset=0;cdOffset=0;validated-hierarchy; map:52377
DATA_CHT_1_COMPGEN(0x0090b5d0, "t_direct_paint_surface::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_direct_paint_surface@@;vft=4e121c;col=50b5ec;td=5a42fc;chd=50b5dc;offset=0;cdOffset=0;validated-hierarchy; map:52378
DATA_CHT_1_COMPGEN(0x0090b5dc, "t_direct_paint_surface::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_direct_paint_surface@@;vft=4e121c;col=50b5ec;td=5a42fc;chd=50b5dc;offset=0;cdOffset=0;validated-hierarchy; map:52379
DATA_CHT_1_COMPGEN(0x0090b5ec, "const t_direct_paint_surface::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_buffered_direct_paint_surface@@;bcd=50b600;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52380
DATA_CHT_1_COMPGEN(0x0090b600, "t_buffered_direct_paint_surface::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_buffered_direct_paint_surface@@;vft=4e1230;col=50b638;td=5a4324;chd=50b628;offset=0;cdOffset=0;validated-hierarchy; map:52381
DATA_CHT_1_COMPGEN(0x0090b618, "t_buffered_direct_paint_surface::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_buffered_direct_paint_surface@@;vft=4e1230;col=50b638;td=5a4324;chd=50b628;offset=0;cdOffset=0;validated-hierarchy; map:52382
DATA_CHT_1_COMPGEN(0x0090b628, "t_buffered_direct_paint_surface::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_buffered_direct_paint_surface@@;vft=4e1230;col=50b638;td=5a4324;chd=50b628;offset=0;cdOffset=0;validated-hierarchy; map:52383
DATA_CHT_1_COMPGEN(0x0090b638, "const t_buffered_direct_paint_surface::`RTTI Complete Object Locator'")

// === .data (3 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_paint_surface@@;td=5a42dc;validated-header; map:58576
DATA_CHT_1_COMPGEN(0x009a42dc, "t_paint_surface `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_direct_paint_surface@@;td=5a42fc;validated-header; map:58577
DATA_CHT_1_COMPGEN(0x009a42fc, "t_direct_paint_surface `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_buffered_direct_paint_surface@@;td=5a4324;validated-header; map:58578
DATA_CHT_1_COMPGEN(0x009a4324, "t_buffered_direct_paint_surface `RTTI Type Descriptor'")
