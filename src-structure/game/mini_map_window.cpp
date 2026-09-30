// mini_map_window.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 18/32 (A:6 B:1 C:0); unaccounted 14; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (24 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:64245; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00728dd0, 0x15, STATIC_INIT_DISPATCH, "mini_map_window#1")

// name:C; dyninit; see ledger; map:64246
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "mini_map_window#1")

// name:A; map symbol; map:30306
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_mini_map_window::t_mini_map_window(
    t_abstract_adventure_map const& arg_0,
    t_screen_rect const& arg_1,
    t_adventure_map_window* arg_2,
    t_window* arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:30307
VA_CHT_1(0x00728ed0, 0x113)
t_mini_map_window::t_mini_map_window(
    t_abstract_adventure_map const& arg_0,
    t_screen_rect const& arg_1,
    t_adventure_map_window* arg_2,
    t_window* arg_3,
    int arg_4
)
{
    // Body unavailable.
}

// name:A; map symbol; map:30308
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_mini_map_window::paint(t_paint_surface& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:30309
VA_CHT_1(0x00728ff0, 0x1a0)
t_shared_ptr<t_abstract_bitmap<unsigned short>> t_mini_map_window::create_back_buffer(
    t_screen_point const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:30310
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_mini_map_window::on_rect_dirtied(t_screen_rect const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:30311
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_mini_map_window::on_size_change(t_screen_rect const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:30312
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_mini_map_window::on_view_level_changed(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:30313
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_mini_map_window::on_view_resized(t_screen_point const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:30314
VA_CHT_1(0x007291a0, 0xc4)
void t_mini_map_window::center_view(t_screen_point arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:30315
VA_CHT_1(0x00729280, 0x1a)
void t_mini_map_window::resize_view(t_screen_rect const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:30316
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_mini_map_window::left_button_down(t_mouse_event const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:30317
VA_CHT_1(0x007292a0, 0xa)
void t_mini_map_window::left_button_up(t_mouse_event const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:30318
VA_CHT_1(0x007292b0, 0x53)
void t_mini_map_window::mouse_move(t_mouse_event const& arg_0)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:64247; name:B (dyninit; see ledger)
VA_CHT_1(0x00729310, 0x20)
// mini_map_window$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:64249; name:B (dyninit; see ledger)
VA_CHT_1(0x00729330, 0x5c)
// mini_map_window$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:64250
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// mini_map_window$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:64251
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// mini_map_window$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:64252
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// mini_map_window$tatexit4
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:30319
VA_CHT_1_COMPGEN(0x00728df0, 0x1e, SCALAR_DELETING_DTOR, t_mini_map_window)

// name:A; map symbol; map:30320
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_mini_map_window)

// name:A; map symbol; map:30321
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_mini_map_window::~t_mini_map_window()
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:30322
VA_CHT_1_COMPGEN(0x00729390, 0xb, VECTOR_DELETING_DTOR, t_mini_map_window)

// === .rdata (2 symbols) ===

// confidence:A; rtti-name; map:44876
DATA_CHT_1_COMPGEN(0x008e610c, "const t_mini_map_window::`vftable'{for `t_mini_map_renderer'}")

// confidence:B; rtti-order; map:44877
DATA_CHT_1_COMPGEN(0x008e6124, "const t_mini_map_window::`vftable'{for `t_window'}")

// === .rdata$r (5 symbols) ===

// confidence:A; rtti-col-pointer; type-name=.?AVt_mini_map_window@@;vft=4e610c;col=510578;td=5ad35c;chd=510568;offset=200;cdOffset=0;validated-hierarchy; map:53484
DATA_CHT_1_COMPGEN(0x00910578, "const t_mini_map_window::`RTTI Complete Object Locator'{for `t_mini_map_renderer'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_mini_map_window@@;bcd=510534;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53485
DATA_CHT_1_COMPGEN(0x00910534, "t_mini_map_window::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_mini_map_window@@;vft=4e610c;col=510578;td=5ad35c;chd=510568;offset=200;cdOffset=0;validated-hierarchy; map:53486
DATA_CHT_1_COMPGEN(0x0091054c, "t_mini_map_window::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_mini_map_window@@;vft=4e610c;col=510578;td=5ad35c;chd=510568;offset=200;cdOffset=0;validated-hierarchy; map:53487
DATA_CHT_1_COMPGEN(0x00910568, "t_mini_map_window::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:53488
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_mini_map_window::`RTTI Complete Object Locator'{for `t_window'}")

// === .data (1 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_mini_map_window@@;td=5ad35c;validated-header; map:58860
DATA_CHT_1_COMPGEN(0x009ad35c, "t_mini_map_window `RTTI Type Descriptor'")
