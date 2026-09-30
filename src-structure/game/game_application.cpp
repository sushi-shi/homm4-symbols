// game_application.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 23/32 (A:13 B:3 C:7); unaccounted 9; skipped std 3.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (26 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:65404; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006b0850, 0x16, STATIC_INIT_DISPATCH, "game_application#1")

// name:C; dyninit; see ledger; map:65405
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "game_application#1")

// name:C; dyninit; see ledger; map:65406
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "game_application#1")

// confidence:B; dyninit-dtor; owner-conf-C; map:65407; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006b0870, 0xa, STATIC_DTOR, "game_application#1")

// confidence:A; align-order; retn,stable,vptr; map:26431
VA_CHT_1(0x006b0880, 0xb5)
t_game_application::t_game_application()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:26432
VA_CHT_1(0x006b0960, 0x100)
t_game_application::~t_game_application()
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:26433
VA_CHT_1(0x006b0a60, 0x6)
t_game_application const& t_game_application::get()
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:26434
VA_CHT_1(0x006b0a70, 0x2a)
void t_game_application::update_cursor()
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:26435
VA_CHT_1(0x006b0aa0, 0x6)
bool t_game_application::is_cursor_visible()
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:26436
VA_CHT_1(0x006b0ab0, 0x22)
void t_game_application::set_cursor_visible(bool arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:26437
VA_CHT_1(0x006b0ae0, 0x1ba)
void t_game_application::update_cursor(t_window* arg_0, t_screen_point const& arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:26438
VA_CHT_1(0x006b0ca0, 0x14c)
void t_game_application::mouse_move(t_window* arg_0, t_mouse_event& arg_1)
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:65408
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// t_game_application::mouse_move$sdtor
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; retn,stable; map:26439
VA_CHT_1(0x006b0e00, 0x10)
void t_game_application::close_help_balloon()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:26440
VA_CHT_1(0x006b0e10, 0x4c)
unsigned long t_game_application::idle()
{
    // Body unavailable.
}

// name:A; map symbol; map:26441
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_game_application::menu_click(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:26442
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_game_application::initialize()
{
    // Body unavailable.
}

// confidence:A; align-order; stable,vslot; map:26443
VA_CHT_1(0x006b0e60, 0x1b)
int t_game_application::run()
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:26444
VA_CHT_1(0x006b0e80, 0x60)
void t_game_application::exit(int arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:26445
VA_CHT_1(0x006b0ee0, 0x2c3)
void t_game_application::create_arguments_map(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:65409; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006b1330, 0x20, STATIC_INIT_DISPATCH, game_application)

// confidence:A; align-band; retn,stable,vslot; map:26446
VA_CHT_1_COMPGEN(0x006b0940, 0x1e, SCALAR_DELETING_DTOR, t_game_application)

// name:A; map symbol; map:26447
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_game_application)

// name:A; map symbol; map:26448
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_point t_window::to_parent(t_screen_point const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:26449
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_point t_mouse_window::get_hot_spot() const
{
    // Body unavailable.
}

// name:A; map symbol; map:26450
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_mouse_window>& t_counted_ptr<t_mouse_window>::operator=(
    t_counted_ptr<t_mouse_window> const& arg_0
)
{
    // Body unavailable.
}

// === .rdata (1 symbols) ===

// confidence:A; rtti-name; map:44547
DATA_CHT_1_COMPGEN(0x008e1a94, "const t_game_application::`vftable'")

// === .rdata$r (4 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_game_application@@;bcd=50c670;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52629
DATA_CHT_1_COMPGEN(0x0090c670, "t_game_application::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_game_application@@;vft=4e1a94;col=50c6a0;td=5a76fc;chd=50c690;offset=0;cdOffset=0;validated-hierarchy; map:52630
DATA_CHT_1_COMPGEN(0x0090c688, "t_game_application::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_game_application@@;vft=4e1a94;col=50c6a0;td=5a76fc;chd=50c690;offset=0;cdOffset=0;validated-hierarchy; map:52631
DATA_CHT_1_COMPGEN(0x0090c690, "t_game_application::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_game_application@@;vft=4e1a94;col=50c6a0;td=5a76fc;chd=50c690;offset=0;cdOffset=0;validated-hierarchy; map:52632
DATA_CHT_1_COMPGEN(0x0090c6a0, "const t_game_application::`RTTI Complete Object Locator'")

// === .data (1 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_game_application@@;td=5a76fc;validated-header; map:58644
DATA_CHT_1_COMPGEN(0x009a76fc, "t_game_application `RTTI Type Descriptor'")
