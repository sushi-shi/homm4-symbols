// dialog_combat_results.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\dialog_combat_results.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 89/125 (A:12 B:1 C:0); unaccounted 36; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (110 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66051; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00665160, 0x15, STATIC_INIT_DISPATCH, "dialog_combat_results#1")

// name:C; dyninit; see ledger; map:66052
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "dialog_combat_results#1")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66053; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00665180, 0x11, STATIC_INIT_DISPATCH, "dialog_combat_results#2")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66054; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006651a0, 0xd7, STATIC_CTOR, "dialog_combat_results#2")

// name:C; dyninit; see ledger; map:66055
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "dialog_combat_results#2")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66056; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00665280, 0xa, STATIC_DTOR, "dialog_combat_results#2")

namespace {

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:24732
VA_CHT_1(0x00665290, 0x1ca)
void play_combat_results_bink_file(
    t_combat_cinematic_result arg_0,
    t_window* arg_1,
    t_screen_point arg_2,
    bool arg_3
)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66057; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00665460, 0x11, STATIC_INIT_DISPATCH, "dialog_combat_results#3")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66058; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00665480, 0xd1, STATIC_CTOR, "dialog_combat_results#3")

// name:C; dyninit; see ledger; map:66059
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "dialog_combat_results#3")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66060; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00665560, 0xa, STATIC_DTOR, "dialog_combat_results#3")

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:24733
VA_CHT_1(0x00665570, 0x1a0)
t_combat_results_dialog::t_combat_results_dialog(
    t_window* arg_0,
    t_creature_array** arg_1,
    t_player** arg_2,
    t_creature_array* arg_3,
    t_combat_result arg_4,
    t_town const* arg_5,
    t_adv_map_point const& arg_6,
    t_counted_ptr<t_creature_stack> (& arg_7)[2]
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:24734
VA_CHT_1(0x00665870, 0x232)
t_text_window* t_combat_results_dialog::add_text(
    std::string const& arg_0,
    std::string const& arg_1,
    int arg_2,
    bool arg_3,
    bool arg_4
)
{
    // Body unavailable.
}

// name:A; map symbol; map:24735
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_text_window* t_combat_results_dialog::add_text_creature_select(
    std::string const& arg_0,
    std::string const& arg_1,
    int arg_2,
    t_screen_point arg_3,
    bool arg_4
)
{
    // Body unavailable.
}

// name:A; map symbol; map:24736
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_combat_results_dialog::ok_clicked(t_button* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:24737
VA_CHT_1(0x00665ab0, 0x2eb)
void t_combat_results_dialog::create_buttons()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:24738
VA_CHT_1(0x00665da0, 0x837)
void t_combat_results_dialog::create_icons()
{
    // Body unavailable.
}

// name:A; map symbol; map:66061
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
static void set_creature(
    t_bitmap_layer_cache_window* arg_0,
    t_abstract_creature const* arg_1,
    int arg_2,
    bool arg_3
)
{
    // Body unavailable.
}

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66062; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006665e0, 0x11, STATIC_INIT_DISPATCH, "dialog_combat_results#4")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66063; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00666600, 0xd1, STATIC_CTOR, "dialog_combat_results#4")

// name:C; dyninit; see ledger; map:66064
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "dialog_combat_results#4")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66065; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006666e0, 0xa, STATIC_DTOR, "dialog_combat_results#4")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66066; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006666f0, 0x11, STATIC_INIT_DISPATCH, "dialog_combat_results#5")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66067; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00666710, 0xd1, STATIC_CTOR, "dialog_combat_results#5")

// name:C; dyninit; see ledger; map:66068
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "dialog_combat_results#5")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66069; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006667f0, 0xa, STATIC_DTOR, "dialog_combat_results#5")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66070; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00666800, 0x11, STATIC_INIT_DISPATCH, "dialog_combat_results#6")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66071; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00666820, 0xd1, STATIC_CTOR, "dialog_combat_results#6")

// name:C; dyninit; see ledger; map:66072
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "dialog_combat_results#6")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66073; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00666900, 0xa, STATIC_DTOR, "dialog_combat_results#6")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66074; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00666910, 0x11, STATIC_INIT_DISPATCH, "dialog_combat_results#7")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66075; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00666930, 0xd1, STATIC_CTOR, "dialog_combat_results#7")

// name:C; dyninit; see ledger; map:66076
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "dialog_combat_results#7")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66077; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00666a10, 0xa, STATIC_DTOR, "dialog_combat_results#7")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66078; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00666a20, 0x11, STATIC_INIT_DISPATCH, "dialog_combat_results#8")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66079; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00666a40, 0xd1, STATIC_CTOR, "dialog_combat_results#8")

// name:C; dyninit; see ledger; map:66080
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "dialog_combat_results#8")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66081; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00666b20, 0xa, STATIC_DTOR, "dialog_combat_results#8")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66082; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00666b30, 0x11, STATIC_INIT_DISPATCH, "dialog_combat_results#9")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66083; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00666b50, 0xd1, STATIC_CTOR, "dialog_combat_results#9")

// name:C; dyninit; see ledger; map:66084
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "dialog_combat_results#9")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66085; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00666c30, 0xa, STATIC_DTOR, "dialog_combat_results#9")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66086; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00666c40, 0x11, STATIC_INIT_DISPATCH, "dialog_combat_results#10")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66087; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00666c60, 0xd1, STATIC_CTOR, "dialog_combat_results#10")

// name:C; dyninit; see ledger; map:66088
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "dialog_combat_results#10")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66089; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00666d40, 0xa, STATIC_DTOR, "dialog_combat_results#10")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66090; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00666d50, 0x11, STATIC_INIT_DISPATCH, "dialog_combat_results#11")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66091; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00666d70, 0xd1, STATIC_CTOR, "dialog_combat_results#11")

// name:C; dyninit; see ledger; map:66092
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "dialog_combat_results#11")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66093; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00666e50, 0xa, STATIC_DTOR, "dialog_combat_results#11")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66094; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00666e60, 0x11, STATIC_INIT_DISPATCH, "dialog_combat_results#12")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66095; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00666e80, 0xd1, STATIC_CTOR, "dialog_combat_results#12")

// name:C; dyninit; see ledger; map:66096
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "dialog_combat_results#12")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66097; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00666f60, 0xa, STATIC_DTOR, "dialog_combat_results#12")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66098; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00666f70, 0x11, STATIC_INIT_DISPATCH, "dialog_combat_results#13")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66099; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00666f90, 0xd1, STATIC_CTOR, "dialog_combat_results#13")

// name:C; dyninit; see ledger; map:66100
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "dialog_combat_results#13")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66101; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00667070, 0xa, STATIC_DTOR, "dialog_combat_results#13")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66102; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00667080, 0x11, STATIC_INIT_DISPATCH, "dialog_combat_results#14")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66103; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006670a0, 0xd1, STATIC_CTOR, "dialog_combat_results#14")

// name:C; dyninit; see ledger; map:66104
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "dialog_combat_results#14")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66105; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00667180, 0xa, STATIC_DTOR, "dialog_combat_results#14")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66106; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00667190, 0x11, STATIC_INIT_DISPATCH, "dialog_combat_results#15")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66107; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006671b0, 0xd1, STATIC_CTOR, "dialog_combat_results#15")

// name:C; dyninit; see ledger; map:66108
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "dialog_combat_results#15")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66109; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00667290, 0xa, STATIC_DTOR, "dialog_combat_results#15")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66110; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006672a0, 0x11, STATIC_INIT_DISPATCH, "dialog_combat_results#16")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66111; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006672c0, 0xd1, STATIC_CTOR, "dialog_combat_results#16")

// name:C; dyninit; see ledger; map:66112
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "dialog_combat_results#16")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66113; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006673a0, 0xa, STATIC_DTOR, "dialog_combat_results#16")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66114; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006673b0, 0x11, STATIC_INIT_DISPATCH, "dialog_combat_results#17")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66115; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006673d0, 0xd1, STATIC_CTOR, "dialog_combat_results#17")

// name:C; dyninit; see ledger; map:66116
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "dialog_combat_results#17")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66117; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006674b0, 0xa, STATIC_DTOR, "dialog_combat_results#17")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66118; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006674c0, 0x11, STATIC_INIT_DISPATCH, "dialog_combat_results#18")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66119; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006674e0, 0xd1, STATIC_CTOR, "dialog_combat_results#18")

// name:C; dyninit; see ledger; map:66120
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "dialog_combat_results#18")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66121; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006675c0, 0xa, STATIC_DTOR, "dialog_combat_results#18")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66122; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006675d0, 0x11, STATIC_INIT_DISPATCH, "dialog_combat_results#19")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66123; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006675f0, 0xd1, STATIC_CTOR, "dialog_combat_results#19")

// name:C; dyninit; see ledger; map:66124
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "dialog_combat_results#19")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66125; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006676d0, 0xa, STATIC_DTOR, "dialog_combat_results#19")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66126; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006676e0, 0x11, STATIC_INIT_DISPATCH, "dialog_combat_results#20")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66127; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00667700, 0xd1, STATIC_CTOR, "dialog_combat_results#20")

// name:C; dyninit; see ledger; map:66128
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "dialog_combat_results#20")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66129; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006677e0, 0xa, STATIC_DTOR, "dialog_combat_results#20")

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:24739
VA_CHT_1(0x006677f0, 0xabc)
void t_combat_results_dialog::create_text()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:66130
VA_CHT_1(0x006682d0, 0x1b9)
static std::string format_hero_list(
    t_creature_array const& arg_0,
    std::string const& arg_1,
    std::string const& arg_2
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:66131
VA_CHT_1(0x00668490, 0x50)
static std::string get_destination_name(
    t_adventure_map* arg_0,
    t_player* arg_1,
    t_adv_map_point const& arg_2,
    t_creature_array& arg_3,
    t_town const* arg_4
)
{
    // Body unavailable.
}

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66132; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006684e0, 0x11, STATIC_INIT_DISPATCH, "dialog_combat_results#21")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66133; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00668500, 0xd1, STATIC_CTOR, "dialog_combat_results#21")

// name:C; dyninit; see ledger; map:66134
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "dialog_combat_results#21")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66135; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006685e0, 0xa, STATIC_DTOR, "dialog_combat_results#21")

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:24740
VA_CHT_1(0x006685f0, 0x35d)
void t_combat_results_dialog::initialize()
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:66136; name:B (dyninit; see ledger)
VA_CHT_1(0x006689f0, 0x20)
// dialog_combat_results$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:66138; name:B (dyninit; see ledger)
VA_CHT_1(0x00668a10, 0x5c)
// dialog_combat_results$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:66139
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// dialog_combat_results$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:66140
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// dialog_combat_results$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:66141
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// dialog_combat_results$tatexit4
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:24741
VA_CHT_1_COMPGEN(0x00665710, 0x1e, VECTOR_DELETING_DTOR, t_combat_results_dialog)

// name:A; map symbol; map:24742
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_combat_results_dialog)

// name:A; map symbol; map:24743
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_results_dialog::~t_combat_results_dialog()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:24744
VA_CHT_1(0x00668950, 0x33)
bool attacker_won(t_combat_result arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:24745
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<t_button*> bound_handler(
    t_combat_results_dialog& arg_0,
    void (t_combat_results_dialog::*)(t_button*)
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:24746
VA_CHT_1(0x00668990, 0x5e)
t_bound_handler_1<t_combat_results_dialog, t_button*>::t_bound_handler_1<t_combat_results_dialog, t_button*>(
    t_combat_results_dialog& arg_0,
    void (t_combat_results_dialog::*)(t_button*)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:24747
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_1<t_combat_results_dialog, t_button*>::operator()(t_button* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:24748
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_1<t_combat_results_dialog, t_button*>")

// name:A; map symbol; map:24749
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_1<t_combat_results_dialog, t_button*>")

// name:A; map symbol; map:24750
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_1<t_combat_results_dialog, t_button*>::~t_bound_handler_1<t_combat_results_dialog, t_button*>(

)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:24751
VA_CHT_1_COMPGEN(0x00668a70, 0x8, VECTOR_DELETING_DTOR, "t_bound_handler_1<t_combat_results_dialog, t_button*>")

// === .rdata (3 symbols) ===

// confidence:A; rtti-name; map:44314
DATA_CHT_1_COMPGEN(0x008e005c, "const t_combat_results_dialog::`vftable'")

// confidence:A; rtti-name; map:44315
DATA_CHT_1_COMPGEN(0x008e00cc, "const t_bound_handler_1<t_combat_results_dialog, t_button*>::`vftable'{for `t_abstract_function_1<void, t_button*>'}")

// confidence:B; rtti-order; map:44316
DATA_CHT_1_COMPGEN(0x008e00d8, "const t_bound_handler_1<t_combat_results_dialog, t_button*>::`vftable'{for `t_counted_object'}")

// === .rdata$r (9 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_combat_results_dialog@@;bcd=5097a8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:51950
DATA_CHT_1_COMPGEN(0x009097a8, "t_combat_results_dialog::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_combat_results_dialog@@;vft=4e005c;col=5097e8;td=5a17c4;chd=5097d8;offset=0;cdOffset=0;validated-hierarchy; map:51951
DATA_CHT_1_COMPGEN(0x009097c0, "t_combat_results_dialog::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_combat_results_dialog@@;vft=4e005c;col=5097e8;td=5a17c4;chd=5097d8;offset=0;cdOffset=0;validated-hierarchy; map:51952
DATA_CHT_1_COMPGEN(0x009097d8, "t_combat_results_dialog::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_combat_results_dialog@@;vft=4e005c;col=5097e8;td=5a17c4;chd=5097d8;offset=0;cdOffset=0;validated-hierarchy; map:51953
DATA_CHT_1_COMPGEN(0x009097e8, "const t_combat_results_dialog::`RTTI Complete Object Locator'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_1@Vt_combat_results_dialog@@PAVt_button@@@@;vft=4e00cc;col=50984c;td=5a1a60;chd=50983c;offset=8;cdOffset=0;validated-hierarchy; map:51954
DATA_CHT_1_COMPGEN(0x0090984c, "const t_bound_handler_1<t_combat_results_dialog, t_button*>::`RTTI Complete Object Locator'{for `t_abstract_function_1<void, t_button*>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_1@Vt_combat_results_dialog@@PAVt_button@@@@;bcd=509810;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:51955
DATA_CHT_1_COMPGEN(0x00909810, "t_bound_handler_1<t_combat_results_dialog, t_button*>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_1@Vt_combat_results_dialog@@PAVt_button@@@@;vft=4e00cc;col=50984c;td=5a1a60;chd=50983c;offset=8;cdOffset=0;validated-hierarchy; map:51956
DATA_CHT_1_COMPGEN(0x00909828, "t_bound_handler_1<t_combat_results_dialog, t_button*>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_1@Vt_combat_results_dialog@@PAVt_button@@@@;vft=4e00cc;col=50984c;td=5a1a60;chd=50983c;offset=8;cdOffset=0;validated-hierarchy; map:51957
DATA_CHT_1_COMPGEN(0x0090983c, "t_bound_handler_1<t_combat_results_dialog, t_button*>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:51958
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_1<t_combat_results_dialog, t_button*>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// === .data (3 symbols) ===

// name:A; map symbol; map:58481
DATA_CHT_1(UNACCOUNTED)
// t_bink_info*bink_info_array

// confidence:A; rtti-type-name; type-name=.?AVt_combat_results_dialog@@;td=5a17c4;validated-header; map:58482
DATA_CHT_1_COMPGEN(0x009a17c4, "t_combat_results_dialog `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_1@Vt_combat_results_dialog@@PAVt_button@@@@;td=5a1a60;validated-header; map:58483
DATA_CHT_1_COMPGEN(0x009a1a60, "t_bound_handler_1<t_combat_results_dialog, t_button*> `RTTI Type Descriptor'")
