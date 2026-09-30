// combat_creature_icon.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 20/29 (A:8 B:0 C:1); unaccounted 9; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (21 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67823; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005cba60, 0x15, STATIC_INIT_DISPATCH, "combat_creature_icon#1")

// name:C; dyninit; see ledger; map:67824
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_creature_icon#1")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67825; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005cba80, 0x15, STATIC_INIT_DISPATCH, "combat_creature_icon#2")

// name:C; dyninit; see ledger; map:67826
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_creature_icon#2")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67827; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005cbaa0, 0x15, STATIC_INIT_DISPATCH, "combat_creature_icon#3")

// name:C; dyninit; see ledger; map:67828
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_creature_icon#3")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67829; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005cbac0, 0x15, STATIC_INIT_DISPATCH, "combat_creature_icon#4")

// name:C; dyninit; see ledger; map:67830
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_creature_icon#4")

// confidence:C; dyninit-init; owner-conf-C;manual-review=complete-R23:unresolved; map:67831; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005cbae0, 0x10, STATIC_INIT_DISPATCH, "combat_creature_icon#5")

// name:C; dyninit; see ledger; map:67832
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_creature_icon#5")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67833; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005cbaf0, 0x15, STATIC_INIT_DISPATCH, "combat_creature_icon#6")

// name:C; dyninit; see ledger; map:67834
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_creature_icon#6")

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:20667
VA_CHT_1(0x005cbb10, 0x38)
t_combat_creature_icon::t_combat_creature_icon(
    t_screen_rect const& arg_0,
    t_window* arg_1,
    t_combat_window* arg_2
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:20668
VA_CHT_1(0x005cbcd0, 0xd5)
void t_combat_creature_icon::right_button_up(t_mouse_event const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:20669
VA_CHT_1(0x005cbdb0, 0x5e)
void t_combat_creature_icon::set_creature(t_combat_creature const* arg_0, bool arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:20670
VA_CHT_1(0x005cbe10, 0x2e)
void t_combat_creature_icon::clear_creature()
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:67835; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005cbe40, 0x20, STATIC_INIT_DISPATCH, combat_creature_icon)

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:20671
VA_CHT_1_COMPGEN(0x005cbb50, 0x1e, SCALAR_DELETING_DTOR, t_combat_creature_icon)

// name:A; map symbol; map:20672
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_combat_creature_icon)

// name:A; map symbol; map:20673
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_creature_icon_window::~t_creature_icon_window()
{
    // Body unavailable.
}

// name:A; map symbol; map:20674
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_creature_icon::~t_combat_creature_icon()
{
    // Body unavailable.
}

// === .rdata (1 symbols) ===

// confidence:A; rtti-name; map:43939
DATA_CHT_1_COMPGEN(0x008dc45c, "const t_combat_creature_icon::`vftable'")

// === .rdata$r (5 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_creature_icon_window@@;bcd=503eac;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50766
DATA_CHT_1_COMPGEN(0x00903eac, "t_creature_icon_window::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_combat_creature_icon@@;bcd=503ec4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50767
DATA_CHT_1_COMPGEN(0x00903ec4, "t_combat_creature_icon::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_combat_creature_icon@@;vft=4dc45c;col=503f04;td=5990e4;chd=503ef4;offset=0;cdOffset=0;validated-hierarchy; map:50768
DATA_CHT_1_COMPGEN(0x00903edc, "t_combat_creature_icon::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_combat_creature_icon@@;vft=4dc45c;col=503f04;td=5990e4;chd=503ef4;offset=0;cdOffset=0;validated-hierarchy; map:50769
DATA_CHT_1_COMPGEN(0x00903ef4, "t_combat_creature_icon::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_combat_creature_icon@@;vft=4dc45c;col=503f04;td=5990e4;chd=503ef4;offset=0;cdOffset=0;validated-hierarchy; map:50770
DATA_CHT_1_COMPGEN(0x00903f04, "const t_combat_creature_icon::`RTTI Complete Object Locator'")

// === .data (2 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_creature_icon_window@@;td=5990bc;validated-header; map:58213
DATA_CHT_1_COMPGEN(0x009990bc, "t_creature_icon_window `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_combat_creature_icon@@;td=5990e4;validated-header; map:58214
DATA_CHT_1_COMPGEN(0x009990e4, "t_combat_creature_icon `RTTI Type Descriptor'")
