// adventure_spell.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\adventure_spell.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 81/135 (A:48 B:30 C:3); unaccounted 54; skipped std 12.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (103 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:69727; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x004f09d0, 0x15, STATIC_INIT_DISPATCH, "adventure_spell#1")

// name:C; dyninit; see ledger; map:69728
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adventure_spell#1")

namespace {

// confidence:C; align-order; retn,stable; map:12415
VA_CHT_1(0x004f09f0, 0x1ce)
bool fail_to_cast_spell(std::string const& arg_0, t_spellbook_window_data const& arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:12416
VA_CHT_1(0x004f0bc0, 0xf6)
t_army* find_nearest_owned_boat(t_adventure_map& arg_0, int arg_1, t_level_map_point_2d const& arg_2)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:12417
VA_CHT_1(0x004f0cc0, 0x19e)
void pay_cost(t_creature_stack& arg_0, t_spellbook_window_data const& arg_1)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:12418
VA_CHT_1(0x004f0e60, 0xcc)
void play_sound(t_spell arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:12419
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_mire_targeter::t_mire_targeter(
    t_adventure_frame& arg_0,
    t_creature_array& arg_1,
    int arg_2,
    t_spellbook_window_data const& arg_3
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:12420
VA_CHT_1(0x004f0f30, 0x42)
void t_mire_targeter::cast_spell(t_adventure_map_window& arg_0, t_screen_point const& arg_1)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:12421
VA_CHT_1(0x004f0f80, 0x51)
bool t_mire_targeter::is_valid_target(t_adventure_map_window const& arg_0, t_screen_point const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:12422
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_army* t_mire_targeter::get_army_ptr(t_adventure_map_window const& arg_0, t_screen_point const& arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:12423
VA_CHT_1(0x004f0fe0, 0x303)
void t_mire_targeter::apply(t_army& arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:12424
VA_CHT_1(0x004f12f0, 0x138)
bool t_mire_targeter::is_targetable(t_army const& arg_0) const
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:A; dyninit-init; owner-conf-C; map:69729; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x004f1430, 0x11, STATIC_INIT_DISPATCH, "adventure_spell#2")

// confidence:B; dyninit-ctor; owner-conf-C; map:69730; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x004f1450, 0xd1, STATIC_CTOR, "adventure_spell#2")

// name:C; dyninit; see ledger; map:69731
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "adventure_spell#2")

// confidence:B; dyninit-dtor; owner-conf-C; map:69732; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x004f1530, 0xa, STATIC_DTOR, "adventure_spell#2")

// confidence:B; align-order; retn,stable; map:12425
VA_CHT_1(0x004f1540, 0x2a9)
bool t_adventure_frame::cast_endurance(
    t_creature_array& arg_0,
    int arg_1,
    t_spellbook_window_data const& arg_2
)
{
    // Body unavailable.
}

// confidence:A; dyninit-init; owner-conf-C; map:69733; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x004f17f0, 0x11, STATIC_INIT_DISPATCH, "adventure_spell#3")

// confidence:B; dyninit-ctor; owner-conf-C; map:69734; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x004f1810, 0xd1, STATIC_CTOR, "adventure_spell#3")

// name:C; dyninit; see ledger; map:69735
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "adventure_spell#3")

// confidence:B; dyninit-dtor; owner-conf-C; map:69736; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x004f18f0, 0xa, STATIC_DTOR, "adventure_spell#3")

// confidence:B; align-order; retn,stable; map:12426
VA_CHT_1(0x004f1900, 0x383)
bool t_adventure_frame::cast_healing(t_creature_array& arg_0, int arg_1, t_spellbook_window_data const& arg_2)
{
    // Body unavailable.
}

// confidence:A; dyninit-init; owner-conf-C; map:69737; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x004f20f0, 0x11, STATIC_INIT_DISPATCH, "adventure_spell#4")

// confidence:B; dyninit-ctor; owner-conf-C; map:69738; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x004f2110, 0xd1, STATIC_CTOR, "adventure_spell#4")

// name:C; dyninit; see ledger; map:69739
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "adventure_spell#4")

// confidence:B; dyninit-dtor; owner-conf-C; map:69740; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x004f21f0, 0xa, STATIC_DTOR, "adventure_spell#4")

// confidence:B; align-order; retn,stable; map:12427
VA_CHT_1(0x004f2200, 0x352)
bool t_adventure_frame::cast_mana(t_creature_array& arg_0, int arg_1, t_spellbook_window_data const& arg_2)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:12428
VA_CHT_1(0x004f2720, 0x2a5)
bool t_adventure_frame::cast_mass_healing(
    t_creature_array& arg_0,
    int arg_1,
    t_spellbook_window_data const& arg_2
)
{
    // Body unavailable.
}

// confidence:A; dyninit-init; owner-conf-C; map:69741; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x004f29d0, 0x11, STATIC_INIT_DISPATCH, "adventure_spell#5")

// confidence:B; dyninit-ctor; owner-conf-C; map:69742; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x004f29f0, 0xd1, STATIC_CTOR, "adventure_spell#5")

// name:C; dyninit; see ledger; map:69743
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "adventure_spell#5")

// confidence:B; dyninit-dtor; owner-conf-C; map:69744; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x004f2ad0, 0xa, STATIC_DTOR, "adventure_spell#5")

// confidence:A; dyninit-init; owner-conf-C; map:69745; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x004f2ae0, 0x11, STATIC_INIT_DISPATCH, "adventure_spell#6")

// confidence:B; dyninit-ctor; owner-conf-C; map:69746; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x004f2b00, 0xd1, STATIC_CTOR, "adventure_spell#6")

// name:C; dyninit; see ledger; map:69747
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "adventure_spell#6")

// confidence:B; dyninit-dtor; owner-conf-C; map:69748; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x004f2be0, 0xa, STATIC_DTOR, "adventure_spell#6")

// confidence:B; align-order; retn,stable; map:12429
VA_CHT_1(0x004f2bf0, 0x3ec)
bool t_adventure_frame::cast_summon_boat(
    t_creature_array& arg_0,
    int arg_1,
    t_spellbook_window_data const& arg_2
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:12430
VA_CHT_1(0x004f2fe0, 0x96)
bool t_adventure_frame::ai_cast_summon_boat(
    t_creature_array& arg_0,
    t_hero& arg_1,
    t_adv_map_point const& arg_2
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:12431
VA_CHT_1(0x004f3080, 0x3e1)
bool t_adventure_frame::cast_targeted_adventure_spell(
    t_creature_array& arg_0,
    int arg_1,
    t_spellbook_window_data const& arg_2
)
{
    // Body unavailable.
}

// confidence:A; dyninit-init; owner-conf-C; map:69749; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x004f3470, 0x11, STATIC_INIT_DISPATCH, "adventure_spell#7")

// confidence:B; dyninit-ctor; owner-conf-C; map:69750; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x004f3490, 0xd1, STATIC_CTOR, "adventure_spell#7")

// name:C; dyninit; see ledger; map:69751
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "adventure_spell#7")

// confidence:B; dyninit-dtor; owner-conf-C; map:69752; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x004f3570, 0xa, STATIC_DTOR, "adventure_spell#7")

// confidence:B; align-order; retn,stable; map:12432
VA_CHT_1(0x004f3580, 0x1c4)
bool t_adventure_frame::cast_mire(
    t_creature_array& arg_0,
    int arg_1,
    t_spellbook_window_data const& arg_2,
    t_town* arg_3
)
{
    // Body unavailable.
}

// confidence:A; dyninit-init; owner-conf-C; map:69753; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x004f3750, 0x11, STATIC_INIT_DISPATCH, "adventure_spell#8")

// confidence:B; dyninit-ctor; owner-conf-C; map:69754; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x004f3770, 0xd1, STATIC_CTOR, "adventure_spell#8")

// name:C; dyninit; see ledger; map:69755
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "adventure_spell#8")

// confidence:B; dyninit-dtor; owner-conf-C; map:69756; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x004f3850, 0xa, STATIC_DTOR, "adventure_spell#8")

// confidence:B; align-order; retn,stable; map:12433
VA_CHT_1(0x004f3860, 0x6bb)
bool t_adventure_frame::cast_town_gate(
    t_creature_array& arg_0,
    int arg_1,
    t_spellbook_window_data const& arg_2,
    t_town* arg_3
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:12434
VA_CHT_1(0x004f3f20, 0xe3)
bool t_adventure_frame::cast_pathfinding(
    t_creature_array& arg_0,
    int arg_1,
    t_spellbook_window_data const& arg_2
)
{
    // Body unavailable.
}

// confidence:A; dyninit-init; owner-conf-C; map:69757; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x004f4010, 0x11, STATIC_INIT_DISPATCH, "adventure_spell#9")

// confidence:B; dyninit-ctor; owner-conf-C; map:69758; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x004f4030, 0xd1, STATIC_CTOR, "adventure_spell#9")

// name:C; dyninit; see ledger; map:69759
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "adventure_spell#9")

// confidence:B; dyninit-dtor; owner-conf-C; map:69760; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x004f4110, 0xa, STATIC_DTOR, "adventure_spell#9")

// name:A; map symbol; map:12435
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adventure_frame::cast_visions(t_creature_array& arg_0, int arg_1, t_spellbook_window_data const& arg_2)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:12436
VA_CHT_1(0x004f4120, 0x146)
bool t_adventure_frame::cast_adventure_spell(
    t_creature_array& arg_0,
    int arg_1,
    t_spellbook_window_data const& arg_2,
    t_town* arg_3
)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:69761; name:B (dyninit; see ledger)
VA_CHT_1(0x004f4350, 0x20)
// adventure_spell$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:A; dyninit-tinit; owner-conf-B; map:69763; name:B (dyninit; see ledger)
VA_CHT_1(0x004f4370, 0x5c)
// adventure_spell$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:69764
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adventure_spell$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:69765
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adventure_spell$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:69766
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adventure_spell$tatexit4
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:12437
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_artifact_prop::t_spell_charges_base::use_spell_points(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:12438
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_mire_targeter)

// name:A; map symbol; map:12439
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_mire_targeter)

// name:A; map symbol; map:12440
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_spell_targeter::t_adventure_spell_targeter()
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:12441
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_mire_targeter::~t_mire_targeter()
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:12442
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_spell_targeter::~t_adventure_spell_targeter()
{
    // Body unavailable.
}

// name:A; map symbol; map:12443
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_adventure_spell_targeter)

// name:A; map symbol; map:12444
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_adventure_spell_targeter)

// name:A; map symbol; map:12445
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_creature_stack::change_raw_adventure_movement(float arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:12446
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_hero* t_dialog_adv_spell_target::get_target() const
{
    // Body unavailable.
}

// name:A; map symbol; map:12447
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_dialog_healing_target::t_dialog_healing_target(
    t_window* arg_0,
    std::vector<t_hero*, std::allocator<t_hero*>> const& arg_1,
    t_spell arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:12448
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_dialog_adv_spell_target::~t_dialog_adv_spell_target()
{
    // Body unavailable.
}

// name:A; map symbol; map:12449
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_button_group::~t_button_group()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:12450
VA_CHT_1(0x004f1e80, 0x8e)
t_dialog_adv_spell_target::t_dialog_adv_spell_target(t_window* arg_0)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:12451
VA_CHT_1_COMPGEN(0x004f1f10, 0x1e, VECTOR_DELETING_DTOR, t_dialog_adv_spell_target)

// name:A; map symbol; map:12452
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_dialog_adv_spell_target)

// name:A; map symbol; map:12453
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_button_group::t_button_group()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:12454
VA_CHT_1_COMPGEN(0x004f1f30, 0x1e, VECTOR_DELETING_DTOR, t_dialog_healing_target)

// name:A; map symbol; map:12455
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_dialog_healing_target)

// name:A; map symbol; map:12456
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_dialog_healing_target::~t_dialog_healing_target()
{
    // Body unavailable.
}

// name:A; map symbol; map:12457
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_dialog_healing_target>::~t_counted_ptr<t_dialog_healing_target>()
{
    // Body unavailable.
}

// name:A; map symbol; map:12458
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_dialog_mana_target::t_dialog_mana_target(
    t_window* arg_0,
    std::vector<t_hero*, std::allocator<t_hero*>> const& arg_1,
    t_spell arg_2
)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:12459
VA_CHT_1_COMPGEN(0x004f2560, 0x1e, SCALAR_DELETING_DTOR, t_dialog_mana_target)

// name:A; map symbol; map:12460
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_dialog_mana_target)

// name:A; map symbol; map:12461
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_dialog_mana_target::~t_dialog_mana_target()
{
    // Body unavailable.
}

// name:A; map symbol; map:12462
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_dialog_mana_target>::~t_counted_ptr<t_dialog_mana_target>()
{
    // Body unavailable.
}

// name:A; map symbol; map:12463
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_dialog_adv_spell_target::t_dialog_adv_spell_target(
    t_window* arg_0,
    std::vector<t_hero*, std::allocator<t_hero*>> const& arg_1,
    t_spell arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:12464
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_dialog_adv_spell_target>::~t_counted_ptr<t_dialog_adv_spell_target>()
{
    // Body unavailable.
}

// name:A; map symbol; map:12465
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_army::set_boat_type(t_town_type arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:12476
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_artifact_effect* t_counted_ptr<t_artifact_effect>::operator t_artifact_effect*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:12477
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_adventure_spell_targeter>::t_counted_ptr<t_adventure_spell_targeter>(
    t_adventure_spell_targeter* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:12478
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_dialog_healing_target>::t_counted_ptr<t_dialog_healing_target>()
{
    // Body unavailable.
}

// name:A; map symbol; map:12479
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_dialog_healing_target>& t_counted_ptr<t_dialog_healing_target>::operator=(
    t_dialog_healing_target* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:12480
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_dialog_healing_target* t_counted_ptr<t_dialog_healing_target>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:12481
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_dialog_mana_target>::t_counted_ptr<t_dialog_mana_target>()
{
    // Body unavailable.
}

// name:A; map symbol; map:12482
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_dialog_mana_target>& t_counted_ptr<t_dialog_mana_target>::operator=(
    t_dialog_mana_target* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:12483
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_dialog_mana_target* t_counted_ptr<t_dialog_mana_target>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:12484
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_dialog_adv_spell_target>::t_counted_ptr<t_dialog_adv_spell_target>()
{
    // Body unavailable.
}

// name:A; map symbol; map:12485
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_dialog_adv_spell_target>& t_counted_ptr<t_dialog_adv_spell_target>::operator=(
    t_dialog_adv_spell_target* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:12486
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_dialog_adv_spell_target* t_counted_ptr<t_dialog_adv_spell_target>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:12488
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_counted_ptr<t_toggle_button>")

// name:A; map symbol; map:12489
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_toggle_button>::~t_counted_ptr<t_toggle_button>()
{
    // Body unavailable.
}

// === .rdata (6 symbols) ===

// confidence:A; rtti-name; map:43320
DATA_CHT_1_COMPGEN(0x008d447c, "const t_mire_targeter::`vftable'")

// confidence:A; rtti-name; map:43321
DATA_CHT_1_COMPGEN(0x008d448c, "const t_adventure_spell_targeter::`vftable'")

// name:A; map symbol; map:43322
DATA_CHT_1(UNACCOUNTED)
// __real@8@4002f000000000000000

// confidence:A; rtti-name; map:43323
DATA_CHT_1_COMPGEN(0x008d44ac, "const t_dialog_healing_target::`vftable'")

// confidence:A; rtti-name; map:43324
DATA_CHT_1_COMPGEN(0x008d451c, "const t_dialog_adv_spell_target::`vftable'")

// confidence:A; rtti-name; map:43325
DATA_CHT_1_COMPGEN(0x008d458c, "const t_dialog_mana_target::`vftable'")

// === .rdata$r (20 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adventure_spell_targeter@@;bcd=4fc4e0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49107
DATA_CHT_1_COMPGEN(0x008fc4e0, "t_adventure_spell_targeter::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_mire_targeter@?%C:\Work\game\adventure_spell.cpp138248995@@;bcd=4fc4f8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49108
DATA_CHT_1_COMPGEN(0x008fc4f8, "t_mire_targeter::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_mire_targeter@?%C:\Work\game\adventure_spell.cpp138248995@@;vft=4d447c;col=4fc530;td=58f040;chd=4fc520;offset=0;cdOffset=0;validated-hierarchy; map:49109
DATA_CHT_1_COMPGEN(0x008fc510, "t_mire_targeter::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_mire_targeter@?%C:\Work\game\adventure_spell.cpp138248995@@;vft=4d447c;col=4fc530;td=58f040;chd=4fc520;offset=0;cdOffset=0;validated-hierarchy; map:49110
DATA_CHT_1_COMPGEN(0x008fc520, "t_mire_targeter::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_mire_targeter@?%C:\Work\game\adventure_spell.cpp138248995@@;vft=4d447c;col=4fc530;td=58f040;chd=4fc520;offset=0;cdOffset=0;validated-hierarchy; map:49111
DATA_CHT_1_COMPGEN(0x008fc530, "const t_mire_targeter::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adventure_spell_targeter@@;vft=4d448c;col=4fc4cc;td=58f010;chd=4fc4bc;offset=0;cdOffset=0;validated-hierarchy; map:49112
DATA_CHT_1_COMPGEN(0x008fc4b0, "t_adventure_spell_targeter::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adventure_spell_targeter@@;vft=4d448c;col=4fc4cc;td=58f010;chd=4fc4bc;offset=0;cdOffset=0;validated-hierarchy; map:49113
DATA_CHT_1_COMPGEN(0x008fc4bc, "t_adventure_spell_targeter::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_adventure_spell_targeter@@;vft=4d448c;col=4fc4cc;td=58f010;chd=4fc4bc;offset=0;cdOffset=0;validated-hierarchy; map:49114
DATA_CHT_1_COMPGEN(0x008fc4cc, "const t_adventure_spell_targeter::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_dialog_adv_spell_target@@;bcd=4fc544;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49115
DATA_CHT_1_COMPGEN(0x008fc544, "t_dialog_adv_spell_target::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_dialog_healing_target@@;bcd=4fc55c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49116
DATA_CHT_1_COMPGEN(0x008fc55c, "t_dialog_healing_target::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_dialog_healing_target@@;vft=4d44ac;col=4fc5a4;td=58f0dc;chd=4fc594;offset=0;cdOffset=0;validated-hierarchy; map:49117
DATA_CHT_1_COMPGEN(0x008fc574, "t_dialog_healing_target::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_dialog_healing_target@@;vft=4d44ac;col=4fc5a4;td=58f0dc;chd=4fc594;offset=0;cdOffset=0;validated-hierarchy; map:49118
DATA_CHT_1_COMPGEN(0x008fc594, "t_dialog_healing_target::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_dialog_healing_target@@;vft=4d44ac;col=4fc5a4;td=58f0dc;chd=4fc594;offset=0;cdOffset=0;validated-hierarchy; map:49119
DATA_CHT_1_COMPGEN(0x008fc5a4, "const t_dialog_healing_target::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_dialog_adv_spell_target@@;vft=4d451c;col=4fc5e4;td=58f0b4;chd=4fc5d4;offset=0;cdOffset=0;validated-hierarchy; map:49120
DATA_CHT_1_COMPGEN(0x008fc5b8, "t_dialog_adv_spell_target::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_dialog_adv_spell_target@@;vft=4d451c;col=4fc5e4;td=58f0b4;chd=4fc5d4;offset=0;cdOffset=0;validated-hierarchy; map:49121
DATA_CHT_1_COMPGEN(0x008fc5d4, "t_dialog_adv_spell_target::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_dialog_adv_spell_target@@;vft=4d451c;col=4fc5e4;td=58f0b4;chd=4fc5d4;offset=0;cdOffset=0;validated-hierarchy; map:49122
DATA_CHT_1_COMPGEN(0x008fc5e4, "const t_dialog_adv_spell_target::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_dialog_mana_target@@;bcd=4fc5f8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49123
DATA_CHT_1_COMPGEN(0x008fc5f8, "t_dialog_mana_target::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_dialog_mana_target@@;vft=4d458c;col=4fc640;td=58f114;chd=4fc630;offset=0;cdOffset=0;validated-hierarchy; map:49124
DATA_CHT_1_COMPGEN(0x008fc610, "t_dialog_mana_target::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_dialog_mana_target@@;vft=4d458c;col=4fc640;td=58f114;chd=4fc630;offset=0;cdOffset=0;validated-hierarchy; map:49125
DATA_CHT_1_COMPGEN(0x008fc630, "t_dialog_mana_target::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_dialog_mana_target@@;vft=4d458c;col=4fc640;td=58f114;chd=4fc630;offset=0;cdOffset=0;validated-hierarchy; map:49126
DATA_CHT_1_COMPGEN(0x008fc640, "const t_dialog_mana_target::`RTTI Complete Object Locator'")

// === .data (6 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AV?$t_effect@Vt_spell_charges_base@t_artifact_prop@@$0CO@@t_artifact_prop@@;td=58efb8;validated-header; map:57773
DATA_CHT_1_COMPGEN(0x0098efb8, "t_artifact_prop::t_effect<t_artifact_prop::t_spell_charges_base, 46> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_adventure_spell_targeter@@;td=58f010;validated-header; map:57774
DATA_CHT_1_COMPGEN(0x0098f010, "t_adventure_spell_targeter `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_mire_targeter@?%C:\Work\game\adventure_spell.cpp138248995@@;td=58f040;validated-header; map:57775
DATA_CHT_1_COMPGEN(0x0098f040, "t_mire_targeter `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_dialog_adv_spell_target@@;td=58f0b4;validated-header; map:57776
DATA_CHT_1_COMPGEN(0x0098f0b4, "t_dialog_adv_spell_target `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_dialog_healing_target@@;td=58f0dc;validated-header; map:57777
DATA_CHT_1_COMPGEN(0x0098f0dc, "t_dialog_healing_target `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_dialog_mana_target@@;td=58f114;validated-header; map:57778
DATA_CHT_1_COMPGEN(0x0098f114, "t_dialog_mana_target `RTTI Type Descriptor'")
