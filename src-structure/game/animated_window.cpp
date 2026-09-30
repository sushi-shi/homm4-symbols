// animated_window.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 14/27 (A:13 B:1 C:0); unaccounted 13; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (16 symbols) ===

// confidence:A; align-order; stable,vptr; map:13790
VA_CHT_1(0x00509cc0, 0x26a)
t_animated_window::t_animated_window(
    t_cached_ptr<t_animation> const& arg_0,
    t_screen_point arg_1,
    int arg_2,
    t_window* arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:13791
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_animated_window::on_animation_end()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:13792
VA_CHT_1(0x0050a0f0, 0xdf)
void t_animated_window::on_idle()
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:69671; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0050a1d0, 0x20, STATIC_INIT_DISPATCH, animated_window)

// name:A; map symbol; map:13793
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_idle_processor::set_delay(unsigned long arg_0)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:13794
VA_CHT_1_COMPGEN(0x00509f30, 0x1e, SCALAR_DELETING_DTOR, t_animated_window)

// name:A; map symbol; map:13795
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_animated_window)

// name:A; map symbol; map:13796
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_group_window::~t_bitmap_group_window()
{
    // Body unavailable.
}

// name:A; map symbol; map:13797
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_animated_window::~t_animated_window()
{
    // Body unavailable.
}

// name:A; map symbol; map:13798
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<t_window*>::t_handler_1<t_window*>()
{
    // Body unavailable.
}

// name:A; map symbol; map:13799
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_handler_1<t_window*>::operator()(t_window* arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:13800
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_1<t_window*>>::t_counted_ptr<t_handler_base_1<t_window*>>()
{
    // Body unavailable.
}

// name:A; map symbol; map:13801
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_1<t_window*>& t_counted_ptr<t_handler_base_1<t_window*>>::operator*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:13802
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cached_ptr<t_bitmap_group>::t_cached_ptr<t_bitmap_group>(t_cached_ptr<t_animation> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:13803
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_animated_window>::t_counted_ptr<t_animated_window>(t_animated_window* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:13804
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_animated_window)

// === .rdata (2 symbols) ===

// confidence:A; rtti-name; map:43385
DATA_CHT_1_COMPGEN(0x008d4fec, "const t_animated_window::`vftable'{for `t_idle_processor'}")

// confidence:B; rtti-order; map:43386
DATA_CHT_1_COMPGEN(0x008d4ffc, "const t_animated_window::`vftable'{for `t_bitmap_group_window'}")

// === .rdata$r (7 symbols) ===

// confidence:A; rtti-col-pointer; type-name=.?AVt_animated_window@@;vft=4d4fec;col=4fcb34;td=58f370;chd=4fcb24;offset=220;cdOffset=0;validated-hierarchy; map:49181
DATA_CHT_1_COMPGEN(0x008fcb34, "const t_animated_window::`RTTI Complete Object Locator'{for `t_idle_processor'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_idle_processor@@;bcd=4fcac0;pmd=220,-1,0;attributes=0;validated-hierarchy-link; map:49182
DATA_CHT_1_COMPGEN(0x008fcac0, "t_idle_processor::`RTTI Base Class Descriptor at (220, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_bitmap_group_window@@;bcd=4fcad8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49183
DATA_CHT_1_COMPGEN(0x008fcad8, "t_bitmap_group_window::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_animated_window@@;bcd=4fcaf0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49184
DATA_CHT_1_COMPGEN(0x008fcaf0, "t_animated_window::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_animated_window@@;vft=4d4fec;col=4fcb34;td=58f370;chd=4fcb24;offset=220;cdOffset=0;validated-hierarchy; map:49185
DATA_CHT_1_COMPGEN(0x008fcb08, "t_animated_window::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_animated_window@@;vft=4d4fec;col=4fcb34;td=58f370;chd=4fcb24;offset=220;cdOffset=0;validated-hierarchy; map:49186
DATA_CHT_1_COMPGEN(0x008fcb24, "t_animated_window::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:49187
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_animated_window::`RTTI Complete Object Locator'{for `t_bitmap_group_window'}")

// === .data (2 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_bitmap_group_window@@;td=58f34c;validated-header; map:57803
DATA_CHT_1_COMPGEN(0x0098f34c, "t_bitmap_group_window `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_animated_window@@;td=58f370;validated-header; map:57804
DATA_CHT_1_COMPGEN(0x0098f370, "t_animated_window `RTTI Type Descriptor'")
