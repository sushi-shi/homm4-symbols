// path_arrow.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 15/28 (A:9 B:3 C:3); unaccounted 13; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (14 symbols) ===

// confidence:A; align-order; retn,stable,vptr; map:31728
VA_CHT_1(0x007589e0, 0x150)
t_path_arrow::t_path_arrow(t_direction arg_0, t_direction arg_1, t_path_arrow_color arg_2)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:63779
VA_CHT_1(0x00758b30, 0xe2)
static std::string get_model_name(t_direction arg_0, t_direction arg_1, t_path_arrow_color arg_2)
{
    // Body unavailable.
}

// name:A; map symbol; map:31729
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::auto_ptr<t_abstract_adv_object> t_path_arrow::clone() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vslot; map:31730
VA_CHT_1(0x00758c20, 0x2d)
std::string t_path_arrow::get_name() const
{
    // Body unavailable.
}

// name:A; map symbol; map:31731
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_path_arrow::is_event_recordable() const
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:63780; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00758df0, 0x20, STATIC_INIT_DISPATCH, path_arrow)

// name:A; map symbol; map:31732
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_path_arrow)

// name:A; map symbol; map:31733
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_path_arrow)

// confidence:C; align-band; retn,stable; map:31734
VA_CHT_1(0x00758c50, 0x57)
// public: void t_path_arrow::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:31735
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_path_arrow::~t_path_arrow()
{
    // Body unavailable.
}

// name:A; map symbol; map:31736
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_path_arrow::t_path_arrow(t_path_arrow const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:31737
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_path_arrow)

// confidence:C; align-order; stable; map:31738
VA_CHT_1_COMPGEN(0x00758e20, 0xb, VECTOR_DELETING_DTOR, t_path_arrow)

// confidence:C; align-order; stable; map:31739
VA_CHT_1(0x00758e30, 0x8)
// [thunk]: public: virtual std::auto_ptr<t_abstract_adv_object> t_path_arrow::clone`vtordisp{-4, 0}'(void) const
// Function body not reconstructed; signature retained as a comment.

// === .rdata (6 symbols) ===

// name:A; map symbol; map:45005
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_path_arrow::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:45006
DATA_CHT_1_COMPGEN(0x008e729c, "const t_path_arrow::`vftable'")

// confidence:B; rtti-order; map:45007
DATA_CHT_1_COMPGEN(0x008e735c, "const t_path_arrow::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:45008
DATA_CHT_1_COMPGEN(0x008e7364, "const t_path_arrow::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:45009
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_path_arrow::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:45010
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_path_arrow::`vbtable'{for `t_abstract_stationary_adv_object'}")

// === .rdata$r (7 symbols) ===

// name:A; map symbol; map:53857
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_path_arrow::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_path_arrow@@;vft=4e729c;col=512070;td=5b03b8;chd=512060;offset=84;cdOffset=0;validated-hierarchy; map:53858
DATA_CHT_1_COMPGEN(0x00912070, "const t_path_arrow::`RTTI Complete Object Locator'")

// name:A; map symbol; map:53859
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_path_arrow::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_path_arrow@@;bcd=512020;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53860
DATA_CHT_1_COMPGEN(0x00912020, "t_path_arrow::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_path_arrow@@;vft=4e729c;col=512070;td=5b03b8;chd=512060;offset=84;cdOffset=0;validated-hierarchy; map:53861
DATA_CHT_1_COMPGEN(0x00912038, "t_path_arrow::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_path_arrow@@;vft=4e729c;col=512070;td=5b03b8;chd=512060;offset=84;cdOffset=0;validated-hierarchy; map:53862
DATA_CHT_1_COMPGEN(0x00912060, "t_path_arrow::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:53863
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_path_arrow::`RTTI Complete Object Locator'{for `t_counted_object'}")

// === .data (1 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_path_arrow@@;td=5b03b8;validated-header; map:58947
DATA_CHT_1_COMPGEN(0x009b03b8, "t_path_arrow `RTTI Type Descriptor'")
