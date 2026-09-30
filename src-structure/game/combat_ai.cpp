// combat_ai.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 74/131 (A:46 B:19 C:9); unaccounted 57; skipped std 113.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (92 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:68069; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005b2600, 0x15, STATIC_INIT_DISPATCH, "combat_ai#1")

// name:C; dyninit; see ledger; map:68070
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_ai#1")

// confidence:A; dyninit-init; owner-conf-C; map:68071; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005b2620, 0x15, STATIC_INIT_DISPATCH, "combat_ai#2")

// name:C; dyninit; see ledger; map:68072
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_ai#2")

// confidence:A; dyninit-init; owner-conf-C; map:68073; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005b2640, 0x15, STATIC_INIT_DISPATCH, "combat_ai#3")

// name:C; dyninit; see ledger; map:68074
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_ai#3")

// confidence:A; dyninit-init; owner-conf-C; map:68075; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005b2660, 0x15, STATIC_INIT_DISPATCH, "combat_ai#4")

// name:C; dyninit; see ledger; map:68076
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_ai#4")

// confidence:A; dyninit-init; owner-conf-C; map:68077; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005b2680, 0x10, STATIC_INIT_DISPATCH, "combat_ai#5")

// name:C; dyninit; see ledger; map:68078
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_ai#5")

// confidence:A; dyninit-init; owner-conf-C; map:68079; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005b2690, 0x15, STATIC_INIT_DISPATCH, "combat_ai#6")

// name:C; dyninit; see ledger; map:68080
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_ai#6")

// confidence:B; align-order; retn,stable; map:20001
VA_CHT_1(0x005b26b0, 0x79)
void t_abstract_combat_ai_action::set_weight(double arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20002
VA_CHT_1(0x005b2730, 0x12)
t_combat_ai::t_combat_ai(t_combat_creature& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:20003
VA_CHT_1(0x005b2750, 0x871)
void t_combat_ai::generate_ranged()
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:20004
VA_CHT_1(0x005b31a0, 0xf3)
void t_combat_ai::generate_spell()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20005
VA_CHT_1(0x005b3500, 0x8a)
void t_combat_ai::consider_action(t_abstract_combat_ai_action* arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20006
VA_CHT_1(0x005b3590, 0x164)
t_counted_ptr<t_abstract_combat_ai_action> t_combat_ai::get_best_of_list(
    std::list<t_counted_ptr<t_abstract_combat_ai_action>, std::allocator<t_counted_ptr<t_abstract_combat_ai_action>>>& arg_0
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20007
VA_CHT_1(0x005b3700, 0x1b9)
t_counted_ptr<t_abstract_combat_ai_action> t_combat_ai::get_best_action()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20008
VA_CHT_1(0x005b38c0, 0x1a6)
bool t_combat_ai::area_effect_point_is_better(
    t_area_effect_point const& arg_0,
    t_area_effect_point const& arg_1
) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20009
VA_CHT_1(0x005b3a70, 0x1c7)
double t_combat_ai::would_interfere(
    t_combat_creature const& arg_0,
    t_combat_creature const& arg_1,
    int arg_2,
    bool arg_3
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20010
VA_CHT_1(0x005b3c40, 0x13b)
double t_combat_ai::get_zoc_change_weight(int arg_0, t_combat_creature const& arg_1, bool arg_2, int arg_3)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:20011
VA_CHT_1(0x005b3d80, 0x11b)
bool threatens_enemies(t_combat_creature const& arg_0)
{
    // Body unavailable.
}

// confidence:A; dyninit-init; owner-conf-C; map:68081; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005b3ea0, 0x11, STATIC_INIT_DISPATCH, "combat_ai#7")

// confidence:B; dyninit-ctor; owner-conf-C; map:68082; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005b3ec0, 0xd1, STATIC_CTOR, "combat_ai#7")

// name:C; dyninit; see ledger; map:68083
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "combat_ai#7")

// confidence:B; dyninit-dtor; owner-conf-C; map:68084; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005b3fa0, 0xa, STATIC_DTOR, "combat_ai#7")

// confidence:A; dyninit-init; owner-conf-C; map:68085; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005b3fb0, 0x11, STATIC_INIT_DISPATCH, "combat_ai#8")

// confidence:B; dyninit-ctor; owner-conf-C; map:68086; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005b3fd0, 0xd1, STATIC_CTOR, "combat_ai#8")

// name:C; dyninit; see ledger; map:68087
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "combat_ai#8")

// confidence:B; dyninit-dtor; owner-conf-C; map:68088; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005b40b0, 0xa, STATIC_DTOR, "combat_ai#8")

// confidence:A; dyninit-init; owner-conf-C; map:68089; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005b40c0, 0x11, STATIC_INIT_DISPATCH, "combat_ai#9")

// confidence:B; dyninit-ctor; owner-conf-C; map:68090; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005b40e0, 0xd1, STATIC_CTOR, "combat_ai#9")

// name:C; dyninit; see ledger; map:68091
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "combat_ai#9")

// confidence:B; dyninit-dtor; owner-conf-C; map:68092; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005b41c0, 0xa, STATIC_DTOR, "combat_ai#9")

// confidence:A; dyninit-init; owner-conf-C; map:68093; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005b41d0, 0x11, STATIC_INIT_DISPATCH, "combat_ai#10")

// confidence:B; dyninit-ctor; owner-conf-C; map:68094; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005b41f0, 0xd1, STATIC_CTOR, "combat_ai#10")

// name:C; dyninit; see ledger; map:68095
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "combat_ai#10")

// confidence:B; dyninit-dtor; owner-conf-C; map:68096; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005b42d0, 0xa, STATIC_DTOR, "combat_ai#10")

// confidence:A; dyninit-init; owner-conf-C; map:68097; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005b42e0, 0x11, STATIC_INIT_DISPATCH, "combat_ai#11")

// confidence:B; dyninit-ctor; owner-conf-C; map:68098; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005b4300, 0xd1, STATIC_CTOR, "combat_ai#11")

// name:C; dyninit; see ledger; map:68099
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "combat_ai#11")

// confidence:B; dyninit-dtor; owner-conf-C; map:68100; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005b43e0, 0xa, STATIC_DTOR, "combat_ai#11")

// confidence:C; align-order; retn,stable; map:20012
VA_CHT_1(0x005b43f0, 0x8f0)
bool ai_check_retreat(t_battlefield& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:68101
VA_CHT_1(0x005b4e50, 0xe7)
static bool should_retreat(t_battlefield& arg_0, bool arg_1)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:68102
VA_CHT_1(0x005b4f40, 0xe7)
static bool suggest_retreat(t_battlefield& arg_0, bool arg_1)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:68103
VA_CHT_1(0x005b5810, 0x91)
static bool no_heroes(t_battlefield& arg_0, bool arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:68104
VA_CHT_1(0x005b5bd0, 0x56)
static t_hero const* get_charm(t_battlefield& arg_0, bool arg_1, t_skill& arg_2)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:68105; name:B (dyninit; see ledger)
VA_CHT_1(0x005b5c90, 0x20)
// combat_ai$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:A; dyninit-tinit; owner-conf-B; map:68107; name:B (dyninit; see ledger)
VA_CHT_1(0x005b5cb0, 0x5c)
// combat_ai$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:68108
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// combat_ai$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:68109
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// combat_ai$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:68110
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// combat_ai$tatexit4
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:20013
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
double t_random_number_generator::operator()(double arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:20015
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_area_effect_point::set_range_factor(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:20016
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_point_2d_list const& t_area_effect_point::get_point_list() const
{
    // Body unavailable.
}

// name:A; map symbol; map:20017
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::set<t_counted_ptr<t_area_effect_point>, t_area_effect_set_predicate, std::allocator<t_counted_ptr<t_area_effect_point>>> const& t_ai_combat_data_cache::get_base_area_effect_point_set(
    t_area_effect_shape arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:20018
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_ai_ranged_area_action::t_combat_ai_ranged_area_action(
    t_battlefield& arg_0,
    t_counted_ptr<t_area_effect_point> const& arg_1,
    bool arg_2,
    double arg_3
)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:20019
VA_CHT_1(0x005b2fd0, 0x93)
t_abstract_combat_ai_action::t_abstract_combat_ai_action(t_battlefield& arg_0, bool arg_1, double arg_2)
{
    // Body unavailable.
}

// name:A; map symbol; map:20020
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_abstract_combat_ai_action)

// name:A; map symbol; map:20021
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_abstract_combat_ai_action)

// name:A; map symbol; map:20022
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_combat_ai_action::~t_abstract_combat_ai_action()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:20023
VA_CHT_1_COMPGEN(0x005b30a0, 0x1e, VECTOR_DELETING_DTOR, t_combat_ai_ranged_area_action)

// name:A; map symbol; map:20024
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_combat_ai_ranged_area_action)

// name:A; map symbol; map:20025
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_ai_ranged_area_action::~t_combat_ai_ranged_area_action()
{
    // Body unavailable.
}

// name:A; map symbol; map:20026
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_ai_ranged_single_action::t_combat_ai_ranged_single_action(
    t_battlefield& arg_0,
    t_counted_ptr<t_combat_creature> arg_1,
    int arg_2,
    bool arg_3,
    double arg_4
)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:20027
VA_CHT_1_COMPGEN(0x005b3120, 0x1e, SCALAR_DELETING_DTOR, t_combat_ai_ranged_single_action)

// name:A; map symbol; map:20028
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_combat_ai_ranged_single_action)

// name:A; map symbol; map:20029
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_ai_ranged_single_action::~t_combat_ai_ranged_single_action()
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:20032
VA_CHT_1(0x005b57c0, 0x43)
double t_abstract_combat_ai_action::get_weight(t_combat_ai const& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:20033
VA_CHT_1(0x005b5b20, 0x43)
bool t_abstract_combat_ai_action::has_been_weighed() const
{
    // Body unavailable.
}

// name:A; map symbol; map:20034
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_abstract_combat_ai_action::get_never_use(t_combat_ai const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:20035
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_ai_defend_action::t_combat_ai_defend_action(t_battlefield& arg_0, bool arg_1, double arg_2)
{
    // Body unavailable.
}

// name:A; map symbol; map:20036
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_combat_ai_defend_action)

// name:A; map symbol; map:20037
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_combat_ai_defend_action)

// name:A; map symbol; map:20038
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_ai_defend_action::~t_combat_ai_defend_action()
{
    // Body unavailable.
}

// name:A; map symbol; map:20039
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_ai_wait_action::t_combat_ai_wait_action(t_battlefield& arg_0, bool arg_1, double arg_2)
{
    // Body unavailable.
}

// name:A; map symbol; map:20040
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_combat_ai_wait_action)

// name:A; map symbol; map:20041
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_combat_ai_wait_action)

// name:A; map symbol; map:20042
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_ai_wait_action::~t_combat_ai_wait_action()
{
    // Body unavailable.
}

// name:A; map symbol; map:20043
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_battlefield::get_retreat_checked(bool arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:20044
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_battlefield::set_retreat_checked(bool arg_0, bool arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:20045
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
double t_ai_combat_data_cache::get_total_combat_value(bool arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:20147
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_area_effect_point>& t_counted_ptr<t_area_effect_point>::operator=(t_area_effect_point* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:20148
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_combat_spell>::t_counted_ptr<t_combat_spell>(t_combat_spell* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:20149
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_combat_ai_action>::t_counted_ptr<t_abstract_combat_ai_action>(
    t_counted_ptr<t_abstract_combat_ai_action> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:20150
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_combat_ai_action>::t_counted_ptr<t_abstract_combat_ai_action>(
    t_abstract_combat_ai_action* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:20151
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_combat_ai_action>::t_counted_ptr<t_abstract_combat_ai_action>()
{
    // Body unavailable.
}

// name:A; map symbol; map:20152
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_combat_ai_action>& t_counted_ptr<t_abstract_combat_ai_action>::operator=(
    t_counted_ptr<t_abstract_combat_ai_action> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:20153
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_combat_ai_action>& t_counted_ptr<t_abstract_combat_ai_action>::operator=(
    t_abstract_combat_ai_action* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:20154
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_combat_ai_action* t_counted_ptr<t_abstract_combat_ai_action>::operator t_abstract_combat_ai_action*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:20162
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_counted_ptr<t_abstract_combat_ai_action>")

// === .rdata (7 symbols) ===

// name:A; map symbol; map:43898
DATA_CHT_1(UNACCOUNTED)
// __real@8@3ffc9999999999999800

// name:A; map symbol; map:43899
DATA_CHT_1(UNACCOUNTED)
// __real@8@400dfffe000000000000

// confidence:A; rtti-name; map:43900
DATA_CHT_1_COMPGEN(0x008dc0ac, "const t_combat_ai_ranged_area_action::`vftable'")

// confidence:A; rtti-name; map:43901
DATA_CHT_1_COMPGEN(0x008dc09c, "const t_abstract_combat_ai_action::`vftable'")

// confidence:A; rtti-name; map:43902
DATA_CHT_1_COMPGEN(0x008dc08c, "const t_combat_ai_ranged_single_action::`vftable'")

// confidence:A; rtti-name; map:43903
DATA_CHT_1_COMPGEN(0x008dc0bc, "const t_combat_ai_defend_action::`vftable'")

// confidence:A; rtti-name; map:43904
DATA_CHT_1_COMPGEN(0x008dc0cc, "const t_combat_ai_wait_action::`vftable'")

// === .rdata$r (20 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_abstract_combat_ai_action@@;bcd=503874;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50678
DATA_CHT_1_COMPGEN(0x00903874, "t_abstract_combat_ai_action::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_combat_ai_ranged_area_action@@;bcd=5037f8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50679
DATA_CHT_1_COMPGEN(0x009037f8, "t_combat_ai_ranged_area_action::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_combat_ai_ranged_area_action@@;vft=4dc0ac;col=503830;td=598b54;chd=503820;offset=0;cdOffset=0;validated-hierarchy; map:50680
DATA_CHT_1_COMPGEN(0x00903810, "t_combat_ai_ranged_area_action::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_combat_ai_ranged_area_action@@;vft=4dc0ac;col=503830;td=598b54;chd=503820;offset=0;cdOffset=0;validated-hierarchy; map:50681
DATA_CHT_1_COMPGEN(0x00903820, "t_combat_ai_ranged_area_action::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_combat_ai_ranged_area_action@@;vft=4dc0ac;col=503830;td=598b54;chd=503820;offset=0;cdOffset=0;validated-hierarchy; map:50682
DATA_CHT_1_COMPGEN(0x00903830, "const t_combat_ai_ranged_area_action::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_abstract_combat_ai_action@@;vft=4dc09c;col=503860;td=598b84;chd=503850;offset=0;cdOffset=0;validated-hierarchy; map:50683
DATA_CHT_1_COMPGEN(0x00903844, "t_abstract_combat_ai_action::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_abstract_combat_ai_action@@;vft=4dc09c;col=503860;td=598b84;chd=503850;offset=0;cdOffset=0;validated-hierarchy; map:50684
DATA_CHT_1_COMPGEN(0x00903850, "t_abstract_combat_ai_action::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_abstract_combat_ai_action@@;vft=4dc09c;col=503860;td=598b84;chd=503850;offset=0;cdOffset=0;validated-hierarchy; map:50685
DATA_CHT_1_COMPGEN(0x00903860, "const t_abstract_combat_ai_action::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_combat_ai_ranged_single_action@@;bcd=50388c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50686
DATA_CHT_1_COMPGEN(0x0090388c, "t_combat_ai_ranged_single_action::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_combat_ai_ranged_single_action@@;vft=4dc08c;col=5038c4;td=598bb0;chd=5038b4;offset=0;cdOffset=0;validated-hierarchy; map:50687
DATA_CHT_1_COMPGEN(0x009038a4, "t_combat_ai_ranged_single_action::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_combat_ai_ranged_single_action@@;vft=4dc08c;col=5038c4;td=598bb0;chd=5038b4;offset=0;cdOffset=0;validated-hierarchy; map:50688
DATA_CHT_1_COMPGEN(0x009038b4, "t_combat_ai_ranged_single_action::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_combat_ai_ranged_single_action@@;vft=4dc08c;col=5038c4;td=598bb0;chd=5038b4;offset=0;cdOffset=0;validated-hierarchy; map:50689
DATA_CHT_1_COMPGEN(0x009038c4, "const t_combat_ai_ranged_single_action::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_combat_ai_defend_action@@;bcd=503924;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50690
DATA_CHT_1_COMPGEN(0x00903924, "t_combat_ai_defend_action::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_combat_ai_defend_action@@;vft=4dc0bc;col=50395c;td=598c08;chd=50394c;offset=0;cdOffset=0;validated-hierarchy; map:50691
DATA_CHT_1_COMPGEN(0x0090393c, "t_combat_ai_defend_action::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_combat_ai_defend_action@@;vft=4dc0bc;col=50395c;td=598c08;chd=50394c;offset=0;cdOffset=0;validated-hierarchy; map:50692
DATA_CHT_1_COMPGEN(0x0090394c, "t_combat_ai_defend_action::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_combat_ai_defend_action@@;vft=4dc0bc;col=50395c;td=598c08;chd=50394c;offset=0;cdOffset=0;validated-hierarchy; map:50693
DATA_CHT_1_COMPGEN(0x0090395c, "const t_combat_ai_defend_action::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_combat_ai_wait_action@@;bcd=5038d8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50694
DATA_CHT_1_COMPGEN(0x009038d8, "t_combat_ai_wait_action::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_combat_ai_wait_action@@;vft=4dc0cc;col=503910;td=598be0;chd=503900;offset=0;cdOffset=0;validated-hierarchy; map:50695
DATA_CHT_1_COMPGEN(0x009038f0, "t_combat_ai_wait_action::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_combat_ai_wait_action@@;vft=4dc0cc;col=503910;td=598be0;chd=503900;offset=0;cdOffset=0;validated-hierarchy; map:50696
DATA_CHT_1_COMPGEN(0x00903900, "t_combat_ai_wait_action::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_combat_ai_wait_action@@;vft=4dc0cc;col=503910;td=598be0;chd=503900;offset=0;cdOffset=0;validated-hierarchy; map:50697
DATA_CHT_1_COMPGEN(0x00903910, "const t_combat_ai_wait_action::`RTTI Complete Object Locator'")

// === .data (11 symbols) ===

// name:A; map symbol; map:58186
DATA_CHT_1_COMPGEN(UNACCOUNTED, "div >= 0.0")

// name:A; map symbol; map:58187
DATA_CHT_1_COMPGEN(UNACCOUNTED, "div <= 1.0")

// name:A; map symbol; map:58188
DATA_CHT_1_COMPGEN(UNACCOUNTED, "C:\\\\work\\\\game\\\\random_number_gener...")

// name:A; map symbol; map:58189
DATA_CHT_1_COMPGEN(UNACCOUNTED, "shape < k_num_area_effect_shapes...")

// name:A; map symbol; map:58190
DATA_CHT_1_COMPGEN(UNACCOUNTED, "shape >= 0")

// name:A; map symbol; map:58191
DATA_CHT_1_COMPGEN(UNACCOUNTED, "C:\\\\work\\\\game\\\\ai_combat_data_cach...")

// confidence:A; rtti-type-name; type-name=.?AVt_abstract_combat_ai_action@@;td=598b84;validated-header; map:58192
DATA_CHT_1_COMPGEN(0x00998b84, "t_abstract_combat_ai_action `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_combat_ai_ranged_area_action@@;td=598b54;validated-header; map:58193
DATA_CHT_1_COMPGEN(0x00998b54, "t_combat_ai_ranged_area_action `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_combat_ai_ranged_single_action@@;td=598bb0;validated-header; map:58194
DATA_CHT_1_COMPGEN(0x00998bb0, "t_combat_ai_ranged_single_action `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_combat_ai_defend_action@@;td=598c08;validated-header; map:58195
DATA_CHT_1_COMPGEN(0x00998c08, "t_combat_ai_defend_action `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_combat_ai_wait_action@@;td=598be0;validated-header; map:58196
DATA_CHT_1_COMPGEN(0x00998be0, "t_combat_ai_wait_action `RTTI Type Descriptor'")

// === .bss (1 symbols) ===

// name:A; map symbol; map:60105
DATA_CHT_1(UNACCOUNTED)
std::_Tree<int, std::pair<int const, t_counted_ptr<t_area_effect_point>>, std::map<int, t_counted_ptr<t_area_effect_point>, std::less<int>, std::allocator<t_counted_ptr<t_area_effect_point>>>::_Kfn, std::less<int>, std::allocator<t_counted_ptr<t_area_effect_point>>>::_Node*std::_Tree<int, std::pair<int const, t_counted_ptr<t_area_effect_point>>, std::map<int, t_counted_ptr<t_area_effect_point>, std::less<int>, std::allocator<t_counted_ptr<t_area_effect_point>>>::_Kfn, std::less<int>, std::allocator<t_counted_ptr<t_area_effect_point>>>::_Nil; // Initial value unavailable.
