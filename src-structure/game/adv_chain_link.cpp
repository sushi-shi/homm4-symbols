// adv_chain_link.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 21/33 (A:17 B:2 C:2); unaccounted 12; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (13 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:71173; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00435e00, 0x1c, STATIC_INIT_DISPATCH, "adv_chain_link#1")

// name:C; dyninit; see ledger; map:71174
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adv_chain_link#1")

// confidence:A; align-order; retn,vptr; map:4232
VA_CHT_1(0x00435e20, 0x111)
t_adv_chain_link::t_adv_chain_link(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:71175; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00436040, 0x20, STATIC_INIT_DISPATCH, adv_chain_link)

// confidence:A; align-band; retn,stable,vslot; map:4233
VA_CHT_1_COMPGEN(0x00435f40, 0x2d, VECTOR_DELETING_DTOR, t_adv_chain_link)

// name:A; map symbol; map:4234
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_adv_chain_link)

// confidence:C; align-band; retn,stable; map:4235
VA_CHT_1(0x00435f70, 0x57)
// public: void t_adv_chain_link::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:4236
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_chain_link::~t_adv_chain_link()
{
    // Body unavailable.
}

// name:A; map symbol; map:4237
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_registration<t_adv_chain_link>::t_object_registration<t_adv_chain_link>(t_adv_object_type arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:4238
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_factory<t_adv_chain_link>::t_object_factory<t_adv_chain_link>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,vslot; map:4239
VA_CHT_1(0x00435fd0, 0x62)
t_stationary_adventure_object* t_object_factory<t_adv_chain_link>::create(
    std::string const& arg_0,
    t_qualified_adv_object_type const& arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:4240
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_adv_chain_link)

// confidence:C; align-order; stable; map:4241
VA_CHT_1_COMPGEN(0x00436070, 0xb, VECTOR_DELETING_DTOR, t_adv_chain_link)

// === .rdata (7 symbols) ===

// name:A; map symbol; map:42770
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_chain_link::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:42771
DATA_CHT_1_COMPGEN(0x008ce81c, "const t_adv_chain_link::`vftable'")

// confidence:B; rtti-order; map:42772
DATA_CHT_1_COMPGEN(0x008ce8dc, "const t_adv_chain_link::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:42773
DATA_CHT_1_COMPGEN(0x008ce8e4, "const t_adv_chain_link::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:42774
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_chain_link::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:42775
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_chain_link::`vbtable'{for `t_abstract_stationary_adv_object'}")

// confidence:A; rtti-name; map:42776
DATA_CHT_1_COMPGEN(0x008ce814, "const t_object_factory<t_adv_chain_link>::`vftable'")

// === .rdata$r (11 symbols) ===

// name:A; map symbol; map:47943
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_chain_link::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_adv_chain_link@@;vft=4ce81c;col=4f6db8;td=58824c;chd=4f6da8;offset=84;cdOffset=0;validated-hierarchy; map:47944
DATA_CHT_1_COMPGEN(0x008f6db8, "const t_adv_chain_link::`RTTI Complete Object Locator'")

// name:A; map symbol; map:47945
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_chain_link::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adv_chain_link@@;bcd=4f6d68;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47946
DATA_CHT_1_COMPGEN(0x008f6d68, "t_adv_chain_link::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adv_chain_link@@;vft=4ce81c;col=4f6db8;td=58824c;chd=4f6da8;offset=84;cdOffset=0;validated-hierarchy; map:47947
DATA_CHT_1_COMPGEN(0x008f6d80, "t_adv_chain_link::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adv_chain_link@@;vft=4ce81c;col=4f6db8;td=58824c;chd=4f6da8;offset=84;cdOffset=0;validated-hierarchy; map:47948
DATA_CHT_1_COMPGEN(0x008f6da8, "t_adv_chain_link::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:47949
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_chain_link::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_object_factory@Vt_adv_chain_link@@@@;bcd=4f6ce4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47950
DATA_CHT_1_COMPGEN(0x008f6ce4, "t_object_factory<t_adv_chain_link>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_object_factory@Vt_adv_chain_link@@@@;vft=4ce814;col=4f6d18;td=588214;chd=4f6d08;offset=0;cdOffset=0;validated-hierarchy; map:47951
DATA_CHT_1_COMPGEN(0x008f6cfc, "t_object_factory<t_adv_chain_link>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_object_factory@Vt_adv_chain_link@@@@;vft=4ce814;col=4f6d18;td=588214;chd=4f6d08;offset=0;cdOffset=0;validated-hierarchy; map:47952
DATA_CHT_1_COMPGEN(0x008f6d08, "t_object_factory<t_adv_chain_link>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_object_factory@Vt_adv_chain_link@@@@;vft=4ce814;col=4f6d18;td=588214;chd=4f6d08;offset=0;cdOffset=0;validated-hierarchy; map:47953
DATA_CHT_1_COMPGEN(0x008f6d18, "const t_object_factory<t_adv_chain_link>::`RTTI Complete Object Locator'")

// === .data (2 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_adv_chain_link@@;td=58824c;validated-header; map:57470
DATA_CHT_1_COMPGEN(0x0098824c, "t_adv_chain_link `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_object_factory@Vt_adv_chain_link@@@@;td=588214;validated-header; map:57471
DATA_CHT_1_COMPGEN(0x00988214, "t_object_factory<t_adv_chain_link> `RTTI Type Descriptor'")
