// selection_marker.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 15/28 (A:6 B:2 C:0); unaccounted 13; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (14 symbols) ===

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:36992
VA_CHT_1(0x007abc70, 0x146)
t_selection_marker::t_selection_marker(int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:62856
VA_CHT_1(0x007abdc0, 0xc8)
static std::string get_selection_marker_name(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:36993
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::auto_ptr<t_abstract_adv_object> t_selection_marker::clone() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:36994
VA_CHT_1(0x007abe90, 0x2d)
std::string t_selection_marker::get_name() const
{
    // Body unavailable.
}

// name:A; map symbol; map:36995
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_selection_marker::is_event_recordable() const
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:62857; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007ac130, 0x20, STATIC_INIT_DISPATCH, selection_marker)

// name:A; map symbol; map:36996
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_selection_marker)

// name:A; map symbol; map:36997
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_selection_marker)

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:36998
VA_CHT_1(0x007abec0, 0x57)
// public: void t_selection_marker::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:36999
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_selection_marker::~t_selection_marker()
{
    // Body unavailable.
}

// name:A; map symbol; map:37000
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_selection_marker::t_selection_marker(t_selection_marker const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:37001
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_selection_marker)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:37002
VA_CHT_1_COMPGEN(0x007ac160, 0xb, VECTOR_DELETING_DTOR, t_selection_marker)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:37003
VA_CHT_1(0x007ac170, 0x8)
// [thunk]: public: virtual std::auto_ptr<t_abstract_adv_object> t_selection_marker::clone`vtordisp{-4, 0}'(void) const
// Function body not reconstructed; signature retained as a comment.

// === .rdata (6 symbols) ===

// name:A; map symbol; map:45715
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_selection_marker::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:45716
DATA_CHT_1_COMPGEN(0x008ec384, "const t_selection_marker::`vftable'")

// confidence:B; rtti-order; map:45717
DATA_CHT_1_COMPGEN(0x008ec444, "const t_selection_marker::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:45718
DATA_CHT_1_COMPGEN(0x008ec44c, "const t_selection_marker::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:45719
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_selection_marker::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:45720
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_selection_marker::`vbtable'{for `t_abstract_stationary_adv_object'}")

// === .rdata$r (7 symbols) ===

// name:A; map symbol; map:56217
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_selection_marker::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_selection_marker@@;vft=4ec384;col=51ac38;td=5b94dc;chd=51ac28;offset=84;cdOffset=0;validated-hierarchy; map:56218
DATA_CHT_1_COMPGEN(0x0091ac38, "const t_selection_marker::`RTTI Complete Object Locator'")

// name:A; map symbol; map:56219
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_selection_marker::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_selection_marker@@;bcd=51abe8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56220
DATA_CHT_1_COMPGEN(0x0091abe8, "t_selection_marker::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_selection_marker@@;vft=4ec384;col=51ac38;td=5b94dc;chd=51ac28;offset=84;cdOffset=0;validated-hierarchy; map:56221
DATA_CHT_1_COMPGEN(0x0091ac00, "t_selection_marker::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_selection_marker@@;vft=4ec384;col=51ac38;td=5b94dc;chd=51ac28;offset=84;cdOffset=0;validated-hierarchy; map:56222
DATA_CHT_1_COMPGEN(0x0091ac28, "t_selection_marker::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:56223
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_selection_marker::`RTTI Complete Object Locator'{for `t_counted_object'}")

// === .data (1 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_selection_marker@@;td=5b94dc;validated-header; map:59535
DATA_CHT_1_COMPGEN(0x009b94dc, "t_selection_marker `RTTI Type Descriptor'")
