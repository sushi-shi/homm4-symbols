// abstract_resource_cache.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 14/24 (A:11 B:2 C:1); unaccounted 10; skipped std 4.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (17 symbols) ===

// name:A; map symbol; map:1532
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_abstract_cache_base::get_load_cost()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:1533
VA_CHT_1(0x0040f830, 0x167)
t_abstract_resource_cache_base::t_abstract_resource_cache_base(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:1534
VA_CHT_1(0x0040f9c0, 0x12e)
std::string t_abstract_resource_cache_base::get_name()
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:1535
VA_CHT_1(0x0040faf0, 0x23a)
bool t_abstract_resource_cache_base::find_resource()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:1536
VA_CHT_1(0x0040fd30, 0xd)
int t_abstract_resource_cache_base::get_size()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:1537
VA_CHT_1(0x0040fd40, 0x146)
bool t_abstract_resource_cache_base::create(t_progress_handler* arg_0)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:71383; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00410040, 0x20, STATIC_INIT_DISPATCH, abstract_resource_cache)

// confidence:A; align-band; retn,stable,vslot; map:1538
VA_CHT_1_COMPGEN(0x0040f9a0, 0x1e, SCALAR_DELETING_DTOR, t_abstract_resource_cache_base)

// name:A; map symbol; map:1539
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_abstract_resource_cache_base)

// name:A; map symbol; map:1541
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_shared_ptr<std::basic_streambuf<char, std::char_traits<char>>>::operator==(
    std::basic_streambuf<char, std::char_traits<char>> const* arg_0
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:1544
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_resource_file>::t_counted_ptr<t_abstract_resource_file>()
{
    // Body unavailable.
}

// name:A; map symbol; map:1545
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_resource_file>& t_counted_ptr<t_abstract_resource_file>::operator=(
    t_counted_ptr<t_abstract_resource_file> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:1546
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_resource_file* t_counted_ptr<t_abstract_resource_file>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:1547
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_shared_ptr<std::basic_streambuf<char, std::char_traits<char>>>::~t_shared_ptr<std::basic_streambuf<char, std::char_traits<char>>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:1548
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::basic_streambuf<char, std::char_traits<char>>* t_shared_ptr<std::basic_streambuf<char, std::char_traits<char>>>::get(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:1549
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::basic_streambuf<char, std::char_traits<char>>& t_shared_ptr<std::basic_streambuf<char, std::char_traits<char>>>::operator*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:1550
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_shared_ptr<std::basic_streambuf<char, std::char_traits<char>>>::set(
    std::basic_streambuf<char, std::char_traits<char>>* arg_0
)
{
    // Body unavailable.
}

// === .rdata (1 symbols) ===

// confidence:A; rtti-name; map:42527
DATA_CHT_1_COMPGEN(0x008cb8d4, "const t_abstract_resource_cache_base::`vftable'")

// === .rdata$r (6 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_uncopyable@@;bcd=4f4278;pmd=4,-1,0;attributes=0;validated-hierarchy-link; map:47405
DATA_CHT_1_COMPGEN(0x008f4278, "t_uncopyable::`RTTI Base Class Descriptor at (4, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_cache_base@@;bcd=4f4290;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47406
DATA_CHT_1_COMPGEN(0x008f4290, "t_cache_base::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_abstract_resource_cache_base@@;bcd=4f42a8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47407
DATA_CHT_1_COMPGEN(0x008f42a8, "t_abstract_resource_cache_base::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_abstract_resource_cache_base@@;vft=4cb8d4;col=4f42e0;td=585054;chd=4f42d0;offset=0;cdOffset=0;validated-hierarchy; map:47408
DATA_CHT_1_COMPGEN(0x008f42c0, "t_abstract_resource_cache_base::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_abstract_resource_cache_base@@;vft=4cb8d4;col=4f42e0;td=585054;chd=4f42d0;offset=0;cdOffset=0;validated-hierarchy; map:47409
DATA_CHT_1_COMPGEN(0x008f42d0, "t_abstract_resource_cache_base::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_abstract_resource_cache_base@@;vft=4cb8d4;col=4f42e0;td=585054;chd=4f42d0;offset=0;cdOffset=0;validated-hierarchy; map:47410
DATA_CHT_1_COMPGEN(0x008f42e0, "const t_abstract_resource_cache_base::`RTTI Complete Object Locator'")
