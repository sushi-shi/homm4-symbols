// script_artifact_action.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 57/136 (A:51 B:5 C:1); unaccounted 79; skipped std 30.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (75 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:63155; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00794bf0, 0x33, STATIC_INIT_DISPATCH, "script_artifact_action#1")

// name:C; dyninit; see ledger; map:63156
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "script_artifact_action#1")

// name:C; dyninit; see ledger; map:63157
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "script_artifact_action#1")

// confidence:B; dyninit-dtor; owner-conf-C; map:63158; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00794c30, 0x63, STATIC_DTOR, "script_artifact_action#1")

// name:A; map symbol; map:34475
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_script_artifact_action::read_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:34476
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_script_artifact_action::read(std::basic_streambuf<char, std::char_traits<char>>& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:34477
VA_CHT_1(0x00795230, 0xec)
bool t_script_artifact_action::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:34478
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_script_artifact_action::add_icons(t_basic_dialog* arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:34479
VA_CHT_1(0x00795320, 0xe9)
void t_script_give_artifact::make_adjustment(t_creature_stack* arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:34480
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_script_give_artifact::make_adjustment(t_creature_array* arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:34481
VA_CHT_1(0x00795410, 0x2d0)
void t_script_take_artifact::make_adjustment(t_creature_stack* arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:34482
VA_CHT_1(0x007956e0, 0x341)
void t_script_take_artifact::make_adjustment(t_creature_array* arg_0) const
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:63159; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00795bd0, 0x70, STATIC_INIT_DISPATCH, script_artifact_action)

// name:C; dyninit; see ledger; map:63161
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "t_script_action_base<20,t_script_give_artifact>::k_factory")

// confidence:A; align-order; atexit,stable; map:63162; name:C (dyninit; see ledger)
VA_CHT_1(0x00795c60, 0x1f)
// t_script_action_base<49,t_script_take_artifact>::k_factory$atexit
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:34483
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::vector<t_artifact, std::allocator<t_artifact>> const& t_script_artifact_action::get_artifacts() const
{
    // Body unavailable.
}

// name:A; dyninit; see ledger; map:34513
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "t_script_action_base<20,t_script_give_artifact>::k_factory")

// name:A; dyninit; see ledger; map:34514
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "t_script_action_base<49,t_script_take_artifact>::k_factory")

// name:A; dyninit; see ledger; map:34515
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "t_script_action_base<49,t_script_take_artifact>::k_factory")

// name:A; dyninit; see ledger; map:34516
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "t_script_action_base<20,t_script_give_artifact>::k_factory")

// confidence:A; align-band; retn,stable,vptr; map:34517
VA_CHT_1(0x00795c80, 0x14)
t_script_action_factory<20>::~t_script_action_factory<20>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:34518
VA_CHT_1(0x00795f20, 0x14)
t_script_action_factory<49>::~t_script_action_factory<49>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34519
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_factory<20>::t_script_action_factory<20>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:34520
VA_CHT_1(0x00795ca0, 0x7a)
t_counted_ptr<t_abstract_script_action> t_script_action_factory<20>::create() const
{
    // Body unavailable.
}

// name:A; map symbol; map:34521
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<20>::t_script_action<20>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34522
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_script_stack_action::execute(t_script_context_hero const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:34523
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_script_stack_action::execute(t_script_context_town const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:34524
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_script_stack_action::execute(t_script_context_object const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:34525
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_script_stack_action::execute(t_script_context_army const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:34526
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_script_stack_action::execute(t_script_context_global const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:34527
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_action> t_script_action_base<20, t_script_give_artifact>::clone() const
{
    // Body unavailable.
}

// name:A; map symbol; map:34528
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_type t_script_action_base<20, t_script_give_artifact>::get_type() const
{
    // Body unavailable.
}

// name:A; map symbol; map:34529
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<20>::t_script_action<20>(t_script_action<20> const& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:34530
VA_CHT_1_COMPGEN(0x00795e90, 0x1e, VECTOR_DELETING_DTOR, "t_script_action<20>")

// confidence:A; align-band; retn,stable,vslot; map:34531
VA_CHT_1_COMPGEN(0x00795dc0, 0xc6, SCALAR_DELETING_DTOR, "t_script_action<20>")

// name:A; map symbol; map:34532
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<20, t_script_give_artifact>::t_script_action_base<20, t_script_give_artifact>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34533
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<20, t_script_give_artifact>::t_script_action_base<20, t_script_give_artifact>(
    t_script_action_base<20, t_script_give_artifact> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:34534
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<20>::~t_script_action<20>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34535
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<20, t_script_give_artifact>::~t_script_action_base<20, t_script_give_artifact>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34536
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_action_base<20, t_script_give_artifact>")

// name:A; map symbol; map:34537
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_action_base<20, t_script_give_artifact>")

// name:A; map symbol; map:34538
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_give_artifact::t_script_give_artifact()
{
    // Body unavailable.
}

// name:A; map symbol; map:34539
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_give_artifact::~t_script_give_artifact()
{
    // Body unavailable.
}

// name:A; map symbol; map:34540
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_give_artifact::t_script_give_artifact(t_script_give_artifact const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:34541
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_script_give_artifact)

// name:A; map symbol; map:34542
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_script_give_artifact)

// confidence:C; align-band; retn,stable; map:34543
VA_CHT_1(0x00796080, 0x6c)
t_script_artifact_action::t_script_artifact_action()
{
    // Body unavailable.
}

// name:A; map symbol; map:34544
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_artifact_action::~t_script_artifact_action()
{
    // Body unavailable.
}

// name:A; map symbol; map:34545
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_artifact_action::t_script_artifact_action(t_script_artifact_action const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:34546
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_script_artifact_action)

// name:A; map symbol; map:34547
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_script_artifact_action)

// name:A; map symbol; map:34548
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_stack_action::t_script_stack_action()
{
    // Body unavailable.
}

// name:A; map symbol; map:34549
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_stack_action::~t_script_stack_action()
{
    // Body unavailable.
}

// name:A; map symbol; map:34550
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_stack_action::t_script_stack_action(t_script_stack_action const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:34551
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_script_stack_action)

// name:A; map symbol; map:34552
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_script_stack_action)

// name:A; map symbol; map:34553
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_factory<49>::t_script_action_factory<49>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:34554
VA_CHT_1(0x00795f40, 0x50)
t_counted_ptr<t_abstract_script_action> t_script_action_factory<49>::create() const
{
    // Body unavailable.
}

// name:A; map symbol; map:34555
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<49>::t_script_action<49>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34556
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_action> t_script_action_base<49, t_script_take_artifact>::clone() const
{
    // Body unavailable.
}

// name:A; map symbol; map:34557
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_type t_script_action_base<49, t_script_take_artifact>::get_type() const
{
    // Body unavailable.
}

// name:A; map symbol; map:34558
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<49>::t_script_action<49>(t_script_action<49> const& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:34559
VA_CHT_1_COMPGEN(0x00796060, 0x1e, SCALAR_DELETING_DTOR, "t_script_action<49>")

// confidence:A; align-band; retn,stable,vslot; map:34560
VA_CHT_1_COMPGEN(0x00795f90, 0xc6, VECTOR_DELETING_DTOR, "t_script_action<49>")

// name:A; map symbol; map:34561
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<49, t_script_take_artifact>::t_script_action_base<49, t_script_take_artifact>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34562
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<49, t_script_take_artifact>::t_script_action_base<49, t_script_take_artifact>(
    t_script_action_base<49, t_script_take_artifact> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:34563
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<49>::~t_script_action<49>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34564
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<49, t_script_take_artifact>::~t_script_action_base<49, t_script_take_artifact>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34565
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_action_base<49, t_script_take_artifact>")

// name:A; map symbol; map:34566
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_action_base<49, t_script_take_artifact>")

// name:A; map symbol; map:34567
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_take_artifact::t_script_take_artifact()
{
    // Body unavailable.
}

// name:A; map symbol; map:34568
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_take_artifact::~t_script_take_artifact()
{
    // Body unavailable.
}

// name:A; map symbol; map:34569
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_take_artifact::t_script_take_artifact(t_script_take_artifact const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:34570
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_script_take_artifact)

// name:A; map symbol; map:34571
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_script_take_artifact)

// === .rdata (10 symbols) ===

// confidence:A; rtti-name; map:45387
DATA_CHT_1_COMPGEN(0x008eaa84, "const t_script_action_factory<20>::`vftable'")

// confidence:A; rtti-name; map:45388
DATA_CHT_1_COMPGEN(0x008eaa8c, "const t_script_action<20>::`vftable'")

// name:A; map symbol; map:45389
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_action_base<20, t_script_give_artifact>::`vftable'")

// name:A; map symbol; map:45390
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_give_artifact::`vftable'")

// name:A; map symbol; map:45391
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_artifact_action::`vftable'")

// confidence:A; rtti-name; map:45392
DATA_CHT_1_COMPGEN(0x008eaac8, "const t_script_stack_action::`vftable'")

// confidence:A; rtti-name; map:45393
DATA_CHT_1_COMPGEN(0x008eab04, "const t_script_action_factory<49>::`vftable'")

// confidence:A; rtti-name; map:45394
DATA_CHT_1_COMPGEN(0x008eab0c, "const t_script_action<49>::`vftable'")

// name:A; map symbol; map:45395
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_action_base<49, t_script_take_artifact>::`vftable'")

// name:A; map symbol; map:45396
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_take_artifact::`vftable'")

// === .rdata$r (40 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action_factory@$0BE@@@;bcd=5165c0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54926
DATA_CHT_1_COMPGEN(0x009165c0, "t_script_action_factory<20>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_action_factory@$0BE@@@;vft=4eaa84;col=5165f8;td=5b4bd0;chd=5165e8;offset=0;cdOffset=0;validated-hierarchy; map:54927
DATA_CHT_1_COMPGEN(0x009165d8, "t_script_action_factory<20>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_action_factory@$0BE@@@;vft=4eaa84;col=5165f8;td=5b4bd0;chd=5165e8;offset=0;cdOffset=0;validated-hierarchy; map:54928
DATA_CHT_1_COMPGEN(0x009165e8, "t_script_action_factory<20>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_action_factory@$0BE@@@;vft=4eaa84;col=5165f8;td=5b4bd0;chd=5165e8;offset=0;cdOffset=0;validated-hierarchy; map:54929
DATA_CHT_1_COMPGEN(0x009165f8, "const t_script_action_factory<20>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_script_stack_action@@;bcd=51660c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54930
DATA_CHT_1_COMPGEN(0x0091660c, "t_script_stack_action::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_script_artifact_action@@;bcd=516624;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54931
DATA_CHT_1_COMPGEN(0x00916624, "t_script_artifact_action::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_script_give_artifact@@;bcd=51663c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54932
DATA_CHT_1_COMPGEN(0x0091663c, "t_script_give_artifact::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action_base@$0BE@Vt_script_give_artifact@@@@;bcd=516654;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54933
DATA_CHT_1_COMPGEN(0x00916654, "t_script_action_base<20, t_script_give_artifact>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action@$0BE@@@;bcd=51666c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54934
DATA_CHT_1_COMPGEN(0x0091666c, "t_script_action<20>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_action@$0BE@@@;vft=4eaa8c;col=5166b8;td=5b4cbc;chd=5166a8;offset=0;cdOffset=0;validated-hierarchy; map:54935
DATA_CHT_1_COMPGEN(0x00916684, "t_script_action<20>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_action@$0BE@@@;vft=4eaa8c;col=5166b8;td=5b4cbc;chd=5166a8;offset=0;cdOffset=0;validated-hierarchy; map:54936
DATA_CHT_1_COMPGEN(0x009166a8, "t_script_action<20>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_action@$0BE@@@;vft=4eaa8c;col=5166b8;td=5b4cbc;chd=5166a8;offset=0;cdOffset=0;validated-hierarchy; map:54937
DATA_CHT_1_COMPGEN(0x009166b8, "const t_script_action<20>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54938
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_action_base<20, t_script_give_artifact>::`RTTI Base Class Array'")

// name:A; map symbol; map:54939
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_action_base<20, t_script_give_artifact>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54940
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_action_base<20, t_script_give_artifact>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54941
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_give_artifact::`RTTI Base Class Array'")

// name:A; map symbol; map:54942
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_give_artifact::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54943
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_give_artifact::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54944
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_artifact_action::`RTTI Base Class Array'")

// name:A; map symbol; map:54945
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_artifact_action::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54946
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_artifact_action::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_script_stack_action@@;vft=4eaac8;col=5166f0;td=5b4c00;chd=5166e0;offset=0;cdOffset=0;validated-hierarchy; map:54947
DATA_CHT_1_COMPGEN(0x009166cc, "t_script_stack_action::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_script_stack_action@@;vft=4eaac8;col=5166f0;td=5b4c00;chd=5166e0;offset=0;cdOffset=0;validated-hierarchy; map:54948
DATA_CHT_1_COMPGEN(0x009166e0, "t_script_stack_action::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_script_stack_action@@;vft=4eaac8;col=5166f0;td=5b4c00;chd=5166e0;offset=0;cdOffset=0;validated-hierarchy; map:54949
DATA_CHT_1_COMPGEN(0x009166f0, "const t_script_stack_action::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action_factory@$0DB@@@;bcd=516704;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54950
DATA_CHT_1_COMPGEN(0x00916704, "t_script_action_factory<49>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_action_factory@$0DB@@@;vft=4eab04;col=51673c;td=5b4ce4;chd=51672c;offset=0;cdOffset=0;validated-hierarchy; map:54951
DATA_CHT_1_COMPGEN(0x0091671c, "t_script_action_factory<49>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_action_factory@$0DB@@@;vft=4eab04;col=51673c;td=5b4ce4;chd=51672c;offset=0;cdOffset=0;validated-hierarchy; map:54952
DATA_CHT_1_COMPGEN(0x0091672c, "t_script_action_factory<49>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_action_factory@$0DB@@@;vft=4eab04;col=51673c;td=5b4ce4;chd=51672c;offset=0;cdOffset=0;validated-hierarchy; map:54953
DATA_CHT_1_COMPGEN(0x0091673c, "const t_script_action_factory<49>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_script_take_artifact@@;bcd=516750;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54954
DATA_CHT_1_COMPGEN(0x00916750, "t_script_take_artifact::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action_base@$0DB@Vt_script_take_artifact@@@@;bcd=516768;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54955
DATA_CHT_1_COMPGEN(0x00916768, "t_script_action_base<49, t_script_take_artifact>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action@$0DB@@@;bcd=516780;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54956
DATA_CHT_1_COMPGEN(0x00916780, "t_script_action<49>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_action@$0DB@@@;vft=4eab0c;col=5167cc;td=5b4d84;chd=5167bc;offset=0;cdOffset=0;validated-hierarchy; map:54957
DATA_CHT_1_COMPGEN(0x00916798, "t_script_action<49>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_action@$0DB@@@;vft=4eab0c;col=5167cc;td=5b4d84;chd=5167bc;offset=0;cdOffset=0;validated-hierarchy; map:54958
DATA_CHT_1_COMPGEN(0x009167bc, "t_script_action<49>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_action@$0DB@@@;vft=4eab0c;col=5167cc;td=5b4d84;chd=5167bc;offset=0;cdOffset=0;validated-hierarchy; map:54959
DATA_CHT_1_COMPGEN(0x009167cc, "const t_script_action<49>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54960
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_action_base<49, t_script_take_artifact>::`RTTI Base Class Array'")

// name:A; map symbol; map:54961
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_action_base<49, t_script_take_artifact>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54962
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_action_base<49, t_script_take_artifact>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54963
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_take_artifact::`RTTI Base Class Array'")

// name:A; map symbol; map:54964
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_take_artifact::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54965
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_take_artifact::`RTTI Complete Object Locator'")

// === .data (11 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action_factory@$0BE@@@;td=5b4bd0;validated-header; map:59200
DATA_CHT_1_COMPGEN(0x009b4bd0, "t_script_action_factory<20> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_script_stack_action@@;td=5b4c00;validated-header; map:59201
DATA_CHT_1_COMPGEN(0x009b4c00, "t_script_stack_action `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_script_artifact_action@@;td=5b4c24;validated-header; map:59202
DATA_CHT_1_COMPGEN(0x009b4c24, "t_script_artifact_action `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_script_give_artifact@@;td=5b4c4c;validated-header; map:59203
DATA_CHT_1_COMPGEN(0x009b4c4c, "t_script_give_artifact `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action_base@$0BE@Vt_script_give_artifact@@@@;td=5b4c78;validated-header; map:59204
DATA_CHT_1_COMPGEN(0x009b4c78, "t_script_action_base<20, t_script_give_artifact> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action@$0BE@@@;td=5b4cbc;validated-header; map:59205
DATA_CHT_1_COMPGEN(0x009b4cbc, "t_script_action<20> `RTTI Type Descriptor'")

// name:A; map symbol; map:59206
DATA_CHT_1_COMPGEN(UNACCOUNTED, "C:\\\\work\\\\game\\\\script_stack_action...")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action_factory@$0DB@@@;td=5b4ce4;validated-header; map:59207
DATA_CHT_1_COMPGEN(0x009b4ce4, "t_script_action_factory<49> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_script_take_artifact@@;td=5b4d14;validated-header; map:59208
DATA_CHT_1_COMPGEN(0x009b4d14, "t_script_take_artifact `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action_base@$0DB@Vt_script_take_artifact@@@@;td=5b4d40;validated-header; map:59209
DATA_CHT_1_COMPGEN(0x009b4d40, "t_script_action_base<49, t_script_take_artifact> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action@$0DB@@@;td=5b4d84;validated-header; map:59210
DATA_CHT_1_COMPGEN(0x009b4d84, "t_script_action<49> `RTTI Type Descriptor'")
