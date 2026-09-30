// skill_icon.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 13/16 (A:6 B:0 C:0); unaccounted 3; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (10 symbols) ===

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:37438
VA_CHT_1(0x007bf690, 0x103)
t_skill_icon::t_skill_icon(t_screen_rect const& arg_0, t_window* arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:37439
VA_CHT_1(0x007bf890, 0x110)
t_skill_icon::t_skill_icon(t_skill const& arg_0, t_screen_rect const& arg_1, t_window* arg_2)
{
    // Body unavailable.
}

// name:A; map symbol; map:37440
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_skill_icon::initialize()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:37441
VA_CHT_1(0x007bf9a0, 0x267)
void t_skill_icon::set_ability(t_creature_ability arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:37442
VA_CHT_1(0x007bfc10, 0x30c)
void t_skill_icon::set_skill(t_skill const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:37443
VA_CHT_1(0x007bff20, 0x7f)
void t_skill_icon::right_button_up(t_mouse_event const& arg_0)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:62702; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007bffa0, 0x20, STATIC_INIT_DISPATCH, skill_icon)

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:37444
VA_CHT_1_COMPGEN(0x007bf7a0, 0x1e, SCALAR_DELETING_DTOR, t_skill_icon)

// name:A; map symbol; map:37445
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_skill_icon)

// name:A; map symbol; map:37446
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_skill_icon::~t_skill_icon()
{
    // Body unavailable.
}

// === .rdata (1 symbols) ===

// confidence:A; rtti-name; map:45776
DATA_CHT_1_COMPGEN(0x008ed08c, "const t_skill_icon::`vftable'")

// === .rdata$r (4 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_skill_icon@@;bcd=51b530;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56338
DATA_CHT_1_COMPGEN(0x0091b530, "t_skill_icon::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_skill_icon@@;vft=4ed08c;col=51b570;td=5b9dc0;chd=51b560;offset=0;cdOffset=0;validated-hierarchy; map:56339
DATA_CHT_1_COMPGEN(0x0091b548, "t_skill_icon::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_skill_icon@@;vft=4ed08c;col=51b570;td=5b9dc0;chd=51b560;offset=0;cdOffset=0;validated-hierarchy; map:56340
DATA_CHT_1_COMPGEN(0x0091b560, "t_skill_icon::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_skill_icon@@;vft=4ed08c;col=51b570;td=5b9dc0;chd=51b560;offset=0;cdOffset=0;validated-hierarchy; map:56341
DATA_CHT_1_COMPGEN(0x0091b570, "const t_skill_icon::`RTTI Complete Object Locator'")

// === .data (1 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_skill_icon@@;td=5b9dc0;validated-header; map:59557
DATA_CHT_1_COMPGEN(0x009b9dc0, "t_skill_icon `RTTI Type Descriptor'")
