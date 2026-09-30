// adv_magi_eye.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\adv_magi_eye.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 25/41 (A:13 B:3 C:0); unaccounted 16; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (20 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:71086; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0043e910, 0x15, STATIC_INIT_DISPATCH, "adv_magi_eye#1")

// name:C; dyninit; see ledger; map:71087
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adv_magi_eye#1")

// confidence:D; dyninit-init; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:71088; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0043e930, 0x1c, STATIC_INIT_DISPATCH, g_adv_magi_eye_registration)

// name:B; dyninit; see ledger; map:71089
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, g_adv_magi_eye_registration)

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:4747
VA_CHT_1(0x0043e950, 0x20)
void t_adv_magi_eye::place(t_adventure_map& arg_0, t_adv_map_point const& arg_1)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:71090; name:B (dyninit; see ledger)
VA_CHT_1(0x0043eb40, 0x20)
// adv_magi_eye$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:71092; name:B (dyninit; see ledger)
VA_CHT_1(0x0043eb60, 0x5c)
// adv_magi_eye$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:71093
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adv_magi_eye$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:71094
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adv_magi_eye$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:71095
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adv_magi_eye$tatexit4
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:4748
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_registration<t_adv_magi_eye>::t_object_registration<t_adv_magi_eye>(t_adv_object_type arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:4749
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_factory<t_adv_magi_eye>::t_object_factory<t_adv_magi_eye>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot;vftable-certificate=3e970:4750;class=t_object_factory<class t_adv_magi_eye>;proof=unique-hierarchy-method-and-slot-cleanup;cleanup=8;checked-rtti-and-raw-slots;vft=4cff24,col=4f7908,offset=0,slot=0,entry=3e970; map:4750
VA_CHT_1(0x0043e970, 0x136)
t_stationary_adventure_object* t_object_factory<t_adv_magi_eye>::create(
    std::string const& arg_0,
    t_qualified_adv_object_type const& arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:4751
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_magi_eye::t_adv_magi_eye(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:4752
VA_CHT_1_COMPGEN(0x0043eab0, 0x2d, VECTOR_DELETING_DTOR, t_adv_magi_eye)

// name:A; map symbol; map:4753
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_adv_magi_eye)

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4754
VA_CHT_1(0x0043eae0, 0x57)
// public: void t_adv_magi_eye::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:4755
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_magi_eye::~t_adv_magi_eye()
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4756
VA_CHT_1_COMPGEN(0x0043ebc0, 0x8, VECTOR_DELETING_DTOR, t_adv_magi_eye)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4757
VA_CHT_1_COMPGEN(0x0043ebd0, 0xb, VECTOR_DELETING_DTOR, t_adv_magi_eye)

// === .rdata (7 symbols) ===

// confidence:A; rtti-name; map:42869
DATA_CHT_1_COMPGEN(0x008cff24, "const t_object_factory<t_adv_magi_eye>::`vftable'")

// name:A; map symbol; map:42870
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_magi_eye::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:42871
DATA_CHT_1_COMPGEN(0x008cff2c, "const t_adv_magi_eye::`vftable'")

// confidence:B; rtti-order; map:42872
DATA_CHT_1_COMPGEN(0x008cffec, "const t_adv_magi_eye::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:42873
DATA_CHT_1_COMPGEN(0x008cfff4, "const t_adv_magi_eye::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:42874
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_magi_eye::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:42875
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_magi_eye::`vbtable'{for `t_abstract_stationary_adv_object'}")

// === .rdata$r (11 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_object_factory@Vt_adv_magi_eye@@@@;bcd=4f78d4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48083
DATA_CHT_1_COMPGEN(0x008f78d4, "t_object_factory<t_adv_magi_eye>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_object_factory@Vt_adv_magi_eye@@@@;vft=4cff24;col=4f7908;td=588b00;chd=4f78f8;offset=0;cdOffset=0;validated-hierarchy; map:48084
DATA_CHT_1_COMPGEN(0x008f78ec, "t_object_factory<t_adv_magi_eye>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_object_factory@Vt_adv_magi_eye@@@@;vft=4cff24;col=4f7908;td=588b00;chd=4f78f8;offset=0;cdOffset=0;validated-hierarchy; map:48085
DATA_CHT_1_COMPGEN(0x008f78f8, "t_object_factory<t_adv_magi_eye>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_object_factory@Vt_adv_magi_eye@@@@;vft=4cff24;col=4f7908;td=588b00;chd=4f78f8;offset=0;cdOffset=0;validated-hierarchy; map:48086
DATA_CHT_1_COMPGEN(0x008f7908, "const t_object_factory<t_adv_magi_eye>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:48087
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_magi_eye::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_adv_magi_eye@@;vft=4cff2c;col=4f79a8;td=588b34;chd=4f7998;offset=84;cdOffset=0;validated-hierarchy; map:48088
DATA_CHT_1_COMPGEN(0x008f79a8, "const t_adv_magi_eye::`RTTI Complete Object Locator'")

// name:A; map symbol; map:48089
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_magi_eye::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adv_magi_eye@@;bcd=4f7958;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48090
DATA_CHT_1_COMPGEN(0x008f7958, "t_adv_magi_eye::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adv_magi_eye@@;vft=4cff2c;col=4f79a8;td=588b34;chd=4f7998;offset=84;cdOffset=0;validated-hierarchy; map:48091
DATA_CHT_1_COMPGEN(0x008f7970, "t_adv_magi_eye::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adv_magi_eye@@;vft=4cff2c;col=4f79a8;td=588b34;chd=4f7998;offset=84;cdOffset=0;validated-hierarchy; map:48092
DATA_CHT_1_COMPGEN(0x008f7998, "t_adv_magi_eye::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:48093
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_magi_eye::`RTTI Complete Object Locator'{for `t_counted_object'}")

// === .data (2 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AV?$t_object_factory@Vt_adv_magi_eye@@@@;td=588b00;validated-header; map:57495
DATA_CHT_1_COMPGEN(0x00988b00, "t_object_factory<t_adv_magi_eye> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_adv_magi_eye@@;td=588b34;validated-header; map:57496
DATA_CHT_1_COMPGEN(0x00988b34, "t_adv_magi_eye `RTTI Type Descriptor'")

// === .bss (1 symbols) ===

namespace {

// confidence:B; dyninit-global; owner-conf-B; map:59952
DATA_CHT_1(0x009c743c)
t_object_registration<t_adv_magi_eye> g_adv_magi_eye_registration; // Initial value unavailable.

} // anonymous namespace
