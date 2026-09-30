// adventure_object_memory_cache.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 35/53 (A:26 B:6 C:3); unaccounted 18; skipped std 82.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (40 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:69804; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x004e71f0, 0x15, STATIC_INIT_DISPATCH, "adventure_object_memory_cache#1")

// name:C; dyninit; see ledger; map:69805
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adventure_object_memory_cache#1")

// confidence:A; align-order; retn,stable,vptr; map:12036
VA_CHT_1(0x004e7230, 0x79)
t_adventure_object_memory_cache::t_adventure_object_memory_cache()
{
    // Body unavailable.
}

// name:A; map symbol; map:12037
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_object_memory_cache::~t_adventure_object_memory_cache()
{
    // Body unavailable.
}

// name:A; map symbol; map:12038
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_memory_buffer_counted> const& t_adventure_object_memory_cache::get_data_buffer()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:12039
VA_CHT_1(0x004e72b0, 0xa9)
bool t_adventure_object_memory_cache::update_state(t_adventure_object* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:12040
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_adventure_object_memory_cache::increment()
{
    // Body unavailable.
}

// name:A; map symbol; map:12041
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_adventure_object_memory_cache::decrement()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:12042
VA_CHT_1(0x004e7360, 0x124)
bool t_adventure_object_memory_cache::read(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:12043
VA_CHT_1(0x004e7490, 0xcb)
bool t_adventure_object_memory_cache::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:12044
VA_CHT_1(0x004e7560, 0x7d)
t_adventure_object_memory_cache_refrence::t_adventure_object_memory_cache_refrence()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:12045
VA_CHT_1(0x004e75e0, 0x16a)
t_adventure_object_memory_cache_refrence::~t_adventure_object_memory_cache_refrence()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:12046
VA_CHT_1(0x004e7750, 0x34)
void t_adventure_object_memory_cache_refrence::set_adventure_manager_for_memory_cache(t_adventure_map* arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:12047
VA_CHT_1(0x004e7790, 0x40)
void t_adventure_object_memory_cache_refrence::set_cache_for_memory_cache(
    t_adventure_object_memory_cache* arg_0
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:12048
VA_CHT_1(0x004e77d0, 0xa)
void t_adventure_object_memory_cache_refrence::set_global_id_for_memory_cache(unsigned int arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:12049
VA_CHT_1(0x004e77e0, 0xe0)
t_adventure_object_cache_manager::t_adventure_object_cache_manager()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:12050
VA_CHT_1(0x004e78e0, 0x11f)
t_adventure_object_cache_manager::~t_adventure_object_cache_manager()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:12051
VA_CHT_1(0x004e7a00, 0xa6)
bool t_adventure_object_cache_manager::attach_adv_objects_to_their_cache(t_adventure_map* arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:12052
VA_CHT_1(0x004e7ab0, 0x52)
bool t_adventure_object_cache_manager::is_empty(unsigned int const& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn; map:12053
VA_CHT_1(0x004e7b10, 0x2a0)
void t_adventure_object_cache_manager::insert(t_adventure_object* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:12054
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adventure_object_cache_manager::remove(t_adventure_object* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:12055
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adventure_object_cache_manager::remove(unsigned int arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn; map:12056
VA_CHT_1(0x004e7db0, 0x6a)
void t_adventure_object_cache_manager::update(t_adventure_object* arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn; map:12057
VA_CHT_1(0x004e7e20, 0x6c)
t_adventure_object_memory_cache* t_adventure_object_cache_manager::get_memory_cache(t_adventure_object* arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vslot; map:12058
VA_CHT_1(0x004e7e90, 0x1c7)
bool t_adventure_object_cache_manager::read(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vslot; map:12059
VA_CHT_1(0x004e8060, 0xa5)
bool t_adventure_object_cache_manager::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:69806; name:B (dyninit; see ledger)
VA_CHT_1(0x004e90b0, 0x20)
// adventure_object_memory_cache$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:A; dyninit-tinit; owner-conf-B; map:69808; name:B (dyninit; see ledger)
VA_CHT_1(0x004e90d0, 0x5c)
// adventure_object_memory_cache$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:69809
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adventure_object_memory_cache$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:69810
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adventure_object_memory_cache$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:69811
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adventure_object_memory_cache$tatexit4
// Function body not reconstructed; signature retained as a comment.

// confidence:A; align-band; retn,stable,vslot; map:12060
VA_CHT_1_COMPGEN(0x004e7210, 0x1e, VECTOR_DELETING_DTOR, t_adventure_object_memory_cache)

// name:A; map symbol; map:12061
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_adventure_object_memory_cache)

// confidence:A; align-band; retn,stable,vslot; map:12062
VA_CHT_1_COMPGEN(0x004e78c0, 0x1e, VECTOR_DELETING_DTOR, t_adventure_object_cache_manager)

// name:A; map symbol; map:12063
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_adventure_object_cache_manager)

// name:A; map symbol; map:12136
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_adventure_object_memory_cache>::t_counted_ptr<t_adventure_object_memory_cache>(
    t_adventure_object_memory_cache* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:12137
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_adventure_object_memory_cache>::t_counted_ptr<t_adventure_object_memory_cache>()
{
    // Body unavailable.
}

// name:A; map symbol; map:12138
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_adventure_object_memory_cache>& t_counted_ptr<t_adventure_object_memory_cache>::operator=(
    t_adventure_object_memory_cache* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:12139
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_object_memory_cache* t_counted_ptr<t_adventure_object_memory_cache>::operator t_adventure_object_memory_cache*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:12140
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_object_memory_cache* t_counted_ptr<t_adventure_object_memory_cache>::operator->() const
{
    // Body unavailable.
}

// === .rdata (2 symbols) ===

// confidence:A; rtti-name; map:43313
DATA_CHT_1_COMPGEN(0x008d4404, "const t_adventure_object_memory_cache::`vftable'")

// confidence:A; rtti-name; map:43314
DATA_CHT_1_COMPGEN(0x008d4414, "const t_adventure_object_cache_manager::`vftable'")

// === .rdata$r (8 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adventure_object_memory_cache@@;bcd=4fc32c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49086
DATA_CHT_1_COMPGEN(0x008fc32c, "t_adventure_object_memory_cache::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adventure_object_memory_cache@@;vft=4d4404;col=4fc360;td=58ea98;chd=4fc350;offset=0;cdOffset=0;validated-hierarchy; map:49087
DATA_CHT_1_COMPGEN(0x008fc344, "t_adventure_object_memory_cache::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adventure_object_memory_cache@@;vft=4d4404;col=4fc360;td=58ea98;chd=4fc350;offset=0;cdOffset=0;validated-hierarchy; map:49088
DATA_CHT_1_COMPGEN(0x008fc350, "t_adventure_object_memory_cache::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_adventure_object_memory_cache@@;vft=4d4404;col=4fc360;td=58ea98;chd=4fc350;offset=0;cdOffset=0;validated-hierarchy; map:49089
DATA_CHT_1_COMPGEN(0x008fc360, "const t_adventure_object_memory_cache::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adventure_object_cache_manager@@;bcd=4fc374;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49090
DATA_CHT_1_COMPGEN(0x008fc374, "t_adventure_object_cache_manager::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adventure_object_cache_manager@@;vft=4d4414;col=4fc3a8;td=58eac8;chd=4fc398;offset=0;cdOffset=0;validated-hierarchy; map:49091
DATA_CHT_1_COMPGEN(0x008fc38c, "t_adventure_object_cache_manager::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adventure_object_cache_manager@@;vft=4d4414;col=4fc3a8;td=58eac8;chd=4fc398;offset=0;cdOffset=0;validated-hierarchy; map:49092
DATA_CHT_1_COMPGEN(0x008fc398, "t_adventure_object_cache_manager::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_adventure_object_cache_manager@@;vft=4d4414;col=4fc3a8;td=58eac8;chd=4fc398;offset=0;cdOffset=0;validated-hierarchy; map:49093
DATA_CHT_1_COMPGEN(0x008fc3a8, "const t_adventure_object_cache_manager::`RTTI Complete Object Locator'")

// === .data (2 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_adventure_object_memory_cache@@;td=58ea98;validated-header; map:57768
DATA_CHT_1_COMPGEN(0x0098ea98, "t_adventure_object_memory_cache `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_adventure_object_cache_manager@@;td=58eac8;validated-header; map:57769
DATA_CHT_1_COMPGEN(0x0098eac8, "t_adventure_object_cache_manager `RTTI Type Descriptor'")

// === .bss (1 symbols) ===

// name:A; map symbol; map:60027
DATA_CHT_1(UNACCOUNTED)
std::_Tree<unsigned int, std::pair<unsigned int const, t_counted_ptr<t_adventure_object_memory_cache>>, std::map<unsigned int, t_counted_ptr<t_adventure_object_memory_cache>, std::less<unsigned int>, std::allocator<t_counted_ptr<t_adventure_object_memory_cache>>>::_Kfn, std::less<unsigned int>, std::allocator<t_counted_ptr<t_adventure_object_memory_cache>>>::_Node*std::_Tree<unsigned int, std::pair<unsigned int const, t_counted_ptr<t_adventure_object_memory_cache>>, std::map<unsigned int, t_counted_ptr<t_adventure_object_memory_cache>, std::less<unsigned int>, std::allocator<t_counted_ptr<t_adventure_object_memory_cache>>>::_Kfn, std::less<unsigned int>, std::allocator<t_counted_ptr<t_adventure_object_memory_cache>>>::_Nil; // Initial value unavailable.
