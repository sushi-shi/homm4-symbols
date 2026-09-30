// dialog_creature_portal.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 46/83 (A:36 B:5 C:5); unaccounted 37; skipped std 6.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (44 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:66044; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00668a80, 0x11, STATIC_INIT_DISPATCH, "dialog_creature_portal#1")

// confidence:B; dyninit-ctor; owner-conf-C; map:66045; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00668aa0, 0xd7, STATIC_CTOR, "dialog_creature_portal#1")

// name:C; dyninit; see ledger; map:66046
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "dialog_creature_portal#1")

// confidence:B; dyninit-dtor; owner-conf-C; map:66047; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00668b80, 0xa, STATIC_DTOR, "dialog_creature_portal#1")

// confidence:A; align-order; retn,stable,vptr; map:24752
VA_CHT_1(0x00668b90, 0x46c)
t_dialog_creature_portal::t_dialog_creature_portal(
    t_window* arg_0,
    t_town* arg_1,
    t_material_array const& arg_2,
    int arg_3
)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:66048
VA_CHT_1(0x00669000, 0x7)
static int get_discount_price(t_creature_type arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:24753
VA_CHT_1(0x006694b0, 0x5e)
void t_dialog_creature_portal::select_creature(t_button* arg_0, t_creature_type arg_1)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:66049; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006696a0, 0x20, STATIC_INIT_DISPATCH, dialog_creature_portal)

// confidence:A; align-band; retn,stable,vslot; map:24754
VA_CHT_1_COMPGEN(0x00669010, 0x1e, VECTOR_DELETING_DTOR, t_dialog_creature_portal)

// name:A; map symbol; map:24755
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_dialog_creature_portal)

// name:A; map symbol; map:24756
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_recruit_dialog::~t_recruit_dialog()
{
    // Body unavailable.
}

// name:A; map symbol; map:24757
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_dialog_creature_portal::~t_dialog_creature_portal()
{
    // Body unavailable.
}

// name:A; map symbol; map:24758
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_town::set_portal_creature(t_creature_type arg_0)
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:24763
VA_CHT_1(0x00669510, 0xbb)
t_handler_2<t_button*, t_creature_type> bound_handler(
    t_dialog_creature_portal& arg_0,
    void (t_dialog_creature_portal::*)(t_button*, t_creature_type)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:24764
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<t_button*> add_2nd_argument(t_handler_2<t_button*, t_creature_type> arg_0, t_creature_type arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:24765
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_button*, t_creature_type>::~t_handler_2<t_button*, t_creature_type>()
{
    // Body unavailable.
}

// name:A; map symbol; map:24766
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_2<t_button*, t_creature_type>>::~t_counted_ptr<t_handler_base_2<t_button*, t_creature_type>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:24768
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_button*, t_creature_type>::t_handler_2<t_button*, t_creature_type>(
    t_handler_base_2<t_button*, t_creature_type>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:24769
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_button*, t_creature_type>* t_handler_2<t_button*, t_creature_type>::operator t_handler_base_2<t_button*, t_creature_type>*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:24770
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_2<t_dialog_creature_portal, t_button*, t_creature_type>::t_bound_handler_2<t_dialog_creature_portal, t_button*, t_creature_type>(
    t_dialog_creature_portal& arg_0,
    void (t_dialog_creature_portal::*)(t_button*, t_creature_type)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:24771
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_2<t_dialog_creature_portal, t_button*, t_creature_type>::operator()(
    t_button* arg_0,
    t_creature_type arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:24772
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_add_2nd_handler_1<t_button*, t_creature_type>::t_add_2nd_handler_1<t_button*, t_creature_type>(
    t_handler_base_2<t_button*, t_creature_type>* arg_0,
    t_creature_type arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:24773
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_add_2nd_handler_1<t_button*, t_creature_type>::operator()(t_button* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:24774
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_2<t_dialog_creature_portal, t_button*, t_creature_type>")

// name:A; map symbol; map:24775
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_dialog_creature_portal, t_button*, t_creature_type>")

// confidence:C; align-band; retn,stable; map:24776
VA_CHT_1(0x00669640, 0x58)
t_handler_base_2<t_button*, t_creature_type>::t_handler_base_2<t_button*, t_creature_type>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:24777
VA_CHT_1_COMPGEN(0x006695f0, 0x1e, SCALAR_DELETING_DTOR, "t_add_2nd_handler_1<t_button*, t_creature_type>")

// name:A; map symbol; map:24778
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_add_2nd_handler_1<t_button*, t_creature_type>")

// name:A; map symbol; map:24779
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_2<t_dialog_creature_portal, t_button*, t_creature_type>::~t_bound_handler_2<t_dialog_creature_portal, t_button*, t_creature_type>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:24780
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_button*, t_creature_type>::~t_handler_base_2<t_button*, t_creature_type>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:24781
VA_CHT_1(0x00669610, 0x21)
t_abstract_function_2<void, t_button*, t_creature_type>::~t_abstract_function_2<void, t_button*, t_creature_type>(

)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:24782
VA_CHT_1_COMPGEN(0x006695d0, 0x20, SCALAR_DELETING_DTOR, "t_abstract_function_2<void, t_button*, t_creature_type>")

// name:A; map symbol; map:24783
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_abstract_function_2<void, t_button*, t_creature_type>")

// name:A; map symbol; map:24784
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_handler_base_2<t_button*, t_creature_type>")

// name:A; map symbol; map:24785
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_handler_base_2<t_button*, t_creature_type>")

// name:A; map symbol; map:24786
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_function_2<void, t_button*, t_creature_type>::t_abstract_function_2<void, t_button*, t_creature_type>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:24787
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_add_2nd_handler_1<t_button*, t_creature_type>::~t_add_2nd_handler_1<t_button*, t_creature_type>()
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:24788
VA_CHT_1(0x00669440, 0x6e)
void t_handler_2<t_button*, t_creature_type>::operator()(t_button* arg_0, t_creature_type arg_1) const
{
    // Body unavailable.
}

// name:A; map symbol; map:24789
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_2<t_button*, t_creature_type>>::t_counted_ptr<t_handler_base_2<t_button*, t_creature_type>>(
    t_handler_base_2<t_button*, t_creature_type>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:24790
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_button*, t_creature_type>* t_counted_ptr<t_handler_base_2<t_button*, t_creature_type>>::operator t_handler_base_2<t_button*, t_creature_type>*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:24791
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_button*, t_creature_type>& t_counted_ptr<t_handler_base_2<t_button*, t_creature_type>>::operator*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:24792
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_dialog_creature_portal, t_button*, t_creature_type>")

// name:A; map symbol; map:24793
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_handler_base_2<t_button*, t_creature_type>")

// confidence:C; align-order; stable; map:24794
VA_CHT_1_COMPGEN(0x006696d0, 0x8, VECTOR_DELETING_DTOR, "t_add_2nd_handler_1<t_button*, t_creature_type>")

// === .rdata (8 symbols) ===

// confidence:A; rtti-name; map:44317
DATA_CHT_1_COMPGEN(0x008e00ec, "const t_dialog_creature_portal::`vftable'")

// confidence:A; rtti-name; map:44318
DATA_CHT_1_COMPGEN(0x008e015c, "const t_bound_handler_2<t_dialog_creature_portal, t_button*, t_creature_type>::`vftable'{for `t_abstract_function_2<void, t_button*, t_creature_type>'}")

// confidence:B; rtti-order; map:44319
DATA_CHT_1_COMPGEN(0x008e0168, "const t_bound_handler_2<t_dialog_creature_portal, t_button*, t_creature_type>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:44320
DATA_CHT_1_COMPGEN(0x008e017c, "const t_add_2nd_handler_1<t_button*, t_creature_type>::`vftable'{for `t_abstract_function_1<void, t_button*>'}")

// confidence:B; rtti-order; map:44321
DATA_CHT_1_COMPGEN(0x008e0188, "const t_add_2nd_handler_1<t_button*, t_creature_type>::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:44322
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_2<t_button*, t_creature_type>::`vftable'{for `t_abstract_function_2<void, t_button*, t_creature_type>'}")

// name:A; map symbol; map:44323
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_2<t_button*, t_creature_type>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:44324
DATA_CHT_1_COMPGEN(0x008e0170, "const t_abstract_function_2<void, t_button*, t_creature_type>::`vftable'")

// === .rdata$r (25 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_recruit_dialog@@;bcd=509860;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:51959
DATA_CHT_1_COMPGEN(0x00909860, "t_recruit_dialog::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_dialog_creature_portal@@;bcd=509878;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:51960
DATA_CHT_1_COMPGEN(0x00909878, "t_dialog_creature_portal::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_dialog_creature_portal@@;vft=4e00ec;col=5098bc;td=5a1ae4;chd=5098ac;offset=0;cdOffset=0;validated-hierarchy; map:51961
DATA_CHT_1_COMPGEN(0x00909890, "t_dialog_creature_portal::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_dialog_creature_portal@@;vft=4e00ec;col=5098bc;td=5a1ae4;chd=5098ac;offset=0;cdOffset=0;validated-hierarchy; map:51962
DATA_CHT_1_COMPGEN(0x009098ac, "t_dialog_creature_portal::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_dialog_creature_portal@@;vft=4e00ec;col=5098bc;td=5a1ae4;chd=5098ac;offset=0;cdOffset=0;validated-hierarchy; map:51963
DATA_CHT_1_COMPGEN(0x009098bc, "const t_dialog_creature_portal::`RTTI Complete Object Locator'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_2@Vt_dialog_creature_portal@@PAVt_button@@W4t_creature_type@@@@;vft=4e015c;col=509994;td=5a1ba8;chd=509984;offset=8;cdOffset=0;validated-hierarchy; map:51964
DATA_CHT_1_COMPGEN(0x00909994, "const t_bound_handler_2<t_dialog_creature_portal, t_button*, t_creature_type>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_button*, t_creature_type>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_2@XPAVt_button@@W4t_creature_type@@@@;bcd=509928;pmd=8,-1,0;attributes=0;validated-hierarchy-link; map:51965
DATA_CHT_1_COMPGEN(0x00909928, "t_abstract_function_2<void, t_button*, t_creature_type>::`RTTI Base Class Descriptor at (8, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_handler_base_2@PAVt_button@@W4t_creature_type@@@@;bcd=509940;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:51966
DATA_CHT_1_COMPGEN(0x00909940, "t_handler_base_2<t_button*, t_creature_type>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_2@Vt_dialog_creature_portal@@PAVt_button@@W4t_creature_type@@@@;bcd=509958;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:51967
DATA_CHT_1_COMPGEN(0x00909958, "t_bound_handler_2<t_dialog_creature_portal, t_button*, t_creature_type>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_2@Vt_dialog_creature_portal@@PAVt_button@@W4t_creature_type@@@@;vft=4e015c;col=509994;td=5a1ba8;chd=509984;offset=8;cdOffset=0;validated-hierarchy; map:51968
DATA_CHT_1_COMPGEN(0x00909970, "t_bound_handler_2<t_dialog_creature_portal, t_button*, t_creature_type>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_2@Vt_dialog_creature_portal@@PAVt_button@@W4t_creature_type@@@@;vft=4e015c;col=509994;td=5a1ba8;chd=509984;offset=8;cdOffset=0;validated-hierarchy; map:51969
DATA_CHT_1_COMPGEN(0x00909984, "t_bound_handler_2<t_dialog_creature_portal, t_button*, t_creature_type>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:51970
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_2<t_dialog_creature_portal, t_button*, t_creature_type>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_add_2nd_handler_1@PAVt_button@@W4t_creature_type@@@@;vft=4e017c;col=5099f8;td=5a1c08;chd=5099e8;offset=8;cdOffset=0;validated-hierarchy; map:51971
DATA_CHT_1_COMPGEN(0x009099f8, "const t_add_2nd_handler_1<t_button*, t_creature_type>::`RTTI Complete Object Locator'{for `t_abstract_function_1<void, t_button*>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_add_2nd_handler_1@PAVt_button@@W4t_creature_type@@@@;bcd=5099bc;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:51972
DATA_CHT_1_COMPGEN(0x009099bc, "t_add_2nd_handler_1<t_button*, t_creature_type>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_add_2nd_handler_1@PAVt_button@@W4t_creature_type@@@@;vft=4e017c;col=5099f8;td=5a1c08;chd=5099e8;offset=8;cdOffset=0;validated-hierarchy; map:51973
DATA_CHT_1_COMPGEN(0x009099d4, "t_add_2nd_handler_1<t_button*, t_creature_type>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_add_2nd_handler_1@PAVt_button@@W4t_creature_type@@@@;vft=4e017c;col=5099f8;td=5a1c08;chd=5099e8;offset=8;cdOffset=0;validated-hierarchy; map:51974
DATA_CHT_1_COMPGEN(0x009099e8, "t_add_2nd_handler_1<t_button*, t_creature_type>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:51975
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_add_2nd_handler_1<t_button*, t_creature_type>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// name:A; map symbol; map:51976
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_2<t_button*, t_creature_type>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_button*, t_creature_type>'}")

// name:A; map symbol; map:51977
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_handler_base_2<t_button*, t_creature_type>::`RTTI Base Class Array'")

// name:A; map symbol; map:51978
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_handler_base_2<t_button*, t_creature_type>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:51979
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_2<t_button*, t_creature_type>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_2@XPAVt_button@@W4t_creature_type@@@@;bcd=5098d0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:51980
DATA_CHT_1_COMPGEN(0x009098d0, "t_abstract_function_2<void, t_button*, t_creature_type>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_function_2@XPAVt_button@@W4t_creature_type@@@@;vft=4e0170;col=509900;td=5a1b18;chd=5098f0;offset=0;cdOffset=0;validated-hierarchy; map:51981
DATA_CHT_1_COMPGEN(0x009098e8, "t_abstract_function_2<void, t_button*, t_creature_type>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_function_2@XPAVt_button@@W4t_creature_type@@@@;vft=4e0170;col=509900;td=5a1b18;chd=5098f0;offset=0;cdOffset=0;validated-hierarchy; map:51982
DATA_CHT_1_COMPGEN(0x009098f0, "t_abstract_function_2<void, t_button*, t_creature_type>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_function_2@XPAVt_button@@W4t_creature_type@@@@;vft=4e0170;col=509900;td=5a1b18;chd=5098f0;offset=0;cdOffset=0;validated-hierarchy; map:51983
DATA_CHT_1_COMPGEN(0x00909900, "const t_abstract_function_2<void, t_button*, t_creature_type>::`RTTI Complete Object Locator'")

// === .data (6 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_recruit_dialog@@;td=5a1ac4;validated-header; map:58484
DATA_CHT_1_COMPGEN(0x009a1ac4, "t_recruit_dialog `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_dialog_creature_portal@@;td=5a1ae4;validated-header; map:58485
DATA_CHT_1_COMPGEN(0x009a1ae4, "t_dialog_creature_portal `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_function_2@XPAVt_button@@W4t_creature_type@@@@;td=5a1b18;validated-header; map:58486
DATA_CHT_1_COMPGEN(0x009a1b18, "t_abstract_function_2<void, t_button*, t_creature_type> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_handler_base_2@PAVt_button@@W4t_creature_type@@@@;td=5a1b60;validated-header; map:58487
DATA_CHT_1_COMPGEN(0x009a1b60, "t_handler_base_2<t_button*, t_creature_type> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_2@Vt_dialog_creature_portal@@PAVt_button@@W4t_creature_type@@@@;td=5a1ba8;validated-header; map:58488
DATA_CHT_1_COMPGEN(0x009a1ba8, "t_bound_handler_2<t_dialog_creature_portal, t_button*, t_creature_type> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_add_2nd_handler_1@PAVt_button@@W4t_creature_type@@@@;td=5a1c08;validated-header; map:58489
DATA_CHT_1_COMPGEN(0x009a1c08, "t_add_2nd_handler_1<t_button*, t_creature_type> `RTTI Type Descriptor'")
