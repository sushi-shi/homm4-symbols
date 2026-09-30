// dialog_blacksmith.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 55/86 (A:38 B:11 C:6); unaccounted 31; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (48 symbols) ===

// confidence:A; align-order; retn,stable,vptr; map:23929
VA_CHT_1(0x006344a0, 0x9f)
t_dialog_blacksmith::t_dialog_blacksmith(t_window* arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:23930
VA_CHT_1(0x00634670, 0x146f)
int t_dialog_blacksmith::init_dialog(
    t_window* arg_0,
    t_army* arg_1,
    t_artifact_type* arg_2,
    t_artifact_type* arg_3,
    t_artifact_type* arg_4
)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:23931
VA_CHT_1(0x00635ae0, 0x37f)
void t_dialog_blacksmith::create_creature_windows()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:23932
VA_CHT_1(0x00635e60, 0xe70)
void t_dialog_blacksmith::create_item_display(
    t_artifact_type arg_0,
    char* arg_1,
    t_window* arg_2,
    t_blacksmith_item_struct* arg_3,
    int arg_4
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:23933
VA_CHT_1(0x00636e20, 0x136)
void t_dialog_blacksmith::item_clicked_up(t_button* arg_0, t_blacksmith_item_struct* arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:23934
VA_CHT_1(0x00636f60, 0x81)
void t_dialog_blacksmith::item_clicked_down(t_button* arg_0, t_blacksmith_item_struct* arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:23935
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_dialog_blacksmith::add_to_total_cost(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:23936
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_dialog_blacksmith::subtract_from_total_cost(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:23937
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_dialog_blacksmith::hero_select(t_creature_array_window* arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:23938
VA_CHT_1(0x00636ff0, 0x1e1)
void t_dialog_blacksmith::show_current_creature()
{
    // Body unavailable.
}

// name:A; map symbol; map:23939
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_creature_stack* t_dialog_blacksmith::get_selected_creature()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:23940
VA_CHT_1(0x006371e0, 0x572)
void t_dialog_blacksmith::buy_click(t_button* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:23941
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_dialog_blacksmith::check_buy_button_disable()
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:23942
VA_CHT_1(0x00637760, 0x8)
void t_dialog_blacksmith::enemy_attack_handler()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:23943
VA_CHT_1(0x00637770, 0x254)
void t_dialog_blacksmith::creature_double_click(t_creature_array_window* arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:23944
VA_CHT_1(0x006379d0, 0x23)
void t_dialog_blacksmith::close_click(t_button* arg_0)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:66759; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00637b80, 0x20, STATIC_INIT_DISPATCH, dialog_blacksmith)

// confidence:A; align-band; retn,stable,vslot; map:23945
VA_CHT_1_COMPGEN(0x00634540, 0x1e, VECTOR_DELETING_DTOR, t_dialog_blacksmith)

// name:A; map symbol; map:23946
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_dialog_blacksmith)

// name:A; map symbol; map:23947
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_dialog_blacksmith::~t_dialog_blacksmith()
{
    // Body unavailable.
}

// name:A; map symbol; map:23948
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<t_button*> bound_handler(t_dialog_blacksmith& arg_0, void (t_dialog_blacksmith::*)(t_button*))
{
    // Body unavailable.
}

// name:A; map symbol; map:23949
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_creature_array_window*, int> bound_handler(
    t_dialog_blacksmith& arg_0,
    void (t_dialog_blacksmith::*)(t_creature_array_window*, int)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:23950
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_button*, t_blacksmith_item_struct*> bound_handler(
    t_dialog_blacksmith& arg_0,
    void (t_dialog_blacksmith::*)(t_button*, t_blacksmith_item_struct*)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:23951
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler bound_handler(t_dialog_blacksmith& arg_0, void (t_dialog_blacksmith::*)(void))
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:23952
VA_CHT_1(0x00637a00, 0x5e)
t_bound_handler_1<t_dialog_blacksmith, t_button*>::t_bound_handler_1<t_dialog_blacksmith, t_button*>(
    t_dialog_blacksmith& arg_0,
    void (t_dialog_blacksmith::*)(t_button*)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:23953
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_1<t_dialog_blacksmith, t_button*>::operator()(t_button* arg_0)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:23954
VA_CHT_1(0x00637a60, 0x5e)
t_bound_handler_2<t_dialog_blacksmith, t_creature_array_window*, int>::t_bound_handler_2<t_dialog_blacksmith, t_creature_array_window*, int>(
    t_dialog_blacksmith& arg_0,
    void (t_dialog_blacksmith::*)(t_creature_array_window*, int)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:23955
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_2<t_dialog_blacksmith, t_creature_array_window*, int>::operator()(
    t_creature_array_window* arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:23956
VA_CHT_1(0x00637ac0, 0x5e)
t_bound_handler_2<t_dialog_blacksmith, t_button*, t_blacksmith_item_struct*>::t_bound_handler_2<t_dialog_blacksmith, t_button*, t_blacksmith_item_struct*>(
    t_dialog_blacksmith& arg_0,
    void (t_dialog_blacksmith::*)(t_button*, t_blacksmith_item_struct*)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:23957
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_2<t_dialog_blacksmith, t_button*, t_blacksmith_item_struct*>::operator()(
    t_button* arg_0,
    t_blacksmith_item_struct* arg_1
)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:23958
VA_CHT_1(0x00637b20, 0x5e)
t_bound_handler<t_dialog_blacksmith>::t_bound_handler<t_dialog_blacksmith>(
    t_dialog_blacksmith& arg_0,
    void (t_dialog_blacksmith::*)(void)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:23959
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler<t_dialog_blacksmith>::operator()()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,vslot; map:23960
VA_CHT_1_COMPGEN(0x00651ba0, 0x1e, VECTOR_DELETING_DTOR, "t_bound_handler_1<t_dialog_blacksmith, t_button*>")

// name:A; map symbol; map:23961
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_1<t_dialog_blacksmith, t_button*>")

// name:A; map symbol; map:23962
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_2<t_dialog_blacksmith, t_creature_array_window*, int>")

// name:A; map symbol; map:23963
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_dialog_blacksmith, t_creature_array_window*, int>")

// name:A; map symbol; map:23964
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_2<t_dialog_blacksmith, t_button*, t_blacksmith_item_struct*>")

// name:A; map symbol; map:23965
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_dialog_blacksmith, t_button*, t_blacksmith_item_struct*>")

// name:A; map symbol; map:23966
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler<t_dialog_blacksmith>")

// name:A; map symbol; map:23967
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler<t_dialog_blacksmith>")

// name:A; map symbol; map:23968
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_1<t_dialog_blacksmith, t_button*>::~t_bound_handler_1<t_dialog_blacksmith, t_button*>()
{
    // Body unavailable.
}

// name:A; map symbol; map:23969
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_2<t_dialog_blacksmith, t_creature_array_window*, int>::~t_bound_handler_2<t_dialog_blacksmith, t_creature_array_window*, int>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:23970
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_2<t_dialog_blacksmith, t_button*, t_blacksmith_item_struct*>::~t_bound_handler_2<t_dialog_blacksmith, t_button*, t_blacksmith_item_struct*>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:23971
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler<t_dialog_blacksmith>::~t_bound_handler<t_dialog_blacksmith>()
{
    // Body unavailable.
}

// name:A; map symbol; map:23972
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_dialog_blacksmith, t_button*, t_blacksmith_item_struct*>")

// confidence:C; align-order; stable; map:23973
VA_CHT_1_COMPGEN(0x00637bb0, 0x8, VECTOR_DELETING_DTOR, "t_bound_handler_1<t_dialog_blacksmith, t_button*>")

// confidence:C; align-order; stable; map:23974
VA_CHT_1_COMPGEN(0x00637bc0, 0x8, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_dialog_blacksmith, t_creature_array_window*, int>")

// confidence:C; align-order; stable; map:23975
VA_CHT_1_COMPGEN(0x00637bd0, 0x8, VECTOR_DELETING_DTOR, "t_bound_handler<t_dialog_blacksmith>")

// === .rdata (9 symbols) ===

// confidence:A; rtti-name; map:44223
DATA_CHT_1_COMPGEN(0x008df544, "const t_dialog_blacksmith::`vftable'")

// confidence:A; rtti-name; map:44224
DATA_CHT_1_COMPGEN(0x008df5b0, "const t_bound_handler_1<t_dialog_blacksmith, t_button*>::`vftable'{for `t_abstract_function_1<void, t_button*>'}")

// confidence:B; rtti-order; map:44225
DATA_CHT_1_COMPGEN(0x008df5bc, "const t_bound_handler_1<t_dialog_blacksmith, t_button*>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:44226
DATA_CHT_1_COMPGEN(0x008df5c4, "const t_bound_handler_2<t_dialog_blacksmith, t_creature_array_window*, int>::`vftable'{for `t_abstract_function_2<void, t_creature_array_window*, int>'}")

// confidence:B; rtti-order; map:44227
DATA_CHT_1_COMPGEN(0x008df5d0, "const t_bound_handler_2<t_dialog_blacksmith, t_creature_array_window*, int>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:44228
DATA_CHT_1_COMPGEN(0x008df5d8, "const t_bound_handler_2<t_dialog_blacksmith, t_button*, t_blacksmith_item_struct*>::`vftable'{for `t_abstract_function_2<void, t_button*, t_blacksmith_item_struct*>'}")

// confidence:B; rtti-order; map:44229
DATA_CHT_1_COMPGEN(0x008df5e4, "const t_bound_handler_2<t_dialog_blacksmith, t_button*, t_blacksmith_item_struct*>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:44230
DATA_CHT_1_COMPGEN(0x008df5ec, "const t_bound_handler<t_dialog_blacksmith>::`vftable'{for `t_abstract_function_0<void>'}")

// confidence:B; rtti-order; map:44231
DATA_CHT_1_COMPGEN(0x008df5f8, "const t_bound_handler<t_dialog_blacksmith>::`vftable'{for `t_counted_object'}")

// === .rdata$r (24 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_dialog_blacksmith@@;bcd=508340;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:51687
DATA_CHT_1_COMPGEN(0x00908340, "t_dialog_blacksmith::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_dialog_blacksmith@@;vft=4df544;col=50837c;td=59edb0;chd=50836c;offset=0;cdOffset=0;validated-hierarchy; map:51688
DATA_CHT_1_COMPGEN(0x00908358, "t_dialog_blacksmith::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_dialog_blacksmith@@;vft=4df544;col=50837c;td=59edb0;chd=50836c;offset=0;cdOffset=0;validated-hierarchy; map:51689
DATA_CHT_1_COMPGEN(0x0090836c, "t_dialog_blacksmith::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_dialog_blacksmith@@;vft=4df544;col=50837c;td=59edb0;chd=50836c;offset=0;cdOffset=0;validated-hierarchy; map:51690
DATA_CHT_1_COMPGEN(0x0090837c, "const t_dialog_blacksmith::`RTTI Complete Object Locator'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_1@Vt_dialog_blacksmith@@PAVt_button@@@@;vft=4df5b0;col=5083e0;td=59ee00;chd=5083d0;offset=8;cdOffset=0;validated-hierarchy; map:51691
DATA_CHT_1_COMPGEN(0x009083e0, "const t_bound_handler_1<t_dialog_blacksmith, t_button*>::`RTTI Complete Object Locator'{for `t_abstract_function_1<void, t_button*>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_1@Vt_dialog_blacksmith@@PAVt_button@@@@;bcd=5083a4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:51692
DATA_CHT_1_COMPGEN(0x009083a4, "t_bound_handler_1<t_dialog_blacksmith, t_button*>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_1@Vt_dialog_blacksmith@@PAVt_button@@@@;vft=4df5b0;col=5083e0;td=59ee00;chd=5083d0;offset=8;cdOffset=0;validated-hierarchy; map:51693
DATA_CHT_1_COMPGEN(0x009083bc, "t_bound_handler_1<t_dialog_blacksmith, t_button*>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_1@Vt_dialog_blacksmith@@PAVt_button@@@@;vft=4df5b0;col=5083e0;td=59ee00;chd=5083d0;offset=8;cdOffset=0;validated-hierarchy; map:51694
DATA_CHT_1_COMPGEN(0x009083d0, "t_bound_handler_1<t_dialog_blacksmith, t_button*>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:51695
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_1<t_dialog_blacksmith, t_button*>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_2@Vt_dialog_blacksmith@@PAVt_creature_array_window@@H@@;vft=4df5c4;col=508444;td=59ee48;chd=508434;offset=8;cdOffset=0;validated-hierarchy; map:51696
DATA_CHT_1_COMPGEN(0x00908444, "const t_bound_handler_2<t_dialog_blacksmith, t_creature_array_window*, int>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_creature_array_window*, int>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_2@Vt_dialog_blacksmith@@PAVt_creature_array_window@@H@@;bcd=508408;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:51697
DATA_CHT_1_COMPGEN(0x00908408, "t_bound_handler_2<t_dialog_blacksmith, t_creature_array_window*, int>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_2@Vt_dialog_blacksmith@@PAVt_creature_array_window@@H@@;vft=4df5c4;col=508444;td=59ee48;chd=508434;offset=8;cdOffset=0;validated-hierarchy; map:51698
DATA_CHT_1_COMPGEN(0x00908420, "t_bound_handler_2<t_dialog_blacksmith, t_creature_array_window*, int>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_2@Vt_dialog_blacksmith@@PAVt_creature_array_window@@H@@;vft=4df5c4;col=508444;td=59ee48;chd=508434;offset=8;cdOffset=0;validated-hierarchy; map:51699
DATA_CHT_1_COMPGEN(0x00908434, "t_bound_handler_2<t_dialog_blacksmith, t_creature_array_window*, int>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:51700
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_2<t_dialog_blacksmith, t_creature_array_window*, int>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_2@Vt_dialog_blacksmith@@PAVt_button@@PAUt_blacksmith_item_struct@@@@;vft=4df5d8;col=5084a8;td=59eea0;chd=508498;offset=8;cdOffset=0;validated-hierarchy; map:51701
DATA_CHT_1_COMPGEN(0x009084a8, "const t_bound_handler_2<t_dialog_blacksmith, t_button*, t_blacksmith_item_struct*>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_button*, t_blacksmith_item_struct*>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_2@Vt_dialog_blacksmith@@PAVt_button@@PAUt_blacksmith_item_struct@@@@;bcd=50846c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:51702
DATA_CHT_1_COMPGEN(0x0090846c, "t_bound_handler_2<t_dialog_blacksmith, t_button*, t_blacksmith_item_struct*>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_2@Vt_dialog_blacksmith@@PAVt_button@@PAUt_blacksmith_item_struct@@@@;vft=4df5d8;col=5084a8;td=59eea0;chd=508498;offset=8;cdOffset=0;validated-hierarchy; map:51703
DATA_CHT_1_COMPGEN(0x00908484, "t_bound_handler_2<t_dialog_blacksmith, t_button*, t_blacksmith_item_struct*>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_2@Vt_dialog_blacksmith@@PAVt_button@@PAUt_blacksmith_item_struct@@@@;vft=4df5d8;col=5084a8;td=59eea0;chd=508498;offset=8;cdOffset=0;validated-hierarchy; map:51704
DATA_CHT_1_COMPGEN(0x00908498, "t_bound_handler_2<t_dialog_blacksmith, t_button*, t_blacksmith_item_struct*>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:51705
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_2<t_dialog_blacksmith, t_button*, t_blacksmith_item_struct*>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler@Vt_dialog_blacksmith@@@@;vft=4df5ec;col=50850c;td=59ef04;chd=5084fc;offset=8;cdOffset=0;validated-hierarchy; map:51706
DATA_CHT_1_COMPGEN(0x0090850c, "const t_bound_handler<t_dialog_blacksmith>::`RTTI Complete Object Locator'{for `t_abstract_function_0<void>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler@Vt_dialog_blacksmith@@@@;bcd=5084d0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:51707
DATA_CHT_1_COMPGEN(0x009084d0, "t_bound_handler<t_dialog_blacksmith>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler@Vt_dialog_blacksmith@@@@;vft=4df5ec;col=50850c;td=59ef04;chd=5084fc;offset=8;cdOffset=0;validated-hierarchy; map:51708
DATA_CHT_1_COMPGEN(0x009084e8, "t_bound_handler<t_dialog_blacksmith>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler@Vt_dialog_blacksmith@@@@;vft=4df5ec;col=50850c;td=59ef04;chd=5084fc;offset=8;cdOffset=0;validated-hierarchy; map:51709
DATA_CHT_1_COMPGEN(0x009084fc, "t_bound_handler<t_dialog_blacksmith>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:51710
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler<t_dialog_blacksmith>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// === .data (5 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_dialog_blacksmith@@;td=59edb0;validated-header; map:58421
DATA_CHT_1_COMPGEN(0x0099edb0, "t_dialog_blacksmith `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_1@Vt_dialog_blacksmith@@PAVt_button@@@@;td=59ee00;validated-header; map:58422
DATA_CHT_1_COMPGEN(0x0099ee00, "t_bound_handler_1<t_dialog_blacksmith, t_button*> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_2@Vt_dialog_blacksmith@@PAVt_creature_array_window@@H@@;td=59ee48;validated-header; map:58423
DATA_CHT_1_COMPGEN(0x0099ee48, "t_bound_handler_2<t_dialog_blacksmith, t_creature_array_window*, int> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_2@Vt_dialog_blacksmith@@PAVt_button@@PAUt_blacksmith_item_struct@@@@;td=59eea0;validated-header; map:58424
DATA_CHT_1_COMPGEN(0x0099eea0, "t_bound_handler_2<t_dialog_blacksmith, t_button*, t_blacksmith_item_struct*> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler@Vt_dialog_blacksmith@@@@;td=59ef04;validated-header; map:58425
DATA_CHT_1_COMPGEN(0x0099ef04, "t_bound_handler<t_dialog_blacksmith> `RTTI Type Descriptor'")
