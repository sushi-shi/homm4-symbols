// dialog_load_game.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 30/44 (A:21 B:8 C:1); unaccounted 14; skipped std 3.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (30 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:65890; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00678910, 0x11, STATIC_INIT_DISPATCH, "dialog_load_game#1")

// confidence:B; dyninit-ctor; owner-conf-C; map:65891; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00678930, 0xd7, STATIC_CTOR, "dialog_load_game#1")

// name:C; dyninit; see ledger; map:65892
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "dialog_load_game#1")

// confidence:B; dyninit-dtor; owner-conf-C; map:65893; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00678a10, 0xa, STATIC_DTOR, "dialog_load_game#1")

// confidence:A; dyninit-init; owner-conf-C; map:65894; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00678a20, 0x11, STATIC_INIT_DISPATCH, "dialog_load_game#2")

// confidence:B; dyninit-ctor; owner-conf-C; map:65895; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00678a40, 0xd1, STATIC_CTOR, "dialog_load_game#2")

// name:C; dyninit; see ledger; map:65896
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "dialog_load_game#2")

// confidence:B; dyninit-dtor; owner-conf-C; map:65897; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00678b20, 0xa, STATIC_DTOR, "dialog_load_game#2")

// confidence:A; dyninit-init; owner-conf-C; map:65898; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00678b30, 0x11, STATIC_INIT_DISPATCH, "dialog_load_game#3")

// confidence:B; dyninit-ctor; owner-conf-C; map:65899; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00678b50, 0xd1, STATIC_CTOR, "dialog_load_game#3")

// name:C; dyninit; see ledger; map:65900
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "dialog_load_game#3")

// confidence:B; dyninit-dtor; owner-conf-C; map:65901; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00678c30, 0xa, STATIC_DTOR, "dialog_load_game#3")

// confidence:A; align-order; retn,stable,vptr; map:25088
VA_CHT_1(0x00678c40, 0x265)
t_dialog_load_game::t_dialog_load_game(t_window* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:25089
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::string t_dialog_load_game::get_file_name() const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:25090
VA_CHT_1(0x00679050, 0xf6)
std::string t_dialog_load_game::get_full_name() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:25091
VA_CHT_1(0x00679150, 0x17)
t_saved_game_header const& t_dialog_load_game::get_header() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:25092
VA_CHT_1(0x00679170, 0x2d)
void t_dialog_load_game::select_file(t_file_dialog_data& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:25093
VA_CHT_1(0x006791a0, 0xf)
void t_dialog_load_game::finish()
{
    // Body unavailable.
}

// name:A; map symbol; map:25094
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_dialog_load_game::load_click(t_button* arg_0)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:65902; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00679210, 0x20, STATIC_INIT_DISPATCH, dialog_load_game)

// confidence:A; align-band; retn,stable,vslot; map:25095
VA_CHT_1_COMPGEN(0x00678eb0, 0x1e, SCALAR_DELETING_DTOR, t_dialog_load_game)

// name:A; map symbol; map:25096
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_dialog_load_game)

// name:A; map symbol; map:25097
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_dialog_load_game::~t_dialog_load_game()
{
    // Body unavailable.
}

// name:A; map symbol; map:25100
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<t_button*> bound_handler(t_dialog_load_game& arg_0, void (t_dialog_load_game::*)(t_button*))
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:25101
VA_CHT_1(0x006791b0, 0x5e)
t_bound_handler_1<t_dialog_load_game, t_button*>::t_bound_handler_1<t_dialog_load_game, t_button*>(
    t_dialog_load_game& arg_0,
    void (t_dialog_load_game::*)(t_button*)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:25102
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_1<t_dialog_load_game, t_button*>::operator()(t_button* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:25103
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_1<t_dialog_load_game, t_button*>")

// name:A; map symbol; map:25104
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_1<t_dialog_load_game, t_button*>")

// name:A; map symbol; map:25105
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_1<t_dialog_load_game, t_button*>::~t_bound_handler_1<t_dialog_load_game, t_button*>()
{
    // Body unavailable.
}

// name:A; map symbol; map:25106
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_1<t_dialog_load_game, t_button*>")

// === .rdata (3 symbols) ===

// confidence:A; rtti-name; map:44366
DATA_CHT_1_COMPGEN(0x008e05cc, "const t_dialog_load_game::`vftable'")

// confidence:A; rtti-name; map:44367
DATA_CHT_1_COMPGEN(0x008e0640, "const t_bound_handler_1<t_dialog_load_game, t_button*>::`vftable'{for `t_abstract_function_1<void, t_button*>'}")

// confidence:B; rtti-order; map:44368
DATA_CHT_1_COMPGEN(0x008e064c, "const t_bound_handler_1<t_dialog_load_game, t_button*>::`vftable'{for `t_counted_object'}")

// === .rdata$r (9 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_dialog_load_game@@;bcd=50a2a4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52098
DATA_CHT_1_COMPGEN(0x0090a2a4, "t_dialog_load_game::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_dialog_load_game@@;vft=4e05cc;col=50a2e4;td=5a2744;chd=50a2d4;offset=0;cdOffset=0;validated-hierarchy; map:52099
DATA_CHT_1_COMPGEN(0x0090a2bc, "t_dialog_load_game::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_dialog_load_game@@;vft=4e05cc;col=50a2e4;td=5a2744;chd=50a2d4;offset=0;cdOffset=0;validated-hierarchy; map:52100
DATA_CHT_1_COMPGEN(0x0090a2d4, "t_dialog_load_game::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_dialog_load_game@@;vft=4e05cc;col=50a2e4;td=5a2744;chd=50a2d4;offset=0;cdOffset=0;validated-hierarchy; map:52101
DATA_CHT_1_COMPGEN(0x0090a2e4, "const t_dialog_load_game::`RTTI Complete Object Locator'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_1@Vt_dialog_load_game@@PAVt_button@@@@;vft=4e0640;col=50a348;td=5a2780;chd=50a338;offset=8;cdOffset=0;validated-hierarchy; map:52102
DATA_CHT_1_COMPGEN(0x0090a348, "const t_bound_handler_1<t_dialog_load_game, t_button*>::`RTTI Complete Object Locator'{for `t_abstract_function_1<void, t_button*>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_1@Vt_dialog_load_game@@PAVt_button@@@@;bcd=50a30c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52103
DATA_CHT_1_COMPGEN(0x0090a30c, "t_bound_handler_1<t_dialog_load_game, t_button*>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_1@Vt_dialog_load_game@@PAVt_button@@@@;vft=4e0640;col=50a348;td=5a2780;chd=50a338;offset=8;cdOffset=0;validated-hierarchy; map:52104
DATA_CHT_1_COMPGEN(0x0090a324, "t_bound_handler_1<t_dialog_load_game, t_button*>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_1@Vt_dialog_load_game@@PAVt_button@@@@;vft=4e0640;col=50a348;td=5a2780;chd=50a338;offset=8;cdOffset=0;validated-hierarchy; map:52105
DATA_CHT_1_COMPGEN(0x0090a338, "t_bound_handler_1<t_dialog_load_game, t_button*>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:52106
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_1<t_dialog_load_game, t_button*>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// === .data (2 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_dialog_load_game@@;td=5a2744;validated-header; map:58514
DATA_CHT_1_COMPGEN(0x009a2744, "t_dialog_load_game `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_1@Vt_dialog_load_game@@PAVt_button@@@@;td=5a2780;validated-header; map:58515
DATA_CHT_1_COMPGEN(0x009a2780, "t_bound_handler_1<t_dialog_load_game, t_button*> `RTTI Type Descriptor'")
