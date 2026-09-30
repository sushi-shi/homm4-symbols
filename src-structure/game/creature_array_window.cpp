// creature_array_window.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\creature_array_window.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 68/131 (A:19 B:2 C:0); unaccounted 63; skipped std 30.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (110 symbols) ===

// confidence:D; dyninit-init; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:67000; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0060b1e0, 0x11, STATIC_INIT_DISPATCH, g_divide_cursor)

// confidence:D; dyninit-ctor; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:67001; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0060b200, 0xd7, STATIC_CTOR, g_divide_cursor)

// name:B; dyninit; see ledger; map:67002
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, g_divide_cursor)

// confidence:D; dyninit-dtor; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:67003; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0060b2e0, 0xa, STATIC_DTOR, g_divide_cursor)

// confidence:D; dyninit-init; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:67004; name:A (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0060b2f0, 0x11, STATIC_INIT_DISPATCH, g_creature_rings)

// confidence:D; dyninit-ctor; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:67005; name:A (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0060b310, 0xd7, STATIC_CTOR, g_creature_rings)

// name:A; dyninit; see ledger; map:67006
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, g_creature_rings)

// confidence:D; dyninit-dtor; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:67007; name:A (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0060b3f0, 0xa, STATIC_DTOR, g_creature_rings)

namespace {

// name:A; map symbol; map:23082
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_drop_target::t_drop_target(t_screen_rect const& arg_0, t_creature_array_window* arg_1, int arg_2)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:23083
VA_CHT_1(0x0060b400, 0x2b0)
bool t_drop_target::accept_drag(t_drag_object* arg_0, t_mouse_event const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:23084
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_drop_target::left_button_down(t_mouse_event const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:23085
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_drop_target::left_button_up(t_mouse_event const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:23086
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_drop_target::left_double_click(t_mouse_event const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:23087
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_drop_target::select()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:23088
VA_CHT_1(0x0060b880, 0x6f)
void t_drop_target::mouse_move(t_mouse_event const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:23089
VA_CHT_1(0x0060b8f0, 0x6f)
void t_drop_target::mouse_leaving(t_window* arg_0, t_window* arg_1, t_mouse_event const& arg_2)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:23090
VA_CHT_1(0x0060b960, 0x299)
void t_drop_target::drag_event(t_mouse_event const& arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:23091
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_creature_array_window::t_linked_windows::t_linked_windows(t_creature_array_window* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23092
VA_CHT_1(0x0060bca0, 0xfe)
void t_creature_array_window::t_linked_windows::merge_window_into_list(t_creature_array_window* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:23093
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_creature_array_window::t_linked_windows::on_destroy_window(t_creature_array_window* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23094
VA_CHT_1(0x0060bda0, 0x94)
void t_creature_array_window::t_linked_windows::unselect_all_linked(t_creature_array_window* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:23095
VA_CHT_1(0x0060be40, 0xf5b)
t_creature_array_window::t_creature_array_window(
    t_screen_point const& arg_0,
    t_creature_array* arg_1,
    t_creature_array_window::t_layout arg_2,
    int arg_3,
    t_window* arg_4,
    bool arg_5,
    bool arg_6
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:23096
VA_CHT_1(0x0060cea0, 0x24e)
t_creature_array_window::~t_creature_array_window()
{
    // Body unavailable.
}

// name:A; map symbol; map:23097
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_creature_array_window::on_close()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23098
VA_CHT_1(0x0060d100, 0x15)
int t_creature_array_window::get_frame_height() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23099
VA_CHT_1(0x0060d120, 0x9af)
void t_creature_array_window::update(bool arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23100
VA_CHT_1(0x0060dad0, 0x32)
void t_creature_array_window::cancel_divide_mode()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23101
VA_CHT_1(0x0060db10, 0x4f)
void t_creature_array_window::set_divide_mode(t_handler const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23102
VA_CHT_1(0x0060db60, 0x33)
void t_creature_array_window::set_highlight(int arg_0, bool arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:23103
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_creature_array_window::set_disabled(int arg_0, bool arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:23104
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_creature_array_window::toggle_highlight(int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23105
VA_CHT_1(0x0060dba0, 0x5a)
bool t_creature_array_window::is_slot_highlighted(int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23106
VA_CHT_1(0x0060dc00, 0x147)
void t_creature_array_window::set_army(t_creature_array* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23107
VA_CHT_1(0x0060dd50, 0x12d)
void t_creature_array_window::select_first()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23108
VA_CHT_1(0x0060de80, 0x11b)
void t_creature_array_window::select_leader()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23109
VA_CHT_1(0x0060dfa0, 0x14f)
void t_creature_array_window::select_first_valid(int arg_0, bool arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23110
VA_CHT_1(0x0060e0f0, 0x19c)
bool t_creature_array_window::select_next()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23111
VA_CHT_1(0x0060e290, 0x1a3)
bool t_creature_array_window::select_prev()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23112
VA_CHT_1(0x0060e440, 0xf6)
void t_creature_array_window::select_creature(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:23113
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_creature_array_window::double_click(int arg_0)
{
    // Body unavailable.
}

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67008; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0060e540, 0x11, STATIC_INIT_DISPATCH, "creature_array_window#3")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67009; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0060e560, 0xd1, STATIC_CTOR, "creature_array_window#3")

// name:C; dyninit; see ledger; map:67010
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "creature_array_window#3")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67011; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0060e640, 0xa, STATIC_DTOR, "creature_array_window#3")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67012; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0060e650, 0x11, STATIC_INIT_DISPATCH, "creature_array_window#4")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67013; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0060e670, 0xd1, STATIC_CTOR, "creature_array_window#4")

// name:C; dyninit; see ledger; map:67014
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "creature_array_window#4")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67015; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0060e750, 0xa, STATIC_DTOR, "creature_array_window#4")

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23114
VA_CHT_1(0x0060e760, 0x2d9)
bool t_creature_array_window::check_transfer_cost(t_creature_stack const& arg_0, int arg_1, int arg_2)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23115
VA_CHT_1(0x0060ea40, 0x16b)
void t_creature_array_window::add(t_counted_ptr<t_creature_stack> arg_0, int arg_1, int arg_2, int arg_3)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23116
VA_CHT_1(0x0060ebb0, 0x3f1)
bool t_creature_array_window::split_dialog(t_drag_creature* arg_0, int arg_1, int arg_2, int arg_3)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23117
VA_CHT_1(0x0060efb0, 0x12)
void t_creature_array_window::clear_slot(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:23118
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_creature_array_window::is_valid_drag_drop(t_drag_artifact* arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:23119
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_creature_array_window::accept_artifact_drag(t_drag_artifact* arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23120
VA_CHT_1(0x0060efd0, 0xe5)
bool t_creature_array_window::is_valid_drag_drop(t_drag_creature* arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23121
VA_CHT_1(0x0060f0c0, 0x4fc)
void t_creature_array_window::accept_creature_drag(t_drag_creature* arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23122
VA_CHT_1(0x0060f5c0, 0x3c8)
void t_creature_array_window::merge(t_creature_array_window* arg_0, bool arg_1, bool arg_2, bool arg_3)
{
    // Body unavailable.
}

// name:A; map symbol; map:23123
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_creature_array_window::get_transfer_cost(
    t_creature_stack const& arg_0,
    t_creature_array const& arg_1
) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23124
VA_CHT_1(0x0060f990, 0x331)
void t_creature_array_window::swap(t_creature_array_window* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23125
VA_CHT_1(0x0060fcd0, 0xb)
void t_creature_array_window::link_selection(t_creature_array_window* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:23126
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_creature_array_window::t_bar_graph::create(
    t_bitmap_layer const* arg_0,
    t_bitmap_layer const* arg_1,
    t_screen_point const& arg_2,
    t_window* arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:23127
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_creature_array_window::t_bar_graph::set(int arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:23128
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_creature_array_window::t_bar_graph::set_visible(bool arg_0)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:67016; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0060fce0, 0x20, STATIC_INIT_DISPATCH, creature_array_window)

// name:A; map symbol; map:23129
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_drop_target)

// name:A; map symbol; map:23130
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_drop_target)

namespace {

// name:A; map symbol; map:23131
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_drop_target::~t_drop_target()
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:23132
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_drag_creature>::~t_counted_ptr<t_drag_creature>()
{
    // Body unavailable.
}

// name:A; map symbol; map:23133
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_drag_artifact>::~t_counted_ptr<t_drag_artifact>()
{
    // Body unavailable.
}

// name:A; map symbol; map:23134
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_creature_array_window::changed()
{
    // Body unavailable.
}

// name:A; map symbol; map:23135
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_creature_array_window::in_divide_mode() const
{
    // Body unavailable.
}

// name:A; map symbol; map:23136
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_creature_array_window::get_allow_drags() const
{
    // Body unavailable.
}

// name:A; map symbol; map:23137
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_creature_array_window::get_transfer_charge(int arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:23138
VA_CHT_1_COMPGEN(0x0060bc00, 0x1e, VECTOR_DELETING_DTOR, t_creature_array_window::t_linked_windows)

// name:A; map symbol; map:23139
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_creature_array_window::t_linked_windows)

// name:A; map symbol; map:23140
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_creature_array_window::t_linked_windows::~t_linked_windows()
{
    // Body unavailable.
}

// name:A; map symbol; map:23141
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_creature_array_window::t_linked_windows>::~t_counted_ptr<t_creature_array_window::t_linked_windows>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:23142
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<t_creature_array_window::t_split_min_max_data&>::~t_handler_1<t_creature_array_window::t_split_min_max_data&>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:23143
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_1<t_creature_array_window::t_split_min_max_data&>>::~t_counted_ptr<t_handler_base_1<t_creature_array_window::t_split_min_max_data&>>(

)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:23144
VA_CHT_1_COMPGEN(0x0060cda0, 0x1e, SCALAR_DELETING_DTOR, t_creature_array_window)

// name:A; map symbol; map:23145
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_creature_array_window)

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:23146
VA_CHT_1(0x0060bc20, 0x79)
t_creature_array_window::t_creature_windows::t_creature_windows()
{
    // Body unavailable.
}

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:23147
VA_CHT_1(0x0060cdc0, 0xd4)
t_creature_array_window::t_creature_windows::~t_creature_windows()
{
    // Body unavailable.
}

// name:A; map symbol; map:23148
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_drag_creature::get_transfer_charge() const
{
    // Body unavailable.
}

// name:A; map symbol; map:23149
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_drag_creature::get_slot() const
{
    // Body unavailable.
}

// name:A; map symbol; map:23150
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_split_creatures_dialog::get_amount() const
{
    // Body unavailable.
}

// name:A; map symbol; map:23151
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_split_creatures_dialog>::~t_counted_ptr<t_split_creatures_dialog>()
{
    // Body unavailable.
}

// name:A; map symbol; map:23152
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_drag_creature::use_split_dialog() const
{
    // Body unavailable.
}

// name:A; map symbol; map:23153
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_creature_array_window*, int>::t_handler_2<t_creature_array_window*, int>()
{
    // Body unavailable.
}

// name:A; map symbol; map:23154
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_handler_2<t_creature_array_window*, int>::operator()(t_creature_array_window* arg_0, int arg_1) const
{
    // Body unavailable.
}

// name:A; map symbol; map:23155
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>::t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:23156
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<t_creature_array_window::t_split_min_max_data&>::t_handler_1<t_creature_array_window::t_split_min_max_data&>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:23157
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_handler_1<t_creature_array_window::t_split_min_max_data&>::operator()(
    t_creature_array_window::t_split_min_max_data& arg_0
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:23185
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_2<t_creature_array_window*, int>>::t_counted_ptr<t_handler_base_2<t_creature_array_window*, int>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:23186
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_creature_array_window*, int>& t_counted_ptr<t_handler_base_2<t_creature_array_window*, int>>::operator*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:23187
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>::t_counted_ptr<t_handler_base_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:23188
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_1<t_creature_array_window::t_split_min_max_data&>>::t_counted_ptr<t_handler_base_1<t_creature_array_window::t_split_min_max_data&>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:23189
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_1<t_creature_array_window::t_split_min_max_data&>& t_counted_ptr<t_handler_base_1<t_creature_array_window::t_split_min_max_data&>>::operator*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:23190
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_creature_array_window::t_linked_windows>::t_counted_ptr<t_creature_array_window::t_linked_windows>(
    t_counted_ptr<t_creature_array_window::t_linked_windows> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:23191
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_creature_array_window::t_linked_windows>::t_counted_ptr<t_creature_array_window::t_linked_windows>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:23192
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_creature_array_window::t_linked_windows* t_counted_ptr<t_creature_array_window::t_linked_windows>::get(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:23193
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_creature_array_window::t_linked_windows>& t_counted_ptr<t_creature_array_window::t_linked_windows>::operator=(
    t_creature_array_window::t_linked_windows* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:23194
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_creature_array_window::t_linked_windows* t_counted_ptr<t_creature_array_window::t_linked_windows>::operator->(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:23195
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_drag_creature>::t_counted_ptr<t_drag_creature>(t_drag_creature* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:23196
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_drag_creature* t_counted_ptr<t_drag_creature>::operator t_drag_creature*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:23197
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_drag_artifact>::t_counted_ptr<t_drag_artifact>(t_drag_artifact* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:23198
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_drag_artifact* t_counted_ptr<t_drag_artifact>::operator t_drag_artifact*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:23199
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_split_creatures_dialog>::t_counted_ptr<t_split_creatures_dialog>()
{
    // Body unavailable.
}

// name:A; map symbol; map:23200
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_split_creatures_dialog>& t_counted_ptr<t_split_creatures_dialog>::operator=(
    t_split_creatures_dialog* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:23201
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_split_creatures_dialog* t_counted_ptr<t_split_creatures_dialog>::operator->() const
{
    // Body unavailable.
}

// === .rdata (3 symbols) ===

// confidence:A; rtti-name; map:44173
DATA_CHT_1_COMPGEN(0x008de83c, "const t_drop_target::`vftable'")

// confidence:A; rtti-name; map:44174
DATA_CHT_1_COMPGEN(0x008de8a8, "const t_creature_array_window::t_linked_windows::`vftable'")

// confidence:A; rtti-name; map:44175
DATA_CHT_1_COMPGEN(0x008de8b4, "const t_creature_array_window::`vftable'")

// === .rdata$r (13 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_drop_target@?%C:\Work\game\creature_array_window.cpp36368814@@;bcd=507918;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:51556
DATA_CHT_1_COMPGEN(0x00907918, "t_drop_target::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_drop_target@?%C:\Work\game\creature_array_window.cpp36368814@@;vft=4de83c;col=507954;td=59dd50;chd=507944;offset=0;cdOffset=0;validated-hierarchy; map:51557
DATA_CHT_1_COMPGEN(0x00907930, "t_drop_target::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_drop_target@?%C:\Work\game\creature_array_window.cpp36368814@@;vft=4de83c;col=507954;td=59dd50;chd=507944;offset=0;cdOffset=0;validated-hierarchy; map:51558
DATA_CHT_1_COMPGEN(0x00907944, "t_drop_target::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_drop_target@?%C:\Work\game\creature_array_window.cpp36368814@@;vft=4de83c;col=507954;td=59dd50;chd=507944;offset=0;cdOffset=0;validated-hierarchy; map:51559
DATA_CHT_1_COMPGEN(0x00907954, "const t_drop_target::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_uncopyable@@;bcd=507968;pmd=8,-1,0;attributes=0;validated-hierarchy-link; map:51560
DATA_CHT_1_COMPGEN(0x00907968, "t_uncopyable::`RTTI Base Class Descriptor at (8, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_linked_windows@t_creature_array_window@@;bcd=507980;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:51561
DATA_CHT_1_COMPGEN(0x00907980, "t_creature_array_window::t_linked_windows::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_linked_windows@t_creature_array_window@@;vft=4de8a8;col=5079b8;td=59dda0;chd=5079a8;offset=0;cdOffset=0;validated-hierarchy; map:51562
DATA_CHT_1_COMPGEN(0x00907998, "t_creature_array_window::t_linked_windows::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_linked_windows@t_creature_array_window@@;vft=4de8a8;col=5079b8;td=59dda0;chd=5079a8;offset=0;cdOffset=0;validated-hierarchy; map:51563
DATA_CHT_1_COMPGEN(0x009079a8, "t_creature_array_window::t_linked_windows::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_linked_windows@t_creature_array_window@@;vft=4de8a8;col=5079b8;td=59dda0;chd=5079a8;offset=0;cdOffset=0;validated-hierarchy; map:51564
DATA_CHT_1_COMPGEN(0x009079b8, "const t_creature_array_window::t_linked_windows::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_creature_array_window@@;bcd=5079cc;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:51565
DATA_CHT_1_COMPGEN(0x009079cc, "t_creature_array_window::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_creature_array_window@@;vft=4de8b4;col=507a08;td=59ddd8;chd=5079f8;offset=0;cdOffset=0;validated-hierarchy; map:51566
DATA_CHT_1_COMPGEN(0x009079e4, "t_creature_array_window::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_creature_array_window@@;vft=4de8b4;col=507a08;td=59ddd8;chd=5079f8;offset=0;cdOffset=0;validated-hierarchy; map:51567
DATA_CHT_1_COMPGEN(0x009079f8, "t_creature_array_window::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_creature_array_window@@;vft=4de8b4;col=507a08;td=59ddd8;chd=5079f8;offset=0;cdOffset=0;validated-hierarchy; map:51568
DATA_CHT_1_COMPGEN(0x00907a08, "const t_creature_array_window::`RTTI Complete Object Locator'")

// === .data (3 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_drop_target@?%C:\Work\game\creature_array_window.cpp36368814@@;td=59dd50;validated-header; map:58393
DATA_CHT_1_COMPGEN(0x0099dd50, "t_drop_target `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_linked_windows@t_creature_array_window@@;td=59dda0;validated-header; map:58394
DATA_CHT_1_COMPGEN(0x0099dda0, "t_creature_array_window::t_linked_windows `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_creature_array_window@@;td=59ddd8;validated-header; map:58395
DATA_CHT_1_COMPGEN(0x0099ddd8, "t_creature_array_window `RTTI Type Descriptor'")

// === .bss (2 symbols) ===

// confidence:B; dyninit-global; owner-conf-B; map:60184
DATA_CHT_1(0x009e57c4)
t_bitmap_group_cache g_creature_rings; // Initial value unavailable.

// confidence:B; dyninit-global; owner-conf-B; map:60185
DATA_CHT_1(0x009e57f4)
t_bitmap_group_cache g_divide_cursor; // Initial value unavailable.
