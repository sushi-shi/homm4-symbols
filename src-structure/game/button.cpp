// button.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 27/51 (A:4 B:0 C:0); unaccounted 24; skipped std 14.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (47 symbols) ===

// confidence:D; align-order; stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:18478
VA_CHT_1(0x00581b90, 0x554)
t_button::t_button(
    t_cached_ptr<t_button_bitmaps>& arg_0,
    t_screen_point arg_1,
    t_window* arg_2,
    std::string const& arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:18479
VA_CHT_1(0x00582320, 0x1b3)
t_button::t_button(t_screen_point arg_0, t_window* arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:18480
VA_CHT_1(0x005824e0, 0xda)
bool t_button::is_contained(t_screen_point arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:18481
VA_CHT_1(0x005825c0, 0x16e)
t_window* t_button::get_child(t_screen_point arg_0, bool arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:18482
VA_CHT_1(0x00582730, 0x190)
bool t_button::key_down(t_key_event arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:18483
VA_CHT_1(0x005828c0, 0x25)
bool t_button::key_press(char arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:18484
VA_CHT_1(0x005828f0, 0x10b)
void t_button::left_button_down(t_mouse_event const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:18485
VA_CHT_1(0x00582a00, 0x3a)
void t_button::left_button_up(t_mouse_event const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:18486
VA_CHT_1(0x00582a40, 0x2b)
void t_button::right_button_up(t_mouse_event const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:18487
VA_CHT_1(0x00582a70, 0x27)
void t_button::left_double_click(t_mouse_event const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:18488
VA_CHT_1(0x00582aa0, 0x38)
void t_button::mouse_leaving(t_window* arg_0, t_window* arg_1, t_mouse_event const& arg_2)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:18489
VA_CHT_1(0x00582ae0, 0x5a)
void t_button::mouse_move(t_mouse_event const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:18490
VA_CHT_1(0x00582b40, 0xad)
t_screen_rect t_button::compute_size()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:18491
VA_CHT_1(0x00582bf0, 0x6a)
void t_button::update_transparency()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:18492
VA_CHT_1(0x00582c60, 0x74)
void t_button::update_size()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:18493
VA_CHT_1(0x00582ce0, 0x132)
void t_button::set_image()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:18494
VA_CHT_1(0x00582e20, 0x1c)
void t_button::set_highlighted(bool arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:18495
VA_CHT_1(0x00582e40, 0x1c)
void t_button::set_pressed(bool arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:18496
VA_CHT_1(0x00582e60, 0xa51)
void t_button::add_text(
    std::string const& arg_0,
    t_cached_ptr<t_font>& arg_1,
    t_pixel_24 const& arg_2,
    t_pixel_24 const& arg_3,
    t_pixel_24 const& arg_4,
    bool arg_5,
    t_pixel_24 const& arg_6
)
{
    // Body unavailable.
}

// name:A; map symbol; map:18497
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_button::set_text(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:18498
VA_CHT_1(0x005838c0, 0x431)
void set_button_layers(t_button* arg_0, t_cached_ptr<t_bitmap_group> arg_1, std::string arg_2)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:18499
VA_CHT_1(0x00583d00, 0x1d7)
t_button* create_button(
    t_cached_ptr<t_bitmap_group> arg_0,
    std::string arg_1,
    t_window* arg_2,
    t_screen_point arg_3
)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:68879; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00583ee0, 0x20, STATIC_INIT_DISPATCH, button)

// name:A; map symbol; map:18500
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_layer const* t_button_bitmaps::get_up_bitmap() const
{
    // Body unavailable.
}

// name:A; map symbol; map:18501
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_rect const& t_button_bitmaps::get_up_rect() const
{
    // Body unavailable.
}

// name:A; map symbol; map:18502
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_layer const* t_button_bitmaps::get_down_bitmap() const
{
    // Body unavailable.
}

// name:A; map symbol; map:18503
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_rect const& t_button_bitmaps::get_down_rect() const
{
    // Body unavailable.
}

// name:A; map symbol; map:18504
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_layer const* t_button_bitmaps::get_disabled_bitmap() const
{
    // Body unavailable.
}

// name:A; map symbol; map:18505
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_rect const& t_button_bitmaps::get_disabled_rect() const
{
    // Body unavailable.
}

// name:A; map symbol; map:18506
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_layer const* t_button_bitmaps::get_highlighted_bitmap() const
{
    // Body unavailable.
}

// name:A; map symbol; map:18507
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_rect const& t_button_bitmaps::get_highlighted_rect() const
{
    // Body unavailable.
}

// name:A; map symbol; map:18508
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_layer const* t_button_bitmaps::get_highlighted_pressed_bitmap() const
{
    // Body unavailable.
}

// name:A; map symbol; map:18509
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_rect const& t_button_bitmaps::get_highlighted_pressed_rect() const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:18510
VA_CHT_1_COMPGEN(0x005820f0, 0x1e, VECTOR_DELETING_DTOR, t_button)

// name:A; map symbol; map:18511
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_button)

// name:A; map symbol; map:18512
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::reverse_bidirectional_iterator<std::list<t_counted_ptr<t_window>, std::allocator<t_counted_ptr<t_window>>>::const_iterator, t_counted_ptr<t_window>, t_counted_ptr<t_window> const&, t_counted_ptr<t_window> const*, int> t_window::get_children_rbegin(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:18513
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::reverse_bidirectional_iterator<std::list<t_counted_ptr<t_window>, std::allocator<t_counted_ptr<t_window>>>::const_iterator, t_counted_ptr<t_window>, t_counted_ptr<t_window> const&, t_counted_ptr<t_window> const*, int> t_window::get_children_rend(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:18514
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::list<t_counted_ptr<t_window>, std::allocator<t_counted_ptr<t_window>>>::iterator t_window::get_children_begin(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:18515
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::list<t_counted_ptr<t_window>, std::allocator<t_counted_ptr<t_window>>>::iterator t_window::get_children_end(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:18516
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_window::t_transparency t_window::get_transparency() const
{
    // Body unavailable.
}

// name:A; map symbol; map:18517
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_rect t_window::to_screen(t_screen_rect const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:18518
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_button::set_highlighted_pressed_image(t_window* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:18524
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_1<t_button*>* t_handler_1<t_button*>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:18530
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_1<t_button*>* t_counted_ptr<t_handler_base_1<t_button*>>::operator t_handler_base_1<t_button*>*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:18531
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cached_ptr<t_button_bitmaps>::t_cached_ptr<t_button_bitmaps>()
{
    // Body unavailable.
}

// name:A; map symbol; map:18532
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_button_bitmaps* t_cached_ptr<t_button_bitmaps>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:18533
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_cached_ptr<t_button_bitmaps>::operator!=(t_button_bitmaps const* arg_0) const
{
    // Body unavailable.
}

// === .rdata (1 symbols) ===

// confidence:A; rtti-name; map:43783
DATA_CHT_1_COMPGEN(0x008d840c, "const t_button::`vftable'")

// === .rdata$r (3 symbols) ===

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_button@@;vft=4d840c;col=50216c;td=595c1c;chd=50215c;offset=0;cdOffset=0;validated-hierarchy; map:50362
DATA_CHT_1_COMPGEN(0x00902148, "t_button::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_button@@;vft=4d840c;col=50216c;td=595c1c;chd=50215c;offset=0;cdOffset=0;validated-hierarchy; map:50363
DATA_CHT_1_COMPGEN(0x0090215c, "t_button::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_button@@;vft=4d840c;col=50216c;td=595c1c;chd=50215c;offset=0;cdOffset=0;validated-hierarchy; map:50364
DATA_CHT_1_COMPGEN(0x0090216c, "const t_button::`RTTI Complete Object Locator'")
