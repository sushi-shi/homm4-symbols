// progress_bar_dialog.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 10/12 (A:6 B:0 C:0); unaccounted 2; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (6 symbols) ===

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:32237
VA_CHT_1(0x00762a00, 0x9d)
t_progress_bar_dialog::t_progress_bar_dialog(t_window* arg_0, std::string const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:32238
VA_CHT_1(0x00762cc0, 0x13)
t_progress_handler* t_progress_bar_dialog::get_handler()
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:63687; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00762ce0, 0x20, STATIC_INIT_DISPATCH, progress_bar_dialog)

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:32239
VA_CHT_1_COMPGEN(0x00762aa0, 0x1e, SCALAR_DELETING_DTOR, t_progress_bar_dialog)

// name:A; map symbol; map:32240
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_progress_bar_dialog)

// name:A; map symbol; map:32241
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_progress_bar_dialog::~t_progress_bar_dialog()
{
    // Body unavailable.
}

// === .rdata (1 symbols) ===

// confidence:A; rtti-name; map:45062
DATA_CHT_1_COMPGEN(0x008e7d1c, "const t_progress_bar_dialog::`vftable'")

// === .rdata$r (4 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_progress_bar_dialog@@;bcd=512890;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53967
DATA_CHT_1_COMPGEN(0x00912890, "t_progress_bar_dialog::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_progress_bar_dialog@@;vft=4e7d1c;col=5128d8;td=5b09a0;chd=5128c8;offset=0;cdOffset=0;validated-hierarchy; map:53968
DATA_CHT_1_COMPGEN(0x009128a8, "t_progress_bar_dialog::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_progress_bar_dialog@@;vft=4e7d1c;col=5128d8;td=5b09a0;chd=5128c8;offset=0;cdOffset=0;validated-hierarchy; map:53969
DATA_CHT_1_COMPGEN(0x009128c8, "t_progress_bar_dialog::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_progress_bar_dialog@@;vft=4e7d1c;col=5128d8;td=5b09a0;chd=5128c8;offset=0;cdOffset=0;validated-hierarchy; map:53970
DATA_CHT_1_COMPGEN(0x009128d8, "const t_progress_bar_dialog::`RTTI Complete Object Locator'")

// === .data (1 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_progress_bar_dialog@@;td=5b09a0;validated-header; map:58967
DATA_CHT_1_COMPGEN(0x009b09a0, "t_progress_bar_dialog `RTTI Type Descriptor'")
