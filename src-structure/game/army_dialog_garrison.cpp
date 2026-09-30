// army_dialog_garrison.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 12/18 (A:6 B:1 C:0); unaccounted 6; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (10 symbols) ===

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:14404
VA_CHT_1(0x005236a0, 0xf9)
t_army_dialog_garrison::t_army_dialog_garrison(
    t_ownable_garrisonable_adv_object* arg_0,
    t_army* arg_1,
    t_adventure_frame* arg_2,
    t_creature_array* arg_3,
    int arg_4
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:14405
VA_CHT_1(0x00523b50, 0x195)
void t_army_dialog_garrison::get_artifact_pile_position(
    t_adv_map_point& arg_0,
    t_counted_ptr<t_adv_artifact_pile>& arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:14406
VA_CHT_1(0x00523cf0, 0x28)
bool t_army_dialog_garrison::is_restricted(bool arg_0) const
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:69550; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00523d20, 0x20, STATIC_INIT_DISPATCH, army_dialog_garrison)

// name:A; map symbol; map:14407
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_creature_array_window::set_allow_drags(bool arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:14408
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_ownable_garrisonable_adv_object::can_remove_garrison() const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:14409
VA_CHT_1_COMPGEN(0x005237a0, 0x1e, VECTOR_DELETING_DTOR, t_army_dialog_garrison)

// name:A; map symbol; map:14410
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_army_dialog_garrison)

// name:A; map symbol; map:14411
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_army_dialog_garrison::~t_army_dialog_garrison()
{
    // Body unavailable.
}

// name:A; map symbol; map:14412
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_army_dialog_garrison)

// === .rdata (2 symbols) ===

// confidence:A; rtti-name; map:43443
DATA_CHT_1_COMPGEN(0x008d56b4, "const t_army_dialog_garrison::`vftable'{for `t_drag_artifact_source_holder'}")

// confidence:B; rtti-order; map:43444
DATA_CHT_1_COMPGEN(0x008d56d4, "const t_army_dialog_garrison::`vftable'{for `t_bitmap_layer_window'}")

// === .rdata$r (5 symbols) ===

// confidence:A; rtti-col-pointer; type-name=.?AVt_army_dialog_garrison@@;vft=4d56b4;col=4fd5cc;td=59035c;chd=4fd5bc;offset=200;cdOffset=0;validated-hierarchy; map:49328
DATA_CHT_1_COMPGEN(0x008fd5cc, "const t_army_dialog_garrison::`RTTI Complete Object Locator'{for `t_drag_artifact_source_holder'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_army_dialog_garrison@@;bcd=4fd584;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49329
DATA_CHT_1_COMPGEN(0x008fd584, "t_army_dialog_garrison::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_army_dialog_garrison@@;vft=4d56b4;col=4fd5cc;td=59035c;chd=4fd5bc;offset=200;cdOffset=0;validated-hierarchy; map:49330
DATA_CHT_1_COMPGEN(0x008fd59c, "t_army_dialog_garrison::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_army_dialog_garrison@@;vft=4d56b4;col=4fd5cc;td=59035c;chd=4fd5bc;offset=200;cdOffset=0;validated-hierarchy; map:49331
DATA_CHT_1_COMPGEN(0x008fd5bc, "t_army_dialog_garrison::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:49332
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_army_dialog_garrison::`RTTI Complete Object Locator'{for `t_bitmap_layer_window'}")

// === .data (1 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_army_dialog_garrison@@;td=59035c;validated-header; map:57844
DATA_CHT_1_COMPGEN(0x0099035c, "t_army_dialog_garrison `RTTI Type Descriptor'")
