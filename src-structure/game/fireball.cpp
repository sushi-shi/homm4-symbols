// fireball.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\fireball.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 238/384 (A:198 B:16 C:24); unaccounted 146; skipped std 38.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (218 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:65427; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006a9170, 0x15, STATIC_INIT_DISPATCH, "fireball#1")

// name:C; dyninit; see ledger; map:65428
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "fireball#1")

// confidence:A; dyninit-init; owner-conf-C; map:65429; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006a9190, 0x15, STATIC_INIT_DISPATCH, "fireball#2")

// name:C; dyninit; see ledger; map:65430
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "fireball#2")

// confidence:A; dyninit-init; owner-conf-C; map:65431; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006a91b0, 0x15, STATIC_INIT_DISPATCH, "fireball#3")

// name:C; dyninit; see ledger; map:65432
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "fireball#3")

// confidence:A; dyninit-init; owner-conf-C; map:65433; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006a91d0, 0x15, STATIC_INIT_DISPATCH, "fireball#4")

// name:C; dyninit; see ledger; map:65434
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "fireball#4")

// confidence:A; dyninit-init; owner-conf-C; map:65435; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006a91f0, 0x10, STATIC_INIT_DISPATCH, "fireball#5")

// name:C; dyninit; see ledger; map:65436
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "fireball#5")

// confidence:A; dyninit-init; owner-conf-C; map:65437; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006a9200, 0x15, STATIC_INIT_DISPATCH, "fireball#6")

// name:C; dyninit; see ledger; map:65438
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "fireball#6")

// confidence:A; dyninit-init; owner-conf-C; map:65439; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006a9220, 0x1c, STATIC_INIT_DISPATCH, "fireball#7")

// name:C; dyninit; see ledger; map:65440
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "fireball#7")

// confidence:A; dyninit-init; owner-conf-C; map:65441; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006a9240, 0x1c, STATIC_INIT_DISPATCH, "fireball#8")

// name:C; dyninit; see ledger; map:65442
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "fireball#8")

namespace {

// confidence:A; align-order; retn,stable,vptr; map:26085
VA_CHT_1(0x006a9260, 0xec)
t_cloud_animation::t_cloud_animation(t_battlefield& arg_0, t_combat_actor& arg_1)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:26086
VA_CHT_1(0x006a9370, 0x63)
void t_cloud_animation::end_animation()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:26087
VA_CHT_1(0x006a93e0, 0x222)
void t_cloud_animation::on_idle()
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:26088
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_area_spell::t_area_spell(t_battlefield& arg_0, t_spell arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:26089
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_area_spell::ai_cast_spell()
{
    // Body unavailable.
}

// name:A; map symbol; map:26090
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_area_spell::begin_casting()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:26091
VA_CHT_1(0x006a9770, 0x24c)
void t_area_spell::evaluate_target(t_map_point_2d const& arg_0, t_ai_area_target_list& arg_1) const
{
    // Body unavailable.
}

// name:A; map symbol; map:65443
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
static void insert_target(t_ai_area_target_list& arg_0, t_ai_area_target const& arg_1, bool arg_2)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:65444
VA_CHT_1(0x006a99c0, 0x65)
static bool is_better(t_ai_area_target const& arg_0, t_ai_area_target const& arg_1, bool arg_2)
{
    // Body unavailable.
}

// name:A; map symbol; map:65445
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
static bool contains(t_ai_area_target const& arg_0, t_ai_area_target const& arg_1, bool arg_2)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:26092
VA_CHT_1(0x006a9a30, 0x104)
void t_area_spell::evaluate_overlap(
    t_combat_creature const& arg_0,
    t_combat_creature const& arg_1,
    t_ai_area_target_list& arg_2
) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:65446
VA_CHT_1(0x006a9b40, 0x74)
static t_map_rect_2d get_target_extent(t_combat_creature const& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:26093
VA_CHT_1(0x006a9bc0, 0x1f8)
void t_area_spell::evaluate_targets(t_ai_area_target_list& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:26094
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::list<t_counted_ptr<t_abstract_combat_ai_action>, std::allocator<t_counted_ptr<t_abstract_combat_ai_action>>> t_area_spell::generate_combat_ai_action_list(
    t_combat_ai& arg_0
)
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:26095
VA_CHT_1(0x006aa1e0, 0x257)
t_combat_creature_list t_area_spell::get_targets(
    t_counted_ptr<t_combat_creature> arg_0,
    t_map_point_2d const& arg_1
) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:26096
VA_CHT_1(0x006aa440, 0x174)
bool t_area_spell::can_cast(t_map_point_2d const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:26097
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_area_spell::can_cast(t_screen_point const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:26098
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_area_spell::execute(t_combat_creature& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:26099
VA_CHT_1(0x006aa850, 0x3a9)
void t_area_spell::launch(
    t_missile_type arg_0,
    t_counted_ptr<t_combat_creature> arg_1,
    t_map_point_2d arg_2,
    int arg_3,
    bool arg_4
)
{
    // Body unavailable.
}

// name:A; map symbol; map:26100
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_area_spell::execute_mirror_spell(t_counted_ptr<t_combat_creature> arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:26101
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
double t_area_spell::get_square_value(t_map_point_2d const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:26102
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_area_spell::get_map_point(t_screen_point const& arg_0, t_map_point_2d& arg_1) const
{
    // Body unavailable.
}

// name:A; map symbol; map:26103
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_mouse_window* t_area_spell::mouse_move(t_screen_point const& arg_0, std::string& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:26104
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_area_spell::left_click(t_screen_point const& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:26105
VA_CHT_1(0x006ab020, 0x340)
void t_area_spell::place_spell(t_cached_ptr<t_combat_actor_model> arg_0, t_map_point_2d arg_1, bool arg_2)
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:26106
VA_CHT_1(0x006ab360, 0x1bc)
void t_area_spell::impact(
    t_counted_ptr<t_combat_creature> arg_0,
    t_map_point_2d arg_1,
    t_area_spell::t_impact_data arg_2
)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:26107
VA_CHT_1(0x006ab550, 0x89)
int t_area_spell::get_radius() const
{
    // Body unavailable.
}

// name:A; map symbol; map:26108
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_fireball::t_fireball(t_battlefield& arg_0, t_spell arg_1)
{
    // Body unavailable.
}

// confidence:A; align-order; stable,vslot; map:26109
VA_CHT_1(0x006ab5e0, 0x161)
bool t_fireball::cast_on(
    t_counted_ptr<t_combat_creature> arg_0,
    t_counted_ptr<t_combat_creature> arg_1,
    int arg_2,
    bool arg_3
)
{
    // Body unavailable.
}

// confidence:A; align-order; stable,vslot; map:26110
VA_CHT_1(0x006ab750, 0xa0)
void t_fireball::cast(t_counted_ptr<t_combat_creature> arg_0, t_map_point_2d arg_1, int arg_2, bool arg_3)
{
    // Body unavailable.
}

// name:A; map symbol; map:26111
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
double t_fireball::ai_weight(t_combat_creature const& arg_0) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:26112
VA_CHT_1(0x006ab830, 0x9)
double t_fireball::get_cancel_weight(t_combat_creature const& arg_0) const
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:26113
VA_CHT_1(0x006ab840, 0x141)
void t_fireball::place_fireball(t_map_point_2d arg_0, bool arg_1)
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:65447
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// t_fireball::place_fireball$sdtor
// Function body not reconstructed; signature retained as a comment.

// confidence:A; align-order; stable,vslot; map:26114
VA_CHT_1(0x006ab9a0, 0x17)
void t_fireball::show_impact(t_map_point_2d arg_0, bool arg_1)
{
    // Body unavailable.
}

// confidence:A; dyninit-init; owner-conf-C; map:65448; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006ab9c0, 0x1c, STATIC_INIT_DISPATCH, "fireball#9")

// name:C; dyninit; see ledger; map:65449
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "fireball#9")

namespace {

// name:A; map symbol; map:26115
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_inferno::t_inferno(t_battlefield& arg_0, t_spell arg_1)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:26116
VA_CHT_1(0x006aba90, 0x6)
int t_inferno::get_radius() const
{
    // Body unavailable.
}

// confidence:A; align-order; stable,vslot; map:26117
VA_CHT_1(0x006abaa0, 0x7e)
void t_inferno::show_impact(t_map_point_2d arg_0, bool arg_1)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:A; dyninit-init; owner-conf-C; map:65450; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006abb20, 0x1c, STATIC_INIT_DISPATCH, "fireball#10")

// name:C; dyninit; see ledger; map:65451
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "fireball#10")

namespace {

// name:A; map symbol; map:26118
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_armageddon::t_armageddon(t_battlefield& arg_0, t_spell arg_1)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:26119
VA_CHT_1(0x006abc30, 0xb)
void t_armageddon::ai_cast_spell()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:26120
VA_CHT_1(0x006abc40, 0x257)
bool t_armageddon::begin_casting()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:26121
VA_CHT_1(0x006abea0, 0x15f)
void t_armageddon::execute(t_combat_creature& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:26122
VA_CHT_1(0x006ac000, 0x271)
std::list<t_counted_ptr<t_abstract_combat_ai_action>, std::allocator<t_counted_ptr<t_abstract_combat_ai_action>>> t_armageddon::generate_combat_ai_action_list(
    t_combat_ai& arg_0
)
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:26123
VA_CHT_1(0x006ac280, 0x1b3)
void t_armageddon::impact(t_counted_ptr<t_combat_creature> arg_0, t_map_point_2d arg_1, bool arg_2)
{
    // Body unavailable.
}

// name:A; map symbol; map:26124
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_fireball_releaser::t_fireball_releaser(t_battlefield& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:26125
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_fireball_releaser::add(t_map_point_2d const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:26126
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_fireball_releaser::set(t_armageddon* arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:26127
VA_CHT_1(0x006ac4d0, 0x30e)
void t_fireball_releaser::on_idle()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:26128
VA_CHT_1(0x006ac7e0, 0x162)
t_map_point_3d t_fireball_releaser::compute_origin(
    t_map_point_3d const& arg_0,
    t_map_point_3d const& arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:26129
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_fireball_releaser::start()
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:A; dyninit-init; owner-conf-C; map:65452; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006ac950, 0x1c, STATIC_INIT_DISPATCH, "fireball#11")

// name:C; dyninit; see ledger; map:65453
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "fireball#11")

namespace {

// name:A; map symbol; map:26130
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cloud_of_confusion::t_cloud_of_confusion(t_battlefield& arg_0, t_spell arg_1)
{
    // Body unavailable.
}

// confidence:A; align-order; vslot; map:26131
VA_CHT_1(0x006aca20, 0x126)
bool t_cloud_of_confusion::cast_on(
    t_counted_ptr<t_combat_creature> arg_0,
    t_counted_ptr<t_combat_creature> arg_1,
    int arg_2,
    bool arg_3
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:26132
VA_CHT_1(0x006acb50, 0xe3)
double t_cloud_of_confusion::ai_weight(t_combat_creature const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:26133
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
double t_cloud_of_confusion::get_cancel_weight(t_combat_creature const& arg_0) const
{
    // Body unavailable.
}

// confidence:A; align-order; stable,vslot; map:26134
VA_CHT_1(0x006acc40, 0x9a)
void t_cloud_of_confusion::cast(
    t_counted_ptr<t_combat_creature> arg_0,
    t_map_point_2d arg_1,
    int arg_2,
    bool arg_3
)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:A; dyninit-init; owner-conf-C; map:65454; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006acd10, 0x11, STATIC_INIT_DISPATCH, "fireball#12")

// confidence:B; dyninit-ctor; owner-conf-C; map:65455; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006acd30, 0xd1, STATIC_CTOR, "fireball#12")

// name:C; dyninit; see ledger; map:65456
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "fireball#12")

// confidence:B; dyninit-dtor; owner-conf-C; map:65457; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006ace10, 0xa, STATIC_DTOR, "fireball#12")

namespace {

// confidence:A; align-order; stable,vslot; map:26135
VA_CHT_1(0x006ace20, 0x3f)
void t_cloud_of_confusion::show_impact(t_map_point_2d arg_0, bool arg_1)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:A; dyninit-init; owner-conf-C; map:65458; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006ace60, 0x1c, STATIC_INIT_DISPATCH, "fireball#13")

// name:C; dyninit; see ledger; map:65459
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "fireball#13")

namespace {

// name:A; map symbol; map:26136
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_choking_gas::t_choking_gas(t_battlefield& arg_0, t_spell arg_1)
{
    // Body unavailable.
}

// confidence:A; align-order; vslot; map:26137
VA_CHT_1(0x006acf30, 0x183)
bool t_choking_gas::cast_on(
    t_counted_ptr<t_combat_creature> arg_0,
    t_counted_ptr<t_combat_creature> arg_1,
    int arg_2,
    bool arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:26138
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
double t_choking_gas::ai_weight(t_combat_creature const& arg_0) const
{
    // Body unavailable.
}

// confidence:A; align-order; vslot; map:26139
VA_CHT_1(0x006ad0c0, 0x141)
void t_choking_gas::show_impact(t_map_point_2d arg_0, bool arg_1)
{
    // Body unavailable.
}

} // anonymous namespace

// name:B; dyninit; see ledger; map:65460
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// t_choking_gas::show_impact$sdtor
// Function body not reconstructed; signature retained as a comment.

// confidence:A; dyninit-init; owner-conf-C; map:65461; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006ad220, 0x1c, STATIC_INIT_DISPATCH, "fireball#14")

// name:C; dyninit; see ledger; map:65462
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "fireball#14")

namespace {

// name:A; map symbol; map:26140
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cloud_of_despair::t_cloud_of_despair(t_battlefield& arg_0, t_spell arg_1)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vslot; map:26141
VA_CHT_1(0x006ad240, 0x1e)
double t_cloud_of_despair::ai_weight(t_combat_creature const& arg_0) const
{
    // Body unavailable.
}

// confidence:A; align-order; vslot; map:26142
VA_CHT_1(0x006ad2f0, 0x3f)
void t_cloud_of_despair::show_impact(t_map_point_2d arg_0, bool arg_1)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:A; dyninit-tinit; owner-conf-B; map:65463; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006ae020, 0x20, STATIC_INIT_DISPATCH, fireball)

// confidence:A; align-band; retn,stable,vslot; map:26143
VA_CHT_1_COMPGEN(0x006a9350, 0x1e, VECTOR_DELETING_DTOR, t_cloud_animation)

// name:A; map symbol; map:26144
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_cloud_animation)

namespace {

// name:A; map symbol; map:26145
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cloud_animation::~t_cloud_animation()
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:26146
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_area_spell)

// name:A; map symbol; map:26147
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_area_spell)

// name:A; map symbol; map:26148
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_area_spell::~t_area_spell()
{
    // Body unavailable.
}

// confidence:C; align-band; retn; map:26149
VA_CHT_1(0x006acea0, 0x89)
t_ai_area_target::t_ai_area_target()
{
    // Body unavailable.
}

// name:A; map symbol; map:26150
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_ai_area_target::~t_ai_area_target()
{
    // Body unavailable.
}

// name:A; map symbol; map:26151
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_ai_spell_action::t_combat_ai_spell_action(
    t_battlefield& arg_0,
    t_counted_ptr<t_combat_spell> arg_1,
    double arg_2
)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:26152
VA_CHT_1_COMPGEN(0x006aa160, 0x1e, SCALAR_DELETING_DTOR, t_combat_ai_spell_action)

// name:A; map symbol; map:26153
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_combat_ai_spell_action)

// name:A; map symbol; map:26154
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_ai_spell_action::~t_combat_ai_spell_action()
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:26155
VA_CHT_1(0x006acce0, 0x2f)
t_ai_area_target_list::t_ai_area_target_list()
{
    // Body unavailable.
}

// name:A; map symbol; map:26156
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_ai_area_target_list::~t_ai_area_target_list()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:26157
VA_CHT_1_COMPGEN(0x006ab530, 0x1e, SCALAR_DELETING_DTOR, t_fireball)

// name:A; map symbol; map:26158
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_fireball)

// name:A; map symbol; map:26159
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_fireball::~t_fireball()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:26160
VA_CHT_1_COMPGEN(0x006ab9e0, 0x1e, SCALAR_DELETING_DTOR, t_inferno)

// name:A; map symbol; map:26161
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_inferno)

namespace {

// name:A; map symbol; map:26162
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_inferno::~t_inferno()
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:A; align-band; retn,stable,vslot; map:26163
VA_CHT_1_COMPGEN(0x006abb40, 0x1e, VECTOR_DELETING_DTOR, t_armageddon)

// name:A; map symbol; map:26164
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_armageddon)

namespace {

// name:A; map symbol; map:26165
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_fireball_releaser::~t_fireball_releaser()
{
    // Body unavailable.
}

// name:A; map symbol; map:26166
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_armageddon::~t_armageddon()
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:A; align-band; retn,stable,vslot; map:26167
VA_CHT_1_COMPGEN(0x006ac440, 0x1e, SCALAR_DELETING_DTOR, t_fireball_releaser)

// name:A; map symbol; map:26168
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_fireball_releaser)

// confidence:C; align-band; retn,stable; map:26169
VA_CHT_1(0x006ad3c0, 0x41)
t_map_point_3d operator/(t_map_point_3d const& arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:26170
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_point_3d& t_map_point_3d::operator/=(int arg_0)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:26171
VA_CHT_1_COMPGEN(0x006ac970, 0x1e, VECTOR_DELETING_DTOR, t_cloud_of_confusion)

// name:A; map symbol; map:26172
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_cloud_of_confusion)

namespace {

// name:A; map symbol; map:26173
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cloud_of_confusion::~t_cloud_of_confusion()
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:A; align-band; retn,stable,vslot; map:26174
VA_CHT_1_COMPGEN(0x006ace80, 0x1e, VECTOR_DELETING_DTOR, t_choking_gas)

// name:A; map symbol; map:26175
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_choking_gas)

namespace {

// name:A; map symbol; map:26176
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_choking_gas::~t_choking_gas()
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:26177
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_cloud_of_despair)

// name:A; map symbol; map:26178
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_cloud_of_despair)

namespace {

// name:A; map symbol; map:26179
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cloud_of_despair::~t_cloud_of_despair()
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:26215
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_counted_idle_processor>::t_counted_ptr<t_counted_idle_processor>(
    t_counted_idle_processor* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:26216
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_spell_registration<t_fireball>::t_combat_spell_registration<t_fireball>(t_spell arg_0)
{
    // Body unavailable.
}

// confidence:C; align-band; retn; map:26217
VA_CHT_1(0x006ad450, 0x7b)
t_handler_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data> bound_handler(
    t_area_spell& arg_0,
    void (t_area_spell::*)(t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:26218
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d> add_3rd_argument(
    t_handler_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data> arg_0,
    t_area_spell::t_impact_data arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:26219
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>::~t_handler_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:26220
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>>::~t_counted_ptr<t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:26221
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_spell_registration<t_inferno>::t_combat_spell_registration<t_inferno>(t_spell arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:26222
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_spell_registration<t_armageddon>::t_combat_spell_registration<t_armageddon>(t_spell arg_0)
{
    // Body unavailable.
}

// confidence:C; align-band; retn; map:26223
VA_CHT_1(0x006ad840, 0x57)
t_handler_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, bool> bound_handler(
    t_armageddon& arg_0,
    void (t_armageddon::*)(t_counted_ptr<t_combat_creature>, t_map_point_2d, bool)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:26224
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d> add_3rd_argument(
    t_handler_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, bool> arg_0,
    bool arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:26225
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>::~t_handler_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:26226
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>>::~t_counted_ptr<t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:26227
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_spell_registration<t_cloud_of_confusion>::t_combat_spell_registration<t_cloud_of_confusion>(
    t_spell arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:26228
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_spell_registration<t_choking_gas>::t_combat_spell_registration<t_choking_gas>(t_spell arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:26229
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_spell_registration<t_cloud_of_despair>::t_combat_spell_registration<t_cloud_of_despair>(
    t_spell arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:26232
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_spell_factory<t_fireball>::t_spell_factory<t_fireball>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:26233
VA_CHT_1(0x006ad530, 0x80)
t_combat_spell* t_spell_factory<t_fireball>::create(t_battlefield& arg_0, t_spell arg_1) const
{
    // Body unavailable.
}

// name:A; map symbol; map:26234
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_spell_factory<t_inferno>::t_spell_factory<t_inferno>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:26235
VA_CHT_1(0x006ad6e0, 0x80)
t_combat_spell* t_spell_factory<t_inferno>::create(t_battlefield& arg_0, t_spell arg_1) const
{
    // Body unavailable.
}

// name:A; map symbol; map:26236
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_spell_factory<t_armageddon>::t_spell_factory<t_armageddon>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:26237
VA_CHT_1(0x006ad760, 0xd7)
t_combat_spell* t_spell_factory<t_armageddon>::create(t_battlefield& arg_0, t_spell arg_1) const
{
    // Body unavailable.
}

// name:A; map symbol; map:26238
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_spell_factory<t_cloud_of_confusion>::t_spell_factory<t_cloud_of_confusion>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:26239
VA_CHT_1(0x006ad960, 0x80)
t_combat_spell* t_spell_factory<t_cloud_of_confusion>::create(t_battlefield& arg_0, t_spell arg_1) const
{
    // Body unavailable.
}

// name:A; map symbol; map:26240
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_spell_factory<t_choking_gas>::t_spell_factory<t_choking_gas>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:26241
VA_CHT_1(0x006ad9e0, 0x80)
t_combat_spell* t_spell_factory<t_choking_gas>::create(t_battlefield& arg_0, t_spell arg_1) const
{
    // Body unavailable.
}

// name:A; map symbol; map:26242
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_spell_factory<t_cloud_of_despair>::t_spell_factory<t_cloud_of_despair>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:26243
VA_CHT_1(0x006ada60, 0x80)
t_combat_spell* t_spell_factory<t_cloud_of_despair>::create(t_battlefield& arg_0, t_spell arg_1) const
{
    // Body unavailable.
}

// name:A; map symbol; map:26244
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_ai_area_target)

// confidence:C; align-band; retn,stable; map:26245
VA_CHT_1(0x006ad5b0, 0x57)
t_ai_area_target::t_ai_area_target(t_ai_area_target const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:26246
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>::t_handler_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>(
    t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:26247
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>* t_handler_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>::operator t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:26248
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>::t_handler_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>(
    t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:26249
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>* t_handler_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>::operator t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:26250
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_3<t_area_spell, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>::t_bound_handler_3<t_area_spell, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>(
    t_area_spell& arg_0,
    void (t_area_spell::*)(t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data)
)
{
    // Body unavailable.
}

// confidence:A; align-band; stable,vslot; map:26251
VA_CHT_1(0x006adbc0, 0x7c)
void t_bound_handler_3<t_area_spell, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>::operator()(
    t_counted_ptr<t_combat_creature> arg_0,
    t_map_point_2d arg_1,
    t_area_spell::t_impact_data arg_2
)
{
    // Body unavailable.
}

// confidence:A; align-band; stable,vptr; map:26252
VA_CHT_1(0x006ad610, 0xc2)
t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>::t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>(
    t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>* arg_0,
    t_area_spell::t_impact_data arg_1
)
{
    // Body unavailable.
}

// confidence:A; align-band; stable,vslot; map:26253
VA_CHT_1(0x006adc40, 0xcd)
void t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>::operator()(
    t_counted_ptr<t_combat_creature> arg_0,
    t_map_point_2d arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:26254
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_3<t_armageddon, t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>::t_bound_handler_3<t_armageddon, t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>(
    t_armageddon& arg_0,
    void (t_armageddon::*)(t_counted_ptr<t_combat_creature>, t_map_point_2d, bool)
)
{
    // Body unavailable.
}

// confidence:A; align-band; stable,vslot; map:26255
VA_CHT_1(0x006add10, 0x77)
void t_bound_handler_3<t_armageddon, t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>::operator()(
    t_counted_ptr<t_combat_creature> arg_0,
    t_map_point_2d arg_1,
    bool arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:26256
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>::t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>(
    t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>* arg_0,
    bool arg_1
)
{
    // Body unavailable.
}

// confidence:A; align-band; stable,vslot; map:26257
VA_CHT_1(0x006add90, 0xce)
void t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>::operator()(
    t_counted_ptr<t_combat_creature> arg_0,
    t_map_point_2d arg_1
)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:26258
VA_CHT_1_COMPGEN(0x006ade60, 0x1e, VECTOR_DELETING_DTOR, "t_bound_handler_3<t_area_spell, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>")

// name:A; map symbol; map:26259
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_3<t_area_spell, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>")

// confidence:C; align-band; retn,stable; map:26260
VA_CHT_1(0x006adfc0, 0x58)
t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>::t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>(

)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:26261
VA_CHT_1_COMPGEN(0x006adea0, 0x1e, VECTOR_DELETING_DTOR, "t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>")

// name:A; map symbol; map:26262
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>")

// name:A; map symbol; map:26263
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_3<t_armageddon, t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>")

// name:A; map symbol; map:26264
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_3<t_armageddon, t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>")

// confidence:C; align-band; retn,stable; map:26265
VA_CHT_1(0x006aa180, 0x51)
t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>::t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>(

)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:26266
VA_CHT_1_COMPGEN(0x006adee0, 0x1e, VECTOR_DELETING_DTOR, "t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>")

// name:A; map symbol; map:26267
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>")

// name:A; map symbol; map:26268
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_3<t_area_spell, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>::~t_bound_handler_3<t_area_spell, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>(

)
{
    // Body unavailable.
}

// confidence:C; align-band; retn; map:26269
VA_CHT_1(0x006aba00, 0x89)
t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>::~t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>(

)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:26270
VA_CHT_1(0x006adf00, 0x21)
t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>::~t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>(

)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:26271
VA_CHT_1_COMPGEN(0x006ade80, 0x20, VECTOR_DELETING_DTOR, "t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>")

// name:A; map symbol; map:26272
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>")

// name:A; map symbol; map:26273
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>")

// name:A; map symbol; map:26274
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>")

// name:A; map symbol; map:26275
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>::t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:26276
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>::~t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:26277
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_3<t_armageddon, t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>::~t_bound_handler_3<t_armageddon, t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>(

)
{
    // Body unavailable.
}

// confidence:C; align-band; retn; map:26278
VA_CHT_1(0x006ac990, 0x89)
t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>::~t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>(

)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:26279
VA_CHT_1(0x006adf90, 0x21)
t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>::~t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>(

)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:26280
VA_CHT_1_COMPGEN(0x006adec0, 0x20, SCALAR_DELETING_DTOR, "t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>")

// name:A; map symbol; map:26281
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>")

// name:A; map symbol; map:26282
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>")

// name:A; map symbol; map:26283
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>")

// name:A; map symbol; map:26284
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>::t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:26285
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>::~t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:26286
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_handler_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>::operator()(
    t_counted_ptr<t_combat_creature> arg_0,
    t_map_point_2d arg_1,
    t_area_spell::t_impact_data arg_2
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:26287
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_handler_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>::operator()(
    t_counted_ptr<t_combat_creature> arg_0,
    t_map_point_2d arg_1,
    bool arg_2
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:26288
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>>::t_counted_ptr<t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>>(
    t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:26289
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>* t_counted_ptr<t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>>::operator t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:26290
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>& t_counted_ptr<t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>>::operator*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:26291
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>>::t_counted_ptr<t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>>(
    t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:26292
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>* t_counted_ptr<t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>>::operator t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:26293
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>& t_counted_ptr<t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>>::operator*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:26294
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>")

// name:A; map symbol; map:26295
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>")

// name:A; map symbol; map:26296
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_fireball_releaser)

// confidence:C; align-order; stable; map:26297
VA_CHT_1_COMPGEN(0x006ae050, 0x8, VECTOR_DELETING_DTOR, "t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>")

// confidence:C; align-order; stable; map:26298
VA_CHT_1_COMPGEN(0x006ae060, 0x8, VECTOR_DELETING_DTOR, "t_bound_handler_3<t_area_spell, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>")

// confidence:C; align-order; stable; map:26299
VA_CHT_1_COMPGEN(0x006ae070, 0x8, VECTOR_DELETING_DTOR, "t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>")

// confidence:C; align-order; stable; map:26300
VA_CHT_1_COMPGEN(0x006ae080, 0x8, VECTOR_DELETING_DTOR, t_cloud_animation)

// confidence:C; align-order; stable; map:26301
VA_CHT_1_COMPGEN(0x006ae090, 0x8, VECTOR_DELETING_DTOR, t_cloud_animation)

// confidence:C; align-order; stable; map:26302
VA_CHT_1_COMPGEN(0x006ae0a0, 0x8, VECTOR_DELETING_DTOR, "t_bound_handler_3<t_armageddon, t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>")

// === .rdata (33 symbols) ===

// confidence:B; rtti-order; map:44488
DATA_CHT_1_COMPGEN(0x008e1554, "const t_cloud_animation::`vftable'")

// confidence:A; rtti-name; map:44489
DATA_CHT_1_COMPGEN(0x008e1564, "const t_cloud_animation::`vftable'{for `t_idle_processor'}")

// confidence:B; rtti-order; map:44490
DATA_CHT_1_COMPGEN(0x008e1570, "const t_cloud_animation::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:44491
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_area_spell::`vftable'")

// confidence:A; rtti-name; map:44492
DATA_CHT_1_COMPGEN(0x008e1578, "const t_combat_ai_spell_action::`vftable'")

// confidence:A; rtti-name; map:44493
DATA_CHT_1_COMPGEN(0x008e158c, "const t_fireball::`vftable'")

// confidence:A; rtti-name; map:44494
DATA_CHT_1_COMPGEN(0x008e15e4, "const t_inferno::`vftable'")

// confidence:A; rtti-name; map:44495
DATA_CHT_1_COMPGEN(0x008e163c, "const t_armageddon::`vftable'")

// confidence:A; rtti-name; map:44496
DATA_CHT_1_COMPGEN(0x008e1688, "const t_fireball_releaser::`vftable'{for `t_counted_animation'}")

// confidence:B; rtti-order; map:44497
DATA_CHT_1_COMPGEN(0x008e1698, "const t_fireball_releaser::`vftable'{for `t_idle_processor'}")

// confidence:A; rtti-name; map:44498
DATA_CHT_1_COMPGEN(0x008e16bc, "const t_cloud_of_confusion::`vftable'")

// confidence:A; rtti-name; map:44499
DATA_CHT_1_COMPGEN(0x008e1714, "const t_choking_gas::`vftable'")

// confidence:A; rtti-name; map:44500
DATA_CHT_1_COMPGEN(0x008e176c, "const t_cloud_of_despair::`vftable'")

// confidence:A; rtti-name; map:44501
DATA_CHT_1_COMPGEN(0x008e154c, "const t_spell_factory<t_fireball>::`vftable'")

// confidence:A; rtti-name; map:44502
DATA_CHT_1_COMPGEN(0x008e15d8, "const t_spell_factory<t_inferno>::`vftable'")

// confidence:A; rtti-name; map:44503
DATA_CHT_1_COMPGEN(0x008e1630, "const t_spell_factory<t_armageddon>::`vftable'")

// confidence:A; rtti-name; map:44504
DATA_CHT_1_COMPGEN(0x008e16b4, "const t_spell_factory<t_cloud_of_confusion>::`vftable'")

// confidence:A; rtti-name; map:44505
DATA_CHT_1_COMPGEN(0x008e1708, "const t_spell_factory<t_choking_gas>::`vftable'")

// confidence:A; rtti-name; map:44506
DATA_CHT_1_COMPGEN(0x008e1760, "const t_spell_factory<t_cloud_of_despair>::`vftable'")

// confidence:A; rtti-name; map:44507
DATA_CHT_1_COMPGEN(0x008e17b8, "const t_bound_handler_3<t_area_spell, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>::`vftable'{for `t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>'}")

// confidence:B; rtti-order; map:44508
DATA_CHT_1_COMPGEN(0x008e17c4, "const t_bound_handler_3<t_area_spell, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:44509
DATA_CHT_1_COMPGEN(0x008e17d8, "const t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>::`vftable'{for `t_abstract_function_2<void, t_counted_ptr<t_combat_creature>, t_map_point_2d>'}")

// confidence:B; rtti-order; map:44510
DATA_CHT_1_COMPGEN(0x008e17e4, "const t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:44511
DATA_CHT_1_COMPGEN(0x008e17ec, "const t_bound_handler_3<t_armageddon, t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>::`vftable'{for `t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>'}")

// confidence:B; rtti-order; map:44512
DATA_CHT_1_COMPGEN(0x008e17f8, "const t_bound_handler_3<t_armageddon, t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:44513
DATA_CHT_1_COMPGEN(0x008e180c, "const t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>::`vftable'{for `t_abstract_function_2<void, t_counted_ptr<t_combat_creature>, t_map_point_2d>'}")

// confidence:B; rtti-order; map:44514
DATA_CHT_1_COMPGEN(0x008e1818, "const t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:44515
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>::`vftable'{for `t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>'}")

// name:A; map symbol; map:44516
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:44517
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>::`vftable'{for `t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>'}")

// name:A; map symbol; map:44518
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:44519
DATA_CHT_1_COMPGEN(0x008e17cc, "const t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>::`vftable'")

// confidence:A; rtti-name; map:44520
DATA_CHT_1_COMPGEN(0x008e1800, "const t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>::`vftable'")

// === .rdata$r (109 symbols) ===

// name:A; map symbol; map:52457
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_cloud_animation::`RTTI Complete Object Locator'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_cloud_animation@?%C:\Work\game\fireball.cpp2918831506@@;vft=4e1564;col=50baac;td=5a4670;chd=50baf8;offset=8;cdOffset=0;validated-hierarchy; map:52458
DATA_CHT_1_COMPGEN(0x0090baac, "const t_cloud_animation::`RTTI Complete Object Locator'{for `t_idle_processor'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_cloud_animation@?%C:\Work\game\fireball.cpp2918831506@@;bcd=50bac0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52459
DATA_CHT_1_COMPGEN(0x0090bac0, "t_cloud_animation::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_cloud_animation@?%C:\Work\game\fireball.cpp2918831506@@;vft=4e1564;col=50baac;td=5a4670;chd=50baf8;offset=8;cdOffset=0;validated-hierarchy; map:52460
DATA_CHT_1_COMPGEN(0x0090bad8, "t_cloud_animation::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_cloud_animation@?%C:\Work\game\fireball.cpp2918831506@@;vft=4e1564;col=50baac;td=5a4670;chd=50baf8;offset=8;cdOffset=0;validated-hierarchy; map:52461
DATA_CHT_1_COMPGEN(0x0090baf8, "t_cloud_animation::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:52462
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_cloud_animation::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_area_spell@@;bcd=50bb1c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52463
DATA_CHT_1_COMPGEN(0x0090bb1c, "t_area_spell::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// name:A; map symbol; map:52464
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_area_spell::`RTTI Base Class Array'")

// name:A; map symbol; map:52465
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_area_spell::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:52466
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_area_spell::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_combat_ai_spell_action@@;bcd=50bb34;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52467
DATA_CHT_1_COMPGEN(0x0090bb34, "t_combat_ai_spell_action::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_combat_ai_spell_action@@;vft=4e1578;col=50bb70;td=5a46d4;chd=50bb60;offset=0;cdOffset=0;validated-hierarchy; map:52468
DATA_CHT_1_COMPGEN(0x0090bb4c, "t_combat_ai_spell_action::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_combat_ai_spell_action@@;vft=4e1578;col=50bb70;td=5a46d4;chd=50bb60;offset=0;cdOffset=0;validated-hierarchy; map:52469
DATA_CHT_1_COMPGEN(0x0090bb60, "t_combat_ai_spell_action::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_combat_ai_spell_action@@;vft=4e1578;col=50bb70;td=5a46d4;chd=50bb60;offset=0;cdOffset=0;validated-hierarchy; map:52470
DATA_CHT_1_COMPGEN(0x0090bb70, "const t_combat_ai_spell_action::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_fireball@@;bcd=50bb84;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52471
DATA_CHT_1_COMPGEN(0x0090bb84, "t_fireball::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_fireball@@;vft=4e158c;col=50bbc0;td=5a46fc;chd=50bbb0;offset=0;cdOffset=0;validated-hierarchy; map:52472
DATA_CHT_1_COMPGEN(0x0090bb9c, "t_fireball::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_fireball@@;vft=4e158c;col=50bbc0;td=5a46fc;chd=50bbb0;offset=0;cdOffset=0;validated-hierarchy; map:52473
DATA_CHT_1_COMPGEN(0x0090bbb0, "t_fireball::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_fireball@@;vft=4e158c;col=50bbc0;td=5a46fc;chd=50bbb0;offset=0;cdOffset=0;validated-hierarchy; map:52474
DATA_CHT_1_COMPGEN(0x0090bbc0, "const t_fireball::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_inferno@?%C:\Work\game\fireball.cpp2918831506@@;bcd=50bc1c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52475
DATA_CHT_1_COMPGEN(0x0090bc1c, "t_inferno::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_inferno@?%C:\Work\game\fireball.cpp2918831506@@;vft=4e15e4;col=50bc5c;td=5a477c;chd=50bc4c;offset=0;cdOffset=0;validated-hierarchy; map:52476
DATA_CHT_1_COMPGEN(0x0090bc34, "t_inferno::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_inferno@?%C:\Work\game\fireball.cpp2918831506@@;vft=4e15e4;col=50bc5c;td=5a477c;chd=50bc4c;offset=0;cdOffset=0;validated-hierarchy; map:52477
DATA_CHT_1_COMPGEN(0x0090bc4c, "t_inferno::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_inferno@?%C:\Work\game\fireball.cpp2918831506@@;vft=4e15e4;col=50bc5c;td=5a477c;chd=50bc4c;offset=0;cdOffset=0;validated-hierarchy; map:52478
DATA_CHT_1_COMPGEN(0x0090bc5c, "const t_inferno::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_armageddon@?%C:\Work\game\fireball.cpp2918831506@@;bcd=50bd50;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52479
DATA_CHT_1_COMPGEN(0x0090bd50, "t_armageddon::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_armageddon@?%C:\Work\game\fireball.cpp2918831506@@;vft=4e163c;col=50bd90;td=5a4860;chd=50bd80;offset=0;cdOffset=0;validated-hierarchy; map:52480
DATA_CHT_1_COMPGEN(0x0090bd68, "t_armageddon::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_armageddon@?%C:\Work\game\fireball.cpp2918831506@@;vft=4e163c;col=50bd90;td=5a4860;chd=50bd80;offset=0;cdOffset=0;validated-hierarchy; map:52481
DATA_CHT_1_COMPGEN(0x0090bd80, "t_armageddon::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_armageddon@?%C:\Work\game\fireball.cpp2918831506@@;vft=4e163c;col=50bd90;td=5a4860;chd=50bd80;offset=0;cdOffset=0;validated-hierarchy; map:52482
DATA_CHT_1_COMPGEN(0x0090bd90, "const t_armageddon::`RTTI Complete Object Locator'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_fireball_releaser@?%C:\Work\game\fireball.cpp2918831506@@;vft=4e1688;col=50bd3c;td=5a4818;chd=50bd2c;offset=32;cdOffset=0;validated-hierarchy; map:52483
DATA_CHT_1_COMPGEN(0x0090bd3c, "const t_fireball_releaser::`RTTI Complete Object Locator'{for `t_counted_animation'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_combat_action_message_displayer@@;bcd=50bccc;pmd=32,-1,0;attributes=0;validated-hierarchy-link; map:52484
DATA_CHT_1_COMPGEN(0x0090bccc, "t_combat_action_message_displayer::`RTTI Base Class Descriptor at (32, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_counted_animation@@;bcd=50bce4;pmd=32,-1,0;attributes=0;validated-hierarchy-link; map:52485
DATA_CHT_1_COMPGEN(0x0090bce4, "t_counted_animation::`RTTI Base Class Descriptor at (32, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_fireball_releaser@?%C:\Work\game\fireball.cpp2918831506@@;bcd=50bcfc;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52486
DATA_CHT_1_COMPGEN(0x0090bcfc, "t_fireball_releaser::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_fireball_releaser@?%C:\Work\game\fireball.cpp2918831506@@;vft=4e1688;col=50bd3c;td=5a4818;chd=50bd2c;offset=32;cdOffset=0;validated-hierarchy; map:52487
DATA_CHT_1_COMPGEN(0x0090bd14, "t_fireball_releaser::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_fireball_releaser@?%C:\Work\game\fireball.cpp2918831506@@;vft=4e1688;col=50bd3c;td=5a4818;chd=50bd2c;offset=32;cdOffset=0;validated-hierarchy; map:52488
DATA_CHT_1_COMPGEN(0x0090bd2c, "t_fireball_releaser::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:52489
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_fireball_releaser::`RTTI Complete Object Locator'{for `t_idle_processor'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_cloud_of_confusion@?%C:\Work\game\fireball.cpp2918831506@@;bcd=50bdec;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52490
DATA_CHT_1_COMPGEN(0x0090bdec, "t_cloud_of_confusion::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_cloud_of_confusion@?%C:\Work\game\fireball.cpp2918831506@@;vft=4e16bc;col=50be28;td=5a4908;chd=50be18;offset=0;cdOffset=0;validated-hierarchy; map:52491
DATA_CHT_1_COMPGEN(0x0090be04, "t_cloud_of_confusion::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_cloud_of_confusion@?%C:\Work\game\fireball.cpp2918831506@@;vft=4e16bc;col=50be28;td=5a4908;chd=50be18;offset=0;cdOffset=0;validated-hierarchy; map:52492
DATA_CHT_1_COMPGEN(0x0090be18, "t_cloud_of_confusion::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_cloud_of_confusion@?%C:\Work\game\fireball.cpp2918831506@@;vft=4e16bc;col=50be28;td=5a4908;chd=50be18;offset=0;cdOffset=0;validated-hierarchy; map:52493
DATA_CHT_1_COMPGEN(0x0090be28, "const t_cloud_of_confusion::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_choking_gas@?%C:\Work\game\fireball.cpp2918831506@@;bcd=50be84;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52494
DATA_CHT_1_COMPGEN(0x0090be84, "t_choking_gas::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_choking_gas@?%C:\Work\game\fireball.cpp2918831506@@;vft=4e1714;col=50bec4;td=5a49c8;chd=50beb4;offset=0;cdOffset=0;validated-hierarchy; map:52495
DATA_CHT_1_COMPGEN(0x0090be9c, "t_choking_gas::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_choking_gas@?%C:\Work\game\fireball.cpp2918831506@@;vft=4e1714;col=50bec4;td=5a49c8;chd=50beb4;offset=0;cdOffset=0;validated-hierarchy; map:52496
DATA_CHT_1_COMPGEN(0x0090beb4, "t_choking_gas::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_choking_gas@?%C:\Work\game\fireball.cpp2918831506@@;vft=4e1714;col=50bec4;td=5a49c8;chd=50beb4;offset=0;cdOffset=0;validated-hierarchy; map:52497
DATA_CHT_1_COMPGEN(0x0090bec4, "const t_choking_gas::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_cloud_of_despair@?%C:\Work\game\fireball.cpp2918831506@@;bcd=50bf20;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52498
DATA_CHT_1_COMPGEN(0x0090bf20, "t_cloud_of_despair::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_cloud_of_despair@?%C:\Work\game\fireball.cpp2918831506@@;vft=4e176c;col=50bf64;td=5a4a80;chd=50bf54;offset=0;cdOffset=0;validated-hierarchy; map:52499
DATA_CHT_1_COMPGEN(0x0090bf38, "t_cloud_of_despair::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_cloud_of_despair@?%C:\Work\game\fireball.cpp2918831506@@;vft=4e176c;col=50bf64;td=5a4a80;chd=50bf54;offset=0;cdOffset=0;validated-hierarchy; map:52500
DATA_CHT_1_COMPGEN(0x0090bf54, "t_cloud_of_despair::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_cloud_of_despair@?%C:\Work\game\fireball.cpp2918831506@@;vft=4e176c;col=50bf64;td=5a4a80;chd=50bf54;offset=0;cdOffset=0;validated-hierarchy; map:52501
DATA_CHT_1_COMPGEN(0x0090bf64, "const t_cloud_of_despair::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_spell_factory@Vt_fireball@@@@;bcd=50ba50;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52502
DATA_CHT_1_COMPGEN(0x0090ba50, "t_spell_factory<t_fireball>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_spell_factory@Vt_fireball@@@@;vft=4e154c;col=50ba84;td=5a4640;chd=50ba74;offset=0;cdOffset=0;validated-hierarchy; map:52503
DATA_CHT_1_COMPGEN(0x0090ba68, "t_spell_factory<t_fireball>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_spell_factory@Vt_fireball@@@@;vft=4e154c;col=50ba84;td=5a4640;chd=50ba74;offset=0;cdOffset=0;validated-hierarchy; map:52504
DATA_CHT_1_COMPGEN(0x0090ba74, "t_spell_factory<t_fireball>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_spell_factory@Vt_fireball@@@@;vft=4e154c;col=50ba84;td=5a4640;chd=50ba74;offset=0;cdOffset=0;validated-hierarchy; map:52505
DATA_CHT_1_COMPGEN(0x0090ba84, "const t_spell_factory<t_fireball>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_spell_factory@Vt_inferno@?%C:\Work\game\fireball.cpp2918831506@@@@;bcd=50bbd4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52506
DATA_CHT_1_COMPGEN(0x0090bbd4, "t_spell_factory<t_inferno>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_spell_factory@Vt_inferno@?%C:\Work\game\fireball.cpp2918831506@@@@;vft=4e15d8;col=50bc08;td=5a4728;chd=50bbf8;offset=0;cdOffset=0;validated-hierarchy; map:52507
DATA_CHT_1_COMPGEN(0x0090bbec, "t_spell_factory<t_inferno>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_spell_factory@Vt_inferno@?%C:\Work\game\fireball.cpp2918831506@@@@;vft=4e15d8;col=50bc08;td=5a4728;chd=50bbf8;offset=0;cdOffset=0;validated-hierarchy; map:52508
DATA_CHT_1_COMPGEN(0x0090bbf8, "t_spell_factory<t_inferno>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_spell_factory@Vt_inferno@?%C:\Work\game\fireball.cpp2918831506@@@@;vft=4e15d8;col=50bc08;td=5a4728;chd=50bbf8;offset=0;cdOffset=0;validated-hierarchy; map:52509
DATA_CHT_1_COMPGEN(0x0090bc08, "const t_spell_factory<t_inferno>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_spell_factory@Vt_armageddon@?%C:\Work\game\fireball.cpp2918831506@@@@;bcd=50bc70;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52510
DATA_CHT_1_COMPGEN(0x0090bc70, "t_spell_factory<t_armageddon>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_spell_factory@Vt_armageddon@?%C:\Work\game\fireball.cpp2918831506@@@@;vft=4e1630;col=50bca4;td=5a47c0;chd=50bc94;offset=0;cdOffset=0;validated-hierarchy; map:52511
DATA_CHT_1_COMPGEN(0x0090bc88, "t_spell_factory<t_armageddon>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_spell_factory@Vt_armageddon@?%C:\Work\game\fireball.cpp2918831506@@@@;vft=4e1630;col=50bca4;td=5a47c0;chd=50bc94;offset=0;cdOffset=0;validated-hierarchy; map:52512
DATA_CHT_1_COMPGEN(0x0090bc94, "t_spell_factory<t_armageddon>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_spell_factory@Vt_armageddon@?%C:\Work\game\fireball.cpp2918831506@@@@;vft=4e1630;col=50bca4;td=5a47c0;chd=50bc94;offset=0;cdOffset=0;validated-hierarchy; map:52513
DATA_CHT_1_COMPGEN(0x0090bca4, "const t_spell_factory<t_armageddon>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_spell_factory@Vt_cloud_of_confusion@?%C:\Work\game\fireball.cpp2918831506@@@@;bcd=50bda4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52514
DATA_CHT_1_COMPGEN(0x0090bda4, "t_spell_factory<t_cloud_of_confusion>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_spell_factory@Vt_cloud_of_confusion@?%C:\Work\game\fireball.cpp2918831506@@@@;vft=4e16b4;col=50bdd8;td=5a48a8;chd=50bdc8;offset=0;cdOffset=0;validated-hierarchy; map:52515
DATA_CHT_1_COMPGEN(0x0090bdbc, "t_spell_factory<t_cloud_of_confusion>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_spell_factory@Vt_cloud_of_confusion@?%C:\Work\game\fireball.cpp2918831506@@@@;vft=4e16b4;col=50bdd8;td=5a48a8;chd=50bdc8;offset=0;cdOffset=0;validated-hierarchy; map:52516
DATA_CHT_1_COMPGEN(0x0090bdc8, "t_spell_factory<t_cloud_of_confusion>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_spell_factory@Vt_cloud_of_confusion@?%C:\Work\game\fireball.cpp2918831506@@@@;vft=4e16b4;col=50bdd8;td=5a48a8;chd=50bdc8;offset=0;cdOffset=0;validated-hierarchy; map:52517
DATA_CHT_1_COMPGEN(0x0090bdd8, "const t_spell_factory<t_cloud_of_confusion>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_spell_factory@Vt_choking_gas@?%C:\Work\game\fireball.cpp2918831506@@@@;bcd=50be3c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52518
DATA_CHT_1_COMPGEN(0x0090be3c, "t_spell_factory<t_choking_gas>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_spell_factory@Vt_choking_gas@?%C:\Work\game\fireball.cpp2918831506@@@@;vft=4e1708;col=50be70;td=5a4970;chd=50be60;offset=0;cdOffset=0;validated-hierarchy; map:52519
DATA_CHT_1_COMPGEN(0x0090be54, "t_spell_factory<t_choking_gas>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_spell_factory@Vt_choking_gas@?%C:\Work\game\fireball.cpp2918831506@@@@;vft=4e1708;col=50be70;td=5a4970;chd=50be60;offset=0;cdOffset=0;validated-hierarchy; map:52520
DATA_CHT_1_COMPGEN(0x0090be60, "t_spell_factory<t_choking_gas>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_spell_factory@Vt_choking_gas@?%C:\Work\game\fireball.cpp2918831506@@@@;vft=4e1708;col=50be70;td=5a4970;chd=50be60;offset=0;cdOffset=0;validated-hierarchy; map:52521
DATA_CHT_1_COMPGEN(0x0090be70, "const t_spell_factory<t_choking_gas>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_spell_factory@Vt_cloud_of_despair@?%C:\Work\game\fireball.cpp2918831506@@@@;bcd=50bed8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52522
DATA_CHT_1_COMPGEN(0x0090bed8, "t_spell_factory<t_cloud_of_despair>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_spell_factory@Vt_cloud_of_despair@?%C:\Work\game\fireball.cpp2918831506@@@@;vft=4e1760;col=50bf0c;td=5a4a20;chd=50befc;offset=0;cdOffset=0;validated-hierarchy; map:52523
DATA_CHT_1_COMPGEN(0x0090bef0, "t_spell_factory<t_cloud_of_despair>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_spell_factory@Vt_cloud_of_despair@?%C:\Work\game\fireball.cpp2918831506@@@@;vft=4e1760;col=50bf0c;td=5a4a20;chd=50befc;offset=0;cdOffset=0;validated-hierarchy; map:52524
DATA_CHT_1_COMPGEN(0x0090befc, "t_spell_factory<t_cloud_of_despair>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_spell_factory@Vt_cloud_of_despair@?%C:\Work\game\fireball.cpp2918831506@@@@;vft=4e1760;col=50bf0c;td=5a4a20;chd=50befc;offset=0;cdOffset=0;validated-hierarchy; map:52525
DATA_CHT_1_COMPGEN(0x0090bf0c, "const t_spell_factory<t_cloud_of_despair>::`RTTI Complete Object Locator'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_3@Vt_area_spell@@V?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@Ut_impact_data@1@@@;vft=4e17b8;col=50c03c;td=5a4bc0;chd=50c02c;offset=8;cdOffset=0;validated-hierarchy; map:52526
DATA_CHT_1_COMPGEN(0x0090c03c, "const t_bound_handler_3<t_area_spell, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>::`RTTI Complete Object Locator'{for `t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_3@XV?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@Ut_impact_data@t_area_spell@@@@;bcd=50bfd0;pmd=8,-1,0;attributes=0;validated-hierarchy-link; map:52527
DATA_CHT_1_COMPGEN(0x0090bfd0, "t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>::`RTTI Base Class Descriptor at (8, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_handler_base_3@V?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@Ut_impact_data@t_area_spell@@@@;bcd=50bfe8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52528
DATA_CHT_1_COMPGEN(0x0090bfe8, "t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_3@Vt_area_spell@@V?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@Ut_impact_data@1@@@;bcd=50c000;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52529
DATA_CHT_1_COMPGEN(0x0090c000, "t_bound_handler_3<t_area_spell, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_3@Vt_area_spell@@V?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@Ut_impact_data@1@@@;vft=4e17b8;col=50c03c;td=5a4bc0;chd=50c02c;offset=8;cdOffset=0;validated-hierarchy; map:52530
DATA_CHT_1_COMPGEN(0x0090c018, "t_bound_handler_3<t_area_spell, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_3@Vt_area_spell@@V?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@Ut_impact_data@1@@@;vft=4e17b8;col=50c03c;td=5a4bc0;chd=50c02c;offset=8;cdOffset=0;validated-hierarchy; map:52531
DATA_CHT_1_COMPGEN(0x0090c02c, "t_bound_handler_3<t_area_spell, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:52532
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_3<t_area_spell, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_add_3rd_handler_2@V?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@Ut_impact_data@t_area_spell@@@@;vft=4e17d8;col=50c0a0;td=5a4c40;chd=50c090;offset=8;cdOffset=0;validated-hierarchy; map:52533
DATA_CHT_1_COMPGEN(0x0090c0a0, "const t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_counted_ptr<t_combat_creature>, t_map_point_2d>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_add_3rd_handler_2@V?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@Ut_impact_data@t_area_spell@@@@;bcd=50c064;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52534
DATA_CHT_1_COMPGEN(0x0090c064, "t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_add_3rd_handler_2@V?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@Ut_impact_data@t_area_spell@@@@;vft=4e17d8;col=50c0a0;td=5a4c40;chd=50c090;offset=8;cdOffset=0;validated-hierarchy; map:52535
DATA_CHT_1_COMPGEN(0x0090c07c, "t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_add_3rd_handler_2@V?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@Ut_impact_data@t_area_spell@@@@;vft=4e17d8;col=50c0a0;td=5a4c40;chd=50c090;offset=8;cdOffset=0;validated-hierarchy; map:52536
DATA_CHT_1_COMPGEN(0x0090c090, "t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:52537
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_3@Vt_armageddon@?%C:\Work\game\fireball.cpp2918831506@@V?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@_N@@;vft=4e17ec;col=50c178;td=5a4d88;chd=50c168;offset=8;cdOffset=0;validated-hierarchy; map:52538
DATA_CHT_1_COMPGEN(0x0090c178, "const t_bound_handler_3<t_armageddon, t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>::`RTTI Complete Object Locator'{for `t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_3@XV?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@_N@@;bcd=50c10c;pmd=8,-1,0;attributes=0;validated-hierarchy-link; map:52539
DATA_CHT_1_COMPGEN(0x0090c10c, "t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>::`RTTI Base Class Descriptor at (8, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_handler_base_3@V?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@_N@@;bcd=50c124;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52540
DATA_CHT_1_COMPGEN(0x0090c124, "t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_3@Vt_armageddon@?%C:\Work\game\fireball.cpp2918831506@@V?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@_N@@;bcd=50c13c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52541
DATA_CHT_1_COMPGEN(0x0090c13c, "t_bound_handler_3<t_armageddon, t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_3@Vt_armageddon@?%C:\Work\game\fireball.cpp2918831506@@V?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@_N@@;vft=4e17ec;col=50c178;td=5a4d88;chd=50c168;offset=8;cdOffset=0;validated-hierarchy; map:52542
DATA_CHT_1_COMPGEN(0x0090c154, "t_bound_handler_3<t_armageddon, t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_3@Vt_armageddon@?%C:\Work\game\fireball.cpp2918831506@@V?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@_N@@;vft=4e17ec;col=50c178;td=5a4d88;chd=50c168;offset=8;cdOffset=0;validated-hierarchy; map:52543
DATA_CHT_1_COMPGEN(0x0090c168, "t_bound_handler_3<t_armageddon, t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:52544
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_3<t_armageddon, t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_add_3rd_handler_2@V?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@_N@@;vft=4e180c;col=50c1dc;td=5a4e20;chd=50c1cc;offset=8;cdOffset=0;validated-hierarchy; map:52545
DATA_CHT_1_COMPGEN(0x0090c1dc, "const t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_counted_ptr<t_combat_creature>, t_map_point_2d>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_add_3rd_handler_2@V?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@_N@@;bcd=50c1a0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52546
DATA_CHT_1_COMPGEN(0x0090c1a0, "t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_add_3rd_handler_2@V?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@_N@@;vft=4e180c;col=50c1dc;td=5a4e20;chd=50c1cc;offset=8;cdOffset=0;validated-hierarchy; map:52547
DATA_CHT_1_COMPGEN(0x0090c1b8, "t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_add_3rd_handler_2@V?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@_N@@;vft=4e180c;col=50c1dc;td=5a4e20;chd=50c1cc;offset=8;cdOffset=0;validated-hierarchy; map:52548
DATA_CHT_1_COMPGEN(0x0090c1cc, "t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:52549
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// name:A; map symbol; map:52550
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>::`RTTI Complete Object Locator'{for `t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>'}")

// name:A; map symbol; map:52551
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>::`RTTI Base Class Array'")

// name:A; map symbol; map:52552
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:52553
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// name:A; map symbol; map:52554
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>::`RTTI Complete Object Locator'{for `t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>'}")

// name:A; map symbol; map:52555
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>::`RTTI Base Class Array'")

// name:A; map symbol; map:52556
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:52557
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_3@XV?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@Ut_impact_data@t_area_spell@@@@;bcd=50bf78;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52558
DATA_CHT_1_COMPGEN(0x0090bf78, "t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_function_3@XV?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@Ut_impact_data@t_area_spell@@@@;vft=4e17cc;col=50bfa8;td=5a4ac8;chd=50bf98;offset=0;cdOffset=0;validated-hierarchy; map:52559
DATA_CHT_1_COMPGEN(0x0090bf90, "t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_function_3@XV?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@Ut_impact_data@t_area_spell@@@@;vft=4e17cc;col=50bfa8;td=5a4ac8;chd=50bf98;offset=0;cdOffset=0;validated-hierarchy; map:52560
DATA_CHT_1_COMPGEN(0x0090bf98, "t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_function_3@XV?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@Ut_impact_data@t_area_spell@@@@;vft=4e17cc;col=50bfa8;td=5a4ac8;chd=50bf98;offset=0;cdOffset=0;validated-hierarchy; map:52561
DATA_CHT_1_COMPGEN(0x0090bfa8, "const t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_3@XV?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@_N@@;bcd=50c0b4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52562
DATA_CHT_1_COMPGEN(0x0090c0b4, "t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_function_3@XV?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@_N@@;vft=4e1800;col=50c0e4;td=5a4cc0;chd=50c0d4;offset=0;cdOffset=0;validated-hierarchy; map:52563
DATA_CHT_1_COMPGEN(0x0090c0cc, "t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_function_3@XV?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@_N@@;vft=4e1800;col=50c0e4;td=5a4cc0;chd=50c0d4;offset=0;cdOffset=0;validated-hierarchy; map:52564
DATA_CHT_1_COMPGEN(0x0090c0d4, "t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_function_3@XV?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@_N@@;vft=4e1800;col=50c0e4;td=5a4cc0;chd=50c0d4;offset=0;cdOffset=0;validated-hierarchy; map:52565
DATA_CHT_1_COMPGEN(0x0090c0e4, "const t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, bool>::`RTTI Complete Object Locator'")

// === .data (24 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_cloud_animation@?%C:\Work\game\fireball.cpp2918831506@@;td=5a4670;validated-header; map:58605
DATA_CHT_1_COMPGEN(0x009a4670, "t_cloud_animation `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_area_spell@@;td=5a46b8;validated-header; map:58606
DATA_CHT_1_COMPGEN(0x009a46b8, "t_area_spell `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_combat_ai_spell_action@@;td=5a46d4;validated-header; map:58607
DATA_CHT_1_COMPGEN(0x009a46d4, "t_combat_ai_spell_action `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_fireball@@;td=5a46fc;validated-header; map:58608
DATA_CHT_1_COMPGEN(0x009a46fc, "t_fireball `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_inferno@?%C:\Work\game\fireball.cpp2918831506@@;td=5a477c;validated-header; map:58609
DATA_CHT_1_COMPGEN(0x009a477c, "t_inferno `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_armageddon@?%C:\Work\game\fireball.cpp2918831506@@;td=5a4860;validated-header; map:58610
DATA_CHT_1_COMPGEN(0x009a4860, "t_armageddon `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_fireball_releaser@?%C:\Work\game\fireball.cpp2918831506@@;td=5a4818;validated-header; map:58611
DATA_CHT_1_COMPGEN(0x009a4818, "t_fireball_releaser `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_cloud_of_confusion@?%C:\Work\game\fireball.cpp2918831506@@;td=5a4908;validated-header; map:58612
DATA_CHT_1_COMPGEN(0x009a4908, "t_cloud_of_confusion `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_choking_gas@?%C:\Work\game\fireball.cpp2918831506@@;td=5a49c8;validated-header; map:58613
DATA_CHT_1_COMPGEN(0x009a49c8, "t_choking_gas `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_cloud_of_despair@?%C:\Work\game\fireball.cpp2918831506@@;td=5a4a80;validated-header; map:58614
DATA_CHT_1_COMPGEN(0x009a4a80, "t_cloud_of_despair `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_spell_factory@Vt_fireball@@@@;td=5a4640;validated-header; map:58615
DATA_CHT_1_COMPGEN(0x009a4640, "t_spell_factory<t_fireball> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_spell_factory@Vt_inferno@?%C:\Work\game\fireball.cpp2918831506@@@@;td=5a4728;validated-header; map:58616
DATA_CHT_1_COMPGEN(0x009a4728, "t_spell_factory<t_inferno> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_spell_factory@Vt_armageddon@?%C:\Work\game\fireball.cpp2918831506@@@@;td=5a47c0;validated-header; map:58617
DATA_CHT_1_COMPGEN(0x009a47c0, "t_spell_factory<t_armageddon> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_spell_factory@Vt_cloud_of_confusion@?%C:\Work\game\fireball.cpp2918831506@@@@;td=5a48a8;validated-header; map:58618
DATA_CHT_1_COMPGEN(0x009a48a8, "t_spell_factory<t_cloud_of_confusion> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_spell_factory@Vt_choking_gas@?%C:\Work\game\fireball.cpp2918831506@@@@;td=5a4970;validated-header; map:58619
DATA_CHT_1_COMPGEN(0x009a4970, "t_spell_factory<t_choking_gas> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_spell_factory@Vt_cloud_of_despair@?%C:\Work\game\fireball.cpp2918831506@@@@;td=5a4a20;validated-header; map:58620
DATA_CHT_1_COMPGEN(0x009a4a20, "t_spell_factory<t_cloud_of_despair> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_function_3@XV?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@Ut_impact_data@t_area_spell@@@@;td=5a4ac8;validated-header; map:58621
DATA_CHT_1_COMPGEN(0x009a4ac8, "t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_handler_base_3@V?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@Ut_impact_data@t_area_spell@@@@;td=5a4b48;validated-header; map:58622
DATA_CHT_1_COMPGEN(0x009a4b48, "t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_3@Vt_area_spell@@V?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@Ut_impact_data@1@@@;td=5a4bc0;validated-header; map:58623
DATA_CHT_1_COMPGEN(0x009a4bc0, "t_bound_handler_3<t_area_spell, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_add_3rd_handler_2@V?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@Ut_impact_data@t_area_spell@@@@;td=5a4c40;validated-header; map:58624
DATA_CHT_1_COMPGEN(0x009a4c40, "t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_area_spell::t_impact_data> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_function_3@XV?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@_N@@;td=5a4cc0;validated-header; map:58625
DATA_CHT_1_COMPGEN(0x009a4cc0, "t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, bool> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_handler_base_3@V?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@_N@@;td=5a4d28;validated-header; map:58626
DATA_CHT_1_COMPGEN(0x009a4d28, "t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, bool> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_3@Vt_armageddon@?%C:\Work\game\fireball.cpp2918831506@@V?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@_N@@;td=5a4d88;validated-header; map:58627
DATA_CHT_1_COMPGEN(0x009a4d88, "t_bound_handler_3<t_armageddon, t_counted_ptr<t_combat_creature>, t_map_point_2d, bool> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_add_3rd_handler_2@V?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@_N@@;td=5a4e20;validated-header; map:58628
DATA_CHT_1_COMPGEN(0x009a4e20, "t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, bool> `RTTI Type Descriptor'")
