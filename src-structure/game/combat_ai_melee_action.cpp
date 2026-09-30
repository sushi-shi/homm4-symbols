// combat_ai_melee_action.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 37/70 (A:6 B:0 C:0); unaccounted 33; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (64 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:68013; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005b5e50, 0x15, STATIC_INIT_DISPATCH, "combat_ai_melee_action#1")

// name:C; dyninit; see ledger; map:68014
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_ai_melee_action#1")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:68015; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005b5e70, 0x15, STATIC_INIT_DISPATCH, "combat_ai_melee_action#2")

// name:C; dyninit; see ledger; map:68016
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_ai_melee_action#2")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:68017; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005b5e90, 0x15, STATIC_INIT_DISPATCH, "combat_ai_melee_action#3")

// name:C; dyninit; see ledger; map:68018
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_ai_melee_action#3")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:68019; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005b5eb0, 0x15, STATIC_INIT_DISPATCH, "combat_ai_melee_action#4")

// name:C; dyninit; see ledger; map:68020
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_ai_melee_action#4")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:68021; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005b5ed0, 0x10, STATIC_INIT_DISPATCH, "combat_ai_melee_action#5")

// name:C; dyninit; see ledger; map:68022
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_ai_melee_action#5")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:68023; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005b5ee0, 0x15, STATIC_INIT_DISPATCH, "combat_ai_melee_action#6")

// name:C; dyninit; see ledger; map:68024
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_ai_melee_action#6")

// confidence:D; align-order; stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:20165
VA_CHT_1(0x005b5f00, 0x2af)
t_combat_ai_melee_action::t_combat_ai_melee_action(
    t_battlefield& arg_0,
    t_counted_ptr<t_combat_creature> arg_1,
    t_attack_angle const& arg_2,
    bool arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:68025
VA_CHT_1(0x005b61b0, 0x463)
static int get_alternate_move_time(
    t_combat_creature const& arg_0,
    t_map_point_2d const& arg_1,
    t_counted_ptr<t_abstract_combat_object>& arg_2,
    t_map_point_2d& arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:68026
VA_CHT_1(0x005b6640, 0x6c)
static t_abstract_combat_object* get_attackable_obstacle(
    t_combat_creature const& arg_0,
    t_map_point_2d const& arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:20166
VA_CHT_1(0x005b66b0, 0x73)
void t_combat_ai_melee_action::weigh_action(t_combat_ai const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:20167
VA_CHT_1(0x005b6730, 0x4b3)
double t_combat_ai_melee_action::get_action_weight(t_combat_ai const& arg_0, bool arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:68027
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
static double get_zoc_change(
    t_combat_creature const& arg_0,
    t_combat_creature const& arg_1,
    t_attack_angle const& arg_2,
    std::map<t_combat_creature const* const, int, std::less<t_combat_creature const* const>, std::allocator<int>>& arg_3,
    bool arg_4
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:68028
VA_CHT_1(0x005b6c30, 0x1a)
static bool contains_other_members(t_combat_creature_list const& arg_0, t_combat_creature const* arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:68029
VA_CHT_1(0x005b6c50, 0xd1)
static double get_zoc_removal_value(t_combat_creature const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:68030
VA_CHT_1(0x005b6d30, 0x69)
static double get_zoc_add_value(
    t_battlefield& arg_0,
    t_combat_creature_list const& arg_1,
    t_combat_creature const* arg_2
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:20168
VA_CHT_1(0x005b6dd0, 0x60e)
void t_combat_ai_melee_action::perform_action()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:68031
VA_CHT_1(0x005b7420, 0x4d)
static void attack(t_battlefield& arg_0, t_abstract_combat_object* arg_1, t_attack_angle const& arg_2)
{
    // Body unavailable.
}

// name:A; map symbol; map:68032
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
static bool attack_obstacle(t_combat_creature const& arg_0, t_abstract_combat_object& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:68033
VA_CHT_1(0x005b74c0, 0x3cc)
static bool attack_gate(
    t_combat_creature const& arg_0,
    t_combat_creature const& arg_1,
    t_attack_angle const& arg_2,
    double arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:68034
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
static double gate_destruction_value(t_battlefield& arg_0, bool arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:68035
VA_CHT_1(0x005b78b0, 0x23d)
static bool unblock_paths(t_combat_creature& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:68036
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
static bool mark_all_paths(t_isometric_map<bool>& arg_0, t_combat_creature const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:68037
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
static void mark_path_area(
    t_isometric_map<bool>& arg_0,
    t_combat_creature const& arg_1,
    t_map_point_2d const& arg_2
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:68038
VA_CHT_1(0x005b7af0, 0x20)
static void mark_path_cell(
    t_isometric_map<bool>& arg_0,
    t_combat_creature const& arg_1,
    t_map_point_2d const& arg_2
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:68039
VA_CHT_1(0x005b7b10, 0x76)
static bool contains_path(
    t_isometric_map<bool>& arg_0,
    t_combat_creature const& arg_1,
    t_map_point_2d const& arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:68040
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
static void nudge_creatures_on_path(t_combat_creature const& arg_0, t_map_point_2d const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:68041
VA_CHT_1(0x005b7b90, 0x140)
static void nudge_creatures(t_combat_creature const& arg_0, t_map_point_2d const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:20169
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool less_than(t_combat_ai_melee_action& arg_0, t_combat_ai_melee_action& arg_1, t_combat_ai const& arg_2)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:20170
VA_CHT_1(0x005b7cd0, 0x45b)
t_counted_ptr<t_abstract_combat_ai_action> generate_best_melee_action(t_combat_ai& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:68042
VA_CHT_1(0x005b8130, 0x3dd)
static t_counted_ptr<t_combat_ai_melee_action> generate_melee_action(
    t_combat_creature* arg_0,
    t_combat_ai const& arg_1,
    bool arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:68043
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
static int get_move_time(int arg_0, t_combat_creature const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:68044
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
static bool has_creatures_outside_castle(t_battlefield& arg_0, bool arg_1)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:68045; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005b87a0, 0x20, STATIC_INIT_DISPATCH, combat_ai_melee_action)

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:20171
VA_CHT_1_COMPGEN(0x005b6620, 0x1e, VECTOR_DELETING_DTOR, t_combat_ai_melee_action)

// name:A; map symbol; map:20172
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_combat_ai_melee_action)

// name:A; map symbol; map:20173
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_ai_melee_action::~t_combat_ai_melee_action()
{
    // Body unavailable.
}

// name:A; map symbol; map:20174
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_creature const& t_combat_ai::get_actor() const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:20175
VA_CHT_1(0x005b6bf0, 0x39)
t_direction t_combat_creature::get_wait_direction(t_direction arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:20176
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_circle_calculator::t_circle_calculator(t_map_point_2d const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:20177
VA_CHT_1(0x005b8530, 0x36)
t_counted_ptr<t_castle_gate> t_battlefield::get_gate() const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:20178
VA_CHT_1(0x005b7890, 0x20)
int t_combat_path_finder_base::get_row_end(int arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:20179
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_combat_path_finder_base::get_row_start(int arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:20180
VA_CHT_1(0x005b6da0, 0x28)
int t_combat_path_finder_base::get_size() const
{
    // Body unavailable.
}

// name:A; map symbol; map:20181
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_attack_angle const& t_combat_ai_melee_action::get_attack_angle() const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:20182
VA_CHT_1(0x005b7470, 0x48)
t_counted_ptr<t_combat_ai_melee_action> t_combat_creature::get_melee_action() const
{
    // Body unavailable.
}

// name:A; map symbol; map:20183
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_combat_ai_melee_action::get_turns() const
{
    // Body unavailable.
}

// name:A; map symbol; map:20184
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_combat_ai_melee_action::get_unreachable() const
{
    // Body unavailable.
}

// name:A; map symbol; map:20185
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_creature& t_combat_ai::get_actor()
{
    // Body unavailable.
}

// name:A; map symbol; map:20186
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_combat_ai_melee_action>::t_counted_ptr<t_combat_ai_melee_action>(
    t_counted_ptr<t_combat_ai_melee_action> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:20187
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_combat_ai_melee_action>::t_counted_ptr<t_combat_ai_melee_action>(
    t_combat_ai_melee_action* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:20188
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_combat_ai_melee_action>& t_counted_ptr<t_combat_ai_melee_action>::operator=(
    t_combat_ai_melee_action* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:20189
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_ai_melee_action* t_counted_ptr<t_combat_ai_melee_action>::operator t_combat_ai_melee_action*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:20190
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_ai_melee_action* t_counted_ptr<t_combat_ai_melee_action>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:20191
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_ai_melee_action& t_counted_ptr<t_combat_ai_melee_action>::operator*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:20192
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_castle_gate>::t_counted_ptr<t_castle_gate>(t_counted_ptr<t_castle_gate> const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:20193
VA_CHT_1(0x005b73e0, 0x31)
t_counted_ptr<t_abstract_combat_ai_action>::t_counted_ptr<t_abstract_combat_ai_action>(
    t_counted_ptr<t_combat_ai_melee_action> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:20194
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_ai_melee_action* t_counted_ptr<t_combat_ai_melee_action>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:20195
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_combat_ai_action* implicit_cast(t_abstract_combat_ai_action* arg_0)
{
    // Body unavailable.
}

// === .rdata (1 symbols) ===

// confidence:A; rtti-name; map:43905
DATA_CHT_1_COMPGEN(0x008dc0ec, "const t_combat_ai_melee_action::`vftable'")

// === .rdata$r (4 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_combat_ai_melee_action@@;bcd=503970;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50698
DATA_CHT_1_COMPGEN(0x00903970, "t_combat_ai_melee_action::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_combat_ai_melee_action@@;vft=4dc0ec;col=5039a8;td=598cb0;chd=503998;offset=0;cdOffset=0;validated-hierarchy; map:50699
DATA_CHT_1_COMPGEN(0x00903988, "t_combat_ai_melee_action::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_combat_ai_melee_action@@;vft=4dc0ec;col=5039a8;td=598cb0;chd=503998;offset=0;cdOffset=0;validated-hierarchy; map:50700
DATA_CHT_1_COMPGEN(0x00903998, "t_combat_ai_melee_action::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_combat_ai_melee_action@@;vft=4dc0ec;col=5039a8;td=598cb0;chd=503998;offset=0;cdOffset=0;validated-hierarchy; map:50701
DATA_CHT_1_COMPGEN(0x009039a8, "const t_combat_ai_melee_action::`RTTI Complete Object Locator'")

// === .data (1 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_combat_ai_melee_action@@;td=598cb0;validated-header; map:58197
DATA_CHT_1_COMPGEN(0x00998cb0, "t_combat_ai_melee_action `RTTI Type Descriptor'")
