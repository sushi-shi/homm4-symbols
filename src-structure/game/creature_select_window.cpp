// creature_select_window.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 61/105 (A:33 B:3 C:0); unaccounted 44; skipped std 24.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (61 symbols) ===

// confidence:D; dyninit-init; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:66962; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006174b0, 0x11, STATIC_INIT_DISPATCH, k_creature_select_bitmaps)

// confidence:D; dyninit-ctor; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:66963; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006174d0, 0xd7, STATIC_CTOR, k_creature_select_bitmaps)

// name:B; dyninit; see ledger; map:66964
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, k_creature_select_bitmaps)

// confidence:D; dyninit-dtor; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:66965; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006175b0, 0xa, STATIC_DTOR, k_creature_select_bitmaps)

// confidence:D; align-order; stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:23364
VA_CHT_1(0x006175c0, 0x19c)
t_creature_select_window::t_creature_select_window(t_screen_point arg_0, bool arg_1, t_window* arg_2)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23365
VA_CHT_1(0x00617900, 0x397)
void t_creature_select_window::add(t_creature_stack const* arg_0, bool arg_1, bool arg_2)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23366
VA_CHT_1(0x00617ca0, 0x61)
void t_creature_select_window::enable(int arg_0, bool arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23367
VA_CHT_1(0x00617d10, 0x3e)
bool t_creature_select_window::is_enabled(int arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23368
VA_CHT_1(0x00617d50, 0x37)
bool t_creature_select_window::is_selected(int arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23369
VA_CHT_1(0x00617d90, 0x208)
void t_creature_select_window::set_help_text(int arg_0, std::string const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23370
VA_CHT_1(0x00617fa0, 0x38)
void t_creature_select_window::button_click(t_button* arg_0, t_creature_stack* arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23371
VA_CHT_1(0x00617fe0, 0x46)
void t_creature_select_window::select_first()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23372
VA_CHT_1(0x00618030, 0x3b)
void t_creature_select_window::select_all()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23373
VA_CHT_1(0x00618070, 0x3b)
void t_creature_select_window::select_none()
{
    // Body unavailable.
}

// confidence:D; align-order; stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:23374
VA_CHT_1(0x006180b0, 0x27)
t_creature_toggle_window::t_creature_toggle_window(t_screen_point arg_0, t_window* arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23375
VA_CHT_1(0x00618280, 0x5e)
void t_creature_toggle_window::button_click(t_button* arg_0, t_creature_stack* arg_1)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:66966; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00618490, 0x20, STATIC_INIT_DISPATCH, creature_select_window)

// name:A; map symbol; map:23376
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_creature_select_window*, t_creature_stack*>::~t_handler_2<t_creature_select_window*, t_creature_stack*>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:23377
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_2<t_creature_select_window*, t_creature_stack*>>::~t_counted_ptr<t_handler_base_2<t_creature_select_window*, t_creature_stack*>>(

)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:23378
VA_CHT_1_COMPGEN(0x00617760, 0x1e, SCALAR_DELETING_DTOR, t_creature_select_window)

// name:A; map symbol; map:23379
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_creature_select_window)

// name:A; map symbol; map:23380
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_creature_select_window::~t_creature_select_window()
{
    // Body unavailable.
}

// name:A; map symbol; map:23381
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_button::is_enabled() const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:23382
VA_CHT_1_COMPGEN(0x006180e0, 0x1e, SCALAR_DELETING_DTOR, t_creature_toggle_window)

// name:A; map symbol; map:23383
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_creature_toggle_window)

// name:A; map symbol; map:23384
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_creature_toggle_window::~t_creature_toggle_window()
{
    // Body unavailable.
}

// name:A; map symbol; map:23385
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_creature_select_window*, t_creature_stack*>::t_handler_2<t_creature_select_window*, t_creature_stack*>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:23386
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_handler_2<t_creature_select_window*, t_creature_stack*>::operator()(
    t_creature_select_window* arg_0,
    t_creature_stack* arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:23405
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_2<t_creature_select_window*, t_creature_stack*>>::t_counted_ptr<t_handler_base_2<t_creature_select_window*, t_creature_stack*>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:23406
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_creature_select_window*, t_creature_stack*>& t_counted_ptr<t_handler_base_2<t_creature_select_window*, t_creature_stack*>>::operator*(

) const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23407
VA_CHT_1(0x006182e0, 0xbb)
t_handler_2<t_button*, t_creature_stack*> bound_handler(
    t_creature_select_window& arg_0,
    void (t_creature_select_window::*)(t_button*, t_creature_stack*)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:23408
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<t_button*> add_2nd_argument(
    t_handler_2<t_button*, t_creature_stack*> arg_0,
    t_creature_stack* arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:23409
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_button*, t_creature_stack*>::~t_handler_2<t_button*, t_creature_stack*>()
{
    // Body unavailable.
}

// name:A; map symbol; map:23410
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_2<t_button*, t_creature_stack*>>::~t_counted_ptr<t_handler_base_2<t_button*, t_creature_stack*>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:23416
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_button*, t_creature_stack*>::t_handler_2<t_button*, t_creature_stack*>(
    t_handler_base_2<t_button*, t_creature_stack*>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:23417
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_button*, t_creature_stack*>* t_handler_2<t_button*, t_creature_stack*>::operator t_handler_base_2<t_button*, t_creature_stack*>*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:23418
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_2<t_creature_select_window, t_button*, t_creature_stack*>::t_bound_handler_2<t_creature_select_window, t_button*, t_creature_stack*>(
    t_creature_select_window& arg_0,
    void (t_creature_select_window::*)(t_button*, t_creature_stack*)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:23419
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_2<t_creature_select_window, t_button*, t_creature_stack*>::operator()(
    t_button* arg_0,
    t_creature_stack* arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:23420
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_add_2nd_handler_1<t_button*, t_creature_stack*>::t_add_2nd_handler_1<t_button*, t_creature_stack*>(
    t_handler_base_2<t_button*, t_creature_stack*>* arg_0,
    t_creature_stack* arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:23421
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_add_2nd_handler_1<t_button*, t_creature_stack*>::operator()(t_button* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:23422
VA_CHT_1_COMPGEN(0x006183a0, 0x1e, SCALAR_DELETING_DTOR, "t_bound_handler_2<t_creature_select_window, t_button*, t_creature_stack*>")

// name:A; map symbol; map:23423
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_creature_select_window, t_button*, t_creature_stack*>")

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23424
VA_CHT_1(0x00618430, 0x58)
t_handler_base_2<t_button*, t_creature_stack*>::t_handler_base_2<t_button*, t_creature_stack*>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:23425
VA_CHT_1_COMPGEN(0x006183e0, 0x1e, SCALAR_DELETING_DTOR, "t_add_2nd_handler_1<t_button*, t_creature_stack*>")

// name:A; map symbol; map:23426
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_add_2nd_handler_1<t_button*, t_creature_stack*>")

// name:A; map symbol; map:23427
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_2<t_creature_select_window, t_button*, t_creature_stack*>::~t_bound_handler_2<t_creature_select_window, t_button*, t_creature_stack*>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:23428
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_button*, t_creature_stack*>::~t_handler_base_2<t_button*, t_creature_stack*>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:23429
VA_CHT_1(0x00618400, 0x21)
t_abstract_function_2<void, t_button*, t_creature_stack*>::~t_abstract_function_2<void, t_button*, t_creature_stack*>(

)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:23430
VA_CHT_1_COMPGEN(0x006183c0, 0x20, SCALAR_DELETING_DTOR, "t_abstract_function_2<void, t_button*, t_creature_stack*>")

// name:A; map symbol; map:23431
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_abstract_function_2<void, t_button*, t_creature_stack*>")

// name:A; map symbol; map:23432
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_handler_base_2<t_button*, t_creature_stack*>")

// name:A; map symbol; map:23433
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_handler_base_2<t_button*, t_creature_stack*>")

// name:A; map symbol; map:23434
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_function_2<void, t_button*, t_creature_stack*>::t_abstract_function_2<void, t_button*, t_creature_stack*>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:23435
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_add_2nd_handler_1<t_button*, t_creature_stack*>::~t_add_2nd_handler_1<t_button*, t_creature_stack*>()
{
    // Body unavailable.
}

// name:A; map symbol; map:23436
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_handler_2<t_button*, t_creature_stack*>::operator()(t_button* arg_0, t_creature_stack* arg_1) const
{
    // Body unavailable.
}

// name:A; map symbol; map:23437
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_2<t_button*, t_creature_stack*>>::t_counted_ptr<t_handler_base_2<t_button*, t_creature_stack*>>(
    t_handler_base_2<t_button*, t_creature_stack*>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:23438
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_button*, t_creature_stack*>* t_counted_ptr<t_handler_base_2<t_button*, t_creature_stack*>>::operator t_handler_base_2<t_button*, t_creature_stack*>*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:23439
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_button*, t_creature_stack*>& t_counted_ptr<t_handler_base_2<t_button*, t_creature_stack*>>::operator*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:23440
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_creature_select_window, t_button*, t_creature_stack*>")

// name:A; map symbol; map:23441
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_handler_base_2<t_button*, t_creature_stack*>")

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23442
VA_CHT_1_COMPGEN(0x006184c0, 0x8, VECTOR_DELETING_DTOR, "t_add_2nd_handler_1<t_button*, t_creature_stack*>")

// === .rdata (9 symbols) ===

// confidence:A; rtti-name; map:44189
DATA_CHT_1_COMPGEN(0x008dedb4, "const t_creature_select_window::`vftable'")

// confidence:A; rtti-name; map:44190
DATA_CHT_1_COMPGEN(0x008dee24, "const t_creature_toggle_window::`vftable'")

// confidence:A; rtti-name; map:44191
DATA_CHT_1_COMPGEN(0x008dee90, "const t_bound_handler_2<t_creature_select_window, t_button*, t_creature_stack*>::`vftable'{for `t_abstract_function_2<void, t_button*, t_creature_stack*>'}")

// confidence:B; rtti-order; map:44192
DATA_CHT_1_COMPGEN(0x008dee9c, "const t_bound_handler_2<t_creature_select_window, t_button*, t_creature_stack*>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:44193
DATA_CHT_1_COMPGEN(0x008deeb0, "const t_add_2nd_handler_1<t_button*, t_creature_stack*>::`vftable'{for `t_abstract_function_1<void, t_button*>'}")

// confidence:B; rtti-order; map:44194
DATA_CHT_1_COMPGEN(0x008deebc, "const t_add_2nd_handler_1<t_button*, t_creature_stack*>::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:44195
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_2<t_button*, t_creature_stack*>::`vftable'{for `t_abstract_function_2<void, t_button*, t_creature_stack*>'}")

// name:A; map symbol; map:44196
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_2<t_button*, t_creature_stack*>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:44197
DATA_CHT_1_COMPGEN(0x008deea4, "const t_abstract_function_2<void, t_button*, t_creature_stack*>::`vftable'")

// === .rdata$r (28 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_creature_select_window@@;bcd=507bfc;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:51592
DATA_CHT_1_COMPGEN(0x00907bfc, "t_creature_select_window::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_creature_select_window@@;vft=4dedb4;col=507c38;td=59e100;chd=507c28;offset=0;cdOffset=0;validated-hierarchy; map:51593
DATA_CHT_1_COMPGEN(0x00907c14, "t_creature_select_window::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_creature_select_window@@;vft=4dedb4;col=507c38;td=59e100;chd=507c28;offset=0;cdOffset=0;validated-hierarchy; map:51594
DATA_CHT_1_COMPGEN(0x00907c28, "t_creature_select_window::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_creature_select_window@@;vft=4dedb4;col=507c38;td=59e100;chd=507c28;offset=0;cdOffset=0;validated-hierarchy; map:51595
DATA_CHT_1_COMPGEN(0x00907c38, "const t_creature_select_window::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_creature_toggle_window@@;bcd=507c4c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:51596
DATA_CHT_1_COMPGEN(0x00907c4c, "t_creature_toggle_window::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_creature_toggle_window@@;vft=4dee24;col=507c8c;td=59e138;chd=507c7c;offset=0;cdOffset=0;validated-hierarchy; map:51597
DATA_CHT_1_COMPGEN(0x00907c64, "t_creature_toggle_window::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_creature_toggle_window@@;vft=4dee24;col=507c8c;td=59e138;chd=507c7c;offset=0;cdOffset=0;validated-hierarchy; map:51598
DATA_CHT_1_COMPGEN(0x00907c7c, "t_creature_toggle_window::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_creature_toggle_window@@;vft=4dee24;col=507c8c;td=59e138;chd=507c7c;offset=0;cdOffset=0;validated-hierarchy; map:51599
DATA_CHT_1_COMPGEN(0x00907c8c, "const t_creature_toggle_window::`RTTI Complete Object Locator'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_2@Vt_creature_select_window@@PAVt_button@@PAVt_creature_stack@@@@;vft=4dee90;col=507d64;td=59e1f8;chd=507d54;offset=8;cdOffset=0;validated-hierarchy; map:51600
DATA_CHT_1_COMPGEN(0x00907d64, "const t_bound_handler_2<t_creature_select_window, t_button*, t_creature_stack*>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_button*, t_creature_stack*>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_2@XPAVt_button@@PAVt_creature_stack@@@@;bcd=507cf8;pmd=8,-1,0;attributes=0;validated-hierarchy-link; map:51601
DATA_CHT_1_COMPGEN(0x00907cf8, "t_abstract_function_2<void, t_button*, t_creature_stack*>::`RTTI Base Class Descriptor at (8, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_handler_base_2@PAVt_button@@PAVt_creature_stack@@@@;bcd=507d10;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:51602
DATA_CHT_1_COMPGEN(0x00907d10, "t_handler_base_2<t_button*, t_creature_stack*>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_2@Vt_creature_select_window@@PAVt_button@@PAVt_creature_stack@@@@;bcd=507d28;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:51603
DATA_CHT_1_COMPGEN(0x00907d28, "t_bound_handler_2<t_creature_select_window, t_button*, t_creature_stack*>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_2@Vt_creature_select_window@@PAVt_button@@PAVt_creature_stack@@@@;vft=4dee90;col=507d64;td=59e1f8;chd=507d54;offset=8;cdOffset=0;validated-hierarchy; map:51604
DATA_CHT_1_COMPGEN(0x00907d40, "t_bound_handler_2<t_creature_select_window, t_button*, t_creature_stack*>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_2@Vt_creature_select_window@@PAVt_button@@PAVt_creature_stack@@@@;vft=4dee90;col=507d64;td=59e1f8;chd=507d54;offset=8;cdOffset=0;validated-hierarchy; map:51605
DATA_CHT_1_COMPGEN(0x00907d54, "t_bound_handler_2<t_creature_select_window, t_button*, t_creature_stack*>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:51606
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_2<t_creature_select_window, t_button*, t_creature_stack*>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_add_2nd_handler_1@PAVt_button@@PAVt_creature_stack@@@@;vft=4deeb0;col=507dc8;td=59e258;chd=507db8;offset=8;cdOffset=0;validated-hierarchy; map:51607
DATA_CHT_1_COMPGEN(0x00907dc8, "const t_add_2nd_handler_1<t_button*, t_creature_stack*>::`RTTI Complete Object Locator'{for `t_abstract_function_1<void, t_button*>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_add_2nd_handler_1@PAVt_button@@PAVt_creature_stack@@@@;bcd=507d8c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:51608
DATA_CHT_1_COMPGEN(0x00907d8c, "t_add_2nd_handler_1<t_button*, t_creature_stack*>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_add_2nd_handler_1@PAVt_button@@PAVt_creature_stack@@@@;vft=4deeb0;col=507dc8;td=59e258;chd=507db8;offset=8;cdOffset=0;validated-hierarchy; map:51609
DATA_CHT_1_COMPGEN(0x00907da4, "t_add_2nd_handler_1<t_button*, t_creature_stack*>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_add_2nd_handler_1@PAVt_button@@PAVt_creature_stack@@@@;vft=4deeb0;col=507dc8;td=59e258;chd=507db8;offset=8;cdOffset=0;validated-hierarchy; map:51610
DATA_CHT_1_COMPGEN(0x00907db8, "t_add_2nd_handler_1<t_button*, t_creature_stack*>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:51611
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_add_2nd_handler_1<t_button*, t_creature_stack*>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// name:A; map symbol; map:51612
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_2<t_button*, t_creature_stack*>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_button*, t_creature_stack*>'}")

// name:A; map symbol; map:51613
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_handler_base_2<t_button*, t_creature_stack*>::`RTTI Base Class Array'")

// name:A; map symbol; map:51614
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_handler_base_2<t_button*, t_creature_stack*>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:51615
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_2<t_button*, t_creature_stack*>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_2@XPAVt_button@@PAVt_creature_stack@@@@;bcd=507ca0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:51616
DATA_CHT_1_COMPGEN(0x00907ca0, "t_abstract_function_2<void, t_button*, t_creature_stack*>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_function_2@XPAVt_button@@PAVt_creature_stack@@@@;vft=4deea4;col=507cd0;td=59e160;chd=507cc0;offset=0;cdOffset=0;validated-hierarchy; map:51617
DATA_CHT_1_COMPGEN(0x00907cb8, "t_abstract_function_2<void, t_button*, t_creature_stack*>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_function_2@XPAVt_button@@PAVt_creature_stack@@@@;vft=4deea4;col=507cd0;td=59e160;chd=507cc0;offset=0;cdOffset=0;validated-hierarchy; map:51618
DATA_CHT_1_COMPGEN(0x00907cc0, "t_abstract_function_2<void, t_button*, t_creature_stack*>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_function_2@XPAVt_button@@PAVt_creature_stack@@@@;vft=4deea4;col=507cd0;td=59e160;chd=507cc0;offset=0;cdOffset=0;validated-hierarchy; map:51619
DATA_CHT_1_COMPGEN(0x00907cd0, "const t_abstract_function_2<void, t_button*, t_creature_stack*>::`RTTI Complete Object Locator'")

// === .data (6 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_creature_select_window@@;td=59e100;validated-header; map:58401
DATA_CHT_1_COMPGEN(0x0099e100, "t_creature_select_window `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_creature_toggle_window@@;td=59e138;validated-header; map:58402
DATA_CHT_1_COMPGEN(0x0099e138, "t_creature_toggle_window `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_function_2@XPAVt_button@@PAVt_creature_stack@@@@;td=59e160;validated-header; map:58403
DATA_CHT_1_COMPGEN(0x0099e160, "t_abstract_function_2<void, t_button*, t_creature_stack*> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_handler_base_2@PAVt_button@@PAVt_creature_stack@@@@;td=59e1b0;validated-header; map:58404
DATA_CHT_1_COMPGEN(0x0099e1b0, "t_handler_base_2<t_button*, t_creature_stack*> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_2@Vt_creature_select_window@@PAVt_button@@PAVt_creature_stack@@@@;td=59e1f8;validated-header; map:58405
DATA_CHT_1_COMPGEN(0x0099e1f8, "t_bound_handler_2<t_creature_select_window, t_button*, t_creature_stack*> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_add_2nd_handler_1@PAVt_button@@PAVt_creature_stack@@@@;td=59e258;validated-header; map:58406
DATA_CHT_1_COMPGEN(0x0099e258, "t_add_2nd_handler_1<t_button*, t_creature_stack*> `RTTI Type Descriptor'")

// === .bss (1 symbols) ===

// confidence:B; dyninit-global; owner-conf-B; map:60190
DATA_CHT_1(0x009e6728)
t_bitmap_group_cache const k_creature_select_bitmaps; // Initial value unavailable.
