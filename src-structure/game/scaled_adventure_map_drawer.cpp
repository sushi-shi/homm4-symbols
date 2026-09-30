// scaled_adventure_map_drawer.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\scaled_adventure_map_drawer.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 22/39 (A:6 B:0 C:0); unaccounted 17; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (33 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:63301; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00786cd0, 0x15, STATIC_INIT_DISPATCH, "scaled_adventure_map_drawer#1")

// name:C; dyninit; see ledger; map:63302
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "scaled_adventure_map_drawer#1")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:63303; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00786cf0, 0x10, STATIC_INIT_DISPATCH, "scaled_adventure_map_drawer#2")

// name:C; dyninit; see ledger; map:63304
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "scaled_adventure_map_drawer#2")

namespace {

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:33527
VA_CHT_1(0x00786d00, 0xac)
void scaled_blt(
    t_abstract_bitmap<unsigned short> const& arg_0,
    t_screen_point const& arg_1,
    t_abstract_bitmap<unsigned short>& arg_2,
    t_screen_point const& arg_3,
    t_screen_point const& arg_4,
    t_scaled_adventure_map_drawer::t_scale arg_5
)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:33528
VA_CHT_1(0x00786db0, 0xff)
t_scaled_adventure_map_drawer::t_impl::t_impl(t_abstract_adventure_map const& arg_0, int arg_1, int arg_2)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:33529
VA_CHT_1(0x00786eb0, 0x2c)
t_shared_ptr<t_abstract_bitmap<unsigned short>> t_scaled_adventure_map_drawer::t_impl::create_back_buffer(
    t_screen_point const& arg_0
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:33530
VA_CHT_1(0x00786ee0, 0x29)
void t_scaled_adventure_map_drawer::t_impl::on_rects_dirtied(
    std::vector<t_screen_rect, std::allocator<t_screen_rect>> const& arg_0
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:33531
VA_CHT_1(0x00786f10, 0x63)
t_scaled_adventure_map_drawer::t_scaled_adventure_map_drawer(
    t_abstract_adventure_map const& arg_0,
    int arg_1,
    int arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:33532
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_scaled_adventure_map_drawer::~t_scaled_adventure_map_drawer()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:33533
VA_CHT_1(0x00786f80, 0x8c)
int t_scaled_adventure_map_drawer::get_team_view() const
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:33534
VA_CHT_1(0x00787010, 0xa)
int t_scaled_adventure_map_drawer::get_view_level() const
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:33535
VA_CHT_1(0x00787020, 0xa)
void t_scaled_adventure_map_drawer::set_team_view(int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:33536
VA_CHT_1(0x00787030, 0xa)
void t_scaled_adventure_map_drawer::set_view_level(int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:33537
VA_CHT_1(0x00787040, 0x1b6)
void t_scaled_adventure_map_drawer::operator()(
    t_scaled_adventure_map_drawer::t_scale arg_0,
    t_screen_rect const& arg_1,
    t_abstract_bitmap<unsigned short>& arg_2,
    t_screen_point const& arg_3
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:33538
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int get_factor(t_scaled_adventure_map_drawer::t_scale arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:33539
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int get_shift(t_scaled_adventure_map_drawer::t_scale arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:33540
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_point scale(t_screen_point const& arg_0, t_scaled_adventure_map_drawer::t_scale arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:33541
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_rect scale(t_screen_rect const& arg_0, t_scaled_adventure_map_drawer::t_scale arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:33542
VA_CHT_1(0x00787200, 0x20)
t_screen_point unscale(t_screen_point const& arg_0, t_scaled_adventure_map_drawer::t_scale arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:33543
VA_CHT_1(0x00787220, 0x20)
t_screen_rect unscale(t_screen_rect const& arg_0, t_scaled_adventure_map_drawer::t_scale arg_1)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:63305; name:B (dyninit; see ledger)
VA_CHT_1(0x00787240, 0x20)
// scaled_adventure_map_drawer$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:63307; name:B (dyninit; see ledger)
VA_CHT_1(0x00787260, 0x20)
// scaled_adventure_map_drawer$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:63308
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// scaled_adventure_map_drawer$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:33544
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_rect operator<<(t_screen_rect const& arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:33545
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_rect& t_screen_rect::operator<<=(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:33546
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_ptr<t_scaled_adventure_map_drawer::t_impl>::t_owned_ptr<t_scaled_adventure_map_drawer::t_impl>(
    t_scaled_adventure_map_drawer::t_impl* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:33547
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_ptr<t_scaled_adventure_map_drawer::t_impl>::~t_owned_ptr<t_scaled_adventure_map_drawer::t_impl>()
{
    // Body unavailable.
}

// name:A; map symbol; map:33548
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_scaled_adventure_map_drawer::t_impl& t_owned_ptr<t_scaled_adventure_map_drawer::t_impl>::operator*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:33549
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_scaled_adventure_map_drawer::t_impl* t_owned_ptr<t_scaled_adventure_map_drawer::t_impl>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:33550
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_shared_ptr<t_abstract_bitmap<unsigned short>>::t_shared_ptr<t_abstract_bitmap<unsigned short>>(
    t_abstract_bitmap<unsigned short>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:33551
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_scaled_adventure_map_drawer::t_impl)

// name:A; map symbol; map:33552
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_scaled_adventure_map_drawer::t_impl::~t_impl()
{
    // Body unavailable.
}

// === .rdata (1 symbols) ===

// confidence:A; rtti-name; map:45251
DATA_CHT_1_COMPGEN(0x008e9b6c, "const t_scaled_adventure_map_drawer::t_impl::`vftable'")

// === .rdata$r (4 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_impl@t_scaled_adventure_map_drawer@@;bcd=514934;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54434
DATA_CHT_1_COMPGEN(0x00914934, "t_scaled_adventure_map_drawer::t_impl::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_impl@t_scaled_adventure_map_drawer@@;vft=4e9b6c;col=514968;td=5b27b8;chd=514958;offset=0;cdOffset=0;validated-hierarchy; map:54435
DATA_CHT_1_COMPGEN(0x0091494c, "t_scaled_adventure_map_drawer::t_impl::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_impl@t_scaled_adventure_map_drawer@@;vft=4e9b6c;col=514968;td=5b27b8;chd=514958;offset=0;cdOffset=0;validated-hierarchy; map:54436
DATA_CHT_1_COMPGEN(0x00914958, "t_scaled_adventure_map_drawer::t_impl::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_impl@t_scaled_adventure_map_drawer@@;vft=4e9b6c;col=514968;td=5b27b8;chd=514958;offset=0;cdOffset=0;validated-hierarchy; map:54437
DATA_CHT_1_COMPGEN(0x00914968, "const t_scaled_adventure_map_drawer::t_impl::`RTTI Complete Object Locator'")

// === .data (1 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_impl@t_scaled_adventure_map_drawer@@;td=5b27b8;validated-header; map:59071
DATA_CHT_1_COMPGEN(0x009b27b8, "t_scaled_adventure_map_drawer::t_impl `RTTI Type Descriptor'")
