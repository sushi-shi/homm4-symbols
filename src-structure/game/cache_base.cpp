// cache_base.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\cache_base.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 12/21 (A:8 B:0 C:4); unaccounted 9; skipped std 34.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (15 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:68797; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00589600, 0x27, STATIC_INIT_DISPATCH, "cache_base#1")

// name:C; dyninit; see ledger; map:68798
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "cache_base#1")

// confidence:C; align-order; retn,stable; map:18640
VA_CHT_1(0x00589630, 0xb3)
t_cache_base_list::~t_cache_base_list()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:18641
VA_CHT_1(0x005896f0, 0x17)
t_cache_base::t_cache_base()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vptr; map:18642
VA_CHT_1(0x00589840, 0x9f)
t_cache_base::~t_cache_base()
{
    // Body unavailable.
}

// confidence:C; align-order; retn; map:18643
VA_CHT_1(0x005898e0, 0xcc)
void t_cache_base::check_memory()
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:18644
VA_CHT_1(0x005899b0, 0xc0)
void t_cache_base::add_to_free_list()
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:18645
VA_CHT_1(0x00589a70, 0x98)
void t_cache_base::remove_from_free_list()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:18646
VA_CHT_1_COMPGEN(0x00589710, 0xb6, VECTOR_DELETING_DTOR, t_cache_base)

// name:A; map symbol; map:18647
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_cache_base)

// name:A; map symbol; map:18648
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_cache_base_list::lock()
{
    // Body unavailable.
}

// name:A; map symbol; map:18649
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_cache_base_list::unlock()
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:18650
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cache_base_list& get_free_list()
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; dyninit; see ledger; map:18651
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, get_free_list::g_free_list)

// name:A; map symbol; map:18652
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cache_base_list::t_cache_base_list()
{
    // Body unavailable.
}

// === .rdata (1 symbols) ===

// confidence:A; rtti-name; map:43800
DATA_CHT_1_COMPGEN(0x008d8850, "const t_cache_base::`vftable'")

// === .rdata$r (3 symbols) ===

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_cache_base@@;vft=4d8850;col=5024f4;td=585038;chd=5024e4;offset=0;cdOffset=0;validated-hierarchy; map:50412
DATA_CHT_1_COMPGEN(0x009024d8, "t_cache_base::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_cache_base@@;vft=4d8850;col=5024f4;td=585038;chd=5024e4;offset=0;cdOffset=0;validated-hierarchy; map:50413
DATA_CHT_1_COMPGEN(0x009024e4, "t_cache_base::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_cache_base@@;vft=4d8850;col=5024f4;td=585038;chd=5024e4;offset=0;cdOffset=0;validated-hierarchy; map:50414
DATA_CHT_1_COMPGEN(0x009024f4, "const t_cache_base::`RTTI Complete Object Locator'")

// === .bss (2 symbols) ===

namespace {

// name:A; map symbol; map:60091
DATA_CHT_1(UNACCOUNTED)
unsigned int g_free_list_cache_size; // Initial value unavailable.

// name:A; map symbol; map:60092
DATA_CHT_1(UNACCOUNTED)
bool g_list_destroyed; // Initial value unavailable.

} // anonymous namespace
