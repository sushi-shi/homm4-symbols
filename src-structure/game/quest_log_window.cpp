// quest_log_window.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\quest_log_window.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 52/81 (A:35 B:11 C:6); unaccounted 29; skipped std 45.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (50 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:63639; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00765020, 0x15, STATIC_INIT_DISPATCH, "quest_log_window#1")

// name:C; dyninit; see ledger; map:63640
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "quest_log_window#1")

// confidence:A; dyninit-init; owner-conf-B; map:63641; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00765040, 0x11, STATIC_INIT_DISPATCH, k_quest_log_bitmaps)

// confidence:B; dyninit-ctor; owner-conf-B; map:63642; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00765060, 0xd7, STATIC_CTOR, k_quest_log_bitmaps)

// name:B; dyninit; see ledger; map:63643
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, k_quest_log_bitmaps)

// confidence:B; dyninit-dtor; owner-conf-B; map:63644; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00765140, 0xa, STATIC_DTOR, k_quest_log_bitmaps)

// confidence:A; dyninit-init; owner-conf-C; map:63645; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00765150, 0x11, STATIC_INIT_DISPATCH, "quest_log_window#3")

// confidence:B; dyninit-ctor; owner-conf-C; map:63646; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00765170, 0xd1, STATIC_CTOR, "quest_log_window#3")

// name:C; dyninit; see ledger; map:63647
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "quest_log_window#3")

// confidence:B; dyninit-dtor; owner-conf-C; map:63648; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00765250, 0xa, STATIC_DTOR, "quest_log_window#3")

// confidence:A; align-order; retn,stable,vptr; map:32321
VA_CHT_1(0x00765260, 0x7d9)
t_quest_log_window::t_quest_log_window(t_window* arg_0, t_adventure_frame* arg_1)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:32322
VA_CHT_1(0x00765ba0, 0x376)
void t_quest_log_window::gather_data()
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:32323
VA_CHT_1(0x00765f20, 0x103b)
void t_quest_log_window::create_quests_windows()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:32324
VA_CHT_1(0x00766f60, 0x1bf)
void t_quest_log_window::show_quests(int arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:32325
VA_CHT_1(0x00767120, 0x13)
void t_quest_log_window::scrollbar_move(t_scrollbar* arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:32326
VA_CHT_1(0x00767140, 0x58)
void t_quest_log_window::mini_map_clicked(t_button* arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:32327
VA_CHT_1(0x007671a0, 0xd)
void t_quest_log_window::close_clicked(t_button* arg_0)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:63649; name:B (dyninit; see ledger)
VA_CHT_1(0x00767300, 0x20)
// quest_log_window$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:A; dyninit-tinit; owner-conf-B; map:63651; name:B (dyninit; see ledger)
VA_CHT_1(0x00767320, 0x5c)
// quest_log_window$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:63652
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// quest_log_window$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:63653
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// quest_log_window$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:63654
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// quest_log_window$tatexit4
// Function body not reconstructed; signature retained as a comment.

// confidence:A; align-band; retn,stable,vslot; map:32328
VA_CHT_1_COMPGEN(0x00765a40, 0x1e, SCALAR_DELETING_DTOR, t_quest_log_window)

// name:A; map symbol; map:32329
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_quest_log_window)

// name:A; map symbol; map:32330
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_quest_log_window::~t_quest_log_window()
{
    // Body unavailable.
}

// name:A; map symbol; map:32331
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::vector<t_counted_ptr<t_quest_origin_site>, std::allocator<t_counted_ptr<t_quest_origin_site>>> const& t_player::get_quest_origin_sites(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:32332
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::string const& t_quest_origin_site::get_quest_log_entry() const
{
    // Body unavailable.
}

// name:A; map symbol; map:32333
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_quest_log_window::t_quest_entry::t_quest_entry()
{
    // Body unavailable.
}

// name:A; map symbol; map:32368
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<t_button*> bound_handler(t_quest_log_window& arg_0, void (t_quest_log_window::*)(t_button*))
{
    // Body unavailable.
}

// name:A; map symbol; map:32369
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_quest_origin_site* t_counted_ptr<t_quest_origin_site>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:32370
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_button*, int> bound_handler(
    t_quest_log_window& arg_0,
    void (t_quest_log_window::*)(t_button*, int)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:32371
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_scrollbar*, int> bound_handler(
    t_quest_log_window& arg_0,
    void (t_quest_log_window::*)(t_scrollbar*, int)
)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:32382
VA_CHT_1(0x007671e0, 0x5e)
t_bound_handler_1<t_quest_log_window, t_button*>::t_bound_handler_1<t_quest_log_window, t_button*>(
    t_quest_log_window& arg_0,
    void (t_quest_log_window::*)(t_button*)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:32383
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_1<t_quest_log_window, t_button*>::operator()(t_button* arg_0)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:32384
VA_CHT_1(0x00767240, 0x5e)
t_bound_handler_2<t_quest_log_window, t_button*, int>::t_bound_handler_2<t_quest_log_window, t_button*, int>(
    t_quest_log_window& arg_0,
    void (t_quest_log_window::*)(t_button*, int)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:32385
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_2<t_quest_log_window, t_button*, int>::operator()(t_button* arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:32386
VA_CHT_1(0x007672a0, 0x5e)
t_bound_handler_2<t_quest_log_window, t_scrollbar*, int>::t_bound_handler_2<t_quest_log_window, t_scrollbar*, int>(
    t_quest_log_window& arg_0,
    void (t_quest_log_window::*)(t_scrollbar*, int)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:32387
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_2<t_quest_log_window, t_scrollbar*, int>::operator()(t_scrollbar* arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:32388
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_1<t_quest_log_window, t_button*>")

// name:A; map symbol; map:32389
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_1<t_quest_log_window, t_button*>")

// confidence:A; align-band; retn,vslot; map:32390
VA_CHT_1_COMPGEN(0x007dede0, 0x1e, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_quest_log_window, t_button*, int>")

// name:A; map symbol; map:32391
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_2<t_quest_log_window, t_button*, int>")

// name:A; map symbol; map:32392
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_2<t_quest_log_window, t_scrollbar*, int>")

// name:A; map symbol; map:32393
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_quest_log_window, t_scrollbar*, int>")

// name:A; map symbol; map:32394
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_1<t_quest_log_window, t_button*>::~t_bound_handler_1<t_quest_log_window, t_button*>()
{
    // Body unavailable.
}

// name:A; map symbol; map:32395
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_2<t_quest_log_window, t_button*, int>::~t_bound_handler_2<t_quest_log_window, t_button*, int>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:32396
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_2<t_quest_log_window, t_scrollbar*, int>::~t_bound_handler_2<t_quest_log_window, t_scrollbar*, int>(

)
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:32397
VA_CHT_1_COMPGEN(0x00767380, 0x8, VECTOR_DELETING_DTOR, "t_bound_handler_1<t_quest_log_window, t_button*>")

// confidence:C; align-order; stable; map:32398
VA_CHT_1_COMPGEN(0x00767390, 0x8, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_quest_log_window, t_scrollbar*, int>")

// confidence:C; align-order; stable; map:32399
VA_CHT_1_COMPGEN(0x007673a0, 0x8, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_quest_log_window, t_button*, int>")

// === .rdata (7 symbols) ===

// confidence:A; rtti-name; map:45074
DATA_CHT_1_COMPGEN(0x008e7e64, "const t_quest_log_window::`vftable'")

// confidence:A; rtti-name; map:45075
DATA_CHT_1_COMPGEN(0x008e7ed0, "const t_bound_handler_1<t_quest_log_window, t_button*>::`vftable'{for `t_abstract_function_1<void, t_button*>'}")

// confidence:B; rtti-order; map:45076
DATA_CHT_1_COMPGEN(0x008e7edc, "const t_bound_handler_1<t_quest_log_window, t_button*>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:45077
DATA_CHT_1_COMPGEN(0x008e7ee4, "const t_bound_handler_2<t_quest_log_window, t_button*, int>::`vftable'{for `t_abstract_function_2<void, t_button*, int>'}")

// confidence:B; rtti-order; map:45078
DATA_CHT_1_COMPGEN(0x008e7ef0, "const t_bound_handler_2<t_quest_log_window, t_button*, int>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:45079
DATA_CHT_1_COMPGEN(0x008e7ef8, "const t_bound_handler_2<t_quest_log_window, t_scrollbar*, int>::`vftable'{for `t_abstract_function_2<void, t_scrollbar*, int>'}")

// confidence:B; rtti-order; map:45080
DATA_CHT_1_COMPGEN(0x008e7f04, "const t_bound_handler_2<t_quest_log_window, t_scrollbar*, int>::`vftable'{for `t_counted_object'}")

// === .rdata$r (19 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_quest_log_window@@;bcd=512b24;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54004
DATA_CHT_1_COMPGEN(0x00912b24, "t_quest_log_window::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_quest_log_window@@;vft=4e7e64;col=512b60;td=5b0c6c;chd=512b50;offset=0;cdOffset=0;validated-hierarchy; map:54005
DATA_CHT_1_COMPGEN(0x00912b3c, "t_quest_log_window::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_quest_log_window@@;vft=4e7e64;col=512b60;td=5b0c6c;chd=512b50;offset=0;cdOffset=0;validated-hierarchy; map:54006
DATA_CHT_1_COMPGEN(0x00912b50, "t_quest_log_window::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_quest_log_window@@;vft=4e7e64;col=512b60;td=5b0c6c;chd=512b50;offset=0;cdOffset=0;validated-hierarchy; map:54007
DATA_CHT_1_COMPGEN(0x00912b60, "const t_quest_log_window::`RTTI Complete Object Locator'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_1@Vt_quest_log_window@@PAVt_button@@@@;vft=4e7ed0;col=512bc4;td=5b0cb0;chd=512bb4;offset=8;cdOffset=0;validated-hierarchy; map:54008
DATA_CHT_1_COMPGEN(0x00912bc4, "const t_bound_handler_1<t_quest_log_window, t_button*>::`RTTI Complete Object Locator'{for `t_abstract_function_1<void, t_button*>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_1@Vt_quest_log_window@@PAVt_button@@@@;bcd=512b88;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54009
DATA_CHT_1_COMPGEN(0x00912b88, "t_bound_handler_1<t_quest_log_window, t_button*>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_1@Vt_quest_log_window@@PAVt_button@@@@;vft=4e7ed0;col=512bc4;td=5b0cb0;chd=512bb4;offset=8;cdOffset=0;validated-hierarchy; map:54010
DATA_CHT_1_COMPGEN(0x00912ba0, "t_bound_handler_1<t_quest_log_window, t_button*>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_1@Vt_quest_log_window@@PAVt_button@@@@;vft=4e7ed0;col=512bc4;td=5b0cb0;chd=512bb4;offset=8;cdOffset=0;validated-hierarchy; map:54011
DATA_CHT_1_COMPGEN(0x00912bb4, "t_bound_handler_1<t_quest_log_window, t_button*>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54012
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_1<t_quest_log_window, t_button*>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_2@Vt_quest_log_window@@PAVt_button@@H@@;vft=4e7ee4;col=512c28;td=5b0cf8;chd=512c18;offset=8;cdOffset=0;validated-hierarchy; map:54013
DATA_CHT_1_COMPGEN(0x00912c28, "const t_bound_handler_2<t_quest_log_window, t_button*, int>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_button*, int>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_2@Vt_quest_log_window@@PAVt_button@@H@@;bcd=512bec;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54014
DATA_CHT_1_COMPGEN(0x00912bec, "t_bound_handler_2<t_quest_log_window, t_button*, int>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_2@Vt_quest_log_window@@PAVt_button@@H@@;vft=4e7ee4;col=512c28;td=5b0cf8;chd=512c18;offset=8;cdOffset=0;validated-hierarchy; map:54015
DATA_CHT_1_COMPGEN(0x00912c04, "t_bound_handler_2<t_quest_log_window, t_button*, int>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_2@Vt_quest_log_window@@PAVt_button@@H@@;vft=4e7ee4;col=512c28;td=5b0cf8;chd=512c18;offset=8;cdOffset=0;validated-hierarchy; map:54016
DATA_CHT_1_COMPGEN(0x00912c18, "t_bound_handler_2<t_quest_log_window, t_button*, int>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54017
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_2<t_quest_log_window, t_button*, int>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_2@Vt_quest_log_window@@PAVt_scrollbar@@H@@;vft=4e7ef8;col=512c8c;td=5b0d40;chd=512c7c;offset=8;cdOffset=0;validated-hierarchy; map:54018
DATA_CHT_1_COMPGEN(0x00912c8c, "const t_bound_handler_2<t_quest_log_window, t_scrollbar*, int>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_scrollbar*, int>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_2@Vt_quest_log_window@@PAVt_scrollbar@@H@@;bcd=512c50;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54019
DATA_CHT_1_COMPGEN(0x00912c50, "t_bound_handler_2<t_quest_log_window, t_scrollbar*, int>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_2@Vt_quest_log_window@@PAVt_scrollbar@@H@@;vft=4e7ef8;col=512c8c;td=5b0d40;chd=512c7c;offset=8;cdOffset=0;validated-hierarchy; map:54020
DATA_CHT_1_COMPGEN(0x00912c68, "t_bound_handler_2<t_quest_log_window, t_scrollbar*, int>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_2@Vt_quest_log_window@@PAVt_scrollbar@@H@@;vft=4e7ef8;col=512c8c;td=5b0d40;chd=512c7c;offset=8;cdOffset=0;validated-hierarchy; map:54021
DATA_CHT_1_COMPGEN(0x00912c7c, "t_bound_handler_2<t_quest_log_window, t_scrollbar*, int>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54022
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_2<t_quest_log_window, t_scrollbar*, int>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// === .data (4 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_quest_log_window@@;td=5b0c6c;validated-header; map:58975
DATA_CHT_1_COMPGEN(0x009b0c6c, "t_quest_log_window `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_1@Vt_quest_log_window@@PAVt_button@@@@;td=5b0cb0;validated-header; map:58976
DATA_CHT_1_COMPGEN(0x009b0cb0, "t_bound_handler_1<t_quest_log_window, t_button*> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_2@Vt_quest_log_window@@PAVt_button@@H@@;td=5b0cf8;validated-header; map:58977
DATA_CHT_1_COMPGEN(0x009b0cf8, "t_bound_handler_2<t_quest_log_window, t_button*, int> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_2@Vt_quest_log_window@@PAVt_scrollbar@@H@@;td=5b0d40;validated-header; map:58978
DATA_CHT_1_COMPGEN(0x009b0d40, "t_bound_handler_2<t_quest_log_window, t_scrollbar*, int> `RTTI Type Descriptor'")

// === .bss (1 symbols) ===

namespace {

// confidence:B; dyninit-global; owner-conf-B; map:60328
DATA_CHT_1(0x009f3ce8)
t_bitmap_group_cache k_quest_log_bitmaps; // Initial value unavailable.

} // anonymous namespace
