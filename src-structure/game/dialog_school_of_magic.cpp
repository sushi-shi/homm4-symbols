// dialog_school_of_magic.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 43/66 (A:24 B:3 C:0); unaccounted 23; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (36 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65787; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00684600, 0x11, STATIC_INIT_DISPATCH, "dialog_school_of_magic#1")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65788; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00684620, 0xd7, STATIC_CTOR, "dialog_school_of_magic#1")

// name:C; dyninit; see ledger; map:65789
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "dialog_school_of_magic#1")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65790; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00684700, 0xa, STATIC_DTOR, "dialog_school_of_magic#1")

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:25280
VA_CHT_1(0x00684710, 0x13c)
t_dialog_school_of_magic::t_dialog_school_of_magic(t_window* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:25281
VA_CHT_1(0x006849d0, 0x12d)
void t_dialog_school_of_magic::create_skill_toggle_buttons(
    t_screen_rect arg_0,
    t_skill arg_1,
    t_window* arg_2,
    int arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:25282
VA_CHT_1(0x00684b00, 0x1b94)
int t_dialog_school_of_magic::init_dialog(
    std::vector<t_hero*, std::allocator<t_hero*>> const& arg_0,
    t_window* arg_1,
    t_single_use_object const& arg_2,
    t_army* arg_3,
    t_skill_type arg_4,
    t_skill_type arg_5
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:25283
VA_CHT_1(0x006866a0, 0x466)
void t_dialog_school_of_magic::choose_skill(t_button* arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:25284
VA_CHT_1(0x00686b10, 0x307)
void t_dialog_school_of_magic::buy_clicked(t_button* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:25285
VA_CHT_1(0x00686e20, 0x361)
void t_dialog_school_of_magic::hero_selection_change(t_creature_select_window* arg_0, t_creature_stack* arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:25286
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_dialog_school_of_magic::close_clicked(t_button* arg_0)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:65791; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00687310, 0x20, STATIC_INIT_DISPATCH, dialog_school_of_magic)

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:25287
VA_CHT_1_COMPGEN(0x00684850, 0x1e, VECTOR_DELETING_DTOR, t_dialog_school_of_magic)

// name:A; map symbol; map:25288
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_dialog_school_of_magic)

// name:A; map symbol; map:25289
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_dialog_school_of_magic::~t_dialog_school_of_magic()
{
    // Body unavailable.
}

// name:A; map symbol; map:25290
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_button*, int> bound_handler(
    t_dialog_school_of_magic& arg_0,
    void (t_dialog_school_of_magic::*)(t_button*, int)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:25291
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_creature_select_window*, t_creature_stack*> bound_handler(
    t_dialog_school_of_magic& arg_0,
    void (t_dialog_school_of_magic::*)(t_creature_select_window*, t_creature_stack*)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:25292
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<t_button*> bound_handler(
    t_dialog_school_of_magic& arg_0,
    void (t_dialog_school_of_magic::*)(t_button*)
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:25293
VA_CHT_1(0x00687190, 0x5e)
t_bound_handler_2<t_dialog_school_of_magic, t_button*, int>::t_bound_handler_2<t_dialog_school_of_magic, t_button*, int>(
    t_dialog_school_of_magic& arg_0,
    void (t_dialog_school_of_magic::*)(t_button*, int)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:25294
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_2<t_dialog_school_of_magic, t_button*, int>::operator()(t_button* arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:25295
VA_CHT_1(0x006871f0, 0x5e)
t_bound_handler_2<t_dialog_school_of_magic, t_creature_select_window*, t_creature_stack*>::t_bound_handler_2<t_dialog_school_of_magic, t_creature_select_window*, t_creature_stack*>(
    t_dialog_school_of_magic& arg_0,
    void (t_dialog_school_of_magic::*)(t_creature_select_window*, t_creature_stack*)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:25296
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_2<t_dialog_school_of_magic, t_creature_select_window*, t_creature_stack*>::operator()(
    t_creature_select_window* arg_0,
    t_creature_stack* arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:25297
VA_CHT_1(0x00687250, 0x5e)
t_bound_handler_1<t_dialog_school_of_magic, t_button*>::t_bound_handler_1<t_dialog_school_of_magic, t_button*>(
    t_dialog_school_of_magic& arg_0,
    void (t_dialog_school_of_magic::*)(t_button*)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:25298
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_1<t_dialog_school_of_magic, t_button*>::operator()(t_button* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:25299
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_2<t_dialog_school_of_magic, t_button*, int>")

// name:A; map symbol; map:25300
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_dialog_school_of_magic, t_button*, int>")

// name:A; map symbol; map:25301
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_dialog_school_of_magic, t_creature_select_window*, t_creature_stack*>")

// name:A; map symbol; map:25302
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_2<t_dialog_school_of_magic, t_creature_select_window*, t_creature_stack*>")

// name:A; map symbol; map:25303
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_1<t_dialog_school_of_magic, t_button*>")

// name:A; map symbol; map:25304
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_1<t_dialog_school_of_magic, t_button*>")

// name:A; map symbol; map:25305
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_2<t_dialog_school_of_magic, t_button*, int>::~t_bound_handler_2<t_dialog_school_of_magic, t_button*, int>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:25306
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_2<t_dialog_school_of_magic, t_creature_select_window*, t_creature_stack*>::~t_bound_handler_2<t_dialog_school_of_magic, t_creature_select_window*, t_creature_stack*>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:25307
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_1<t_dialog_school_of_magic, t_button*>::~t_bound_handler_1<t_dialog_school_of_magic, t_button*>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:25308
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_dialog_school_of_magic, t_button*, int>")

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:25309
VA_CHT_1_COMPGEN(0x00687340, 0x8, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_dialog_school_of_magic, t_creature_select_window*, t_creature_stack*>")

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:25310
VA_CHT_1_COMPGEN(0x00687350, 0x8, VECTOR_DELETING_DTOR, "t_bound_handler_1<t_dialog_school_of_magic, t_button*>")

// === .rdata (7 symbols) ===

// confidence:A; rtti-name; map:44402
DATA_CHT_1_COMPGEN(0x008e0a2c, "const t_dialog_school_of_magic::`vftable'")

// confidence:A; rtti-name; map:44403
DATA_CHT_1_COMPGEN(0x008e0a98, "const t_bound_handler_2<t_dialog_school_of_magic, t_button*, int>::`vftable'{for `t_abstract_function_2<void, t_button*, int>'}")

// confidence:B; rtti-order; map:44404
DATA_CHT_1_COMPGEN(0x008e0aa4, "const t_bound_handler_2<t_dialog_school_of_magic, t_button*, int>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:44405
DATA_CHT_1_COMPGEN(0x008e0aac, "const t_bound_handler_2<t_dialog_school_of_magic, t_creature_select_window*, t_creature_stack*>::`vftable'{for `t_abstract_function_2<void, t_creature_select_window*, t_creature_stack*>'}")

// confidence:B; rtti-order; map:44406
DATA_CHT_1_COMPGEN(0x008e0ab8, "const t_bound_handler_2<t_dialog_school_of_magic, t_creature_select_window*, t_creature_stack*>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:44407
DATA_CHT_1_COMPGEN(0x008e0ac0, "const t_bound_handler_1<t_dialog_school_of_magic, t_button*>::`vftable'{for `t_abstract_function_1<void, t_button*>'}")

// confidence:B; rtti-order; map:44408
DATA_CHT_1_COMPGEN(0x008e0acc, "const t_bound_handler_1<t_dialog_school_of_magic, t_button*>::`vftable'{for `t_counted_object'}")

// === .rdata$r (19 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_dialog_school_of_magic@@;bcd=50a97c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52199
DATA_CHT_1_COMPGEN(0x0090a97c, "t_dialog_school_of_magic::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_dialog_school_of_magic@@;vft=4e0a2c;col=50a9b8;td=5a2fb8;chd=50a9a8;offset=0;cdOffset=0;validated-hierarchy; map:52200
DATA_CHT_1_COMPGEN(0x0090a994, "t_dialog_school_of_magic::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_dialog_school_of_magic@@;vft=4e0a2c;col=50a9b8;td=5a2fb8;chd=50a9a8;offset=0;cdOffset=0;validated-hierarchy; map:52201
DATA_CHT_1_COMPGEN(0x0090a9a8, "t_dialog_school_of_magic::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_dialog_school_of_magic@@;vft=4e0a2c;col=50a9b8;td=5a2fb8;chd=50a9a8;offset=0;cdOffset=0;validated-hierarchy; map:52202
DATA_CHT_1_COMPGEN(0x0090a9b8, "const t_dialog_school_of_magic::`RTTI Complete Object Locator'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_2@Vt_dialog_school_of_magic@@PAVt_button@@H@@;vft=4e0a98;col=50aa1c;td=5a3058;chd=50aa0c;offset=8;cdOffset=0;validated-hierarchy; map:52203
DATA_CHT_1_COMPGEN(0x0090aa1c, "const t_bound_handler_2<t_dialog_school_of_magic, t_button*, int>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_button*, int>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_2@Vt_dialog_school_of_magic@@PAVt_button@@H@@;bcd=50a9e0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52204
DATA_CHT_1_COMPGEN(0x0090a9e0, "t_bound_handler_2<t_dialog_school_of_magic, t_button*, int>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_2@Vt_dialog_school_of_magic@@PAVt_button@@H@@;vft=4e0a98;col=50aa1c;td=5a3058;chd=50aa0c;offset=8;cdOffset=0;validated-hierarchy; map:52205
DATA_CHT_1_COMPGEN(0x0090a9f8, "t_bound_handler_2<t_dialog_school_of_magic, t_button*, int>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_2@Vt_dialog_school_of_magic@@PAVt_button@@H@@;vft=4e0a98;col=50aa1c;td=5a3058;chd=50aa0c;offset=8;cdOffset=0;validated-hierarchy; map:52206
DATA_CHT_1_COMPGEN(0x0090aa0c, "t_bound_handler_2<t_dialog_school_of_magic, t_button*, int>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:52207
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_2<t_dialog_school_of_magic, t_button*, int>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_2@Vt_dialog_school_of_magic@@PAVt_creature_select_window@@PAVt_creature_stack@@@@;vft=4e0aac;col=50aa80;td=5a30a8;chd=50aa70;offset=8;cdOffset=0;validated-hierarchy; map:52208
DATA_CHT_1_COMPGEN(0x0090aa80, "const t_bound_handler_2<t_dialog_school_of_magic, t_creature_select_window*, t_creature_stack*>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_creature_select_window*, t_creature_stack*>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_2@Vt_dialog_school_of_magic@@PAVt_creature_select_window@@PAVt_creature_stack@@@@;bcd=50aa44;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52209
DATA_CHT_1_COMPGEN(0x0090aa44, "t_bound_handler_2<t_dialog_school_of_magic, t_creature_select_window*, t_creature_stack*>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_2@Vt_dialog_school_of_magic@@PAVt_creature_select_window@@PAVt_creature_stack@@@@;vft=4e0aac;col=50aa80;td=5a30a8;chd=50aa70;offset=8;cdOffset=0;validated-hierarchy; map:52210
DATA_CHT_1_COMPGEN(0x0090aa5c, "t_bound_handler_2<t_dialog_school_of_magic, t_creature_select_window*, t_creature_stack*>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_2@Vt_dialog_school_of_magic@@PAVt_creature_select_window@@PAVt_creature_stack@@@@;vft=4e0aac;col=50aa80;td=5a30a8;chd=50aa70;offset=8;cdOffset=0;validated-hierarchy; map:52211
DATA_CHT_1_COMPGEN(0x0090aa70, "t_bound_handler_2<t_dialog_school_of_magic, t_creature_select_window*, t_creature_stack*>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:52212
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_2<t_dialog_school_of_magic, t_creature_select_window*, t_creature_stack*>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_1@Vt_dialog_school_of_magic@@PAVt_button@@@@;vft=4e0ac0;col=50aae4;td=5a3118;chd=50aad4;offset=8;cdOffset=0;validated-hierarchy; map:52213
DATA_CHT_1_COMPGEN(0x0090aae4, "const t_bound_handler_1<t_dialog_school_of_magic, t_button*>::`RTTI Complete Object Locator'{for `t_abstract_function_1<void, t_button*>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_1@Vt_dialog_school_of_magic@@PAVt_button@@@@;bcd=50aaa8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52214
DATA_CHT_1_COMPGEN(0x0090aaa8, "t_bound_handler_1<t_dialog_school_of_magic, t_button*>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_1@Vt_dialog_school_of_magic@@PAVt_button@@@@;vft=4e0ac0;col=50aae4;td=5a3118;chd=50aad4;offset=8;cdOffset=0;validated-hierarchy; map:52215
DATA_CHT_1_COMPGEN(0x0090aac0, "t_bound_handler_1<t_dialog_school_of_magic, t_button*>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_1@Vt_dialog_school_of_magic@@PAVt_button@@@@;vft=4e0ac0;col=50aae4;td=5a3118;chd=50aad4;offset=8;cdOffset=0;validated-hierarchy; map:52216
DATA_CHT_1_COMPGEN(0x0090aad4, "t_bound_handler_1<t_dialog_school_of_magic, t_button*>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:52217
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_1<t_dialog_school_of_magic, t_button*>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// === .data (4 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_dialog_school_of_magic@@;td=5a2fb8;validated-header; map:58535
DATA_CHT_1_COMPGEN(0x009a2fb8, "t_dialog_school_of_magic `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_2@Vt_dialog_school_of_magic@@PAVt_button@@H@@;td=5a3058;validated-header; map:58536
DATA_CHT_1_COMPGEN(0x009a3058, "t_bound_handler_2<t_dialog_school_of_magic, t_button*, int> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_2@Vt_dialog_school_of_magic@@PAVt_creature_select_window@@PAVt_creature_stack@@@@;td=5a30a8;validated-header; map:58537
DATA_CHT_1_COMPGEN(0x009a30a8, "t_bound_handler_2<t_dialog_school_of_magic, t_creature_select_window*, t_creature_stack*> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_1@Vt_dialog_school_of_magic@@PAVt_button@@@@;td=5a3118;validated-header; map:58538
DATA_CHT_1_COMPGEN(0x009a3118, "t_bound_handler_1<t_dialog_school_of_magic, t_button*> `RTTI Type Descriptor'")
