// adventure_treasure_map.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 19/31 (A:6 B:1 C:0); unaccounted 12; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (23 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69711; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x004f5860, 0x15, STATIC_INIT_DISPATCH, "adventure_treasure_map#1")

// name:C; dyninit; see ledger; map:69712
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adventure_treasure_map#1")

// confidence:D; align-order; stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:12612
VA_CHT_1(0x004f5880, 0x136)
t_adventure_treasure_map::t_adventure_treasure_map(
    t_screen_rect const& arg_0,
    t_adventure_frame* arg_1,
    t_window* arg_2,
    t_level_map_point_2d arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:12613
VA_CHT_1(0x004f5ad0, 0x22d)
void t_adventure_treasure_map::draw_grayscale()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:12614
VA_CHT_1(0x004f5d00, 0x4d)
void t_adventure_treasure_map::paint(t_paint_surface& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:12615
VA_CHT_1(0x004f5d50, 0x2a4)
t_shared_ptr<t_abstract_bitmap<unsigned short>> t_adventure_treasure_map::create_back_buffer(
    t_screen_point const& arg_0
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:12616
VA_CHT_1(0x004f6000, 0x4a)
void t_adventure_treasure_map::on_rects_dirtied(
    std::vector<t_screen_rect, std::allocator<t_screen_rect>> const& arg_0
)
{
    // Body unavailable.
}

// confidence:D; align-order; stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:12617
VA_CHT_1(0x004f6050, 0xb)
void t_adventure_treasure_map::on_view_moved(
    int arg_0,
    t_screen_point const& arg_1,
    t_screen_point const& arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:12618
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adventure_treasure_map::on_close()
{
    // Body unavailable.
}

// name:A; map symbol; map:12619
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adventure_treasure_map::left_button_up(t_mouse_event const& arg_0)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:69713; name:B (dyninit; see ledger)
VA_CHT_1(0x004f6160, 0x20)
// adventure_treasure_map$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:69715; name:B (dyninit; see ledger)
VA_CHT_1(0x004f6180, 0x20)
// adventure_treasure_map$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:69716
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adventure_treasure_map$tatexit2
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:12620
VA_CHT_1_COMPGEN(0x004f59c0, 0x1e, VECTOR_DELETING_DTOR, t_adventure_treasure_map)

// name:A; map symbol; map:12621
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_adventure_treasure_map)

// name:A; map symbol; map:12622
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_treasure_map::~t_adventure_treasure_map()
{
    // Body unavailable.
}

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:12623
VA_CHT_1(0x004f6130, 0x21)
unsigned short convert_to_16_bit(int arg_0, int arg_1, int arg_2)
{
    // Body unavailable.
}

// name:A; map symbol; map:12624
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
unsigned char red_channel(unsigned short arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:12625
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
unsigned char green_channel(unsigned short arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:12626
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
unsigned char blue_channel(unsigned short arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:12627
VA_CHT_1(0x004f59e0, 0xee)
t_shared_ptr<t_abstract_bitmap<unsigned short>>::~t_shared_ptr<t_abstract_bitmap<unsigned short>>()
{
    // Body unavailable.
}

// name:A; map symbol; map:12628
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_bitmap<unsigned short>* t_shared_ptr<t_abstract_bitmap<unsigned short>>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:12629
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_adventure_treasure_map)

// === .rdata (2 symbols) ===

// confidence:A; rtti-name; map:43353
DATA_CHT_1_COMPGEN(0x008d4d04, "const t_adventure_treasure_map::`vftable'{for `t_map_renderer'}")

// confidence:B; rtti-order; map:43354
DATA_CHT_1_COMPGEN(0x008d4d1c, "const t_adventure_treasure_map::`vftable'{for `t_window'}")

// === .rdata$r (5 symbols) ===

// confidence:A; rtti-col-pointer; type-name=.?AVt_adventure_treasure_map@@;vft=4d4d04;col=4fc9ec;td=58f29c;chd=4fc9dc;offset=200;cdOffset=0;validated-hierarchy; map:49164
DATA_CHT_1_COMPGEN(0x008fc9ec, "const t_adventure_treasure_map::`RTTI Complete Object Locator'{for `t_map_renderer'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adventure_treasure_map@@;bcd=4fc9a4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49165
DATA_CHT_1_COMPGEN(0x008fc9a4, "t_adventure_treasure_map::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adventure_treasure_map@@;vft=4d4d04;col=4fc9ec;td=58f29c;chd=4fc9dc;offset=200;cdOffset=0;validated-hierarchy; map:49166
DATA_CHT_1_COMPGEN(0x008fc9bc, "t_adventure_treasure_map::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adventure_treasure_map@@;vft=4d4d04;col=4fc9ec;td=58f29c;chd=4fc9dc;offset=200;cdOffset=0;validated-hierarchy; map:49167
DATA_CHT_1_COMPGEN(0x008fc9dc, "t_adventure_treasure_map::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:49168
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adventure_treasure_map::`RTTI Complete Object Locator'{for `t_window'}")

// === .data (1 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_adventure_treasure_map@@;td=58f29c;validated-header; map:57785
DATA_CHT_1_COMPGEN(0x0098f29c, "t_adventure_treasure_map `RTTI Type Descriptor'")
