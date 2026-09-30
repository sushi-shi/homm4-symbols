// treasure_chest_window.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 28/41 (A:12 B:2 C:0); unaccounted 13; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (26 symbols) ===

// confidence:D; dyninit-init; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:61295; name:A (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0082fce0, 0x11, STATIC_INIT_DISPATCH, k_text_gold)

// confidence:D; dyninit-ctor; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:61296; name:A (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0082fd00, 0xd1, STATIC_CTOR, k_text_gold)

// name:A; dyninit; see ledger; map:61297
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, k_text_gold)

// confidence:D; dyninit-dtor; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:61298; name:A (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0082fde0, 0xa, STATIC_DTOR, k_text_gold)

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:61299; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0082fdf0, 0x11, STATIC_INIT_DISPATCH, "treasure_chest_window#2")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:61300; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0082fe10, 0xd7, STATIC_CTOR, "treasure_chest_window#2")

// name:C; dyninit; see ledger; map:61301
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "treasure_chest_window#2")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:61302; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0082fef0, 0xa, STATIC_DTOR, "treasure_chest_window#2")

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:40422
VA_CHT_1(0x0082ff00, 0x8cb)
t_treasure_chest_window::t_treasure_chest_window(t_window* arg_0, t_adv_treasure_chest* arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40423
VA_CHT_1(0x008308d0, 0x57e)
void t_treasure_chest_window::create_buttons(t_screen_point arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40424
VA_CHT_1(0x00830e50, 0xa66)
void t_treasure_chest_window::create_labels(t_screen_point arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:40425
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_treasure_chest_window::exp_change(t_button* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40426
VA_CHT_1(0x008318c0, 0x22)
void t_treasure_chest_window::gold_change(t_button* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40427
VA_CHT_1(0x008318f0, 0x22)
void t_treasure_chest_window::close_click(t_button* arg_0)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:61303; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00831980, 0x20, STATIC_INIT_DISPATCH, treasure_chest_window)

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:40428
VA_CHT_1_COMPGEN(0x008307d0, 0x1e, SCALAR_DELETING_DTOR, t_treasure_chest_window)

// name:A; map symbol; map:40429
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_treasure_chest_window)

// name:A; map symbol; map:40430
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_treasure_chest_window::~t_treasure_chest_window()
{
    // Body unavailable.
}

// name:A; map symbol; map:40431
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_adv_treasure_chest::get_gold()
{
    // Body unavailable.
}

// name:A; map symbol; map:40432
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<t_button*> bound_handler(
    t_treasure_chest_window& arg_0,
    void (t_treasure_chest_window::*)(t_button*)
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:40433
VA_CHT_1(0x00831920, 0x5e)
t_bound_handler_1<t_treasure_chest_window, t_button*>::t_bound_handler_1<t_treasure_chest_window, t_button*>(
    t_treasure_chest_window& arg_0,
    void (t_treasure_chest_window::*)(t_button*)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:40434
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_1<t_treasure_chest_window, t_button*>::operator()(t_button* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:40435
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_1<t_treasure_chest_window, t_button*>")

// name:A; map symbol; map:40436
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_1<t_treasure_chest_window, t_button*>")

// name:A; map symbol; map:40437
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_1<t_treasure_chest_window, t_button*>::~t_bound_handler_1<t_treasure_chest_window, t_button*>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:40438
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_1<t_treasure_chest_window, t_button*>")

// === .rdata (3 symbols) ===

// confidence:A; rtti-name; map:46005
DATA_CHT_1_COMPGEN(0x008f07ec, "const t_treasure_chest_window::`vftable'")

// confidence:A; rtti-name; map:46006
DATA_CHT_1_COMPGEN(0x008f0858, "const t_bound_handler_1<t_treasure_chest_window, t_button*>::`vftable'{for `t_abstract_function_1<void, t_button*>'}")

// confidence:B; rtti-order; map:46007
DATA_CHT_1_COMPGEN(0x008f0864, "const t_bound_handler_1<t_treasure_chest_window, t_button*>::`vftable'{for `t_counted_object'}")

// === .rdata$r (9 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_treasure_chest_window@@;bcd=51e0bc;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56914
DATA_CHT_1_COMPGEN(0x0091e0bc, "t_treasure_chest_window::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_treasure_chest_window@@;vft=4f07ec;col=51e0f8;td=5bf614;chd=51e0e8;offset=0;cdOffset=0;validated-hierarchy; map:56915
DATA_CHT_1_COMPGEN(0x0091e0d4, "t_treasure_chest_window::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_treasure_chest_window@@;vft=4f07ec;col=51e0f8;td=5bf614;chd=51e0e8;offset=0;cdOffset=0;validated-hierarchy; map:56916
DATA_CHT_1_COMPGEN(0x0091e0e8, "t_treasure_chest_window::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_treasure_chest_window@@;vft=4f07ec;col=51e0f8;td=5bf614;chd=51e0e8;offset=0;cdOffset=0;validated-hierarchy; map:56917
DATA_CHT_1_COMPGEN(0x0091e0f8, "const t_treasure_chest_window::`RTTI Complete Object Locator'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_1@Vt_treasure_chest_window@@PAVt_button@@@@;vft=4f0858;col=51e15c;td=5bf670;chd=51e14c;offset=8;cdOffset=0;validated-hierarchy; map:56918
DATA_CHT_1_COMPGEN(0x0091e15c, "const t_bound_handler_1<t_treasure_chest_window, t_button*>::`RTTI Complete Object Locator'{for `t_abstract_function_1<void, t_button*>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_1@Vt_treasure_chest_window@@PAVt_button@@@@;bcd=51e120;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56919
DATA_CHT_1_COMPGEN(0x0091e120, "t_bound_handler_1<t_treasure_chest_window, t_button*>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_1@Vt_treasure_chest_window@@PAVt_button@@@@;vft=4f0858;col=51e15c;td=5bf670;chd=51e14c;offset=8;cdOffset=0;validated-hierarchy; map:56920
DATA_CHT_1_COMPGEN(0x0091e138, "t_bound_handler_1<t_treasure_chest_window, t_button*>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_1@Vt_treasure_chest_window@@PAVt_button@@@@;vft=4f0858;col=51e15c;td=5bf670;chd=51e14c;offset=8;cdOffset=0;validated-hierarchy; map:56921
DATA_CHT_1_COMPGEN(0x0091e14c, "t_bound_handler_1<t_treasure_chest_window, t_button*>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:56922
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_1<t_treasure_chest_window, t_button*>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// === .data (2 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_treasure_chest_window@@;td=5bf614;validated-header; map:59698
DATA_CHT_1_COMPGEN(0x009bf614, "t_treasure_chest_window `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_1@Vt_treasure_chest_window@@PAVt_button@@@@;td=5bf670;validated-header; map:59699
DATA_CHT_1_COMPGEN(0x009bf670, "t_bound_handler_1<t_treasure_chest_window, t_button*> `RTTI Type Descriptor'")

// === .bss (1 symbols) ===

// confidence:B; dyninit-global; owner-conf-B; map:60437
DATA_CHT_1(0x00a0346c)
t_external_string k_text_gold; // Initial value unavailable.
