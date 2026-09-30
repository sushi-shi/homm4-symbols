// object_registration.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\object_registration.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 18/46 (A:9 B:5 C:4); unaccounted 28; skipped std 48.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (40 symbols) ===

// name:C; dyninit; see ledger; map:63921
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_INIT_DISPATCH, "object_registration#1")

// name:C; dyninit; see ledger; map:63922
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "object_registration#1")

// name:C; dyninit; see ledger; map:63923
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "object_registration#1")

// name:C; dyninit; see ledger; map:63924
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "object_registration#1")

// name:C; dyninit; see ledger; map:63925
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_INIT_DISPATCH, "object_registration#2")

// name:C; dyninit; see ledger; map:63926
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "object_registration#2")

// name:C; dyninit; see ledger; map:63927
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "object_registration#2")

// name:C; dyninit; see ledger; map:63928
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "object_registration#2")

// confidence:A; dyninit-init; owner-conf-C; map:63929; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007480a0, 0xb, STATIC_INIT_DISPATCH, "object_registration#3")

// name:C; dyninit; see ledger; map:63930
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "object_registration#3")

namespace {

// confidence:B; align-order; retn,stable; map:30974
VA_CHT_1(0x00748330, 0x48)
void t_subtype_table::add(int arg_0, t_object_factory_base const* arg_1)
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:30975
VA_CHT_1(0x00748380, 0xa)
t_object_factory_base const* t_subtype_table::get(t_qualified_adv_object_type const& arg_0) const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:30976
VA_CHT_1(0x00748390, 0x1b)
t_function_entry::t_function_entry()
{
    // Body unavailable.
}

// name:A; map symbol; map:30977
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_function_entry::add(t_object_factory_base const* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:30978
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_function_entry::add(int arg_0, t_object_factory_base const* arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:30979
VA_CHT_1(0x00748450, 0x53)
void t_function_entry::add(int arg_0, int arg_1, t_object_factory_base const* arg_2)
{
    // Body unavailable.
}

// name:A; map symbol; map:30980
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_factory_base const* t_function_entry::get(t_qualified_adv_object_type const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:30981
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_stationary_adventure_object* t_object_creator::create(
    std::string const& arg_0,
    t_qualified_adv_object_type const& arg_1
) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:30982
VA_CHT_1(0x00748760, 0x21)
void t_object_creator::add(t_adv_object_type arg_0, t_object_factory_base const* arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:30983
VA_CHT_1(0x00748790, 0x37)
void t_object_creator::add(t_adv_object_type arg_0, int arg_1, t_object_factory_base const* arg_2)
{
    // Body unavailable.
}

// name:A; map symbol; map:30984
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_object_creator::add(t_adv_object_type arg_0, int arg_1, int arg_2, t_object_factory_base const* arg_3)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:30985
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_registration_base::t_object_registration_base(
    t_adv_object_type arg_0,
    t_object_factory_base const* arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:63931
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
static t_object_creator& get_object_creator()
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:63932
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// get_object_creator$sdtor
// Function body not reconstructed; signature retained as a comment.

// confidence:B; align-order; retn,stable; map:30986
VA_CHT_1(0x007487d0, 0x28)
t_object_registration_base::t_object_registration_base(
    t_adv_object_type arg_0,
    int arg_1,
    t_object_factory_base const* arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:30987
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_registration_base::t_object_registration_base(
    t_adv_object_type arg_0,
    int arg_1,
    int arg_2,
    t_object_factory_base const* arg_3
)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:30988
VA_CHT_1(0x00748c50, 0x9d)
t_stationary_adventure_object* create_adv_object(std::string const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:30989
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_stationary_adventure_object* create_adv_object(
    std::string const& arg_0,
    t_qualified_adv_object_type const& arg_1
)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:63933; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00748cf0, 0x20, STATIC_INIT_DISPATCH, object_registration)

// name:A; map symbol; map:30990
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_factory<t_stationary_adventure_object>::t_object_factory<t_stationary_adventure_object>()
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:30991
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_subtype_table::t_subtype_table()
{
    // Body unavailable.
}

// name:A; map symbol; map:30992
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_subtype_table::add(t_object_factory_base const* arg_0)
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:30993
VA_CHT_1(0x007480b0, 0x1d)
t_subtype_table::~t_subtype_table()
{
    // Body unavailable.
}

// name:A; map symbol; map:30994
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_creator::t_object_creator()
{
    // Body unavailable.
}

// name:A; map symbol; map:30995
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_creator::~t_object_creator()
{
    // Body unavailable.
}

// name:A; map symbol; map:30996
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_function_entry::~t_function_entry()
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:A; align-band; retn,stable,vslot; map:31029
VA_CHT_1(0x00748800, 0xf7)
t_stationary_adventure_object* t_object_factory<t_stationary_adventure_object>::create(
    std::string const& arg_0,
    t_qualified_adv_object_type const& arg_1
) const
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:31040
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_subtype_table& t_subtype_table::operator=(t_subtype_table const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:31041
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_subtype_table::t_subtype_table(t_subtype_table const& arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:31042
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_subtype_table)

// === .rdata (1 symbols) ===

// confidence:A; rtti-name; map:44940
DATA_CHT_1_COMPGEN(0x008e68a4, "const t_object_factory<t_stationary_adventure_object>::`vftable'")

// === .rdata$r (4 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_object_factory@Vt_stationary_adventure_object@@@@;bcd=511274;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53671
DATA_CHT_1_COMPGEN(0x00911274, "t_object_factory<t_stationary_adventure_object>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_object_factory@Vt_stationary_adventure_object@@@@;vft=4e68a4;col=5112a8;td=5ae810;chd=511298;offset=0;cdOffset=0;validated-hierarchy; map:53672
DATA_CHT_1_COMPGEN(0x0091128c, "t_object_factory<t_stationary_adventure_object>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_object_factory@Vt_stationary_adventure_object@@@@;vft=4e68a4;col=5112a8;td=5ae810;chd=511298;offset=0;cdOffset=0;validated-hierarchy; map:53673
DATA_CHT_1_COMPGEN(0x00911298, "t_object_factory<t_stationary_adventure_object>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_object_factory@Vt_stationary_adventure_object@@@@;vft=4e68a4;col=5112a8;td=5ae810;chd=511298;offset=0;cdOffset=0;validated-hierarchy; map:53674
DATA_CHT_1_COMPGEN(0x009112a8, "const t_object_factory<t_stationary_adventure_object>::`RTTI Complete Object Locator'")

// === .data (1 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AV?$t_object_factory@Vt_stationary_adventure_object@@@@;td=5ae810;validated-header; map:58907
DATA_CHT_1_COMPGEN(0x009ae810, "t_object_factory<t_stationary_adventure_object> `RTTI Type Descriptor'")
