// text_window.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 52/76 (A:35 B:11 C:6); unaccounted 24; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (47 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:61895; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007f1e90, 0x11, STATIC_INIT_DISPATCH, k_arrow_button_bitmaps)

// confidence:B; dyninit-ctor; owner-conf-C; map:61896; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007f1eb0, 0xd7, STATIC_CTOR, k_arrow_button_bitmaps)

// name:C; dyninit; see ledger; map:61897
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, k_arrow_button_bitmaps)

// confidence:B; dyninit-dtor; owner-conf-C; map:61898; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007f1f90, 0xa, STATIC_DTOR, k_arrow_button_bitmaps)

// confidence:A; align-order; retn,stable,vptr; map:38723
VA_CHT_1(0x007f1fa0, 0x252)
t_text_window::t_text_window(
    t_cached_ptr<t_font>& arg_0,
    t_screen_rect const& arg_1,
    t_window* arg_2,
    std::string const& arg_3,
    t_pixel_24 const& arg_4,
    bool arg_5,
    bool arg_6
)
{
    // Body unavailable.
}

// confidence:A; align-order; stable,vptr; map:38724
VA_CHT_1(0x007f2220, 0x1f0)
t_text_window::t_text_window(
    t_cached_ptr<t_font>& arg_0,
    t_screen_point arg_1,
    t_window* arg_2,
    std::string const& arg_3,
    t_pixel_24 const& arg_4
)
{
    // Body unavailable.
}

// confidence:A; align-order; stable,vptr; map:38725
VA_CHT_1(0x007f2410, 0x166)
t_text_window::t_text_window(
    t_cached_ptr<t_font>& arg_0,
    t_window* arg_1,
    char const* arg_2,
    t_pixel_24 arg_3
)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:38726
VA_CHT_1(0x007f2580, 0x756)
void t_text_window::init_scrollbar()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:38727
VA_CHT_1(0x007f2ce0, 0x18)
void t_text_window::slider_change(t_scrollbar* arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:38728
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_text_window::button_scroll_up_arrow(t_button* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:38729
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_text_window::button_scroll_down_arrow(t_button* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:38730
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_text_window::on_text_change()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:38731
VA_CHT_1(0x007f2d40, 0xa0)
void t_text_window::set_font(t_cached_ptr<t_font>& arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:38732
VA_CHT_1(0x007f2de0, 0x68)
void t_text_window::set_text(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:38733
VA_CHT_1(0x007f2e50, 0x1fa)
void t_text_window::set_wrapped_text(t_string_vector const& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:38734
VA_CHT_1(0x007f3050, 0x57)
void t_text_window::set_color(t_pixel_24 arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:38735
VA_CHT_1(0x007f30b0, 0x62)
void t_text_window::set_drop_shadow(bool arg_0, t_pixel_24 const& arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:38736
VA_CHT_1(0x007f3120, 0xf7)
t_screen_point t_text_window::get_row_start(int arg_0) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:38737
VA_CHT_1(0x007f3220, 0x2e3)
void t_text_window::paint(t_paint_surface& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:38738
VA_CHT_1(0x007f3510, 0x4d)
void t_text_window::on_size_change(t_screen_rect const& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:38739
VA_CHT_1(0x007f3560, 0x31)
int t_text_window::get_text_height() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:38740
VA_CHT_1(0x007f35a0, 0x113)
t_scrolling_text_window::t_scrolling_text_window(
    t_cached_ptr<t_font>& arg_0,
    t_screen_rect const& arg_1,
    t_window* arg_2,
    std::string const& arg_3,
    t_pixel_24 const& arg_4,
    int arg_5
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:38741
VA_CHT_1(0x007f3850, 0xee)
void t_scrolling_text_window::on_idle()
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:61899; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007f3a00, 0x20, STATIC_INIT_DISPATCH, text_window)

// confidence:A; align-band; retn,stable,vslot; map:38742
VA_CHT_1_COMPGEN(0x007f2200, 0x1e, VECTOR_DELETING_DTOR, t_text_window)

// name:A; map symbol; map:38743
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_text_window)

// name:A; map symbol; map:38744
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_rect t_font::get_rect(char const* arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:38745
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_scrollbar::set_max_value(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:38746
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_scrollbar::get_position() const
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:38747
VA_CHT_1_COMPGEN(0x007f36c0, 0x1e, SCALAR_DELETING_DTOR, t_scrolling_text_window)

// name:A; map symbol; map:38748
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_scrolling_text_window)

// name:A; map symbol; map:38749
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_scrolling_text_window::~t_scrolling_text_window()
{
    // Body unavailable.
}

// name:A; map symbol; map:38750
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_scrollbar*, int> bound_handler(t_text_window& arg_0, void (t_text_window::*)(t_scrollbar*, int))
{
    // Body unavailable.
}

// name:A; map symbol; map:38751
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<t_button*> bound_handler(t_text_window& arg_0, void (t_text_window::*)(t_button*))
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:38752
VA_CHT_1(0x007f3940, 0x5e)
t_bound_handler_2<t_text_window, t_scrollbar*, int>::t_bound_handler_2<t_text_window, t_scrollbar*, int>(
    t_text_window& arg_0,
    void (t_text_window::*)(t_scrollbar*, int)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:38753
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_2<t_text_window, t_scrollbar*, int>::operator()(t_scrollbar* arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:38754
VA_CHT_1(0x007f39a0, 0x5e)
t_bound_handler_1<t_text_window, t_button*>::t_bound_handler_1<t_text_window, t_button*>(
    t_text_window& arg_0,
    void (t_text_window::*)(t_button*)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:38755
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_1<t_text_window, t_button*>::operator()(t_button* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:38756
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_text_window, t_scrollbar*, int>")

// name:A; map symbol; map:38757
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_2<t_text_window, t_scrollbar*, int>")

// name:A; map symbol; map:38758
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_1<t_text_window, t_button*>")

// name:A; map symbol; map:38759
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_1<t_text_window, t_button*>")

// name:A; map symbol; map:38760
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_2<t_text_window, t_scrollbar*, int>::~t_bound_handler_2<t_text_window, t_scrollbar*, int>()
{
    // Body unavailable.
}

// name:A; map symbol; map:38761
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_1<t_text_window, t_button*>::~t_bound_handler_1<t_text_window, t_button*>()
{
    // Body unavailable.
}

// name:A; map symbol; map:38762
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_1<t_text_window, t_button*>")

// confidence:C; align-order; stable; map:38763
VA_CHT_1_COMPGEN(0x007f3a30, 0x8, VECTOR_DELETING_DTOR, t_scrolling_text_window)

// confidence:C; align-order; stable; map:38764
VA_CHT_1_COMPGEN(0x007f3a40, 0xb, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_text_window, t_scrollbar*, int>")

// === .rdata (7 symbols) ===

// confidence:A; rtti-name; map:45898
DATA_CHT_1_COMPGEN(0x008ee5c4, "const t_text_window::`vftable'")

// confidence:A; rtti-name; map:45899
DATA_CHT_1_COMPGEN(0x008ee638, "const t_scrolling_text_window::`vftable'{for `t_idle_processor'}")

// confidence:B; rtti-order; map:45900
DATA_CHT_1_COMPGEN(0x008ee644, "const t_scrolling_text_window::`vftable'{for `t_text_window'}")

// confidence:A; rtti-name; map:45901
DATA_CHT_1_COMPGEN(0x008ee6b8, "const t_bound_handler_2<t_text_window, t_scrollbar*, int>::`vftable'{for `t_abstract_function_2<void, t_scrollbar*, int>'}")

// confidence:B; rtti-order; map:45902
DATA_CHT_1_COMPGEN(0x008ee6c4, "const t_bound_handler_2<t_text_window, t_scrollbar*, int>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:45903
DATA_CHT_1_COMPGEN(0x008ee6cc, "const t_bound_handler_1<t_text_window, t_button*>::`vftable'{for `t_abstract_function_1<void, t_button*>'}")

// confidence:B; rtti-order; map:45904
DATA_CHT_1_COMPGEN(0x008ee6d8, "const t_bound_handler_1<t_text_window, t_button*>::`vftable'{for `t_counted_object'}")

// === .rdata$r (18 symbols) ===

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_text_window@@;vft=4ee5c4;col=51cebc;td=5a7eb4;chd=51ceac;offset=0;cdOffset=0;validated-hierarchy; map:56680
DATA_CHT_1_COMPGEN(0x0091ce98, "t_text_window::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_text_window@@;vft=4ee5c4;col=51cebc;td=5a7eb4;chd=51ceac;offset=0;cdOffset=0;validated-hierarchy; map:56681
DATA_CHT_1_COMPGEN(0x0091ceac, "t_text_window::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_text_window@@;vft=4ee5c4;col=51cebc;td=5a7eb4;chd=51ceac;offset=0;cdOffset=0;validated-hierarchy; map:56682
DATA_CHT_1_COMPGEN(0x0091cebc, "const t_text_window::`RTTI Complete Object Locator'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_scrolling_text_window@@;vft=4ee638;col=51cf28;td=5bd9f4;chd=51cf18;offset=288;cdOffset=0;validated-hierarchy; map:56683
DATA_CHT_1_COMPGEN(0x0091cf28, "const t_scrolling_text_window::`RTTI Complete Object Locator'{for `t_idle_processor'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_scrolling_text_window@@;bcd=51cee4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56684
DATA_CHT_1_COMPGEN(0x0091cee4, "t_scrolling_text_window::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_scrolling_text_window@@;vft=4ee638;col=51cf28;td=5bd9f4;chd=51cf18;offset=288;cdOffset=0;validated-hierarchy; map:56685
DATA_CHT_1_COMPGEN(0x0091cefc, "t_scrolling_text_window::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_scrolling_text_window@@;vft=4ee638;col=51cf28;td=5bd9f4;chd=51cf18;offset=288;cdOffset=0;validated-hierarchy; map:56686
DATA_CHT_1_COMPGEN(0x0091cf18, "t_scrolling_text_window::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:56687
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_scrolling_text_window::`RTTI Complete Object Locator'{for `t_text_window'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_2@Vt_text_window@@PAVt_scrollbar@@H@@;vft=4ee6b8;col=51cf8c;td=5bda20;chd=51cf7c;offset=8;cdOffset=0;validated-hierarchy; map:56688
DATA_CHT_1_COMPGEN(0x0091cf8c, "const t_bound_handler_2<t_text_window, t_scrollbar*, int>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_scrollbar*, int>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_2@Vt_text_window@@PAVt_scrollbar@@H@@;bcd=51cf50;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56689
DATA_CHT_1_COMPGEN(0x0091cf50, "t_bound_handler_2<t_text_window, t_scrollbar*, int>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_2@Vt_text_window@@PAVt_scrollbar@@H@@;vft=4ee6b8;col=51cf8c;td=5bda20;chd=51cf7c;offset=8;cdOffset=0;validated-hierarchy; map:56690
DATA_CHT_1_COMPGEN(0x0091cf68, "t_bound_handler_2<t_text_window, t_scrollbar*, int>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_2@Vt_text_window@@PAVt_scrollbar@@H@@;vft=4ee6b8;col=51cf8c;td=5bda20;chd=51cf7c;offset=8;cdOffset=0;validated-hierarchy; map:56691
DATA_CHT_1_COMPGEN(0x0091cf7c, "t_bound_handler_2<t_text_window, t_scrollbar*, int>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:56692
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_2<t_text_window, t_scrollbar*, int>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_1@Vt_text_window@@PAVt_button@@@@;vft=4ee6cc;col=51cff0;td=5bda68;chd=51cfe0;offset=8;cdOffset=0;validated-hierarchy; map:56693
DATA_CHT_1_COMPGEN(0x0091cff0, "const t_bound_handler_1<t_text_window, t_button*>::`RTTI Complete Object Locator'{for `t_abstract_function_1<void, t_button*>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_1@Vt_text_window@@PAVt_button@@@@;bcd=51cfb4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56694
DATA_CHT_1_COMPGEN(0x0091cfb4, "t_bound_handler_1<t_text_window, t_button*>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_1@Vt_text_window@@PAVt_button@@@@;vft=4ee6cc;col=51cff0;td=5bda68;chd=51cfe0;offset=8;cdOffset=0;validated-hierarchy; map:56695
DATA_CHT_1_COMPGEN(0x0091cfcc, "t_bound_handler_1<t_text_window, t_button*>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_1@Vt_text_window@@PAVt_button@@@@;vft=4ee6cc;col=51cff0;td=5bda68;chd=51cfe0;offset=8;cdOffset=0;validated-hierarchy; map:56696
DATA_CHT_1_COMPGEN(0x0091cfe0, "t_bound_handler_1<t_text_window, t_button*>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:56697
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_1<t_text_window, t_button*>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// === .data (3 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_scrolling_text_window@@;td=5bd9f4;validated-header; map:59640
DATA_CHT_1_COMPGEN(0x009bd9f4, "t_scrolling_text_window `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_2@Vt_text_window@@PAVt_scrollbar@@H@@;td=5bda20;validated-header; map:59641
DATA_CHT_1_COMPGEN(0x009bda20, "t_bound_handler_2<t_text_window, t_scrollbar*, int> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_1@Vt_text_window@@PAVt_button@@@@;td=5bda68;validated-header; map:59642
DATA_CHT_1_COMPGEN(0x009bda68, "t_bound_handler_1<t_text_window, t_button*> `RTTI Type Descriptor'")

// === .bss (1 symbols) ===

// confidence:C; dyninit-global; owner-conf-C; map:60394
DATA_CHT_1(0x00a00e50)
t_bitmap_group_cache const k_arrow_button_bitmaps; // Initial value unavailable.
