// dialog_adv_spell_target.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 50/84 (A:34 B:12 C:4); unaccounted 34; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (53 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:66799; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0062e610, 0x11, STATIC_INIT_DISPATCH, "dialog_adv_spell_target#1")

// confidence:B; dyninit-ctor; owner-conf-C; map:66800; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0062e630, 0xd7, STATIC_CTOR, "dialog_adv_spell_target#1")

// name:C; dyninit; see ledger; map:66801
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "dialog_adv_spell_target#1")

// confidence:B; dyninit-dtor; owner-conf-C; map:66802; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0062e710, 0xa, STATIC_DTOR, "dialog_adv_spell_target#1")

// confidence:A; dyninit-init; owner-conf-C; map:66803; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0062e720, 0x11, STATIC_INIT_DISPATCH, "dialog_adv_spell_target#2")

// confidence:B; dyninit-ctor; owner-conf-C; map:66804; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0062e740, 0xd1, STATIC_CTOR, "dialog_adv_spell_target#2")

// name:C; dyninit; see ledger; map:66805
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "dialog_adv_spell_target#2")

// confidence:B; dyninit-dtor; owner-conf-C; map:66806; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0062e820, 0xa, STATIC_DTOR, "dialog_adv_spell_target#2")

// confidence:A; dyninit-init; owner-conf-C; map:66807; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0062e830, 0x11, STATIC_INIT_DISPATCH, "dialog_adv_spell_target#3")

// confidence:B; dyninit-ctor; owner-conf-C; map:66808; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0062e850, 0xd1, STATIC_CTOR, "dialog_adv_spell_target#3")

// name:C; dyninit; see ledger; map:66809
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "dialog_adv_spell_target#3")

// confidence:B; dyninit-dtor; owner-conf-C; map:66810; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0062e930, 0xa, STATIC_DTOR, "dialog_adv_spell_target#3")

// confidence:A; dyninit-init; owner-conf-C; map:66811; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0062e940, 0x11, STATIC_INIT_DISPATCH, "dialog_adv_spell_target#4")

// confidence:B; dyninit-ctor; owner-conf-C; map:66812; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0062e960, 0xd1, STATIC_CTOR, "dialog_adv_spell_target#4")

// name:C; dyninit; see ledger; map:66813
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "dialog_adv_spell_target#4")

// confidence:B; dyninit-dtor; owner-conf-C; map:66814; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0062ea40, 0xa, STATIC_DTOR, "dialog_adv_spell_target#4")

// confidence:B; align-order; retn,stable; map:23827
VA_CHT_1(0x0062ea50, 0x1395)
void t_dialog_adv_spell_target::init(
    std::vector<t_hero*, std::allocator<t_hero*>> const& arg_0,
    t_spell arg_1
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:23828
VA_CHT_1(0x0062fe00, 0x1e)
std::string t_dialog_adv_spell_target::get_status_text(t_hero const* arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:23829
VA_CHT_1(0x0062fe20, 0x2a7)
void t_dialog_adv_spell_target::select_hero(t_button* arg_0, t_hero* arg_1)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:23830
VA_CHT_1(0x006300d0, 0x21d)
std::string t_dialog_healing_target::get_status_text(t_hero const* arg_0) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:23831
VA_CHT_1(0x006302f0, 0x20f)
std::string t_dialog_mana_target::get_status_text(t_hero const* arg_0) const
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:66815; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00630730, 0x20, STATIC_INIT_DISPATCH, dialog_adv_spell_target)

// confidence:C; align-band; retn,stable; map:23832
VA_CHT_1(0x00630560, 0xbb)
t_handler_2<t_button*, t_hero*> bound_handler(
    t_dialog_adv_spell_target& arg_0,
    void (t_dialog_adv_spell_target::*)(t_button*, t_hero*)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:23833
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<t_button*> add_2nd_argument(t_handler_2<t_button*, t_hero*> arg_0, t_hero* arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:23834
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_button*, t_hero*>::~t_handler_2<t_button*, t_hero*>()
{
    // Body unavailable.
}

// name:A; map symbol; map:23835
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_2<t_button*, t_hero*>>::~t_counted_ptr<t_handler_base_2<t_button*, t_hero*>>()
{
    // Body unavailable.
}

// name:A; map symbol; map:23836
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_button*, t_hero*>::t_handler_2<t_button*, t_hero*>(t_handler_base_2<t_button*, t_hero*>* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:23837
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_button*, t_hero*>* t_handler_2<t_button*, t_hero*>::operator t_handler_base_2<t_button*, t_hero*>*(

) const
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:23838
VA_CHT_1(0x00630500, 0x5e)
t_bound_handler_2<t_dialog_adv_spell_target, t_button*, t_hero*>::t_bound_handler_2<t_dialog_adv_spell_target, t_button*, t_hero*>(
    t_dialog_adv_spell_target& arg_0,
    void (t_dialog_adv_spell_target::*)(t_button*, t_hero*)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:23839
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_2<t_dialog_adv_spell_target, t_button*, t_hero*>::operator()(
    t_button* arg_0,
    t_hero* arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:23840
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_add_2nd_handler_1<t_button*, t_hero*>::t_add_2nd_handler_1<t_button*, t_hero*>(
    t_handler_base_2<t_button*, t_hero*>* arg_0,
    t_hero* arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:23841
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_add_2nd_handler_1<t_button*, t_hero*>::operator()(t_button* arg_0)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:23842
VA_CHT_1_COMPGEN(0x00630640, 0x1e, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_dialog_adv_spell_target, t_button*, t_hero*>")

// name:A; map symbol; map:23843
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_2<t_dialog_adv_spell_target, t_button*, t_hero*>")

// confidence:C; align-band; retn,stable; map:23844
VA_CHT_1(0x006306d0, 0x58)
t_handler_base_2<t_button*, t_hero*>::t_handler_base_2<t_button*, t_hero*>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:23845
VA_CHT_1_COMPGEN(0x00630680, 0x1e, SCALAR_DELETING_DTOR, "t_add_2nd_handler_1<t_button*, t_hero*>")

// name:A; map symbol; map:23846
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_add_2nd_handler_1<t_button*, t_hero*>")

// name:A; map symbol; map:23847
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_2<t_dialog_adv_spell_target, t_button*, t_hero*>::~t_bound_handler_2<t_dialog_adv_spell_target, t_button*, t_hero*>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:23848
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_button*, t_hero*>::~t_handler_base_2<t_button*, t_hero*>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:23849
VA_CHT_1(0x006306a0, 0x21)
t_abstract_function_2<void, t_button*, t_hero*>::~t_abstract_function_2<void, t_button*, t_hero*>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:23850
VA_CHT_1_COMPGEN(0x00630660, 0x20, VECTOR_DELETING_DTOR, "t_abstract_function_2<void, t_button*, t_hero*>")

// name:A; map symbol; map:23851
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_abstract_function_2<void, t_button*, t_hero*>")

// name:A; map symbol; map:23852
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_handler_base_2<t_button*, t_hero*>")

// name:A; map symbol; map:23853
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_handler_base_2<t_button*, t_hero*>")

// name:A; map symbol; map:23854
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_function_2<void, t_button*, t_hero*>::t_abstract_function_2<void, t_button*, t_hero*>()
{
    // Body unavailable.
}

// name:A; map symbol; map:23855
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_add_2nd_handler_1<t_button*, t_hero*>::~t_add_2nd_handler_1<t_button*, t_hero*>()
{
    // Body unavailable.
}

// name:A; map symbol; map:23856
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_handler_2<t_button*, t_hero*>::operator()(t_button* arg_0, t_hero* arg_1) const
{
    // Body unavailable.
}

// name:A; map symbol; map:23857
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_2<t_button*, t_hero*>>::t_counted_ptr<t_handler_base_2<t_button*, t_hero*>>(
    t_handler_base_2<t_button*, t_hero*>* arg_0
)
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:23858
VA_CHT_1(0x0062fdf0, 0x9)
t_handler_base_2<t_button*, t_hero*>* t_counted_ptr<t_handler_base_2<t_button*, t_hero*>>::operator t_handler_base_2<t_button*, t_hero*>*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:23859
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_button*, t_hero*>& t_counted_ptr<t_handler_base_2<t_button*, t_hero*>>::operator*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:23860
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_dialog_adv_spell_target, t_button*, t_hero*>")

// name:A; map symbol; map:23861
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_add_2nd_handler_1<t_button*, t_hero*>")

// confidence:C; align-order; stable; map:23862
VA_CHT_1_COMPGEN(0x00630760, 0x8, VECTOR_DELETING_DTOR, "t_handler_base_2<t_button*, t_hero*>")

// === .rdata (7 symbols) ===

// confidence:A; rtti-name; map:44203
DATA_CHT_1_COMPGEN(0x008df3bc, "const t_bound_handler_2<t_dialog_adv_spell_target, t_button*, t_hero*>::`vftable'{for `t_abstract_function_2<void, t_button*, t_hero*>'}")

// confidence:B; rtti-order; map:44204
DATA_CHT_1_COMPGEN(0x008df3c8, "const t_bound_handler_2<t_dialog_adv_spell_target, t_button*, t_hero*>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:44205
DATA_CHT_1_COMPGEN(0x008df3dc, "const t_add_2nd_handler_1<t_button*, t_hero*>::`vftable'{for `t_abstract_function_1<void, t_button*>'}")

// confidence:B; rtti-order; map:44206
DATA_CHT_1_COMPGEN(0x008df3e8, "const t_add_2nd_handler_1<t_button*, t_hero*>::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:44207
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_2<t_button*, t_hero*>::`vftable'{for `t_abstract_function_2<void, t_button*, t_hero*>'}")

// name:A; map symbol; map:44208
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_2<t_button*, t_hero*>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:44209
DATA_CHT_1_COMPGEN(0x008df3d0, "const t_abstract_function_2<void, t_button*, t_hero*>::`vftable'")

// === .rdata$r (20 symbols) ===

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_2@Vt_dialog_adv_spell_target@@PAVt_button@@PAVt_hero@@@@;vft=4df3bc;col=508024;td=59e9b8;chd=508014;offset=8;cdOffset=0;validated-hierarchy; map:51629
DATA_CHT_1_COMPGEN(0x00908024, "const t_bound_handler_2<t_dialog_adv_spell_target, t_button*, t_hero*>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_button*, t_hero*>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_2@XPAVt_button@@PAVt_hero@@@@;bcd=507fb8;pmd=8,-1,0;attributes=0;validated-hierarchy-link; map:51630
DATA_CHT_1_COMPGEN(0x00907fb8, "t_abstract_function_2<void, t_button*, t_hero*>::`RTTI Base Class Descriptor at (8, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_handler_base_2@PAVt_button@@PAVt_hero@@@@;bcd=507fd0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:51631
DATA_CHT_1_COMPGEN(0x00907fd0, "t_handler_base_2<t_button*, t_hero*>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_2@Vt_dialog_adv_spell_target@@PAVt_button@@PAVt_hero@@@@;bcd=507fe8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:51632
DATA_CHT_1_COMPGEN(0x00907fe8, "t_bound_handler_2<t_dialog_adv_spell_target, t_button*, t_hero*>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_2@Vt_dialog_adv_spell_target@@PAVt_button@@PAVt_hero@@@@;vft=4df3bc;col=508024;td=59e9b8;chd=508014;offset=8;cdOffset=0;validated-hierarchy; map:51633
DATA_CHT_1_COMPGEN(0x00908000, "t_bound_handler_2<t_dialog_adv_spell_target, t_button*, t_hero*>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_2@Vt_dialog_adv_spell_target@@PAVt_button@@PAVt_hero@@@@;vft=4df3bc;col=508024;td=59e9b8;chd=508014;offset=8;cdOffset=0;validated-hierarchy; map:51634
DATA_CHT_1_COMPGEN(0x00908014, "t_bound_handler_2<t_dialog_adv_spell_target, t_button*, t_hero*>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:51635
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_2<t_dialog_adv_spell_target, t_button*, t_hero*>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_add_2nd_handler_1@PAVt_button@@PAVt_hero@@@@;vft=4df3dc;col=508088;td=59ea10;chd=508078;offset=8;cdOffset=0;validated-hierarchy; map:51636
DATA_CHT_1_COMPGEN(0x00908088, "const t_add_2nd_handler_1<t_button*, t_hero*>::`RTTI Complete Object Locator'{for `t_abstract_function_1<void, t_button*>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_add_2nd_handler_1@PAVt_button@@PAVt_hero@@@@;bcd=50804c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:51637
DATA_CHT_1_COMPGEN(0x0090804c, "t_add_2nd_handler_1<t_button*, t_hero*>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_add_2nd_handler_1@PAVt_button@@PAVt_hero@@@@;vft=4df3dc;col=508088;td=59ea10;chd=508078;offset=8;cdOffset=0;validated-hierarchy; map:51638
DATA_CHT_1_COMPGEN(0x00908064, "t_add_2nd_handler_1<t_button*, t_hero*>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_add_2nd_handler_1@PAVt_button@@PAVt_hero@@@@;vft=4df3dc;col=508088;td=59ea10;chd=508078;offset=8;cdOffset=0;validated-hierarchy; map:51639
DATA_CHT_1_COMPGEN(0x00908078, "t_add_2nd_handler_1<t_button*, t_hero*>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:51640
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_add_2nd_handler_1<t_button*, t_hero*>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// name:A; map symbol; map:51641
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_2<t_button*, t_hero*>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_button*, t_hero*>'}")

// name:A; map symbol; map:51642
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_handler_base_2<t_button*, t_hero*>::`RTTI Base Class Array'")

// name:A; map symbol; map:51643
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_handler_base_2<t_button*, t_hero*>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:51644
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_2<t_button*, t_hero*>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_2@XPAVt_button@@PAVt_hero@@@@;bcd=507f60;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:51645
DATA_CHT_1_COMPGEN(0x00907f60, "t_abstract_function_2<void, t_button*, t_hero*>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_function_2@XPAVt_button@@PAVt_hero@@@@;vft=4df3d0;col=507f90;td=59e938;chd=507f80;offset=0;cdOffset=0;validated-hierarchy; map:51646
DATA_CHT_1_COMPGEN(0x00907f78, "t_abstract_function_2<void, t_button*, t_hero*>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_function_2@XPAVt_button@@PAVt_hero@@@@;vft=4df3d0;col=507f90;td=59e938;chd=507f80;offset=0;cdOffset=0;validated-hierarchy; map:51647
DATA_CHT_1_COMPGEN(0x00907f80, "t_abstract_function_2<void, t_button*, t_hero*>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_function_2@XPAVt_button@@PAVt_hero@@@@;vft=4df3d0;col=507f90;td=59e938;chd=507f80;offset=0;cdOffset=0;validated-hierarchy; map:51648
DATA_CHT_1_COMPGEN(0x00907f90, "const t_abstract_function_2<void, t_button*, t_hero*>::`RTTI Complete Object Locator'")

// === .data (4 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_function_2@XPAVt_button@@PAVt_hero@@@@;td=59e938;validated-header; map:58409
DATA_CHT_1_COMPGEN(0x0099e938, "t_abstract_function_2<void, t_button*, t_hero*> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_handler_base_2@PAVt_button@@PAVt_hero@@@@;td=59e978;validated-header; map:58410
DATA_CHT_1_COMPGEN(0x0099e978, "t_handler_base_2<t_button*, t_hero*> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_2@Vt_dialog_adv_spell_target@@PAVt_button@@PAVt_hero@@@@;td=59e9b8;validated-header; map:58411
DATA_CHT_1_COMPGEN(0x0099e9b8, "t_bound_handler_2<t_dialog_adv_spell_target, t_button*, t_hero*> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_add_2nd_handler_1@PAVt_button@@PAVt_hero@@@@;td=59ea10;validated-header; map:58412
DATA_CHT_1_COMPGEN(0x0099ea10, "t_add_2nd_handler_1<t_button*, t_hero*> `RTTI Type Descriptor'")
