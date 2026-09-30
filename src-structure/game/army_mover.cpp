// army_mover.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 63/106 (A:40 B:10 C:13); unaccounted 43; skipped std 27.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (84 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:69481; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0052d0e0, 0x15, STATIC_INIT_DISPATCH, "army_mover#1")

// name:C; dyninit; see ledger; map:69482
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "army_mover#1")

// confidence:A; align-order; retn,stable,vptr; map:14610
VA_CHT_1(0x0052d100, 0x112)
t_army_mover::t_army_mover(
    t_adventure_map_window* arg_0,
    t_army* arg_1,
    bool arg_2,
    t_adventure_path_finder const* arg_3
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:14611
VA_CHT_1(0x0052d240, 0xc4)
t_army_mover::t_army_mover()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:14612
VA_CHT_1(0x0052d310, 0x9f8)
void t_army_mover::initialize(
    t_adventure_map_window* arg_0,
    t_army* arg_1,
    bool arg_2,
    t_adventure_path_finder const* arg_3,
    bool arg_4
)
{
    // Body unavailable.
}

// name:A; map symbol; map:69483
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
static int compute_overall_distance(t_adventure_path const& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:14613
VA_CHT_1(0x0052dd10, 0xf4)
t_army_mover::~t_army_mover()
{
    // Body unavailable.
}

// name:A; map symbol; map:14614
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_army* t_army_mover::get_army() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:14615
VA_CHT_1(0x0052de10, 0xda)
void t_army_mover::start_new_square()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:14616
VA_CHT_1(0x0052def0, 0x45e)
void t_army_mover::prepare_move(int arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; stable,vslot; map:14617
VA_CHT_1(0x0052e350, 0x2d)
void t_army_mover::expend_movement(int arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:14618
VA_CHT_1(0x0052e380, 0x9a)
void t_army_mover::activate_trigger()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:14619
VA_CHT_1(0x0052e420, 0x66)
void t_army_mover::on_idle()
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:14620
VA_CHT_1(0x0052e490, 0x380)
void t_army_mover::finish_path()
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:69484
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// t_army_mover::finish_path$sdtor2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:69485
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// t_army_mover::finish_path$sdtor1
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; retn,stable; map:14621
VA_CHT_1(0x0052e830, 0x499)
void t_army_mover::do_hidden_move()
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:69486
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// t_army_mover::do_hidden_move$sdtor2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:69487
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// t_army_mover::do_hidden_move$sdtor1
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; retn,stable; map:14622
VA_CHT_1(0x0052ecf0, 0x4cc)
void t_army_mover::do_movement()
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:69488
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// t_army_mover::do_movement$sdtor2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:69489
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// t_army_mover::do_movement$sdtor1
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; retn,stable; map:14623
VA_CHT_1(0x0052f1e0, 0x534)
void t_army_mover::enter_new_square()
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:69490
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// t_army_mover::enter_new_square$sdtor
// Function body not reconstructed; signature retained as a comment.

// confidence:B; align-order; retn,stable; map:14624
VA_CHT_1(0x0052f730, 0x213)
void t_army_mover::mark_eluded_army(t_army const& arg_0)
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:69491
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// t_army_mover::mark_eluded_army$sdtor
// Function body not reconstructed; signature retained as a comment.

// confidence:A; align-order; retn,stable,vslot; map:14625
VA_CHT_1(0x0052f960, 0x200)
void t_army_mover::mark_eluded_armies()
{
    // Body unavailable.
}

// confidence:A; dyninit-init; owner-conf-C; map:69492; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0052fb60, 0x11, STATIC_INIT_DISPATCH, "army_mover#2")

// confidence:B; dyninit-ctor; owner-conf-C; map:69493; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0052fb80, 0xd1, STATIC_CTOR, "army_mover#2")

// name:C; dyninit; see ledger; map:69494
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "army_mover#2")

// confidence:B; dyninit-dtor; owner-conf-C; map:69495; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0052fc60, 0xa, STATIC_DTOR, "army_mover#2")

// confidence:A; dyninit-init; owner-conf-C; map:69496; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0052fc70, 0x11, STATIC_INIT_DISPATCH, "army_mover#3")

// confidence:B; dyninit-ctor; owner-conf-C; map:69497; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0052fc90, 0xd1, STATIC_CTOR, "army_mover#3")

// name:C; dyninit; see ledger; map:69498
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "army_mover#3")

// confidence:B; dyninit-dtor; owner-conf-C; map:69499; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0052fd70, 0xa, STATIC_DTOR, "army_mover#3")

// confidence:C; align-order; retn,stable; map:14626
VA_CHT_1(0x0052fd80, 0x280)
void t_army_mover::report_stealth()
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:14627
VA_CHT_1(0x00530000, 0x23c)
void t_army_mover::end_move()
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:69500
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// t_army_mover::end_move$sdtor
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; retn,stable; map:14628
VA_CHT_1(0x00530250, 0x11f)
void t_army_mover::cancel_move()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:14629
VA_CHT_1(0x00530370, 0x121)
void t_army_mover::on_end()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:14630
VA_CHT_1(0x005304a0, 0xe3)
void t_army_mover::trigger_event()
{
    // Body unavailable.
}

// confidence:C; align-order; retn; map:14631
VA_CHT_1(0x00530590, 0x4)
bool t_army_mover::is_done() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn; map:14632
VA_CHT_1(0x005305a0, 0x4)
bool t_army_mover::is_multiple_turn_move() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn; map:14633
VA_CHT_1(0x005305b0, 0x4)
t_adv_map_point const& t_army_mover::get_actual_destination() const
{
    // Body unavailable.
}

// name:A; map symbol; map:14634
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_army_mover::on_starting_new_square()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:14635
VA_CHT_1(0x005305c0, 0x2b)
t_enemy_army_mover::t_enemy_army_mover(t_adventure_map_window* arg_0, t_army* arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:14636
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_enemy_army_mover::~t_enemy_army_mover()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vslot; map:14637
VA_CHT_1(0x005305f0, 0x1e)
void t_enemy_army_mover::expend_movement(int arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:14638
VA_CHT_1(0x00530720, 0x8d)
void t_enemy_army_mover::on_end()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:14639
VA_CHT_1(0x005307b0, 0xa1)
t_enemy_army_attack::t_enemy_army_attack(t_adventure_map_window* arg_0, t_army* arg_1, t_army* arg_2)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:14640
VA_CHT_1(0x00530880, 0x132)
t_enemy_army_attack::~t_enemy_army_attack()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:14641
VA_CHT_1(0x005309c0, 0xdb)
void t_enemy_army_attack::activate_trigger()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:14642
VA_CHT_1(0x00530aa0, 0xfc)
void t_enemy_army_attack::on_end()
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:69501; name:B (dyninit; see ledger)
VA_CHT_1(0x00530c20, 0x20)
// army_mover$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:A; dyninit-tinit; owner-conf-B; map:69503; name:B (dyninit; see ledger)
VA_CHT_1(0x00530c40, 0x5c)
// army_mover$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:69504
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// army_mover$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:69505
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// army_mover$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:69506
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// army_mover$tatexit4
// Function body not reconstructed; signature retained as a comment.

// confidence:A; align-band; retn,stable,vslot; map:14643
VA_CHT_1_COMPGEN(0x0052d220, 0x1e, VECTOR_DELETING_DTOR, t_army_mover)

// name:A; map symbol; map:14644
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_army_mover)

// name:A; map symbol; map:14645
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_idle_processor_no_delay::~t_idle_processor_no_delay()
{
    // Body unavailable.
}

// name:A; map symbol; map:14646
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_material_array const& t_adventure_ai::get_boat_cost() const
{
    // Body unavailable.
}

// name:A; map symbol; map:14647
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_adventure_tile::ai_get_shipyard_id() const
{
    // Body unavailable.
}

// name:A; map symbol; map:14648
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_path::t_adventure_path(t_adventure_path const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:14649
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_point operator*(t_screen_point const& arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:14650
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_point& t_screen_point::operator*=(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:14651
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_actor_action_id t_actor::get_action() const
{
    // Body unavailable.
}

// name:A; map symbol; map:14652
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_actor::get_frame_count() const
{
    // Body unavailable.
}

// name:A; map symbol; map:14653
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_actor::get_frame_delay() const
{
    // Body unavailable.
}

// name:A; map symbol; map:14654
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
unsigned long t_idle_processor::get_delay() const
{
    // Body unavailable.
}

// name:A; map symbol; map:14655
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
unsigned long t_idle_processor::get_next_time() const
{
    // Body unavailable.
}

// name:A; map symbol; map:14656
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
long elapsed_time(unsigned long arg_0, unsigned long arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:14657
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_actor::get_frame() const
{
    // Body unavailable.
}

// name:A; map symbol; map:14658
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_managed_sound::set_position(t_level_map_point_2d const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:14659
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_enemy_army_mover)

// name:A; map symbol; map:14660
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_enemy_army_mover)

// confidence:A; align-band; retn,stable,vslot; map:14661
VA_CHT_1_COMPGEN(0x00530860, 0x1e, SCALAR_DELETING_DTOR, t_enemy_army_attack)

// name:A; map symbol; map:14662
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_enemy_army_attack)

// name:A; map symbol; map:14683
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_managed_sound>::t_counted_ptr<t_managed_sound>()
{
    // Body unavailable.
}

// name:A; map symbol; map:14684
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_managed_sound>& t_counted_ptr<t_managed_sound>::operator=(t_managed_sound* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:14685
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_managed_sound* t_counted_ptr<t_managed_sound>::operator->() const
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:14692
VA_CHT_1_COMPGEN(0x00530ca0, 0x8, VECTOR_DELETING_DTOR, t_enemy_army_mover)

// confidence:C; align-order; stable; map:14693
VA_CHT_1_COMPGEN(0x00530cb0, 0x8, VECTOR_DELETING_DTOR, t_enemy_army_attack)

// confidence:C; align-order; stable; map:14694
VA_CHT_1_COMPGEN(0x00530cc0, 0x8, VECTOR_DELETING_DTOR, t_army_mover)

// === .rdata (6 symbols) ===

// confidence:A; rtti-name; map:43466
DATA_CHT_1_COMPGEN(0x008d5914, "const t_army_mover::`vftable'{for `t_counted_object'}")

// confidence:B; rtti-order; map:43467
DATA_CHT_1_COMPGEN(0x008d591c, "const t_army_mover::`vftable'{for `t_idle_processor_no_delay'}")

// confidence:A; rtti-name; map:43468
DATA_CHT_1_COMPGEN(0x008d5944, "const t_enemy_army_mover::`vftable'{for `t_counted_object'}")

// confidence:B; rtti-order; map:43469
DATA_CHT_1_COMPGEN(0x008d594c, "const t_enemy_army_mover::`vftable'{for `t_idle_processor_no_delay'}")

// confidence:A; rtti-name; map:43470
DATA_CHT_1_COMPGEN(0x008d5974, "const t_enemy_army_attack::`vftable'{for `t_counted_object'}")

// confidence:B; rtti-order; map:43471
DATA_CHT_1_COMPGEN(0x008d597c, "const t_enemy_army_attack::`vftable'{for `t_idle_processor_no_delay'}")

// === .rdata$r (14 symbols) ===

// confidence:A; rtti-col-pointer; type-name=.?AVt_army_mover@@;vft=4d5914;col=4fda08;td=58b3ac;chd=4fd9f8;offset=28;cdOffset=0;validated-hierarchy; map:49392
DATA_CHT_1_COMPGEN(0x008fda08, "const t_army_mover::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_army_mover@@;vft=4d5914;col=4fda08;td=58b3ac;chd=4fd9f8;offset=28;cdOffset=0;validated-hierarchy; map:49393
DATA_CHT_1_COMPGEN(0x008fd9e4, "t_army_mover::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_army_mover@@;vft=4d5914;col=4fda08;td=58b3ac;chd=4fd9f8;offset=28;cdOffset=0;validated-hierarchy; map:49394
DATA_CHT_1_COMPGEN(0x008fd9f8, "t_army_mover::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:49395
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_army_mover::`RTTI Complete Object Locator'{for `t_idle_processor_no_delay'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_enemy_army_mover@@;vft=4d5944;col=4fda70;td=59094c;chd=4fda60;offset=28;cdOffset=0;validated-hierarchy; map:49396
DATA_CHT_1_COMPGEN(0x008fda70, "const t_enemy_army_mover::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_enemy_army_mover@@;bcd=4fda30;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49397
DATA_CHT_1_COMPGEN(0x008fda30, "t_enemy_army_mover::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_enemy_army_mover@@;vft=4d5944;col=4fda70;td=59094c;chd=4fda60;offset=28;cdOffset=0;validated-hierarchy; map:49398
DATA_CHT_1_COMPGEN(0x008fda48, "t_enemy_army_mover::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_enemy_army_mover@@;vft=4d5944;col=4fda70;td=59094c;chd=4fda60;offset=28;cdOffset=0;validated-hierarchy; map:49399
DATA_CHT_1_COMPGEN(0x008fda60, "t_enemy_army_mover::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:49400
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_enemy_army_mover::`RTTI Complete Object Locator'{for `t_idle_processor_no_delay'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_enemy_army_attack@@;vft=4d5974;col=4fdadc;td=590970;chd=4fdacc;offset=28;cdOffset=0;validated-hierarchy; map:49401
DATA_CHT_1_COMPGEN(0x008fdadc, "const t_enemy_army_attack::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_enemy_army_attack@@;bcd=4fda98;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49402
DATA_CHT_1_COMPGEN(0x008fda98, "t_enemy_army_attack::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_enemy_army_attack@@;vft=4d5974;col=4fdadc;td=590970;chd=4fdacc;offset=28;cdOffset=0;validated-hierarchy; map:49403
DATA_CHT_1_COMPGEN(0x008fdab0, "t_enemy_army_attack::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_enemy_army_attack@@;vft=4d5974;col=4fdadc;td=590970;chd=4fdacc;offset=28;cdOffset=0;validated-hierarchy; map:49404
DATA_CHT_1_COMPGEN(0x008fdacc, "t_enemy_army_attack::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:49405
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_enemy_army_attack::`RTTI Complete Object Locator'{for `t_idle_processor_no_delay'}")

// === .data (2 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_enemy_army_mover@@;td=59094c;validated-header; map:57857
DATA_CHT_1_COMPGEN(0x0099094c, "t_enemy_army_mover `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_enemy_army_attack@@;td=590970;validated-header; map:57858
DATA_CHT_1_COMPGEN(0x00990970, "t_enemy_army_attack `RTTI Type Descriptor'")
