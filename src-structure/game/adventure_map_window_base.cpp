// adventure_map_window_base.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 15/26 (A:4 B:1 C:0); unaccounted 11; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (20 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69821; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x004e4aa0, 0x15, STATIC_INIT_DISPATCH, "adventure_map_window_base#1")

// name:C; dyninit; see ledger; map:69822
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adventure_map_window_base#1")

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:11873
VA_CHT_1(0x004e4ac0, 0xa2)
t_adventure_map_window_base::t_adventure_map_window_base(
    t_screen_rect const& arg_0,
    t_adventure_frame* arg_1,
    t_window* arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11874
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_map& t_adventure_map_window_base::get_map()
{
    // Body unavailable.
}

// name:A; map symbol; map:11875
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_map const& t_adventure_map_window_base::get_map() const
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:11876
VA_CHT_1(0x004e4b90, 0xa6)
void t_adventure_map_window_base::move_view(t_screen_point arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:11877
VA_CHT_1(0x004e4c40, 0x65)
void t_adventure_map_window_base::center_view(t_screen_point arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:11878
VA_CHT_1(0x004e4cb0, 0xd4)
void t_adventure_map_window_base::center_view(t_level_map_point_2d const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:11879
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adventure_map_window_base::paint(t_paint_surface& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:11880
VA_CHT_1(0x004e4d90, 0x1a0)
t_shared_ptr<t_abstract_bitmap<unsigned short>> t_adventure_map_window_base::create_back_buffer(
    t_screen_point const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11881
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adventure_map_window_base::on_rects_dirtied(
    std::vector<t_screen_rect, std::allocator<t_screen_rect>> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:11882
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adventure_map_window_base::on_view_moved(
    int arg_0,
    t_screen_point const& arg_1,
    t_screen_point const& arg_2
)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:69823; name:B (dyninit; see ledger)
VA_CHT_1(0x004e4f30, 0x20)
// adventure_map_window_base$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:69825; name:B (dyninit; see ledger)
VA_CHT_1(0x004e4f50, 0x5c)
// adventure_map_window_base$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:69826
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adventure_map_window_base$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:69827
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adventure_map_window_base$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:69828
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adventure_map_window_base$tatexit4
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:11883
VA_CHT_1_COMPGEN(0x004e4b70, 0x1e, VECTOR_DELETING_DTOR, t_adventure_map_window_base)

// name:A; map symbol; map:11884
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_adventure_map_window_base)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:11885
VA_CHT_1_COMPGEN(0x004e4fb0, 0xb, VECTOR_DELETING_DTOR, t_adventure_map_window_base)

// === .rdata (2 symbols) ===

// confidence:A; rtti-name; map:43299
DATA_CHT_1_COMPGEN(0x008d430c, "const t_adventure_map_window_base::`vftable'{for `t_map_renderer'}")

// confidence:B; rtti-order; map:43300
DATA_CHT_1_COMPGEN(0x008d4324, "const t_adventure_map_window_base::`vftable'{for `t_window'}")

// === .rdata$r (4 symbols) ===

// confidence:A; rtti-col-pointer; type-name=.?AVt_adventure_map_window_base@@;vft=4d430c;col=4fc104;td=58e510;chd=4fc0f4;offset=200;cdOffset=0;validated-hierarchy; map:49047
DATA_CHT_1_COMPGEN(0x008fc104, "const t_adventure_map_window_base::`RTTI Complete Object Locator'{for `t_map_renderer'}")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adventure_map_window_base@@;vft=4d430c;col=4fc104;td=58e510;chd=4fc0f4;offset=200;cdOffset=0;validated-hierarchy; map:49048
DATA_CHT_1_COMPGEN(0x008fc0d8, "t_adventure_map_window_base::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adventure_map_window_base@@;vft=4d430c;col=4fc104;td=58e510;chd=4fc0f4;offset=200;cdOffset=0;validated-hierarchy; map:49049
DATA_CHT_1_COMPGEN(0x008fc0f4, "t_adventure_map_window_base::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:49050
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adventure_map_window_base::`RTTI Complete Object Locator'{for `t_window'}")
