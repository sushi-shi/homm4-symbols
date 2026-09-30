// script_build_building.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 23/59 (A:21 B:2 C:0); unaccounted 36; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (35 symbols) ===

// confidence:B; align-order; retn,stable; map:34575
VA_CHT_1(0x007963d0, 0x5b)
bool t_script_build_building::read(std::basic_streambuf<char, std::char_traits<char>>& arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:34576
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_script_build_building::read_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:34577
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_script_build_building::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:34578
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_script_build_building::execute(t_script_context_hero const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:34579
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_script_build_building::execute(t_script_context_town const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:34580
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_script_build_building::execute(t_script_context_object const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:34581
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_script_build_building::execute(t_script_context_army const& arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:34582
VA_CHT_1(0x00796490, 0x3b)
void t_script_build_building::execute(t_script_context_global const& arg_0) const
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:63150; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007964d0, 0x49, STATIC_INIT_DISPATCH, script_build_building)

// confidence:A; align-order; atexit,stable; map:63152; name:C (dyninit; see ledger)
VA_CHT_1(0x00796520, 0x1f)
// t_script_action_base<0,t_script_build_building>::k_factory$atexit
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:34583
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_town_building t_script_build_building::get_building() const
{
    // Body unavailable.
}

// name:A; map symbol; map:34584
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_town_building get(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:34585
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void put(std::basic_streambuf<char, std::char_traits<char>>& arg_0, t_town_building const& arg_1)
{
    // Body unavailable.
}

// name:A; dyninit; see ledger; map:34586
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "t_script_action_base<0,t_script_build_building>::k_factory")

// name:A; dyninit; see ledger; map:34587
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "t_script_action_base<0,t_script_build_building>::k_factory")

// confidence:A; align-band; retn,stable,vptr; map:34588
VA_CHT_1(0x00796540, 0x14)
t_script_action_factory<0>::~t_script_action_factory<0>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34589
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_factory<0>::t_script_action_factory<0>()
{
    // Body unavailable.
}

// confidence:A; align-band; stable,vslot; map:34590
VA_CHT_1(0x00796560, 0x10)
t_counted_ptr<t_abstract_script_action> t_script_action_factory<0>::create() const
{
    // Body unavailable.
}

// name:A; map symbol; map:34591
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<0>::t_script_action<0>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34592
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_action> t_script_action_base<0, t_script_build_building>::clone() const
{
    // Body unavailable.
}

// name:A; map symbol; map:34593
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_type t_script_action_base<0, t_script_build_building>::get_type() const
{
    // Body unavailable.
}

// name:A; map symbol; map:34594
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<0>::t_script_action<0>(t_script_action<0> const& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:34595
VA_CHT_1_COMPGEN(0x007965b0, 0x4b, SCALAR_DELETING_DTOR, "t_script_action<0>")

// name:A; map symbol; map:34596
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_action<0>")

// name:A; map symbol; map:34597
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<0, t_script_build_building>::t_script_action_base<0, t_script_build_building>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34598
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_build_building::t_script_build_building()
{
    // Body unavailable.
}

// name:A; map symbol; map:34599
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_script_build_building)

// name:A; map symbol; map:34600
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_script_build_building)

// name:A; map symbol; map:34601
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_build_building::~t_script_build_building()
{
    // Body unavailable.
}

// name:A; map symbol; map:34602
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<0, t_script_build_building>::t_script_action_base<0, t_script_build_building>(
    t_script_action_base<0, t_script_build_building> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:34603
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<0>::~t_script_action<0>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34604
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<0, t_script_build_building>::~t_script_action_base<0, t_script_build_building>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34605
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_action_base<0, t_script_build_building>")

// name:A; map symbol; map:34606
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_action_base<0, t_script_build_building>")

// name:A; map symbol; map:34607
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_build_building::t_script_build_building(t_script_build_building const& arg_0)
{
    // Body unavailable.
}

// === .rdata (4 symbols) ===

// confidence:A; rtti-name; map:45397
DATA_CHT_1_COMPGEN(0x008eab5c, "const t_script_action_factory<0>::`vftable'")

// confidence:A; rtti-name; map:45398
DATA_CHT_1_COMPGEN(0x008eab64, "const t_script_action<0>::`vftable'")

// name:A; map symbol; map:45399
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_action_base<0, t_script_build_building>::`vftable'")

// name:A; map symbol; map:45400
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_build_building::`vftable'")

// === .rdata$r (16 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action_factory@$0A@@@;bcd=5167e0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54966
DATA_CHT_1_COMPGEN(0x009167e0, "t_script_action_factory<0>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_action_factory@$0A@@@;vft=4eab5c;col=516818;td=5b4dac;chd=516808;offset=0;cdOffset=0;validated-hierarchy; map:54967
DATA_CHT_1_COMPGEN(0x009167f8, "t_script_action_factory<0>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_action_factory@$0A@@@;vft=4eab5c;col=516818;td=5b4dac;chd=516808;offset=0;cdOffset=0;validated-hierarchy; map:54968
DATA_CHT_1_COMPGEN(0x00916808, "t_script_action_factory<0>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_action_factory@$0A@@@;vft=4eab5c;col=516818;td=5b4dac;chd=516808;offset=0;cdOffset=0;validated-hierarchy; map:54969
DATA_CHT_1_COMPGEN(0x00916818, "const t_script_action_factory<0>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_script_build_building@@;bcd=51682c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54970
DATA_CHT_1_COMPGEN(0x0091682c, "t_script_build_building::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action_base@$0A@Vt_script_build_building@@@@;bcd=516844;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54971
DATA_CHT_1_COMPGEN(0x00916844, "t_script_action_base<0, t_script_build_building>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action@$0A@@@;bcd=51685c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54972
DATA_CHT_1_COMPGEN(0x0091685c, "t_script_action<0>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_action@$0A@@@;vft=4eab64;col=51689c;td=5b4e4c;chd=51688c;offset=0;cdOffset=0;validated-hierarchy; map:54973
DATA_CHT_1_COMPGEN(0x00916874, "t_script_action<0>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_action@$0A@@@;vft=4eab64;col=51689c;td=5b4e4c;chd=51688c;offset=0;cdOffset=0;validated-hierarchy; map:54974
DATA_CHT_1_COMPGEN(0x0091688c, "t_script_action<0>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_action@$0A@@@;vft=4eab64;col=51689c;td=5b4e4c;chd=51688c;offset=0;cdOffset=0;validated-hierarchy; map:54975
DATA_CHT_1_COMPGEN(0x0091689c, "const t_script_action<0>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54976
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_action_base<0, t_script_build_building>::`RTTI Base Class Array'")

// name:A; map symbol; map:54977
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_action_base<0, t_script_build_building>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54978
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_action_base<0, t_script_build_building>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54979
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_build_building::`RTTI Base Class Array'")

// name:A; map symbol; map:54980
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_build_building::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54981
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_build_building::`RTTI Complete Object Locator'")

// === .data (4 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action_factory@$0A@@@;td=5b4dac;validated-header; map:59211
DATA_CHT_1_COMPGEN(0x009b4dac, "t_script_action_factory<0> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_script_build_building@@;td=5b4ddc;validated-header; map:59212
DATA_CHT_1_COMPGEN(0x009b4ddc, "t_script_build_building `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action_base@$0A@Vt_script_build_building@@@@;td=5b4e08;validated-header; map:59213
DATA_CHT_1_COMPGEN(0x009b4e08, "t_script_action_base<0, t_script_build_building> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action@$0A@@@;td=5b4e4c;validated-header; map:59214
DATA_CHT_1_COMPGEN(0x009b4e4c, "t_script_action<0> `RTTI Type Descriptor'")
