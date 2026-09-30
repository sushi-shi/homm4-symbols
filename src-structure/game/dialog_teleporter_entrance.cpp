// dialog_teleporter_entrance.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\dialog_teleporter_entrance.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 66/103 (A:32 B:6 C:0); unaccounted 37; skipped std 88.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (61 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65619; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0068cad0, 0x15, STATIC_INIT_DISPATCH, "dialog_teleporter_entrance#1")

// name:C; dyninit; see ledger; map:65620
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "dialog_teleporter_entrance#1")

// confidence:D; dyninit-init; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:65621; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0068caf0, 0x11, STATIC_INIT_DISPATCH, k_teleporter_bitmaps)

// confidence:D; dyninit-ctor; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:65622; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0068cb10, 0xd7, STATIC_CTOR, k_teleporter_bitmaps)

// name:B; dyninit; see ledger; map:65623
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, k_teleporter_bitmaps)

// confidence:D; dyninit-dtor; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:65624; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0068cbf0, 0xa, STATIC_DTOR, k_teleporter_bitmaps)

// confidence:D; dyninit-init; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:65625; name:A (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0068cc00, 0x11, STATIC_INIT_DISPATCH, k_teleporter_icons)

// confidence:D; dyninit-ctor; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:65626; name:A (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0068cc20, 0xd7, STATIC_CTOR, k_teleporter_icons)

// name:A; dyninit; see ledger; map:65627
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, k_teleporter_icons)

// confidence:D; dyninit-dtor; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:65628; name:A (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0068cd00, 0xa, STATIC_DTOR, k_teleporter_icons)

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:25343
VA_CHT_1(0x0068cd10, 0xcc)
t_mini_map_marker_window::t_mini_map_marker_window(
    t_abstract_adventure_map const& arg_0,
    t_screen_rect const& arg_1,
    t_adventure_map_window* arg_2,
    t_window* arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:25344
VA_CHT_1(0x0068cde0, 0x1e)
void t_mini_map_marker_window::paint(t_paint_surface& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:25345
VA_CHT_1(0x0068cec0, 0x1a0)
t_shared_ptr<t_abstract_bitmap<unsigned short>> t_mini_map_marker_window::create_back_buffer(
    t_screen_point const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:25346
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_mini_map_marker_window::on_rect_dirtied(t_screen_rect const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:25347
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_mini_map_marker_window::on_size_change(t_screen_rect const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:25348
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_mini_map_marker_window::on_view_level_changed(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:25349
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_mini_map_marker_window::on_view_resized(t_screen_point const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:25350
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_mini_map_marker_window::center_view(t_screen_point arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:25351
VA_CHT_1(0x0068d060, 0x14f)
t_dialog_teleporter_entrance::t_dialog_teleporter_entrance(t_window* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:25352
VA_CHT_1(0x0068d360, 0x16e3)
void t_dialog_teleporter_entrance::init_dialog(
    t_adventure_frame* arg_0,
    t_level_map_point_2d_list arg_1,
    std::vector<std::string, std::allocator<std::string>> arg_2,
    int arg_3,
    std::string const& arg_4,
    std::string const& arg_5
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:25353
VA_CHT_1(0x0068ea50, 0x1d3)
void t_dialog_teleporter_entrance::show_exits(int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:25354
VA_CHT_1(0x0068ec30, 0x13)
void t_dialog_teleporter_entrance::map_scrollbar_move(t_scrollbar* arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:25355
VA_CHT_1(0x0068ec50, 0xf)
int t_dialog_teleporter_entrance::get_selected_exit()
{
    // Body unavailable.
}

// name:A; map symbol; map:25356
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_dialog_teleporter_entrance::left_button_down(t_mouse_event const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:25357
VA_CHT_1(0x0068ec60, 0x2d)
void t_dialog_teleporter_entrance::map_clicked(t_button* arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:25358
VA_CHT_1(0x0068ec90, 0x14)
void t_dialog_teleporter_entrance::ok_click(t_button* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:25359
VA_CHT_1(0x0068ecb0, 0x1e)
void t_dialog_teleporter_entrance::close_click(t_button* arg_0)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:65629; name:B (dyninit; see ledger)
VA_CHT_1(0x0068efe0, 0x20)
// dialog_teleporter_entrance$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:65631; name:B (dyninit; see ledger)
VA_CHT_1(0x0068f000, 0x5c)
// dialog_teleporter_entrance$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:65632
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// dialog_teleporter_entrance$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:65633
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// dialog_teleporter_entrance$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:65634
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// dialog_teleporter_entrance$tatexit4
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:25360
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_mini_map_marker_window)

// name:A; map symbol; map:25361
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_mini_map_marker_window)

// name:A; map symbol; map:25362
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_mini_map_marker_window::~t_mini_map_marker_window()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:25363
VA_CHT_1_COMPGEN(0x0068d1b0, 0x1e, SCALAR_DELETING_DTOR, t_dialog_teleporter_entrance)

// name:A; map symbol; map:25364
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_dialog_teleporter_entrance)

// name:A; map symbol; map:25365
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_dialog_teleporter_entrance::~t_dialog_teleporter_entrance()
{
    // Body unavailable.
}

// name:A; map symbol; map:25432
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_adventure_map_window>::t_counted_ptr<t_adventure_map_window>(t_adventure_map_window* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:25433
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<t_button*> bound_handler(
    t_dialog_teleporter_entrance& arg_0,
    void (t_dialog_teleporter_entrance::*)(t_button*)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:25434
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_scrollbar*, int> bound_handler(
    t_dialog_teleporter_entrance& arg_0,
    void (t_dialog_teleporter_entrance::*)(t_scrollbar*, int)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:25435
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_button*, int> bound_handler(
    t_dialog_teleporter_entrance& arg_0,
    void (t_dialog_teleporter_entrance::*)(t_button*, int)
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:25457
VA_CHT_1(0x0068ed50, 0x5e)
t_bound_handler_1<t_dialog_teleporter_entrance, t_button*>::t_bound_handler_1<t_dialog_teleporter_entrance, t_button*>(
    t_dialog_teleporter_entrance& arg_0,
    void (t_dialog_teleporter_entrance::*)(t_button*)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:25458
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_1<t_dialog_teleporter_entrance, t_button*>::operator()(t_button* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:25459
VA_CHT_1(0x0068edb0, 0x5e)
t_bound_handler_2<t_dialog_teleporter_entrance, t_scrollbar*, int>::t_bound_handler_2<t_dialog_teleporter_entrance, t_scrollbar*, int>(
    t_dialog_teleporter_entrance& arg_0,
    void (t_dialog_teleporter_entrance::*)(t_scrollbar*, int)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:25460
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_2<t_dialog_teleporter_entrance, t_scrollbar*, int>::operator()(
    t_scrollbar* arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:25461
VA_CHT_1(0x0068ee10, 0x5e)
t_bound_handler_2<t_dialog_teleporter_entrance, t_button*, int>::t_bound_handler_2<t_dialog_teleporter_entrance, t_button*, int>(
    t_dialog_teleporter_entrance& arg_0,
    void (t_dialog_teleporter_entrance::*)(t_button*, int)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:25462
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_2<t_dialog_teleporter_entrance, t_button*, int>::operator()(t_button* arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:25463
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_1<t_dialog_teleporter_entrance, t_button*>")

// name:A; map symbol; map:25464
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_1<t_dialog_teleporter_entrance, t_button*>")

// name:A; map symbol; map:25465
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_2<t_dialog_teleporter_entrance, t_scrollbar*, int>")

// name:A; map symbol; map:25466
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_dialog_teleporter_entrance, t_scrollbar*, int>")

// name:A; map symbol; map:25467
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_dialog_teleporter_entrance, t_button*, int>")

// name:A; map symbol; map:25468
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_2<t_dialog_teleporter_entrance, t_button*, int>")

// name:A; map symbol; map:25469
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_1<t_dialog_teleporter_entrance, t_button*>::~t_bound_handler_1<t_dialog_teleporter_entrance, t_button*>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:25470
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_2<t_dialog_teleporter_entrance, t_scrollbar*, int>::~t_bound_handler_2<t_dialog_teleporter_entrance, t_scrollbar*, int>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:25471
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_2<t_dialog_teleporter_entrance, t_button*, int>::~t_bound_handler_2<t_dialog_teleporter_entrance, t_button*, int>(

)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:25472
VA_CHT_1_COMPGEN(0x0068f060, 0x8, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_dialog_teleporter_entrance, t_button*, int>")

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:25473
VA_CHT_1_COMPGEN(0x0068f070, 0x8, VECTOR_DELETING_DTOR, "t_bound_handler_1<t_dialog_teleporter_entrance, t_button*>")

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:25474
VA_CHT_1_COMPGEN(0x0068f080, 0xb, VECTOR_DELETING_DTOR, t_mini_map_marker_window)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:25475
VA_CHT_1_COMPGEN(0x0068f090, 0x8, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_dialog_teleporter_entrance, t_scrollbar*, int>")

// === .rdata (9 symbols) ===

// confidence:A; rtti-name; map:44416
DATA_CHT_1_COMPGEN(0x008e0ba4, "const t_mini_map_marker_window::`vftable'{for `t_mini_map_renderer'}")

// confidence:B; rtti-order; map:44417
DATA_CHT_1_COMPGEN(0x008e0bbc, "const t_mini_map_marker_window::`vftable'{for `t_window'}")

// confidence:A; rtti-name; map:44418
DATA_CHT_1_COMPGEN(0x008e0c2c, "const t_dialog_teleporter_entrance::`vftable'")

// confidence:A; rtti-name; map:44419
DATA_CHT_1_COMPGEN(0x008e0c98, "const t_bound_handler_1<t_dialog_teleporter_entrance, t_button*>::`vftable'{for `t_abstract_function_1<void, t_button*>'}")

// confidence:B; rtti-order; map:44420
DATA_CHT_1_COMPGEN(0x008e0ca4, "const t_bound_handler_1<t_dialog_teleporter_entrance, t_button*>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:44421
DATA_CHT_1_COMPGEN(0x008e0cac, "const t_bound_handler_2<t_dialog_teleporter_entrance, t_scrollbar*, int>::`vftable'{for `t_abstract_function_2<void, t_scrollbar*, int>'}")

// confidence:B; rtti-order; map:44422
DATA_CHT_1_COMPGEN(0x008e0cb8, "const t_bound_handler_2<t_dialog_teleporter_entrance, t_scrollbar*, int>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:44423
DATA_CHT_1_COMPGEN(0x008e0cc0, "const t_bound_handler_2<t_dialog_teleporter_entrance, t_button*, int>::`vftable'{for `t_abstract_function_2<void, t_button*, int>'}")

// confidence:B; rtti-order; map:44424
DATA_CHT_1_COMPGEN(0x008e0ccc, "const t_bound_handler_2<t_dialog_teleporter_entrance, t_button*, int>::`vftable'{for `t_counted_object'}")

// === .rdata$r (25 symbols) ===

// confidence:A; rtti-col-pointer; type-name=.?AVt_mini_map_marker_window@@;vft=4e0ba4;col=50ac84;td=5a3758;chd=50ac74;offset=200;cdOffset=0;validated-hierarchy; map:52232
DATA_CHT_1_COMPGEN(0x0090ac84, "const t_mini_map_marker_window::`RTTI Complete Object Locator'{for `t_mini_map_renderer'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_mini_map_renderer@@;bcd=50ac28;pmd=200,-1,0;attributes=0;validated-hierarchy-link; map:52233
DATA_CHT_1_COMPGEN(0x0090ac28, "t_mini_map_renderer::`RTTI Base Class Descriptor at (200, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_mini_map_marker_window@@;bcd=50ac40;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52234
DATA_CHT_1_COMPGEN(0x0090ac40, "t_mini_map_marker_window::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_mini_map_marker_window@@;vft=4e0ba4;col=50ac84;td=5a3758;chd=50ac74;offset=200;cdOffset=0;validated-hierarchy; map:52235
DATA_CHT_1_COMPGEN(0x0090ac58, "t_mini_map_marker_window::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_mini_map_marker_window@@;vft=4e0ba4;col=50ac84;td=5a3758;chd=50ac74;offset=200;cdOffset=0;validated-hierarchy; map:52236
DATA_CHT_1_COMPGEN(0x0090ac74, "t_mini_map_marker_window::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:52237
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_mini_map_marker_window::`RTTI Complete Object Locator'{for `t_window'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_dialog_teleporter_entrance@@;bcd=50ac98;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52238
DATA_CHT_1_COMPGEN(0x0090ac98, "t_dialog_teleporter_entrance::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_dialog_teleporter_entrance@@;vft=4e0c2c;col=50acd4;td=5a3780;chd=50acc4;offset=0;cdOffset=0;validated-hierarchy; map:52239
DATA_CHT_1_COMPGEN(0x0090acb0, "t_dialog_teleporter_entrance::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_dialog_teleporter_entrance@@;vft=4e0c2c;col=50acd4;td=5a3780;chd=50acc4;offset=0;cdOffset=0;validated-hierarchy; map:52240
DATA_CHT_1_COMPGEN(0x0090acc4, "t_dialog_teleporter_entrance::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_dialog_teleporter_entrance@@;vft=4e0c2c;col=50acd4;td=5a3780;chd=50acc4;offset=0;cdOffset=0;validated-hierarchy; map:52241
DATA_CHT_1_COMPGEN(0x0090acd4, "const t_dialog_teleporter_entrance::`RTTI Complete Object Locator'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_1@Vt_dialog_teleporter_entrance@@PAVt_button@@@@;vft=4e0c98;col=50ad38;td=5a3810;chd=50ad28;offset=8;cdOffset=0;validated-hierarchy; map:52242
DATA_CHT_1_COMPGEN(0x0090ad38, "const t_bound_handler_1<t_dialog_teleporter_entrance, t_button*>::`RTTI Complete Object Locator'{for `t_abstract_function_1<void, t_button*>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_1@Vt_dialog_teleporter_entrance@@PAVt_button@@@@;bcd=50acfc;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52243
DATA_CHT_1_COMPGEN(0x0090acfc, "t_bound_handler_1<t_dialog_teleporter_entrance, t_button*>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_1@Vt_dialog_teleporter_entrance@@PAVt_button@@@@;vft=4e0c98;col=50ad38;td=5a3810;chd=50ad28;offset=8;cdOffset=0;validated-hierarchy; map:52244
DATA_CHT_1_COMPGEN(0x0090ad14, "t_bound_handler_1<t_dialog_teleporter_entrance, t_button*>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_1@Vt_dialog_teleporter_entrance@@PAVt_button@@@@;vft=4e0c98;col=50ad38;td=5a3810;chd=50ad28;offset=8;cdOffset=0;validated-hierarchy; map:52245
DATA_CHT_1_COMPGEN(0x0090ad28, "t_bound_handler_1<t_dialog_teleporter_entrance, t_button*>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:52246
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_1<t_dialog_teleporter_entrance, t_button*>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_2@Vt_dialog_teleporter_entrance@@PAVt_scrollbar@@H@@;vft=4e0cac;col=50ad9c;td=5a3860;chd=50ad8c;offset=8;cdOffset=0;validated-hierarchy; map:52247
DATA_CHT_1_COMPGEN(0x0090ad9c, "const t_bound_handler_2<t_dialog_teleporter_entrance, t_scrollbar*, int>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_scrollbar*, int>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_2@Vt_dialog_teleporter_entrance@@PAVt_scrollbar@@H@@;bcd=50ad60;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52248
DATA_CHT_1_COMPGEN(0x0090ad60, "t_bound_handler_2<t_dialog_teleporter_entrance, t_scrollbar*, int>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_2@Vt_dialog_teleporter_entrance@@PAVt_scrollbar@@H@@;vft=4e0cac;col=50ad9c;td=5a3860;chd=50ad8c;offset=8;cdOffset=0;validated-hierarchy; map:52249
DATA_CHT_1_COMPGEN(0x0090ad78, "t_bound_handler_2<t_dialog_teleporter_entrance, t_scrollbar*, int>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_2@Vt_dialog_teleporter_entrance@@PAVt_scrollbar@@H@@;vft=4e0cac;col=50ad9c;td=5a3860;chd=50ad8c;offset=8;cdOffset=0;validated-hierarchy; map:52250
DATA_CHT_1_COMPGEN(0x0090ad8c, "t_bound_handler_2<t_dialog_teleporter_entrance, t_scrollbar*, int>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:52251
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_2<t_dialog_teleporter_entrance, t_scrollbar*, int>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_2@Vt_dialog_teleporter_entrance@@PAVt_button@@H@@;vft=4e0cc0;col=50ae00;td=5a38b8;chd=50adf0;offset=8;cdOffset=0;validated-hierarchy; map:52252
DATA_CHT_1_COMPGEN(0x0090ae00, "const t_bound_handler_2<t_dialog_teleporter_entrance, t_button*, int>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_button*, int>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_2@Vt_dialog_teleporter_entrance@@PAVt_button@@H@@;bcd=50adc4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52253
DATA_CHT_1_COMPGEN(0x0090adc4, "t_bound_handler_2<t_dialog_teleporter_entrance, t_button*, int>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_2@Vt_dialog_teleporter_entrance@@PAVt_button@@H@@;vft=4e0cc0;col=50ae00;td=5a38b8;chd=50adf0;offset=8;cdOffset=0;validated-hierarchy; map:52254
DATA_CHT_1_COMPGEN(0x0090addc, "t_bound_handler_2<t_dialog_teleporter_entrance, t_button*, int>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_2@Vt_dialog_teleporter_entrance@@PAVt_button@@H@@;vft=4e0cc0;col=50ae00;td=5a38b8;chd=50adf0;offset=8;cdOffset=0;validated-hierarchy; map:52255
DATA_CHT_1_COMPGEN(0x0090adf0, "t_bound_handler_2<t_dialog_teleporter_entrance, t_button*, int>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:52256
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_2<t_dialog_teleporter_entrance, t_button*, int>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// === .data (6 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_mini_map_renderer@@;td=5a3734;validated-header; map:58542
DATA_CHT_1_COMPGEN(0x009a3734, "t_mini_map_renderer `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_mini_map_marker_window@@;td=5a3758;validated-header; map:58543
DATA_CHT_1_COMPGEN(0x009a3758, "t_mini_map_marker_window `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_dialog_teleporter_entrance@@;td=5a3780;validated-header; map:58544
DATA_CHT_1_COMPGEN(0x009a3780, "t_dialog_teleporter_entrance `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_1@Vt_dialog_teleporter_entrance@@PAVt_button@@@@;td=5a3810;validated-header; map:58545
DATA_CHT_1_COMPGEN(0x009a3810, "t_bound_handler_1<t_dialog_teleporter_entrance, t_button*> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_2@Vt_dialog_teleporter_entrance@@PAVt_scrollbar@@H@@;td=5a3860;validated-header; map:58546
DATA_CHT_1_COMPGEN(0x009a3860, "t_bound_handler_2<t_dialog_teleporter_entrance, t_scrollbar*, int> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_2@Vt_dialog_teleporter_entrance@@PAVt_button@@H@@;td=5a38b8;validated-header; map:58547
DATA_CHT_1_COMPGEN(0x009a38b8, "t_bound_handler_2<t_dialog_teleporter_entrance, t_button*, int> `RTTI Type Descriptor'")

// === .bss (2 symbols) ===

namespace {

// confidence:B; dyninit-global; owner-conf-B; map:60213
DATA_CHT_1(0x009ee194)
t_bitmap_group_cache k_teleporter_bitmaps; // Initial value unavailable.

// confidence:B; dyninit-global; owner-conf-B; map:60214
DATA_CHT_1(0x009ee19c)
t_bitmap_group_cache k_teleporter_icons; // Initial value unavailable.

} // anonymous namespace
