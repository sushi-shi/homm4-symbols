// dialog_mana_vortex.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 36/54 (A:25 B:10 C:1); unaccounted 18; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (31 symbols) ===

// confidence:A; dyninit-init; owner-conf-B; map:65876; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0067ad30, 0x11, STATIC_INIT_DISPATCH, k_mana_vortex_bitmaps)

// confidence:B; dyninit-ctor; owner-conf-B; map:65877; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0067ad50, 0xd7, STATIC_CTOR, k_mana_vortex_bitmaps)

// name:B; dyninit; see ledger; map:65878
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, k_mana_vortex_bitmaps)

// confidence:B; dyninit-dtor; owner-conf-B; map:65879; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0067ae30, 0xa, STATIC_DTOR, k_mana_vortex_bitmaps)

// confidence:A; align-order; retn,stable,vptr; map:25133
VA_CHT_1(0x0067ae40, 0x84)
t_dialog_mana_vortex::t_dialog_mana_vortex(t_window* arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:25134
VA_CHT_1(0x0067b000, 0x13e3)
int t_dialog_mana_vortex::init_dialog(
    t_creature_array* arg_0,
    t_creature_array* arg_1,
    std::string const& arg_2,
    std::string const& arg_3,
    std::string const& arg_4
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:25135
VA_CHT_1(0x0067c3f0, 0x167)
void t_dialog_mana_vortex::close_click(t_button* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:25136
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_dialog_mana_vortex::cancel_click(t_button* arg_0)
{
    // Body unavailable.
}

// confidence:A; dyninit-init; owner-conf-C; map:65880; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0067c560, 0x11, STATIC_INIT_DISPATCH, "dialog_mana_vortex#2")

// confidence:B; dyninit-ctor; owner-conf-C; map:65881; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0067c580, 0xd1, STATIC_CTOR, "dialog_mana_vortex#2")

// name:C; dyninit; see ledger; map:65882
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "dialog_mana_vortex#2")

// confidence:B; dyninit-dtor; owner-conf-C; map:65883; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0067c660, 0xa, STATIC_DTOR, "dialog_mana_vortex#2")

// confidence:B; align-order; retn,stable; map:25137
VA_CHT_1(0x0067c670, 0x2a1)
void t_dialog_mana_vortex::hero_selection_change(t_creature_array_window* arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:65884; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0067c9e0, 0x20, STATIC_INIT_DISPATCH, dialog_mana_vortex)

// confidence:A; align-band; retn,stable,vslot; map:25138
VA_CHT_1_COMPGEN(0x0067aed0, 0x1e, SCALAR_DELETING_DTOR, t_dialog_mana_vortex)

// name:A; map symbol; map:25139
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_dialog_mana_vortex)

// name:A; map symbol; map:25140
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_dialog_mana_vortex::~t_dialog_mana_vortex()
{
    // Body unavailable.
}

// name:A; map symbol; map:25141
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_creature_array_window*, int> bound_handler(
    t_dialog_mana_vortex& arg_0,
    void (t_dialog_mana_vortex::*)(t_creature_array_window*, int)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:25142
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<t_button*> bound_handler(t_dialog_mana_vortex& arg_0, void (t_dialog_mana_vortex::*)(t_button*))
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:25143
VA_CHT_1(0x0067c920, 0x5e)
t_bound_handler_2<t_dialog_mana_vortex, t_creature_array_window*, int>::t_bound_handler_2<t_dialog_mana_vortex, t_creature_array_window*, int>(
    t_dialog_mana_vortex& arg_0,
    void (t_dialog_mana_vortex::*)(t_creature_array_window*, int)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:25144
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_2<t_dialog_mana_vortex, t_creature_array_window*, int>::operator()(
    t_creature_array_window* arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:25145
VA_CHT_1(0x0067c980, 0x5e)
t_bound_handler_1<t_dialog_mana_vortex, t_button*>::t_bound_handler_1<t_dialog_mana_vortex, t_button*>(
    t_dialog_mana_vortex& arg_0,
    void (t_dialog_mana_vortex::*)(t_button*)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:25146
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_1<t_dialog_mana_vortex, t_button*>::operator()(t_button* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:25147
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_dialog_mana_vortex, t_creature_array_window*, int>")

// name:A; map symbol; map:25148
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_2<t_dialog_mana_vortex, t_creature_array_window*, int>")

// name:A; map symbol; map:25149
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_1<t_dialog_mana_vortex, t_button*>")

// name:A; map symbol; map:25150
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_1<t_dialog_mana_vortex, t_button*>")

// name:A; map symbol; map:25151
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_2<t_dialog_mana_vortex, t_creature_array_window*, int>::~t_bound_handler_2<t_dialog_mana_vortex, t_creature_array_window*, int>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:25152
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_1<t_dialog_mana_vortex, t_button*>::~t_bound_handler_1<t_dialog_mana_vortex, t_button*>()
{
    // Body unavailable.
}

// name:A; map symbol; map:25153
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_dialog_mana_vortex, t_creature_array_window*, int>")

// confidence:C; align-order; stable; map:25154
VA_CHT_1_COMPGEN(0x0067ca10, 0x8, VECTOR_DELETING_DTOR, "t_bound_handler_1<t_dialog_mana_vortex, t_button*>")

// === .rdata (5 symbols) ===

// confidence:A; rtti-name; map:44374
DATA_CHT_1_COMPGEN(0x008e0704, "const t_dialog_mana_vortex::`vftable'")

// confidence:A; rtti-name; map:44375
DATA_CHT_1_COMPGEN(0x008e0770, "const t_bound_handler_2<t_dialog_mana_vortex, t_creature_array_window*, int>::`vftable'{for `t_abstract_function_2<void, t_creature_array_window*, int>'}")

// confidence:B; rtti-order; map:44376
DATA_CHT_1_COMPGEN(0x008e077c, "const t_bound_handler_2<t_dialog_mana_vortex, t_creature_array_window*, int>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:44377
DATA_CHT_1_COMPGEN(0x008e0784, "const t_bound_handler_1<t_dialog_mana_vortex, t_button*>::`vftable'{for `t_abstract_function_1<void, t_button*>'}")

// confidence:B; rtti-order; map:44378
DATA_CHT_1_COMPGEN(0x008e0790, "const t_bound_handler_1<t_dialog_mana_vortex, t_button*>::`vftable'{for `t_counted_object'}")

// === .rdata$r (14 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_dialog_mana_vortex@@;bcd=50a474;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52121
DATA_CHT_1_COMPGEN(0x0090a474, "t_dialog_mana_vortex::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_dialog_mana_vortex@@;vft=4e0704;col=50a4b0;td=5a28cc;chd=50a4a0;offset=0;cdOffset=0;validated-hierarchy; map:52122
DATA_CHT_1_COMPGEN(0x0090a48c, "t_dialog_mana_vortex::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_dialog_mana_vortex@@;vft=4e0704;col=50a4b0;td=5a28cc;chd=50a4a0;offset=0;cdOffset=0;validated-hierarchy; map:52123
DATA_CHT_1_COMPGEN(0x0090a4a0, "t_dialog_mana_vortex::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_dialog_mana_vortex@@;vft=4e0704;col=50a4b0;td=5a28cc;chd=50a4a0;offset=0;cdOffset=0;validated-hierarchy; map:52124
DATA_CHT_1_COMPGEN(0x0090a4b0, "const t_dialog_mana_vortex::`RTTI Complete Object Locator'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_2@Vt_dialog_mana_vortex@@PAVt_creature_array_window@@H@@;vft=4e0770;col=50a514;td=5a2940;chd=50a504;offset=8;cdOffset=0;validated-hierarchy; map:52125
DATA_CHT_1_COMPGEN(0x0090a514, "const t_bound_handler_2<t_dialog_mana_vortex, t_creature_array_window*, int>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_creature_array_window*, int>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_2@Vt_dialog_mana_vortex@@PAVt_creature_array_window@@H@@;bcd=50a4d8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52126
DATA_CHT_1_COMPGEN(0x0090a4d8, "t_bound_handler_2<t_dialog_mana_vortex, t_creature_array_window*, int>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_2@Vt_dialog_mana_vortex@@PAVt_creature_array_window@@H@@;vft=4e0770;col=50a514;td=5a2940;chd=50a504;offset=8;cdOffset=0;validated-hierarchy; map:52127
DATA_CHT_1_COMPGEN(0x0090a4f0, "t_bound_handler_2<t_dialog_mana_vortex, t_creature_array_window*, int>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_2@Vt_dialog_mana_vortex@@PAVt_creature_array_window@@H@@;vft=4e0770;col=50a514;td=5a2940;chd=50a504;offset=8;cdOffset=0;validated-hierarchy; map:52128
DATA_CHT_1_COMPGEN(0x0090a504, "t_bound_handler_2<t_dialog_mana_vortex, t_creature_array_window*, int>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:52129
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_2<t_dialog_mana_vortex, t_creature_array_window*, int>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_1@Vt_dialog_mana_vortex@@PAVt_button@@@@;vft=4e0784;col=50a578;td=5a2998;chd=50a568;offset=8;cdOffset=0;validated-hierarchy; map:52130
DATA_CHT_1_COMPGEN(0x0090a578, "const t_bound_handler_1<t_dialog_mana_vortex, t_button*>::`RTTI Complete Object Locator'{for `t_abstract_function_1<void, t_button*>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_1@Vt_dialog_mana_vortex@@PAVt_button@@@@;bcd=50a53c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52131
DATA_CHT_1_COMPGEN(0x0090a53c, "t_bound_handler_1<t_dialog_mana_vortex, t_button*>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_1@Vt_dialog_mana_vortex@@PAVt_button@@@@;vft=4e0784;col=50a578;td=5a2998;chd=50a568;offset=8;cdOffset=0;validated-hierarchy; map:52132
DATA_CHT_1_COMPGEN(0x0090a554, "t_bound_handler_1<t_dialog_mana_vortex, t_button*>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_1@Vt_dialog_mana_vortex@@PAVt_button@@@@;vft=4e0784;col=50a578;td=5a2998;chd=50a568;offset=8;cdOffset=0;validated-hierarchy; map:52133
DATA_CHT_1_COMPGEN(0x0090a568, "t_bound_handler_1<t_dialog_mana_vortex, t_button*>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:52134
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_1<t_dialog_mana_vortex, t_button*>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// === .data (3 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_dialog_mana_vortex@@;td=5a28cc;validated-header; map:58519
DATA_CHT_1_COMPGEN(0x009a28cc, "t_dialog_mana_vortex `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_2@Vt_dialog_mana_vortex@@PAVt_creature_array_window@@H@@;td=5a2940;validated-header; map:58520
DATA_CHT_1_COMPGEN(0x009a2940, "t_bound_handler_2<t_dialog_mana_vortex, t_creature_array_window*, int> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_1@Vt_dialog_mana_vortex@@PAVt_button@@@@;td=5a2998;validated-header; map:58521
DATA_CHT_1_COMPGEN(0x009a2998, "t_bound_handler_1<t_dialog_mana_vortex, t_button*> `RTTI Type Descriptor'")

// === .bss (1 symbols) ===

// confidence:B; dyninit-global; owner-conf-B; map:60211
DATA_CHT_1(0x009edd6c)
t_bitmap_group_cache k_mana_vortex_bitmaps; // Initial value unavailable.
