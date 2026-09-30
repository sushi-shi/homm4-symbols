// adjusted_bitmap_cache.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 30/47 (A:28 B:0 C:2); unaccounted 17; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (29 symbols) ===

// confidence:A; align-order; retn,stable,vptr; map:3068
VA_CHT_1(0x00421220, 0x7b)
t_adjusted_bitmap_cache_data::t_adjusted_bitmap_cache_data(
    t_abstract_cache<t_bitmap_group> const& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:3069
VA_CHT_1(0x004212e0, 0x8d)
t_adjusted_bitmap_cache_data::~t_adjusted_bitmap_cache_data()
{
    // Body unavailable.
}

// name:A; map symbol; map:3070
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adjusted_bitmap_cache_data::add_reference()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:3071
VA_CHT_1(0x00421380, 0x2d1)
t_bitmap_group* t_adjusted_bitmap_cache_data::do_get(t_progress_handler* arg_0)
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:71313
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// t_adjusted_bitmap_cache_data::do_get$sdtor
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:3072
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adjusted_bitmap_cache_data::remove_reference()
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:71314; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00421910, 0x20, STATIC_INIT_DISPATCH, adjusted_bitmap_cache)

// confidence:A; align-band; retn,stable,vslot; map:3073
VA_CHT_1_COMPGEN(0x004212a0, 0x1e, SCALAR_DELETING_DTOR, t_adjusted_bitmap_cache_data)

// name:A; map symbol; map:3074
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_adjusted_bitmap_cache_data)

// confidence:A; align-band; retn,stable,vptr; map:3075
VA_CHT_1(0x004216a0, 0x49)
t_abstract_cache_data<t_bitmap_group>::t_abstract_cache_data<t_bitmap_group>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:3076
VA_CHT_1(0x00829860, 0x19)
t_abstract_cache<t_bitmap_group>::t_abstract_cache<t_bitmap_group>(
    t_abstract_cache<t_bitmap_group> const& arg_0
)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:3077
VA_CHT_1_COMPGEN(0x004212c0, 0x1e, SCALAR_DELETING_DTOR, "t_abstract_cache_data<t_bitmap_group>")

// name:A; map symbol; map:3078
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_abstract_cache_data<t_bitmap_group>")

// name:A; map symbol; map:3079
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_abstract_cache<t_bitmap_group>")

// name:A; map symbol; map:3080
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_abstract_cache<t_bitmap_group>")

// confidence:A; align-band; retn,stable,vptr; map:3081
VA_CHT_1(0x005720f0, 0xcb)
t_abstract_cache_data<t_bitmap_group>::~t_abstract_cache_data<t_bitmap_group>()
{
    // Body unavailable.
}

// name:A; map symbol; map:3082
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_cache_data<t_bitmap_group>>::t_counted_ptr<t_abstract_cache_data<t_bitmap_group>>(
    t_counted_ptr<t_abstract_cache_data<t_bitmap_group>> const& arg_0
)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,vptr; map:3083
VA_CHT_1(0x005d01b0, 0x1e)
t_abstract_cache<t_bitmap_group>::~t_abstract_cache<t_bitmap_group>()
{
    // Body unavailable.
}

// name:A; map symbol; map:3084
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_cache_data<t_bitmap_group>>::~t_counted_ptr<t_abstract_cache_data<t_bitmap_group>>()
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:3085
VA_CHT_1(0x004216f0, 0x195)
t_cached_ptr<t_bitmap_group> t_abstract_cache<t_bitmap_group>::get(t_progress_handler* arg_0) const
{
    // Body unavailable.
}

// confidence:C; align-band; retn; map:3086
VA_CHT_1(0x00421890, 0x74)
t_cached_ptr<t_bitmap_group>::~t_cached_ptr<t_bitmap_group>()
{
    // Body unavailable.
}

// name:A; map symbol; map:3087
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_group* t_cached_ptr<t_bitmap_group>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:3088
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_cached_ptr<t_bitmap_group>::operator!=(t_bitmap_group const* arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:3089
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cached_ptr<t_bitmap_group>::t_cached_ptr<t_bitmap_group>(t_cached_ptr<t_bitmap_group> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:3090
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_cache_data<t_bitmap_group>>::t_counted_ptr<t_abstract_cache_data<t_bitmap_group>>(
    t_abstract_cache_data<t_bitmap_group>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:3091
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_cache_data<t_bitmap_group>* t_counted_ptr<t_abstract_cache_data<t_bitmap_group>>::operator t_abstract_cache_data<t_bitmap_group>*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:3092
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_cache_data<t_bitmap_group>* t_counted_ptr<t_abstract_cache_data<t_bitmap_group>>::operator->(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:3093
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cached_ptr<t_bitmap_group>::t_cached_ptr<t_bitmap_group>(
    t_bitmap_group* arg_0,
    t_abstract_cache_base* arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:3094
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_group* t_cached_ptr<t_bitmap_group>::get() const
{
    // Body unavailable.
}

// === .rdata (3 symbols) ===

// confidence:A; rtti-name; map:42627
DATA_CHT_1_COMPGEN(0x008cc8ec, "const t_adjusted_bitmap_cache_data::`vftable'")

// confidence:A; rtti-name; map:42628
DATA_CHT_1_COMPGEN(0x008cc90c, "const t_abstract_cache_data<t_bitmap_group>::`vftable'")

// confidence:A; rtti-name; map:42629
DATA_CHT_1_COMPGEN(0x008cc904, "const t_abstract_cache<t_bitmap_group>::`vftable'")

// === .rdata$r (12 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_cache_data@Vt_bitmap_group@@@@;bcd=4f5618;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47648
DATA_CHT_1_COMPGEN(0x008f5618, "t_abstract_cache_data<t_bitmap_group>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adjusted_bitmap_cache_data@@;bcd=4f5630;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47649
DATA_CHT_1_COMPGEN(0x008f5630, "t_adjusted_bitmap_cache_data::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adjusted_bitmap_cache_data@@;vft=4cc8ec;col=4f5670;td=586254;chd=4f5660;offset=0;cdOffset=0;validated-hierarchy; map:47650
DATA_CHT_1_COMPGEN(0x008f5648, "t_adjusted_bitmap_cache_data::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adjusted_bitmap_cache_data@@;vft=4cc8ec;col=4f5670;td=586254;chd=4f5660;offset=0;cdOffset=0;validated-hierarchy; map:47651
DATA_CHT_1_COMPGEN(0x008f5660, "t_adjusted_bitmap_cache_data::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_adjusted_bitmap_cache_data@@;vft=4cc8ec;col=4f5670;td=586254;chd=4f5660;offset=0;cdOffset=0;validated-hierarchy; map:47652
DATA_CHT_1_COMPGEN(0x008f5670, "const t_adjusted_bitmap_cache_data::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_cache_data@Vt_bitmap_group@@@@;vft=4cc90c;col=4f55c0;td=58621c;chd=4f55b0;offset=0;cdOffset=0;validated-hierarchy; map:47653
DATA_CHT_1_COMPGEN(0x008f559c, "t_abstract_cache_data<t_bitmap_group>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_cache_data@Vt_bitmap_group@@@@;vft=4cc90c;col=4f55c0;td=58621c;chd=4f55b0;offset=0;cdOffset=0;validated-hierarchy; map:47654
DATA_CHT_1_COMPGEN(0x008f55b0, "t_abstract_cache_data<t_bitmap_group>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_cache_data@Vt_bitmap_group@@@@;vft=4cc90c;col=4f55c0;td=58621c;chd=4f55b0;offset=0;cdOffset=0;validated-hierarchy; map:47655
DATA_CHT_1_COMPGEN(0x008f55c0, "const t_abstract_cache_data<t_bitmap_group>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_cache@Vt_bitmap_group@@@@;bcd=4f55d4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47656
DATA_CHT_1_COMPGEN(0x008f55d4, "t_abstract_cache<t_bitmap_group>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_cache@Vt_bitmap_group@@@@;vft=4cc904;col=4f5604;td=5861e8;chd=4f55f4;offset=0;cdOffset=0;validated-hierarchy; map:47657
DATA_CHT_1_COMPGEN(0x008f55ec, "t_abstract_cache<t_bitmap_group>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_cache@Vt_bitmap_group@@@@;vft=4cc904;col=4f5604;td=5861e8;chd=4f55f4;offset=0;cdOffset=0;validated-hierarchy; map:47658
DATA_CHT_1_COMPGEN(0x008f55f4, "t_abstract_cache<t_bitmap_group>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_cache@Vt_bitmap_group@@@@;vft=4cc904;col=4f5604;td=5861e8;chd=4f55f4;offset=0;cdOffset=0;validated-hierarchy; map:47659
DATA_CHT_1_COMPGEN(0x008f5604, "const t_abstract_cache<t_bitmap_group>::`RTTI Complete Object Locator'")

// === .data (3 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_cache_data@Vt_bitmap_group@@@@;td=58621c;validated-header; map:57393
DATA_CHT_1_COMPGEN(0x0098621c, "t_abstract_cache_data<t_bitmap_group> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_adjusted_bitmap_cache_data@@;td=586254;validated-header; map:57394
DATA_CHT_1_COMPGEN(0x00986254, "t_adjusted_bitmap_cache_data `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_cache@Vt_bitmap_group@@@@;td=5861e8;validated-header; map:57395
DATA_CHT_1_COMPGEN(0x009861e8, "t_abstract_cache<t_bitmap_group> `RTTI Type Descriptor'")
