// text_edit_window.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\text_edit_window.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 27/41 (A:12 B:1 C:0); unaccounted 14; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (27 symbols) ===

namespace {

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:38697
VA_CHT_1(0x007f1050, 0x51)
void t_caret_window::set_color(t_pixel_24 arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:38698
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_caret_window::t_caret_window(t_screen_rect const& arg_0, t_window* arg_1, t_pixel_24 const& arg_2)
{
    // Body unavailable.
}

// confidence:D; align-order; stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:38699
VA_CHT_1(0x007f10b0, 0x18)
void t_caret_window::on_idle()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:38700
VA_CHT_1(0x007f10d0, 0x185)
void t_caret_window::paint(t_paint_surface& arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:38701
VA_CHT_1(0x007f1260, 0x94)
t_text_edit_window::t_text_edit_window(
    t_cached_ptr<t_font>& arg_0,
    t_screen_rect const& arg_1,
    t_window* arg_2,
    std::string const& arg_3,
    t_pixel_24 const& arg_4
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:38702
VA_CHT_1(0x007f1490, 0x1b1)
void t_text_edit_window::delete_char()
{
    // Body unavailable.
}

// confidence:D; align-order; vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:38703
VA_CHT_1(0x007f1650, 0x158)
bool t_text_edit_window::key_down(t_key_event arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:38704
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_text_edit_window::key_press(char arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:38705
VA_CHT_1(0x007f1a50, 0x4b)
void t_text_edit_window::on_keyboard_focus_lost()
{
    // Body unavailable.
}

// name:A; map symbol; map:38706
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_text_edit_window::begin_edit()
{
    // Body unavailable.
}

// name:A; map symbol; map:38707
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_text_edit_window::left_button_down(t_mouse_event const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:38708
VA_CHT_1(0x007f1aa0, 0x115)
void t_text_edit_window::left_button_up(t_mouse_event const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:38709
VA_CHT_1(0x007f1bc0, 0x2b)
void t_text_edit_window::on_size_change(t_screen_rect const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:38710
VA_CHT_1(0x007f1bf0, 0xf6)
void t_text_edit_window::build_caret_window()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:38711
VA_CHT_1(0x007f1cf0, 0x30)
void t_text_edit_window::on_text_change()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:38712
VA_CHT_1(0x007f1d20, 0x136)
void t_text_edit_window::position_caret()
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:61901; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007f1e60, 0x20, STATIC_INIT_DISPATCH, text_edit_window)

// name:A; map symbol; map:38713
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_caret_window)

// name:A; map symbol; map:38714
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_caret_window)

namespace {

// name:A; map symbol; map:38715
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_caret_window::~t_caret_window()
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:38716
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
unsigned long t_pixel_24::operator unsigned long() const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:38717
VA_CHT_1_COMPGEN(0x007f1300, 0x1e, SCALAR_DELETING_DTOR, t_text_edit_window)

// name:A; map symbol; map:38718
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_text_edit_window)

// name:A; map symbol; map:38719
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_text_edit_window::~t_text_edit_window()
{
    // Body unavailable.
}

// name:A; map symbol; map:38720
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_handler_1<t_text_edit_window*>::operator()(t_text_edit_window* arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:38721
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_1<t_text_edit_window*>& t_counted_ptr<t_handler_base_1<t_text_edit_window*>>::operator*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:38722
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_caret_window)

// === .rdata (3 symbols) ===

// confidence:A; rtti-name; map:45895
DATA_CHT_1_COMPGEN(0x008ee538, "const t_caret_window::`vftable'{for `t_idle_processor'}")

// confidence:B; rtti-order; map:45896
DATA_CHT_1_COMPGEN(0x008ee4cc, "const t_caret_window::`vftable'{for `t_window'}")

// confidence:A; rtti-name; map:45897
DATA_CHT_1_COMPGEN(0x008ee544, "const t_text_edit_window::`vftable'")

// === .rdata$r (9 symbols) ===

// confidence:A; rtti-col-pointer; type-name=.?AVt_caret_window@?%C:\Work\game\text_edit_window.cpp2178804@@;vft=4ee538;col=51cddc;td=5bd970;chd=51ce20;offset=196;cdOffset=0;validated-hierarchy; map:56671
DATA_CHT_1_COMPGEN(0x0091cddc, "const t_caret_window::`RTTI Complete Object Locator'{for `t_idle_processor'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_caret_window@?%C:\Work\game\text_edit_window.cpp2178804@@;bcd=51cdf0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56672
DATA_CHT_1_COMPGEN(0x0091cdf0, "t_caret_window::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_caret_window@?%C:\Work\game\text_edit_window.cpp2178804@@;vft=4ee538;col=51cddc;td=5bd970;chd=51ce20;offset=196;cdOffset=0;validated-hierarchy; map:56673
DATA_CHT_1_COMPGEN(0x0091ce08, "t_caret_window::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_caret_window@?%C:\Work\game\text_edit_window.cpp2178804@@;vft=4ee538;col=51cddc;td=5bd970;chd=51ce20;offset=196;cdOffset=0;validated-hierarchy; map:56674
DATA_CHT_1_COMPGEN(0x0091ce20, "t_caret_window::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:56675
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_caret_window::`RTTI Complete Object Locator'{for `t_window'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_text_edit_window@@;bcd=51ce44;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56676
DATA_CHT_1_COMPGEN(0x0091ce44, "t_text_edit_window::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_text_edit_window@@;vft=4ee544;col=51ce84;td=5bd9b8;chd=51ce74;offset=0;cdOffset=0;validated-hierarchy; map:56677
DATA_CHT_1_COMPGEN(0x0091ce5c, "t_text_edit_window::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_text_edit_window@@;vft=4ee544;col=51ce84;td=5bd9b8;chd=51ce74;offset=0;cdOffset=0;validated-hierarchy; map:56678
DATA_CHT_1_COMPGEN(0x0091ce74, "t_text_edit_window::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_text_edit_window@@;vft=4ee544;col=51ce84;td=5bd9b8;chd=51ce74;offset=0;cdOffset=0;validated-hierarchy; map:56679
DATA_CHT_1_COMPGEN(0x0091ce84, "const t_text_edit_window::`RTTI Complete Object Locator'")

// === .data (2 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_caret_window@?%C:\Work\game\text_edit_window.cpp2178804@@;td=5bd970;validated-header; map:59638
DATA_CHT_1_COMPGEN(0x009bd970, "t_caret_window `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_text_edit_window@@;td=5bd9b8;validated-header; map:59639
DATA_CHT_1_COMPGEN(0x009bd9b8, "t_text_edit_window `RTTI Type Descriptor'")
