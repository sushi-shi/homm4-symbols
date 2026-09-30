// combat_user_action.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\combat_user_action.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 79/127 (A:51 B:0 C:0); unaccounted 48; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (85 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67354; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005f24d0, 0x15, STATIC_INIT_DISPATCH, "combat_user_action#1")

// name:C; dyninit; see ledger; map:67355
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_user_action#1")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67356; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005f24f0, 0x15, STATIC_INIT_DISPATCH, "combat_user_action#2")

// name:C; dyninit; see ledger; map:67357
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_user_action#2")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67358; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005f2510, 0x15, STATIC_INIT_DISPATCH, "combat_user_action#3")

// name:C; dyninit; see ledger; map:67359
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_user_action#3")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67360; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005f2530, 0x15, STATIC_INIT_DISPATCH, "combat_user_action#4")

// name:C; dyninit; see ledger; map:67361
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_user_action#4")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67362; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005f2550, 0x10, STATIC_INIT_DISPATCH, "combat_user_action#5")

// name:C; dyninit; see ledger; map:67363
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_user_action#5")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67364; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005f2560, 0x15, STATIC_INIT_DISPATCH, "combat_user_action#6")

// name:C; dyninit; see ledger; map:67365
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_user_action#6")

// name:A; map symbol; map:22335
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_user_action::~t_combat_user_action()
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:22336
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_user_action_area::t_combat_user_action_area(
    t_screen_point const& arg_0,
    t_map_point_2d const& arg_1,
    t_combat_creature* arg_2
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot;vftable-certificate=1f2580:22337;class=?%C:\work\game\combat_user_action.cpp2954624106::t_combat_user_action_area;proof=unique-hierarchy-method-and-slot-cleanup;cleanup=4;checked-rtti-and-raw-slots;vft=4ddeac,col=5070f4,offset=0,slot=1,entry=1f2580; map:22337
VA_CHT_1(0x005f2580, 0x27)
void t_combat_user_action_area::execute(t_battlefield& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:22338
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_cursor_mode t_combat_user_action_area::get_action() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot;vftable-certificate=1f25b0:22339;class=?%C:\work\game\combat_user_action.cpp2954624106::t_combat_user_action_area;proof=unique-hierarchy-method-and-slot-cleanup;cleanup=8;checked-rtti-and-raw-slots;vft=4ddeac,col=5070f4,offset=0,slot=3,entry=1f25b0; map:22339
VA_CHT_1(0x005f25b0, 0x50)
t_mouse_window* t_combat_user_action_area::get_cursor(t_battlefield& arg_0, std::string& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:22340
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_user_action_melee::t_combat_user_action_melee(
    t_screen_point const& arg_0,
    t_attack_angle const& arg_1,
    t_abstract_combat_object* arg_2
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot;vftable-certificate=1f2600:22341;class=?%C:\work\game\combat_user_action.cpp2954624106::t_combat_user_action_melee;proof=unique-hierarchy-method-and-slot-cleanup;cleanup=4;checked-rtti-and-raw-slots;vft=4dded4,col=507140,offset=0,slot=1,entry=1f2600; map:22341
VA_CHT_1(0x005f2600, 0x31)
void t_combat_user_action_melee::execute(t_battlefield& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:22342
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_cursor_mode t_combat_user_action_melee::get_action() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot;vftable-certificate=1f2640:22343;class=?%C:\work\game\combat_user_action.cpp2954624106::t_combat_user_action_melee;proof=unique-hierarchy-method-and-slot-cleanup;cleanup=8;checked-rtti-and-raw-slots;vft=4dded4,col=507140,offset=0,slot=3,entry=1f2640; map:22343
VA_CHT_1(0x005f2640, 0xbf)
t_mouse_window* t_combat_user_action_melee::get_cursor(t_battlefield& arg_0, std::string& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:22344
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_user_action_move::t_combat_user_action_move(t_screen_point const& arg_0, t_map_point_2d const& arg_1)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot;vftable-certificate=1f2700:22345;class=?%C:\work\game\combat_user_action.cpp2954624106::t_combat_user_action_move;proof=unique-hierarchy-method-and-slot-cleanup;cleanup=4;checked-rtti-and-raw-slots;vft=4ddee8,col=50718c,offset=0,slot=1,entry=1f2700; map:22345
VA_CHT_1(0x005f2700, 0x27)
void t_combat_user_action_move::execute(t_battlefield& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:22346
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_cursor_mode t_combat_user_action_move::get_action() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot;vftable-certificate=1f2730:22347;class=?%C:\work\game\combat_user_action.cpp2954624106::t_combat_user_action_move;proof=unique-hierarchy-method-and-slot-cleanup;cleanup=8;checked-rtti-and-raw-slots;vft=4ddee8,col=50718c,offset=0,slot=3,entry=1f2730; map:22347
VA_CHT_1(0x005f2730, 0x26)
t_mouse_window* t_combat_user_action_move::get_cursor(t_battlefield& arg_0, std::string& arg_1)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67366; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005f2760, 0x11, STATIC_INIT_DISPATCH, "combat_user_action#7")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67367; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005f2780, 0xd1, STATIC_CTOR, "combat_user_action#7")

// name:C; dyninit; see ledger; map:67368
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "combat_user_action#7")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67369; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005f2860, 0xa, STATIC_DTOR, "combat_user_action#7")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67370; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005f2870, 0x11, STATIC_INIT_DISPATCH, "combat_user_action#8")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67371; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005f2890, 0xd1, STATIC_CTOR, "combat_user_action#8")

// name:C; dyninit; see ledger; map:67372
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "combat_user_action#8")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67373; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005f2970, 0xa, STATIC_DTOR, "combat_user_action#8")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67374; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005f2980, 0x11, STATIC_INIT_DISPATCH, "combat_user_action#9")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67375; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005f29a0, 0xd1, STATIC_CTOR, "combat_user_action#9")

// name:C; dyninit; see ledger; map:67376
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "combat_user_action#9")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67377; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005f2a80, 0xa, STATIC_DTOR, "combat_user_action#9")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67378; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005f2a90, 0x11, STATIC_INIT_DISPATCH, "combat_user_action#10")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67379; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005f2ab0, 0xd1, STATIC_CTOR, "combat_user_action#10")

// name:C; dyninit; see ledger; map:67380
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "combat_user_action#10")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67381; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005f2b90, 0xa, STATIC_DTOR, "combat_user_action#10")

namespace {

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:22348
VA_CHT_1(0x005f2ba0, 0x434)
t_combat_user_action_none::t_combat_user_action_none(
    t_battlefield& arg_0,
    t_screen_point const& arg_1,
    t_combat_creature* arg_2
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:22349
VA_CHT_1(0x005f2fe0, 0x1e)
void t_combat_user_action_none::execute(t_battlefield& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:22350
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_cursor_mode t_combat_user_action_none::get_action() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot;vftable-certificate=1f3050:22351;class=?%C:\work\game\combat_user_action.cpp2954624106::t_combat_user_action_none;proof=unique-hierarchy-method-and-slot-cleanup;cleanup=8;checked-rtti-and-raw-slots;vft=4ddefc,col=5071d8,offset=0,slot=3,entry=1f3050; map:22351
VA_CHT_1(0x005f3050, 0x14c)
t_mouse_window* t_combat_user_action_none::get_cursor(t_battlefield& arg_0, std::string& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:22352
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_user_action_ranged::t_combat_user_action_ranged(
    t_screen_point const& arg_0,
    t_combat_creature* arg_1
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot;vftable-certificate=1f31a0:22353;class=?%C:\work\game\combat_user_action.cpp2954624106::t_combat_user_action_ranged;proof=unique-hierarchy-method-and-slot-cleanup;cleanup=4;checked-rtti-and-raw-slots;vft=4ddf10,col=507224,offset=0,slot=1,entry=1f31a0; map:22353
VA_CHT_1(0x005f31a0, 0x2a)
void t_combat_user_action_ranged::execute(t_battlefield& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:22354
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_cursor_mode t_combat_user_action_ranged::get_action() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot;vftable-certificate=1f31d0:22355;class=?%C:\work\game\combat_user_action.cpp2954624106::t_combat_user_action_ranged;proof=unique-hierarchy-method-and-slot-cleanup;cleanup=8;checked-rtti-and-raw-slots;vft=4ddf10,col=507224,offset=0,slot=3,entry=1f31d0; map:22355
VA_CHT_1(0x005f31d0, 0x40)
t_mouse_window* t_combat_user_action_ranged::get_cursor(t_battlefield& arg_0, std::string& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:22356
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_user_action_spell::t_combat_user_action_spell(t_screen_point const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:22357
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_combat_user_action_spell::execute(t_battlefield& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:22358
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_cursor_mode t_combat_user_action_spell::get_action() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:22359
VA_CHT_1(0x005f3220, 0x20)
t_mouse_window* t_combat_user_action_spell::get_cursor(t_battlefield& arg_0, std::string& arg_1)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:22360
VA_CHT_1(0x005f3240, 0xe4)
t_counted_ptr<t_combat_user_action> compare_user_actions(
    t_combat_user_action* arg_0,
    t_combat_user_action* arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:22361
VA_CHT_1(0x005f3330, 0x31a)
t_counted_ptr<t_combat_user_action> get_combat_user_action(
    t_battlefield& arg_0,
    t_screen_point const& arg_1,
    t_combat_creature* arg_2
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:67382
VA_CHT_1(0x005f3660, 0x249)
static t_counted_ptr<t_combat_user_action> create_melee_action(
    t_battlefield& arg_0,
    t_screen_point const& arg_1,
    t_combat_creature* arg_2
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:67383
VA_CHT_1(0x005f38b0, 0x134)
static t_counted_ptr<t_combat_user_action> create_move_action(
    t_battlefield& arg_0,
    t_screen_point const& arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:67384
VA_CHT_1(0x005f39f0, 0x1b7)
static t_counted_ptr<t_combat_user_action> create_ranged_action(
    t_battlefield& arg_0,
    t_screen_point const& arg_1,
    t_combat_creature* arg_2
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:67385
VA_CHT_1(0x005f3bb0, 0x81)
static t_counted_ptr<t_combat_user_action> create_spell_action(
    t_battlefield& arg_0,
    t_screen_point const& arg_1
)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:67386; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005f3c40, 0x20, STATIC_INIT_DISPATCH, combat_user_action)

// name:A; map symbol; map:22362
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_combat_user_action)

// name:A; map symbol; map:22363
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_combat_user_action)

// name:A; map symbol; map:22364
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_user_action::t_combat_user_action(t_screen_point const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:22365
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_combat_user_action_area)

// name:A; map symbol; map:22366
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_combat_user_action_area)

namespace {

// name:A; map symbol; map:22367
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_user_action_area::~t_combat_user_action_area()
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:22368
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_combat_user_action_melee)

// name:A; map symbol; map:22369
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_combat_user_action_melee)

namespace {

// name:A; map symbol; map:22370
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_user_action_melee::~t_combat_user_action_melee()
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:22371
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_combat_user_action_move)

// name:A; map symbol; map:22372
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_combat_user_action_move)

namespace {

// name:A; map symbol; map:22373
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_user_action_move::~t_combat_user_action_move()
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:22374
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_combat_user_action_none)

// name:A; map symbol; map:22375
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_combat_user_action_none)

namespace {

// name:A; map symbol; map:22376
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_user_action_none::~t_combat_user_action_none()
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:22377
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_combat_user_action_ranged)

// name:A; map symbol; map:22378
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_combat_user_action_ranged)

namespace {

// name:A; map symbol; map:22379
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_user_action_ranged::~t_combat_user_action_ranged()
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:22380
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_combat_user_action_spell)

// name:A; map symbol; map:22381
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_combat_user_action_spell)

namespace {

// name:A; map symbol; map:22382
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_user_action_spell::~t_combat_user_action_spell()
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:22383
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_point const& t_combat_user_action::get_screen_point() const
{
    // Body unavailable.
}

// name:A; map symbol; map:22384
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_cursor_mode t_battlefield::get_preferred_action() const
{
    // Body unavailable.
}

// name:A; map symbol; map:22385
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_combat_user_action>::t_counted_ptr<t_combat_user_action>(
    t_counted_ptr<t_combat_user_action> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:22386
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_combat_user_action>::t_counted_ptr<t_combat_user_action>(t_combat_user_action* arg_0)
{
    // Body unavailable.
}

// === .rdata (7 symbols) ===

// confidence:A; rtti-name; map:44133
DATA_CHT_1_COMPGEN(0x008ddec0, "const t_combat_user_action::`vftable'")

// confidence:A; rtti-name; map:44134
DATA_CHT_1_COMPGEN(0x008ddeac, "const t_combat_user_action_area::`vftable'")

// confidence:A; rtti-name; map:44135
DATA_CHT_1_COMPGEN(0x008dded4, "const t_combat_user_action_melee::`vftable'")

// confidence:A; rtti-name; map:44136
DATA_CHT_1_COMPGEN(0x008ddee8, "const t_combat_user_action_move::`vftable'")

// confidence:A; rtti-name; map:44137
DATA_CHT_1_COMPGEN(0x008ddefc, "const t_combat_user_action_none::`vftable'")

// confidence:A; rtti-name; map:44138
DATA_CHT_1_COMPGEN(0x008ddf10, "const t_combat_user_action_ranged::`vftable'")

// confidence:A; rtti-name; map:44139
DATA_CHT_1_COMPGEN(0x008ddf24, "const t_combat_user_action_spell::`vftable'")

// === .rdata$r (28 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_combat_user_action@@;bcd=5070a4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:51445
DATA_CHT_1_COMPGEN(0x009070a4, "t_combat_user_action::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_combat_user_action@@;vft=4ddec0;col=507090;td=59ccdc;chd=507080;offset=0;cdOffset=0;validated-hierarchy; map:51446
DATA_CHT_1_COMPGEN(0x00907074, "t_combat_user_action::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_combat_user_action@@;vft=4ddec0;col=507090;td=59ccdc;chd=507080;offset=0;cdOffset=0;validated-hierarchy; map:51447
DATA_CHT_1_COMPGEN(0x00907080, "t_combat_user_action::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_combat_user_action@@;vft=4ddec0;col=507090;td=59ccdc;chd=507080;offset=0;cdOffset=0;validated-hierarchy; map:51448
DATA_CHT_1_COMPGEN(0x00907090, "const t_combat_user_action::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_combat_user_action_area@?%C:\Work\game\combat_user_action.cpp51541572@@;bcd=5070bc;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:51449
DATA_CHT_1_COMPGEN(0x009070bc, "t_combat_user_action_area::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_combat_user_action_area@?%C:\Work\game\combat_user_action.cpp51541572@@;vft=4ddeac;col=5070f4;td=59cd00;chd=5070e4;offset=0;cdOffset=0;validated-hierarchy; map:51450
DATA_CHT_1_COMPGEN(0x009070d4, "t_combat_user_action_area::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_combat_user_action_area@?%C:\Work\game\combat_user_action.cpp51541572@@;vft=4ddeac;col=5070f4;td=59cd00;chd=5070e4;offset=0;cdOffset=0;validated-hierarchy; map:51451
DATA_CHT_1_COMPGEN(0x009070e4, "t_combat_user_action_area::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_combat_user_action_area@?%C:\Work\game\combat_user_action.cpp51541572@@;vft=4ddeac;col=5070f4;td=59cd00;chd=5070e4;offset=0;cdOffset=0;validated-hierarchy; map:51452
DATA_CHT_1_COMPGEN(0x009070f4, "const t_combat_user_action_area::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_combat_user_action_melee@?%C:\Work\game\combat_user_action.cpp51541572@@;bcd=507108;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:51453
DATA_CHT_1_COMPGEN(0x00907108, "t_combat_user_action_melee::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_combat_user_action_melee@?%C:\Work\game\combat_user_action.cpp51541572@@;vft=4dded4;col=507140;td=59cd58;chd=507130;offset=0;cdOffset=0;validated-hierarchy; map:51454
DATA_CHT_1_COMPGEN(0x00907120, "t_combat_user_action_melee::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_combat_user_action_melee@?%C:\Work\game\combat_user_action.cpp51541572@@;vft=4dded4;col=507140;td=59cd58;chd=507130;offset=0;cdOffset=0;validated-hierarchy; map:51455
DATA_CHT_1_COMPGEN(0x00907130, "t_combat_user_action_melee::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_combat_user_action_melee@?%C:\Work\game\combat_user_action.cpp51541572@@;vft=4dded4;col=507140;td=59cd58;chd=507130;offset=0;cdOffset=0;validated-hierarchy; map:51456
DATA_CHT_1_COMPGEN(0x00907140, "const t_combat_user_action_melee::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_combat_user_action_move@?%C:\Work\game\combat_user_action.cpp51541572@@;bcd=507154;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:51457
DATA_CHT_1_COMPGEN(0x00907154, "t_combat_user_action_move::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_combat_user_action_move@?%C:\Work\game\combat_user_action.cpp51541572@@;vft=4ddee8;col=50718c;td=59cdb0;chd=50717c;offset=0;cdOffset=0;validated-hierarchy; map:51458
DATA_CHT_1_COMPGEN(0x0090716c, "t_combat_user_action_move::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_combat_user_action_move@?%C:\Work\game\combat_user_action.cpp51541572@@;vft=4ddee8;col=50718c;td=59cdb0;chd=50717c;offset=0;cdOffset=0;validated-hierarchy; map:51459
DATA_CHT_1_COMPGEN(0x0090717c, "t_combat_user_action_move::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_combat_user_action_move@?%C:\Work\game\combat_user_action.cpp51541572@@;vft=4ddee8;col=50718c;td=59cdb0;chd=50717c;offset=0;cdOffset=0;validated-hierarchy; map:51460
DATA_CHT_1_COMPGEN(0x0090718c, "const t_combat_user_action_move::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_combat_user_action_none@?%C:\Work\game\combat_user_action.cpp51541572@@;bcd=5071a0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:51461
DATA_CHT_1_COMPGEN(0x009071a0, "t_combat_user_action_none::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_combat_user_action_none@?%C:\Work\game\combat_user_action.cpp51541572@@;vft=4ddefc;col=5071d8;td=59ce58;chd=5071c8;offset=0;cdOffset=0;validated-hierarchy; map:51462
DATA_CHT_1_COMPGEN(0x009071b8, "t_combat_user_action_none::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_combat_user_action_none@?%C:\Work\game\combat_user_action.cpp51541572@@;vft=4ddefc;col=5071d8;td=59ce58;chd=5071c8;offset=0;cdOffset=0;validated-hierarchy; map:51463
DATA_CHT_1_COMPGEN(0x009071c8, "t_combat_user_action_none::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_combat_user_action_none@?%C:\Work\game\combat_user_action.cpp51541572@@;vft=4ddefc;col=5071d8;td=59ce58;chd=5071c8;offset=0;cdOffset=0;validated-hierarchy; map:51464
DATA_CHT_1_COMPGEN(0x009071d8, "const t_combat_user_action_none::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_combat_user_action_ranged@?%C:\Work\game\combat_user_action.cpp51541572@@;bcd=5071ec;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:51465
DATA_CHT_1_COMPGEN(0x009071ec, "t_combat_user_action_ranged::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_combat_user_action_ranged@?%C:\Work\game\combat_user_action.cpp51541572@@;vft=4ddf10;col=507224;td=59cec0;chd=507214;offset=0;cdOffset=0;validated-hierarchy; map:51466
DATA_CHT_1_COMPGEN(0x00907204, "t_combat_user_action_ranged::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_combat_user_action_ranged@?%C:\Work\game\combat_user_action.cpp51541572@@;vft=4ddf10;col=507224;td=59cec0;chd=507214;offset=0;cdOffset=0;validated-hierarchy; map:51467
DATA_CHT_1_COMPGEN(0x00907214, "t_combat_user_action_ranged::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_combat_user_action_ranged@?%C:\Work\game\combat_user_action.cpp51541572@@;vft=4ddf10;col=507224;td=59cec0;chd=507214;offset=0;cdOffset=0;validated-hierarchy; map:51468
DATA_CHT_1_COMPGEN(0x00907224, "const t_combat_user_action_ranged::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_combat_user_action_spell@?%C:\Work\game\combat_user_action.cpp51541572@@;bcd=507238;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:51469
DATA_CHT_1_COMPGEN(0x00907238, "t_combat_user_action_spell::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_combat_user_action_spell@?%C:\Work\game\combat_user_action.cpp51541572@@;vft=4ddf24;col=507270;td=59cf18;chd=507260;offset=0;cdOffset=0;validated-hierarchy; map:51470
DATA_CHT_1_COMPGEN(0x00907250, "t_combat_user_action_spell::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_combat_user_action_spell@?%C:\Work\game\combat_user_action.cpp51541572@@;vft=4ddf24;col=507270;td=59cf18;chd=507260;offset=0;cdOffset=0;validated-hierarchy; map:51471
DATA_CHT_1_COMPGEN(0x00907260, "t_combat_user_action_spell::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_combat_user_action_spell@?%C:\Work\game\combat_user_action.cpp51541572@@;vft=4ddf24;col=507270;td=59cf18;chd=507260;offset=0;cdOffset=0;validated-hierarchy; map:51472
DATA_CHT_1_COMPGEN(0x00907270, "const t_combat_user_action_spell::`RTTI Complete Object Locator'")

// === .data (7 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_combat_user_action@@;td=59ccdc;validated-header; map:58376
DATA_CHT_1_COMPGEN(0x0099ccdc, "t_combat_user_action `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_combat_user_action_area@?%C:\Work\game\combat_user_action.cpp51541572@@;td=59cd00;validated-header; map:58377
DATA_CHT_1_COMPGEN(0x0099cd00, "t_combat_user_action_area `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_combat_user_action_melee@?%C:\Work\game\combat_user_action.cpp51541572@@;td=59cd58;validated-header; map:58378
DATA_CHT_1_COMPGEN(0x0099cd58, "t_combat_user_action_melee `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_combat_user_action_move@?%C:\Work\game\combat_user_action.cpp51541572@@;td=59cdb0;validated-header; map:58379
DATA_CHT_1_COMPGEN(0x0099cdb0, "t_combat_user_action_move `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_combat_user_action_none@?%C:\Work\game\combat_user_action.cpp51541572@@;td=59ce58;validated-header; map:58380
DATA_CHT_1_COMPGEN(0x0099ce58, "t_combat_user_action_none `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_combat_user_action_ranged@?%C:\Work\game\combat_user_action.cpp51541572@@;td=59cec0;validated-header; map:58381
DATA_CHT_1_COMPGEN(0x0099cec0, "t_combat_user_action_ranged `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_combat_user_action_spell@?%C:\Work\game\combat_user_action.cpp51541572@@;td=59cf18;validated-header; map:58382
DATA_CHT_1_COMPGEN(0x0099cf18, "t_combat_user_action_spell `RTTI Type Descriptor'")
