// window_background.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 19/40 (A:13 B:5 C:1); unaccounted 21; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (28 symbols) ===

// confidence:A; align-order; retn,stable,vptr; map:40592
VA_CHT_1(0x00835720, 0x117)
t_window_background::t_window_background(t_cached_ptr<t_dialog_box_bitmaps> const& arg_0, t_window* arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:40593
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_window_background::t_window_background(
    t_cached_ptr<t_dialog_box_bitmaps> const& arg_0,
    t_screen_rect const& arg_1,
    t_window* arg_2
)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:40594
VA_CHT_1(0x00835860, 0x410)
void t_window_background::construct()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:40595
VA_CHT_1(0x00835c70, 0xab6)
void t_window_background::init(t_screen_rect const& arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:40596
VA_CHT_1(0x00836730, 0x27e)
void t_window_background::add_close_button(t_button* arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:40597
VA_CHT_1(0x008369b0, 0xd3)
void t_window_background::close_click(t_button* arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:40598
VA_CHT_1(0x00836a90, 0x5e)
void t_window_background::close_click_result(t_button* arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:40599
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_window_background::open_around(t_screen_rect const& arg_0)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:61262; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00836af0, 0x20, STATIC_INIT_DISPATCH, window_background)

// confidence:A; align-band; retn,stable,vslot; map:40600
VA_CHT_1_COMPGEN(0x00835840, 0x1e, VECTOR_DELETING_DTOR, t_window_background)

// name:A; map symbol; map:40601
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_window_background)

// name:A; map symbol; map:40602
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_layer const* t_dialog_box_bitmaps::get_top_left() const
{
    // Body unavailable.
}

// name:A; map symbol; map:40603
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_layer const* t_dialog_box_bitmaps::get_top() const
{
    // Body unavailable.
}

// name:A; map symbol; map:40604
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_layer const* t_dialog_box_bitmaps::get_top_right() const
{
    // Body unavailable.
}

// name:A; map symbol; map:40605
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_layer const* t_dialog_box_bitmaps::get_left() const
{
    // Body unavailable.
}

// name:A; map symbol; map:40606
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_layer const* t_dialog_box_bitmaps::get_right() const
{
    // Body unavailable.
}

// name:A; map symbol; map:40607
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_layer const* t_dialog_box_bitmaps::get_bottom_left() const
{
    // Body unavailable.
}

// name:A; map symbol; map:40608
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_layer const* t_dialog_box_bitmaps::get_bottom() const
{
    // Body unavailable.
}

// name:A; map symbol; map:40609
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_layer const* t_dialog_box_bitmaps::get_bottom_right() const
{
    // Body unavailable.
}

// name:A; map symbol; map:40610
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_layer const* t_dialog_box_bitmaps::get_background() const
{
    // Body unavailable.
}

// name:A; map symbol; map:40611
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_dialog_box_bitmaps* t_cached_ptr<t_dialog_box_bitmaps>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:40612
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_button*, int> bound_handler(
    t_window_background& arg_0,
    void (t_window_background::*)(t_button*, int)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:40613
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_2<t_window_background, t_button*, int>::t_bound_handler_2<t_window_background, t_button*, int>(
    t_window_background& arg_0,
    void (t_window_background::*)(t_button*, int)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:40614
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_2<t_window_background, t_button*, int>::operator()(t_button* arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:40615
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_2<t_window_background, t_button*, int>")

// name:A; map symbol; map:40616
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_window_background, t_button*, int>")

// name:A; map symbol; map:40617
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_2<t_window_background, t_button*, int>::~t_bound_handler_2<t_window_background, t_button*, int>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:40618
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_window_background, t_button*, int>")

// === .rdata (3 symbols) ===

// confidence:A; rtti-name; map:46038
DATA_CHT_1_COMPGEN(0x008f0e9c, "const t_window_background::`vftable'")

// confidence:A; rtti-name; map:46039
DATA_CHT_1_COMPGEN(0x008f0f08, "const t_bound_handler_2<t_window_background, t_button*, int>::`vftable'{for `t_abstract_function_2<void, t_button*, int>'}")

// confidence:B; rtti-order; map:46040
DATA_CHT_1_COMPGEN(0x008f0f14, "const t_bound_handler_2<t_window_background, t_button*, int>::`vftable'{for `t_counted_object'}")

// === .rdata$r (8 symbols) ===

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_window_background@@;vft=4f0e9c;col=51e67c;td=58b44c;chd=51e66c;offset=0;cdOffset=0;validated-hierarchy; map:56993
DATA_CHT_1_COMPGEN(0x0091e658, "t_window_background::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_window_background@@;vft=4f0e9c;col=51e67c;td=58b44c;chd=51e66c;offset=0;cdOffset=0;validated-hierarchy; map:56994
DATA_CHT_1_COMPGEN(0x0091e66c, "t_window_background::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_window_background@@;vft=4f0e9c;col=51e67c;td=58b44c;chd=51e66c;offset=0;cdOffset=0;validated-hierarchy; map:56995
DATA_CHT_1_COMPGEN(0x0091e67c, "const t_window_background::`RTTI Complete Object Locator'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_2@Vt_window_background@@PAVt_button@@H@@;vft=4f0f08;col=51e6e0;td=5bfb98;chd=51e6d0;offset=8;cdOffset=0;validated-hierarchy; map:56996
DATA_CHT_1_COMPGEN(0x0091e6e0, "const t_bound_handler_2<t_window_background, t_button*, int>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_button*, int>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_2@Vt_window_background@@PAVt_button@@H@@;bcd=51e6a4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56997
DATA_CHT_1_COMPGEN(0x0091e6a4, "t_bound_handler_2<t_window_background, t_button*, int>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_2@Vt_window_background@@PAVt_button@@H@@;vft=4f0f08;col=51e6e0;td=5bfb98;chd=51e6d0;offset=8;cdOffset=0;validated-hierarchy; map:56998
DATA_CHT_1_COMPGEN(0x0091e6bc, "t_bound_handler_2<t_window_background, t_button*, int>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_2@Vt_window_background@@PAVt_button@@H@@;vft=4f0f08;col=51e6e0;td=5bfb98;chd=51e6d0;offset=8;cdOffset=0;validated-hierarchy; map:56999
DATA_CHT_1_COMPGEN(0x0091e6d0, "t_bound_handler_2<t_window_background, t_button*, int>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:57000
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_2<t_window_background, t_button*, int>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// === .data (1 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_2@Vt_window_background@@PAVt_button@@H@@;td=5bfb98;validated-header; map:59716
DATA_CHT_1_COMPGEN(0x009bfb98, "t_bound_handler_2<t_window_background, t_button*, int> `RTTI Type Descriptor'")
