// script_combat.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 52/106 (A:33 B:0 C:0); unaccounted 54; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (67 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:63132; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00796920, 0x15, STATIC_INIT_DISPATCH, "script_combat#1")

// name:C; dyninit; see ledger; map:63133
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "script_combat#1")

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:34641
VA_CHT_1(0x00796960, 0x6c)
t_combat_result t_combat_context_script::get_result() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:34642
VA_CHT_1(0x007969f0, 0xb1)
t_script_combat::t_script_combat()
{
    // Body unavailable.
}

// name:A; map symbol; map:34643
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_combat::t_script_combat(t_script_combat const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:34644
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_combat::~t_script_combat()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:34645
VA_CHT_1(0x00796ab0, 0x94)
bool t_script_combat::read(std::basic_streambuf<char, std::char_traits<char>>& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:34646
VA_CHT_1(0x00796b50, 0x7e)
bool t_script_combat::read_from_map(std::basic_streambuf<char, std::char_traits<char>>& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:34647
VA_CHT_1(0x00796bd0, 0x58)
bool t_script_combat::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:34648
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_combat& t_script_combat::operator=(t_script_combat const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:34649
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_script_combat::execute(t_script_context_hero const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:34650
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_script_combat::execute(t_script_context_town const& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:34651
VA_CHT_1(0x00796c30, 0x41)
void t_script_combat::execute(t_script_context_object const& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:34652
VA_CHT_1(0x00796c80, 0x60)
void t_script_combat::execute(t_script_context_army const& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:34653
VA_CHT_1(0x00796ce0, 0x41)
void t_script_combat::execute(t_script_context_global const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:34654
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_context_script::t_combat_context_script(
    t_creature_array* arg_0,
    t_creature_array* arg_1,
    t_adv_map_point const& arg_2,
    t_town* arg_3,
    t_ownable_garrisonable_adv_object const* arg_4
)
{
    // Body unavailable.
}

// name:A; map symbol; map:34655
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_context_type t_combat_context_script::get_type() const
{
    // Body unavailable.
}

// name:A; map symbol; map:34656
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_combat_context_script::read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_adventure_map& arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:34657
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_combat_context_script::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:34658
VA_CHT_1(0x00796d40, 0x6)
bool const* t_combat_context_script::get_are_real_armies() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:34659
VA_CHT_1(0x00796d50, 0xd)
void t_combat_context_script::on_combat_end(t_combat_result arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:34660
VA_CHT_1(0x00796d60, 0x230)
bool t_script_combat::do_action(
    t_adventure_map* arg_0,
    t_creature_array* arg_1,
    t_player* arg_2,
    t_adv_map_point const& arg_3
) const
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:63134; name:B (dyninit; see ledger)
VA_CHT_1(0x00796f90, 0x49)
// script_combat$tinit1
// Function body not reconstructed; signature retained as a comment.

// name:C; dyninit; see ledger; map:63136
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "t_script_action_base<6,t_script_combat>::k_factory")

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:63137; name:B (dyninit; see ledger)
VA_CHT_1(0x00797260, 0x13)
// script_combat$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:63138
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// script_combat$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:63139
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// script_combat$tatexit4
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:63140
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// script_combat$tatexit5
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:34661
VA_CHT_1_COMPGEN(0x00796940, 0x1e, SCALAR_DELETING_DTOR, t_script_combat)

// name:A; map symbol; map:34662
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_script_combat)

// name:A; map symbol; map:34663
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_branch_action::t_script_branch_action()
{
    // Body unavailable.
}

// name:A; map symbol; map:34664
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_branch_action::~t_script_branch_action()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:34665
VA_CHT_1_COMPGEN(0x007969d0, 0x1e, VECTOR_DELETING_DTOR, t_script_branch_action)

// name:A; map symbol; map:34666
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_script_branch_action)

// name:A; map symbol; map:34667
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_branch_action& t_script_branch_action::operator=(t_script_branch_action const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:34668
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_script_action& t_abstract_script_action::operator=(t_abstract_script_action const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:34669
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_script_action const& t_script_branch_action::get_true_subaction() const
{
    // Body unavailable.
}

// name:A; map symbol; map:34670
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_script_action const& t_script_branch_action::get_false_subaction() const
{
    // Body unavailable.
}

// name:A; map symbol; map:34671
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_army_target t_script_combat::get_target() const
{
    // Body unavailable.
}

// name:A; map symbol; map:34672
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_combat_context_script)

// name:A; map symbol; map:34673
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_combat_context_script)

// name:A; map symbol; map:34674
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_context_script::~t_combat_context_script()
{
    // Body unavailable.
}

// name:A; map symbol; map:34675
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_creature_array const& t_script_combat::get_opponents() const
{
    // Body unavailable.
}

// name:A; map symbol; map:34676
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_combat_context_script>::~t_counted_ptr<t_combat_context_script>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34677
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_action>::t_counted_ptr<t_abstract_script_action>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34678
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_shared_ptr<t_creature_array>::t_shared_ptr<t_creature_array>(t_shared_ptr<t_creature_array> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:34679
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_shared_ptr<t_creature_array>::t_shared_ptr<t_creature_array>(t_creature_array* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:34680
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_combat_context_script>::t_counted_ptr<t_combat_context_script>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34681
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_combat_context_script>& t_counted_ptr<t_combat_context_script>::operator=(
    t_combat_context_script* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:34682
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_context_script& t_counted_ptr<t_combat_context_script>::operator*() const
{
    // Body unavailable.
}

// name:A; dyninit; see ledger; map:34683
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "t_script_action_base<6,t_script_combat>::k_factory")

// name:A; dyninit; see ledger; map:34684
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "t_script_action_base<6,t_script_combat>::k_factory")

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:34685
VA_CHT_1(0x00797000, 0x14)
t_script_action_factory<6>::~t_script_action_factory<6>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34686
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_factory<6>::t_script_action_factory<6>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:34687
VA_CHT_1(0x00797020, 0xc2)
t_counted_ptr<t_abstract_script_action> t_script_action_factory<6>::create() const
{
    // Body unavailable.
}

// name:A; map symbol; map:34688
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<6>::t_script_action<6>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34689
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_action> t_script_action_base<6, t_script_combat>::clone() const
{
    // Body unavailable.
}

// name:A; map symbol; map:34690
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_type t_script_action_base<6, t_script_combat>::get_type() const
{
    // Body unavailable.
}

// name:A; map symbol; map:34691
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<6>::t_script_action<6>(t_script_action<6> const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:34692
VA_CHT_1_COMPGEN(0x00797180, 0x1e, VECTOR_DELETING_DTOR, "t_script_action<6>")

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:34693
VA_CHT_1_COMPGEN(0x007970f0, 0x90, SCALAR_DELETING_DTOR, "t_script_action<6>")

// name:A; map symbol; map:34694
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<6, t_script_combat>::t_script_action_base<6, t_script_combat>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34695
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<6, t_script_combat>::t_script_action_base<6, t_script_combat>(
    t_script_action_base<6, t_script_combat> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:34696
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<6>::~t_script_action<6>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34697
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<6, t_script_combat>::~t_script_action_base<6, t_script_combat>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34698
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_action_base<6, t_script_combat>")

// name:A; map symbol; map:34699
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_action_base<6, t_script_combat>")

// === .rdata (6 symbols) ===

// confidence:A; rtti-name; map:45405
DATA_CHT_1_COMPGEN(0x008eabf0, "const t_script_combat::`vftable'")

// confidence:A; rtti-name; map:45406
DATA_CHT_1_COMPGEN(0x008eac24, "const t_script_branch_action::`vftable'")

// confidence:A; rtti-name; map:45407
DATA_CHT_1_COMPGEN(0x008eac58, "const t_combat_context_script::`vftable'")

// confidence:A; rtti-name; map:45408
DATA_CHT_1_COMPGEN(0x008eac78, "const t_script_action_factory<6>::`vftable'")

// confidence:A; rtti-name; map:45409
DATA_CHT_1_COMPGEN(0x008eac80, "const t_script_action<6>::`vftable'")

// name:A; map symbol; map:45410
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_action_base<6, t_script_combat>::`vftable'")

// === .rdata$r (24 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_script_branch_action@@;bcd=5169b4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54998
DATA_CHT_1_COMPGEN(0x009169b4, "t_script_branch_action::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_script_combat@@;bcd=5169cc;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54999
DATA_CHT_1_COMPGEN(0x009169cc, "t_script_combat::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_script_combat@@;vft=4eabf0;col=516a08;td=5b4f58;chd=5169f8;offset=0;cdOffset=0;validated-hierarchy; map:55000
DATA_CHT_1_COMPGEN(0x009169e4, "t_script_combat::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_script_combat@@;vft=4eabf0;col=516a08;td=5b4f58;chd=5169f8;offset=0;cdOffset=0;validated-hierarchy; map:55001
DATA_CHT_1_COMPGEN(0x009169f8, "t_script_combat::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_script_combat@@;vft=4eabf0;col=516a08;td=5b4f58;chd=5169f8;offset=0;cdOffset=0;validated-hierarchy; map:55002
DATA_CHT_1_COMPGEN(0x00916a08, "const t_script_combat::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_script_branch_action@@;vft=4eac24;col=5169a0;td=5b4f30;chd=516990;offset=0;cdOffset=0;validated-hierarchy; map:55003
DATA_CHT_1_COMPGEN(0x00916980, "t_script_branch_action::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_script_branch_action@@;vft=4eac24;col=5169a0;td=5b4f30;chd=516990;offset=0;cdOffset=0;validated-hierarchy; map:55004
DATA_CHT_1_COMPGEN(0x00916990, "t_script_branch_action::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_script_branch_action@@;vft=4eac24;col=5169a0;td=5b4f30;chd=516990;offset=0;cdOffset=0;validated-hierarchy; map:55005
DATA_CHT_1_COMPGEN(0x009169a0, "const t_script_branch_action::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_combat_context_script@@;bcd=516a1c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:55006
DATA_CHT_1_COMPGEN(0x00916a1c, "t_combat_context_script::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_combat_context_script@@;vft=4eac58;col=516a54;td=5b4f78;chd=516a44;offset=0;cdOffset=0;validated-hierarchy; map:55007
DATA_CHT_1_COMPGEN(0x00916a34, "t_combat_context_script::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_combat_context_script@@;vft=4eac58;col=516a54;td=5b4f78;chd=516a44;offset=0;cdOffset=0;validated-hierarchy; map:55008
DATA_CHT_1_COMPGEN(0x00916a44, "t_combat_context_script::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_combat_context_script@@;vft=4eac58;col=516a54;td=5b4f78;chd=516a44;offset=0;cdOffset=0;validated-hierarchy; map:55009
DATA_CHT_1_COMPGEN(0x00916a54, "const t_combat_context_script::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action_factory@$05@@;bcd=516a68;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:55010
DATA_CHT_1_COMPGEN(0x00916a68, "t_script_action_factory<6>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_action_factory@$05@@;vft=4eac78;col=516aa0;td=5b4fa0;chd=516a90;offset=0;cdOffset=0;validated-hierarchy; map:55011
DATA_CHT_1_COMPGEN(0x00916a80, "t_script_action_factory<6>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_action_factory@$05@@;vft=4eac78;col=516aa0;td=5b4fa0;chd=516a90;offset=0;cdOffset=0;validated-hierarchy; map:55012
DATA_CHT_1_COMPGEN(0x00916a90, "t_script_action_factory<6>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_action_factory@$05@@;vft=4eac78;col=516aa0;td=5b4fa0;chd=516a90;offset=0;cdOffset=0;validated-hierarchy; map:55013
DATA_CHT_1_COMPGEN(0x00916aa0, "const t_script_action_factory<6>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action_base@$05Vt_script_combat@@@@;bcd=516ab4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:55014
DATA_CHT_1_COMPGEN(0x00916ab4, "t_script_action_base<6, t_script_combat>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action@$05@@;bcd=516acc;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:55015
DATA_CHT_1_COMPGEN(0x00916acc, "t_script_action<6>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_action@$05@@;vft=4eac80;col=516b10;td=5b5008;chd=516b00;offset=0;cdOffset=0;validated-hierarchy; map:55016
DATA_CHT_1_COMPGEN(0x00916ae4, "t_script_action<6>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_action@$05@@;vft=4eac80;col=516b10;td=5b5008;chd=516b00;offset=0;cdOffset=0;validated-hierarchy; map:55017
DATA_CHT_1_COMPGEN(0x00916b00, "t_script_action<6>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_action@$05@@;vft=4eac80;col=516b10;td=5b5008;chd=516b00;offset=0;cdOffset=0;validated-hierarchy; map:55018
DATA_CHT_1_COMPGEN(0x00916b10, "const t_script_action<6>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:55019
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_action_base<6, t_script_combat>::`RTTI Base Class Array'")

// name:A; map symbol; map:55020
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_action_base<6, t_script_combat>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:55021
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_action_base<6, t_script_combat>::`RTTI Complete Object Locator'")

// === .data (9 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_script_branch_action@@;td=5b4f30;validated-header; map:59219
DATA_CHT_1_COMPGEN(0x009b4f30, "t_script_branch_action `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_script_combat@@;td=5b4f58;validated-header; map:59220
DATA_CHT_1_COMPGEN(0x009b4f58, "t_script_combat `RTTI Type Descriptor'")

// name:A; map symbol; map:59221
DATA_CHT_1_COMPGEN(UNACCOUNTED, "m_true_subaction_ptr.get() != 0")

// name:A; map symbol; map:59222
DATA_CHT_1_COMPGEN(UNACCOUNTED, "C:\\\\work\\\\game\\\\script_branch_actio...")

// name:A; map symbol; map:59223
DATA_CHT_1_COMPGEN(UNACCOUNTED, "m_false_subaction_ptr.get() != 0...")

// confidence:A; rtti-type-name; type-name=.?AVt_combat_context_script@@;td=5b4f78;validated-header; map:59224
DATA_CHT_1_COMPGEN(0x009b4f78, "t_combat_context_script `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action_factory@$05@@;td=5b4fa0;validated-header; map:59225
DATA_CHT_1_COMPGEN(0x009b4fa0, "t_script_action_factory<6> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action_base@$05Vt_script_combat@@@@;td=5b4fcc;validated-header; map:59226
DATA_CHT_1_COMPGEN(0x009b4fcc, "t_script_action_base<6, t_script_combat> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action@$05@@;td=5b5008;validated-header; map:59227
DATA_CHT_1_COMPGEN(0x009b5008, "t_script_action<6> `RTTI Type Descriptor'")
