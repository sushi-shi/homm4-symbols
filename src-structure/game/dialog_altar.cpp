// dialog_altar.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 51/91 (A:27 B:3 C:0); unaccounted 40; skipped std 8.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (53 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66783; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00630770, 0x15, STATIC_INIT_DISPATCH, "dialog_altar#1")

// name:C; dyninit; see ledger; map:66784
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "dialog_altar#1")

// confidence:D; dyninit-init; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:66785; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00630790, 0x11, STATIC_INIT_DISPATCH, k_altars_bitmaps)

// confidence:D; dyninit-ctor; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:66786; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006307b0, 0xd7, STATIC_CTOR, k_altars_bitmaps)

// name:B; dyninit; see ledger; map:66787
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, k_altars_bitmaps)

// confidence:D; dyninit-dtor; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:66788; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00630890, 0xa, STATIC_DTOR, k_altars_bitmaps)

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:23863
VA_CHT_1(0x006308a0, 0x68)
t_dialog_altar::t_dialog_altar(t_window* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23864
VA_CHT_1(0x00630a00, 0x12f9)
int t_dialog_altar::init_dialog(
    std::vector<t_hero*, std::allocator<t_hero*>> const& arg_0,
    t_skill_type arg_1,
    t_stationary_adventure_object* arg_2
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23865
VA_CHT_1(0x00631d00, 0x6e)
void t_dialog_altar::hero_selection_change(t_creature_select_window* arg_0, t_creature_stack* arg_1)
{
    // Body unavailable.
}

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66789; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00631d70, 0x11, STATIC_INIT_DISPATCH, "dialog_altar#3")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66790; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00631d90, 0xd1, STATIC_CTOR, "dialog_altar#3")

// name:C; dyninit; see ledger; map:66791
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "dialog_altar#3")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66792; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00631e70, 0xa, STATIC_DTOR, "dialog_altar#3")

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23866
VA_CHT_1(0x00631e80, 0x49a)
void t_dialog_altar::close_click(t_button* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23867
VA_CHT_1(0x00632320, 0x14)
void t_dialog_altar::cancel_click(t_button* arg_0)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:66793; name:B (dyninit; see ledger)
VA_CHT_1(0x00632500, 0x20)
// dialog_altar$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:66795; name:B (dyninit; see ledger)
VA_CHT_1(0x00632520, 0x5c)
// dialog_altar$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:66796
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// dialog_altar$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:66797
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// dialog_altar$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:66798
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// dialog_altar$tatexit4
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:23868
VA_CHT_1_COMPGEN(0x00630910, 0x1e, SCALAR_DELETING_DTOR, t_dialog_altar)

// name:A; map symbol; map:23869
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_dialog_altar)

// name:A; map symbol; map:23870
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_dialog_altar::~t_dialog_altar()
{
    // Body unavailable.
}

// name:A; map symbol; map:23871
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_creature_select_window::set_handler(t_handler_2<t_creature_select_window*, t_creature_stack*> arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:23872
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_creature_select_window*, t_creature_stack*>& t_handler_2<t_creature_select_window*, t_creature_stack*>::operator=(
    t_handler_2<t_creature_select_window*, t_creature_stack*> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:23873
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_creature_select_window::get_count() const
{
    // Body unavailable.
}

// name:A; map symbol; map:23874
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_creature_stack* t_creature_select_window::get_creature(int arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:23881
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_2<t_creature_select_window*, t_creature_stack*>>& t_counted_ptr<t_handler_base_2<t_creature_select_window*, t_creature_stack*>>::operator=(
    t_counted_ptr<t_handler_base_2<t_creature_select_window*, t_creature_stack*>> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:23882
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_creature_select_window*, t_creature_stack*> bound_handler(
    t_dialog_altar& arg_0,
    void (t_dialog_altar::*)(t_creature_select_window*, t_creature_stack*)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:23883
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<t_button*> bound_handler(t_dialog_altar& arg_0, void (t_dialog_altar::*)(t_button*))
{
    // Body unavailable.
}

// name:A; map symbol; map:23885
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_creature_select_window*, t_creature_stack*>::t_handler_2<t_creature_select_window*, t_creature_stack*>(
    t_handler_base_2<t_creature_select_window*, t_creature_stack*>* arg_0
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:23886
VA_CHT_1(0x00632420, 0x5e)
t_bound_handler_2<t_dialog_altar, t_creature_select_window*, t_creature_stack*>::t_bound_handler_2<t_dialog_altar, t_creature_select_window*, t_creature_stack*>(
    t_dialog_altar& arg_0,
    void (t_dialog_altar::*)(t_creature_select_window*, t_creature_stack*)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:23887
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_2<t_dialog_altar, t_creature_select_window*, t_creature_stack*>::operator()(
    t_creature_select_window* arg_0,
    t_creature_stack* arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:23888
VA_CHT_1(0x00632480, 0x5e)
t_bound_handler_1<t_dialog_altar, t_button*>::t_bound_handler_1<t_dialog_altar, t_button*>(
    t_dialog_altar& arg_0,
    void (t_dialog_altar::*)(t_button*)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:23889
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_1<t_dialog_altar, t_button*>::operator()(t_button* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:23890
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_2<t_dialog_altar, t_creature_select_window*, t_creature_stack*>")

// name:A; map symbol; map:23891
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_dialog_altar, t_creature_select_window*, t_creature_stack*>")

// name:A; map symbol; map:23892
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_creature_select_window*, t_creature_stack*>::t_handler_base_2<t_creature_select_window*, t_creature_stack*>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:23893
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_1<t_dialog_altar, t_button*>")

// name:A; map symbol; map:23894
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_1<t_dialog_altar, t_button*>")

// name:A; map symbol; map:23895
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_2<t_dialog_altar, t_creature_select_window*, t_creature_stack*>::~t_bound_handler_2<t_dialog_altar, t_creature_select_window*, t_creature_stack*>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:23896
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_creature_select_window*, t_creature_stack*>::~t_handler_base_2<t_creature_select_window*, t_creature_stack*>(

)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:23897
VA_CHT_1(0x006872b0, 0x21)
t_abstract_function_2<void, t_creature_select_window*, t_creature_stack*>::~t_abstract_function_2<void, t_creature_select_window*, t_creature_stack*>(

)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:23898
VA_CHT_1_COMPGEN(0x006324e0, 0x20, VECTOR_DELETING_DTOR, "t_abstract_function_2<void, t_creature_select_window*, t_creature_stack*>")

// name:A; map symbol; map:23899
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_abstract_function_2<void, t_creature_select_window*, t_creature_stack*>")

// name:A; map symbol; map:23900
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_handler_base_2<t_creature_select_window*, t_creature_stack*>")

// name:A; map symbol; map:23901
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_handler_base_2<t_creature_select_window*, t_creature_stack*>")

// name:A; map symbol; map:23902
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_function_2<void, t_creature_select_window*, t_creature_stack*>::t_abstract_function_2<void, t_creature_select_window*, t_creature_stack*>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:23903
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_1<t_dialog_altar, t_button*>::~t_bound_handler_1<t_dialog_altar, t_button*>()
{
    // Body unavailable.
}

// name:A; map symbol; map:23904
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_2<t_creature_select_window*, t_creature_stack*>>::t_counted_ptr<t_handler_base_2<t_creature_select_window*, t_creature_stack*>>(
    t_handler_base_2<t_creature_select_window*, t_creature_stack*>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:23905
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_dialog_altar, t_creature_select_window*, t_creature_stack*>")

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23906
VA_CHT_1_COMPGEN(0x00632580, 0x8, VECTOR_DELETING_DTOR, "t_handler_base_2<t_creature_select_window*, t_creature_stack*>")

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23907
VA_CHT_1_COMPGEN(0x00632590, 0x8, VECTOR_DELETING_DTOR, "t_bound_handler_1<t_dialog_altar, t_button*>")

// === .rdata (8 symbols) ===

// confidence:A; rtti-name; map:44210
DATA_CHT_1_COMPGEN(0x008df3fc, "const t_dialog_altar::`vftable'")

// confidence:A; rtti-name; map:44211
DATA_CHT_1_COMPGEN(0x008df468, "const t_bound_handler_2<t_dialog_altar, t_creature_select_window*, t_creature_stack*>::`vftable'{for `t_abstract_function_2<void, t_creature_select_window*, t_creature_stack*>'}")

// confidence:B; rtti-order; map:44212
DATA_CHT_1_COMPGEN(0x008df474, "const t_bound_handler_2<t_dialog_altar, t_creature_select_window*, t_creature_stack*>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:44213
DATA_CHT_1_COMPGEN(0x008df488, "const t_bound_handler_1<t_dialog_altar, t_button*>::`vftable'{for `t_abstract_function_1<void, t_button*>'}")

// confidence:B; rtti-order; map:44214
DATA_CHT_1_COMPGEN(0x008df494, "const t_bound_handler_1<t_dialog_altar, t_button*>::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:44215
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_2<t_creature_select_window*, t_creature_stack*>::`vftable'{for `t_abstract_function_2<void, t_creature_select_window*, t_creature_stack*>'}")

// name:A; map symbol; map:44216
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_2<t_creature_select_window*, t_creature_stack*>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:44217
DATA_CHT_1_COMPGEN(0x008df47c, "const t_abstract_function_2<void, t_creature_select_window*, t_creature_stack*>::`vftable'")

// === .rdata$r (24 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_dialog_altar@@;bcd=50809c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:51649
DATA_CHT_1_COMPGEN(0x0090809c, "t_dialog_altar::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_dialog_altar@@;vft=4df3fc;col=5080d8;td=59ea60;chd=5080c8;offset=0;cdOffset=0;validated-hierarchy; map:51650
DATA_CHT_1_COMPGEN(0x009080b4, "t_dialog_altar::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_dialog_altar@@;vft=4df3fc;col=5080d8;td=59ea60;chd=5080c8;offset=0;cdOffset=0;validated-hierarchy; map:51651
DATA_CHT_1_COMPGEN(0x009080c8, "t_dialog_altar::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_dialog_altar@@;vft=4df3fc;col=5080d8;td=59ea60;chd=5080c8;offset=0;cdOffset=0;validated-hierarchy; map:51652
DATA_CHT_1_COMPGEN(0x009080d8, "const t_dialog_altar::`RTTI Complete Object Locator'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_2@Vt_dialog_altar@@PAVt_creature_select_window@@PAVt_creature_stack@@@@;vft=4df468;col=5081b0;td=59eb70;chd=5081a0;offset=8;cdOffset=0;validated-hierarchy; map:51653
DATA_CHT_1_COMPGEN(0x009081b0, "const t_bound_handler_2<t_dialog_altar, t_creature_select_window*, t_creature_stack*>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_creature_select_window*, t_creature_stack*>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_2@XPAVt_creature_select_window@@PAVt_creature_stack@@@@;bcd=508144;pmd=8,-1,0;attributes=0;validated-hierarchy-link; map:51654
DATA_CHT_1_COMPGEN(0x00908144, "t_abstract_function_2<void, t_creature_select_window*, t_creature_stack*>::`RTTI Base Class Descriptor at (8, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_handler_base_2@PAVt_creature_select_window@@PAVt_creature_stack@@@@;bcd=50815c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:51655
DATA_CHT_1_COMPGEN(0x0090815c, "t_handler_base_2<t_creature_select_window*, t_creature_stack*>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_2@Vt_dialog_altar@@PAVt_creature_select_window@@PAVt_creature_stack@@@@;bcd=508174;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:51656
DATA_CHT_1_COMPGEN(0x00908174, "t_bound_handler_2<t_dialog_altar, t_creature_select_window*, t_creature_stack*>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_2@Vt_dialog_altar@@PAVt_creature_select_window@@PAVt_creature_stack@@@@;vft=4df468;col=5081b0;td=59eb70;chd=5081a0;offset=8;cdOffset=0;validated-hierarchy; map:51657
DATA_CHT_1_COMPGEN(0x0090818c, "t_bound_handler_2<t_dialog_altar, t_creature_select_window*, t_creature_stack*>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_2@Vt_dialog_altar@@PAVt_creature_select_window@@PAVt_creature_stack@@@@;vft=4df468;col=5081b0;td=59eb70;chd=5081a0;offset=8;cdOffset=0;validated-hierarchy; map:51658
DATA_CHT_1_COMPGEN(0x009081a0, "t_bound_handler_2<t_dialog_altar, t_creature_select_window*, t_creature_stack*>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:51659
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_2<t_dialog_altar, t_creature_select_window*, t_creature_stack*>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_1@Vt_dialog_altar@@PAVt_button@@@@;vft=4df488;col=508214;td=59ebd8;chd=508204;offset=8;cdOffset=0;validated-hierarchy; map:51660
DATA_CHT_1_COMPGEN(0x00908214, "const t_bound_handler_1<t_dialog_altar, t_button*>::`RTTI Complete Object Locator'{for `t_abstract_function_1<void, t_button*>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_1@Vt_dialog_altar@@PAVt_button@@@@;bcd=5081d8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:51661
DATA_CHT_1_COMPGEN(0x009081d8, "t_bound_handler_1<t_dialog_altar, t_button*>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_1@Vt_dialog_altar@@PAVt_button@@@@;vft=4df488;col=508214;td=59ebd8;chd=508204;offset=8;cdOffset=0;validated-hierarchy; map:51662
DATA_CHT_1_COMPGEN(0x009081f0, "t_bound_handler_1<t_dialog_altar, t_button*>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_1@Vt_dialog_altar@@PAVt_button@@@@;vft=4df488;col=508214;td=59ebd8;chd=508204;offset=8;cdOffset=0;validated-hierarchy; map:51663
DATA_CHT_1_COMPGEN(0x00908204, "t_bound_handler_1<t_dialog_altar, t_button*>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:51664
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_1<t_dialog_altar, t_button*>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// name:A; map symbol; map:51665
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_2<t_creature_select_window*, t_creature_stack*>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_creature_select_window*, t_creature_stack*>'}")

// name:A; map symbol; map:51666
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_handler_base_2<t_creature_select_window*, t_creature_stack*>::`RTTI Base Class Array'")

// name:A; map symbol; map:51667
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_handler_base_2<t_creature_select_window*, t_creature_stack*>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:51668
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_2<t_creature_select_window*, t_creature_stack*>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_2@XPAVt_creature_select_window@@PAVt_creature_stack@@@@;bcd=5080ec;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:51669
DATA_CHT_1_COMPGEN(0x009080ec, "t_abstract_function_2<void, t_creature_select_window*, t_creature_stack*>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_function_2@XPAVt_creature_select_window@@PAVt_creature_stack@@@@;vft=4df47c;col=50811c;td=59eab8;chd=50810c;offset=0;cdOffset=0;validated-hierarchy; map:51670
DATA_CHT_1_COMPGEN(0x00908104, "t_abstract_function_2<void, t_creature_select_window*, t_creature_stack*>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_function_2@XPAVt_creature_select_window@@PAVt_creature_stack@@@@;vft=4df47c;col=50811c;td=59eab8;chd=50810c;offset=0;cdOffset=0;validated-hierarchy; map:51671
DATA_CHT_1_COMPGEN(0x0090810c, "t_abstract_function_2<void, t_creature_select_window*, t_creature_stack*>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_function_2@XPAVt_creature_select_window@@PAVt_creature_stack@@@@;vft=4df47c;col=50811c;td=59eab8;chd=50810c;offset=0;cdOffset=0;validated-hierarchy; map:51672
DATA_CHT_1_COMPGEN(0x0090811c, "const t_abstract_function_2<void, t_creature_select_window*, t_creature_stack*>::`RTTI Complete Object Locator'")

// === .data (5 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_dialog_altar@@;td=59ea60;validated-header; map:58413
DATA_CHT_1_COMPGEN(0x0099ea60, "t_dialog_altar `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_function_2@XPAVt_creature_select_window@@PAVt_creature_stack@@@@;td=59eab8;validated-header; map:58414
DATA_CHT_1_COMPGEN(0x0099eab8, "t_abstract_function_2<void, t_creature_select_window*, t_creature_stack*> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_handler_base_2@PAVt_creature_select_window@@PAVt_creature_stack@@@@;td=59eb18;validated-header; map:58415
DATA_CHT_1_COMPGEN(0x0099eb18, "t_handler_base_2<t_creature_select_window*, t_creature_stack*> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_2@Vt_dialog_altar@@PAVt_creature_select_window@@PAVt_creature_stack@@@@;td=59eb70;validated-header; map:58416
DATA_CHT_1_COMPGEN(0x0099eb70, "t_bound_handler_2<t_dialog_altar, t_creature_select_window*, t_creature_stack*> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_1@Vt_dialog_altar@@PAVt_button@@@@;td=59ebd8;validated-header; map:58417
DATA_CHT_1_COMPGEN(0x0099ebd8, "t_bound_handler_1<t_dialog_altar, t_button*> `RTTI Type Descriptor'")

// === .bss (1 symbols) ===

// confidence:B; dyninit-global; owner-conf-B; map:60199
DATA_CHT_1(0x009ecf70)
t_bitmap_group_cache k_altars_bitmaps; // Initial value unavailable.
