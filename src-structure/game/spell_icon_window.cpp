// spell_icon_window.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 11/13 (A:6 B:0 C:0); unaccounted 2; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (7 symbols) ===

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:38034
VA_CHT_1(0x007d0dd0, 0x187)
t_spell_icon_window::t_spell_icon_window(t_spell arg_0, t_screen_rect const& arg_1, t_window* arg_2)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:38035
VA_CHT_1(0x007d1020, 0x2d)
void t_spell_icon_window::right_button_up(t_mouse_event const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:38036
VA_CHT_1(0x007d1050, 0x1c7)
void t_spell_icon_window::set_spell(t_spell arg_0)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:62575; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007d1220, 0x20, STATIC_INIT_DISPATCH, spell_icon_window)

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:38037
VA_CHT_1_COMPGEN(0x007d0f60, 0x1e, VECTOR_DELETING_DTOR, t_spell_icon_window)

// name:A; map symbol; map:38038
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_spell_icon_window)

// name:A; map symbol; map:38039
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_spell_icon_window::~t_spell_icon_window()
{
    // Body unavailable.
}

// === .rdata (1 symbols) ===

// confidence:A; rtti-name; map:45821
DATA_CHT_1_COMPGEN(0x008ed65c, "const t_spell_icon_window::`vftable'")

// === .rdata$r (4 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_spell_icon_window@@;bcd=51bf2c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56467
DATA_CHT_1_COMPGEN(0x0091bf2c, "t_spell_icon_window::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_spell_icon_window@@;vft=4ed65c;col=51bf70;td=5bade0;chd=51bf60;offset=0;cdOffset=0;validated-hierarchy; map:56468
DATA_CHT_1_COMPGEN(0x0091bf44, "t_spell_icon_window::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_spell_icon_window@@;vft=4ed65c;col=51bf70;td=5bade0;chd=51bf60;offset=0;cdOffset=0;validated-hierarchy; map:56469
DATA_CHT_1_COMPGEN(0x0091bf60, "t_spell_icon_window::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_spell_icon_window@@;vft=4ed65c;col=51bf70;td=5bade0;chd=51bf60;offset=0;cdOffset=0;validated-hierarchy; map:56470
DATA_CHT_1_COMPGEN(0x0091bf70, "const t_spell_icon_window::`RTTI Complete Object Locator'")

// === .data (1 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_spell_icon_window@@;td=5bade0;validated-header; map:59589
DATA_CHT_1_COMPGEN(0x009bade0, "t_spell_icon_window `RTTI Type Descriptor'")
