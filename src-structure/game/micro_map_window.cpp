// micro_map_window.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 27/41 (A:14 B:1 C:0); unaccounted 14; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (25 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:64301; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00722a90, 0x15, STATIC_INIT_DISPATCH, "micro_map_window#1")

// name:C; dyninit; see ledger; map:64302
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "micro_map_window#1")

// confidence:D; align-order; stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:29973
VA_CHT_1(0x00722ab0, 0x1cd)
t_micro_map_renderer::t_micro_map_renderer(
    t_abstract_adventure_map const& arg_0,
    int arg_1,
    int arg_2,
    t_screen_point const& arg_3,
    t_cached_ptr<t_bitmap_layer> arg_4,
    t_map_rect_2d const& arg_5
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:29974
VA_CHT_1(0x00722ca0, 0xe7)
t_micro_map_renderer::~t_micro_map_renderer()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:29975
VA_CHT_1(0x00722d90, 0x1a0)
t_shared_ptr<t_abstract_bitmap<unsigned short>> t_micro_map_renderer::create_back_buffer(
    t_screen_point const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:29976
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_micro_map_renderer::on_rect_dirtied(t_screen_rect const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:29977
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_micro_map_renderer::on_view_level_changed(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:29978
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_micro_map_renderer::on_view_resized(t_screen_point const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:29979
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_micro_map_renderer::update(t_screen_rect const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:29980
VA_CHT_1(0x00722f40, 0x4b)
t_micro_map_window::t_micro_map_window(t_screen_point const& arg_0, t_window* arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:29981
VA_CHT_1(0x00722fb0, 0x79)
t_micro_map_window::~t_micro_map_window()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:29982
VA_CHT_1(0x00723030, 0x19b)
void t_micro_map_window::paint(t_paint_surface& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:29983
VA_CHT_1(0x007231d0, 0x106)
void t_micro_map_window::set_renderer(t_micro_map_renderer* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:29984
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_micro_map_window::on_rect_dirtied(t_screen_rect const& arg_0)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:64303; name:B (dyninit; see ledger)
VA_CHT_1(0x007232e0, 0x20)
// micro_map_window$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:D; dyninit-tinit; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:64305; name:B (dyninit; see ledger)
VA_CHT_1(0x00723300, 0x20)
// micro_map_window$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:64306
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// micro_map_window$tatexit2
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:29985
VA_CHT_1_COMPGEN(0x00722c80, 0x1e, SCALAR_DELETING_DTOR, t_micro_map_renderer)

// name:A; map symbol; map:29986
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_micro_map_renderer)

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:29987
VA_CHT_1_COMPGEN(0x00722f90, 0x1e, VECTOR_DELETING_DTOR, t_micro_map_window)

// name:A; map symbol; map:29988
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_micro_map_window)

// name:A; map symbol; map:29989
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_micro_map_renderer>::t_counted_ptr<t_micro_map_renderer>(t_micro_map_renderer* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:29990
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_micro_map_renderer* t_counted_ptr<t_micro_map_renderer>::operator t_micro_map_renderer*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:29991
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_micro_map_renderer* t_counted_ptr<t_micro_map_renderer>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:29992
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_micro_map_renderer)

// === .rdata (3 symbols) ===

// confidence:A; rtti-name; map:44852
DATA_CHT_1_COMPGEN(0x008e5c2c, "const t_micro_map_renderer::`vftable'{for `t_mini_map_renderer'}")

// confidence:B; rtti-order; map:44853
DATA_CHT_1_COMPGEN(0x008e5c44, "const t_micro_map_renderer::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:44854
DATA_CHT_1_COMPGEN(0x008e5c4c, "const t_micro_map_window::`vftable'")

// === .rdata$r (11 symbols) ===

// confidence:A; rtti-col-pointer; type-name=.?AVt_micro_map_renderer@@;vft=4e5c2c;col=510128;td=5aceb8;chd=510118;offset=8;cdOffset=0;validated-hierarchy; map:53428
DATA_CHT_1_COMPGEN(0x00910128, "const t_micro_map_renderer::`RTTI Complete Object Locator'{for `t_mini_map_renderer'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_uncopyable@@;bcd=5100bc;pmd=12,-1,0;attributes=9;validated-hierarchy-link; map:53429
DATA_CHT_1_COMPGEN(0x009100bc, "t_uncopyable::`RTTI Base Class Descriptor at (12, -1, 0, 9)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_mini_map_renderer@@;bcd=5100d4;pmd=8,-1,0;attributes=9;validated-hierarchy-link; map:53430
DATA_CHT_1_COMPGEN(0x009100d4, "t_mini_map_renderer::`RTTI Base Class Descriptor at (8, -1, 0, 9)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_micro_map_renderer@@;bcd=5100ec;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53431
DATA_CHT_1_COMPGEN(0x009100ec, "t_micro_map_renderer::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_micro_map_renderer@@;vft=4e5c2c;col=510128;td=5aceb8;chd=510118;offset=8;cdOffset=0;validated-hierarchy; map:53432
DATA_CHT_1_COMPGEN(0x00910104, "t_micro_map_renderer::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_micro_map_renderer@@;vft=4e5c2c;col=510128;td=5aceb8;chd=510118;offset=8;cdOffset=0;validated-hierarchy; map:53433
DATA_CHT_1_COMPGEN(0x00910118, "t_micro_map_renderer::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:53434
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_micro_map_renderer::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_micro_map_window@@;bcd=51013c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53435
DATA_CHT_1_COMPGEN(0x0091013c, "t_micro_map_window::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_micro_map_window@@;vft=4e5c4c;col=510178;td=5acedc;chd=510168;offset=0;cdOffset=0;validated-hierarchy; map:53436
DATA_CHT_1_COMPGEN(0x00910154, "t_micro_map_window::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_micro_map_window@@;vft=4e5c4c;col=510178;td=5acedc;chd=510168;offset=0;cdOffset=0;validated-hierarchy; map:53437
DATA_CHT_1_COMPGEN(0x00910168, "t_micro_map_window::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_micro_map_window@@;vft=4e5c4c;col=510178;td=5acedc;chd=510168;offset=0;cdOffset=0;validated-hierarchy; map:53438
DATA_CHT_1_COMPGEN(0x00910178, "const t_micro_map_window::`RTTI Complete Object Locator'")

// === .data (2 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_micro_map_renderer@@;td=5aceb8;validated-header; map:58845
DATA_CHT_1_COMPGEN(0x009aceb8, "t_micro_map_renderer `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_micro_map_window@@;td=5acedc;validated-header; map:58846
DATA_CHT_1_COMPGEN(0x009acedc, "t_micro_map_window `RTTI Type Descriptor'")
