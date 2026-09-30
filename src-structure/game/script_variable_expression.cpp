// script_variable_expression.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 50/133 (A:47 B:2 C:1); unaccounted 83; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (73 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:62896; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007a7170, 0x15, STATIC_INIT_DISPATCH, "script_variable_expression#1")

// name:C; dyninit; see ledger; map:62897
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "script_variable_expression#1")

// confidence:B; align-order; retn,stable; map:36669
VA_CHT_1(0x007a7190, 0x21)
int t_script_numeric_variable::evaluate(t_expression_context_global const& arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:36670
VA_CHT_1(0x007a71c0, 0x21)
bool t_script_boolean_variable::evaluate(t_expression_context_global const& arg_0) const
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:62898; name:B (dyninit; see ledger)
VA_CHT_1(0x007a71f0, 0x70)
// script_variable_expression$tinit1
// Function body not reconstructed; signature retained as a comment.

// name:C; dyninit; see ledger; map:62900
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "t_script_numeric_expression_base<18,t_script_numeric_variable>::k_factory")

// name:C; dyninit; see ledger; map:62901
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "t_script_boolean_expression_base<23,t_script_boolean_variable>::k_factory")

// confidence:A; dyninit-tinit; owner-conf-B; map:62902; name:B (dyninit; see ledger)
VA_CHT_1(0x007a7790, 0x5c)
// script_variable_expression$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:62903
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// script_variable_expression$tatexit4
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:62904
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// script_variable_expression$tatexit5
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:62905
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// script_variable_expression$tatexit6
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:36671
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::string const& t_script_variable_expression<t_abstract_script_numeric_expression>::get_name() const
{
    // Body unavailable.
}

// name:A; map symbol; map:36672
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::string const& t_script_variable_expression<t_abstract_script_boolean_expression>::get_name() const
{
    // Body unavailable.
}

// name:A; dyninit; see ledger; map:36673
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "t_script_numeric_expression_base<18,t_script_numeric_variable>::k_factory")

// name:A; dyninit; see ledger; map:36674
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "t_script_boolean_expression_base<23,t_script_boolean_variable>::k_factory")

// name:A; dyninit; see ledger; map:36675
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "t_script_boolean_expression_base<23,t_script_boolean_variable>::k_factory")

// name:A; dyninit; see ledger; map:36676
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "t_script_numeric_expression_base<18,t_script_numeric_variable>::k_factory")

// name:A; map symbol; map:36677
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression_factory<18>::~t_script_numeric_expression_factory<18>()
{
    // Body unavailable.
}

// name:A; map symbol; map:36678
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_boolean_expression_factory<23>::~t_script_boolean_expression_factory<23>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:36679
VA_CHT_1(0x007a72a0, 0x49)
t_script_numeric_expression_factory<18>::t_script_numeric_expression_factory<18>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:36680
VA_CHT_1(0x007a72f0, 0x86)
t_counted_ptr<t_abstract_script_numeric_expression> t_script_numeric_expression_factory<18>::create() const
{
    // Body unavailable.
}

// name:A; map symbol; map:36681
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression<18>::t_script_numeric_expression<18>()
{
    // Body unavailable.
}

// name:A; map symbol; map:36682
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_script_variable_expression<t_abstract_script_numeric_expression>::read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:36683
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_script_variable_expression<t_abstract_script_numeric_expression>::read_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:36684
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_script_variable_expression<t_abstract_script_numeric_expression>::write(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:36685
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_numeric_expression> t_script_numeric_expression_base<18, t_script_numeric_variable>::clone(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:36686
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression_type t_script_numeric_expression_base<18, t_script_numeric_variable>::get_type(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:36687
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression<18>::t_script_numeric_expression<18>(t_script_numeric_expression<18> const& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:36688
VA_CHT_1_COMPGEN(0x007a7460, 0x9c, VECTOR_DELETING_DTOR, "t_script_numeric_expression<18>")

// confidence:A; align-band; retn,stable,vslot; map:36689
VA_CHT_1_COMPGEN(0x007a7390, 0xc4, SCALAR_DELETING_DTOR, "t_script_numeric_expression<18>")

// name:A; map symbol; map:36690
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression_base<18, t_script_numeric_variable>::t_script_numeric_expression_base<18, t_script_numeric_variable>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:36691
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression_base<18, t_script_numeric_variable>::t_script_numeric_expression_base<18, t_script_numeric_variable>(
    t_script_numeric_expression_base<18, t_script_numeric_variable> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:36692
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression<18>::~t_script_numeric_expression<18>()
{
    // Body unavailable.
}

// name:A; map symbol; map:36693
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression_base<18, t_script_numeric_variable>::~t_script_numeric_expression_base<18, t_script_numeric_variable>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:36694
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_numeric_expression_base<18, t_script_numeric_variable>")

// name:A; map symbol; map:36695
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_numeric_expression_base<18, t_script_numeric_variable>")

// name:A; map symbol; map:36696
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_variable::t_script_numeric_variable()
{
    // Body unavailable.
}

// name:A; map symbol; map:36697
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_variable::~t_script_numeric_variable()
{
    // Body unavailable.
}

// name:A; map symbol; map:36698
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_variable::t_script_numeric_variable(t_script_numeric_variable const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:36699
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_script_numeric_variable)

// name:A; map symbol; map:36700
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_script_numeric_variable)

// name:A; map symbol; map:36701
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_variable_expression<t_abstract_script_numeric_expression>::t_script_variable_expression<t_abstract_script_numeric_expression>(

)
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:36702
VA_CHT_1(0x007a7740, 0x43)
t_script_variable_expression<t_abstract_script_numeric_expression>::~t_script_variable_expression<t_abstract_script_numeric_expression>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:36703
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_variable_expression<t_abstract_script_numeric_expression>::t_script_variable_expression<t_abstract_script_numeric_expression>(
    t_script_variable_expression<t_abstract_script_numeric_expression> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:36704
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_variable_expression<t_abstract_script_numeric_expression>")

// name:A; map symbol; map:36705
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_variable_expression<t_abstract_script_numeric_expression>")

// confidence:A; align-band; retn,stable,vptr; map:36706
VA_CHT_1(0x007a7510, 0x49)
t_script_boolean_expression_factory<23>::t_script_boolean_expression_factory<23>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:36707
VA_CHT_1(0x007a7560, 0x53)
t_counted_ptr<t_abstract_script_boolean_expression> t_script_boolean_expression_factory<23>::create() const
{
    // Body unavailable.
}

// name:A; map symbol; map:36708
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_boolean_expression<23>::t_script_boolean_expression<23>()
{
    // Body unavailable.
}

// name:A; map symbol; map:36709
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_script_variable_expression<t_abstract_script_boolean_expression>::read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:36710
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_script_variable_expression<t_abstract_script_boolean_expression>::read_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:36711
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_script_variable_expression<t_abstract_script_boolean_expression>::write(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:36712
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_boolean_expression> t_script_boolean_expression_base<23, t_script_boolean_variable>::clone(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:36713
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_boolean_expression_type t_script_boolean_expression_base<23, t_script_boolean_variable>::get_type(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:36714
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_boolean_expression<23>::t_script_boolean_expression<23>(t_script_boolean_expression<23> const& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:36715
VA_CHT_1_COMPGEN(0x007a7690, 0x9c, VECTOR_DELETING_DTOR, "t_script_boolean_expression<23>")

// confidence:A; align-band; retn,stable,vslot; map:36716
VA_CHT_1_COMPGEN(0x007a75c0, 0xc4, SCALAR_DELETING_DTOR, "t_script_boolean_expression<23>")

// name:A; map symbol; map:36717
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_boolean_expression_base<23, t_script_boolean_variable>::t_script_boolean_expression_base<23, t_script_boolean_variable>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:36718
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_boolean_expression_base<23, t_script_boolean_variable>::t_script_boolean_expression_base<23, t_script_boolean_variable>(
    t_script_boolean_expression_base<23, t_script_boolean_variable> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:36719
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_boolean_expression<23>::~t_script_boolean_expression<23>()
{
    // Body unavailable.
}

// name:A; map symbol; map:36720
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_boolean_expression_base<23, t_script_boolean_variable>::~t_script_boolean_expression_base<23, t_script_boolean_variable>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:36721
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_boolean_expression_base<23, t_script_boolean_variable>")

// name:A; map symbol; map:36722
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_boolean_expression_base<23, t_script_boolean_variable>")

// name:A; map symbol; map:36723
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_boolean_variable::t_script_boolean_variable()
{
    // Body unavailable.
}

// name:A; map symbol; map:36724
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_boolean_variable::~t_script_boolean_variable()
{
    // Body unavailable.
}

// name:A; map symbol; map:36725
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_boolean_variable::t_script_boolean_variable(t_script_boolean_variable const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:36726
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_script_boolean_variable)

// name:A; map symbol; map:36727
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_script_boolean_variable)

// name:A; map symbol; map:36728
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_variable_expression<t_abstract_script_boolean_expression>::t_script_variable_expression<t_abstract_script_boolean_expression>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:36729
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_variable_expression<t_abstract_script_boolean_expression>::~t_script_variable_expression<t_abstract_script_boolean_expression>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:36730
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_variable_expression<t_abstract_script_boolean_expression>::t_script_variable_expression<t_abstract_script_boolean_expression>(
    t_script_variable_expression<t_abstract_script_boolean_expression> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:36731
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_variable_expression<t_abstract_script_boolean_expression>")

// name:A; map symbol; map:36732
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_variable_expression<t_abstract_script_boolean_expression>")

// === .rdata (10 symbols) ===

// confidence:A; rtti-name; map:45666
DATA_CHT_1_COMPGEN(0x008ec00c, "const t_script_numeric_expression_factory<18>::`vftable'")

// confidence:A; rtti-name; map:45667
DATA_CHT_1_COMPGEN(0x008ec014, "const t_script_numeric_expression<18>::`vftable'")

// name:A; map symbol; map:45668
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_numeric_expression_base<18, t_script_numeric_variable>::`vftable'")

// name:A; map symbol; map:45669
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_numeric_variable::`vftable'")

// name:A; map symbol; map:45670
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_variable_expression<t_abstract_script_numeric_expression>::`vftable'")

// confidence:A; rtti-name; map:45671
DATA_CHT_1_COMPGEN(0x008ec044, "const t_script_boolean_expression_factory<23>::`vftable'")

// confidence:A; rtti-name; map:45672
DATA_CHT_1_COMPGEN(0x008ec04c, "const t_script_boolean_expression<23>::`vftable'")

// name:A; map symbol; map:45673
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_boolean_expression_base<23, t_script_boolean_variable>::`vftable'")

// name:A; map symbol; map:45674
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_boolean_variable::`vftable'")

// name:A; map symbol; map:45675
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_variable_expression<t_abstract_script_boolean_expression>::`vftable'")

// === .rdata$r (40 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_numeric_expression_factory@$0BC@@@;bcd=51a148;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56041
DATA_CHT_1_COMPGEN(0x0091a148, "t_script_numeric_expression_factory<18>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_numeric_expression_factory@$0BC@@@;vft=4ec00c;col=51a180;td=5b8aac;chd=51a170;offset=0;cdOffset=0;validated-hierarchy; map:56042
DATA_CHT_1_COMPGEN(0x0091a160, "t_script_numeric_expression_factory<18>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_numeric_expression_factory@$0BC@@@;vft=4ec00c;col=51a180;td=5b8aac;chd=51a170;offset=0;cdOffset=0;validated-hierarchy; map:56043
DATA_CHT_1_COMPGEN(0x0091a170, "t_script_numeric_expression_factory<18>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_numeric_expression_factory@$0BC@@@;vft=4ec00c;col=51a180;td=5b8aac;chd=51a170;offset=0;cdOffset=0;validated-hierarchy; map:56044
DATA_CHT_1_COMPGEN(0x0091a180, "const t_script_numeric_expression_factory<18>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_variable_expression@Vt_abstract_script_numeric_expression@@@@;bcd=51a194;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56045
DATA_CHT_1_COMPGEN(0x0091a194, "t_script_variable_expression<t_abstract_script_numeric_expression>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_script_numeric_variable@@;bcd=51a1ac;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56046
DATA_CHT_1_COMPGEN(0x0091a1ac, "t_script_numeric_variable::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_numeric_expression_base@$0BC@Vt_script_numeric_variable@@@@;bcd=51a1c4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56047
DATA_CHT_1_COMPGEN(0x0091a1c4, "t_script_numeric_expression_base<18, t_script_numeric_variable>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_numeric_expression@$0BC@@@;bcd=51a1dc;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56048
DATA_CHT_1_COMPGEN(0x0091a1dc, "t_script_numeric_expression<18>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_numeric_expression@$0BC@@@;vft=4ec014;col=51a224;td=5b8bbc;chd=51a214;offset=0;cdOffset=0;validated-hierarchy; map:56049
DATA_CHT_1_COMPGEN(0x0091a1f4, "t_script_numeric_expression<18>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_numeric_expression@$0BC@@@;vft=4ec014;col=51a224;td=5b8bbc;chd=51a214;offset=0;cdOffset=0;validated-hierarchy; map:56050
DATA_CHT_1_COMPGEN(0x0091a214, "t_script_numeric_expression<18>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_numeric_expression@$0BC@@@;vft=4ec014;col=51a224;td=5b8bbc;chd=51a214;offset=0;cdOffset=0;validated-hierarchy; map:56051
DATA_CHT_1_COMPGEN(0x0091a224, "const t_script_numeric_expression<18>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:56052
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_numeric_expression_base<18, t_script_numeric_variable>::`RTTI Base Class Array'")

// name:A; map symbol; map:56053
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_numeric_expression_base<18, t_script_numeric_variable>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:56054
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_numeric_expression_base<18, t_script_numeric_variable>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:56055
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_numeric_variable::`RTTI Base Class Array'")

// name:A; map symbol; map:56056
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_numeric_variable::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:56057
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_numeric_variable::`RTTI Complete Object Locator'")

// name:A; map symbol; map:56058
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_variable_expression<t_abstract_script_numeric_expression>::`RTTI Base Class Array'")

// name:A; map symbol; map:56059
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_variable_expression<t_abstract_script_numeric_expression>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:56060
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_variable_expression<t_abstract_script_numeric_expression>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_boolean_expression_factory@$0BH@@@;bcd=51a238;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56061
DATA_CHT_1_COMPGEN(0x0091a238, "t_script_boolean_expression_factory<23>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_boolean_expression_factory@$0BH@@@;vft=4ec044;col=51a270;td=5b8bf0;chd=51a260;offset=0;cdOffset=0;validated-hierarchy; map:56062
DATA_CHT_1_COMPGEN(0x0091a250, "t_script_boolean_expression_factory<23>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_boolean_expression_factory@$0BH@@@;vft=4ec044;col=51a270;td=5b8bf0;chd=51a260;offset=0;cdOffset=0;validated-hierarchy; map:56063
DATA_CHT_1_COMPGEN(0x0091a260, "t_script_boolean_expression_factory<23>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_boolean_expression_factory@$0BH@@@;vft=4ec044;col=51a270;td=5b8bf0;chd=51a260;offset=0;cdOffset=0;validated-hierarchy; map:56064
DATA_CHT_1_COMPGEN(0x0091a270, "const t_script_boolean_expression_factory<23>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_variable_expression@Vt_abstract_script_boolean_expression@@@@;bcd=51a284;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56065
DATA_CHT_1_COMPGEN(0x0091a284, "t_script_variable_expression<t_abstract_script_boolean_expression>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_script_boolean_variable@@;bcd=51a29c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56066
DATA_CHT_1_COMPGEN(0x0091a29c, "t_script_boolean_variable::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_boolean_expression_base@$0BH@Vt_script_boolean_variable@@@@;bcd=51a2b4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56067
DATA_CHT_1_COMPGEN(0x0091a2b4, "t_script_boolean_expression_base<23, t_script_boolean_variable>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_boolean_expression@$0BH@@@;bcd=51a2cc;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56068
DATA_CHT_1_COMPGEN(0x0091a2cc, "t_script_boolean_expression<23>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_boolean_expression@$0BH@@@;vft=4ec04c;col=51a314;td=5b8d04;chd=51a304;offset=0;cdOffset=0;validated-hierarchy; map:56069
DATA_CHT_1_COMPGEN(0x0091a2e4, "t_script_boolean_expression<23>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_boolean_expression@$0BH@@@;vft=4ec04c;col=51a314;td=5b8d04;chd=51a304;offset=0;cdOffset=0;validated-hierarchy; map:56070
DATA_CHT_1_COMPGEN(0x0091a304, "t_script_boolean_expression<23>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_boolean_expression@$0BH@@@;vft=4ec04c;col=51a314;td=5b8d04;chd=51a304;offset=0;cdOffset=0;validated-hierarchy; map:56071
DATA_CHT_1_COMPGEN(0x0091a314, "const t_script_boolean_expression<23>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:56072
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_boolean_expression_base<23, t_script_boolean_variable>::`RTTI Base Class Array'")

// name:A; map symbol; map:56073
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_boolean_expression_base<23, t_script_boolean_variable>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:56074
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_boolean_expression_base<23, t_script_boolean_variable>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:56075
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_boolean_variable::`RTTI Base Class Array'")

// name:A; map symbol; map:56076
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_boolean_variable::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:56077
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_boolean_variable::`RTTI Complete Object Locator'")

// name:A; map symbol; map:56078
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_variable_expression<t_abstract_script_boolean_expression>::`RTTI Base Class Array'")

// name:A; map symbol; map:56079
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_variable_expression<t_abstract_script_boolean_expression>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:56080
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_variable_expression<t_abstract_script_boolean_expression>::`RTTI Complete Object Locator'")

// === .data (10 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_numeric_expression_factory@$0BC@@@;td=5b8aac;validated-header; map:59493
DATA_CHT_1_COMPGEN(0x009b8aac, "t_script_numeric_expression_factory<18> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_variable_expression@Vt_abstract_script_numeric_expression@@@@;td=5b8ae8;validated-header; map:59494
DATA_CHT_1_COMPGEN(0x009b8ae8, "t_script_variable_expression<t_abstract_script_numeric_expression> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_script_numeric_variable@@;td=5b8b40;validated-header; map:59495
DATA_CHT_1_COMPGEN(0x009b8b40, "t_script_numeric_variable `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_numeric_expression_base@$0BC@Vt_script_numeric_variable@@@@;td=5b8b68;validated-header; map:59496
DATA_CHT_1_COMPGEN(0x009b8b68, "t_script_numeric_expression_base<18, t_script_numeric_variable> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_numeric_expression@$0BC@@@;td=5b8bbc;validated-header; map:59497
DATA_CHT_1_COMPGEN(0x009b8bbc, "t_script_numeric_expression<18> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_boolean_expression_factory@$0BH@@@;td=5b8bf0;validated-header; map:59498
DATA_CHT_1_COMPGEN(0x009b8bf0, "t_script_boolean_expression_factory<23> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_variable_expression@Vt_abstract_script_boolean_expression@@@@;td=5b8c30;validated-header; map:59499
DATA_CHT_1_COMPGEN(0x009b8c30, "t_script_variable_expression<t_abstract_script_boolean_expression> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_script_boolean_variable@@;td=5b8c88;validated-header; map:59500
DATA_CHT_1_COMPGEN(0x009b8c88, "t_script_boolean_variable `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_boolean_expression_base@$0BH@Vt_script_boolean_variable@@@@;td=5b8cb0;validated-header; map:59501
DATA_CHT_1_COMPGEN(0x009b8cb0, "t_script_boolean_expression_base<23, t_script_boolean_variable> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_boolean_expression@$0BH@@@;td=5b8d04;validated-header; map:59502
DATA_CHT_1_COMPGEN(0x009b8d04, "t_script_boolean_expression<23> `RTTI Type Descriptor'")
