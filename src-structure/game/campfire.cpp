// campfire.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 25/38 (A:12 B:2 C:0); unaccounted 13; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (18 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:68767; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0058c2c0, 0x1c, STATIC_INIT_DISPATCH, "campfire#1")

// name:C; dyninit; see ledger; map:68768
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "campfire#1")

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:18935
VA_CHT_1(0x0058c2e0, 0x1be)
t_campfire::t_campfire(t_stationary_adventure_object const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:18936
VA_CHT_1(0x0058c530, 0x38f)
void t_campfire::activate_trigger(
    t_army* arg_0,
    t_adv_map_point const& arg_1,
    t_direction arg_2,
    t_adventure_frame* arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:18937
VA_CHT_1(0x0058c8c0, 0x4c)
bool t_campfire::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:18938
VA_CHT_1(0x0058c910, 0x54)
bool t_campfire::read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_qualified_adv_object_type const& arg_1,
    int arg_2
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:18939
VA_CHT_1(0x0058c970, 0x31)
float t_campfire::ai_value(t_adventure_ai const& arg_0, t_creature_array const& arg_1, int arg_2) const
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:68769; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0058cb00, 0x20, STATIC_INIT_DISPATCH, campfire)

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:18940
VA_CHT_1_COMPGEN(0x0058c4a0, 0x2d, SCALAR_DELETING_DTOR, t_campfire)

// name:A; map symbol; map:18941
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_campfire)

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:18942
VA_CHT_1(0x0058c4d0, 0x57)
// public: void t_campfire::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:18943
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_campfire::~t_campfire()
{
    // Body unavailable.
}

// name:A; map symbol; map:18944
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_registration<t_campfire>::t_object_registration<t_campfire>(t_adv_object_type arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:18945
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_material t_random_number_generator::operator()(int arg_0, t_material arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:18946
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_factory<t_campfire>::t_object_factory<t_campfire>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:18947
VA_CHT_1(0x0058c9b0, 0x14a)
t_stationary_adventure_object* t_object_factory<t_campfire>::create(
    std::string const& arg_0,
    t_qualified_adv_object_type const& arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:18948
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_campfire)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:18949
VA_CHT_1_COMPGEN(0x0058cb30, 0xb, VECTOR_DELETING_DTOR, t_campfire)

// === .rdata (7 symbols) ===

// name:A; map symbol; map:43820
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_campfire::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:43821
DATA_CHT_1_COMPGEN(0x008d89e4, "const t_campfire::`vftable'")

// confidence:B; rtti-order; map:43822
DATA_CHT_1_COMPGEN(0x008d8aa4, "const t_campfire::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:43823
DATA_CHT_1_COMPGEN(0x008d8aac, "const t_campfire::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:43824
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_campfire::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:43825
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_campfire::`vbtable'{for `t_abstract_stationary_adv_object'}")

// confidence:A; rtti-name; map:43826
DATA_CHT_1_COMPGEN(0x008d89dc, "const t_object_factory<t_campfire>::`vftable'")

// === .rdata$r (11 symbols) ===

// name:A; map symbol; map:50478
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_campfire::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_campfire@@;vft=4d89e4;col=502aa0;td=59739c;chd=502a90;offset=96;cdOffset=0;validated-hierarchy; map:50479
DATA_CHT_1_COMPGEN(0x00902aa0, "const t_campfire::`RTTI Complete Object Locator'")

// name:A; map symbol; map:50480
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_campfire::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_campfire@@;bcd=502a50;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50481
DATA_CHT_1_COMPGEN(0x00902a50, "t_campfire::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_campfire@@;vft=4d89e4;col=502aa0;td=59739c;chd=502a90;offset=96;cdOffset=0;validated-hierarchy; map:50482
DATA_CHT_1_COMPGEN(0x00902a68, "t_campfire::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_campfire@@;vft=4d89e4;col=502aa0;td=59739c;chd=502a90;offset=96;cdOffset=0;validated-hierarchy; map:50483
DATA_CHT_1_COMPGEN(0x00902a90, "t_campfire::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:50484
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_campfire::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_object_factory@Vt_campfire@@@@;bcd=5029cc;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50485
DATA_CHT_1_COMPGEN(0x009029cc, "t_object_factory<t_campfire>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_object_factory@Vt_campfire@@@@;vft=4d89dc;col=502a00;td=59736c;chd=5029f0;offset=0;cdOffset=0;validated-hierarchy; map:50486
DATA_CHT_1_COMPGEN(0x009029e4, "t_object_factory<t_campfire>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_object_factory@Vt_campfire@@@@;vft=4d89dc;col=502a00;td=59736c;chd=5029f0;offset=0;cdOffset=0;validated-hierarchy; map:50487
DATA_CHT_1_COMPGEN(0x009029f0, "t_object_factory<t_campfire>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_object_factory@Vt_campfire@@@@;vft=4d89dc;col=502a00;td=59736c;chd=5029f0;offset=0;cdOffset=0;validated-hierarchy; map:50488
DATA_CHT_1_COMPGEN(0x00902a00, "const t_object_factory<t_campfire>::`RTTI Complete Object Locator'")

// === .data (2 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_campfire@@;td=59739c;validated-header; map:58136
DATA_CHT_1_COMPGEN(0x0099739c, "t_campfire `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_object_factory@Vt_campfire@@@@;td=59736c;validated-header; map:58137
DATA_CHT_1_COMPGEN(0x0099736c, "t_object_factory<t_campfire> `RTTI Type Descriptor'")
