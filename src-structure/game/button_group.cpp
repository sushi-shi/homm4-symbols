// button_group.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 38/77 (A:21 B:2 C:0); unaccounted 39; skipped std 16.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (46 symbols) ===

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:18541
VA_CHT_1(0x00584460, 0x134)
void t_button_group::add(t_toggle_button* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:18542
VA_CHT_1(0x005845a0, 0x94)
void t_button_group::clicked(t_button* arg_0, t_handler_1<t_button*> arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:18543
VA_CHT_1(0x00584640, 0x3d)
void t_button_group::enable(bool arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:18544
VA_CHT_1(0x00584680, 0x29)
void t_button_group::enable(int arg_0, bool arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:18545
VA_CHT_1(0x005846e0, 0x2b)
void t_button_group::select(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:18546
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_button_group::set_visible(int arg_0, bool arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:18547
VA_CHT_1(0x00584710, 0x57)
void t_button_group::set_visible(bool arg_0)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:68875; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00584ac0, 0x20, STATIC_INIT_DISPATCH, button_group)

// name:A; map symbol; map:18548
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<t_button*> t_button::get_click_handler() const
{
    // Body unavailable.
}

// name:A; map symbol; map:18549
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<t_button*>::t_handler_1<t_button*>(t_handler_1<t_button*> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:18561
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_1<t_button*>>::t_counted_ptr<t_handler_base_1<t_button*>>(
    t_counted_ptr<t_handler_base_1<t_button*>> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:18562
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_button*, t_handler_1<t_button*>> bound_handler(
    t_button_group& arg_0,
    void (t_button_group::*)(t_button*, t_handler_1<t_button*>)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:18563
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<t_button*> add_2nd_argument(
    t_handler_2<t_button*, t_handler_1<t_button*>> arg_0,
    t_handler_1<t_button*> arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:18564
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_button*, t_handler_1<t_button*>>::~t_handler_2<t_button*, t_handler_1<t_button*>>()
{
    // Body unavailable.
}

// name:A; map symbol; map:18565
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_2<t_button*, t_handler_1<t_button*>>>::~t_counted_ptr<t_handler_base_2<t_button*, t_handler_1<t_button*>>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:18566
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_toggle_button>::t_counted_ptr<t_toggle_button>(t_toggle_button* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:18567
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_toggle_button* t_counted_ptr<t_toggle_button>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:18572
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_button*, t_handler_1<t_button*>>::t_handler_2<t_button*, t_handler_1<t_button*>>(
    t_handler_base_2<t_button*, t_handler_1<t_button*>>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:18573
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_button*, t_handler_1<t_button*>>* t_handler_2<t_button*, t_handler_1<t_button*>>::operator t_handler_base_2<t_button*, t_handler_1<t_button*>>*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:18574
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_2<t_button_group, t_button*, t_handler_1<t_button*>>::t_bound_handler_2<t_button_group, t_button*, t_handler_1<t_button*>>(
    t_button_group& arg_0,
    void (t_button_group::*)(t_button*, t_handler_1<t_button*>)
)
{
    // Body unavailable.
}

// confidence:D; align-band; vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:18575
VA_CHT_1(0x005848a0, 0x6f)
void t_bound_handler_2<t_button_group, t_button*, t_handler_1<t_button*>>::operator()(
    t_button* arg_0,
    t_handler_1<t_button*> arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-band; stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:18576
VA_CHT_1(0x00584770, 0x128)
t_add_2nd_handler_1<t_button*, t_handler_1<t_button*>>::t_add_2nd_handler_1<t_button*, t_handler_1<t_button*>>(
    t_handler_base_2<t_button*, t_handler_1<t_button*>>* arg_0,
    t_handler_1<t_button*> arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:18577
VA_CHT_1(0x00584910, 0x93)
void t_add_2nd_handler_1<t_button*, t_handler_1<t_button*>>::operator()(t_button* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:18578
VA_CHT_1_COMPGEN(0x005849b0, 0x1e, SCALAR_DELETING_DTOR, "t_bound_handler_2<t_button_group, t_button*, t_handler_1<t_button*>>")

// name:A; map symbol; map:18579
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_button_group, t_button*, t_handler_1<t_button*>>")

// name:A; map symbol; map:18580
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_button*, t_handler_1<t_button*>>::t_handler_base_2<t_button*, t_handler_1<t_button*>>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:18581
VA_CHT_1_COMPGEN(0x005849f0, 0x1e, VECTOR_DELETING_DTOR, "t_add_2nd_handler_1<t_button*, t_handler_1<t_button*>>")

// name:A; map symbol; map:18582
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_add_2nd_handler_1<t_button*, t_handler_1<t_button*>>")

// name:A; map symbol; map:18583
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_2<t_button_group, t_button*, t_handler_1<t_button*>>::~t_bound_handler_2<t_button_group, t_button*, t_handler_1<t_button*>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:18584
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_button*, t_handler_1<t_button*>>::~t_handler_base_2<t_button*, t_handler_1<t_button*>>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:18585
VA_CHT_1(0x00584a10, 0x21)
t_abstract_function_2<void, t_button*, t_handler_1<t_button*>>::~t_abstract_function_2<void, t_button*, t_handler_1<t_button*>>(

)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:18586
VA_CHT_1_COMPGEN(0x005849d0, 0x20, VECTOR_DELETING_DTOR, "t_abstract_function_2<void, t_button*, t_handler_1<t_button*>>")

// name:A; map symbol; map:18587
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_abstract_function_2<void, t_button*, t_handler_1<t_button*>>")

// name:A; map symbol; map:18588
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_handler_base_2<t_button*, t_handler_1<t_button*>>")

// name:A; map symbol; map:18589
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_handler_base_2<t_button*, t_handler_1<t_button*>>")

// name:A; map symbol; map:18590
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_function_2<void, t_button*, t_handler_1<t_button*>>::t_abstract_function_2<void, t_button*, t_handler_1<t_button*>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:18591
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_add_2nd_handler_1<t_button*, t_handler_1<t_button*>>::~t_add_2nd_handler_1<t_button*, t_handler_1<t_button*>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:18592
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_handler_2<t_button*, t_handler_1<t_button*>>::operator()(
    t_button* arg_0,
    t_handler_1<t_button*> arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:18593
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_toggle_button>::t_counted_ptr<t_toggle_button>(t_counted_ptr<t_toggle_button> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:18594
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_toggle_button>& t_counted_ptr<t_toggle_button>::operator=(
    t_counted_ptr<t_toggle_button> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:18595
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_2<t_button*, t_handler_1<t_button*>>>::t_counted_ptr<t_handler_base_2<t_button*, t_handler_1<t_button*>>>(
    t_handler_base_2<t_button*, t_handler_1<t_button*>>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:18596
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_button*, t_handler_1<t_button*>>* t_counted_ptr<t_handler_base_2<t_button*, t_handler_1<t_button*>>>::operator t_handler_base_2<t_button*, t_handler_1<t_button*>>*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:18597
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_button*, t_handler_1<t_button*>>& t_counted_ptr<t_handler_base_2<t_button*, t_handler_1<t_button*>>>::operator*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:18598
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_add_2nd_handler_1<t_button*, t_handler_1<t_button*>>")

// name:A; map symbol; map:18599
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_handler_base_2<t_button*, t_handler_1<t_button*>>")

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:18600
VA_CHT_1_COMPGEN(0x00584af0, 0x8, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_button_group, t_button*, t_handler_1<t_button*>>")

// === .rdata (7 symbols) ===

// confidence:A; rtti-name; map:43785
DATA_CHT_1_COMPGEN(0x008d8494, "const t_bound_handler_2<t_button_group, t_button*, t_handler_1<t_button*>>::`vftable'{for `t_abstract_function_2<void, t_button*, t_handler_1<t_button*>>'}")

// confidence:B; rtti-order; map:43786
DATA_CHT_1_COMPGEN(0x008d84a0, "const t_bound_handler_2<t_button_group, t_button*, t_handler_1<t_button*>>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:43787
DATA_CHT_1_COMPGEN(0x008d84b4, "const t_add_2nd_handler_1<t_button*, t_handler_1<t_button*>>::`vftable'{for `t_abstract_function_1<void, t_button*>'}")

// confidence:B; rtti-order; map:43788
DATA_CHT_1_COMPGEN(0x008d84c0, "const t_add_2nd_handler_1<t_button*, t_handler_1<t_button*>>::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:43789
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_2<t_button*, t_handler_1<t_button*>>::`vftable'{for `t_abstract_function_2<void, t_button*, t_handler_1<t_button*>>'}")

// name:A; map symbol; map:43790
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_2<t_button*, t_handler_1<t_button*>>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:43791
DATA_CHT_1_COMPGEN(0x008d84a8, "const t_abstract_function_2<void, t_button*, t_handler_1<t_button*>>::`vftable'")

// === .rdata$r (20 symbols) ===

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_2@Vt_button_group@@PAVt_button@@V?$t_handler_1@PAVt_button@@@@@@;vft=4d8494;col=502294;td=596a90;chd=502284;offset=8;cdOffset=0;validated-hierarchy; map:50369
DATA_CHT_1_COMPGEN(0x00902294, "const t_bound_handler_2<t_button_group, t_button*, t_handler_1<t_button*>>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_button*, t_handler_1<t_button*>>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_2@XPAVt_button@@V?$t_handler_1@PAVt_button@@@@@@;bcd=502228;pmd=8,-1,0;attributes=0;validated-hierarchy-link; map:50370
DATA_CHT_1_COMPGEN(0x00902228, "t_abstract_function_2<void, t_button*, t_handler_1<t_button*>>::`RTTI Base Class Descriptor at (8, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_handler_base_2@PAVt_button@@V?$t_handler_1@PAVt_button@@@@@@;bcd=502240;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50371
DATA_CHT_1_COMPGEN(0x00902240, "t_handler_base_2<t_button*, t_handler_1<t_button*>>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_2@Vt_button_group@@PAVt_button@@V?$t_handler_1@PAVt_button@@@@@@;bcd=502258;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50372
DATA_CHT_1_COMPGEN(0x00902258, "t_bound_handler_2<t_button_group, t_button*, t_handler_1<t_button*>>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_2@Vt_button_group@@PAVt_button@@V?$t_handler_1@PAVt_button@@@@@@;vft=4d8494;col=502294;td=596a90;chd=502284;offset=8;cdOffset=0;validated-hierarchy; map:50373
DATA_CHT_1_COMPGEN(0x00902270, "t_bound_handler_2<t_button_group, t_button*, t_handler_1<t_button*>>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_2@Vt_button_group@@PAVt_button@@V?$t_handler_1@PAVt_button@@@@@@;vft=4d8494;col=502294;td=596a90;chd=502284;offset=8;cdOffset=0;validated-hierarchy; map:50374
DATA_CHT_1_COMPGEN(0x00902284, "t_bound_handler_2<t_button_group, t_button*, t_handler_1<t_button*>>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:50375
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_2<t_button_group, t_button*, t_handler_1<t_button*>>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_add_2nd_handler_1@PAVt_button@@V?$t_handler_1@PAVt_button@@@@@@;vft=4d84b4;col=5022f8;td=596af0;chd=5022e8;offset=8;cdOffset=0;validated-hierarchy; map:50376
DATA_CHT_1_COMPGEN(0x009022f8, "const t_add_2nd_handler_1<t_button*, t_handler_1<t_button*>>::`RTTI Complete Object Locator'{for `t_abstract_function_1<void, t_button*>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_add_2nd_handler_1@PAVt_button@@V?$t_handler_1@PAVt_button@@@@@@;bcd=5022bc;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50377
DATA_CHT_1_COMPGEN(0x009022bc, "t_add_2nd_handler_1<t_button*, t_handler_1<t_button*>>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_add_2nd_handler_1@PAVt_button@@V?$t_handler_1@PAVt_button@@@@@@;vft=4d84b4;col=5022f8;td=596af0;chd=5022e8;offset=8;cdOffset=0;validated-hierarchy; map:50378
DATA_CHT_1_COMPGEN(0x009022d4, "t_add_2nd_handler_1<t_button*, t_handler_1<t_button*>>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_add_2nd_handler_1@PAVt_button@@V?$t_handler_1@PAVt_button@@@@@@;vft=4d84b4;col=5022f8;td=596af0;chd=5022e8;offset=8;cdOffset=0;validated-hierarchy; map:50379
DATA_CHT_1_COMPGEN(0x009022e8, "t_add_2nd_handler_1<t_button*, t_handler_1<t_button*>>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:50380
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_add_2nd_handler_1<t_button*, t_handler_1<t_button*>>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// name:A; map symbol; map:50381
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_2<t_button*, t_handler_1<t_button*>>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_button*, t_handler_1<t_button*>>'}")

// name:A; map symbol; map:50382
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_handler_base_2<t_button*, t_handler_1<t_button*>>::`RTTI Base Class Array'")

// name:A; map symbol; map:50383
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_handler_base_2<t_button*, t_handler_1<t_button*>>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:50384
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_2<t_button*, t_handler_1<t_button*>>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_2@XPAVt_button@@V?$t_handler_1@PAVt_button@@@@@@;bcd=5021d0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50385
DATA_CHT_1_COMPGEN(0x009021d0, "t_abstract_function_2<void, t_button*, t_handler_1<t_button*>>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_function_2@XPAVt_button@@V?$t_handler_1@PAVt_button@@@@@@;vft=4d84a8;col=502200;td=5969e8;chd=5021f0;offset=0;cdOffset=0;validated-hierarchy; map:50386
DATA_CHT_1_COMPGEN(0x009021e8, "t_abstract_function_2<void, t_button*, t_handler_1<t_button*>>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_function_2@XPAVt_button@@V?$t_handler_1@PAVt_button@@@@@@;vft=4d84a8;col=502200;td=5969e8;chd=5021f0;offset=0;cdOffset=0;validated-hierarchy; map:50387
DATA_CHT_1_COMPGEN(0x009021f0, "t_abstract_function_2<void, t_button*, t_handler_1<t_button*>>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_function_2@XPAVt_button@@V?$t_handler_1@PAVt_button@@@@@@;vft=4d84a8;col=502200;td=5969e8;chd=5021f0;offset=0;cdOffset=0;validated-hierarchy; map:50388
DATA_CHT_1_COMPGEN(0x00902200, "const t_abstract_function_2<void, t_button*, t_handler_1<t_button*>>::`RTTI Complete Object Locator'")

// === .data (4 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_function_2@XPAVt_button@@V?$t_handler_1@PAVt_button@@@@@@;td=5969e8;validated-header; map:58107
DATA_CHT_1_COMPGEN(0x009969e8, "t_abstract_function_2<void, t_button*, t_handler_1<t_button*>> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_handler_base_2@PAVt_button@@V?$t_handler_1@PAVt_button@@@@@@;td=596a40;validated-header; map:58108
DATA_CHT_1_COMPGEN(0x00996a40, "t_handler_base_2<t_button*, t_handler_1<t_button*>> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_2@Vt_button_group@@PAVt_button@@V?$t_handler_1@PAVt_button@@@@@@;td=596a90;validated-header; map:58109
DATA_CHT_1_COMPGEN(0x00996a90, "t_bound_handler_2<t_button_group, t_button*, t_handler_1<t_button*>> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_add_2nd_handler_1@PAVt_button@@V?$t_handler_1@PAVt_button@@@@@@;td=596af0;validated-header; map:58110
DATA_CHT_1_COMPGEN(0x00996af0, "t_add_2nd_handler_1<t_button*, t_handler_1<t_button*>> `RTTI Type Descriptor'")
