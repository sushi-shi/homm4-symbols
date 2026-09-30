// bitmap_layer_cache_window.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 9/12 (A:6 B:0 C:0); unaccounted 3; skipped std 0.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (6 symbols) ===

// confidence:D; align-order; vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:18224
VA_CHT_1(0x00579a60, 0xbd)
t_bitmap_layer_cache_window::t_bitmap_layer_cache_window(
    t_cached_ptr<t_bitmap_layer> const& arg_0,
    t_screen_point arg_1,
    t_window* arg_2,
    bool arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:18225
VA_CHT_1(0x00579be0, 0x94)
void t_bitmap_layer_cache_window::set_bitmap(t_cached_ptr<t_bitmap_layer> const& arg_0, bool arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:18226
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bitmap_layer_cache_window::set_bitmap(t_cached_ptr<t_bitmap_layer> const& arg_0, t_screen_point arg_1)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:18227
VA_CHT_1_COMPGEN(0x00579b20, 0x1e, SCALAR_DELETING_DTOR, t_bitmap_layer_cache_window)

// name:A; map symbol; map:18228
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_bitmap_layer_cache_window)

// name:A; map symbol; map:18229
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_layer_cache_window::~t_bitmap_layer_cache_window()
{
    // Body unavailable.
}

// === .rdata (1 symbols) ===

// confidence:A; rtti-name; map:43751
DATA_CHT_1_COMPGEN(0x008d7b8c, "const t_bitmap_layer_cache_window::`vftable'")

// === .rdata$r (4 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_bitmap_layer_cache_window@@;bcd=5019bc;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50262
DATA_CHT_1_COMPGEN(0x009019bc, "t_bitmap_layer_cache_window::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_bitmap_layer_cache_window@@;vft=4d7b8c;col=5019fc;td=595744;chd=5019ec;offset=0;cdOffset=0;validated-hierarchy; map:50263
DATA_CHT_1_COMPGEN(0x009019d4, "t_bitmap_layer_cache_window::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_bitmap_layer_cache_window@@;vft=4d7b8c;col=5019fc;td=595744;chd=5019ec;offset=0;cdOffset=0;validated-hierarchy; map:50264
DATA_CHT_1_COMPGEN(0x009019ec, "t_bitmap_layer_cache_window::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_bitmap_layer_cache_window@@;vft=4d7b8c;col=5019fc;td=595744;chd=5019ec;offset=0;cdOffset=0;validated-hierarchy; map:50265
DATA_CHT_1_COMPGEN(0x009019fc, "const t_bitmap_layer_cache_window::`RTTI Complete Object Locator'")

// === .data (1 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_bitmap_layer_cache_window@@;td=595744;validated-header; map:58081
DATA_CHT_1_COMPGEN(0x00995744, "t_bitmap_layer_cache_window `RTTI Type Descriptor'")
