// get_artifact_damage_modifier.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\get_artifact_damage_modifier.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 154/235 (A:96 B:0 C:0); unaccounted 81; skipped std 12.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (139 symbols) ===

namespace {

// name:A; map symbol; map:26703
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_artifact_weapon_visitor::t_artifact_weapon_visitor(bool arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:26704
VA_CHT_1(0x006b7920, 0x39)
bool t_artifact_weapon_visitor::visit_combat(t_artifact_prop::t_combat& arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26705
VA_CHT_1(0x006b7960, 0x64)
int get_artifact_damage_modifier(t_hero const& arg_0, bool arg_1)
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:26706
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_artifact_armor_visitor::t_artifact_armor_visitor(bool arg_0, t_artifact_target arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:26707
VA_CHT_1(0x006b79d0, 0x43)
bool t_artifact_armor_visitor::visit_combat(t_artifact_prop::t_combat& arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26708
VA_CHT_1(0x006b7a20, 0x68)
int get_artifact_armor_value(t_hero const& arg_0, bool arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26709
VA_CHT_1(0x006b7a90, 0x6c)
int get_artifact_creature_defense_bonus(t_hero const& arg_0, bool arg_1)
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:26710
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_spell_cost_visitor::t_spell_cost_visitor(t_spell arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:26711
VA_CHT_1(0x006b7b00, 0x8c)
bool t_spell_cost_visitor::visit_spell_cost(t_artifact_prop::t_spell_cost_base& arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26712
VA_CHT_1(0x006b7b90, 0xa1)
int get_artifact_spell_cost(t_hero const& arg_0, t_spell arg_1)
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:26713
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_spell_power_visitor::t_spell_power_visitor(t_spell arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:26714
VA_CHT_1(0x006b7c40, 0x7a)
bool t_spell_power_visitor::visit_spell_list(t_artifact_prop::t_spell_list_effect& arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26715
VA_CHT_1(0x006b7cc0, 0x64)
int get_artifact_spell_power_modifier(t_hero const& arg_0, t_spell arg_1)
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:26716
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_skill_power_visitor::t_skill_power_visitor(t_skill_type arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:26717
VA_CHT_1(0x006b7d30, 0x30)
bool t_skill_power_visitor::visit_skill(t_artifact_prop::t_skill_effect& arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26718
VA_CHT_1(0x006b7d60, 0x64)
int get_artifact_skill_modifier(t_hero const& arg_0, t_skill_type arg_1)
{
    // Body unavailable.
}

namespace {

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:26719
VA_CHT_1(0x006b7dd0, 0x35)
bool t_sum_visitor::visit(t_artifact_effect& arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26720
VA_CHT_1(0x006b7e10, 0xc)
int get_artifact_speed_modifier(t_hero const& arg_0, t_artifact_target arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:65337
VA_CHT_1(0x006b7e20, 0x6e)
static int get_artifact_modifier(t_hero const& arg_0, t_artifact_effect_type arg_1, t_artifact_target arg_2)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26721
VA_CHT_1(0x006b7e90, 0xd)
int get_artifact_creature_attack_bonus(t_hero const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26722
VA_CHT_1(0x006b7ea0, 0xd)
int get_artifact_scouting_bonus(t_hero const& arg_0)
{
    // Body unavailable.
}

namespace {

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:26723
VA_CHT_1(0x006b7eb0, 0x29)
bool t_income_visitor::visit_income(t_artifact_prop::t_income& arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26724
VA_CHT_1(0x006b7ee0, 0x69)
void get_artifact_income(t_hero const& arg_0, t_material_array& arg_1)
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:26725
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_magic_weapon_visitor::t_magic_weapon_visitor(int arg_0, bool arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:26726
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_magic_weapon_visitor::get_damage(std::vector<int, std::allocator<int>>& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:26727
VA_CHT_1(0x006b7f50, 0x52)
bool t_magic_weapon_visitor::visit_damage(t_artifact_prop::t_damage_bonus_base& arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:26728
VA_CHT_1(0x006b7fb0, 0xf6)
int get_artifact_damage(t_hero const& arg_0, bool arg_1, std::vector<int, std::allocator<int>>& arg_2)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26729
VA_CHT_1(0x006b80b0, 0x103)
int get_artifact_damage(t_creature_stack const& arg_0, bool arg_1)
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:26730
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_terrain_visitor::t_terrain_visitor(t_terrain_type arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:26731
VA_CHT_1(0x006b81c0, 0x2d)
bool t_terrain_visitor::visit(t_artifact_effect& arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26732
VA_CHT_1(0x006b81f0, 0x5e)
bool has_terrain_artifact(t_hero const& arg_0, t_terrain_type arg_1)
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:26733
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_movement_visitor::t_movement_visitor(bool arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:26734
VA_CHT_1(0x006b8250, 0x2e)
bool t_movement_visitor::visit_movement(t_artifact_prop::t_movement& arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26735
VA_CHT_1(0x006b8280, 0x64)
int get_artifact_adventure_move_bonus(t_hero const& arg_0, bool arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:26736
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int get_artifact_spell_point_modifier(t_hero const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26737
VA_CHT_1(0x006b82f0, 0xd)
int get_artifact_spell_point_recovery(t_hero const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26738
VA_CHT_1(0x006b8300, 0xd)
int get_artifact_luck(t_hero const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26739
VA_CHT_1(0x006b8310, 0xd)
int get_artifact_morale(t_hero const& arg_0)
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:26740
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_resistance_visitor::t_resistance_visitor()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26741
VA_CHT_1(0x006b8320, 0xd)
int t_resistance_visitor::get_modifier() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:26742
VA_CHT_1(0x006b8330, 0x4d)
bool t_resistance_visitor::visit(t_artifact_effect& arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26743
VA_CHT_1(0x006b8380, 0x60)
int get_artifact_magic_resistance(t_hero const& arg_0)
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:26744
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_scroll_visitor::visit_spell(t_artifact_prop::t_single_spell& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:26745
VA_CHT_1(0x006b8430, 0xa5)
bool t_scroll_visitor::visit_spell_list(t_artifact_prop::t_spell_list_effect& arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26746
VA_CHT_1(0x006b84e0, 0x58)
void set_artifact_spells(t_hero& arg_0)
{
    // Body unavailable.
}

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65338; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006b8540, 0x11, STATIC_INIT_DISPATCH, "get_artifact_damage_modifier#1")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65339; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006b8560, 0xd1, STATIC_CTOR, "get_artifact_damage_modifier#1")

// name:C; dyninit; see ledger; map:65340
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "get_artifact_damage_modifier#1")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65341; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006b8640, 0xa, STATIC_DTOR, "get_artifact_damage_modifier#1")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65342; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006b8650, 0x11, STATIC_INIT_DISPATCH, "get_artifact_damage_modifier#2")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65343; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006b8670, 0xd1, STATIC_CTOR, "get_artifact_damage_modifier#2")

// name:C; dyninit; see ledger; map:65344
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "get_artifact_damage_modifier#2")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65345; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006b8750, 0xa, STATIC_DTOR, "get_artifact_damage_modifier#2")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65346; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006b8760, 0x11, STATIC_INIT_DISPATCH, "get_artifact_damage_modifier#3")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65347; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006b8780, 0xd1, STATIC_CTOR, "get_artifact_damage_modifier#3")

// name:C; dyninit; see ledger; map:65348
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "get_artifact_damage_modifier#3")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65349; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006b8860, 0xa, STATIC_DTOR, "get_artifact_damage_modifier#3")

namespace {

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:26747
VA_CHT_1(0x006b8870, 0x2d2)
bool t_parchment_visitor::visit_spell(t_artifact_prop::t_single_spell& arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26748
VA_CHT_1(0x006b8d20, 0x127)
bool use_parchment(t_hero& arg_0, t_artifact const& arg_1, std::string* arg_2)
{
    // Body unavailable.
}

namespace {

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:26749
VA_CHT_1(0x006b8e50, 0x28)
bool t_discount_visitor::visit(t_artifact_effect& arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26750
VA_CHT_1(0x006b8e80, 0x60)
int get_artifact_recruitment_discount(t_hero const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26751
VA_CHT_1(0x006b8ee0, 0xd)
int get_artifact_health_bonus(t_hero const& arg_0)
{
    // Body unavailable.
}

namespace {

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:26752
VA_CHT_1(0x006b8ef0, 0x1c)
bool t_effect_presence_visitor::visit(t_artifact_effect& arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26753
VA_CHT_1(0x006b8f10, 0xd)
bool has_seamans_hat(t_hero const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:65350
VA_CHT_1(0x006b8f20, 0x78)
static bool has_effect(t_hero const& arg_0, t_artifact_effect_type arg_1, t_artifact const** arg_2)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26754
VA_CHT_1(0x006b8fa0, 0xc)
bool has_shackles_of_war(t_hero const& arg_0, t_artifact const*& arg_1)
{
    // Body unavailable.
}

namespace {

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:26755
VA_CHT_1(0x006b8fb0, 0x24)
bool t_ability_presence_visitor::visit_ability(t_artifact_prop::t_give_ability& arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26756
VA_CHT_1(0x006b8fe0, 0x5e)
bool artifact_gives_ability(t_hero const& arg_0, t_creature_ability arg_1)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:65351; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006b9290, 0x20, STATIC_INIT_DISPATCH, get_artifact_damage_modifier)

// name:A; map symbol; map:26757
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_artifact_weapon_visitor)

// name:A; map symbol; map:26758
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_artifact_weapon_visitor)

namespace {

// name:A; map symbol; map:26759
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_artifact_weapon_visitor::~t_artifact_weapon_visitor()
{
    // Body unavailable.
}

// name:A; map symbol; map:26760
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_artifact_weapon_visitor::get_modifier() const
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:26761
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_artifact_armor_visitor)

// name:A; map symbol; map:26762
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_artifact_armor_visitor)

namespace {

// name:A; map symbol; map:26763
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_artifact_armor_visitor::~t_artifact_armor_visitor()
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:26764
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_spell_cost_visitor)

// name:A; map symbol; map:26765
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_spell_cost_visitor)

namespace {

// name:A; map symbol; map:26766
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_spell_cost_visitor::~t_spell_cost_visitor()
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26767
VA_CHT_1(0x006b9230, 0x2d)
bool t_artifact_prop::t_spell_list_effect::has_spell(t_spell arg_0) const
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:26768
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_spell_cost_visitor::get_modifier() const
{
    // Body unavailable.
}

// name:A; map symbol; map:26769
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_spell_cost_visitor::get_percentage() const
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:26770
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_spell_power_visitor)

// name:A; map symbol; map:26771
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_spell_power_visitor)

namespace {

// name:A; map symbol; map:26772
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_spell_power_visitor::~t_spell_power_visitor()
{
    // Body unavailable.
}

// name:A; map symbol; map:26773
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_spell_power_visitor::get_modifier() const
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:26774
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_skill_power_visitor)

// name:A; map symbol; map:26775
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_skill_power_visitor)

namespace {

// name:A; map symbol; map:26776
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_skill_power_visitor::~t_skill_power_visitor()
{
    // Body unavailable.
}

// name:A; map symbol; map:26777
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_skill_power_visitor::get_modifier() const
{
    // Body unavailable.
}

// name:A; map symbol; map:26778
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_sum_visitor::t_sum_visitor(t_artifact_effect_type arg_0, t_artifact_target arg_1)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:26779
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_sum_visitor)

// name:A; map symbol; map:26780
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_sum_visitor)

namespace {

// name:A; map symbol; map:26781
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_sum_visitor::~t_sum_visitor()
{
    // Body unavailable.
}

// name:A; map symbol; map:26782
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_sum_visitor::get_modifier() const
{
    // Body unavailable.
}

// name:A; map symbol; map:26783
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_income_visitor::t_income_visitor(t_material_array& arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:26784
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_income_visitor)

// name:A; map symbol; map:26785
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_income_visitor)

namespace {

// name:A; map symbol; map:26786
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_income_visitor::~t_income_visitor()
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:26787
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_magic_weapon_visitor)

// name:A; map symbol; map:26788
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_magic_weapon_visitor)

namespace {

// name:A; map symbol; map:26789
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_magic_weapon_visitor::~t_magic_weapon_visitor()
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:26790
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_damage_type t_artifact_prop::t_damage_bonus_base::get_damage_type() const
{
    // Body unavailable.
}

// name:A; map symbol; map:26791
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_terrain_visitor)

// name:A; map symbol; map:26792
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_terrain_visitor)

namespace {

// name:A; map symbol; map:26793
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_terrain_visitor::~t_terrain_visitor()
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:26794
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_movement_visitor)

// name:A; map symbol; map:26795
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_movement_visitor)

namespace {

// name:A; map symbol; map:26796
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_movement_visitor::~t_movement_visitor()
{
    // Body unavailable.
}

// name:A; map symbol; map:26797
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_movement_visitor::get_modifier() const
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:26798
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_resistance_visitor)

// name:A; map symbol; map:26799
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_resistance_visitor)

namespace {

// name:A; map symbol; map:26800
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_resistance_visitor::~t_resistance_visitor()
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26801
VA_CHT_1(0x006b9260, 0x2d)
void t_hero::add_scroll_spell(t_spell arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:26802
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_hero::add_book_spell(t_spell arg_0)
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:26803
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_scroll_visitor::t_scroll_visitor(t_hero& arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:26804
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_scroll_visitor)

// name:A; map symbol; map:26805
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_scroll_visitor)

namespace {

// name:A; map symbol; map:26806
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_scroll_visitor::~t_scroll_visitor()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:26807
VA_CHT_1(0x006b8b50, 0x158)
t_parchment_visitor::t_parchment_visitor(t_hero& arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:26808
VA_CHT_1_COMPGEN(0x006b8cb0, 0x1e, SCALAR_DELETING_DTOR, t_parchment_visitor)

// name:A; map symbol; map:26809
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_parchment_visitor)

namespace {

// name:A; map symbol; map:26810
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_parchment_visitor::~t_parchment_visitor()
{
    // Body unavailable.
}

// name:A; map symbol; map:26811
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::string t_parchment_visitor::get_message() const
{
    // Body unavailable.
}

// name:A; map symbol; map:26812
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_parchment_visitor::used() const
{
    // Body unavailable.
}

// name:A; map symbol; map:26813
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_discount_visitor::t_discount_visitor()
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:26814
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_discount_visitor)

// name:A; map symbol; map:26815
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_discount_visitor)

namespace {

// name:A; map symbol; map:26816
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_discount_visitor::~t_discount_visitor()
{
    // Body unavailable.
}

// name:A; map symbol; map:26817
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_discount_visitor::get_result() const
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:26818
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_artifact const* t_artifact_effect_visitor::get_artifact() const
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:26819
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_effect_presence_visitor::t_effect_presence_visitor(t_artifact_effect_type arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:26820
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_effect_presence_visitor)

// name:A; map symbol; map:26821
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_effect_presence_visitor)

namespace {

// name:A; map symbol; map:26822
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_effect_presence_visitor::~t_effect_presence_visitor()
{
    // Body unavailable.
}

// name:A; map symbol; map:26823
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_ability_presence_visitor::t_ability_presence_visitor(t_creature_ability arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:26824
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_ability_presence_visitor)

// name:A; map symbol; map:26825
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_ability_presence_visitor)

namespace {

// name:A; map symbol; map:26826
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_ability_presence_visitor::~t_ability_presence_visitor()
{
    // Body unavailable.
}

} // anonymous namespace

// === .rdata (16 symbols) ===

// confidence:A; rtti-name; map:44559
DATA_CHT_1_COMPGEN(0x008e1cfc, "const t_artifact_weapon_visitor::`vftable'")

// confidence:A; rtti-name; map:44560
DATA_CHT_1_COMPGEN(0x008e1d3c, "const t_artifact_armor_visitor::`vftable'")

// confidence:A; rtti-name; map:44561
DATA_CHT_1_COMPGEN(0x008e1d7c, "const t_spell_cost_visitor::`vftable'")

// confidence:A; rtti-name; map:44562
DATA_CHT_1_COMPGEN(0x008e1dbc, "const t_spell_power_visitor::`vftable'")

// confidence:A; rtti-name; map:44563
DATA_CHT_1_COMPGEN(0x008e1dfc, "const t_skill_power_visitor::`vftable'")

// confidence:A; rtti-name; map:44564
DATA_CHT_1_COMPGEN(0x008e1e3c, "const t_sum_visitor::`vftable'")

// confidence:A; rtti-name; map:44565
DATA_CHT_1_COMPGEN(0x008e1e7c, "const t_income_visitor::`vftable'")

// confidence:A; rtti-name; map:44566
DATA_CHT_1_COMPGEN(0x008e1ebc, "const t_magic_weapon_visitor::`vftable'")

// confidence:A; rtti-name; map:44567
DATA_CHT_1_COMPGEN(0x008e1efc, "const t_terrain_visitor::`vftable'")

// confidence:A; rtti-name; map:44568
DATA_CHT_1_COMPGEN(0x008e1f3c, "const t_movement_visitor::`vftable'")

// confidence:A; rtti-name; map:44569
DATA_CHT_1_COMPGEN(0x008e1f7c, "const t_resistance_visitor::`vftable'")

// confidence:A; rtti-name; map:44570
DATA_CHT_1_COMPGEN(0x008e1fbc, "const t_scroll_visitor::`vftable'")

// confidence:A; rtti-name; map:44571
DATA_CHT_1_COMPGEN(0x008e1ffc, "const t_parchment_visitor::`vftable'")

// confidence:A; rtti-name; map:44572
DATA_CHT_1_COMPGEN(0x008e203c, "const t_discount_visitor::`vftable'")

// confidence:A; rtti-name; map:44573
DATA_CHT_1_COMPGEN(0x008e207c, "const t_effect_presence_visitor::`vftable'")

// confidence:A; rtti-name; map:44574
DATA_CHT_1_COMPGEN(0x008e20bc, "const t_ability_presence_visitor::`vftable'")

// === .rdata$r (64 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_artifact_weapon_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;bcd=50c838;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52656
DATA_CHT_1_COMPGEN(0x0090c838, "t_artifact_weapon_visitor::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_artifact_weapon_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;vft=4e1cfc;col=50c86c;td=5a7848;chd=50c85c;offset=0;cdOffset=0;validated-hierarchy; map:52657
DATA_CHT_1_COMPGEN(0x0090c850, "t_artifact_weapon_visitor::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_artifact_weapon_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;vft=4e1cfc;col=50c86c;td=5a7848;chd=50c85c;offset=0;cdOffset=0;validated-hierarchy; map:52658
DATA_CHT_1_COMPGEN(0x0090c85c, "t_artifact_weapon_visitor::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_artifact_weapon_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;vft=4e1cfc;col=50c86c;td=5a7848;chd=50c85c;offset=0;cdOffset=0;validated-hierarchy; map:52659
DATA_CHT_1_COMPGEN(0x0090c86c, "const t_artifact_weapon_visitor::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_artifact_armor_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;bcd=50c880;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52660
DATA_CHT_1_COMPGEN(0x0090c880, "t_artifact_armor_visitor::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_artifact_armor_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;vft=4e1d3c;col=50c8b8;td=5a78b0;chd=50c8a8;offset=0;cdOffset=0;validated-hierarchy; map:52661
DATA_CHT_1_COMPGEN(0x0090c898, "t_artifact_armor_visitor::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_artifact_armor_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;vft=4e1d3c;col=50c8b8;td=5a78b0;chd=50c8a8;offset=0;cdOffset=0;validated-hierarchy; map:52662
DATA_CHT_1_COMPGEN(0x0090c8a8, "t_artifact_armor_visitor::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_artifact_armor_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;vft=4e1d3c;col=50c8b8;td=5a78b0;chd=50c8a8;offset=0;cdOffset=0;validated-hierarchy; map:52663
DATA_CHT_1_COMPGEN(0x0090c8b8, "const t_artifact_armor_visitor::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_spell_cost_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;bcd=50c8cc;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52664
DATA_CHT_1_COMPGEN(0x0090c8cc, "t_spell_cost_visitor::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_spell_cost_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;vft=4e1d7c;col=50c900;td=5a7910;chd=50c8f0;offset=0;cdOffset=0;validated-hierarchy; map:52665
DATA_CHT_1_COMPGEN(0x0090c8e4, "t_spell_cost_visitor::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_spell_cost_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;vft=4e1d7c;col=50c900;td=5a7910;chd=50c8f0;offset=0;cdOffset=0;validated-hierarchy; map:52666
DATA_CHT_1_COMPGEN(0x0090c8f0, "t_spell_cost_visitor::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_spell_cost_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;vft=4e1d7c;col=50c900;td=5a7910;chd=50c8f0;offset=0;cdOffset=0;validated-hierarchy; map:52667
DATA_CHT_1_COMPGEN(0x0090c900, "const t_spell_cost_visitor::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_spell_power_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;bcd=50c914;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52668
DATA_CHT_1_COMPGEN(0x0090c914, "t_spell_power_visitor::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_spell_power_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;vft=4e1dbc;col=50c948;td=5a7970;chd=50c938;offset=0;cdOffset=0;validated-hierarchy; map:52669
DATA_CHT_1_COMPGEN(0x0090c92c, "t_spell_power_visitor::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_spell_power_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;vft=4e1dbc;col=50c948;td=5a7970;chd=50c938;offset=0;cdOffset=0;validated-hierarchy; map:52670
DATA_CHT_1_COMPGEN(0x0090c938, "t_spell_power_visitor::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_spell_power_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;vft=4e1dbc;col=50c948;td=5a7970;chd=50c938;offset=0;cdOffset=0;validated-hierarchy; map:52671
DATA_CHT_1_COMPGEN(0x0090c948, "const t_spell_power_visitor::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_skill_power_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;bcd=50c95c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52672
DATA_CHT_1_COMPGEN(0x0090c95c, "t_skill_power_visitor::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_skill_power_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;vft=4e1dfc;col=50c990;td=5a79d0;chd=50c980;offset=0;cdOffset=0;validated-hierarchy; map:52673
DATA_CHT_1_COMPGEN(0x0090c974, "t_skill_power_visitor::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_skill_power_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;vft=4e1dfc;col=50c990;td=5a79d0;chd=50c980;offset=0;cdOffset=0;validated-hierarchy; map:52674
DATA_CHT_1_COMPGEN(0x0090c980, "t_skill_power_visitor::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_skill_power_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;vft=4e1dfc;col=50c990;td=5a79d0;chd=50c980;offset=0;cdOffset=0;validated-hierarchy; map:52675
DATA_CHT_1_COMPGEN(0x0090c990, "const t_skill_power_visitor::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_sum_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;bcd=50c9a4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52676
DATA_CHT_1_COMPGEN(0x0090c9a4, "t_sum_visitor::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_sum_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;vft=4e1e3c;col=50c9d8;td=5a7a30;chd=50c9c8;offset=0;cdOffset=0;validated-hierarchy; map:52677
DATA_CHT_1_COMPGEN(0x0090c9bc, "t_sum_visitor::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_sum_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;vft=4e1e3c;col=50c9d8;td=5a7a30;chd=50c9c8;offset=0;cdOffset=0;validated-hierarchy; map:52678
DATA_CHT_1_COMPGEN(0x0090c9c8, "t_sum_visitor::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_sum_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;vft=4e1e3c;col=50c9d8;td=5a7a30;chd=50c9c8;offset=0;cdOffset=0;validated-hierarchy; map:52679
DATA_CHT_1_COMPGEN(0x0090c9d8, "const t_sum_visitor::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_income_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;bcd=50c9ec;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52680
DATA_CHT_1_COMPGEN(0x0090c9ec, "t_income_visitor::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_income_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;vft=4e1e7c;col=50ca20;td=5a7a88;chd=50ca10;offset=0;cdOffset=0;validated-hierarchy; map:52681
DATA_CHT_1_COMPGEN(0x0090ca04, "t_income_visitor::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_income_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;vft=4e1e7c;col=50ca20;td=5a7a88;chd=50ca10;offset=0;cdOffset=0;validated-hierarchy; map:52682
DATA_CHT_1_COMPGEN(0x0090ca10, "t_income_visitor::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_income_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;vft=4e1e7c;col=50ca20;td=5a7a88;chd=50ca10;offset=0;cdOffset=0;validated-hierarchy; map:52683
DATA_CHT_1_COMPGEN(0x0090ca20, "const t_income_visitor::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_magic_weapon_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;bcd=50ca34;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52684
DATA_CHT_1_COMPGEN(0x0090ca34, "t_magic_weapon_visitor::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_magic_weapon_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;vft=4e1ebc;col=50ca68;td=5a7ae0;chd=50ca58;offset=0;cdOffset=0;validated-hierarchy; map:52685
DATA_CHT_1_COMPGEN(0x0090ca4c, "t_magic_weapon_visitor::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_magic_weapon_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;vft=4e1ebc;col=50ca68;td=5a7ae0;chd=50ca58;offset=0;cdOffset=0;validated-hierarchy; map:52686
DATA_CHT_1_COMPGEN(0x0090ca58, "t_magic_weapon_visitor::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_magic_weapon_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;vft=4e1ebc;col=50ca68;td=5a7ae0;chd=50ca58;offset=0;cdOffset=0;validated-hierarchy; map:52687
DATA_CHT_1_COMPGEN(0x0090ca68, "const t_magic_weapon_visitor::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_terrain_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;bcd=50ca7c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52688
DATA_CHT_1_COMPGEN(0x0090ca7c, "t_terrain_visitor::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_terrain_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;vft=4e1efc;col=50cab0;td=5a7b40;chd=50caa0;offset=0;cdOffset=0;validated-hierarchy; map:52689
DATA_CHT_1_COMPGEN(0x0090ca94, "t_terrain_visitor::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_terrain_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;vft=4e1efc;col=50cab0;td=5a7b40;chd=50caa0;offset=0;cdOffset=0;validated-hierarchy; map:52690
DATA_CHT_1_COMPGEN(0x0090caa0, "t_terrain_visitor::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_terrain_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;vft=4e1efc;col=50cab0;td=5a7b40;chd=50caa0;offset=0;cdOffset=0;validated-hierarchy; map:52691
DATA_CHT_1_COMPGEN(0x0090cab0, "const t_terrain_visitor::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_movement_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;bcd=50cac4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52692
DATA_CHT_1_COMPGEN(0x0090cac4, "t_movement_visitor::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_movement_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;vft=4e1f3c;col=50caf8;td=5a7ba0;chd=50cae8;offset=0;cdOffset=0;validated-hierarchy; map:52693
DATA_CHT_1_COMPGEN(0x0090cadc, "t_movement_visitor::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_movement_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;vft=4e1f3c;col=50caf8;td=5a7ba0;chd=50cae8;offset=0;cdOffset=0;validated-hierarchy; map:52694
DATA_CHT_1_COMPGEN(0x0090cae8, "t_movement_visitor::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_movement_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;vft=4e1f3c;col=50caf8;td=5a7ba0;chd=50cae8;offset=0;cdOffset=0;validated-hierarchy; map:52695
DATA_CHT_1_COMPGEN(0x0090caf8, "const t_movement_visitor::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_resistance_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;bcd=50cb0c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52696
DATA_CHT_1_COMPGEN(0x0090cb0c, "t_resistance_visitor::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_resistance_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;vft=4e1f7c;col=50cb40;td=5a7c00;chd=50cb30;offset=0;cdOffset=0;validated-hierarchy; map:52697
DATA_CHT_1_COMPGEN(0x0090cb24, "t_resistance_visitor::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_resistance_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;vft=4e1f7c;col=50cb40;td=5a7c00;chd=50cb30;offset=0;cdOffset=0;validated-hierarchy; map:52698
DATA_CHT_1_COMPGEN(0x0090cb30, "t_resistance_visitor::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_resistance_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;vft=4e1f7c;col=50cb40;td=5a7c00;chd=50cb30;offset=0;cdOffset=0;validated-hierarchy; map:52699
DATA_CHT_1_COMPGEN(0x0090cb40, "const t_resistance_visitor::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_scroll_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;bcd=50cb54;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52700
DATA_CHT_1_COMPGEN(0x0090cb54, "t_scroll_visitor::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_scroll_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;vft=4e1fbc;col=50cb88;td=5a7c60;chd=50cb78;offset=0;cdOffset=0;validated-hierarchy; map:52701
DATA_CHT_1_COMPGEN(0x0090cb6c, "t_scroll_visitor::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_scroll_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;vft=4e1fbc;col=50cb88;td=5a7c60;chd=50cb78;offset=0;cdOffset=0;validated-hierarchy; map:52702
DATA_CHT_1_COMPGEN(0x0090cb78, "t_scroll_visitor::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_scroll_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;vft=4e1fbc;col=50cb88;td=5a7c60;chd=50cb78;offset=0;cdOffset=0;validated-hierarchy; map:52703
DATA_CHT_1_COMPGEN(0x0090cb88, "const t_scroll_visitor::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_parchment_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;bcd=50cb9c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52704
DATA_CHT_1_COMPGEN(0x0090cb9c, "t_parchment_visitor::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_parchment_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;vft=4e1ffc;col=50cbd0;td=5a7d28;chd=50cbc0;offset=0;cdOffset=0;validated-hierarchy; map:52705
DATA_CHT_1_COMPGEN(0x0090cbb4, "t_parchment_visitor::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_parchment_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;vft=4e1ffc;col=50cbd0;td=5a7d28;chd=50cbc0;offset=0;cdOffset=0;validated-hierarchy; map:52706
DATA_CHT_1_COMPGEN(0x0090cbc0, "t_parchment_visitor::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_parchment_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;vft=4e1ffc;col=50cbd0;td=5a7d28;chd=50cbc0;offset=0;cdOffset=0;validated-hierarchy; map:52707
DATA_CHT_1_COMPGEN(0x0090cbd0, "const t_parchment_visitor::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_discount_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;bcd=50cbe4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52708
DATA_CHT_1_COMPGEN(0x0090cbe4, "t_discount_visitor::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_discount_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;vft=4e203c;col=50cc18;td=5a7d88;chd=50cc08;offset=0;cdOffset=0;validated-hierarchy; map:52709
DATA_CHT_1_COMPGEN(0x0090cbfc, "t_discount_visitor::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_discount_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;vft=4e203c;col=50cc18;td=5a7d88;chd=50cc08;offset=0;cdOffset=0;validated-hierarchy; map:52710
DATA_CHT_1_COMPGEN(0x0090cc08, "t_discount_visitor::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_discount_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;vft=4e203c;col=50cc18;td=5a7d88;chd=50cc08;offset=0;cdOffset=0;validated-hierarchy; map:52711
DATA_CHT_1_COMPGEN(0x0090cc18, "const t_discount_visitor::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_effect_presence_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;bcd=50cc2c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52712
DATA_CHT_1_COMPGEN(0x0090cc2c, "t_effect_presence_visitor::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_effect_presence_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;vft=4e207c;col=50cc60;td=5a7de8;chd=50cc50;offset=0;cdOffset=0;validated-hierarchy; map:52713
DATA_CHT_1_COMPGEN(0x0090cc44, "t_effect_presence_visitor::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_effect_presence_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;vft=4e207c;col=50cc60;td=5a7de8;chd=50cc50;offset=0;cdOffset=0;validated-hierarchy; map:52714
DATA_CHT_1_COMPGEN(0x0090cc50, "t_effect_presence_visitor::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_effect_presence_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;vft=4e207c;col=50cc60;td=5a7de8;chd=50cc50;offset=0;cdOffset=0;validated-hierarchy; map:52715
DATA_CHT_1_COMPGEN(0x0090cc60, "const t_effect_presence_visitor::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_ability_presence_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;bcd=50cc74;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52716
DATA_CHT_1_COMPGEN(0x0090cc74, "t_ability_presence_visitor::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_ability_presence_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;vft=4e20bc;col=50cca8;td=5a7e50;chd=50cc98;offset=0;cdOffset=0;validated-hierarchy; map:52717
DATA_CHT_1_COMPGEN(0x0090cc8c, "t_ability_presence_visitor::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_ability_presence_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;vft=4e20bc;col=50cca8;td=5a7e50;chd=50cc98;offset=0;cdOffset=0;validated-hierarchy; map:52718
DATA_CHT_1_COMPGEN(0x0090cc98, "t_ability_presence_visitor::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_ability_presence_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;vft=4e20bc;col=50cca8;td=5a7e50;chd=50cc98;offset=0;cdOffset=0;validated-hierarchy; map:52719
DATA_CHT_1_COMPGEN(0x0090cca8, "const t_ability_presence_visitor::`RTTI Complete Object Locator'")

// === .data (16 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_artifact_weapon_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;td=5a7848;validated-header; map:58649
DATA_CHT_1_COMPGEN(0x009a7848, "t_artifact_weapon_visitor `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_artifact_armor_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;td=5a78b0;validated-header; map:58650
DATA_CHT_1_COMPGEN(0x009a78b0, "t_artifact_armor_visitor `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_spell_cost_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;td=5a7910;validated-header; map:58651
DATA_CHT_1_COMPGEN(0x009a7910, "t_spell_cost_visitor `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_spell_power_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;td=5a7970;validated-header; map:58652
DATA_CHT_1_COMPGEN(0x009a7970, "t_spell_power_visitor `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_skill_power_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;td=5a79d0;validated-header; map:58653
DATA_CHT_1_COMPGEN(0x009a79d0, "t_skill_power_visitor `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_sum_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;td=5a7a30;validated-header; map:58654
DATA_CHT_1_COMPGEN(0x009a7a30, "t_sum_visitor `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_income_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;td=5a7a88;validated-header; map:58655
DATA_CHT_1_COMPGEN(0x009a7a88, "t_income_visitor `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_magic_weapon_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;td=5a7ae0;validated-header; map:58656
DATA_CHT_1_COMPGEN(0x009a7ae0, "t_magic_weapon_visitor `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_terrain_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;td=5a7b40;validated-header; map:58657
DATA_CHT_1_COMPGEN(0x009a7b40, "t_terrain_visitor `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_movement_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;td=5a7ba0;validated-header; map:58658
DATA_CHT_1_COMPGEN(0x009a7ba0, "t_movement_visitor `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_resistance_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;td=5a7c00;validated-header; map:58659
DATA_CHT_1_COMPGEN(0x009a7c00, "t_resistance_visitor `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_scroll_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;td=5a7c60;validated-header; map:58660
DATA_CHT_1_COMPGEN(0x009a7c60, "t_scroll_visitor `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_parchment_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;td=5a7d28;validated-header; map:58661
DATA_CHT_1_COMPGEN(0x009a7d28, "t_parchment_visitor `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_discount_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;td=5a7d88;validated-header; map:58662
DATA_CHT_1_COMPGEN(0x009a7d88, "t_discount_visitor `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_effect_presence_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;td=5a7de8;validated-header; map:58663
DATA_CHT_1_COMPGEN(0x009a7de8, "t_effect_presence_visitor `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_ability_presence_visitor@?%C:\Work\game\get_artifact_damage_modifier.cpp587811559@@;td=5a7e50;validated-header; map:58664
DATA_CHT_1_COMPGEN(0x009a7e50, "t_ability_presence_visitor `RTTI Type Descriptor'")
