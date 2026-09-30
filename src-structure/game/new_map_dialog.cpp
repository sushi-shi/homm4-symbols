// new_map_dialog.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\new_map_dialog.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 191/332 (A:110 B:48 C:33); unaccounted 141; skipped std 129.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (226 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:64085; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0072e680, 0x15, STATIC_INIT_DISPATCH, "new_map_dialog#1")

// name:C; dyninit; see ledger; map:64086
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "new_map_dialog#1")

// confidence:A; dyninit-init; owner-conf-C; map:64087; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0072e6a0, 0x11, STATIC_INIT_DISPATCH, k_new_map_bitmaps)

// confidence:B; dyninit-ctor; owner-conf-C; map:64088; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0072e6c0, 0xd7, STATIC_CTOR, k_new_map_bitmaps)

// name:C; dyninit; see ledger; map:64089
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, k_new_map_bitmaps)

// confidence:B; dyninit-dtor; owner-conf-C; map:64090; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0072e7a0, 0xa, STATIC_DTOR, k_new_map_bitmaps)

// confidence:A; dyninit-init; owner-conf-B; map:64091; name:A (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0072e7b0, 0x11, STATIC_INIT_DISPATCH, g_difficulty_icons)

// confidence:B; dyninit-ctor; owner-conf-B; map:64092; name:A (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0072e7d0, 0xd7, STATIC_CTOR, g_difficulty_icons)

// name:A; dyninit; see ledger; map:64093
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, g_difficulty_icons)

// confidence:B; dyninit-dtor; owner-conf-B; map:64094; name:A (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0072e8b0, 0xa, STATIC_DTOR, g_difficulty_icons)

namespace {

// name:A; map symbol; map:30507
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_campaign_file_header* t_subfolder_info::get_file_header_ptr()
{
    // Body unavailable.
}

// name:A; map symbol; map:30508
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_campaign_file_header const* t_subfolder_info::get_file_header_ptr() const
{
    // Body unavailable.
}

// name:A; map symbol; map:30509
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::string const& t_subfolder_info::get_file_name() const
{
    // Body unavailable.
}

// name:A; map symbol; map:30510
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::string const& t_subfolder_info::get_name() const
{
    // Body unavailable.
}

// name:A; map symbol; map:30511
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::string const& t_subfolder_info::get_description() const
{
    // Body unavailable.
}

// name:A; map symbol; map:30512
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_subfolder_info::get_number_of_maps() const
{
    // Body unavailable.
}

// name:A; map symbol; map:30513
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::string const& t_subfolder_info::get_victory_condition() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn; map:30514
VA_CHT_1(0x0072e8e0, 0x89)
std::string const& t_subfolder_info::get_loss_condition() const
{
    // Body unavailable.
}

// name:A; map symbol; map:30515
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_campaign_file_info::t_campaign_file_info(
    std::string const& arg_0,
    t_counted_ptr<t_campaign_file_header> arg_1
)
{
    // Body unavailable.
}

// confidence:A; align-order; vslot; map:30516
VA_CHT_1(0x0072e980, 0x8)
t_campaign_file_header* t_campaign_file_info::get_file_header_ptr()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vslot; map:30517
VA_CHT_1(0x0072e990, 0xe)
t_campaign_file_header const* t_campaign_file_info::get_file_header_ptr() const
{
    // Body unavailable.
}

// confidence:A; align-order; vslot; map:30518
VA_CHT_1(0x0072e9a0, 0x8)
std::string const& t_campaign_file_info::get_file_name() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vslot; map:30519
VA_CHT_1(0x0072e9b0, 0xe)
std::string const& t_campaign_file_info::get_name() const
{
    // Body unavailable.
}

// name:A; map symbol; map:30520
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::string const& t_campaign_file_info::get_description() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vslot; map:30521
VA_CHT_1(0x0072e9c0, 0xe)
int t_campaign_file_info::get_number_of_maps() const
{
    // Body unavailable.
}

// name:A; map symbol; map:30522
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::string const& t_campaign_file_info::get_victory_condition() const
{
    // Body unavailable.
}

// name:A; map symbol; map:30523
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::string const& t_campaign_file_info::get_loss_condition() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn; map:30524
VA_CHT_1(0x0072e9d0, 0x44c)
t_map_header const& get_map_header(t_new_map_file_info const& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn; map:30525
VA_CHT_1(0x0072ee80, 0x7)
t_counted_ptr<t_adventure_map> do_adventure_map_dialogs(t_new_map_dialog* const& arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:A; dyninit-init; owner-conf-C; map:64095; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0072ee90, 0x11, STATIC_INIT_DISPATCH, "new_map_dialog#4")

// confidence:B; dyninit-ctor; owner-conf-C; map:64096; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0072eeb0, 0xd1, STATIC_CTOR, "new_map_dialog#4")

// name:C; dyninit; see ledger; map:64097
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "new_map_dialog#4")

// confidence:B; dyninit-dtor; owner-conf-C; map:64098; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0072ef90, 0xa, STATIC_DTOR, "new_map_dialog#4")

// confidence:B; align-order; retn,stable; map:30526
VA_CHT_1(0x0072efa0, 0x22d)
void t_new_map_line::set_columns(
    int arg_0,
    int arg_1,
    int arg_2,
    int arg_3,
    int arg_4,
    int arg_5,
    int arg_6,
    int arg_7
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:64099
VA_CHT_1(0x0072f1d0, 0xae)
static void move_column(t_window* arg_0, int arg_1, int arg_2, bool arg_3)
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:30527
VA_CHT_1(0x0072f280, 0x10ac)
void t_new_map_item::init(
    t_screen_point arg_0,
    t_window* arg_1,
    t_button_group& arg_2,
    t_screen_rect arg_3,
    int arg_4,
    int arg_5,
    t_handler_1<int> arg_6,
    t_handler_1<int> arg_7,
    int arg_8
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:30528
VA_CHT_1(0x00730330, 0x29)
void t_new_map_item::clicked(t_button* arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:30529
VA_CHT_1(0x00730360, 0x29)
void t_new_map_item::double_clicked(t_button* arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:30530
VA_CHT_1(0x00730390, 0x146)
void t_new_map_item::set_columns(
    int arg_0,
    int arg_1,
    int arg_2,
    int arg_3,
    int arg_4,
    int arg_5,
    int arg_6,
    int arg_7,
    int arg_8,
    int arg_9
)
{
    // Body unavailable.
}

// confidence:A; dyninit-init; owner-conf-B; map:64100; name:A (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007304e0, 0x11, STATIC_INIT_DISPATCH, k_text_parent_folder)

// confidence:B; dyninit-ctor; owner-conf-B; map:64101; name:A (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00730500, 0xd1, STATIC_CTOR, k_text_parent_folder)

// name:A; dyninit; see ledger; map:64102
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, k_text_parent_folder)

// confidence:B; dyninit-dtor; owner-conf-B; map:64103; name:A (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007305e0, 0xa, STATIC_DTOR, k_text_parent_folder)

// confidence:B; align-order; retn,stable; map:30531
VA_CHT_1(0x007305f0, 0x834)
void t_new_map_item::set(t_new_map_file_info const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:30532
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_new_map_item::set_highlighted(bool arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:30533
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_new_map_item::set_visible(bool arg_0)
{
    // Body unavailable.
}

// confidence:A; dyninit-init; owner-conf-C; map:64104; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00730e30, 0x11, STATIC_INIT_DISPATCH, k_text_cancel)

// confidence:B; dyninit-ctor; owner-conf-C; map:64105; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00730e50, 0xd1, STATIC_CTOR, k_text_cancel)

// name:C; dyninit; see ledger; map:64106
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, k_text_cancel)

// confidence:B; dyninit-dtor; owner-conf-C; map:64107; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00730f30, 0xa, STATIC_DTOR, k_text_cancel)

// confidence:A; dyninit-init; owner-conf-B; map:64108; name:A (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00730f40, 0x11, STATIC_INIT_DISPATCH, k_text_next)

// confidence:B; dyninit-ctor; owner-conf-B; map:64109; name:A (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00730f60, 0xd1, STATIC_CTOR, k_text_next)

// name:A; dyninit; see ledger; map:64110
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, k_text_next)

// confidence:B; dyninit-dtor; owner-conf-B; map:64111; name:A (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00731040, 0xa, STATIC_DTOR, k_text_next)

// confidence:A; dyninit-init; owner-conf-C; map:64112; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00731050, 0x11, STATIC_INIT_DISPATCH, k_text_play_this_map)

// confidence:B; dyninit-ctor; owner-conf-C; map:64113; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00731070, 0xd1, STATIC_CTOR, k_text_play_this_map)

// name:C; dyninit; see ledger; map:64114
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, k_text_play_this_map)

// confidence:B; dyninit-dtor; owner-conf-C; map:64115; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00731150, 0xa, STATIC_DTOR, k_text_play_this_map)

// confidence:A; dyninit-init; owner-conf-C; map:64116; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00731160, 0x11, STATIC_INIT_DISPATCH, "new_map_dialog#9")

// confidence:B; dyninit-ctor; owner-conf-C; map:64117; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00731180, 0xd1, STATIC_CTOR, "new_map_dialog#9")

// name:C; dyninit; see ledger; map:64118
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "new_map_dialog#9")

// confidence:B; dyninit-dtor; owner-conf-C; map:64119; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00731260, 0xa, STATIC_DTOR, "new_map_dialog#9")

// confidence:A; dyninit-init; owner-conf-C; map:64120; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00731270, 0x11, STATIC_INIT_DISPATCH, k_text_cancel_help)

// confidence:B; dyninit-ctor; owner-conf-C; map:64121; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00731290, 0xd1, STATIC_CTOR, k_text_cancel_help)

// name:C; dyninit; see ledger; map:64122
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, k_text_cancel_help)

// confidence:B; dyninit-dtor; owner-conf-C; map:64123; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00731370, 0xa, STATIC_DTOR, k_text_cancel_help)

// confidence:A; align-order; retn,stable,vptr; map:30534
VA_CHT_1(0x00731380, 0x892)
t_new_map_dialog::t_new_map_dialog(t_window* arg_0, bool arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:30535
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_layer const* t_new_map_dialog::get_difficulty_icon(int arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:30536
VA_CHT_1(0x00731f50, 0x12d)
t_screen_point t_new_map_dialog::find_location(std::string const& arg_0) const
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:30537
VA_CHT_1(0x00732080, 0x1a8)
t_toggle_button* t_new_map_dialog::create_toggle_button(
    std::string const& arg_0,
    t_screen_point arg_1,
    t_new_map_dialog::t_sort_order arg_2,
    t_window* arg_3
)
{
    // Body unavailable.
}

// confidence:A; dyninit-init; owner-conf-C; map:64124; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00732230, 0x15, STATIC_INIT_DISPATCH, "new_map_dialog#11")

// name:C; dyninit; see ledger; map:64125
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "new_map_dialog#11")

// confidence:A; dyninit-init; owner-conf-C; map:64126; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00732250, 0xe, STATIC_INIT_DISPATCH, "new_map_dialog#12")

// name:C; dyninit; see ledger; map:64127
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "new_map_dialog#12")

// confidence:A; dyninit-init; owner-conf-C; map:64128; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00732260, 0x11, STATIC_INIT_DISPATCH, "new_map_dialog#13")

// confidence:B; dyninit-ctor; owner-conf-C; map:64129; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00732280, 0xd1, STATIC_CTOR, "new_map_dialog#13")

// name:C; dyninit; see ledger; map:64130
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "new_map_dialog#13")

// confidence:B; dyninit-dtor; owner-conf-C; map:64131; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00732360, 0xa, STATIC_DTOR, "new_map_dialog#13")

// confidence:A; dyninit-init; owner-conf-C; map:64132; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00732370, 0x11, STATIC_INIT_DISPATCH, "new_map_dialog#14")

// confidence:B; dyninit-ctor; owner-conf-C; map:64133; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00732390, 0xd1, STATIC_CTOR, "new_map_dialog#14")

// name:C; dyninit; see ledger; map:64134
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "new_map_dialog#14")

// confidence:B; dyninit-dtor; owner-conf-C; map:64135; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00732470, 0xa, STATIC_DTOR, "new_map_dialog#14")

// confidence:C; align-order; retn,stable; map:30538
VA_CHT_1(0x00732480, 0x1817)
void t_new_map_dialog::create_controls()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:30539
VA_CHT_1(0x00733f60, 0x677)
void t_new_map_dialog::read_directory(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:30540
VA_CHT_1(0x007347a0, 0x507)
void t_new_map_dialog::set_columns()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:30541
VA_CHT_1(0x00734cb0, 0x1ba)
void t_new_map_dialog::set_top_line(int arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:30542
VA_CHT_1(0x00734e70, 0xd)
void t_new_map_dialog::file_scroll(t_scrollbar* arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:30543
VA_CHT_1(0x00734e80, 0xaa)
void t_new_map_dialog::set_highlight(int arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:30544
VA_CHT_1(0x00734f30, 0x1ae)
void t_new_map_dialog::file_clicked(int arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:30545
VA_CHT_1(0x007350e0, 0x1b3)
void t_new_map_dialog::file_double_clicked(int arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:30546
VA_CHT_1(0x007352a0, 0xd1)
void t_new_map_dialog::begin(t_button* arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:30547
VA_CHT_1(0x007357d0, 0x12)
void t_new_map_dialog::cancel(t_button* arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:30548
VA_CHT_1(0x00735ce0, 0xbb)
void t_new_map_dialog::scenario_details(t_button* arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:30549
VA_CHT_1(0x007381d0, 0x2d6)
void t_new_map_dialog::sort_maps(t_button* arg_0, t_new_map_dialog::t_sort_order arg_1)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:64136; name:B (dyninit; see ledger)
VA_CHT_1(0x00738a60, 0x20)
// new_map_dialog$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:A; dyninit-tinit; owner-conf-B; map:64138; name:B (dyninit; see ledger)
VA_CHT_1(0x0073a910, 0x5c)
// new_map_dialog$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:64139
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// new_map_dialog$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:64140
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// new_map_dialog$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:64141
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// new_map_dialog$tatexit4
// Function body not reconstructed; signature retained as a comment.

// confidence:A; align-band; retn,stable,vptr; map:30550
VA_CHT_1(0x00734790, 0x10)
t_new_map_file_info::t_new_map_file_info()
{
    // Body unavailable.
}

// name:A; map symbol; map:30551
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_new_map_file_info::~t_new_map_file_info()
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:30552
VA_CHT_1_COMPGEN(0x00736330, 0x1e, SCALAR_DELETING_DTOR, t_new_map_file_info)

// name:A; map symbol; map:30553
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_new_map_file_info)

// confidence:A; align-band; retn,stable,vslot; map:30554
VA_CHT_1_COMPGEN(0x0072e8c0, 0x1e, SCALAR_DELETING_DTOR, t_campaign_file_info)

// name:A; map symbol; map:30555
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_campaign_file_info)

namespace {

// name:A; map symbol; map:30556
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_campaign_file_info::~t_campaign_file_info()
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:C; align-band; retn,stable; map:30557
VA_CHT_1(0x00733cc0, 0xd4)
t_campaign_file_header& t_new_map_dialog::get_file_header()
{
    // Body unavailable.
}

// name:A; map symbol; map:30558
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::string t_new_map_dialog::get_file_name()
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:30559
VA_CHT_1(0x00733ca0, 0x16)
bool t_new_map_options_dialog::get_guards_move() const
{
    // Body unavailable.
}

// name:A; map symbol; map:30560
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_difficulty t_new_map_options_dialog::get_player_difficulty() const
{
    // Body unavailable.
}

// name:A; map symbol; map:30561
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_player_setup* t_new_map_options_dialog::get_player_setup()
{
    // Body unavailable.
}

// name:A; map symbol; map:30562
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_new_map_file_info::is_folder() const
{
    // Body unavailable.
}

// name:A; map symbol; map:30563
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_new_map_dialog::showing_difficulty()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:30564
VA_CHT_1_COMPGEN(0x00731c20, 0x1e, SCALAR_DELETING_DTOR, t_new_map_dialog)

// name:A; map symbol; map:30565
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_new_map_dialog)

// name:A; map symbol; map:30566
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_new_map_dialog::~t_new_map_dialog()
{
    // Body unavailable.
}

// name:A; map symbol; map:30567
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_new_map_item::t_new_map_item(t_new_map_dialog* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:30568
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_new_map_line::t_new_map_line()
{
    // Body unavailable.
}

// name:A; map symbol; map:30569
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_new_map_line::~t_new_map_line()
{
    // Body unavailable.
}

// name:A; map symbol; map:30570
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_new_map_item::~t_new_map_item()
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:30571
VA_CHT_1(0x00735bc0, 0x57)
t_directory_changer::t_directory_changer(char const* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:30572
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_constructor_failure<t_directory_changer, std::runtime_error>::~t_constructor_failure<t_directory_changer, std::runtime_error>(

)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:30573
VA_CHT_1(0x00734630, 0x158)
t_constructor_failure<t_directory_changer, std::runtime_error>::t_constructor_failure<t_directory_changer, std::runtime_error>(
    t_constructor_failure<t_directory_changer, std::runtime_error> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:30574
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_constructor_failure<t_directory_changer, std::runtime_error>")

// name:A; map symbol; map:30575
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_constructor_failure<t_directory_changer, std::runtime_error>")

namespace {

// name:A; map symbol; map:30576
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_subfolder_info::t_subfolder_info(std::string const& arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:30577
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_subfolder_info)

// name:A; map symbol; map:30578
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_subfolder_info)

namespace {

// name:A; map symbol; map:30579
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_subfolder_info::~t_subfolder_info()
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:C; align-band; retn,stable; map:30580
VA_CHT_1(0x007358d0, 0x21)
t_counted_ptr<t_new_map_file_info>::~t_counted_ptr<t_new_map_file_info>()
{
    // Body unavailable.
}

// name:A; map symbol; map:30581
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_new_game_details_dialog::size_checked() const
{
    // Body unavailable.
}

// name:A; map symbol; map:30582
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_new_game_details_dialog::difficulty_checked() const
{
    // Body unavailable.
}

// name:A; map symbol; map:30583
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_new_game_details_dialog::players_checked() const
{
    // Body unavailable.
}

// name:A; map symbol; map:30584
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_new_game_details_dialog::humans_checked() const
{
    // Body unavailable.
}

// name:A; map symbol; map:30585
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_new_game_details_dialog::allies_checked() const
{
    // Body unavailable.
}

// name:A; map symbol; map:30586
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_new_game_details_dialog::number_of_maps_checked() const
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:30587
VA_CHT_1(0x00735ba0, 0x1e)
t_counted_ptr<t_new_game_details_dialog>::~t_counted_ptr<t_new_game_details_dialog>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:30602
VA_CHT_1(0x007357f0, 0xa8)
t_constructor_failure<t_directory_changer, std::runtime_error>::t_constructor_failure<t_directory_changer, std::runtime_error>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:30629
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_new_map_file_info>::t_counted_ptr<t_new_map_file_info>(t_new_map_file_info* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:30630
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_new_map_file_info>::t_counted_ptr<t_new_map_file_info>()
{
    // Body unavailable.
}

// name:A; map symbol; map:30631
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_new_map_file_info>& t_counted_ptr<t_new_map_file_info>::operator=(
    t_counted_ptr<t_new_map_file_info> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:30632
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_new_map_file_info* t_counted_ptr<t_new_map_file_info>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:30633
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_new_map_file_info& t_counted_ptr<t_new_map_file_info>::operator*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:30634
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::string t_constructor_failure<t_directory_changer, std::runtime_error>::build_msg()
{
    // Body unavailable.
}

// name:A; map symbol; map:30635
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<t_button*> bound_handler(t_new_map_item& arg_0, void (t_new_map_item::*)(t_button*))
{
    // Body unavailable.
}

// name:A; map symbol; map:30636
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<t_button*> bound_handler(t_new_map_dialog& arg_0, void (t_new_map_dialog::*)(t_button*))
{
    // Body unavailable.
}

// name:A; map symbol; map:30637
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_button*, t_new_map_dialog::t_sort_order> bound_handler(
    t_new_map_dialog& arg_0,
    void (t_new_map_dialog::*)(t_button*, t_new_map_dialog::t_sort_order)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:30638
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<t_button*> add_2nd_argument(
    t_handler_2<t_button*, t_new_map_dialog::t_sort_order> arg_0,
    t_new_map_dialog::t_sort_order arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:30639
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_button*, t_new_map_dialog::t_sort_order>::~t_handler_2<t_button*, t_new_map_dialog::t_sort_order>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:30640
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_2<t_button*, t_new_map_dialog::t_sort_order>>::~t_counted_ptr<t_handler_base_2<t_button*, t_new_map_dialog::t_sort_order>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:30641
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<int> bound_handler(t_new_map_dialog& arg_0, void (t_new_map_dialog::*)(int))
{
    // Body unavailable.
}

// name:A; map symbol; map:30642
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_scrollbar*, int> bound_handler(
    t_new_map_dialog& arg_0,
    void (t_new_map_dialog::*)(t_scrollbar*, int)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:30643
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_new_game_details_dialog>::t_counted_ptr<t_new_game_details_dialog>(
    t_new_game_details_dialog* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:30644
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_new_game_details_dialog* t_counted_ptr<t_new_game_details_dialog>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:30667
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_counted_ptr<t_new_map_file_info>")

// name:A; map symbol; map:30668
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_new_map_item& t_new_map_item::operator=(t_new_map_item const& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:30669
VA_CHT_1(0x00736010, 0x18c)
t_new_map_item::t_new_map_item(t_new_map_item const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:30670
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_new_map_item)

// name:A; map symbol; map:30671
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_new_map_line& t_new_map_line::operator=(t_new_map_line const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:30672
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_new_map_line::t_new_map_line(t_new_map_line const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:30673
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<int>::t_handler_1<int>(t_handler_1<int> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:30674
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_button*, t_new_map_dialog::t_sort_order>::t_handler_2<t_button*, t_new_map_dialog::t_sort_order>(
    t_handler_base_2<t_button*, t_new_map_dialog::t_sort_order>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:30675
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_button*, t_new_map_dialog::t_sort_order>* t_handler_2<t_button*, t_new_map_dialog::t_sort_order>::operator t_handler_base_2<t_button*, t_new_map_dialog::t_sort_order>*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:30676
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_1<t_new_map_item, t_button*>::t_bound_handler_1<t_new_map_item, t_button*>(
    t_new_map_item& arg_0,
    void (t_new_map_item::*)(t_button*)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:30677
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_1<t_new_map_item, t_button*>::operator()(t_button* arg_0)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:30678
VA_CHT_1(0x00735c20, 0x5e)
t_bound_handler_1<t_new_map_dialog, t_button*>::t_bound_handler_1<t_new_map_dialog, t_button*>(
    t_new_map_dialog& arg_0,
    void (t_new_map_dialog::*)(t_button*)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:30679
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_1<t_new_map_dialog, t_button*>::operator()(t_button* arg_0)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:30680
VA_CHT_1(0x00735c80, 0x5e)
t_bound_handler_2<t_new_map_dialog, t_button*, t_new_map_dialog::t_sort_order>::t_bound_handler_2<t_new_map_dialog, t_button*, t_new_map_dialog::t_sort_order>(
    t_new_map_dialog& arg_0,
    void (t_new_map_dialog::*)(t_button*, t_new_map_dialog::t_sort_order)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:30681
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_2<t_new_map_dialog, t_button*, t_new_map_dialog::t_sort_order>::operator()(
    t_button* arg_0,
    t_new_map_dialog::t_sort_order arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:30682
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_add_2nd_handler_1<t_button*, t_new_map_dialog::t_sort_order>::t_add_2nd_handler_1<t_button*, t_new_map_dialog::t_sort_order>(
    t_handler_base_2<t_button*, t_new_map_dialog::t_sort_order>* arg_0,
    t_new_map_dialog::t_sort_order arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:30683
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_add_2nd_handler_1<t_button*, t_new_map_dialog::t_sort_order>::operator()(t_button* arg_0)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:30684
VA_CHT_1(0x00735da0, 0x5e)
t_bound_handler_1<t_new_map_dialog, int>::t_bound_handler_1<t_new_map_dialog, int>(
    t_new_map_dialog& arg_0,
    void (t_new_map_dialog::*)(int)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:30685
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_1<t_new_map_dialog, int>::operator()(int arg_0)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:30686
VA_CHT_1(0x00735e00, 0x5e)
t_bound_handler_2<t_new_map_dialog, t_scrollbar*, int>::t_bound_handler_2<t_new_map_dialog, t_scrollbar*, int>(
    t_new_map_dialog& arg_0,
    void (t_new_map_dialog::*)(t_scrollbar*, int)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:30687
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_2<t_new_map_dialog, t_scrollbar*, int>::operator()(t_scrollbar* arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:30688
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_1<t_new_map_item, t_button*>")

// name:A; map symbol; map:30689
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_1<t_new_map_item, t_button*>")

// name:A; map symbol; map:30690
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_1<t_new_map_dialog, t_button*>")

// name:A; map symbol; map:30691
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_1<t_new_map_dialog, t_button*>")

// confidence:A; align-band; retn,stable,vslot; map:30692
VA_CHT_1_COMPGEN(0x00736350, 0x1e, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_new_map_dialog, t_button*, t_new_map_dialog::t_sort_order>")

// name:A; map symbol; map:30693
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_2<t_new_map_dialog, t_button*, t_new_map_dialog::t_sort_order>")

// name:A; map symbol; map:30694
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_button*, t_new_map_dialog::t_sort_order>::t_handler_base_2<t_button*, t_new_map_dialog::t_sort_order>(

)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:30695
VA_CHT_1_COMPGEN(0x00736390, 0x1e, SCALAR_DELETING_DTOR, "t_add_2nd_handler_1<t_button*, t_new_map_dialog::t_sort_order>")

// name:A; map symbol; map:30696
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_add_2nd_handler_1<t_button*, t_new_map_dialog::t_sort_order>")

// name:A; map symbol; map:30697
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_1<t_new_map_dialog, int>")

// name:A; map symbol; map:30698
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_1<t_new_map_dialog, int>")

// name:A; map symbol; map:30699
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_new_map_dialog, t_scrollbar*, int>")

// name:A; map symbol; map:30700
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_2<t_new_map_dialog, t_scrollbar*, int>")

// name:A; map symbol; map:30701
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_1<t_new_map_item, t_button*>::~t_bound_handler_1<t_new_map_item, t_button*>()
{
    // Body unavailable.
}

// name:A; map symbol; map:30702
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_1<t_new_map_dialog, t_button*>::~t_bound_handler_1<t_new_map_dialog, t_button*>()
{
    // Body unavailable.
}

// name:A; map symbol; map:30703
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_2<t_new_map_dialog, t_button*, t_new_map_dialog::t_sort_order>::~t_bound_handler_2<t_new_map_dialog, t_button*, t_new_map_dialog::t_sort_order>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:30704
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_button*, t_new_map_dialog::t_sort_order>::~t_handler_base_2<t_button*, t_new_map_dialog::t_sort_order>(

)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:30705
VA_CHT_1(0x007363b0, 0x21)
t_abstract_function_2<void, t_button*, t_new_map_dialog::t_sort_order>::~t_abstract_function_2<void, t_button*, t_new_map_dialog::t_sort_order>(

)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:30706
VA_CHT_1_COMPGEN(0x00736370, 0x20, SCALAR_DELETING_DTOR, "t_abstract_function_2<void, t_button*, t_new_map_dialog::t_sort_order>")

// name:A; map symbol; map:30707
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_abstract_function_2<void, t_button*, t_new_map_dialog::t_sort_order>")

// name:A; map symbol; map:30708
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_handler_base_2<t_button*, t_new_map_dialog::t_sort_order>")

// name:A; map symbol; map:30709
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_handler_base_2<t_button*, t_new_map_dialog::t_sort_order>")

// name:A; map symbol; map:30710
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_function_2<void, t_button*, t_new_map_dialog::t_sort_order>::t_abstract_function_2<void, t_button*, t_new_map_dialog::t_sort_order>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:30711
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_add_2nd_handler_1<t_button*, t_new_map_dialog::t_sort_order>::~t_add_2nd_handler_1<t_button*, t_new_map_dialog::t_sort_order>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:30712
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_1<t_new_map_dialog, int>::~t_bound_handler_1<t_new_map_dialog, int>()
{
    // Body unavailable.
}

// name:A; map symbol; map:30713
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_2<t_new_map_dialog, t_scrollbar*, int>::~t_bound_handler_2<t_new_map_dialog, t_scrollbar*, int>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:30714
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_handler_2<t_button*, t_new_map_dialog::t_sort_order>::operator()(
    t_button* arg_0,
    t_new_map_dialog::t_sort_order arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:30715
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_text_window>::t_counted_ptr<t_text_window>(t_counted_ptr<t_text_window> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:30716
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_text_window>& t_counted_ptr<t_text_window>::operator=(
    t_counted_ptr<t_text_window> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:30717
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_1<int>>::t_counted_ptr<t_handler_base_1<int>>(
    t_counted_ptr<t_handler_base_1<int>> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:30718
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_new_map_file_info>::t_counted_ptr<t_new_map_file_info>(
    t_counted_ptr<t_new_map_file_info> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:30719
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::string t_constructor_failure<t_directory_changer, std::runtime_error>::build_msg(
    std::string const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:30730
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_2<t_button*, t_new_map_dialog::t_sort_order>>::t_counted_ptr<t_handler_base_2<t_button*, t_new_map_dialog::t_sort_order>>(
    t_handler_base_2<t_button*, t_new_map_dialog::t_sort_order>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:30731
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_button*, t_new_map_dialog::t_sort_order>* t_counted_ptr<t_handler_base_2<t_button*, t_new_map_dialog::t_sort_order>>::operator t_handler_base_2<t_button*, t_new_map_dialog::t_sort_order>*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:30732
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_button*, t_new_map_dialog::t_sort_order>& t_counted_ptr<t_handler_base_2<t_button*, t_new_map_dialog::t_sort_order>>::operator*(

) const
{
    // Body unavailable.
}

namespace {

// confidence:C; align-band; retn,stable; map:30736
VA_CHT_1(0x00736760, 0x98)
bool t_sort_allies::operator()(
    t_counted_ptr<t_new_map_file_info> const& arg_0,
    t_counted_ptr<t_new_map_file_info> const& arg_1
)
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:30737
VA_CHT_1(0x00739a50, 0x105)
bool t_sort_name::operator()(
    t_counted_ptr<t_new_map_file_info> const& arg_0,
    t_counted_ptr<t_new_map_file_info> const& arg_1
)
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:30741
VA_CHT_1(0x00737080, 0x150)
bool t_sort_difficulty::operator()(
    t_counted_ptr<t_new_map_file_info> const& arg_0,
    t_counted_ptr<t_new_map_file_info> const& arg_1
)
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:30745
VA_CHT_1(0x00737c40, 0x150)
bool t_sort_humans::operator()(
    t_counted_ptr<t_new_map_file_info> const& arg_0,
    t_counted_ptr<t_new_map_file_info> const& arg_1
)
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:30749
VA_CHT_1(0x00736800, 0x150)
bool t_sort_loss::operator()(
    t_counted_ptr<t_new_map_file_info> const& arg_0,
    t_counted_ptr<t_new_map_file_info> const& arg_1
)
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:30756
VA_CHT_1(0x00738080, 0x150)
bool t_sort_players::operator()(
    t_counted_ptr<t_new_map_file_info> const& arg_0,
    t_counted_ptr<t_new_map_file_info> const& arg_1
)
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:30760
VA_CHT_1(0x0073a400, 0x158)
bool t_sort_size::operator()(
    t_counted_ptr<t_new_map_file_info> const& arg_0,
    t_counted_ptr<t_new_map_file_info> const& arg_1
)
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:30764
VA_CHT_1(0x007384b0, 0x13a)
bool t_sort_map_count::operator()(
    t_counted_ptr<t_new_map_file_info> const& arg_0,
    t_counted_ptr<t_new_map_file_info> const& arg_1
)
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:30768
VA_CHT_1(0x00736c40, 0x150)
bool t_sort_victory::operator()(
    t_counted_ptr<t_new_map_file_info> const& arg_0,
    t_counted_ptr<t_new_map_file_info> const& arg_1
)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:30798
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_1<t_new_map_item, t_button*>")

// confidence:C; align-order; stable; map:30799
VA_CHT_1_COMPGEN(0x0073db70, 0x8, VECTOR_DELETING_DTOR, "t_bound_handler_1<t_new_map_dialog, t_button*>")

// confidence:C; align-order; stable; map:30800
VA_CHT_1_COMPGEN(0x0073db80, 0x8, VECTOR_DELETING_DTOR, "t_add_2nd_handler_1<t_button*, t_new_map_dialog::t_sort_order>")

// confidence:C; align-order; stable; map:30801
VA_CHT_1_COMPGEN(0x0073db90, 0x8, VECTOR_DELETING_DTOR, "t_handler_base_2<t_button*, t_new_map_dialog::t_sort_order>")

// confidence:C; align-order; stable; map:30802
VA_CHT_1_COMPGEN(0x0073dba0, 0x8, VECTOR_DELETING_DTOR, "t_bound_handler_1<t_new_map_dialog, int>")

// confidence:C; align-order; stable; map:30803
VA_CHT_1_COMPGEN(0x0073dbb0, 0x8, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_new_map_dialog, t_scrollbar*, int>")

// confidence:C; align-order; stable; map:30804
VA_CHT_1_COMPGEN(0x0073dbc0, 0x8, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_new_map_dialog, t_button*, t_new_map_dialog::t_sort_order>")

// === .rdata (20 symbols) ===

// confidence:A; rtti-name; map:44897
DATA_CHT_1_COMPGEN(0x008e640c, "const t_campaign_file_info::`vftable'")

// confidence:A; rtti-name; map:44898
DATA_CHT_1_COMPGEN(0x008e6434, "const t_new_map_file_info::`vftable'")

// confidence:A; rtti-name; map:44899
DATA_CHT_1_COMPGEN(0x008e645c, "const t_new_map_dialog::`vftable'")

// confidence:A; rtti-name; map:44900
DATA_CHT_1_COMPGEN(0x008e64f0, "const t_constructor_failure<t_directory_changer, std::runtime_error>::`vftable'")

// confidence:A; rtti-name; map:44901
DATA_CHT_1_COMPGEN(0x008e64c8, "const t_subfolder_info::`vftable'")

// confidence:A; rtti-name; map:44902
DATA_CHT_1_COMPGEN(0x008e6500, "const t_bound_handler_1<t_new_map_item, t_button*>::`vftable'{for `t_abstract_function_1<void, t_button*>'}")

// confidence:B; rtti-order; map:44903
DATA_CHT_1_COMPGEN(0x008e650c, "const t_bound_handler_1<t_new_map_item, t_button*>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:44904
DATA_CHT_1_COMPGEN(0x008e6514, "const t_bound_handler_1<t_new_map_dialog, t_button*>::`vftable'{for `t_abstract_function_1<void, t_button*>'}")

// confidence:B; rtti-order; map:44905
DATA_CHT_1_COMPGEN(0x008e6520, "const t_bound_handler_1<t_new_map_dialog, t_button*>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:44906
DATA_CHT_1_COMPGEN(0x008e6528, "const t_bound_handler_2<t_new_map_dialog, t_button*, t_new_map_dialog::t_sort_order>::`vftable'{for `t_abstract_function_2<void, t_button*, t_new_map_dialog::t_sort_order>'}")

// confidence:B; rtti-order; map:44907
DATA_CHT_1_COMPGEN(0x008e6534, "const t_bound_handler_2<t_new_map_dialog, t_button*, t_new_map_dialog::t_sort_order>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:44908
DATA_CHT_1_COMPGEN(0x008e6548, "const t_add_2nd_handler_1<t_button*, t_new_map_dialog::t_sort_order>::`vftable'{for `t_abstract_function_1<void, t_button*>'}")

// confidence:B; rtti-order; map:44909
DATA_CHT_1_COMPGEN(0x008e6554, "const t_add_2nd_handler_1<t_button*, t_new_map_dialog::t_sort_order>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:44910
DATA_CHT_1_COMPGEN(0x008e655c, "const t_bound_handler_1<t_new_map_dialog, int>::`vftable'{for `t_abstract_function_1<void, int>'}")

// confidence:B; rtti-order; map:44911
DATA_CHT_1_COMPGEN(0x008e6568, "const t_bound_handler_1<t_new_map_dialog, int>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:44912
DATA_CHT_1_COMPGEN(0x008e6570, "const t_bound_handler_2<t_new_map_dialog, t_scrollbar*, int>::`vftable'{for `t_abstract_function_2<void, t_scrollbar*, int>'}")

// confidence:B; rtti-order; map:44913
DATA_CHT_1_COMPGEN(0x008e657c, "const t_bound_handler_2<t_new_map_dialog, t_scrollbar*, int>::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:44914
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_2<t_button*, t_new_map_dialog::t_sort_order>::`vftable'{for `t_abstract_function_2<void, t_button*, t_new_map_dialog::t_sort_order>'}")

// name:A; map symbol; map:44915
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_2<t_button*, t_new_map_dialog::t_sort_order>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:44916
DATA_CHT_1_COMPGEN(0x008e653c, "const t_abstract_function_2<void, t_button*, t_new_map_dialog::t_sort_order>::`vftable'")

// === .rdata$r (60 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_new_map_file_info@@;bcd=5109ec;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53550
DATA_CHT_1_COMPGEN(0x009109ec, "t_new_map_file_info::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_campaign_file_info@?%C:\Work\game\new_map_dialog.cpp2906417750@@;bcd=510a04;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53551
DATA_CHT_1_COMPGEN(0x00910a04, "t_campaign_file_info::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_campaign_file_info@?%C:\Work\game\new_map_dialog.cpp2906417750@@;vft=4e640c;col=510a3c;td=5adad8;chd=510a2c;offset=0;cdOffset=0;validated-hierarchy; map:53552
DATA_CHT_1_COMPGEN(0x00910a1c, "t_campaign_file_info::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_campaign_file_info@?%C:\Work\game\new_map_dialog.cpp2906417750@@;vft=4e640c;col=510a3c;td=5adad8;chd=510a2c;offset=0;cdOffset=0;validated-hierarchy; map:53553
DATA_CHT_1_COMPGEN(0x00910a2c, "t_campaign_file_info::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_campaign_file_info@?%C:\Work\game\new_map_dialog.cpp2906417750@@;vft=4e640c;col=510a3c;td=5adad8;chd=510a2c;offset=0;cdOffset=0;validated-hierarchy; map:53554
DATA_CHT_1_COMPGEN(0x00910a3c, "const t_campaign_file_info::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_new_map_file_info@@;vft=4e6434;col=5109d8;td=5adab4;chd=5109c8;offset=0;cdOffset=0;validated-hierarchy; map:53555
DATA_CHT_1_COMPGEN(0x009109bc, "t_new_map_file_info::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_new_map_file_info@@;vft=4e6434;col=5109d8;td=5adab4;chd=5109c8;offset=0;cdOffset=0;validated-hierarchy; map:53556
DATA_CHT_1_COMPGEN(0x009109c8, "t_new_map_file_info::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_new_map_file_info@@;vft=4e6434;col=5109d8;td=5adab4;chd=5109c8;offset=0;cdOffset=0;validated-hierarchy; map:53557
DATA_CHT_1_COMPGEN(0x009109d8, "const t_new_map_file_info::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_new_map_dialog@@;bcd=510a50;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53558
DATA_CHT_1_COMPGEN(0x00910a50, "t_new_map_dialog::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_new_map_dialog@@;vft=4e645c;col=510a8c;td=5adb64;chd=510a7c;offset=0;cdOffset=0;validated-hierarchy; map:53559
DATA_CHT_1_COMPGEN(0x00910a68, "t_new_map_dialog::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_new_map_dialog@@;vft=4e645c;col=510a8c;td=5adb64;chd=510a7c;offset=0;cdOffset=0;validated-hierarchy; map:53560
DATA_CHT_1_COMPGEN(0x00910a7c, "t_new_map_dialog::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_new_map_dialog@@;vft=4e645c;col=510a8c;td=5adb64;chd=510a7c;offset=0;cdOffset=0;validated-hierarchy; map:53561
DATA_CHT_1_COMPGEN(0x00910a8c, "const t_new_map_dialog::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_constructor_failure@Vt_directory_changer@@Vruntime_error@std@@@@;bcd=510aec;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53562
DATA_CHT_1_COMPGEN(0x00910aec, "t_constructor_failure<t_directory_changer, std::runtime_error>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_constructor_failure@Vt_directory_changer@@Vruntime_error@std@@@@;vft=4e64f0;col=510b24;td=5adc60;chd=510b14;offset=0;cdOffset=0;validated-hierarchy; map:53563
DATA_CHT_1_COMPGEN(0x00910b04, "t_constructor_failure<t_directory_changer, std::runtime_error>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_constructor_failure@Vt_directory_changer@@Vruntime_error@std@@@@;vft=4e64f0;col=510b24;td=5adc60;chd=510b14;offset=0;cdOffset=0;validated-hierarchy; map:53564
DATA_CHT_1_COMPGEN(0x00910b14, "t_constructor_failure<t_directory_changer, std::runtime_error>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_constructor_failure@Vt_directory_changer@@Vruntime_error@std@@@@;vft=4e64f0;col=510b24;td=5adc60;chd=510b14;offset=0;cdOffset=0;validated-hierarchy; map:53565
DATA_CHT_1_COMPGEN(0x00910b24, "const t_constructor_failure<t_directory_changer, std::runtime_error>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_subfolder_info@?%C:\Work\game\new_map_dialog.cpp2906417750@@;bcd=510aa0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53566
DATA_CHT_1_COMPGEN(0x00910aa0, "t_subfolder_info::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_subfolder_info@?%C:\Work\game\new_map_dialog.cpp2906417750@@;vft=4e64c8;col=510ad8;td=5adcb8;chd=510ac8;offset=0;cdOffset=0;validated-hierarchy; map:53567
DATA_CHT_1_COMPGEN(0x00910ab8, "t_subfolder_info::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_subfolder_info@?%C:\Work\game\new_map_dialog.cpp2906417750@@;vft=4e64c8;col=510ad8;td=5adcb8;chd=510ac8;offset=0;cdOffset=0;validated-hierarchy; map:53568
DATA_CHT_1_COMPGEN(0x00910ac8, "t_subfolder_info::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_subfolder_info@?%C:\Work\game\new_map_dialog.cpp2906417750@@;vft=4e64c8;col=510ad8;td=5adcb8;chd=510ac8;offset=0;cdOffset=0;validated-hierarchy; map:53569
DATA_CHT_1_COMPGEN(0x00910ad8, "const t_subfolder_info::`RTTI Complete Object Locator'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_1@Vt_new_map_item@@PAVt_button@@@@;vft=4e6500;col=510b88;td=5add10;chd=510b78;offset=8;cdOffset=0;validated-hierarchy; map:53570
DATA_CHT_1_COMPGEN(0x00910b88, "const t_bound_handler_1<t_new_map_item, t_button*>::`RTTI Complete Object Locator'{for `t_abstract_function_1<void, t_button*>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_1@Vt_new_map_item@@PAVt_button@@@@;bcd=510b4c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53571
DATA_CHT_1_COMPGEN(0x00910b4c, "t_bound_handler_1<t_new_map_item, t_button*>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_1@Vt_new_map_item@@PAVt_button@@@@;vft=4e6500;col=510b88;td=5add10;chd=510b78;offset=8;cdOffset=0;validated-hierarchy; map:53572
DATA_CHT_1_COMPGEN(0x00910b64, "t_bound_handler_1<t_new_map_item, t_button*>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_1@Vt_new_map_item@@PAVt_button@@@@;vft=4e6500;col=510b88;td=5add10;chd=510b78;offset=8;cdOffset=0;validated-hierarchy; map:53573
DATA_CHT_1_COMPGEN(0x00910b78, "t_bound_handler_1<t_new_map_item, t_button*>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:53574
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_1<t_new_map_item, t_button*>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_1@Vt_new_map_dialog@@PAVt_button@@@@;vft=4e6514;col=510bec;td=5add58;chd=510bdc;offset=8;cdOffset=0;validated-hierarchy; map:53575
DATA_CHT_1_COMPGEN(0x00910bec, "const t_bound_handler_1<t_new_map_dialog, t_button*>::`RTTI Complete Object Locator'{for `t_abstract_function_1<void, t_button*>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_1@Vt_new_map_dialog@@PAVt_button@@@@;bcd=510bb0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53576
DATA_CHT_1_COMPGEN(0x00910bb0, "t_bound_handler_1<t_new_map_dialog, t_button*>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_1@Vt_new_map_dialog@@PAVt_button@@@@;vft=4e6514;col=510bec;td=5add58;chd=510bdc;offset=8;cdOffset=0;validated-hierarchy; map:53577
DATA_CHT_1_COMPGEN(0x00910bc8, "t_bound_handler_1<t_new_map_dialog, t_button*>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_1@Vt_new_map_dialog@@PAVt_button@@@@;vft=4e6514;col=510bec;td=5add58;chd=510bdc;offset=8;cdOffset=0;validated-hierarchy; map:53578
DATA_CHT_1_COMPGEN(0x00910bdc, "t_bound_handler_1<t_new_map_dialog, t_button*>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:53579
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_1<t_new_map_dialog, t_button*>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_2@Vt_new_map_dialog@@PAVt_button@@W4t_sort_order@1@@@;vft=4e6528;col=510cc4;td=5ade48;chd=510cb4;offset=8;cdOffset=0;validated-hierarchy; map:53580
DATA_CHT_1_COMPGEN(0x00910cc4, "const t_bound_handler_2<t_new_map_dialog, t_button*, t_new_map_dialog::t_sort_order>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_button*, t_new_map_dialog::t_sort_order>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_2@XPAVt_button@@W4t_sort_order@t_new_map_dialog@@@@;bcd=510c58;pmd=8,-1,0;attributes=0;validated-hierarchy-link; map:53581
DATA_CHT_1_COMPGEN(0x00910c58, "t_abstract_function_2<void, t_button*, t_new_map_dialog::t_sort_order>::`RTTI Base Class Descriptor at (8, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_handler_base_2@PAVt_button@@W4t_sort_order@t_new_map_dialog@@@@;bcd=510c70;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53582
DATA_CHT_1_COMPGEN(0x00910c70, "t_handler_base_2<t_button*, t_new_map_dialog::t_sort_order>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_2@Vt_new_map_dialog@@PAVt_button@@W4t_sort_order@1@@@;bcd=510c88;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53583
DATA_CHT_1_COMPGEN(0x00910c88, "t_bound_handler_2<t_new_map_dialog, t_button*, t_new_map_dialog::t_sort_order>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_2@Vt_new_map_dialog@@PAVt_button@@W4t_sort_order@1@@@;vft=4e6528;col=510cc4;td=5ade48;chd=510cb4;offset=8;cdOffset=0;validated-hierarchy; map:53584
DATA_CHT_1_COMPGEN(0x00910ca0, "t_bound_handler_2<t_new_map_dialog, t_button*, t_new_map_dialog::t_sort_order>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_2@Vt_new_map_dialog@@PAVt_button@@W4t_sort_order@1@@@;vft=4e6528;col=510cc4;td=5ade48;chd=510cb4;offset=8;cdOffset=0;validated-hierarchy; map:53585
DATA_CHT_1_COMPGEN(0x00910cb4, "t_bound_handler_2<t_new_map_dialog, t_button*, t_new_map_dialog::t_sort_order>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:53586
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_2<t_new_map_dialog, t_button*, t_new_map_dialog::t_sort_order>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_add_2nd_handler_1@PAVt_button@@W4t_sort_order@t_new_map_dialog@@@@;vft=4e6548;col=510d28;td=5adea0;chd=510d18;offset=8;cdOffset=0;validated-hierarchy; map:53587
DATA_CHT_1_COMPGEN(0x00910d28, "const t_add_2nd_handler_1<t_button*, t_new_map_dialog::t_sort_order>::`RTTI Complete Object Locator'{for `t_abstract_function_1<void, t_button*>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_add_2nd_handler_1@PAVt_button@@W4t_sort_order@t_new_map_dialog@@@@;bcd=510cec;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53588
DATA_CHT_1_COMPGEN(0x00910cec, "t_add_2nd_handler_1<t_button*, t_new_map_dialog::t_sort_order>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_add_2nd_handler_1@PAVt_button@@W4t_sort_order@t_new_map_dialog@@@@;vft=4e6548;col=510d28;td=5adea0;chd=510d18;offset=8;cdOffset=0;validated-hierarchy; map:53589
DATA_CHT_1_COMPGEN(0x00910d04, "t_add_2nd_handler_1<t_button*, t_new_map_dialog::t_sort_order>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_add_2nd_handler_1@PAVt_button@@W4t_sort_order@t_new_map_dialog@@@@;vft=4e6548;col=510d28;td=5adea0;chd=510d18;offset=8;cdOffset=0;validated-hierarchy; map:53590
DATA_CHT_1_COMPGEN(0x00910d18, "t_add_2nd_handler_1<t_button*, t_new_map_dialog::t_sort_order>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:53591
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_add_2nd_handler_1<t_button*, t_new_map_dialog::t_sort_order>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_1@Vt_new_map_dialog@@H@@;vft=4e655c;col=510d8c;td=5adef4;chd=510d7c;offset=8;cdOffset=0;validated-hierarchy; map:53592
DATA_CHT_1_COMPGEN(0x00910d8c, "const t_bound_handler_1<t_new_map_dialog, int>::`RTTI Complete Object Locator'{for `t_abstract_function_1<void, int>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_1@Vt_new_map_dialog@@H@@;bcd=510d50;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53593
DATA_CHT_1_COMPGEN(0x00910d50, "t_bound_handler_1<t_new_map_dialog, int>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_1@Vt_new_map_dialog@@H@@;vft=4e655c;col=510d8c;td=5adef4;chd=510d7c;offset=8;cdOffset=0;validated-hierarchy; map:53594
DATA_CHT_1_COMPGEN(0x00910d68, "t_bound_handler_1<t_new_map_dialog, int>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_1@Vt_new_map_dialog@@H@@;vft=4e655c;col=510d8c;td=5adef4;chd=510d7c;offset=8;cdOffset=0;validated-hierarchy; map:53595
DATA_CHT_1_COMPGEN(0x00910d7c, "t_bound_handler_1<t_new_map_dialog, int>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:53596
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_1<t_new_map_dialog, int>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_2@Vt_new_map_dialog@@PAVt_scrollbar@@H@@;vft=4e6570;col=510df0;td=5adf30;chd=510de0;offset=8;cdOffset=0;validated-hierarchy; map:53597
DATA_CHT_1_COMPGEN(0x00910df0, "const t_bound_handler_2<t_new_map_dialog, t_scrollbar*, int>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_scrollbar*, int>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_2@Vt_new_map_dialog@@PAVt_scrollbar@@H@@;bcd=510db4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53598
DATA_CHT_1_COMPGEN(0x00910db4, "t_bound_handler_2<t_new_map_dialog, t_scrollbar*, int>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_2@Vt_new_map_dialog@@PAVt_scrollbar@@H@@;vft=4e6570;col=510df0;td=5adf30;chd=510de0;offset=8;cdOffset=0;validated-hierarchy; map:53599
DATA_CHT_1_COMPGEN(0x00910dcc, "t_bound_handler_2<t_new_map_dialog, t_scrollbar*, int>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_2@Vt_new_map_dialog@@PAVt_scrollbar@@H@@;vft=4e6570;col=510df0;td=5adf30;chd=510de0;offset=8;cdOffset=0;validated-hierarchy; map:53600
DATA_CHT_1_COMPGEN(0x00910de0, "t_bound_handler_2<t_new_map_dialog, t_scrollbar*, int>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:53601
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_2<t_new_map_dialog, t_scrollbar*, int>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// name:A; map symbol; map:53602
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_2<t_button*, t_new_map_dialog::t_sort_order>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_button*, t_new_map_dialog::t_sort_order>'}")

// name:A; map symbol; map:53603
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_handler_base_2<t_button*, t_new_map_dialog::t_sort_order>::`RTTI Base Class Array'")

// name:A; map symbol; map:53604
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_handler_base_2<t_button*, t_new_map_dialog::t_sort_order>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:53605
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_2<t_button*, t_new_map_dialog::t_sort_order>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_2@XPAVt_button@@W4t_sort_order@t_new_map_dialog@@@@;bcd=510c00;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53606
DATA_CHT_1_COMPGEN(0x00910c00, "t_abstract_function_2<void, t_button*, t_new_map_dialog::t_sort_order>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_function_2@XPAVt_button@@W4t_sort_order@t_new_map_dialog@@@@;vft=4e653c;col=510c30;td=5adda0;chd=510c20;offset=0;cdOffset=0;validated-hierarchy; map:53607
DATA_CHT_1_COMPGEN(0x00910c18, "t_abstract_function_2<void, t_button*, t_new_map_dialog::t_sort_order>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_function_2@XPAVt_button@@W4t_sort_order@t_new_map_dialog@@@@;vft=4e653c;col=510c30;td=5adda0;chd=510c20;offset=0;cdOffset=0;validated-hierarchy; map:53608
DATA_CHT_1_COMPGEN(0x00910c20, "t_abstract_function_2<void, t_button*, t_new_map_dialog::t_sort_order>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_function_2@XPAVt_button@@W4t_sort_order@t_new_map_dialog@@@@;vft=4e653c;col=510c30;td=5adda0;chd=510c20;offset=0;cdOffset=0;validated-hierarchy; map:53609
DATA_CHT_1_COMPGEN(0x00910c30, "const t_abstract_function_2<void, t_button*, t_new_map_dialog::t_sort_order>::`RTTI Complete Object Locator'")

// === .xdata$x (3 symbols) ===

// name:A; map symbol; map:57230
DATA_CHT_1(UNACCOUNTED)
// __CT??_R0?AV?$t_constructor_failure@Vt_directory_changer@@Vruntime_error@std@@@@@8??0?$t_constructor_failure@Vt_directory_changer@@Vruntime_error@std@@@@QAE@ABV0@@Z28

// name:A; map symbol; map:57231
DATA_CHT_1(UNACCOUNTED)
// __CTA3?AV?$t_constructor_failure@Vt_directory_changer@@Vruntime_error@std@@@@

// name:A; map symbol; map:57232
DATA_CHT_1(UNACCOUNTED)
// __TI3?AV?$t_constructor_failure@Vt_directory_changer@@Vruntime_error@std@@@@

// === .data (16 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_new_map_file_info@@;td=5adab4;validated-header; map:58878
DATA_CHT_1_COMPGEN(0x009adab4, "t_new_map_file_info `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_campaign_file_info@?%C:\Work\game\new_map_dialog.cpp2906417750@@;td=5adad8;validated-header; map:58879
DATA_CHT_1_COMPGEN(0x009adad8, "t_campaign_file_info `RTTI Type Descriptor'")

// name:A; map symbol; map:58880
DATA_CHT_1_COMPGEN(UNACCOUNTED, "m_folder_entries[ m_selected_ite...")

// name:A; map symbol; map:58881
DATA_CHT_1_COMPGEN(UNACCOUNTED, "C:\\\\work\\\\game\\\\new_map_dialog.h")

// confidence:A; rtti-type-name; type-name=.?AVt_new_map_dialog@@;td=5adb64;validated-header; map:58882
DATA_CHT_1_COMPGEN(0x009adb64, "t_new_map_dialog `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_constructor_failure@Vt_directory_changer@@Vruntime_error@std@@@@;td=5adc60;validated-header; map:58883
DATA_CHT_1_COMPGEN(0x009adc60, "t_constructor_failure<t_directory_changer, std::runtime_error> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_subfolder_info@?%C:\Work\game\new_map_dialog.cpp2906417750@@;td=5adcb8;validated-header; map:58884
DATA_CHT_1_COMPGEN(0x009adcb8, "t_subfolder_info `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_1@Vt_new_map_item@@PAVt_button@@@@;td=5add10;validated-header; map:58885
DATA_CHT_1_COMPGEN(0x009add10, "t_bound_handler_1<t_new_map_item, t_button*> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_1@Vt_new_map_dialog@@PAVt_button@@@@;td=5add58;validated-header; map:58886
DATA_CHT_1_COMPGEN(0x009add58, "t_bound_handler_1<t_new_map_dialog, t_button*> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_function_2@XPAVt_button@@W4t_sort_order@t_new_map_dialog@@@@;td=5adda0;validated-header; map:58887
DATA_CHT_1_COMPGEN(0x009adda0, "t_abstract_function_2<void, t_button*, t_new_map_dialog::t_sort_order> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_handler_base_2@PAVt_button@@W4t_sort_order@t_new_map_dialog@@@@;td=5addf8;validated-header; map:58888
DATA_CHT_1_COMPGEN(0x009addf8, "t_handler_base_2<t_button*, t_new_map_dialog::t_sort_order> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_2@Vt_new_map_dialog@@PAVt_button@@W4t_sort_order@1@@@;td=5ade48;validated-header; map:58889
DATA_CHT_1_COMPGEN(0x009ade48, "t_bound_handler_2<t_new_map_dialog, t_button*, t_new_map_dialog::t_sort_order> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_add_2nd_handler_1@PAVt_button@@W4t_sort_order@t_new_map_dialog@@@@;td=5adea0;validated-header; map:58890
DATA_CHT_1_COMPGEN(0x009adea0, "t_add_2nd_handler_1<t_button*, t_new_map_dialog::t_sort_order> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_1@Vt_new_map_dialog@@H@@;td=5adef4;validated-header; map:58891
DATA_CHT_1_COMPGEN(0x009adef4, "t_bound_handler_1<t_new_map_dialog, int> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_2@Vt_new_map_dialog@@PAVt_scrollbar@@H@@;td=5adf30;validated-header; map:58892
DATA_CHT_1_COMPGEN(0x009adf30, "t_bound_handler_2<t_new_map_dialog, t_scrollbar*, int> `RTTI Type Descriptor'")

// name:A; map symbol; map:58893
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_directory_changer `RTTI Type Descriptor'")

// === .bss (7 symbols) ===

// confidence:B; dyninit-global; owner-conf-B; map:60307
DATA_CHT_1(0x009f2bbc)
t_external_string const k_text_parent_folder; // Initial value unavailable.

// confidence:C; dyninit-global; owner-conf-C; map:60308
DATA_CHT_1(0x009f2be4)
t_external_string const k_text_play_this_map; // Initial value unavailable.

// confidence:C; dyninit-global; owner-conf-C; map:60309
DATA_CHT_1(0x009f2bfc)
t_external_string const k_text_cancel_help; // Initial value unavailable.

// confidence:C; dyninit-global; owner-conf-C; map:60310
DATA_CHT_1(0x009f2c10)
t_external_string const k_text_cancel; // Initial value unavailable.

// confidence:B; dyninit-global; owner-conf-B; map:60311
DATA_CHT_1(0x009f2c24)
t_bitmap_group_cache g_difficulty_icons; // Initial value unavailable.

// confidence:C; dyninit-global; owner-conf-C; map:60312
DATA_CHT_1(0x009f2c2c)
t_bitmap_group_cache const k_new_map_bitmaps; // Initial value unavailable.

// confidence:B; dyninit-global; owner-conf-B; map:60313
DATA_CHT_1(0x009f2c34)
t_external_string const k_text_next; // Initial value unavailable.
