// adv_object_deletion_marker.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\adv_object_deletion_marker.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 24/42 (A:19 B:3 C:2); unaccounted 18; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (21 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:71008; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00443f60, 0x15, STATIC_INIT_DISPATCH, "adv_object_deletion_marker#1")

// name:C; dyninit; see ledger; map:71009
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adv_object_deletion_marker#1")

// confidence:A; dyninit-init; owner-conf-B; map:71010; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00443f80, 0x1c, STATIC_INIT_DISPATCH, g_registration)

// name:B; dyninit; see ledger; map:71011
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, g_registration)

// confidence:A; align-order; retn,stable,vslot; map:4975
VA_CHT_1(0x00443fa0, 0x15)
void t_adv_object_deletion_marker::place(t_adventure_map& arg_0, t_adv_map_point const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:4976
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adv_object_deletion_marker::read_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_progress_handler* arg_1
)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:71012; name:B (dyninit; see ledger)
VA_CHT_1(0x00444250, 0x20)
// adv_object_deletion_marker$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:A; dyninit-tinit; owner-conf-B; map:71014; name:B (dyninit; see ledger)
VA_CHT_1(0x00444270, 0x5c)
// adv_object_deletion_marker$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:71015
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adv_object_deletion_marker$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:71016
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adv_object_deletion_marker$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:71017
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adv_object_deletion_marker$tatexit4
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:4977
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_registration<t_adv_object_deletion_marker>::t_object_registration<t_adv_object_deletion_marker>(
    t_adv_object_type arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:4978
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_factory<t_adv_object_deletion_marker>::t_object_factory<t_adv_object_deletion_marker>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,vslot; map:4979
VA_CHT_1(0x00444040, 0x141)
t_stationary_adventure_object* t_object_factory<t_adv_object_deletion_marker>::create(
    std::string const& arg_0,
    t_qualified_adv_object_type const& arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:4980
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_object_deletion_marker::t_adv_object_deletion_marker(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:4981
VA_CHT_1_COMPGEN(0x00444190, 0x2d, VECTOR_DELETING_DTOR, t_adv_object_deletion_marker)

// name:A; map symbol; map:4982
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_adv_object_deletion_marker)

// name:A; map symbol; map:4983
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// public: void t_adv_object_deletion_marker::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:4984
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_object_deletion_marker::~t_adv_object_deletion_marker()
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:4985
VA_CHT_1_COMPGEN(0x004442d0, 0x8, VECTOR_DELETING_DTOR, t_adv_object_deletion_marker)

// confidence:C; align-order; stable; map:4986
VA_CHT_1_COMPGEN(0x004442e0, 0xb, VECTOR_DELETING_DTOR, t_adv_object_deletion_marker)

// === .rdata (7 symbols) ===

// confidence:A; rtti-name; map:42930
DATA_CHT_1_COMPGEN(0x008d0c8c, "const t_object_factory<t_adv_object_deletion_marker>::`vftable'")

// name:A; map symbol; map:42931
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_object_deletion_marker::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:42932
DATA_CHT_1_COMPGEN(0x008d0c94, "const t_adv_object_deletion_marker::`vftable'")

// confidence:B; rtti-order; map:42933
DATA_CHT_1_COMPGEN(0x008d0d54, "const t_adv_object_deletion_marker::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:42934
DATA_CHT_1_COMPGEN(0x008d0d5c, "const t_adv_object_deletion_marker::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:42935
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_object_deletion_marker::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:42936
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_object_deletion_marker::`vbtable'{for `t_abstract_stationary_adv_object'}")

// === .rdata$r (11 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_object_factory@Vt_adv_object_deletion_marker@@@@;bcd=4f801c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48171
DATA_CHT_1_COMPGEN(0x008f801c, "t_object_factory<t_adv_object_deletion_marker>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_object_factory@Vt_adv_object_deletion_marker@@@@;vft=4d0c8c;col=4f8050;td=588e28;chd=4f8040;offset=0;cdOffset=0;validated-hierarchy; map:48172
DATA_CHT_1_COMPGEN(0x008f8034, "t_object_factory<t_adv_object_deletion_marker>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_object_factory@Vt_adv_object_deletion_marker@@@@;vft=4d0c8c;col=4f8050;td=588e28;chd=4f8040;offset=0;cdOffset=0;validated-hierarchy; map:48173
DATA_CHT_1_COMPGEN(0x008f8040, "t_object_factory<t_adv_object_deletion_marker>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_object_factory@Vt_adv_object_deletion_marker@@@@;vft=4d0c8c;col=4f8050;td=588e28;chd=4f8040;offset=0;cdOffset=0;validated-hierarchy; map:48174
DATA_CHT_1_COMPGEN(0x008f8050, "const t_object_factory<t_adv_object_deletion_marker>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:48175
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_object_deletion_marker::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_adv_object_deletion_marker@@;vft=4d0c94;col=4f80f0;td=588e6c;chd=4f80e0;offset=100;cdOffset=0;validated-hierarchy; map:48176
DATA_CHT_1_COMPGEN(0x008f80f0, "const t_adv_object_deletion_marker::`RTTI Complete Object Locator'")

// name:A; map symbol; map:48177
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_object_deletion_marker::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adv_object_deletion_marker@@;bcd=4f80a0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48178
DATA_CHT_1_COMPGEN(0x008f80a0, "t_adv_object_deletion_marker::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adv_object_deletion_marker@@;vft=4d0c94;col=4f80f0;td=588e6c;chd=4f80e0;offset=100;cdOffset=0;validated-hierarchy; map:48179
DATA_CHT_1_COMPGEN(0x008f80b8, "t_adv_object_deletion_marker::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adv_object_deletion_marker@@;vft=4d0c94;col=4f80f0;td=588e6c;chd=4f80e0;offset=100;cdOffset=0;validated-hierarchy; map:48180
DATA_CHT_1_COMPGEN(0x008f80e0, "t_adv_object_deletion_marker::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:48181
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_object_deletion_marker::`RTTI Complete Object Locator'{for `t_counted_object'}")

// === .data (2 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AV?$t_object_factory@Vt_adv_object_deletion_marker@@@@;td=588e28;validated-header; map:57511
DATA_CHT_1_COMPGEN(0x00988e28, "t_object_factory<t_adv_object_deletion_marker> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_adv_object_deletion_marker@@;td=588e6c;validated-header; map:57512
DATA_CHT_1_COMPGEN(0x00988e6c, "t_adv_object_deletion_marker `RTTI Type Descriptor'")

// === .bss (1 symbols) ===

namespace {

// confidence:B; dyninit-global; owner-conf-B; map:59956
DATA_CHT_1(0x009c74c4)
t_object_registration<t_adv_object_deletion_marker> g_registration; // Initial value unavailable.

} // anonymous namespace
