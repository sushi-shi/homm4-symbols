// panic.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\panic.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 18/30 (A:6 B:1 C:0); unaccounted 12; skipped std 6.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (22 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:63782; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00757f40, 0x15, STATIC_INIT_DISPATCH, "panic#1")

// name:C; dyninit; see ledger; map:63783
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "panic#1")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:63784; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00757f60, 0x15, STATIC_INIT_DISPATCH, "panic#2")

// name:C; dyninit; see ledger; map:63785
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "panic#2")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:63786; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00757f80, 0x15, STATIC_INIT_DISPATCH, "panic#3")

// name:C; dyninit; see ledger; map:63787
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "panic#3")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:63788; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00757fa0, 0x15, STATIC_INIT_DISPATCH, "panic#4")

// name:C; dyninit; see ledger; map:63789
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "panic#4")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:63790; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00757fc0, 0x10, STATIC_INIT_DISPATCH, "panic#5")

// name:C; dyninit; see ledger; map:63791
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "panic#5")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:63792; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00757fd0, 0x15, STATIC_INIT_DISPATCH, "panic#6")

// name:C; dyninit; see ledger; map:63793
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "panic#6")

namespace {

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:31715
VA_CHT_1(0x00757ff0, 0x209)
t_panic_move::t_panic_move(
    t_combat_creature* arg_0,
    t_combat_path const& arg_1,
    t_combat_action_message const& arg_2
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:31716
VA_CHT_1(0x007582d0, 0x127)
void t_panic_move::operator()(t_window* arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:31717
VA_CHT_1(0x00758400, 0x550)
bool t_combat_creature::begin_panic(t_combat_creature const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:63794
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
static bool find_panic_destination(
    t_combat_path_finder& arg_0,
    int arg_1,
    t_map_point_2d const& arg_2,
    t_map_point_2d& arg_3
)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:63795; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007589b0, 0x20, STATIC_INIT_DISPATCH, panic)

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:31718
VA_CHT_1_COMPGEN(0x00758200, 0x1e, SCALAR_DELETING_DTOR, t_panic_move)

// name:A; map symbol; map:31719
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_panic_move)

// name:A; map symbol; map:31720
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_path& t_combat_path::operator=(t_combat_path const& arg_0)
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:31721
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_panic_move::~t_panic_move()
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:31727
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_panic_move)

// === .rdata (2 symbols) ===

// confidence:A; rtti-name; map:45003
DATA_CHT_1_COMPGEN(0x008e727c, "const t_panic_move::`vftable'{for `t_abstract_function_1<void, t_window*>'}")

// confidence:B; rtti-order; map:45004
DATA_CHT_1_COMPGEN(0x008e7288, "const t_panic_move::`vftable'{for `t_counted_object'}")

// === .rdata$r (5 symbols) ===

// confidence:A; rtti-col-pointer; type-name=.?AVt_panic_move@?%C:\Work\game\panic.cpp164165870@@;vft=4e727c;col=511fd0;td=5af6e8;chd=511fc0;offset=8;cdOffset=0;validated-hierarchy; map:53852
DATA_CHT_1_COMPGEN(0x00911fd0, "const t_panic_move::`RTTI Complete Object Locator'{for `t_abstract_function_1<void, t_window*>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_panic_move@?%C:\Work\game\panic.cpp164165870@@;bcd=511f94;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53853
DATA_CHT_1_COMPGEN(0x00911f94, "t_panic_move::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_panic_move@?%C:\Work\game\panic.cpp164165870@@;vft=4e727c;col=511fd0;td=5af6e8;chd=511fc0;offset=8;cdOffset=0;validated-hierarchy; map:53854
DATA_CHT_1_COMPGEN(0x00911fac, "t_panic_move::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_panic_move@?%C:\Work\game\panic.cpp164165870@@;vft=4e727c;col=511fd0;td=5af6e8;chd=511fc0;offset=8;cdOffset=0;validated-hierarchy; map:53855
DATA_CHT_1_COMPGEN(0x00911fc0, "t_panic_move::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:53856
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_panic_move::`RTTI Complete Object Locator'{for `t_counted_object'}")

// === .data (1 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_panic_move@?%C:\Work\game\panic.cpp164165870@@;td=5af6e8;validated-header; map:58946
DATA_CHT_1_COMPGEN(0x009af6e8, "t_panic_move `RTTI Type Descriptor'")
