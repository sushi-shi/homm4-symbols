// luck_icon_window.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 20/24 (A:10 B:8 C:2); unaccounted 4; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (20 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:64822; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006ec190, 0x11, STATIC_INIT_DISPATCH, "luck_icon_window#1")

// confidence:B; dyninit-ctor; owner-conf-C; map:64823; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006ec1b0, 0xd1, STATIC_CTOR, "luck_icon_window#1")

// name:C; dyninit; see ledger; map:64824
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "luck_icon_window#1")

// confidence:B; dyninit-dtor; owner-conf-C; map:64825; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006ec290, 0xa, STATIC_DTOR, "luck_icon_window#1")

// confidence:A; dyninit-init; owner-conf-C; map:64826; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006ec2a0, 0x11, STATIC_INIT_DISPATCH, "luck_icon_window#2")

// confidence:B; dyninit-ctor; owner-conf-C; map:64827; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006ec2c0, 0xd1, STATIC_CTOR, "luck_icon_window#2")

// name:C; dyninit; see ledger; map:64828
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "luck_icon_window#2")

// confidence:B; dyninit-dtor; owner-conf-C; map:64829; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006ec3a0, 0xa, STATIC_DTOR, "luck_icon_window#2")

// confidence:A; dyninit-init; owner-conf-C; map:64830; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006ec3b0, 0x11, STATIC_INIT_DISPATCH, "luck_icon_window#3")

// confidence:B; dyninit-ctor; owner-conf-C; map:64831; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006ec3d0, 0xd1, STATIC_CTOR, "luck_icon_window#3")

// name:C; dyninit; see ledger; map:64832
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "luck_icon_window#3")

// confidence:B; dyninit-dtor; owner-conf-C; map:64833; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006ec4b0, 0xa, STATIC_DTOR, "luck_icon_window#3")

// confidence:A; align-order; retn,stable,vptr; map:28226
VA_CHT_1(0x006ec4c0, 0x21b)
t_luck_icon_display::t_luck_icon_display(t_screen_rect const& arg_0, t_window* arg_1, int arg_2)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:64834
VA_CHT_1(0x006ec6e0, 0x28)
static t_cached_ptr<t_bitmap_group> get_icons(int arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:28227
VA_CHT_1(0x006ec7d0, 0x220)
void t_luck_icon_display::set_value(int arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:28228
VA_CHT_1(0x006ec9f0, 0x2e)
void t_luck_icon_window::set_creature(t_creature_stack const* arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:28229
VA_CHT_1(0x006eca20, 0x20)
void t_luck_icon_window::update()
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:64835; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006eca40, 0x20, STATIC_INIT_DISPATCH, luck_icon_window)

// confidence:A; align-band; retn,stable,vslot; map:28230
VA_CHT_1_COMPGEN(0x006ec710, 0x1e, VECTOR_DELETING_DTOR, t_luck_icon_display)

// name:A; map symbol; map:28231
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_luck_icon_display)

// === .rdata (1 symbols) ===

// confidence:A; rtti-name; map:44670
DATA_CHT_1_COMPGEN(0x008e3ef4, "const t_luck_icon_display::`vftable'")

// === .rdata$r (3 symbols) ===

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_luck_icon_display@@;vft=4e3ef4;col=50ddf0;td=58fcec;chd=50dde0;offset=0;cdOffset=0;validated-hierarchy; map:52954
DATA_CHT_1_COMPGEN(0x0090ddc8, "t_luck_icon_display::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_luck_icon_display@@;vft=4e3ef4;col=50ddf0;td=58fcec;chd=50dde0;offset=0;cdOffset=0;validated-hierarchy; map:52955
DATA_CHT_1_COMPGEN(0x0090dde0, "t_luck_icon_display::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_luck_icon_display@@;vft=4e3ef4;col=50ddf0;td=58fcec;chd=50dde0;offset=0;cdOffset=0;validated-hierarchy; map:52956
DATA_CHT_1_COMPGEN(0x0090ddf0, "const t_luck_icon_display::`RTTI Complete Object Locator'")
