// buffer_window.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 16/26 (A:6 B:0 C:0); unaccounted 10; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (20 symbols) ===

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:18452
VA_CHT_1(0x00580e70, 0xa)
t_image_buffer::t_image_buffer()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:18453
VA_CHT_1(0x00580e80, 0x21)
t_image_buffer::t_image_buffer(t_image_buffer const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:18454
VA_CHT_1(0x00580eb0, 0x36)
t_image_buffer::~t_image_buffer()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:18455
VA_CHT_1(0x00580ef0, 0x79)
t_image_buffer& t_image_buffer::operator=(t_image_buffer const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:18456
VA_CHT_1(0x00580f70, 0x172)
t_image_buffer::t_image_buffer(int arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:18457
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_dib_section<unsigned short> const* t_image_buffer::get_dib_section() const
{
    // Body unavailable.
}

// name:A; map symbol; map:18458
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_bitmap<unsigned short>* t_image_buffer::get_bitmap() const
{
    // Body unavailable.
}

// confidence:D; align-order; vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:18459
VA_CHT_1(0x005810f0, 0x4a)
t_buffer_window::t_buffer_window(t_screen_point arg_0, t_window* arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:18460
VA_CHT_1(0x005811f0, 0x79)
void t_buffer_window::set_bitmap(t_image_buffer const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:18461
VA_CHT_1(0x00581270, 0x45)
void t_buffer_window::paint(t_paint_surface& arg_0)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:68897; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005812c0, 0x20, STATIC_INIT_DISPATCH, buffer_window)

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:18462
VA_CHT_1_COMPGEN(0x00581140, 0x1e, VECTOR_DELETING_DTOR, t_buffer_window)

// name:A; map symbol; map:18463
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_buffer_window)

// name:A; map symbol; map:18464
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_buffer_window::~t_buffer_window()
{
    // Body unavailable.
}

// name:A; map symbol; map:18465
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_rect operator+(t_screen_point const& arg_0, t_screen_rect const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:18466
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_shared_ptr<t_dib_section<unsigned short>>::t_shared_ptr<t_dib_section<unsigned short>>(
    t_shared_ptr<t_dib_section<unsigned short>> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:18467
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_shared_ptr<t_dib_section<unsigned short>>::t_shared_ptr<t_dib_section<unsigned short>>(
    t_dib_section<unsigned short>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:18468
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_shared_ptr<t_dib_section<unsigned short>>& t_shared_ptr<t_dib_section<unsigned short>>::operator=(
    t_shared_ptr<t_dib_section<unsigned short>> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:18469
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_shared_ptr<t_dib_section<unsigned short>>::assign(
    t_dib_section<unsigned short>* arg_0,
    t_shared_ptr_base const& arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:18470
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_shared_ptr<t_dib_section<unsigned short>>::add_link(t_shared_ptr_base const& arg_0) const
{
    // Body unavailable.
}

// === .rdata (1 symbols) ===

// confidence:A; rtti-name; map:43782
DATA_CHT_1_COMPGEN(0x008d7ff4, "const t_buffer_window::`vftable'")

// === .rdata$r (4 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_buffer_window@@;bcd=5020f8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50358
DATA_CHT_1_COMPGEN(0x009020f8, "t_buffer_window::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_buffer_window@@;vft=4d7ff4;col=502134;td=595f50;chd=502124;offset=0;cdOffset=0;validated-hierarchy; map:50359
DATA_CHT_1_COMPGEN(0x00902110, "t_buffer_window::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_buffer_window@@;vft=4d7ff4;col=502134;td=595f50;chd=502124;offset=0;cdOffset=0;validated-hierarchy; map:50360
DATA_CHT_1_COMPGEN(0x00902124, "t_buffer_window::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_buffer_window@@;vft=4d7ff4;col=502134;td=595f50;chd=502124;offset=0;cdOffset=0;validated-hierarchy; map:50361
DATA_CHT_1_COMPGEN(0x00902134, "const t_buffer_window::`RTTI Complete Object Locator'")

// === .data (1 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_buffer_window@@;td=595f50;validated-header; map:58105
DATA_CHT_1_COMPGEN(0x00995f50, "t_buffer_window `RTTI Type Descriptor'")
