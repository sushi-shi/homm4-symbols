// dialog_full_army.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 41/59 (A:27 B:11 C:3); unaccounted 18; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (37 symbols) ===

// confidence:A; align-order; retn,stable,vptr; map:24912
VA_CHT_1(0x0066f7a0, 0x58)
t_dialog_full_army::t_dialog_full_army(t_window* arg_0)
{
    // Body unavailable.
}

// confidence:A; dyninit-init; owner-conf-C; map:65994; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0066f8c0, 0x11, STATIC_INIT_DISPATCH, "dialog_full_army#1")

// confidence:B; dyninit-ctor; owner-conf-C; map:65995; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0066f8e0, 0xd1, STATIC_CTOR, "dialog_full_army#1")

// name:C; dyninit; see ledger; map:65996
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "dialog_full_army#1")

// confidence:B; dyninit-dtor; owner-conf-C; map:65997; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0066f9c0, 0xa, STATIC_DTOR, "dialog_full_army#1")

// confidence:A; dyninit-init; owner-conf-C; map:65998; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0066f9d0, 0x11, STATIC_INIT_DISPATCH, "dialog_full_army#2")

// confidence:B; dyninit-ctor; owner-conf-C; map:65999; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0066f9f0, 0xd1, STATIC_CTOR, "dialog_full_army#2")

// name:C; dyninit; see ledger; map:66000
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "dialog_full_army#2")

// confidence:B; dyninit-dtor; owner-conf-C; map:66001; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0066fad0, 0xa, STATIC_DTOR, "dialog_full_army#2")

// confidence:A; dyninit-init; owner-conf-C; map:66002; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0066fae0, 0x11, STATIC_INIT_DISPATCH, "dialog_full_army#3")

// confidence:B; dyninit-ctor; owner-conf-C; map:66003; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0066fb00, 0xd1, STATIC_CTOR, "dialog_full_army#3")

// name:C; dyninit; see ledger; map:66004
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "dialog_full_army#3")

// confidence:B; dyninit-dtor; owner-conf-C; map:66005; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0066fbe0, 0xa, STATIC_DTOR, "dialog_full_army#3")

// confidence:B; align-order; retn,stable; map:24913
VA_CHT_1(0x0066fbf0, 0x8c7)
void t_dialog_full_army::init_dialog(t_creature_array& arg_0, t_creature_array& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:66006
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
static bool can_create_army(t_creature_array& arg_0, t_adv_map_point& arg_1)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:24914
VA_CHT_1(0x006704c0, 0x25f)
void t_dialog_full_army::create_full_army_window()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:24915
VA_CHT_1(0x00670720, 0x9b)
void t_dialog_full_army::check_drag_drop(
    t_creature_array_window::t_drag_drop_validate_data const& arg_0,
    bool& arg_1
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:24916
VA_CHT_1(0x006707c0, 0x141)
void t_dialog_full_army::close_click(t_button* arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:24917
VA_CHT_1(0x00670910, 0x19a)
bool create_army(t_creature_array& arg_0, t_creature_array& arg_1)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:66007; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00670bc0, 0x20, STATIC_INIT_DISPATCH, dialog_full_army)

// confidence:A; align-band; retn,stable,vslot; map:24918
VA_CHT_1_COMPGEN(0x0066f800, 0x1e, VECTOR_DELETING_DTOR, t_dialog_full_army)

// name:A; map symbol; map:24919
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_dialog_full_army)

// name:A; map symbol; map:24920
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_dialog_full_army::~t_dialog_full_army()
{
    // Body unavailable.
}

// name:A; map symbol; map:24921
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<t_button*> bound_handler(t_dialog_full_army& arg_0, void (t_dialog_full_army::*)(t_button*))
{
    // Body unavailable.
}

// name:A; map symbol; map:24922
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&> bound_handler(
    t_dialog_full_army& arg_0,
    void (t_dialog_full_army::*)(t_creature_array_window::t_drag_drop_validate_data const&, bool&)
)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:24923
VA_CHT_1(0x00670ab0, 0x5e)
t_bound_handler_1<t_dialog_full_army, t_button*>::t_bound_handler_1<t_dialog_full_army, t_button*>(
    t_dialog_full_army& arg_0,
    void (t_dialog_full_army::*)(t_button*)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:24924
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_1<t_dialog_full_army, t_button*>::operator()(t_button* arg_0)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:24925
VA_CHT_1(0x00670b10, 0x5e)
t_bound_handler_2<t_dialog_full_army, t_creature_array_window::t_drag_drop_validate_data const&, bool&>::t_bound_handler_2<t_dialog_full_army, t_creature_array_window::t_drag_drop_validate_data const&, bool&>(
    t_dialog_full_army& arg_0,
    void (t_dialog_full_army::*)(t_creature_array_window::t_drag_drop_validate_data const&, bool&)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:24926
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_2<t_dialog_full_army, t_creature_array_window::t_drag_drop_validate_data const&, bool&>::operator()(
    t_creature_array_window::t_drag_drop_validate_data const& arg_0,
    bool& arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:24927
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_1<t_dialog_full_army, t_button*>")

// name:A; map symbol; map:24928
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_1<t_dialog_full_army, t_button*>")

// confidence:A; align-band; retn,vslot; map:24929
VA_CHT_1_COMPGEN(0x00670b70, 0x1e, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_dialog_full_army, t_creature_array_window::t_drag_drop_validate_data const&, bool&>")

// name:A; map symbol; map:24930
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_2<t_dialog_full_army, t_creature_array_window::t_drag_drop_validate_data const&, bool&>")

// name:A; map symbol; map:24931
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_1<t_dialog_full_army, t_button*>::~t_bound_handler_1<t_dialog_full_army, t_button*>()
{
    // Body unavailable.
}

// name:A; map symbol; map:24932
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_2<t_dialog_full_army, t_creature_array_window::t_drag_drop_validate_data const&, bool&>::~t_bound_handler_2<t_dialog_full_army, t_creature_array_window::t_drag_drop_validate_data const&, bool&>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:24933
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_dialog_full_army, t_creature_array_window::t_drag_drop_validate_data const&, bool&>")

// confidence:C; align-order; stable; map:24934
VA_CHT_1_COMPGEN(0x00670bf0, 0x8, VECTOR_DELETING_DTOR, "t_bound_handler_1<t_dialog_full_army, t_button*>")

// === .rdata (5 symbols) ===

// confidence:A; rtti-name; map:44335
DATA_CHT_1_COMPGEN(0x008e02f4, "const t_dialog_full_army::`vftable'")

// confidence:A; rtti-name; map:44336
DATA_CHT_1_COMPGEN(0x008e0360, "const t_bound_handler_1<t_dialog_full_army, t_button*>::`vftable'{for `t_abstract_function_1<void, t_button*>'}")

// confidence:B; rtti-order; map:44337
DATA_CHT_1_COMPGEN(0x008e036c, "const t_bound_handler_1<t_dialog_full_army, t_button*>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:44338
DATA_CHT_1_COMPGEN(0x008e0374, "const t_bound_handler_2<t_dialog_full_army, t_creature_array_window::t_drag_drop_validate_data const&, bool&>::`vftable'{for `t_abstract_function_2<void, t_creature_array_window::t_drag_drop_validate_data const&, bool&>'}")

// confidence:B; rtti-order; map:44339
DATA_CHT_1_COMPGEN(0x008e0380, "const t_bound_handler_2<t_dialog_full_army, t_creature_array_window::t_drag_drop_validate_data const&, bool&>::`vftable'{for `t_counted_object'}")

// === .rdata$r (14 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_dialog_full_army@@;bcd=509c3c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52012
DATA_CHT_1_COMPGEN(0x00909c3c, "t_dialog_full_army::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_dialog_full_army@@;vft=4e02f4;col=509c78;td=5a1eec;chd=509c68;offset=0;cdOffset=0;validated-hierarchy; map:52013
DATA_CHT_1_COMPGEN(0x00909c54, "t_dialog_full_army::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_dialog_full_army@@;vft=4e02f4;col=509c78;td=5a1eec;chd=509c68;offset=0;cdOffset=0;validated-hierarchy; map:52014
DATA_CHT_1_COMPGEN(0x00909c68, "t_dialog_full_army::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_dialog_full_army@@;vft=4e02f4;col=509c78;td=5a1eec;chd=509c68;offset=0;cdOffset=0;validated-hierarchy; map:52015
DATA_CHT_1_COMPGEN(0x00909c78, "const t_dialog_full_army::`RTTI Complete Object Locator'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_1@Vt_dialog_full_army@@PAVt_button@@@@;vft=4e0360;col=509cdc;td=5a1f68;chd=509ccc;offset=8;cdOffset=0;validated-hierarchy; map:52016
DATA_CHT_1_COMPGEN(0x00909cdc, "const t_bound_handler_1<t_dialog_full_army, t_button*>::`RTTI Complete Object Locator'{for `t_abstract_function_1<void, t_button*>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_1@Vt_dialog_full_army@@PAVt_button@@@@;bcd=509ca0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52017
DATA_CHT_1_COMPGEN(0x00909ca0, "t_bound_handler_1<t_dialog_full_army, t_button*>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_1@Vt_dialog_full_army@@PAVt_button@@@@;vft=4e0360;col=509cdc;td=5a1f68;chd=509ccc;offset=8;cdOffset=0;validated-hierarchy; map:52018
DATA_CHT_1_COMPGEN(0x00909cb8, "t_bound_handler_1<t_dialog_full_army, t_button*>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_1@Vt_dialog_full_army@@PAVt_button@@@@;vft=4e0360;col=509cdc;td=5a1f68;chd=509ccc;offset=8;cdOffset=0;validated-hierarchy; map:52019
DATA_CHT_1_COMPGEN(0x00909ccc, "t_bound_handler_1<t_dialog_full_army, t_button*>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:52020
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_1<t_dialog_full_army, t_button*>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_2@Vt_dialog_full_army@@ABUt_drag_drop_validate_data@t_creature_array_window@@AA_N@@;vft=4e0374;col=509d40;td=5a1fb0;chd=509d30;offset=8;cdOffset=0;validated-hierarchy; map:52021
DATA_CHT_1_COMPGEN(0x00909d40, "const t_bound_handler_2<t_dialog_full_army, t_creature_array_window::t_drag_drop_validate_data const&, bool&>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_creature_array_window::t_drag_drop_validate_data const&, bool&>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_2@Vt_dialog_full_army@@ABUt_drag_drop_validate_data@t_creature_array_window@@AA_N@@;bcd=509d04;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52022
DATA_CHT_1_COMPGEN(0x00909d04, "t_bound_handler_2<t_dialog_full_army, t_creature_array_window::t_drag_drop_validate_data const&, bool&>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_2@Vt_dialog_full_army@@ABUt_drag_drop_validate_data@t_creature_array_window@@AA_N@@;vft=4e0374;col=509d40;td=5a1fb0;chd=509d30;offset=8;cdOffset=0;validated-hierarchy; map:52023
DATA_CHT_1_COMPGEN(0x00909d1c, "t_bound_handler_2<t_dialog_full_army, t_creature_array_window::t_drag_drop_validate_data const&, bool&>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_2@Vt_dialog_full_army@@ABUt_drag_drop_validate_data@t_creature_array_window@@AA_N@@;vft=4e0374;col=509d40;td=5a1fb0;chd=509d30;offset=8;cdOffset=0;validated-hierarchy; map:52024
DATA_CHT_1_COMPGEN(0x00909d30, "t_bound_handler_2<t_dialog_full_army, t_creature_array_window::t_drag_drop_validate_data const&, bool&>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:52025
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_2<t_dialog_full_army, t_creature_array_window::t_drag_drop_validate_data const&, bool&>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// === .data (3 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_dialog_full_army@@;td=5a1eec;validated-header; map:58496
DATA_CHT_1_COMPGEN(0x009a1eec, "t_dialog_full_army `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_1@Vt_dialog_full_army@@PAVt_button@@@@;td=5a1f68;validated-header; map:58497
DATA_CHT_1_COMPGEN(0x009a1f68, "t_bound_handler_1<t_dialog_full_army, t_button*> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_2@Vt_dialog_full_army@@ABUt_drag_drop_validate_data@t_creature_array_window@@AA_N@@;td=5a1fb0;validated-header; map:58498
DATA_CHT_1_COMPGEN(0x009a1fb0, "t_bound_handler_2<t_dialog_full_army, t_creature_array_window::t_drag_drop_validate_data const&, bool&> `RTTI Type Descriptor'")
