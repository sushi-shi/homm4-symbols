// obelisk_marker.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\obelisk_marker.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 28/47 (A:13 B:3 C:0); unaccounted 19; skipped std 2.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (26 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:63943; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00747050, 0x15, STATIC_INIT_DISPATCH, "obelisk_marker#1")

// name:C; dyninit; see ledger; map:63944
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "obelisk_marker#1")

// confidence:D; dyninit-init; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:63945; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00747070, 0x1c, STATIC_INIT_DISPATCH, k_registration)

// name:B; dyninit; see ledger; map:63946
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, k_registration)

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:30923
VA_CHT_1(0x00747090, 0x12f)
bool t_obelisk_marker::read(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:30924
VA_CHT_1(0x007471c0, 0x107)
bool t_obelisk_marker::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:30925
VA_CHT_1(0x007472d0, 0xa2)
bool t_adv_obelisk_marker::read_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_progress_handler* arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:30926
VA_CHT_1(0x00747380, 0x89)
void t_adv_obelisk_marker::place(t_adventure_map& arg_0, t_adv_map_point const& arg_1)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:63947; name:B (dyninit; see ledger)
VA_CHT_1(0x007475e0, 0x20)
// obelisk_marker$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:63949; name:B (dyninit; see ledger)
VA_CHT_1(0x00747600, 0x5c)
// obelisk_marker$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:63950
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// obelisk_marker$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:63951
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// obelisk_marker$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:63952
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// obelisk_marker$tatexit4
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:30927
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_obelisk_marker::t_obelisk_marker(t_level_map_point_2d const& arg_0, unsigned short arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:30928
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_obelisk_color t_adv_obelisk_marker::get_color() const
{
    // Body unavailable.
}

// name:A; map symbol; map:30929
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adventure_map::add_obelisk_marker(t_obelisk_color arg_0, t_obelisk_marker const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:30931
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_registration<t_adv_obelisk_marker>::t_object_registration<t_adv_obelisk_marker>(
    t_adv_object_type arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:30932
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_factory<t_adv_obelisk_marker>::t_object_factory<t_adv_obelisk_marker>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot;vftable-certificate=347410:30933;class=t_object_factory<class t_adv_obelisk_marker>;proof=unique-hierarchy-method-and-slot-cleanup;cleanup=8;checked-rtti-and-raw-slots;vft=4e669c,col=5110d4,offset=0,slot=0,entry=347410; map:30933
VA_CHT_1(0x00747410, 0x13c)
t_stationary_adventure_object* t_object_factory<t_adv_obelisk_marker>::create(
    std::string const& arg_0,
    t_qualified_adv_object_type const& arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:30934
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_obelisk_marker::t_adv_obelisk_marker(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:30935
VA_CHT_1_COMPGEN(0x00747550, 0x2d, VECTOR_DELETING_DTOR, t_adv_obelisk_marker)

// name:A; map symbol; map:30936
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_adv_obelisk_marker)

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:30937
VA_CHT_1(0x00747580, 0x57)
// public: void t_adv_obelisk_marker::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:30938
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_obelisk_marker::~t_adv_obelisk_marker()
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:30939
VA_CHT_1_COMPGEN(0x00747660, 0x8, VECTOR_DELETING_DTOR, t_adv_obelisk_marker)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:30940
VA_CHT_1_COMPGEN(0x00747670, 0xb, VECTOR_DELETING_DTOR, t_adv_obelisk_marker)

// === .rdata (7 symbols) ===

// confidence:A; rtti-name; map:44930
DATA_CHT_1_COMPGEN(0x008e669c, "const t_object_factory<t_adv_obelisk_marker>::`vftable'")

// name:A; map symbol; map:44931
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_obelisk_marker::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:44932
DATA_CHT_1_COMPGEN(0x008e66a4, "const t_adv_obelisk_marker::`vftable'")

// confidence:B; rtti-order; map:44933
DATA_CHT_1_COMPGEN(0x008e6764, "const t_adv_obelisk_marker::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:44934
DATA_CHT_1_COMPGEN(0x008e676c, "const t_adv_obelisk_marker::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:44935
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_obelisk_marker::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:44936
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_obelisk_marker::`vbtable'{for `t_abstract_stationary_adv_object'}")

// === .rdata$r (11 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_object_factory@Vt_adv_obelisk_marker@@@@;bcd=5110a0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53648
DATA_CHT_1_COMPGEN(0x009110a0, "t_object_factory<t_adv_obelisk_marker>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_object_factory@Vt_adv_obelisk_marker@@@@;vft=4e669c;col=5110d4;td=5ae734;chd=5110c4;offset=0;cdOffset=0;validated-hierarchy; map:53649
DATA_CHT_1_COMPGEN(0x009110b8, "t_object_factory<t_adv_obelisk_marker>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_object_factory@Vt_adv_obelisk_marker@@@@;vft=4e669c;col=5110d4;td=5ae734;chd=5110c4;offset=0;cdOffset=0;validated-hierarchy; map:53650
DATA_CHT_1_COMPGEN(0x009110c4, "t_object_factory<t_adv_obelisk_marker>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_object_factory@Vt_adv_obelisk_marker@@@@;vft=4e669c;col=5110d4;td=5ae734;chd=5110c4;offset=0;cdOffset=0;validated-hierarchy; map:53651
DATA_CHT_1_COMPGEN(0x009110d4, "const t_object_factory<t_adv_obelisk_marker>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:53652
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_obelisk_marker::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_adv_obelisk_marker@@;vft=4e66a4;col=511174;td=5ae770;chd=511164;offset=88;cdOffset=0;validated-hierarchy; map:53653
DATA_CHT_1_COMPGEN(0x00911174, "const t_adv_obelisk_marker::`RTTI Complete Object Locator'")

// name:A; map symbol; map:53654
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_obelisk_marker::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adv_obelisk_marker@@;bcd=511124;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53655
DATA_CHT_1_COMPGEN(0x00911124, "t_adv_obelisk_marker::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adv_obelisk_marker@@;vft=4e66a4;col=511174;td=5ae770;chd=511164;offset=88;cdOffset=0;validated-hierarchy; map:53656
DATA_CHT_1_COMPGEN(0x0091113c, "t_adv_obelisk_marker::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adv_obelisk_marker@@;vft=4e66a4;col=511174;td=5ae770;chd=511164;offset=88;cdOffset=0;validated-hierarchy; map:53657
DATA_CHT_1_COMPGEN(0x00911164, "t_adv_obelisk_marker::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:53658
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_obelisk_marker::`RTTI Complete Object Locator'{for `t_counted_object'}")

// === .data (2 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AV?$t_object_factory@Vt_adv_obelisk_marker@@@@;td=5ae734;validated-header; map:58902
DATA_CHT_1_COMPGEN(0x009ae734, "t_object_factory<t_adv_obelisk_marker> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_adv_obelisk_marker@@;td=5ae770;validated-header; map:58903
DATA_CHT_1_COMPGEN(0x009ae770, "t_adv_obelisk_marker `RTTI Type Descriptor'")

// === .bss (1 symbols) ===

namespace {

// confidence:B; dyninit-global; owner-conf-B; map:60320
DATA_CHT_1(0x009f3018)
t_object_registration<t_adv_obelisk_marker> k_registration; // Initial value unavailable.

} // anonymous namespace
