// combat_spell_cell_target.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 20/28 (A:20 B:0 C:0); unaccounted 8; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (22 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:67577; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005e0c80, 0x15, STATIC_INIT_DISPATCH, "combat_spell_cell_target#1")

// name:C; dyninit; see ledger; map:67578
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_spell_cell_target#1")

// confidence:A; dyninit-init; owner-conf-C; map:67579; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005e0ca0, 0x15, STATIC_INIT_DISPATCH, "combat_spell_cell_target#2")

// name:C; dyninit; see ledger; map:67580
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_spell_cell_target#2")

// confidence:A; dyninit-init; owner-conf-C; map:67581; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005e0cc0, 0x15, STATIC_INIT_DISPATCH, "combat_spell_cell_target#3")

// name:C; dyninit; see ledger; map:67582
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_spell_cell_target#3")

// confidence:A; dyninit-init; owner-conf-C; map:67583; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005e0ce0, 0x15, STATIC_INIT_DISPATCH, "combat_spell_cell_target#4")

// name:C; dyninit; see ledger; map:67584
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_spell_cell_target#4")

// confidence:A; dyninit-init; owner-conf-C; map:67585; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005e0d00, 0x10, STATIC_INIT_DISPATCH, "combat_spell_cell_target#5")

// name:C; dyninit; see ledger; map:67586
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_spell_cell_target#5")

// confidence:A; dyninit-init; owner-conf-C; map:67587; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005e0d10, 0x15, STATIC_INIT_DISPATCH, "combat_spell_cell_target#6")

// name:C; dyninit; see ledger; map:67588
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_spell_cell_target#6")

// confidence:A; align-order; retn,stable,vptr; map:21672
VA_CHT_1(0x005e0d30, 0x2b)
t_combat_spell_cell_target::t_combat_spell_cell_target(t_battlefield& arg_0, t_spell arg_1)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:21673
VA_CHT_1(0x005e0d80, 0xcf)
t_combat_spell_cell_target::~t_combat_spell_cell_target()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:21674
VA_CHT_1(0x005e0e50, 0x1be)
bool t_combat_spell_cell_target::begin_casting()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:21675
VA_CHT_1(0x005e1010, 0x65)
bool t_combat_spell_cell_target::can_cast(t_screen_point const& arg_0) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:21676
VA_CHT_1(0x005e1080, 0x2dd)
t_mouse_window* t_combat_spell_cell_target::mouse_move(t_screen_point const& arg_0, std::string& arg_1)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:21677
VA_CHT_1(0x005e1360, 0x9c)
bool t_combat_spell_cell_target::left_click(t_screen_point const& arg_0)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:67589; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005e1400, 0x20, STATIC_INIT_DISPATCH, combat_spell_cell_target)

// confidence:A; align-band; retn,stable,vslot; map:21678
VA_CHT_1_COMPGEN(0x005e0d60, 0x1e, VECTOR_DELETING_DTOR, t_combat_spell_cell_target)

// name:A; map symbol; map:21679
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_combat_spell_cell_target)

// name:A; map symbol; map:21680
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_battlefield::move_object(t_abstract_combat_object& arg_0, t_map_point_2d const& arg_1)
{
    // Body unavailable.
}

// === .rdata (1 symbols) ===

// confidence:A; rtti-name; map:44002
DATA_CHT_1_COMPGEN(0x008dcb3c, "const t_combat_spell_cell_target::`vftable'")

// === .rdata$r (4 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_combat_spell_cell_target@@;bcd=504c6c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50949
DATA_CHT_1_COMPGEN(0x00904c6c, "t_combat_spell_cell_target::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_combat_spell_cell_target@@;vft=4dcb3c;col=504ca4;td=599bf4;chd=504c94;offset=0;cdOffset=0;validated-hierarchy; map:50950
DATA_CHT_1_COMPGEN(0x00904c84, "t_combat_spell_cell_target::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_combat_spell_cell_target@@;vft=4dcb3c;col=504ca4;td=599bf4;chd=504c94;offset=0;cdOffset=0;validated-hierarchy; map:50951
DATA_CHT_1_COMPGEN(0x00904c94, "t_combat_spell_cell_target::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_combat_spell_cell_target@@;vft=4dcb3c;col=504ca4;td=599bf4;chd=504c94;offset=0;cdOffset=0;validated-hierarchy; map:50952
DATA_CHT_1_COMPGEN(0x00904ca4, "const t_combat_spell_cell_target::`RTTI Complete Object Locator'")

// === .data (1 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_combat_spell_cell_target@@;td=599bf4;validated-header; map:58253
DATA_CHT_1_COMPGEN(0x00999bf4, "t_combat_spell_cell_target `RTTI Type Descriptor'")
