// bitmap_layer_cache.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 20/25 (A:12 B:0 C:0); unaccounted 5; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (13 symbols) ===

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:18212
VA_CHT_1(0x00579660, 0xab)
t_bitmap_layer_cache_data::t_bitmap_layer_cache_data(
    t_abstract_cache<t_bitmap_group> const& arg_0,
    std::string const& arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:18213
VA_CHT_1(0x00579840, 0x4)
void t_bitmap_layer_cache_data::add_reference()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:18214
VA_CHT_1(0x00579850, 0x110)
t_bitmap_layer* t_bitmap_layer_cache_data::do_get(t_progress_handler* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:18215
VA_CHT_1(0x005799f0, 0x49)
void t_bitmap_layer_cache_data::remove_reference()
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:68953; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00579a40, 0x20, STATIC_INIT_DISPATCH, bitmap_layer_cache)

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:18216
VA_CHT_1_COMPGEN(0x00579710, 0x1e, VECTOR_DELETING_DTOR, t_bitmap_layer_cache_data)

// name:A; map symbol; map:18217
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_bitmap_layer_cache_data)

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:18218
VA_CHT_1(0x00579730, 0xed)
t_abstract_cache_data<t_bitmap_layer>::t_abstract_cache_data<t_bitmap_layer>()
{
    // Body unavailable.
}

// name:A; map symbol; map:18219
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_layer_cache_data::~t_bitmap_layer_cache_data()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:18220
VA_CHT_1_COMPGEN(0x00579820, 0x1e, SCALAR_DELETING_DTOR, "t_abstract_cache_data<t_bitmap_layer>")

// name:A; map symbol; map:18221
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_abstract_cache_data<t_bitmap_layer>")

// name:A; map symbol; map:18222
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_cache_data<t_bitmap_layer>::~t_abstract_cache_data<t_bitmap_layer>()
{
    // Body unavailable.
}

// name:A; map symbol; map:18223
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_cached_ptr<t_bitmap_group>::operator==(t_bitmap_group const* arg_0) const
{
    // Body unavailable.
}

// === .rdata (2 symbols) ===

// confidence:A; rtti-name; map:43749
DATA_CHT_1_COMPGEN(0x008d7b54, "const t_bitmap_layer_cache_data::`vftable'")

// confidence:A; rtti-name; map:43750
DATA_CHT_1_COMPGEN(0x008d7b6c, "const t_abstract_cache_data<t_bitmap_layer>::`vftable'")

// === .rdata$r (8 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_cache_data@Vt_bitmap_layer@@@@;bcd=501950;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50254
DATA_CHT_1_COMPGEN(0x00901950, "t_abstract_cache_data<t_bitmap_layer>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_bitmap_layer_cache_data@@;bcd=501968;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50255
DATA_CHT_1_COMPGEN(0x00901968, "t_bitmap_layer_cache_data::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_bitmap_layer_cache_data@@;vft=4d7b54;col=5019a8;td=59571c;chd=501998;offset=0;cdOffset=0;validated-hierarchy; map:50256
DATA_CHT_1_COMPGEN(0x00901980, "t_bitmap_layer_cache_data::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_bitmap_layer_cache_data@@;vft=4d7b54;col=5019a8;td=59571c;chd=501998;offset=0;cdOffset=0;validated-hierarchy; map:50257
DATA_CHT_1_COMPGEN(0x00901998, "t_bitmap_layer_cache_data::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_bitmap_layer_cache_data@@;vft=4d7b54;col=5019a8;td=59571c;chd=501998;offset=0;cdOffset=0;validated-hierarchy; map:50258
DATA_CHT_1_COMPGEN(0x009019a8, "const t_bitmap_layer_cache_data::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_cache_data@Vt_bitmap_layer@@@@;vft=4d7b6c;col=50193c;td=5956e4;chd=50192c;offset=0;cdOffset=0;validated-hierarchy; map:50259
DATA_CHT_1_COMPGEN(0x00901918, "t_abstract_cache_data<t_bitmap_layer>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_cache_data@Vt_bitmap_layer@@@@;vft=4d7b6c;col=50193c;td=5956e4;chd=50192c;offset=0;cdOffset=0;validated-hierarchy; map:50260
DATA_CHT_1_COMPGEN(0x0090192c, "t_abstract_cache_data<t_bitmap_layer>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_cache_data@Vt_bitmap_layer@@@@;vft=4d7b6c;col=50193c;td=5956e4;chd=50192c;offset=0;cdOffset=0;validated-hierarchy; map:50261
DATA_CHT_1_COMPGEN(0x0090193c, "const t_abstract_cache_data<t_bitmap_layer>::`RTTI Complete Object Locator'")

// === .data (2 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_cache_data@Vt_bitmap_layer@@@@;td=5956e4;validated-header; map:58079
DATA_CHT_1_COMPGEN(0x009956e4, "t_abstract_cache_data<t_bitmap_layer> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_bitmap_layer_cache_data@@;td=59571c;validated-header; map:58080
DATA_CHT_1_COMPGEN(0x0099571c, "t_bitmap_layer_cache_data `RTTI Type Descriptor'")
