// dialog_kingdom_trade.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 51/81 (A:34 B:11 C:6); unaccounted 30; skipped std 16.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (50 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:65904; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00676000, 0x15, STATIC_INIT_DISPATCH, "dialog_kingdom_trade#1")

// name:C; dyninit; see ledger; map:65905
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "dialog_kingdom_trade#1")

// confidence:A; dyninit-init; owner-conf-C; map:65906; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00676020, 0x11, STATIC_INIT_DISPATCH, k_kingdom_trade_bitmaps)

// confidence:B; dyninit-ctor; owner-conf-C; map:65907; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00676040, 0xd7, STATIC_CTOR, k_kingdom_trade_bitmaps)

// name:C; dyninit; see ledger; map:65908
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, k_kingdom_trade_bitmaps)

// confidence:B; dyninit-dtor; owner-conf-C; map:65909; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00676120, 0xa, STATIC_DTOR, k_kingdom_trade_bitmaps)

// confidence:A; dyninit-init; owner-conf-C; map:65910; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00676130, 0x11, STATIC_INIT_DISPATCH, "dialog_kingdom_trade#3")

// confidence:B; dyninit-ctor; owner-conf-C; map:65911; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00676150, 0xd1, STATIC_CTOR, "dialog_kingdom_trade#3")

// name:C; dyninit; see ledger; map:65912
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "dialog_kingdom_trade#3")

// confidence:B; dyninit-dtor; owner-conf-C; map:65913; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00676230, 0xa, STATIC_DTOR, "dialog_kingdom_trade#3")

// confidence:A; align-order; retn,stable,vptr; map:25040
VA_CHT_1(0x00676240, 0x99)
t_dialog_kingdom_trade::t_dialog_kingdom_trade(t_window* arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:25041
VA_CHT_1(0x006763e0, 0x1f05)
void t_dialog_kingdom_trade::init_dialog(
    t_window* arg_0,
    t_adventure_frame* arg_1,
    std::string const& arg_2,
    std::string const& arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:65914
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
static t_button* create_kingdom_trade_material_button(
    t_screen_point& arg_0,
    t_window* arg_1,
    int arg_2,
    std::string arg_3,
    t_help_block const& arg_4
)
{
    // Body unavailable.
}

// name:A; map symbol; map:65915
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
static t_button* create_kingdom_trade_player_button(
    t_screen_point& arg_0,
    t_window* arg_1,
    t_player_color arg_2,
    t_help_block const& arg_3
)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:25042
VA_CHT_1(0x00678340, 0x20e)
void t_dialog_kingdom_trade::show_material_amount()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:25043
VA_CHT_1(0x00678550, 0x91)
void t_dialog_kingdom_trade::scrollbar_move(t_scrollbar* arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:25044
VA_CHT_1(0x006785f0, 0x70)
void t_dialog_kingdom_trade::flag_clicked(t_button* arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:25045
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_dialog_kingdom_trade::give_clicked(t_button* arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:25046
VA_CHT_1(0x006786c0, 0x51)
void t_dialog_kingdom_trade::material_clicked(t_button* arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:25047
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_dialog_kingdom_trade::max_clicked(t_button* arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:25048
VA_CHT_1(0x00678720, 0x15)
void t_dialog_kingdom_trade::close_click(t_button* arg_0)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:65916; name:B (dyninit; see ledger)
VA_CHT_1(0x00678860, 0x20)
// dialog_kingdom_trade$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:A; dyninit-tinit; owner-conf-B; map:65918; name:B (dyninit; see ledger)
VA_CHT_1(0x00678880, 0x5c)
// dialog_kingdom_trade$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:65919
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// dialog_kingdom_trade$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:65920
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// dialog_kingdom_trade$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:65921
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// dialog_kingdom_trade$tatexit4
// Function body not reconstructed; signature retained as a comment.

// confidence:A; align-band; retn,stable,vslot; map:25049
VA_CHT_1_COMPGEN(0x006762e0, 0x1e, SCALAR_DELETING_DTOR, t_dialog_kingdom_trade)

// name:A; map symbol; map:25050
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_dialog_kingdom_trade)

// name:A; map symbol; map:25051
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_dialog_kingdom_trade::~t_dialog_kingdom_trade()
{
    // Body unavailable.
}

// name:A; map symbol; map:25063
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_button*, int> bound_handler(
    t_dialog_kingdom_trade& arg_0,
    void (t_dialog_kingdom_trade::*)(t_button*, int)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:25064
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<t_button*> bound_handler(
    t_dialog_kingdom_trade& arg_0,
    void (t_dialog_kingdom_trade::*)(t_button*)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:25065
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_scrollbar*, int> bound_handler(
    t_dialog_kingdom_trade& arg_0,
    void (t_dialog_kingdom_trade::*)(t_scrollbar*, int)
)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:25070
VA_CHT_1(0x00678740, 0x5e)
t_bound_handler_2<t_dialog_kingdom_trade, t_button*, int>::t_bound_handler_2<t_dialog_kingdom_trade, t_button*, int>(
    t_dialog_kingdom_trade& arg_0,
    void (t_dialog_kingdom_trade::*)(t_button*, int)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:25071
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_2<t_dialog_kingdom_trade, t_button*, int>::operator()(t_button* arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:25072
VA_CHT_1(0x006787a0, 0x5e)
t_bound_handler_1<t_dialog_kingdom_trade, t_button*>::t_bound_handler_1<t_dialog_kingdom_trade, t_button*>(
    t_dialog_kingdom_trade& arg_0,
    void (t_dialog_kingdom_trade::*)(t_button*)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:25073
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_1<t_dialog_kingdom_trade, t_button*>::operator()(t_button* arg_0)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:25074
VA_CHT_1(0x00678800, 0x5e)
t_bound_handler_2<t_dialog_kingdom_trade, t_scrollbar*, int>::t_bound_handler_2<t_dialog_kingdom_trade, t_scrollbar*, int>(
    t_dialog_kingdom_trade& arg_0,
    void (t_dialog_kingdom_trade::*)(t_scrollbar*, int)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:25075
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_2<t_dialog_kingdom_trade, t_scrollbar*, int>::operator()(t_scrollbar* arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:25076
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_2<t_dialog_kingdom_trade, t_button*, int>")

// name:A; map symbol; map:25077
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_dialog_kingdom_trade, t_button*, int>")

// name:A; map symbol; map:25078
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_1<t_dialog_kingdom_trade, t_button*>")

// name:A; map symbol; map:25079
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_1<t_dialog_kingdom_trade, t_button*>")

// name:A; map symbol; map:25080
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_dialog_kingdom_trade, t_scrollbar*, int>")

// name:A; map symbol; map:25081
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_2<t_dialog_kingdom_trade, t_scrollbar*, int>")

// name:A; map symbol; map:25082
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_2<t_dialog_kingdom_trade, t_button*, int>::~t_bound_handler_2<t_dialog_kingdom_trade, t_button*, int>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:25083
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_1<t_dialog_kingdom_trade, t_button*>::~t_bound_handler_1<t_dialog_kingdom_trade, t_button*>()
{
    // Body unavailable.
}

// name:A; map symbol; map:25084
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_2<t_dialog_kingdom_trade, t_scrollbar*, int>::~t_bound_handler_2<t_dialog_kingdom_trade, t_scrollbar*, int>(

)
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:25085
VA_CHT_1_COMPGEN(0x006788e0, 0x8, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_dialog_kingdom_trade, t_button*, int>")

// confidence:C; align-order; stable; map:25086
VA_CHT_1_COMPGEN(0x006788f0, 0x8, VECTOR_DELETING_DTOR, "t_bound_handler_1<t_dialog_kingdom_trade, t_button*>")

// confidence:C; align-order; stable; map:25087
VA_CHT_1_COMPGEN(0x00678900, 0x8, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_dialog_kingdom_trade, t_scrollbar*, int>")

// === .rdata (7 symbols) ===

// confidence:A; rtti-name; map:44359
DATA_CHT_1_COMPGEN(0x008e051c, "const t_dialog_kingdom_trade::`vftable'")

// confidence:A; rtti-name; map:44360
DATA_CHT_1_COMPGEN(0x008e0588, "const t_bound_handler_2<t_dialog_kingdom_trade, t_button*, int>::`vftable'{for `t_abstract_function_2<void, t_button*, int>'}")

// confidence:B; rtti-order; map:44361
DATA_CHT_1_COMPGEN(0x008e0594, "const t_bound_handler_2<t_dialog_kingdom_trade, t_button*, int>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:44362
DATA_CHT_1_COMPGEN(0x008e059c, "const t_bound_handler_1<t_dialog_kingdom_trade, t_button*>::`vftable'{for `t_abstract_function_1<void, t_button*>'}")

// confidence:B; rtti-order; map:44363
DATA_CHT_1_COMPGEN(0x008e05a8, "const t_bound_handler_1<t_dialog_kingdom_trade, t_button*>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:44364
DATA_CHT_1_COMPGEN(0x008e05b0, "const t_bound_handler_2<t_dialog_kingdom_trade, t_scrollbar*, int>::`vftable'{for `t_abstract_function_2<void, t_scrollbar*, int>'}")

// confidence:B; rtti-order; map:44365
DATA_CHT_1_COMPGEN(0x008e05bc, "const t_bound_handler_2<t_dialog_kingdom_trade, t_scrollbar*, int>::`vftable'{for `t_counted_object'}")

// === .rdata$r (19 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_dialog_kingdom_trade@@;bcd=50a128;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52079
DATA_CHT_1_COMPGEN(0x0090a128, "t_dialog_kingdom_trade::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_dialog_kingdom_trade@@;vft=4e051c;col=50a164;td=5a2570;chd=50a154;offset=0;cdOffset=0;validated-hierarchy; map:52080
DATA_CHT_1_COMPGEN(0x0090a140, "t_dialog_kingdom_trade::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_dialog_kingdom_trade@@;vft=4e051c;col=50a164;td=5a2570;chd=50a154;offset=0;cdOffset=0;validated-hierarchy; map:52081
DATA_CHT_1_COMPGEN(0x0090a154, "t_dialog_kingdom_trade::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_dialog_kingdom_trade@@;vft=4e051c;col=50a164;td=5a2570;chd=50a154;offset=0;cdOffset=0;validated-hierarchy; map:52082
DATA_CHT_1_COMPGEN(0x0090a164, "const t_dialog_kingdom_trade::`RTTI Complete Object Locator'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_2@Vt_dialog_kingdom_trade@@PAVt_button@@H@@;vft=4e0588;col=50a1c8;td=5a2620;chd=50a1b8;offset=8;cdOffset=0;validated-hierarchy; map:52083
DATA_CHT_1_COMPGEN(0x0090a1c8, "const t_bound_handler_2<t_dialog_kingdom_trade, t_button*, int>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_button*, int>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_2@Vt_dialog_kingdom_trade@@PAVt_button@@H@@;bcd=50a18c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52084
DATA_CHT_1_COMPGEN(0x0090a18c, "t_bound_handler_2<t_dialog_kingdom_trade, t_button*, int>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_2@Vt_dialog_kingdom_trade@@PAVt_button@@H@@;vft=4e0588;col=50a1c8;td=5a2620;chd=50a1b8;offset=8;cdOffset=0;validated-hierarchy; map:52085
DATA_CHT_1_COMPGEN(0x0090a1a4, "t_bound_handler_2<t_dialog_kingdom_trade, t_button*, int>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_2@Vt_dialog_kingdom_trade@@PAVt_button@@H@@;vft=4e0588;col=50a1c8;td=5a2620;chd=50a1b8;offset=8;cdOffset=0;validated-hierarchy; map:52086
DATA_CHT_1_COMPGEN(0x0090a1b8, "t_bound_handler_2<t_dialog_kingdom_trade, t_button*, int>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:52087
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_2<t_dialog_kingdom_trade, t_button*, int>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_1@Vt_dialog_kingdom_trade@@PAVt_button@@@@;vft=4e059c;col=50a22c;td=5a2670;chd=50a21c;offset=8;cdOffset=0;validated-hierarchy; map:52088
DATA_CHT_1_COMPGEN(0x0090a22c, "const t_bound_handler_1<t_dialog_kingdom_trade, t_button*>::`RTTI Complete Object Locator'{for `t_abstract_function_1<void, t_button*>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_1@Vt_dialog_kingdom_trade@@PAVt_button@@@@;bcd=50a1f0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52089
DATA_CHT_1_COMPGEN(0x0090a1f0, "t_bound_handler_1<t_dialog_kingdom_trade, t_button*>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_1@Vt_dialog_kingdom_trade@@PAVt_button@@@@;vft=4e059c;col=50a22c;td=5a2670;chd=50a21c;offset=8;cdOffset=0;validated-hierarchy; map:52090
DATA_CHT_1_COMPGEN(0x0090a208, "t_bound_handler_1<t_dialog_kingdom_trade, t_button*>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_1@Vt_dialog_kingdom_trade@@PAVt_button@@@@;vft=4e059c;col=50a22c;td=5a2670;chd=50a21c;offset=8;cdOffset=0;validated-hierarchy; map:52091
DATA_CHT_1_COMPGEN(0x0090a21c, "t_bound_handler_1<t_dialog_kingdom_trade, t_button*>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:52092
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_1<t_dialog_kingdom_trade, t_button*>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_2@Vt_dialog_kingdom_trade@@PAVt_scrollbar@@H@@;vft=4e05b0;col=50a290;td=5a26c0;chd=50a280;offset=8;cdOffset=0;validated-hierarchy; map:52093
DATA_CHT_1_COMPGEN(0x0090a290, "const t_bound_handler_2<t_dialog_kingdom_trade, t_scrollbar*, int>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_scrollbar*, int>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_2@Vt_dialog_kingdom_trade@@PAVt_scrollbar@@H@@;bcd=50a254;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52094
DATA_CHT_1_COMPGEN(0x0090a254, "t_bound_handler_2<t_dialog_kingdom_trade, t_scrollbar*, int>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_2@Vt_dialog_kingdom_trade@@PAVt_scrollbar@@H@@;vft=4e05b0;col=50a290;td=5a26c0;chd=50a280;offset=8;cdOffset=0;validated-hierarchy; map:52095
DATA_CHT_1_COMPGEN(0x0090a26c, "t_bound_handler_2<t_dialog_kingdom_trade, t_scrollbar*, int>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_2@Vt_dialog_kingdom_trade@@PAVt_scrollbar@@H@@;vft=4e05b0;col=50a290;td=5a26c0;chd=50a280;offset=8;cdOffset=0;validated-hierarchy; map:52096
DATA_CHT_1_COMPGEN(0x0090a280, "t_bound_handler_2<t_dialog_kingdom_trade, t_scrollbar*, int>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:52097
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_2<t_dialog_kingdom_trade, t_scrollbar*, int>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// === .data (4 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_dialog_kingdom_trade@@;td=5a2570;validated-header; map:58510
DATA_CHT_1_COMPGEN(0x009a2570, "t_dialog_kingdom_trade `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_2@Vt_dialog_kingdom_trade@@PAVt_button@@H@@;td=5a2620;validated-header; map:58511
DATA_CHT_1_COMPGEN(0x009a2620, "t_bound_handler_2<t_dialog_kingdom_trade, t_button*, int> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_1@Vt_dialog_kingdom_trade@@PAVt_button@@@@;td=5a2670;validated-header; map:58512
DATA_CHT_1_COMPGEN(0x009a2670, "t_bound_handler_1<t_dialog_kingdom_trade, t_button*> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_2@Vt_dialog_kingdom_trade@@PAVt_scrollbar@@H@@;td=5a26c0;validated-header; map:58513
DATA_CHT_1_COMPGEN(0x009a26c0, "t_bound_handler_2<t_dialog_kingdom_trade, t_scrollbar*, int> `RTTI Type Descriptor'")

// === .bss (1 symbols) ===

// confidence:C; dyninit-global; owner-conf-C; map:60210
DATA_CHT_1(0x009edd00)
t_bitmap_group_cache k_kingdom_trade_bitmaps; // Initial value unavailable.
