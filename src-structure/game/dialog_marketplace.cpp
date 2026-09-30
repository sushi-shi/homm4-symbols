// dialog_marketplace.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 56/85 (A:24 B:4 C:0); unaccounted 29; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (54 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65858; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0067ca20, 0x15, STATIC_INIT_DISPATCH, "dialog_marketplace#1")

// name:C; dyninit; see ledger; map:65859
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "dialog_marketplace#1")

// confidence:D; dyninit-init; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:65860; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0067ca40, 0x11, STATIC_INIT_DISPATCH, k_marketplace_bitmaps)

// confidence:D; dyninit-ctor; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:65861; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0067ca60, 0xd7, STATIC_CTOR, k_marketplace_bitmaps)

// name:B; dyninit; see ledger; map:65862
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, k_marketplace_bitmaps)

// confidence:D; dyninit-dtor; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:65863; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0067cb40, 0xa, STATIC_DTOR, k_marketplace_bitmaps)

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:25155
VA_CHT_1(0x0067cb50, 0xb1)
t_dialog_marketplace::t_dialog_marketplace(t_window* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:25156
VA_CHT_1(0x0067cd10, 0x1d13)
void t_dialog_marketplace::init_dialog(
    t_window* arg_0,
    t_adventure_frame* arg_1,
    std::string const& arg_2,
    std::string const& arg_3,
    int arg_4
)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:65864
VA_CHT_1(0x0067ea30, 0x22d)
static t_button* create_marketplace_player_button(
    t_screen_point& arg_0,
    t_window* arg_1,
    int arg_2,
    std::string arg_3,
    t_help_block const& arg_4
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:25157
VA_CHT_1(0x0067ec60, 0x8d)
void t_dialog_marketplace::show_player_material_amount()
{
    // Body unavailable.
}

// name:A; map symbol; map:65865
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
static void set_text(t_text_window* arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:25158
VA_CHT_1(0x0067ecf0, 0x9c)
void t_dialog_marketplace::player_material_clicked(t_button* arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:25159
VA_CHT_1(0x0067ed90, 0x9c)
void t_dialog_marketplace::market_material_clicked(t_button* arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:25160
VA_CHT_1(0x0067ee30, 0x491)
void t_dialog_marketplace::show_exchange_items()
{
    // Body unavailable.
}

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65866; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0067f2d0, 0x11, STATIC_INIT_DISPATCH, "dialog_marketplace#3")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65867; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0067f2f0, 0xd1, STATIC_CTOR, "dialog_marketplace#3")

// name:C; dyninit; see ledger; map:65868
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "dialog_marketplace#3")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65869; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0067f3d0, 0xa, STATIC_DTOR, "dialog_marketplace#3")

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:25161
VA_CHT_1(0x0067f3e0, 0x219)
void t_dialog_marketplace::show_exchange_rates()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:25162
VA_CHT_1(0x0067f600, 0x102)
void t_dialog_marketplace::reset_market_rate_text()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:25163
VA_CHT_1(0x0067f710, 0xac)
void t_dialog_marketplace::scrollbar_move(t_scrollbar* arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:25164
VA_CHT_1(0x0067f7c0, 0xe1)
void t_dialog_marketplace::buy_clicked(t_button* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:25165
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_dialog_marketplace::max_clicked(t_button* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:25166
VA_CHT_1(0x0067f8b0, 0x15)
void t_dialog_marketplace::close_click(t_button* arg_0)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:65870; name:B (dyninit; see ledger)
VA_CHT_1(0x0067f9f0, 0x20)
// dialog_marketplace$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:65872; name:B (dyninit; see ledger)
VA_CHT_1(0x0067fa10, 0x5c)
// dialog_marketplace$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:65873
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// dialog_marketplace$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:65874
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// dialog_marketplace$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:65875
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// dialog_marketplace$tatexit4
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:25167
VA_CHT_1_COMPGEN(0x0067cc10, 0x1e, SCALAR_DELETING_DTOR, t_dialog_marketplace)

// name:A; map symbol; map:25168
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_dialog_marketplace)

// name:A; map symbol; map:25169
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_dialog_marketplace::~t_dialog_marketplace()
{
    // Body unavailable.
}

// name:A; map symbol; map:25170
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_dialog_marketplace::can_buy()
{
    // Body unavailable.
}

// name:A; map symbol; map:25171
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_button*, int> bound_handler(
    t_dialog_marketplace& arg_0,
    void (t_dialog_marketplace::*)(t_button*, int)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:25172
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<t_button*> bound_handler(t_dialog_marketplace& arg_0, void (t_dialog_marketplace::*)(t_button*))
{
    // Body unavailable.
}

// name:A; map symbol; map:25173
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_scrollbar*, int> bound_handler(
    t_dialog_marketplace& arg_0,
    void (t_dialog_marketplace::*)(t_scrollbar*, int)
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:25174
VA_CHT_1(0x0067f8d0, 0x5e)
t_bound_handler_2<t_dialog_marketplace, t_button*, int>::t_bound_handler_2<t_dialog_marketplace, t_button*, int>(
    t_dialog_marketplace& arg_0,
    void (t_dialog_marketplace::*)(t_button*, int)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:25175
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_2<t_dialog_marketplace, t_button*, int>::operator()(t_button* arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:25176
VA_CHT_1(0x0067f930, 0x5e)
t_bound_handler_1<t_dialog_marketplace, t_button*>::t_bound_handler_1<t_dialog_marketplace, t_button*>(
    t_dialog_marketplace& arg_0,
    void (t_dialog_marketplace::*)(t_button*)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:25177
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_1<t_dialog_marketplace, t_button*>::operator()(t_button* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:25178
VA_CHT_1(0x0067f990, 0x5e)
t_bound_handler_2<t_dialog_marketplace, t_scrollbar*, int>::t_bound_handler_2<t_dialog_marketplace, t_scrollbar*, int>(
    t_dialog_marketplace& arg_0,
    void (t_dialog_marketplace::*)(t_scrollbar*, int)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:25179
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_2<t_dialog_marketplace, t_scrollbar*, int>::operator()(t_scrollbar* arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:25180
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_dialog_marketplace, t_button*, int>")

// name:A; map symbol; map:25181
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_2<t_dialog_marketplace, t_button*, int>")

// name:A; map symbol; map:25182
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_1<t_dialog_marketplace, t_button*>")

// name:A; map symbol; map:25183
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_1<t_dialog_marketplace, t_button*>")

// name:A; map symbol; map:25184
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_dialog_marketplace, t_scrollbar*, int>")

// name:A; map symbol; map:25185
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_2<t_dialog_marketplace, t_scrollbar*, int>")

// name:A; map symbol; map:25186
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_2<t_dialog_marketplace, t_button*, int>::~t_bound_handler_2<t_dialog_marketplace, t_button*, int>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:25187
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_1<t_dialog_marketplace, t_button*>::~t_bound_handler_1<t_dialog_marketplace, t_button*>()
{
    // Body unavailable.
}

// name:A; map symbol; map:25188
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_2<t_dialog_marketplace, t_scrollbar*, int>::~t_bound_handler_2<t_dialog_marketplace, t_scrollbar*, int>(

)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:25189
VA_CHT_1_COMPGEN(0x0067fa70, 0x8, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_dialog_marketplace, t_button*, int>")

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:25190
VA_CHT_1_COMPGEN(0x0067fa80, 0x8, VECTOR_DELETING_DTOR, "t_bound_handler_1<t_dialog_marketplace, t_button*>")

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:25191
VA_CHT_1_COMPGEN(0x0067fa90, 0x8, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_dialog_marketplace, t_scrollbar*, int>")

// === .rdata (7 symbols) ===

// confidence:A; rtti-name; map:44379
DATA_CHT_1_COMPGEN(0x008e07a4, "const t_dialog_marketplace::`vftable'")

// confidence:A; rtti-name; map:44380
DATA_CHT_1_COMPGEN(0x008e0810, "const t_bound_handler_2<t_dialog_marketplace, t_button*, int>::`vftable'{for `t_abstract_function_2<void, t_button*, int>'}")

// confidence:B; rtti-order; map:44381
DATA_CHT_1_COMPGEN(0x008e081c, "const t_bound_handler_2<t_dialog_marketplace, t_button*, int>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:44382
DATA_CHT_1_COMPGEN(0x008e0824, "const t_bound_handler_1<t_dialog_marketplace, t_button*>::`vftable'{for `t_abstract_function_1<void, t_button*>'}")

// confidence:B; rtti-order; map:44383
DATA_CHT_1_COMPGEN(0x008e0830, "const t_bound_handler_1<t_dialog_marketplace, t_button*>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:44384
DATA_CHT_1_COMPGEN(0x008e0838, "const t_bound_handler_2<t_dialog_marketplace, t_scrollbar*, int>::`vftable'{for `t_abstract_function_2<void, t_scrollbar*, int>'}")

// confidence:B; rtti-order; map:44385
DATA_CHT_1_COMPGEN(0x008e0844, "const t_bound_handler_2<t_dialog_marketplace, t_scrollbar*, int>::`vftable'{for `t_counted_object'}")

// === .rdata$r (19 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_dialog_marketplace@@;bcd=50a58c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52135
DATA_CHT_1_COMPGEN(0x0090a58c, "t_dialog_marketplace::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_dialog_marketplace@@;vft=4e07a4;col=50a5c8;td=5a29f4;chd=50a5b8;offset=0;cdOffset=0;validated-hierarchy; map:52136
DATA_CHT_1_COMPGEN(0x0090a5a4, "t_dialog_marketplace::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_dialog_marketplace@@;vft=4e07a4;col=50a5c8;td=5a29f4;chd=50a5b8;offset=0;cdOffset=0;validated-hierarchy; map:52137
DATA_CHT_1_COMPGEN(0x0090a5b8, "t_dialog_marketplace::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_dialog_marketplace@@;vft=4e07a4;col=50a5c8;td=5a29f4;chd=50a5b8;offset=0;cdOffset=0;validated-hierarchy; map:52138
DATA_CHT_1_COMPGEN(0x0090a5c8, "const t_dialog_marketplace::`RTTI Complete Object Locator'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_2@Vt_dialog_marketplace@@PAVt_button@@H@@;vft=4e0810;col=50a62c;td=5a2ac8;chd=50a61c;offset=8;cdOffset=0;validated-hierarchy; map:52139
DATA_CHT_1_COMPGEN(0x0090a62c, "const t_bound_handler_2<t_dialog_marketplace, t_button*, int>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_button*, int>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_2@Vt_dialog_marketplace@@PAVt_button@@H@@;bcd=50a5f0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52140
DATA_CHT_1_COMPGEN(0x0090a5f0, "t_bound_handler_2<t_dialog_marketplace, t_button*, int>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_2@Vt_dialog_marketplace@@PAVt_button@@H@@;vft=4e0810;col=50a62c;td=5a2ac8;chd=50a61c;offset=8;cdOffset=0;validated-hierarchy; map:52141
DATA_CHT_1_COMPGEN(0x0090a608, "t_bound_handler_2<t_dialog_marketplace, t_button*, int>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_2@Vt_dialog_marketplace@@PAVt_button@@H@@;vft=4e0810;col=50a62c;td=5a2ac8;chd=50a61c;offset=8;cdOffset=0;validated-hierarchy; map:52142
DATA_CHT_1_COMPGEN(0x0090a61c, "t_bound_handler_2<t_dialog_marketplace, t_button*, int>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:52143
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_2<t_dialog_marketplace, t_button*, int>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_1@Vt_dialog_marketplace@@PAVt_button@@@@;vft=4e0824;col=50a690;td=5a2b10;chd=50a680;offset=8;cdOffset=0;validated-hierarchy; map:52144
DATA_CHT_1_COMPGEN(0x0090a690, "const t_bound_handler_1<t_dialog_marketplace, t_button*>::`RTTI Complete Object Locator'{for `t_abstract_function_1<void, t_button*>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_1@Vt_dialog_marketplace@@PAVt_button@@@@;bcd=50a654;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52145
DATA_CHT_1_COMPGEN(0x0090a654, "t_bound_handler_1<t_dialog_marketplace, t_button*>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_1@Vt_dialog_marketplace@@PAVt_button@@@@;vft=4e0824;col=50a690;td=5a2b10;chd=50a680;offset=8;cdOffset=0;validated-hierarchy; map:52146
DATA_CHT_1_COMPGEN(0x0090a66c, "t_bound_handler_1<t_dialog_marketplace, t_button*>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_1@Vt_dialog_marketplace@@PAVt_button@@@@;vft=4e0824;col=50a690;td=5a2b10;chd=50a680;offset=8;cdOffset=0;validated-hierarchy; map:52147
DATA_CHT_1_COMPGEN(0x0090a680, "t_bound_handler_1<t_dialog_marketplace, t_button*>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:52148
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_1<t_dialog_marketplace, t_button*>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_2@Vt_dialog_marketplace@@PAVt_scrollbar@@H@@;vft=4e0838;col=50a6f4;td=5a2b58;chd=50a6e4;offset=8;cdOffset=0;validated-hierarchy; map:52149
DATA_CHT_1_COMPGEN(0x0090a6f4, "const t_bound_handler_2<t_dialog_marketplace, t_scrollbar*, int>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_scrollbar*, int>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_2@Vt_dialog_marketplace@@PAVt_scrollbar@@H@@;bcd=50a6b8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52150
DATA_CHT_1_COMPGEN(0x0090a6b8, "t_bound_handler_2<t_dialog_marketplace, t_scrollbar*, int>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_2@Vt_dialog_marketplace@@PAVt_scrollbar@@H@@;vft=4e0838;col=50a6f4;td=5a2b58;chd=50a6e4;offset=8;cdOffset=0;validated-hierarchy; map:52151
DATA_CHT_1_COMPGEN(0x0090a6d0, "t_bound_handler_2<t_dialog_marketplace, t_scrollbar*, int>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_2@Vt_dialog_marketplace@@PAVt_scrollbar@@H@@;vft=4e0838;col=50a6f4;td=5a2b58;chd=50a6e4;offset=8;cdOffset=0;validated-hierarchy; map:52152
DATA_CHT_1_COMPGEN(0x0090a6e4, "t_bound_handler_2<t_dialog_marketplace, t_scrollbar*, int>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:52153
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_2<t_dialog_marketplace, t_scrollbar*, int>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// === .data (4 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_dialog_marketplace@@;td=5a29f4;validated-header; map:58522
DATA_CHT_1_COMPGEN(0x009a29f4, "t_dialog_marketplace `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_2@Vt_dialog_marketplace@@PAVt_button@@H@@;td=5a2ac8;validated-header; map:58523
DATA_CHT_1_COMPGEN(0x009a2ac8, "t_bound_handler_2<t_dialog_marketplace, t_button*, int> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_1@Vt_dialog_marketplace@@PAVt_button@@@@;td=5a2b10;validated-header; map:58524
DATA_CHT_1_COMPGEN(0x009a2b10, "t_bound_handler_1<t_dialog_marketplace, t_button*> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_2@Vt_dialog_marketplace@@PAVt_scrollbar@@H@@;td=5a2b58;validated-header; map:58525
DATA_CHT_1_COMPGEN(0x009a2b58, "t_bound_handler_2<t_dialog_marketplace, t_scrollbar*, int> `RTTI Type Descriptor'")

// === .bss (1 symbols) ===

// confidence:B; dyninit-global; owner-conf-B; map:60212
DATA_CHT_1(0x009edd7c)
t_bitmap_group_cache k_marketplace_bitmaps; // Initial value unavailable.
