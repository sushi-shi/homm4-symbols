// help_balloon.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 14/19 (A:13 B:0 C:1); unaccounted 5; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (11 symbols) ===

// confidence:A; align-order; stable,vptr; map:26867
VA_CHT_1(0x006b9d20, 0x1d9)
t_help_balloon::t_help_balloon(t_screen_point arg_0, char const* arg_1)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:26868
VA_CHT_1(0x006ba190, 0x2f0)
void t_help_balloon::paint(t_paint_surface& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:65331
VA_CHT_1(0x006ba480, 0x53)
static void draw_horizontal(
    t_abstract_bitmap<unsigned short>& arg_0,
    t_screen_point arg_1,
    int arg_2,
    unsigned short arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:65332
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
static void draw_vertical(
    t_abstract_bitmap<unsigned short>& arg_0,
    t_screen_point arg_1,
    int arg_2,
    unsigned short arg_3
)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:65333; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006ba4e0, 0x20, STATIC_INIT_DISPATCH, help_balloon)

// confidence:A; align-band; retn,stable,vslot; map:26869
VA_CHT_1(0x006b9f00, 0xd)
void t_text_window::set_scroll_position(int arg_0)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:26870
VA_CHT_1_COMPGEN(0x006b9f10, 0x1e, SCALAR_DELETING_DTOR, t_help_balloon)

// name:A; map symbol; map:26871
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_help_balloon)

// name:A; map symbol; map:26872
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_text_window::~t_text_window()
{
    // Body unavailable.
}

// name:A; map symbol; map:26873
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_help_balloon::~t_help_balloon()
{
    // Body unavailable.
}

// name:A; map symbol; map:26874
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_point t_screen_rect::bottom_left() const
{
    // Body unavailable.
}

// === .rdata (1 symbols) ===

// confidence:A; rtti-name; map:44575
DATA_CHT_1_COMPGEN(0x008e210c, "const t_help_balloon::`vftable'")

// === .rdata$r (5 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_text_window@@;bcd=50ccbc;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52720
DATA_CHT_1_COMPGEN(0x0090ccbc, "t_text_window::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_help_balloon@@;bcd=50ccd4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52721
DATA_CHT_1_COMPGEN(0x0090ccd4, "t_help_balloon::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_help_balloon@@;vft=4e210c;col=50cd14;td=5a7ed0;chd=50cd04;offset=0;cdOffset=0;validated-hierarchy; map:52722
DATA_CHT_1_COMPGEN(0x0090ccec, "t_help_balloon::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_help_balloon@@;vft=4e210c;col=50cd14;td=5a7ed0;chd=50cd04;offset=0;cdOffset=0;validated-hierarchy; map:52723
DATA_CHT_1_COMPGEN(0x0090cd04, "t_help_balloon::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_help_balloon@@;vft=4e210c;col=50cd14;td=5a7ed0;chd=50cd04;offset=0;cdOffset=0;validated-hierarchy; map:52724
DATA_CHT_1_COMPGEN(0x0090cd14, "const t_help_balloon::`RTTI Complete Object Locator'")

// === .data (2 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_text_window@@;td=5a7eb4;validated-header; map:58665
DATA_CHT_1_COMPGEN(0x009a7eb4, "t_text_window `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_help_balloon@@;td=5a7ed0;validated-header; map:58666
DATA_CHT_1_COMPGEN(0x009a7ed0, "t_help_balloon `RTTI Type Descriptor'")
