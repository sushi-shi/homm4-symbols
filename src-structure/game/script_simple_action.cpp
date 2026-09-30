// script_simple_action.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 58/166 (A:50 B:0 C:0); unaccounted 108; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (88 symbols) ===

// name:A; map symbol; map:36473
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_script_simple_action::read_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:36474
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_script_simple_action::read(std::basic_streambuf<char, std::char_traits<char>>& arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:36475
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_script_simple_action::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:36476
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_script_remove::execute(t_script_context_hero const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:36477
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_script_remove::execute(t_script_context_town const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:36478
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_script_remove::execute(t_script_context_object const& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:36479
VA_CHT_1(0x007a5e60, 0x8)
void t_script_remove::execute(t_script_context_army const& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:36480
VA_CHT_1(0x007a5e70, 0x13)
void t_script_remove::execute(t_script_context_global const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:36481
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_script_remove_this_adv_object::execute(t_script_context_hero const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:36482
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_script_remove_this_adv_object::execute(t_script_context_town const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:36483
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_script_remove_this_adv_object::execute(t_script_context_object const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:36484
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_script_remove_this_adv_object::execute(t_script_context_army const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:36485
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_script_remove_this_adv_object::execute(t_script_context_global const& arg_0) const
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:62950; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007a5e90, 0x97, STATIC_INIT_DISPATCH, script_simple_action)

// confidence:D; align-order; atexit,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:62952; name:C (dyninit; see ledger)
VA_CHT_1(0x007a5f50, 0x1f)
// t_script_action_base<37,t_script_no_op>::k_factory$atexit
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; atexit,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:62953; name:C (dyninit; see ledger)
VA_CHT_1(0x007a5f70, 0x1f)
// t_script_action_base<40,t_script_remove>::k_factory$atexit
// Function body not reconstructed; signature retained as a comment.

// name:C; dyninit; see ledger; map:62954
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "t_script_action_base<41,t_script_remove_this_adv_object>::k_factory")

// name:A; dyninit; see ledger; map:36486
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "t_script_action_base<37,t_script_no_op>::k_factory")

// name:A; dyninit; see ledger; map:36487
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "t_script_action_base<40,t_script_remove>::k_factory")

// name:A; dyninit; see ledger; map:36488
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "t_script_action_base<41,t_script_remove_this_adv_object>::k_factory")

// name:A; dyninit; see ledger; map:36489
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "t_script_action_base<41,t_script_remove_this_adv_object>::k_factory")

// name:A; dyninit; see ledger; map:36490
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "t_script_action_base<40,t_script_remove>::k_factory")

// name:A; dyninit; see ledger; map:36491
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "t_script_action_base<37,t_script_no_op>::k_factory")

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:36492
VA_CHT_1(0x007a5f90, 0x14)
t_script_action_factory<37>::~t_script_action_factory<37>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:36493
VA_CHT_1(0x007a5ff0, 0x14)
t_script_action_factory<40>::~t_script_action_factory<40>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:36494
VA_CHT_1(0x007a6050, 0x14)
t_script_action_factory<41>::~t_script_action_factory<41>()
{
    // Body unavailable.
}

// name:A; map symbol; map:36495
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_factory<37>::t_script_action_factory<37>()
{
    // Body unavailable.
}

// name:A; map symbol; map:36496
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_action> t_script_action_factory<37>::create() const
{
    // Body unavailable.
}

// name:A; map symbol; map:36497
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<37>::t_script_action<37>()
{
    // Body unavailable.
}

// name:A; map symbol; map:36498
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_action> t_script_action_base<37, t_script_no_op>::clone() const
{
    // Body unavailable.
}

// name:A; map symbol; map:36499
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_type t_script_action_base<37, t_script_no_op>::get_type() const
{
    // Body unavailable.
}

// name:A; map symbol; map:36500
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<37>::t_script_action<37>(t_script_action<37> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:36501
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_action<37>")

// name:A; map symbol; map:36502
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_action<37>")

// name:A; map symbol; map:36503
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<37, t_script_no_op>::t_script_action_base<37, t_script_no_op>()
{
    // Body unavailable.
}

// name:A; map symbol; map:36504
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<37, t_script_no_op>::t_script_action_base<37, t_script_no_op>(
    t_script_action_base<37, t_script_no_op> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:36505
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<37>::~t_script_action<37>()
{
    // Body unavailable.
}

// name:A; map symbol; map:36506
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<37, t_script_no_op>::~t_script_action_base<37, t_script_no_op>()
{
    // Body unavailable.
}

// name:A; map symbol; map:36507
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_action_base<37, t_script_no_op>")

// name:A; map symbol; map:36508
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_action_base<37, t_script_no_op>")

// name:A; map symbol; map:36509
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_no_op::t_script_no_op()
{
    // Body unavailable.
}

// name:A; map symbol; map:36510
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_no_op::~t_script_no_op()
{
    // Body unavailable.
}

// name:A; map symbol; map:36511
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_no_op::t_script_no_op(t_script_no_op const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:36512
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_script_no_op)

// name:A; map symbol; map:36513
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_script_no_op)

// name:A; map symbol; map:36514
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_simple_action::t_script_simple_action()
{
    // Body unavailable.
}

// name:A; map symbol; map:36515
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_simple_action::~t_script_simple_action()
{
    // Body unavailable.
}

// name:A; map symbol; map:36516
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_simple_action::t_script_simple_action(t_script_simple_action const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:36517
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_script_simple_action)

// name:A; map symbol; map:36518
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_script_simple_action)

// name:A; map symbol; map:36519
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_factory<40>::t_script_action_factory<40>()
{
    // Body unavailable.
}

// name:A; map symbol; map:36520
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_action> t_script_action_factory<40>::create() const
{
    // Body unavailable.
}

// name:A; map symbol; map:36521
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<40>::t_script_action<40>()
{
    // Body unavailable.
}

// name:A; map symbol; map:36522
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_action> t_script_action_base<40, t_script_remove>::clone() const
{
    // Body unavailable.
}

// name:A; map symbol; map:36523
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_type t_script_action_base<40, t_script_remove>::get_type() const
{
    // Body unavailable.
}

// name:A; map symbol; map:36524
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<40>::t_script_action<40>(t_script_action<40> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:36525
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_action<40>")

// name:A; map symbol; map:36526
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_action<40>")

// name:A; map symbol; map:36527
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<40, t_script_remove>::t_script_action_base<40, t_script_remove>()
{
    // Body unavailable.
}

// name:A; map symbol; map:36528
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<40, t_script_remove>::t_script_action_base<40, t_script_remove>(
    t_script_action_base<40, t_script_remove> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:36529
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<40>::~t_script_action<40>()
{
    // Body unavailable.
}

// name:A; map symbol; map:36530
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<40, t_script_remove>::~t_script_action_base<40, t_script_remove>()
{
    // Body unavailable.
}

// name:A; map symbol; map:36531
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_action_base<40, t_script_remove>")

// name:A; map symbol; map:36532
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_action_base<40, t_script_remove>")

// name:A; map symbol; map:36533
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_remove::t_script_remove()
{
    // Body unavailable.
}

// name:A; map symbol; map:36534
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_remove::~t_script_remove()
{
    // Body unavailable.
}

// name:A; map symbol; map:36535
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_remove::t_script_remove(t_script_remove const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:36536
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_script_remove)

// name:A; map symbol; map:36537
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_script_remove)

// name:A; map symbol; map:36538
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_factory<41>::t_script_action_factory<41>()
{
    // Body unavailable.
}

// name:A; map symbol; map:36539
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_action> t_script_action_factory<41>::create() const
{
    // Body unavailable.
}

// name:A; map symbol; map:36540
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<41>::t_script_action<41>()
{
    // Body unavailable.
}

// name:A; map symbol; map:36541
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_action> t_script_action_base<41, t_script_remove_this_adv_object>::clone(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:36542
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_type t_script_action_base<41, t_script_remove_this_adv_object>::get_type() const
{
    // Body unavailable.
}

// name:A; map symbol; map:36543
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<41>::t_script_action<41>(t_script_action<41> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:36544
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_action<41>")

// name:A; map symbol; map:36545
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_action<41>")

// name:A; map symbol; map:36546
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<41, t_script_remove_this_adv_object>::t_script_action_base<41, t_script_remove_this_adv_object>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:36547
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<41, t_script_remove_this_adv_object>::t_script_action_base<41, t_script_remove_this_adv_object>(
    t_script_action_base<41, t_script_remove_this_adv_object> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:36548
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<41>::~t_script_action<41>()
{
    // Body unavailable.
}

// name:A; map symbol; map:36549
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<41, t_script_remove_this_adv_object>::~t_script_action_base<41, t_script_remove_this_adv_object>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:36550
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_action_base<41, t_script_remove_this_adv_object>")

// name:A; map symbol; map:36551
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_action_base<41, t_script_remove_this_adv_object>")

// name:A; map symbol; map:36552
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_remove_this_adv_object::t_script_remove_this_adv_object()
{
    // Body unavailable.
}

// name:A; map symbol; map:36553
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_remove_this_adv_object::~t_script_remove_this_adv_object()
{
    // Body unavailable.
}

// name:A; map symbol; map:36554
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_remove_this_adv_object::t_script_remove_this_adv_object(t_script_remove_this_adv_object const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:36555
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_script_remove_this_adv_object)

// name:A; map symbol; map:36556
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_script_remove_this_adv_object)

// === .rdata (13 symbols) ===

// confidence:A; rtti-name; map:45640
DATA_CHT_1_COMPGEN(0x008ebd24, "const t_script_action_factory<37>::`vftable'")

// confidence:A; rtti-name; map:45641
DATA_CHT_1_COMPGEN(0x008ebd2c, "const t_script_action<37>::`vftable'")

// name:A; map symbol; map:45642
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_action_base<37, t_script_no_op>::`vftable'")

// name:A; map symbol; map:45643
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_no_op::`vftable'")

// name:A; map symbol; map:45644
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_simple_action::`vftable'")

// confidence:A; rtti-name; map:45645
DATA_CHT_1_COMPGEN(0x008ebd60, "const t_script_action_factory<40>::`vftable'")

// confidence:A; rtti-name; map:45646
DATA_CHT_1_COMPGEN(0x008ebd68, "const t_script_action<40>::`vftable'")

// name:A; map symbol; map:45647
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_action_base<40, t_script_remove>::`vftable'")

// name:A; map symbol; map:45648
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_remove::`vftable'")

// confidence:A; rtti-name; map:45649
DATA_CHT_1_COMPGEN(0x008ebd9c, "const t_script_action_factory<41>::`vftable'")

// confidence:A; rtti-name; map:45650
DATA_CHT_1_COMPGEN(0x008ebda4, "const t_script_action<41>::`vftable'")

// name:A; map symbol; map:45651
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_action_base<41, t_script_remove_this_adv_object>::`vftable'")

// name:A; map symbol; map:45652
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_remove_this_adv_object::`vftable'")

// === .rdata$r (52 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action_factory@$0CF@@@;bcd=519c1c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:55937
DATA_CHT_1_COMPGEN(0x00919c1c, "t_script_action_factory<37>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_action_factory@$0CF@@@;vft=4ebd24;col=519c54;td=5b8574;chd=519c44;offset=0;cdOffset=0;validated-hierarchy; map:55938
DATA_CHT_1_COMPGEN(0x00919c34, "t_script_action_factory<37>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_action_factory@$0CF@@@;vft=4ebd24;col=519c54;td=5b8574;chd=519c44;offset=0;cdOffset=0;validated-hierarchy; map:55939
DATA_CHT_1_COMPGEN(0x00919c44, "t_script_action_factory<37>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_action_factory@$0CF@@@;vft=4ebd24;col=519c54;td=5b8574;chd=519c44;offset=0;cdOffset=0;validated-hierarchy; map:55940
DATA_CHT_1_COMPGEN(0x00919c54, "const t_script_action_factory<37>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_script_simple_action@@;bcd=519c68;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:55941
DATA_CHT_1_COMPGEN(0x00919c68, "t_script_simple_action::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_script_no_op@@;bcd=519c80;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:55942
DATA_CHT_1_COMPGEN(0x00919c80, "t_script_no_op::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action_base@$0CF@Vt_script_no_op@@@@;bcd=519c98;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:55943
DATA_CHT_1_COMPGEN(0x00919c98, "t_script_action_base<37, t_script_no_op>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action@$0CF@@@;bcd=519cb0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:55944
DATA_CHT_1_COMPGEN(0x00919cb0, "t_script_action<37>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_action@$0CF@@@;vft=4ebd2c;col=519cf4;td=5b8628;chd=519ce4;offset=0;cdOffset=0;validated-hierarchy; map:55945
DATA_CHT_1_COMPGEN(0x00919cc8, "t_script_action<37>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_action@$0CF@@@;vft=4ebd2c;col=519cf4;td=5b8628;chd=519ce4;offset=0;cdOffset=0;validated-hierarchy; map:55946
DATA_CHT_1_COMPGEN(0x00919ce4, "t_script_action<37>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_action@$0CF@@@;vft=4ebd2c;col=519cf4;td=5b8628;chd=519ce4;offset=0;cdOffset=0;validated-hierarchy; map:55947
DATA_CHT_1_COMPGEN(0x00919cf4, "const t_script_action<37>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:55948
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_action_base<37, t_script_no_op>::`RTTI Base Class Array'")

// name:A; map symbol; map:55949
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_action_base<37, t_script_no_op>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:55950
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_action_base<37, t_script_no_op>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:55951
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_no_op::`RTTI Base Class Array'")

// name:A; map symbol; map:55952
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_no_op::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:55953
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_no_op::`RTTI Complete Object Locator'")

// name:A; map symbol; map:55954
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_simple_action::`RTTI Base Class Array'")

// name:A; map symbol; map:55955
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_simple_action::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:55956
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_simple_action::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action_factory@$0CI@@@;bcd=519d08;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:55957
DATA_CHT_1_COMPGEN(0x00919d08, "t_script_action_factory<40>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_action_factory@$0CI@@@;vft=4ebd60;col=519d40;td=5b8650;chd=519d30;offset=0;cdOffset=0;validated-hierarchy; map:55958
DATA_CHT_1_COMPGEN(0x00919d20, "t_script_action_factory<40>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_action_factory@$0CI@@@;vft=4ebd60;col=519d40;td=5b8650;chd=519d30;offset=0;cdOffset=0;validated-hierarchy; map:55959
DATA_CHT_1_COMPGEN(0x00919d30, "t_script_action_factory<40>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_action_factory@$0CI@@@;vft=4ebd60;col=519d40;td=5b8650;chd=519d30;offset=0;cdOffset=0;validated-hierarchy; map:55960
DATA_CHT_1_COMPGEN(0x00919d40, "const t_script_action_factory<40>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_script_remove@@;bcd=519d54;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:55961
DATA_CHT_1_COMPGEN(0x00919d54, "t_script_remove::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action_base@$0CI@Vt_script_remove@@@@;bcd=519d6c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:55962
DATA_CHT_1_COMPGEN(0x00919d6c, "t_script_action_base<40, t_script_remove>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action@$0CI@@@;bcd=519d84;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:55963
DATA_CHT_1_COMPGEN(0x00919d84, "t_script_action<40>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_action@$0CI@@@;vft=4ebd68;col=519dc8;td=5b86e0;chd=519db8;offset=0;cdOffset=0;validated-hierarchy; map:55964
DATA_CHT_1_COMPGEN(0x00919d9c, "t_script_action<40>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_action@$0CI@@@;vft=4ebd68;col=519dc8;td=5b86e0;chd=519db8;offset=0;cdOffset=0;validated-hierarchy; map:55965
DATA_CHT_1_COMPGEN(0x00919db8, "t_script_action<40>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_action@$0CI@@@;vft=4ebd68;col=519dc8;td=5b86e0;chd=519db8;offset=0;cdOffset=0;validated-hierarchy; map:55966
DATA_CHT_1_COMPGEN(0x00919dc8, "const t_script_action<40>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:55967
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_action_base<40, t_script_remove>::`RTTI Base Class Array'")

// name:A; map symbol; map:55968
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_action_base<40, t_script_remove>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:55969
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_action_base<40, t_script_remove>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:55970
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_remove::`RTTI Base Class Array'")

// name:A; map symbol; map:55971
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_remove::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:55972
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_remove::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action_factory@$0CJ@@@;bcd=519ddc;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:55973
DATA_CHT_1_COMPGEN(0x00919ddc, "t_script_action_factory<41>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_action_factory@$0CJ@@@;vft=4ebd9c;col=519e14;td=5b8708;chd=519e04;offset=0;cdOffset=0;validated-hierarchy; map:55974
DATA_CHT_1_COMPGEN(0x00919df4, "t_script_action_factory<41>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_action_factory@$0CJ@@@;vft=4ebd9c;col=519e14;td=5b8708;chd=519e04;offset=0;cdOffset=0;validated-hierarchy; map:55975
DATA_CHT_1_COMPGEN(0x00919e04, "t_script_action_factory<41>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_action_factory@$0CJ@@@;vft=4ebd9c;col=519e14;td=5b8708;chd=519e04;offset=0;cdOffset=0;validated-hierarchy; map:55976
DATA_CHT_1_COMPGEN(0x00919e14, "const t_script_action_factory<41>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_script_remove_this_adv_object@@;bcd=519e28;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:55977
DATA_CHT_1_COMPGEN(0x00919e28, "t_script_remove_this_adv_object::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action_base@$0CJ@Vt_script_remove_this_adv_object@@@@;bcd=519e40;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:55978
DATA_CHT_1_COMPGEN(0x00919e40, "t_script_action_base<41, t_script_remove_this_adv_object>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action@$0CJ@@@;bcd=519e58;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:55979
DATA_CHT_1_COMPGEN(0x00919e58, "t_script_action<41>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_action@$0CJ@@@;vft=4ebda4;col=519e9c;td=5b87b8;chd=519e8c;offset=0;cdOffset=0;validated-hierarchy; map:55980
DATA_CHT_1_COMPGEN(0x00919e70, "t_script_action<41>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_action@$0CJ@@@;vft=4ebda4;col=519e9c;td=5b87b8;chd=519e8c;offset=0;cdOffset=0;validated-hierarchy; map:55981
DATA_CHT_1_COMPGEN(0x00919e8c, "t_script_action<41>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_action@$0CJ@@@;vft=4ebda4;col=519e9c;td=5b87b8;chd=519e8c;offset=0;cdOffset=0;validated-hierarchy; map:55982
DATA_CHT_1_COMPGEN(0x00919e9c, "const t_script_action<41>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:55983
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_action_base<41, t_script_remove_this_adv_object>::`RTTI Base Class Array'")

// name:A; map symbol; map:55984
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_action_base<41, t_script_remove_this_adv_object>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:55985
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_action_base<41, t_script_remove_this_adv_object>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:55986
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_remove_this_adv_object::`RTTI Base Class Array'")

// name:A; map symbol; map:55987
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_remove_this_adv_object::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:55988
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_remove_this_adv_object::`RTTI Complete Object Locator'")

// === .data (13 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action_factory@$0CF@@@;td=5b8574;validated-header; map:59465
DATA_CHT_1_COMPGEN(0x009b8574, "t_script_action_factory<37> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_script_simple_action@@;td=5b85a4;validated-header; map:59466
DATA_CHT_1_COMPGEN(0x009b85a4, "t_script_simple_action `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_script_no_op@@;td=5b85cc;validated-header; map:59467
DATA_CHT_1_COMPGEN(0x009b85cc, "t_script_no_op `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action_base@$0CF@Vt_script_no_op@@@@;td=5b85ec;validated-header; map:59468
DATA_CHT_1_COMPGEN(0x009b85ec, "t_script_action_base<37, t_script_no_op> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action@$0CF@@@;td=5b8628;validated-header; map:59469
DATA_CHT_1_COMPGEN(0x009b8628, "t_script_action<37> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action_factory@$0CI@@@;td=5b8650;validated-header; map:59470
DATA_CHT_1_COMPGEN(0x009b8650, "t_script_action_factory<40> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_script_remove@@;td=5b8680;validated-header; map:59471
DATA_CHT_1_COMPGEN(0x009b8680, "t_script_remove `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action_base@$0CI@Vt_script_remove@@@@;td=5b86a0;validated-header; map:59472
DATA_CHT_1_COMPGEN(0x009b86a0, "t_script_action_base<40, t_script_remove> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action@$0CI@@@;td=5b86e0;validated-header; map:59473
DATA_CHT_1_COMPGEN(0x009b86e0, "t_script_action<40> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action_factory@$0CJ@@@;td=5b8708;validated-header; map:59474
DATA_CHT_1_COMPGEN(0x009b8708, "t_script_action_factory<41> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_script_remove_this_adv_object@@;td=5b8738;validated-header; map:59475
DATA_CHT_1_COMPGEN(0x009b8738, "t_script_remove_this_adv_object `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action_base@$0CJ@Vt_script_remove_this_adv_object@@@@;td=5b8768;validated-header; map:59476
DATA_CHT_1_COMPGEN(0x009b8768, "t_script_action_base<41, t_script_remove_this_adv_object> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action@$0CJ@@@;td=5b87b8;validated-header; map:59477
DATA_CHT_1_COMPGEN(0x009b87b8, "t_script_action<41> `RTTI Type Descriptor'")
