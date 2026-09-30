// script_creature_action.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 56/147 (A:50 B:5 C:1); unaccounted 91; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (80 symbols) ===

// name:A; map symbol; map:34737
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_script_creature_action::read_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:34738
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_script_creature_action::read(std::basic_streambuf<char, std::char_traits<char>>& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:34739
VA_CHT_1(0x00797710, 0x7c)
bool t_script_creature_action::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:34740
VA_CHT_1(0x00797790, 0xaa)
void t_script_give_creatures::do_action(t_creature_array* arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:34741
VA_CHT_1(0x00797ce0, 0x194)
void t_script_take_creatures::do_action(t_creature_array* arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:34742
VA_CHT_1(0x00797e80, 0x1e)
void t_script_take_creatures::add_icons(t_basic_dialog* arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:34743
VA_CHT_1(0x00797ea0, 0x1f)
void t_script_give_creatures::add_icons(t_basic_dialog* arg_0) const
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:63125; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00797ec0, 0x70, STATIC_INIT_DISPATCH, script_creature_action)

// name:C; dyninit; see ledger; map:63127
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "t_script_action_base<21,t_script_give_creatures>::k_factory")

// confidence:A; align-order; atexit,stable; map:63128; name:C (dyninit; see ledger)
VA_CHT_1(0x00797f50, 0x1f)
// t_script_action_base<50,t_script_take_creatures>::k_factory$atexit
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:34744
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_creature_type t_script_creature_action::get_creature_type() const
{
    // Body unavailable.
}

// name:A; map symbol; map:34745
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_script_creature_action::get_quantity() const
{
    // Body unavailable.
}

// name:A; map symbol; map:34746
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_script_targeted_action<t_script_army_target>::read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:34747
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_script_targeted_action<t_script_army_target>::read_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:34748
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_script_targeted_action<t_script_army_target>::write(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0
) const
{
    // Body unavailable.
}

// name:A; dyninit; see ledger; map:34749
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "t_script_action_base<21,t_script_give_creatures>::k_factory")

// name:A; dyninit; see ledger; map:34750
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "t_script_action_base<50,t_script_take_creatures>::k_factory")

// name:A; dyninit; see ledger; map:34751
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "t_script_action_base<50,t_script_take_creatures>::k_factory")

// name:A; dyninit; see ledger; map:34752
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "t_script_action_base<21,t_script_give_creatures>::k_factory")

// confidence:A; align-band; retn,stable,vptr; map:34753
VA_CHT_1(0x00797f70, 0x14)
t_script_action_factory<21>::~t_script_action_factory<21>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:34754
VA_CHT_1(0x007980d0, 0x14)
t_script_action_factory<50>::~t_script_action_factory<50>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34755
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_factory<21>::t_script_action_factory<21>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34756
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_action> t_script_action_factory<21>::create() const
{
    // Body unavailable.
}

// name:A; map symbol; map:34757
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<21>::t_script_action<21>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34758
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_script_army_action::execute(t_script_context_hero const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:34759
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_script_army_action::execute(t_script_context_town const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:34760
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_script_army_action::execute(t_script_context_object const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:34761
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_script_army_action::execute(t_script_context_army const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:34762
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_script_army_action::execute(t_script_context_global const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:34763
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_army_target t_script_targeted_action<t_script_army_target>::get_target() const
{
    // Body unavailable.
}

// name:A; map symbol; map:34764
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_action> t_script_action_base<21, t_script_give_creatures>::clone() const
{
    // Body unavailable.
}

// name:A; map symbol; map:34765
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_type t_script_action_base<21, t_script_give_creatures>::get_type() const
{
    // Body unavailable.
}

// name:A; map symbol; map:34766
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<21>::t_script_action<21>(t_script_action<21> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:34767
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_action<21>")

// name:A; map symbol; map:34768
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_action<21>")

// name:A; map symbol; map:34769
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<21, t_script_give_creatures>::t_script_action_base<21, t_script_give_creatures>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34770
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<21, t_script_give_creatures>::t_script_action_base<21, t_script_give_creatures>(
    t_script_action_base<21, t_script_give_creatures> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:34771
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<21>::~t_script_action<21>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34772
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<21, t_script_give_creatures>::~t_script_action_base<21, t_script_give_creatures>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34773
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_action_base<21, t_script_give_creatures>")

// name:A; map symbol; map:34774
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_action_base<21, t_script_give_creatures>")

// name:A; map symbol; map:34775
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_give_creatures::t_script_give_creatures()
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:34776
VA_CHT_1(0x00797860, 0x8a)
t_script_creature_action::t_script_creature_action()
{
    // Body unavailable.
}

// name:A; map symbol; map:34777
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_script_creature_action)

// name:A; map symbol; map:34778
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_script_creature_action)

// name:A; map symbol; map:34779
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_army_action::t_script_army_action()
{
    // Body unavailable.
}

// name:A; map symbol; map:34780
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_creature_action::~t_script_creature_action()
{
    // Body unavailable.
}

// name:A; map symbol; map:34781
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_army_action::~t_script_army_action()
{
    // Body unavailable.
}

// name:A; map symbol; map:34782
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_script_army_action)

// name:A; map symbol; map:34783
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_script_army_action)

// name:A; map symbol; map:34784
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_targeted_action<t_script_army_target>::~t_script_targeted_action<t_script_army_target>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34785
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_targeted_action<t_script_army_target>::t_script_targeted_action<t_script_army_target>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34786
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_targeted_action<t_script_army_target>")

// name:A; map symbol; map:34787
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_targeted_action<t_script_army_target>")

// name:A; map symbol; map:34788
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_give_creatures::~t_script_give_creatures()
{
    // Body unavailable.
}

// name:A; map symbol; map:34789
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_give_creatures::t_script_give_creatures(t_script_give_creatures const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:34790
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_script_give_creatures)

// name:A; map symbol; map:34791
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_script_give_creatures)

// name:A; map symbol; map:34792
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_creature_action::t_script_creature_action(t_script_creature_action const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:34793
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_army_action::t_script_army_action(t_script_army_action const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:34794
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_targeted_action<t_script_army_target>::t_script_targeted_action<t_script_army_target>(
    t_script_targeted_action<t_script_army_target> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:34795
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_factory<50>::t_script_action_factory<50>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34796
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_action> t_script_action_factory<50>::create() const
{
    // Body unavailable.
}

// name:A; map symbol; map:34797
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<50>::t_script_action<50>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34798
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_action> t_script_action_base<50, t_script_take_creatures>::clone() const
{
    // Body unavailable.
}

// name:A; map symbol; map:34799
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_type t_script_action_base<50, t_script_take_creatures>::get_type() const
{
    // Body unavailable.
}

// name:A; map symbol; map:34800
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<50>::t_script_action<50>(t_script_action<50> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:34801
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_action<50>")

// name:A; map symbol; map:34802
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_action<50>")

// name:A; map symbol; map:34803
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<50, t_script_take_creatures>::t_script_action_base<50, t_script_take_creatures>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34804
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<50, t_script_take_creatures>::t_script_action_base<50, t_script_take_creatures>(
    t_script_action_base<50, t_script_take_creatures> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:34805
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<50>::~t_script_action<50>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34806
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<50, t_script_take_creatures>::~t_script_action_base<50, t_script_take_creatures>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34807
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_action_base<50, t_script_take_creatures>")

// name:A; map symbol; map:34808
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_action_base<50, t_script_take_creatures>")

// name:A; map symbol; map:34809
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_take_creatures::t_script_take_creatures()
{
    // Body unavailable.
}

// name:A; map symbol; map:34810
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_take_creatures::~t_script_take_creatures()
{
    // Body unavailable.
}

// name:A; map symbol; map:34811
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_take_creatures::t_script_take_creatures(t_script_take_creatures const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:34812
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_script_take_creatures)

// name:A; map symbol; map:34813
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_script_take_creatures)

// === .rdata (11 symbols) ===

// confidence:A; rtti-name; map:45415
DATA_CHT_1_COMPGEN(0x008ead04, "const t_script_action_factory<21>::`vftable'")

// confidence:A; rtti-name; map:45416
DATA_CHT_1_COMPGEN(0x008ead0c, "const t_script_action<21>::`vftable'")

// name:A; map symbol; map:45417
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_action_base<21, t_script_give_creatures>::`vftable'")

// name:A; map symbol; map:45418
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_give_creatures::`vftable'")

// name:A; map symbol; map:45419
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_creature_action::`vftable'")

// confidence:A; rtti-name; map:45420
DATA_CHT_1_COMPGEN(0x008ead44, "const t_script_army_action::`vftable'")

// confidence:A; rtti-name; map:45421
DATA_CHT_1_COMPGEN(0x008eb2c4, "const t_script_targeted_action<t_script_army_target>::`vftable'")

// confidence:A; rtti-name; map:45422
DATA_CHT_1_COMPGEN(0x008ead7c, "const t_script_action_factory<50>::`vftable'")

// confidence:A; rtti-name; map:45423
DATA_CHT_1_COMPGEN(0x008ead84, "const t_script_action<50>::`vftable'")

// name:A; map symbol; map:45424
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_action_base<50, t_script_take_creatures>::`vftable'")

// name:A; map symbol; map:45425
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_take_creatures::`vftable'")

// === .rdata$r (44 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action_factory@$0BF@@@;bcd=516bf8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:55038
DATA_CHT_1_COMPGEN(0x00916bf8, "t_script_action_factory<21>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_action_factory@$0BF@@@;vft=4ead04;col=516c30;td=5b50f4;chd=516c20;offset=0;cdOffset=0;validated-hierarchy; map:55039
DATA_CHT_1_COMPGEN(0x00916c10, "t_script_action_factory<21>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_action_factory@$0BF@@@;vft=4ead04;col=516c30;td=5b50f4;chd=516c20;offset=0;cdOffset=0;validated-hierarchy; map:55040
DATA_CHT_1_COMPGEN(0x00916c20, "t_script_action_factory<21>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_action_factory@$0BF@@@;vft=4ead04;col=516c30;td=5b50f4;chd=516c20;offset=0;cdOffset=0;validated-hierarchy; map:55041
DATA_CHT_1_COMPGEN(0x00916c30, "const t_script_action_factory<21>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_targeted_action@W4t_script_army_target@@@@;bcd=516c44;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:55042
DATA_CHT_1_COMPGEN(0x00916c44, "t_script_targeted_action<t_script_army_target>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_script_army_action@@;bcd=516c5c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:55043
DATA_CHT_1_COMPGEN(0x00916c5c, "t_script_army_action::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_script_creature_action@@;bcd=516c74;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:55044
DATA_CHT_1_COMPGEN(0x00916c74, "t_script_creature_action::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_script_give_creatures@@;bcd=516c8c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:55045
DATA_CHT_1_COMPGEN(0x00916c8c, "t_script_give_creatures::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action_base@$0BF@Vt_script_give_creatures@@@@;bcd=516ca4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:55046
DATA_CHT_1_COMPGEN(0x00916ca4, "t_script_action_base<21, t_script_give_creatures>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action@$0BF@@@;bcd=516cbc;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:55047
DATA_CHT_1_COMPGEN(0x00916cbc, "t_script_action<21>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_action@$0BF@@@;vft=4ead0c;col=516d08;td=5b5228;chd=516cf8;offset=0;cdOffset=0;validated-hierarchy; map:55048
DATA_CHT_1_COMPGEN(0x00916cd4, "t_script_action<21>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_action@$0BF@@@;vft=4ead0c;col=516d08;td=5b5228;chd=516cf8;offset=0;cdOffset=0;validated-hierarchy; map:55049
DATA_CHT_1_COMPGEN(0x00916cf8, "t_script_action<21>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_action@$0BF@@@;vft=4ead0c;col=516d08;td=5b5228;chd=516cf8;offset=0;cdOffset=0;validated-hierarchy; map:55050
DATA_CHT_1_COMPGEN(0x00916d08, "const t_script_action<21>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:55051
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_action_base<21, t_script_give_creatures>::`RTTI Base Class Array'")

// name:A; map symbol; map:55052
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_action_base<21, t_script_give_creatures>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:55053
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_action_base<21, t_script_give_creatures>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:55054
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_give_creatures::`RTTI Base Class Array'")

// name:A; map symbol; map:55055
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_give_creatures::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:55056
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_give_creatures::`RTTI Complete Object Locator'")

// name:A; map symbol; map:55057
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_creature_action::`RTTI Base Class Array'")

// name:A; map symbol; map:55058
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_creature_action::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:55059
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_creature_action::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_script_army_action@@;vft=4ead44;col=516d40;td=5b516c;chd=516d30;offset=0;cdOffset=0;validated-hierarchy; map:55060
DATA_CHT_1_COMPGEN(0x00916d1c, "t_script_army_action::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_script_army_action@@;vft=4ead44;col=516d40;td=5b516c;chd=516d30;offset=0;cdOffset=0;validated-hierarchy; map:55061
DATA_CHT_1_COMPGEN(0x00916d30, "t_script_army_action::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_script_army_action@@;vft=4ead44;col=516d40;td=5b516c;chd=516d30;offset=0;cdOffset=0;validated-hierarchy; map:55062
DATA_CHT_1_COMPGEN(0x00916d40, "const t_script_army_action::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_targeted_action@W4t_script_army_target@@@@;vft=4eb2c4;col=517c0c;td=5b5128;chd=517bfc;offset=0;cdOffset=0;validated-hierarchy; map:55063
DATA_CHT_1_COMPGEN(0x00917bec, "t_script_targeted_action<t_script_army_target>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_targeted_action@W4t_script_army_target@@@@;vft=4eb2c4;col=517c0c;td=5b5128;chd=517bfc;offset=0;cdOffset=0;validated-hierarchy; map:55064
DATA_CHT_1_COMPGEN(0x00917bfc, "t_script_targeted_action<t_script_army_target>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_targeted_action@W4t_script_army_target@@@@;vft=4eb2c4;col=517c0c;td=5b5128;chd=517bfc;offset=0;cdOffset=0;validated-hierarchy; map:55065
DATA_CHT_1_COMPGEN(0x00917c0c, "const t_script_targeted_action<t_script_army_target>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action_factory@$0DC@@@;bcd=516d54;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:55066
DATA_CHT_1_COMPGEN(0x00916d54, "t_script_action_factory<50>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_action_factory@$0DC@@@;vft=4ead7c;col=516d8c;td=5b5250;chd=516d7c;offset=0;cdOffset=0;validated-hierarchy; map:55067
DATA_CHT_1_COMPGEN(0x00916d6c, "t_script_action_factory<50>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_action_factory@$0DC@@@;vft=4ead7c;col=516d8c;td=5b5250;chd=516d7c;offset=0;cdOffset=0;validated-hierarchy; map:55068
DATA_CHT_1_COMPGEN(0x00916d7c, "t_script_action_factory<50>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_action_factory@$0DC@@@;vft=4ead7c;col=516d8c;td=5b5250;chd=516d7c;offset=0;cdOffset=0;validated-hierarchy; map:55069
DATA_CHT_1_COMPGEN(0x00916d8c, "const t_script_action_factory<50>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_script_take_creatures@@;bcd=516da0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:55070
DATA_CHT_1_COMPGEN(0x00916da0, "t_script_take_creatures::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action_base@$0DC@Vt_script_take_creatures@@@@;bcd=516db8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:55071
DATA_CHT_1_COMPGEN(0x00916db8, "t_script_action_base<50, t_script_take_creatures>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action@$0DC@@@;bcd=516dd0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:55072
DATA_CHT_1_COMPGEN(0x00916dd0, "t_script_action<50>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_action@$0DC@@@;vft=4ead84;col=516e1c;td=5b52f0;chd=516e0c;offset=0;cdOffset=0;validated-hierarchy; map:55073
DATA_CHT_1_COMPGEN(0x00916de8, "t_script_action<50>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_action@$0DC@@@;vft=4ead84;col=516e1c;td=5b52f0;chd=516e0c;offset=0;cdOffset=0;validated-hierarchy; map:55074
DATA_CHT_1_COMPGEN(0x00916e0c, "t_script_action<50>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_action@$0DC@@@;vft=4ead84;col=516e1c;td=5b52f0;chd=516e0c;offset=0;cdOffset=0;validated-hierarchy; map:55075
DATA_CHT_1_COMPGEN(0x00916e1c, "const t_script_action<50>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:55076
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_action_base<50, t_script_take_creatures>::`RTTI Base Class Array'")

// name:A; map symbol; map:55077
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_action_base<50, t_script_take_creatures>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:55078
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_action_base<50, t_script_take_creatures>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:55079
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_take_creatures::`RTTI Base Class Array'")

// name:A; map symbol; map:55080
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_take_creatures::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:55081
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_take_creatures::`RTTI Complete Object Locator'")

// === .data (12 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action_factory@$0BF@@@;td=5b50f4;validated-header; map:59234
DATA_CHT_1_COMPGEN(0x009b50f4, "t_script_action_factory<21> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_targeted_action@W4t_script_army_target@@@@;td=5b5128;validated-header; map:59235
DATA_CHT_1_COMPGEN(0x009b5128, "t_script_targeted_action<t_script_army_target> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_script_army_action@@;td=5b516c;validated-header; map:59236
DATA_CHT_1_COMPGEN(0x009b516c, "t_script_army_action `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_script_creature_action@@;td=5b5190;validated-header; map:59237
DATA_CHT_1_COMPGEN(0x009b5190, "t_script_creature_action `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_script_give_creatures@@;td=5b51b8;validated-header; map:59238
DATA_CHT_1_COMPGEN(0x009b51b8, "t_script_give_creatures `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action_base@$0BF@Vt_script_give_creatures@@@@;td=5b51e0;validated-header; map:59239
DATA_CHT_1_COMPGEN(0x009b51e0, "t_script_action_base<21, t_script_give_creatures> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action@$0BF@@@;td=5b5228;validated-header; map:59240
DATA_CHT_1_COMPGEN(0x009b5228, "t_script_action<21> `RTTI Type Descriptor'")

// name:A; map symbol; map:59241
DATA_CHT_1_COMPGEN(UNACCOUNTED, "C:\\\\work\\\\game\\\\script_army_action....")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action_factory@$0DC@@@;td=5b5250;validated-header; map:59242
DATA_CHT_1_COMPGEN(0x009b5250, "t_script_action_factory<50> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_script_take_creatures@@;td=5b5280;validated-header; map:59243
DATA_CHT_1_COMPGEN(0x009b5280, "t_script_take_creatures `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action_base@$0DC@Vt_script_take_creatures@@@@;td=5b52a8;validated-header; map:59244
DATA_CHT_1_COMPGEN(0x009b52a8, "t_script_action_base<50, t_script_take_creatures> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action@$0DC@@@;td=5b52f0;validated-header; map:59245
DATA_CHT_1_COMPGEN(0x009b52f0, "t_script_action<50> `RTTI Type Descriptor'")
