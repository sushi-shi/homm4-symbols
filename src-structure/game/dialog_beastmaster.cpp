// dialog_beastmaster.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 43/66 (A:27 B:14 C:2); unaccounted 23; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (42 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:66761; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006325a0, 0x11, STATIC_INIT_DISPATCH, "dialog_beastmaster#1")

// confidence:B; dyninit-ctor; owner-conf-C; map:66762; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006325c0, 0xd1, STATIC_CTOR, "dialog_beastmaster#1")

// name:C; dyninit; see ledger; map:66763
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "dialog_beastmaster#1")

// confidence:B; dyninit-dtor; owner-conf-C; map:66764; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006326a0, 0xa, STATIC_DTOR, "dialog_beastmaster#1")

// confidence:A; dyninit-init; owner-conf-C; map:66765; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006326b0, 0x11, STATIC_INIT_DISPATCH, "dialog_beastmaster#2")

// confidence:B; dyninit-ctor; owner-conf-C; map:66766; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006326d0, 0xd1, STATIC_CTOR, "dialog_beastmaster#2")

// name:C; dyninit; see ledger; map:66767
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "dialog_beastmaster#2")

// confidence:B; dyninit-dtor; owner-conf-C; map:66768; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006327b0, 0xa, STATIC_DTOR, "dialog_beastmaster#2")

// confidence:A; dyninit-init; owner-conf-C; map:66769; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006327c0, 0x11, STATIC_INIT_DISPATCH, "dialog_beastmaster#3")

// confidence:B; dyninit-ctor; owner-conf-C; map:66770; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006327e0, 0xd7, STATIC_CTOR, "dialog_beastmaster#3")

// name:C; dyninit; see ledger; map:66771
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "dialog_beastmaster#3")

// confidence:B; dyninit-dtor; owner-conf-C; map:66772; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006328c0, 0xa, STATIC_DTOR, "dialog_beastmaster#3")

// confidence:A; dyninit-init; owner-conf-B; map:66773; name:A (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006328d0, 0x1b, STATIC_INIT_DISPATCH, k_learn_button)

// name:A; dyninit; see ledger; map:66774
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, k_learn_button)

// name:A; dyninit; see ledger; map:66775
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, k_learn_button)

// confidence:B; dyninit-dtor; owner-conf-B; map:66776; name:A (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006328f0, 0xa, STATIC_DTOR, k_learn_button)

// confidence:A; dyninit-init; owner-conf-B; map:66777; name:A (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00632900, 0x1b, STATIC_INIT_DISPATCH, k_close_button)

// name:A; dyninit; see ledger; map:66778
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, k_close_button)

// name:A; dyninit; see ledger; map:66779
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, k_close_button)

// confidence:B; dyninit-dtor; owner-conf-B; map:66780; name:A (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00632920, 0xa, STATIC_DTOR, k_close_button)

// confidence:A; align-order; retn,stable,vptr; map:23908
VA_CHT_1(0x00632930, 0x1825)
t_dialog_beastmaster::t_dialog_beastmaster(
    std::vector<t_hero*, std::allocator<t_hero*>> const& arg_0,
    t_skill_type arg_1,
    std::string const& arg_2,
    t_window* arg_3,
    t_stationary_adventure_object const& arg_4
)
{
    // Body unavailable.
}

// name:A; map symbol; map:23909
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_dialog_beastmaster::close_clicked(t_button* arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:23910
VA_CHT_1(0x00634260, 0xb1)
void t_dialog_beastmaster::learn_clicked(t_button* arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:23911
VA_CHT_1(0x00634400, 0x5e)
void t_dialog_beastmaster::selection_change(t_creature_select_window* arg_0, t_creature_stack* arg_1)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:66781; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00634460, 0x20, STATIC_INIT_DISPATCH, dialog_beastmaster)

// confidence:A; align-band; retn,stable,vslot; map:23912
VA_CHT_1_COMPGEN(0x00634160, 0x1e, VECTOR_DELETING_DTOR, t_dialog_beastmaster)

// name:A; map symbol; map:23913
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_dialog_beastmaster)

// name:A; map symbol; map:23914
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_dialog_beastmaster::~t_dialog_beastmaster()
{
    // Body unavailable.
}

// name:A; map symbol; map:23915
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_creature_select_window*, t_creature_stack*> bound_handler(
    t_dialog_beastmaster& arg_0,
    void (t_dialog_beastmaster::*)(t_creature_select_window*, t_creature_stack*)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:23916
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<t_button*> bound_handler(t_dialog_beastmaster& arg_0, void (t_dialog_beastmaster::*)(t_button*))
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:23917
VA_CHT_1(0x006343a0, 0x5e)
t_bound_handler_2<t_dialog_beastmaster, t_creature_select_window*, t_creature_stack*>::t_bound_handler_2<t_dialog_beastmaster, t_creature_select_window*, t_creature_stack*>(
    t_dialog_beastmaster& arg_0,
    void (t_dialog_beastmaster::*)(t_creature_select_window*, t_creature_stack*)
)
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:23918
VA_CHT_1(0x00634320, 0x7e)
void t_bound_handler_2<t_dialog_beastmaster, t_creature_select_window*, t_creature_stack*>::operator()(
    t_creature_select_window* arg_0,
    t_creature_stack* arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:23919
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_1<t_dialog_beastmaster, t_button*>::t_bound_handler_1<t_dialog_beastmaster, t_button*>(
    t_dialog_beastmaster& arg_0,
    void (t_dialog_beastmaster::*)(t_button*)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:23920
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_1<t_dialog_beastmaster, t_button*>::operator()(t_button* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:23921
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_dialog_beastmaster, t_creature_select_window*, t_creature_stack*>")

// name:A; map symbol; map:23922
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_2<t_dialog_beastmaster, t_creature_select_window*, t_creature_stack*>")

// name:A; map symbol; map:23923
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_1<t_dialog_beastmaster, t_button*>")

// name:A; map symbol; map:23924
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_1<t_dialog_beastmaster, t_button*>")

// name:A; map symbol; map:23925
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_2<t_dialog_beastmaster, t_creature_select_window*, t_creature_stack*>::~t_bound_handler_2<t_dialog_beastmaster, t_creature_select_window*, t_creature_stack*>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:23926
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_1<t_dialog_beastmaster, t_button*>::~t_bound_handler_1<t_dialog_beastmaster, t_button*>()
{
    // Body unavailable.
}

// name:A; map symbol; map:23927
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_dialog_beastmaster, t_creature_select_window*, t_creature_stack*>")

// confidence:C; align-order; stable; map:23928
VA_CHT_1_COMPGEN(0x00634490, 0x8, VECTOR_DELETING_DTOR, "t_bound_handler_1<t_dialog_beastmaster, t_button*>")

// === .rdata (5 symbols) ===

// confidence:A; rtti-name; map:44218
DATA_CHT_1_COMPGEN(0x008df4a4, "const t_dialog_beastmaster::`vftable'")

// confidence:A; rtti-name; map:44219
DATA_CHT_1_COMPGEN(0x008df510, "const t_bound_handler_2<t_dialog_beastmaster, t_creature_select_window*, t_creature_stack*>::`vftable'{for `t_abstract_function_2<void, t_creature_select_window*, t_creature_stack*>'}")

// confidence:B; rtti-order; map:44220
DATA_CHT_1_COMPGEN(0x008df51c, "const t_bound_handler_2<t_dialog_beastmaster, t_creature_select_window*, t_creature_stack*>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:44221
DATA_CHT_1_COMPGEN(0x008df524, "const t_bound_handler_1<t_dialog_beastmaster, t_button*>::`vftable'{for `t_abstract_function_1<void, t_button*>'}")

// confidence:B; rtti-order; map:44222
DATA_CHT_1_COMPGEN(0x008df530, "const t_bound_handler_1<t_dialog_beastmaster, t_button*>::`vftable'{for `t_counted_object'}")

// === .rdata$r (14 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_dialog_beastmaster@@;bcd=508228;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:51673
DATA_CHT_1_COMPGEN(0x00908228, "t_dialog_beastmaster::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_dialog_beastmaster@@;vft=4df4a4;col=508264;td=59ec84;chd=508254;offset=0;cdOffset=0;validated-hierarchy; map:51674
DATA_CHT_1_COMPGEN(0x00908240, "t_dialog_beastmaster::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_dialog_beastmaster@@;vft=4df4a4;col=508264;td=59ec84;chd=508254;offset=0;cdOffset=0;validated-hierarchy; map:51675
DATA_CHT_1_COMPGEN(0x00908254, "t_dialog_beastmaster::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_dialog_beastmaster@@;vft=4df4a4;col=508264;td=59ec84;chd=508254;offset=0;cdOffset=0;validated-hierarchy; map:51676
DATA_CHT_1_COMPGEN(0x00908264, "const t_dialog_beastmaster::`RTTI Complete Object Locator'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_2@Vt_dialog_beastmaster@@PAVt_creature_select_window@@PAVt_creature_stack@@@@;vft=4df510;col=5082c8;td=59ecf8;chd=5082b8;offset=8;cdOffset=0;validated-hierarchy; map:51677
DATA_CHT_1_COMPGEN(0x009082c8, "const t_bound_handler_2<t_dialog_beastmaster, t_creature_select_window*, t_creature_stack*>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_creature_select_window*, t_creature_stack*>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_2@Vt_dialog_beastmaster@@PAVt_creature_select_window@@PAVt_creature_stack@@@@;bcd=50828c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:51678
DATA_CHT_1_COMPGEN(0x0090828c, "t_bound_handler_2<t_dialog_beastmaster, t_creature_select_window*, t_creature_stack*>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_2@Vt_dialog_beastmaster@@PAVt_creature_select_window@@PAVt_creature_stack@@@@;vft=4df510;col=5082c8;td=59ecf8;chd=5082b8;offset=8;cdOffset=0;validated-hierarchy; map:51679
DATA_CHT_1_COMPGEN(0x009082a4, "t_bound_handler_2<t_dialog_beastmaster, t_creature_select_window*, t_creature_stack*>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_2@Vt_dialog_beastmaster@@PAVt_creature_select_window@@PAVt_creature_stack@@@@;vft=4df510;col=5082c8;td=59ecf8;chd=5082b8;offset=8;cdOffset=0;validated-hierarchy; map:51680
DATA_CHT_1_COMPGEN(0x009082b8, "t_bound_handler_2<t_dialog_beastmaster, t_creature_select_window*, t_creature_stack*>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:51681
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_2<t_dialog_beastmaster, t_creature_select_window*, t_creature_stack*>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_1@Vt_dialog_beastmaster@@PAVt_button@@@@;vft=4df524;col=50832c;td=59ed68;chd=50831c;offset=8;cdOffset=0;validated-hierarchy; map:51682
DATA_CHT_1_COMPGEN(0x0090832c, "const t_bound_handler_1<t_dialog_beastmaster, t_button*>::`RTTI Complete Object Locator'{for `t_abstract_function_1<void, t_button*>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_1@Vt_dialog_beastmaster@@PAVt_button@@@@;bcd=5082f0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:51683
DATA_CHT_1_COMPGEN(0x009082f0, "t_bound_handler_1<t_dialog_beastmaster, t_button*>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_1@Vt_dialog_beastmaster@@PAVt_button@@@@;vft=4df524;col=50832c;td=59ed68;chd=50831c;offset=8;cdOffset=0;validated-hierarchy; map:51684
DATA_CHT_1_COMPGEN(0x00908308, "t_bound_handler_1<t_dialog_beastmaster, t_button*>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_1@Vt_dialog_beastmaster@@PAVt_button@@@@;vft=4df524;col=50832c;td=59ed68;chd=50831c;offset=8;cdOffset=0;validated-hierarchy; map:51685
DATA_CHT_1_COMPGEN(0x0090831c, "t_bound_handler_1<t_dialog_beastmaster, t_button*>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:51686
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_1<t_dialog_beastmaster, t_button*>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// === .data (3 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_dialog_beastmaster@@;td=59ec84;validated-header; map:58418
DATA_CHT_1_COMPGEN(0x0099ec84, "t_dialog_beastmaster `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_2@Vt_dialog_beastmaster@@PAVt_creature_select_window@@PAVt_creature_stack@@@@;td=59ecf8;validated-header; map:58419
DATA_CHT_1_COMPGEN(0x0099ecf8, "t_bound_handler_2<t_dialog_beastmaster, t_creature_select_window*, t_creature_stack*> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_1@Vt_dialog_beastmaster@@PAVt_button@@@@;td=59ed68;validated-header; map:58420
DATA_CHT_1_COMPGEN(0x0099ed68, "t_bound_handler_1<t_dialog_beastmaster, t_button*> `RTTI Type Descriptor'")

// === .bss (2 symbols) ===

// confidence:B; dyninit-global; owner-conf-B; map:60200
DATA_CHT_1(0x009ecf94)
t_button_cache const k_learn_button; // Initial value unavailable.

// confidence:B; dyninit-global; owner-conf-B; map:60201
DATA_CHT_1(0x009ecfbc)
t_button_cache const k_close_button; // Initial value unavailable.
