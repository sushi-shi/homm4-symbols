// lighthouse.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\lighthouse.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 27/47 (A:12 B:3 C:0); unaccounted 20; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (25 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:64847; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006eb230, 0x15, STATIC_INIT_DISPATCH, "lighthouse#1")

// name:C; dyninit; see ledger; map:64848
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "lighthouse#1")

// confidence:D; dyninit-init; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:64849; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006eb250, 0x1c, STATIC_INIT_DISPATCH, g_lighthouse_registration)

// name:B; dyninit; see ledger; map:64850
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, g_lighthouse_registration)

// name:A; map symbol; map:28201
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_lighthouse::read_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_progress_handler* arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:28202
VA_CHT_1(0x006eb270, 0x3a1)
void t_lighthouse::activate_trigger(
    t_army* arg_0,
    t_adv_map_point const& arg_1,
    t_direction arg_2,
    t_adventure_frame* arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:28203
VA_CHT_1(0x006eb620, 0xab)
float t_lighthouse::ai_value(t_adventure_ai const& arg_0, t_creature_array const& arg_1, int arg_2) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:28204
VA_CHT_1(0x006eb6d0, 0x42)
void t_lighthouse::place(t_adventure_map& arg_0, t_adv_map_point const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:28205
VA_CHT_1(0x006eb720, 0x67)
void t_lighthouse::set_owner(int arg_0)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:64851; name:B (dyninit; see ledger)
VA_CHT_1(0x006eb9f0, 0x20)
// lighthouse$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:64853; name:B (dyninit; see ledger)
VA_CHT_1(0x006eba10, 0x5c)
// lighthouse$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:64854
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// lighthouse$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:64855
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// lighthouse$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:64856
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// lighthouse$tatexit4
// Function body not reconstructed; signature retained as a comment.

namespace {

// name:A; map symbol; map:28206
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int to_base_map_format_version(int arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:28207
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_registration<t_lighthouse>::t_object_registration<t_lighthouse>(t_adv_object_type arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:28208
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_factory<t_lighthouse>::t_object_factory<t_lighthouse>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:28209
VA_CHT_1(0x006eb790, 0x189)
t_stationary_adventure_object* t_object_factory<t_lighthouse>::create(
    std::string const& arg_0,
    t_qualified_adv_object_type const& arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:28210
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_lighthouse::t_lighthouse(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:28211
VA_CHT_1_COMPGEN(0x006eb920, 0x2d, VECTOR_DELETING_DTOR, t_lighthouse)

// name:A; map symbol; map:28212
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_lighthouse)

// name:A; map symbol; map:28213
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// public: void t_lighthouse::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:28214
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_lighthouse::~t_lighthouse()
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28215
VA_CHT_1_COMPGEN(0x006eba70, 0x8, VECTOR_DELETING_DTOR, t_lighthouse)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28216
VA_CHT_1_COMPGEN(0x006eba80, 0xb, VECTOR_DELETING_DTOR, t_lighthouse)

// === .rdata (8 symbols) ===

// name:A; map symbol; map:44661
DATA_CHT_1(UNACCOUNTED)
// __real@4@3ffc887fcc0000000000

// confidence:A; rtti-name; map:44662
DATA_CHT_1_COMPGEN(0x008e3d2c, "const t_object_factory<t_lighthouse>::`vftable'")

// name:A; map symbol; map:44663
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_lighthouse::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:44664
DATA_CHT_1_COMPGEN(0x008e3d3c, "const t_lighthouse::`vftable'")

// confidence:B; rtti-order; map:44665
DATA_CHT_1_COMPGEN(0x008e3dfc, "const t_lighthouse::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:44666
DATA_CHT_1_COMPGEN(0x008e3e04, "const t_lighthouse::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:44667
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_lighthouse::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:44668
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_lighthouse::`vbtable'{for `t_abstract_stationary_adv_object'}")

// === .rdata$r (11 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_object_factory@Vt_lighthouse@@@@;bcd=50dcd8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52943
DATA_CHT_1_COMPGEN(0x0090dcd8, "t_object_factory<t_lighthouse>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_object_factory@Vt_lighthouse@@@@;vft=4e3d2c;col=50dd0c;td=5aa4a8;chd=50dcfc;offset=0;cdOffset=0;validated-hierarchy; map:52944
DATA_CHT_1_COMPGEN(0x0090dcf0, "t_object_factory<t_lighthouse>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_object_factory@Vt_lighthouse@@@@;vft=4e3d2c;col=50dd0c;td=5aa4a8;chd=50dcfc;offset=0;cdOffset=0;validated-hierarchy; map:52945
DATA_CHT_1_COMPGEN(0x0090dcfc, "t_object_factory<t_lighthouse>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_object_factory@Vt_lighthouse@@@@;vft=4e3d2c;col=50dd0c;td=5aa4a8;chd=50dcfc;offset=0;cdOffset=0;validated-hierarchy; map:52946
DATA_CHT_1_COMPGEN(0x0090dd0c, "const t_object_factory<t_lighthouse>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:52947
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_lighthouse::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_lighthouse@@;vft=4e3d3c;col=50ddb4;td=5aa4dc;chd=50dda4;offset=112;cdOffset=0;validated-hierarchy; map:52948
DATA_CHT_1_COMPGEN(0x0090ddb4, "const t_lighthouse::`RTTI Complete Object Locator'")

// name:A; map symbol; map:52949
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_lighthouse::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_lighthouse@@;bcd=50dd5c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52950
DATA_CHT_1_COMPGEN(0x0090dd5c, "t_lighthouse::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_lighthouse@@;vft=4e3d3c;col=50ddb4;td=5aa4dc;chd=50dda4;offset=112;cdOffset=0;validated-hierarchy; map:52951
DATA_CHT_1_COMPGEN(0x0090dd74, "t_lighthouse::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_lighthouse@@;vft=4e3d3c;col=50ddb4;td=5aa4dc;chd=50dda4;offset=112;cdOffset=0;validated-hierarchy; map:52952
DATA_CHT_1_COMPGEN(0x0090dda4, "t_lighthouse::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:52953
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_lighthouse::`RTTI Complete Object Locator'{for `t_counted_object'}")

// === .data (2 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AV?$t_object_factory@Vt_lighthouse@@@@;td=5aa4a8;validated-header; map:58725
DATA_CHT_1_COMPGEN(0x009aa4a8, "t_object_factory<t_lighthouse> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_lighthouse@@;td=5aa4dc;validated-header; map:58726
DATA_CHT_1_COMPGEN(0x009aa4dc, "t_lighthouse `RTTI Type Descriptor'")

// === .bss (1 symbols) ===

namespace {

// confidence:B; dyninit-global; owner-conf-B; map:60265
DATA_CHT_1(0x009f1cc8)
t_object_registration<t_lighthouse> g_lighthouse_registration; // Initial value unavailable.

} // anonymous namespace
