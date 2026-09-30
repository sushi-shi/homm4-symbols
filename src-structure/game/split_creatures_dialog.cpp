// split_creatures_dialog.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 21/32 (A:12 B:1 C:0); unaccounted 11; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (18 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:62455; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007df440, 0x11, STATIC_INIT_DISPATCH, "split_creatures_dialog#1")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:62456; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007df460, 0xd7, STATIC_CTOR, "split_creatures_dialog#1")

// name:C; dyninit; see ledger; map:62457
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "split_creatures_dialog#1")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:62458; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007df540, 0xa, STATIC_DTOR, "split_creatures_dialog#1")

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:38305
VA_CHT_1(0x007df550, 0xd7d)
t_split_creatures_dialog::t_split_creatures_dialog(
    t_creature_type arg_0,
    int arg_1,
    int arg_2,
    t_window* arg_3,
    int arg_4,
    int arg_5
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:38306
VA_CHT_1(0x007e0430, 0x1f0)
t_text_window* t_split_creatures_dialog::add_text(std::string const& arg_0, std::string const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:38307
VA_CHT_1(0x007e0720, 0x5e)
void t_split_creatures_dialog::slider_change(t_scrollbar* arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:62459; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007e07b0, 0x20, STATIC_INIT_DISPATCH, split_creatures_dialog)

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:38308
VA_CHT_1_COMPGEN(0x007e02d0, 0x1e, SCALAR_DELETING_DTOR, t_split_creatures_dialog)

// name:A; map symbol; map:38309
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_split_creatures_dialog)

// name:A; map symbol; map:38310
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_split_creatures_dialog::~t_split_creatures_dialog()
{
    // Body unavailable.
}

// name:A; map symbol; map:38311
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_scrollbar*, int> bound_handler(
    t_split_creatures_dialog& arg_0,
    void (t_split_creatures_dialog::*)(t_scrollbar*, int)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:38312
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_2<t_split_creatures_dialog, t_scrollbar*, int>::t_bound_handler_2<t_split_creatures_dialog, t_scrollbar*, int>(
    t_split_creatures_dialog& arg_0,
    void (t_split_creatures_dialog::*)(t_scrollbar*, int)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:38313
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_2<t_split_creatures_dialog, t_scrollbar*, int>::operator()(t_scrollbar* arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:38314
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_2<t_split_creatures_dialog, t_scrollbar*, int>")

// name:A; map symbol; map:38315
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_split_creatures_dialog, t_scrollbar*, int>")

// name:A; map symbol; map:38316
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_2<t_split_creatures_dialog, t_scrollbar*, int>::~t_bound_handler_2<t_split_creatures_dialog, t_scrollbar*, int>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:38317
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_split_creatures_dialog, t_scrollbar*, int>")

// === .rdata (3 symbols) ===

// confidence:A; rtti-name; map:45853
DATA_CHT_1_COMPGEN(0x008ee01c, "const t_split_creatures_dialog::`vftable'")

// confidence:A; rtti-name; map:45854
DATA_CHT_1_COMPGEN(0x008ee088, "const t_bound_handler_2<t_split_creatures_dialog, t_scrollbar*, int>::`vftable'{for `t_abstract_function_2<void, t_scrollbar*, int>'}")

// confidence:B; rtti-order; map:45855
DATA_CHT_1_COMPGEN(0x008ee094, "const t_bound_handler_2<t_split_creatures_dialog, t_scrollbar*, int>::`vftable'{for `t_counted_object'}")

// === .rdata$r (9 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_split_creatures_dialog@@;bcd=51c594;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56564
DATA_CHT_1_COMPGEN(0x0091c594, "t_split_creatures_dialog::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_split_creatures_dialog@@;vft=4ee01c;col=51c5d8;td=5bcc50;chd=51c5c8;offset=0;cdOffset=0;validated-hierarchy; map:56565
DATA_CHT_1_COMPGEN(0x0091c5ac, "t_split_creatures_dialog::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_split_creatures_dialog@@;vft=4ee01c;col=51c5d8;td=5bcc50;chd=51c5c8;offset=0;cdOffset=0;validated-hierarchy; map:56566
DATA_CHT_1_COMPGEN(0x0091c5c8, "t_split_creatures_dialog::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_split_creatures_dialog@@;vft=4ee01c;col=51c5d8;td=5bcc50;chd=51c5c8;offset=0;cdOffset=0;validated-hierarchy; map:56567
DATA_CHT_1_COMPGEN(0x0091c5d8, "const t_split_creatures_dialog::`RTTI Complete Object Locator'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_2@Vt_split_creatures_dialog@@PAVt_scrollbar@@H@@;vft=4ee088;col=51c63c;td=5bccb8;chd=51c62c;offset=8;cdOffset=0;validated-hierarchy; map:56568
DATA_CHT_1_COMPGEN(0x0091c63c, "const t_bound_handler_2<t_split_creatures_dialog, t_scrollbar*, int>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_scrollbar*, int>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_2@Vt_split_creatures_dialog@@PAVt_scrollbar@@H@@;bcd=51c600;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56569
DATA_CHT_1_COMPGEN(0x0091c600, "t_bound_handler_2<t_split_creatures_dialog, t_scrollbar*, int>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_2@Vt_split_creatures_dialog@@PAVt_scrollbar@@H@@;vft=4ee088;col=51c63c;td=5bccb8;chd=51c62c;offset=8;cdOffset=0;validated-hierarchy; map:56570
DATA_CHT_1_COMPGEN(0x0091c618, "t_bound_handler_2<t_split_creatures_dialog, t_scrollbar*, int>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_2@Vt_split_creatures_dialog@@PAVt_scrollbar@@H@@;vft=4ee088;col=51c63c;td=5bccb8;chd=51c62c;offset=8;cdOffset=0;validated-hierarchy; map:56571
DATA_CHT_1_COMPGEN(0x0091c62c, "t_bound_handler_2<t_split_creatures_dialog, t_scrollbar*, int>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:56572
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_2<t_split_creatures_dialog, t_scrollbar*, int>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// === .data (2 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_split_creatures_dialog@@;td=5bcc50;validated-header; map:59610
DATA_CHT_1_COMPGEN(0x009bcc50, "t_split_creatures_dialog `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_2@Vt_split_creatures_dialog@@PAVt_scrollbar@@H@@;td=5bccb8;validated-header; map:59611
DATA_CHT_1_COMPGEN(0x009bccb8, "t_bound_handler_2<t_split_creatures_dialog, t_scrollbar*, int> `RTTI Type Descriptor'")
