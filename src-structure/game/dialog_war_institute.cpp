// dialog_war_institute.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 36/54 (A:18 B:2 C:0); unaccounted 18; skipped std 5.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (32 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65556; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00697400, 0x11, STATIC_INIT_DISPATCH, "dialog_war_institute#1")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65557; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00697420, 0xd7, STATIC_CTOR, "dialog_war_institute#1")

// name:C; dyninit; see ledger; map:65558
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "dialog_war_institute#1")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65559; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00697500, 0xa, STATIC_DTOR, "dialog_war_institute#1")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65560; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00697510, 0x11, STATIC_INIT_DISPATCH, "dialog_war_institute#2")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65561; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00697530, 0xd7, STATIC_CTOR, "dialog_war_institute#2")

// name:C; dyninit; see ledger; map:65562
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "dialog_war_institute#2")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65563; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00697610, 0xa, STATIC_DTOR, "dialog_war_institute#2")

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:25705
VA_CHT_1(0x00697620, 0xa0)
t_dialog_war_institute::t_dialog_war_institute(t_window* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:25706
VA_CHT_1(0x006977e0, 0x158f)
void t_dialog_war_institute::init_dialog(
    std::vector<t_hero*, std::allocator<t_hero*>> const& arg_0,
    std::vector<t_hero*, std::allocator<t_hero*>> const& arg_1,
    t_single_use_object const& arg_2,
    t_window* arg_3,
    t_army* arg_4
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:25707
VA_CHT_1(0x00698d70, 0x12b)
void t_dialog_war_institute::selection_change(t_creature_select_window* arg_0, t_creature_stack* arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:25708
VA_CHT_1(0x00698ea0, 0xf4)
void t_dialog_war_institute::buy_clicked(t_button* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:25709
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_dialog_war_institute::close_clicked(t_button* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:25710
VA_CHT_1(0x00698fa0, 0x7d)
std::vector<t_hero*, std::allocator<t_hero*>> t_dialog_war_institute::get_selected_heroes()
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:65564; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006990e0, 0x20, STATIC_INIT_DISPATCH, dialog_war_institute)

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:25711
VA_CHT_1_COMPGEN(0x006976c0, 0x1e, VECTOR_DELETING_DTOR, t_dialog_war_institute)

// name:A; map symbol; map:25712
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_dialog_war_institute)

// name:A; map symbol; map:25713
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_dialog_war_institute::~t_dialog_war_institute()
{
    // Body unavailable.
}

// name:A; map symbol; map:25717
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_creature_select_window*, t_creature_stack*> bound_handler(
    t_dialog_war_institute& arg_0,
    void (t_dialog_war_institute::*)(t_creature_select_window*, t_creature_stack*)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:25718
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<t_button*> bound_handler(
    t_dialog_war_institute& arg_0,
    void (t_dialog_war_institute::*)(t_button*)
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:25720
VA_CHT_1(0x00699020, 0x5e)
t_bound_handler_2<t_dialog_war_institute, t_creature_select_window*, t_creature_stack*>::t_bound_handler_2<t_dialog_war_institute, t_creature_select_window*, t_creature_stack*>(
    t_dialog_war_institute& arg_0,
    void (t_dialog_war_institute::*)(t_creature_select_window*, t_creature_stack*)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:25721
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_2<t_dialog_war_institute, t_creature_select_window*, t_creature_stack*>::operator()(
    t_creature_select_window* arg_0,
    t_creature_stack* arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:25722
VA_CHT_1(0x00699080, 0x5e)
t_bound_handler_1<t_dialog_war_institute, t_button*>::t_bound_handler_1<t_dialog_war_institute, t_button*>(
    t_dialog_war_institute& arg_0,
    void (t_dialog_war_institute::*)(t_button*)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:25723
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_1<t_dialog_war_institute, t_button*>::operator()(t_button* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:25724
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_dialog_war_institute, t_creature_select_window*, t_creature_stack*>")

// name:A; map symbol; map:25725
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_2<t_dialog_war_institute, t_creature_select_window*, t_creature_stack*>")

// name:A; map symbol; map:25726
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_1<t_dialog_war_institute, t_button*>")

// name:A; map symbol; map:25727
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_1<t_dialog_war_institute, t_button*>")

// name:A; map symbol; map:25728
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_2<t_dialog_war_institute, t_creature_select_window*, t_creature_stack*>::~t_bound_handler_2<t_dialog_war_institute, t_creature_select_window*, t_creature_stack*>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:25729
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_1<t_dialog_war_institute, t_button*>::~t_bound_handler_1<t_dialog_war_institute, t_button*>()
{
    // Body unavailable.
}

// name:A; map symbol; map:25730
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_dialog_war_institute, t_creature_select_window*, t_creature_stack*>")

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:25731
VA_CHT_1_COMPGEN(0x00699110, 0x8, VECTOR_DELETING_DTOR, "t_bound_handler_1<t_dialog_war_institute, t_button*>")

// === .rdata (5 symbols) ===

// confidence:A; rtti-name; map:44455
DATA_CHT_1_COMPGEN(0x008e1174, "const t_dialog_war_institute::`vftable'")

// confidence:A; rtti-name; map:44456
DATA_CHT_1_COMPGEN(0x008e11e0, "const t_bound_handler_2<t_dialog_war_institute, t_creature_select_window*, t_creature_stack*>::`vftable'{for `t_abstract_function_2<void, t_creature_select_window*, t_creature_stack*>'}")

// confidence:B; rtti-order; map:44457
DATA_CHT_1_COMPGEN(0x008e11ec, "const t_bound_handler_2<t_dialog_war_institute, t_creature_select_window*, t_creature_stack*>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:44458
DATA_CHT_1_COMPGEN(0x008e11f4, "const t_bound_handler_1<t_dialog_war_institute, t_button*>::`vftable'{for `t_abstract_function_1<void, t_button*>'}")

// confidence:B; rtti-order; map:44459
DATA_CHT_1_COMPGEN(0x008e1200, "const t_bound_handler_1<t_dialog_war_institute, t_button*>::`vftable'{for `t_counted_object'}")

// === .rdata$r (14 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_dialog_war_institute@@;bcd=50b488;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52349
DATA_CHT_1_COMPGEN(0x0090b488, "t_dialog_war_institute::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_dialog_war_institute@@;vft=4e1174;col=50b4c4;td=5a41f4;chd=50b4b4;offset=0;cdOffset=0;validated-hierarchy; map:52350
DATA_CHT_1_COMPGEN(0x0090b4a0, "t_dialog_war_institute::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_dialog_war_institute@@;vft=4e1174;col=50b4c4;td=5a41f4;chd=50b4b4;offset=0;cdOffset=0;validated-hierarchy; map:52351
DATA_CHT_1_COMPGEN(0x0090b4b4, "t_dialog_war_institute::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_dialog_war_institute@@;vft=4e1174;col=50b4c4;td=5a41f4;chd=50b4b4;offset=0;cdOffset=0;validated-hierarchy; map:52352
DATA_CHT_1_COMPGEN(0x0090b4c4, "const t_dialog_war_institute::`RTTI Complete Object Locator'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_2@Vt_dialog_war_institute@@PAVt_creature_select_window@@PAVt_creature_stack@@@@;vft=4e11e0;col=50b528;td=5a4220;chd=50b518;offset=8;cdOffset=0;validated-hierarchy; map:52353
DATA_CHT_1_COMPGEN(0x0090b528, "const t_bound_handler_2<t_dialog_war_institute, t_creature_select_window*, t_creature_stack*>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_creature_select_window*, t_creature_stack*>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_2@Vt_dialog_war_institute@@PAVt_creature_select_window@@PAVt_creature_stack@@@@;bcd=50b4ec;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52354
DATA_CHT_1_COMPGEN(0x0090b4ec, "t_bound_handler_2<t_dialog_war_institute, t_creature_select_window*, t_creature_stack*>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_2@Vt_dialog_war_institute@@PAVt_creature_select_window@@PAVt_creature_stack@@@@;vft=4e11e0;col=50b528;td=5a4220;chd=50b518;offset=8;cdOffset=0;validated-hierarchy; map:52355
DATA_CHT_1_COMPGEN(0x0090b504, "t_bound_handler_2<t_dialog_war_institute, t_creature_select_window*, t_creature_stack*>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_2@Vt_dialog_war_institute@@PAVt_creature_select_window@@PAVt_creature_stack@@@@;vft=4e11e0;col=50b528;td=5a4220;chd=50b518;offset=8;cdOffset=0;validated-hierarchy; map:52356
DATA_CHT_1_COMPGEN(0x0090b518, "t_bound_handler_2<t_dialog_war_institute, t_creature_select_window*, t_creature_stack*>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:52357
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_2<t_dialog_war_institute, t_creature_select_window*, t_creature_stack*>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_1@Vt_dialog_war_institute@@PAVt_button@@@@;vft=4e11f4;col=50b58c;td=5a4290;chd=50b57c;offset=8;cdOffset=0;validated-hierarchy; map:52358
DATA_CHT_1_COMPGEN(0x0090b58c, "const t_bound_handler_1<t_dialog_war_institute, t_button*>::`RTTI Complete Object Locator'{for `t_abstract_function_1<void, t_button*>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_1@Vt_dialog_war_institute@@PAVt_button@@@@;bcd=50b550;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52359
DATA_CHT_1_COMPGEN(0x0090b550, "t_bound_handler_1<t_dialog_war_institute, t_button*>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_1@Vt_dialog_war_institute@@PAVt_button@@@@;vft=4e11f4;col=50b58c;td=5a4290;chd=50b57c;offset=8;cdOffset=0;validated-hierarchy; map:52360
DATA_CHT_1_COMPGEN(0x0090b568, "t_bound_handler_1<t_dialog_war_institute, t_button*>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_1@Vt_dialog_war_institute@@PAVt_button@@@@;vft=4e11f4;col=50b58c;td=5a4290;chd=50b57c;offset=8;cdOffset=0;validated-hierarchy; map:52361
DATA_CHT_1_COMPGEN(0x0090b57c, "t_bound_handler_1<t_dialog_war_institute, t_button*>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:52362
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_1<t_dialog_war_institute, t_button*>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// === .data (3 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_dialog_war_institute@@;td=5a41f4;validated-header; map:58570
DATA_CHT_1_COMPGEN(0x009a41f4, "t_dialog_war_institute `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_2@Vt_dialog_war_institute@@PAVt_creature_select_window@@PAVt_creature_stack@@@@;td=5a4220;validated-header; map:58571
DATA_CHT_1_COMPGEN(0x009a4220, "t_bound_handler_2<t_dialog_war_institute, t_creature_select_window*, t_creature_stack*> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_1@Vt_dialog_war_institute@@PAVt_button@@@@;td=5a4290;validated-header; map:58572
DATA_CHT_1_COMPGEN(0x009a4290, "t_bound_handler_1<t_dialog_war_institute, t_button*> `RTTI Type Descriptor'")
