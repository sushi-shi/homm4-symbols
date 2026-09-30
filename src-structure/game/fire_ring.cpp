// fire_ring.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 38/66 (A:29 B:9 C:0); unaccounted 28; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (54 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:65465; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006a76f0, 0x15, STATIC_INIT_DISPATCH, "fire_ring#1")

// name:C; dyninit; see ledger; map:65466
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "fire_ring#1")

// confidence:A; dyninit-init; owner-conf-C; map:65467; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006a7710, 0x15, STATIC_INIT_DISPATCH, "fire_ring#2")

// name:C; dyninit; see ledger; map:65468
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "fire_ring#2")

// confidence:A; dyninit-init; owner-conf-C; map:65469; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006a7730, 0x15, STATIC_INIT_DISPATCH, "fire_ring#3")

// name:C; dyninit; see ledger; map:65470
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "fire_ring#3")

// confidence:A; dyninit-init; owner-conf-C; map:65471; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006a7750, 0x15, STATIC_INIT_DISPATCH, "fire_ring#4")

// name:C; dyninit; see ledger; map:65472
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "fire_ring#4")

// confidence:A; dyninit-init; owner-conf-C; map:65473; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006a7770, 0x10, STATIC_INIT_DISPATCH, "fire_ring#5")

// name:C; dyninit; see ledger; map:65474
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "fire_ring#5")

// confidence:A; dyninit-init; owner-conf-C; map:65475; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006a7780, 0x15, STATIC_INIT_DISPATCH, "fire_ring#6")

// name:C; dyninit; see ledger; map:65476
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "fire_ring#6")

// confidence:A; dyninit-init; owner-conf-C; map:65477; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006a77a0, 0x1c, STATIC_INIT_DISPATCH, "fire_ring#7")

// name:C; dyninit; see ledger; map:65478
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "fire_ring#7")

// name:A; map symbol; map:26050
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_fire_ring::t_fire_ring(t_battlefield& arg_0, t_spell arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:26051
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_fire_ring::begin_casting()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:26052
VA_CHT_1(0x006a78c0, 0xee)
bool t_fire_ring::can_cast(t_screen_point const& arg_0) const
{
    // Body unavailable.
}

// confidence:A; align-order; stable,vslot; map:26053
VA_CHT_1(0x006a79b0, 0x159)
bool t_fire_ring::cast_on(
    t_counted_ptr<t_combat_creature> arg_0,
    t_counted_ptr<t_combat_creature> arg_1,
    int arg_2,
    bool arg_3
)
{
    // Body unavailable.
}

// confidence:A; dyninit-init; owner-conf-C; map:65479; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006a7b10, 0x11, STATIC_INIT_DISPATCH, "fire_ring#8")

// confidence:B; dyninit-ctor; owner-conf-C; map:65480; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006a7b30, 0xd1, STATIC_CTOR, "fire_ring#8")

// name:C; dyninit; see ledger; map:65481
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "fire_ring#8")

// confidence:B; dyninit-dtor; owner-conf-C; map:65482; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006a7c10, 0xa, STATIC_DTOR, "fire_ring#8")

// confidence:A; align-order; retn,stable,vslot; map:26054
VA_CHT_1(0x006a7c20, 0x7bc)
void t_fire_ring::execute(t_combat_creature& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; stable,vslot; map:26055
VA_CHT_1(0x006a83e0, 0x414)
void t_fire_ring::execute_mirror_spell(t_counted_ptr<t_combat_creature> arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:26056
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::list<t_counted_ptr<t_abstract_combat_ai_action>, std::allocator<t_counted_ptr<t_abstract_combat_ai_action>>> t_fire_ring::generate_combat_ai_action_list(
    t_combat_ai& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:26057
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
double t_fire_ring::get_cancel_weight(t_combat_creature const& arg_0) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:26058
VA_CHT_1(0x006a8800, 0x4e)
bool t_fire_ring::left_click(t_screen_point const& arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:26059
VA_CHT_1(0x006a8850, 0x1fb)
bool t_fire_ring::can_cast(
    t_screen_point const& arg_0,
    t_counted_ptr<t_combat_creature>& arg_1,
    t_map_point_2d& arg_2,
    t_combat_creature_list& arg_3,
    std::string* arg_4
) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:26060
VA_CHT_1(0x006a8a50, 0x1b5)
t_mouse_window* t_fire_ring::mouse_move(t_screen_point const& arg_0, std::string& arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:26061
VA_CHT_1(0x006a8c10, 0x1d7)
t_combat_creature_list t_fire_ring::get_targets(
    t_map_point_2d const& arg_0,
    t_combat_creature* arg_1,
    int arg_2
) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:26062
VA_CHT_1(0x006a8df0, 0x66)
t_combat_creature_list t_fire_ring::get_targets(t_combat_creature* arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:26063
VA_CHT_1(0x006a8e60, 0x53)
t_combat_creature_list t_fire_ring::get_targets(t_map_point_2d const& arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:26064
VA_CHT_1(0x006a8ec0, 0x13f)
void t_fire_ring::get_basic_target_list(
    t_battlefield& arg_0,
    t_map_point_2d const& arg_1,
    t_combat_creature const* arg_2,
    int arg_3,
    t_combat_creature_list& arg_4
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:26065
VA_CHT_1(0x006a9000, 0x44)
void t_fire_ring::get_basic_target_list(
    t_battlefield& arg_0,
    t_map_point_2d const& arg_1,
    t_combat_creature_list& arg_2
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:26066
VA_CHT_1(0x006a9050, 0x5a)
void t_fire_ring::get_basic_target_list(
    t_battlefield& arg_0,
    t_combat_creature const* arg_1,
    t_combat_creature_list& arg_2
)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:65483; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006a9150, 0x20, STATIC_INIT_DISPATCH, fire_ring)

// confidence:A; align-band; retn,stable,vslot; map:26067
VA_CHT_1_COMPGEN(0x006a77c0, 0x1e, SCALAR_DELETING_DTOR, t_fire_ring)

// name:A; map symbol; map:26068
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_fire_ring)

// name:A; map symbol; map:26069
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_fire_ring::~t_fire_ring()
{
    // Body unavailable.
}

// name:A; map symbol; map:26070
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_combat_actor>::~t_counted_ptr<t_combat_actor>()
{
    // Body unavailable.
}

// name:A; map symbol; map:26071
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_spell_actor_animation>::~t_counted_ptr<t_spell_actor_animation>()
{
    // Body unavailable.
}

// name:A; map symbol; map:26072
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_spell_registration<t_fire_ring>::t_combat_spell_registration<t_fire_ring>(t_spell arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:26073
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_combat_actor>::t_counted_ptr<t_combat_actor>()
{
    // Body unavailable.
}

// name:A; map symbol; map:26074
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_combat_actor>& t_counted_ptr<t_combat_actor>::operator=(t_combat_actor* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:26075
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_actor* t_counted_ptr<t_combat_actor>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:26076
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_actor& t_counted_ptr<t_combat_actor>::operator*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:26077
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_spell_actor_animation>::t_counted_ptr<t_spell_actor_animation>()
{
    // Body unavailable.
}

// name:A; map symbol; map:26078
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_spell_actor_animation>& t_counted_ptr<t_spell_actor_animation>::operator=(
    t_spell_actor_animation* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:26079
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_spell_actor_animation* t_counted_ptr<t_spell_actor_animation>::operator t_spell_actor_animation*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:26080
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_spell_actor_animation* t_counted_ptr<t_spell_actor_animation>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:26081
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_combat_object>::t_counted_ptr<t_abstract_combat_object>(
    t_counted_ptr<t_combat_actor> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:26082
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_spell_factory<t_fire_ring>::t_spell_factory<t_fire_ring>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:26083
VA_CHT_1(0x006a90b0, 0x9d)
t_combat_spell* t_spell_factory<t_fire_ring>::create(t_battlefield& arg_0, t_spell arg_1) const
{
    // Body unavailable.
}

// name:A; map symbol; map:26084
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_actor* t_counted_ptr<t_combat_actor>::get() const
{
    // Body unavailable.
}

// === .rdata (2 symbols) ===

// confidence:A; rtti-name; map:44486
DATA_CHT_1_COMPGEN(0x008e1504, "const t_fire_ring::`vftable'")

// confidence:A; rtti-name; map:44487
DATA_CHT_1_COMPGEN(0x008e14fc, "const t_spell_factory<t_fire_ring>::`vftable'")

// === .rdata$r (8 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_fire_ring@@;bcd=50ba04;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52449
DATA_CHT_1_COMPGEN(0x0090ba04, "t_fire_ring::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_fire_ring@@;vft=4e1504;col=50ba3c;td=5a4610;chd=50ba2c;offset=0;cdOffset=0;validated-hierarchy; map:52450
DATA_CHT_1_COMPGEN(0x0090ba1c, "t_fire_ring::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_fire_ring@@;vft=4e1504;col=50ba3c;td=5a4610;chd=50ba2c;offset=0;cdOffset=0;validated-hierarchy; map:52451
DATA_CHT_1_COMPGEN(0x0090ba2c, "t_fire_ring::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_fire_ring@@;vft=4e1504;col=50ba3c;td=5a4610;chd=50ba2c;offset=0;cdOffset=0;validated-hierarchy; map:52452
DATA_CHT_1_COMPGEN(0x0090ba3c, "const t_fire_ring::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_spell_factory@Vt_fire_ring@@@@;bcd=50b9bc;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52453
DATA_CHT_1_COMPGEN(0x0090b9bc, "t_spell_factory<t_fire_ring>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_spell_factory@Vt_fire_ring@@@@;vft=4e14fc;col=50b9f0;td=5a45e0;chd=50b9e0;offset=0;cdOffset=0;validated-hierarchy; map:52454
DATA_CHT_1_COMPGEN(0x0090b9d4, "t_spell_factory<t_fire_ring>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_spell_factory@Vt_fire_ring@@@@;vft=4e14fc;col=50b9f0;td=5a45e0;chd=50b9e0;offset=0;cdOffset=0;validated-hierarchy; map:52455
DATA_CHT_1_COMPGEN(0x0090b9e0, "t_spell_factory<t_fire_ring>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_spell_factory@Vt_fire_ring@@@@;vft=4e14fc;col=50b9f0;td=5a45e0;chd=50b9e0;offset=0;cdOffset=0;validated-hierarchy; map:52456
DATA_CHT_1_COMPGEN(0x0090b9f0, "const t_spell_factory<t_fire_ring>::`RTTI Complete Object Locator'")

// === .data (2 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_fire_ring@@;td=5a4610;validated-header; map:58603
DATA_CHT_1_COMPGEN(0x009a4610, "t_fire_ring `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_spell_factory@Vt_fire_ring@@@@;td=5a45e0;validated-header; map:58604
DATA_CHT_1_COMPGEN(0x009a45e0, "t_spell_factory<t_fire_ring> `RTTI Type Descriptor'")
