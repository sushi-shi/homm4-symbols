// progress_bar.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 22/29 (A:13 B:1 C:0); unaccounted 7; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (14 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:63689; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00762250, 0x11, STATIC_INIT_DISPATCH, "progress_bar#1")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:63690; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00762270, 0xd7, STATIC_CTOR, "progress_bar#1")

// name:C; dyninit; see ledger; map:63691
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "progress_bar#1")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:63692; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00762350, 0xa, STATIC_DTOR, "progress_bar#1")

// confidence:D; align-order; stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:32228
VA_CHT_1(0x00762360, 0x4d6)
t_progress_bar::t_progress_bar(t_screen_point arg_0, t_window* arg_1, char const* arg_2)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:32229
VA_CHT_1(0x00762930, 0x99)
void t_progress_bar::update_progress()
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:63693; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007629d0, 0x20, STATIC_INIT_DISPATCH, progress_bar)

// name:A; map symbol; map:32230
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_progress_handler::t_progress_handler()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:32231
VA_CHT_1_COMPGEN(0x00762840, 0x1e, VECTOR_DELETING_DTOR, t_progress_handler)

// name:A; map symbol; map:32232
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_progress_handler)

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:32233
VA_CHT_1_COMPGEN(0x00762860, 0x1e, VECTOR_DELETING_DTOR, t_progress_bar)

// name:A; map symbol; map:32234
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_progress_bar)

// name:A; map symbol; map:32235
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_progress_bar::~t_progress_bar()
{
    // Body unavailable.
}

// name:A; map symbol; map:32236
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_progress_bar)

// === .rdata (3 symbols) ===

// confidence:A; rtti-name; map:45059
DATA_CHT_1_COMPGEN(0x008e7c8c, "const t_progress_bar::`vftable'{for `t_progress_handler'}")

// confidence:B; rtti-order; map:45060
DATA_CHT_1_COMPGEN(0x008e7c9c, "const t_progress_bar::`vftable'{for `t_window'}")

// confidence:A; rtti-name; map:45061
DATA_CHT_1_COMPGEN(0x008e7d08, "const t_progress_handler::`vftable'")

// === .rdata$r (10 symbols) ===

// confidence:A; rtti-col-pointer; type-name=.?AVt_progress_bar@@;vft=4e7c8c;col=51287c;td=5b0980;chd=51286c;offset=196;cdOffset=0;validated-hierarchy; map:53957
DATA_CHT_1_COMPGEN(0x0091287c, "const t_progress_bar::`RTTI Complete Object Locator'{for `t_progress_handler'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_progress_handler@@;bcd=512824;pmd=196,-1,0;attributes=0;validated-hierarchy-link; map:53958
DATA_CHT_1_COMPGEN(0x00912824, "t_progress_handler::`RTTI Base Class Descriptor at (196, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_progress_bar@@;bcd=51283c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53959
DATA_CHT_1_COMPGEN(0x0091283c, "t_progress_bar::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_progress_bar@@;vft=4e7c8c;col=51287c;td=5b0980;chd=51286c;offset=196;cdOffset=0;validated-hierarchy; map:53960
DATA_CHT_1_COMPGEN(0x00912854, "t_progress_bar::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_progress_bar@@;vft=4e7c8c;col=51287c;td=5b0980;chd=51286c;offset=196;cdOffset=0;validated-hierarchy; map:53961
DATA_CHT_1_COMPGEN(0x0091286c, "t_progress_bar::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:53962
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_progress_bar::`RTTI Complete Object Locator'{for `t_window'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_progress_handler@@;bcd=5127cc;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53963
DATA_CHT_1_COMPGEN(0x009127cc, "t_progress_handler::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_progress_handler@@;vft=4e7d08;col=5127fc;td=5b095c;chd=5127ec;offset=0;cdOffset=0;validated-hierarchy; map:53964
DATA_CHT_1_COMPGEN(0x009127e4, "t_progress_handler::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_progress_handler@@;vft=4e7d08;col=5127fc;td=5b095c;chd=5127ec;offset=0;cdOffset=0;validated-hierarchy; map:53965
DATA_CHT_1_COMPGEN(0x009127ec, "t_progress_handler::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_progress_handler@@;vft=4e7d08;col=5127fc;td=5b095c;chd=5127ec;offset=0;cdOffset=0;validated-hierarchy; map:53966
DATA_CHT_1_COMPGEN(0x009127fc, "const t_progress_handler::`RTTI Complete Object Locator'")

// === .data (2 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_progress_handler@@;td=5b095c;validated-header; map:58965
DATA_CHT_1_COMPGEN(0x009b095c, "t_progress_handler `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_progress_bar@@;td=5b0980;validated-header; map:58966
DATA_CHT_1_COMPGEN(0x009b0980, "t_progress_bar `RTTI Type Descriptor'")
