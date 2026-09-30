// sanctuary.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\sanctuary.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 91/149 (A:37 B:9 C:0); unaccounted 58; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (88 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:63332; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00782190, 0x15, STATIC_INIT_DISPATCH, "sanctuary#1")

// name:C; dyninit; see ledger; map:63333
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "sanctuary#1")

// confidence:D; dyninit-init; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:63334; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007821b0, 0x1c, STATIC_INIT_DISPATCH, k_registration)

// name:B; dyninit; see ledger; map:63335
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, k_registration)

// confidence:D; dyninit-init; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:63336; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007821d0, 0x1c, STATIC_INIT_DISPATCH, k_sea_sanctuary_registration)

// name:B; dyninit; see ledger; map:63337
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, k_sea_sanctuary_registration)

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:33407
VA_CHT_1(0x007821f0, 0x19d)
t_sanctuary::t_sanctuary(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:63338; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00782450, 0x11, STATIC_INIT_DISPATCH, "sanctuary#4")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:63339; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00782470, 0xd1, STATIC_CTOR, "sanctuary#4")

// name:C; dyninit; see ledger; map:63340
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "sanctuary#4")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:63341; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00782550, 0xa, STATIC_DTOR, "sanctuary#4")

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:33408
VA_CHT_1(0x00782560, 0x4d6)
void t_sanctuary::activate_trigger(
    t_army* arg_0,
    t_adv_map_point const& arg_1,
    t_direction arg_2,
    t_adventure_frame* arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:33409
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_sanctuary::is_triggered_by(t_creature_array const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:33410
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_sanctuary::get_version() const
{
    // Body unavailable.
}

// name:A; map symbol; map:33411
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_sanctuary::dump_visitors()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:33412
VA_CHT_1(0x00782bc0, 0xc3)
void t_sanctuary::process_new_day()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:33413
VA_CHT_1(0x00782c90, 0x16c)
void t_sanctuary::left_double_click(t_mouse_event const& arg_0, t_adventure_frame* arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:33414
VA_CHT_1(0x00782e00, 0x6d)
bool t_sanctuary::read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_qualified_adv_object_type const& arg_1,
    int arg_2
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:33415
VA_CHT_1(0x00782e70, 0x183)
void t_sanctuary::right_click(t_mouse_event const& arg_0, t_adventure_frame* arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:33416
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_sanctuary::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:33417
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_sanctuary::compute_scouting_range() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:33418
VA_CHT_1(0x00783000, 0x2c)
void t_sanctuary::initialize(t_adventure_map& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:33419
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_sanctuary::is_deleted_by_deletion_marker() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:33420
VA_CHT_1(0x00783050, 0x19)
void t_sanctuary::read_postplacement(t_adventure_map& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:33421
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_sanctuary::on_begin_turn()
{
    // Body unavailable.
}

// name:A; map symbol; map:33422
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_sanctuary::on_end_turn()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:33423
VA_CHT_1(0x00783090, 0x67)
void t_sanctuary::set_owner(int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:33424
VA_CHT_1(0x00783100, 0x44)
void t_sanctuary::place(t_adventure_map& arg_0, t_adv_map_point const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:33425
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_skill_mastery t_sanctuary::get_anti_stealth_level() const
{
    // Body unavailable.
}

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:63342; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00783150, 0x11, STATIC_INIT_DISPATCH, "sanctuary#5")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:63343; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00783170, 0xd7, STATIC_CTOR, "sanctuary#5")

// name:C; dyninit; see ledger; map:63344
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "sanctuary#5")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:63345; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00783250, 0xa, STATIC_DTOR, "sanctuary#5")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:63346; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00783260, 0x11, STATIC_INIT_DISPATCH, "sanctuary#6")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:63347; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00783280, 0xd1, STATIC_CTOR, "sanctuary#6")

// name:C; dyninit; see ledger; map:63348
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "sanctuary#6")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:63349; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00783360, 0xa, STATIC_DTOR, "sanctuary#6")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:63350; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00783370, 0x11, STATIC_INIT_DISPATCH, "sanctuary#7")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:63351; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00783390, 0xd1, STATIC_CTOR, "sanctuary#7")

// name:C; dyninit; see ledger; map:63352
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "sanctuary#7")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:63353; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00783470, 0xa, STATIC_DTOR, "sanctuary#7")

namespace {

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:33426
VA_CHT_1(0x00783480, 0xa9a)
t_dialog_sanctuary::t_dialog_sanctuary(t_window* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:33427
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_dialog_sanctuary::enable_entry(bool arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:33428
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_dialog_sanctuary::set_text(std::string const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:33429
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_dialog_sanctuary::set_title(std::string const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:33430
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_dialog_sanctuary::close_click(t_button* arg_0, int arg_1)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:33431
VA_CHT_1(0x00783fe0, 0xd4)
t_sea_sanctuary::t_sea_sanctuary(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:33432
VA_CHT_1(0x007840c0, 0x33)
bool t_sea_sanctuary::is_triggered_by(t_creature_array const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:33433
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_sea_sanctuary::dump_visitors()
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:63354; name:B (dyninit; see ledger)
VA_CHT_1(0x00784480, 0x20)
// sanctuary$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:63356; name:B (dyninit; see ledger)
VA_CHT_1(0x007844a0, 0x5c)
// sanctuary$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:63357
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// sanctuary$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:63358
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// sanctuary$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:63359
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// sanctuary$tatexit4
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:33434
VA_CHT_1_COMPGEN(0x00782390, 0x33, VECTOR_DELETING_DTOR, t_sanctuary)

// name:A; map symbol; map:33435
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_sanctuary)

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:33436
VA_CHT_1(0x007823d0, 0x71)
// public: void t_sanctuary::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:33437
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_sanctuary::~t_sanctuary()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:33438
VA_CHT_1_COMPGEN(0x00783f20, 0x1e, VECTOR_DELETING_DTOR, t_dialog_sanctuary)

// name:A; map symbol; map:33439
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_dialog_sanctuary)

namespace {

// name:A; map symbol; map:33440
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_dialog_sanctuary::~t_dialog_sanctuary()
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:33441
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_sea_sanctuary)

// name:A; map symbol; map:33442
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_sea_sanctuary)

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:33443
VA_CHT_1(0x00784100, 0x71)
// public: void t_sea_sanctuary::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:33444
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_sea_sanctuary::~t_sea_sanctuary()
{
    // Body unavailable.
}

// name:A; map symbol; map:33445
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_registration<t_sanctuary>::t_object_registration<t_sanctuary>(t_adv_object_type arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:33446
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_registration<t_sea_sanctuary>::t_object_registration<t_sea_sanctuary>(t_adv_object_type arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:33447
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_button*, int> bound_handler(
    t_dialog_sanctuary& arg_0,
    void (t_dialog_sanctuary::*)(t_button*, int)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:33448
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_factory<t_sanctuary>::t_object_factory<t_sanctuary>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot;vftable-certificate=384340:33449;class=t_object_factory<class t_sanctuary>;proof=unique-hierarchy-method-and-slot-cleanup;cleanup=8;checked-rtti-and-raw-slots;vft=4e9684,col=514634,offset=0,slot=0,entry=384340; map:33449
VA_CHT_1(0x00784340, 0x65)
t_stationary_adventure_object* t_object_factory<t_sanctuary>::create(
    std::string const& arg_0,
    t_qualified_adv_object_type const& arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:33450
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_factory<t_sea_sanctuary>::t_object_factory<t_sea_sanctuary>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot;vftable-certificate=3843b0:33451;class=t_object_factory<class t_sea_sanctuary>;proof=unique-hierarchy-method-and-slot-cleanup;cleanup=8;checked-rtti-and-raw-slots;vft=4e968c,col=51467c,offset=0,slot=0,entry=3843b0; map:33451
VA_CHT_1(0x007843b0, 0x65)
t_stationary_adventure_object* t_object_factory<t_sea_sanctuary>::create(
    std::string const& arg_0,
    t_qualified_adv_object_type const& arg_1
) const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:33452
VA_CHT_1(0x00784420, 0x5e)
t_bound_handler_2<t_dialog_sanctuary, t_button*, int>::t_bound_handler_2<t_dialog_sanctuary, t_button*, int>(
    t_dialog_sanctuary& arg_0,
    void (t_dialog_sanctuary::*)(t_button*, int)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:33453
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_2<t_dialog_sanctuary, t_button*, int>::operator()(t_button* arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:33454
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_dialog_sanctuary, t_button*, int>")

// name:A; map symbol; map:33455
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_2<t_dialog_sanctuary, t_button*, int>")

// name:A; map symbol; map:33456
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_2<t_dialog_sanctuary, t_button*, int>::~t_bound_handler_2<t_dialog_sanctuary, t_button*, int>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:33457
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_dialog_sanctuary, t_button*, int>")

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:33458
VA_CHT_1_COMPGEN(0x00784500, 0x8, VECTOR_DELETING_DTOR, t_sea_sanctuary)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:33459
VA_CHT_1_COMPGEN(0x00784510, 0x8, VECTOR_DELETING_DTOR, t_sea_sanctuary)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:33460
VA_CHT_1(0x00784520, 0x8)
// [thunk]: protected: virtual int t_sanctuary::compute_scouting_range`adjustor{84}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:33461
VA_CHT_1_COMPGEN(0x00784530, 0xe, VECTOR_DELETING_DTOR, t_sea_sanctuary)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:33462
VA_CHT_1(0x00784540, 0xb)
// [thunk]: public: virtual t_player_color t_owned_adv_object::get_player_color`vtordisp{-4, 80}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:33463
VA_CHT_1(0x00784550, 0x8)
// [thunk]: public: virtual t_creature_array* t_creature_array::get_creature_array`adjustor{16}'(void)
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:33464
VA_CHT_1(0x00784560, 0xb)
// [thunk]: public: virtual int t_owned_adv_object::get_owner_number`vtordisp{-4, 80}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:33465
VA_CHT_1_COMPGEN(0x00784570, 0x8, VECTOR_DELETING_DTOR, t_sanctuary)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:33466
VA_CHT_1_COMPGEN(0x00784580, 0x8, VECTOR_DELETING_DTOR, t_sanctuary)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:33467
VA_CHT_1_COMPGEN(0x00784590, 0xe, VECTOR_DELETING_DTOR, t_sanctuary)

// === .rdata (21 symbols) ===

// name:A; map symbol; map:45227
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_sanctuary::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:45228
DATA_CHT_1_COMPGEN(0x008e9694, "const t_sanctuary::`vftable'")

// confidence:B; rtti-order; map:45229
DATA_CHT_1_COMPGEN(0x008e9754, "const t_sanctuary::`vftable'{for `t_creature_array'}")

// confidence:B; rtti-order; map:45230
DATA_CHT_1_COMPGEN(0x008e9788, "const t_sanctuary::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:45231
DATA_CHT_1_COMPGEN(0x008e9794, "const t_sanctuary::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:45232
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_sanctuary::`vbtable'")

// name:A; map symbol; map:45233
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_sanctuary::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:45234
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_sanctuary::`vbtable'{for `t_abstract_stationary_adv_object'}")

// confidence:A; rtti-name; map:45235
DATA_CHT_1_COMPGEN(0x008e9874, "const t_dialog_sanctuary::`vftable'")

// name:A; map symbol; map:45236
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_sea_sanctuary::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:45237
DATA_CHT_1_COMPGEN(0x008e98e4, "const t_sea_sanctuary::`vftable'")

// confidence:B; rtti-order; map:45238
DATA_CHT_1_COMPGEN(0x008e99a4, "const t_sea_sanctuary::`vftable'{for `t_creature_array'}")

// confidence:B; rtti-order; map:45239
DATA_CHT_1_COMPGEN(0x008e99d8, "const t_sea_sanctuary::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:45240
DATA_CHT_1_COMPGEN(0x008e99e4, "const t_sea_sanctuary::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:45241
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_sea_sanctuary::`vbtable'")

// name:A; map symbol; map:45242
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_sea_sanctuary::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:45243
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_sea_sanctuary::`vbtable'{for `t_abstract_stationary_adv_object'}")

// confidence:A; rtti-name; map:45244
DATA_CHT_1_COMPGEN(0x008e9684, "const t_object_factory<t_sanctuary>::`vftable'")

// confidence:A; rtti-name; map:45245
DATA_CHT_1_COMPGEN(0x008e968c, "const t_object_factory<t_sea_sanctuary>::`vftable'")

// confidence:A; rtti-name; map:45246
DATA_CHT_1_COMPGEN(0x008e9ac4, "const t_bound_handler_2<t_dialog_sanctuary, t_button*, int>::`vftable'{for `t_abstract_function_2<void, t_button*, int>'}")

// confidence:B; rtti-order; map:45247
DATA_CHT_1_COMPGEN(0x008e9ad0, "const t_bound_handler_2<t_dialog_sanctuary, t_button*, int>::`vftable'{for `t_counted_object'}")

// === .rdata$r (33 symbols) ===

// name:A; map symbol; map:54395
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_sanctuary::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_sanctuary@@;vft=4e9694;col=514740;td=5b0674;chd=514730;offset=176;cdOffset=0;validated-hierarchy; map:54396
DATA_CHT_1_COMPGEN(0x00914740, "const t_sanctuary::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54397
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_sanctuary::`RTTI Complete Object Locator'{for `t_creature_array'}")

// name:A; map symbol; map:54398
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_sanctuary::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_sanctuary@@;bcd=5146e0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54399
DATA_CHT_1_COMPGEN(0x009146e0, "t_sanctuary::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_sanctuary@@;vft=4e9694;col=514740;td=5b0674;chd=514730;offset=176;cdOffset=0;validated-hierarchy; map:54400
DATA_CHT_1_COMPGEN(0x009146f8, "t_sanctuary::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_sanctuary@@;vft=4e9694;col=514740;td=5b0674;chd=514730;offset=176;cdOffset=0;validated-hierarchy; map:54401
DATA_CHT_1_COMPGEN(0x00914730, "t_sanctuary::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54402
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_sanctuary::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_dialog_sanctuary@?%C:\Work\game\sanctuary.cpp2964110760@@;bcd=514754;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54403
DATA_CHT_1_COMPGEN(0x00914754, "t_dialog_sanctuary::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_dialog_sanctuary@?%C:\Work\game\sanctuary.cpp2964110760@@;vft=4e9874;col=514790;td=5b26c8;chd=514780;offset=0;cdOffset=0;validated-hierarchy; map:54404
DATA_CHT_1_COMPGEN(0x0091476c, "t_dialog_sanctuary::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_dialog_sanctuary@?%C:\Work\game\sanctuary.cpp2964110760@@;vft=4e9874;col=514790;td=5b26c8;chd=514780;offset=0;cdOffset=0;validated-hierarchy; map:54405
DATA_CHT_1_COMPGEN(0x00914780, "t_dialog_sanctuary::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_dialog_sanctuary@?%C:\Work\game\sanctuary.cpp2964110760@@;vft=4e9874;col=514790;td=5b26c8;chd=514780;offset=0;cdOffset=0;validated-hierarchy; map:54406
DATA_CHT_1_COMPGEN(0x00914790, "const t_dialog_sanctuary::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54407
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_sea_sanctuary::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_sea_sanctuary@@;vft=4e98e4;col=514858;td=5b2724;chd=514848;offset=176;cdOffset=0;validated-hierarchy; map:54408
DATA_CHT_1_COMPGEN(0x00914858, "const t_sea_sanctuary::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54409
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_sea_sanctuary::`RTTI Complete Object Locator'{for `t_creature_array'}")

// name:A; map symbol; map:54410
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_sea_sanctuary::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_sea_sanctuary@@;bcd=5147f4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54411
DATA_CHT_1_COMPGEN(0x009147f4, "t_sea_sanctuary::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_sea_sanctuary@@;vft=4e98e4;col=514858;td=5b2724;chd=514848;offset=176;cdOffset=0;validated-hierarchy; map:54412
DATA_CHT_1_COMPGEN(0x0091480c, "t_sea_sanctuary::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_sea_sanctuary@@;vft=4e98e4;col=514858;td=5b2724;chd=514848;offset=176;cdOffset=0;validated-hierarchy; map:54413
DATA_CHT_1_COMPGEN(0x00914848, "t_sea_sanctuary::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54414
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_sea_sanctuary::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_object_factory@Vt_sanctuary@@@@;bcd=514600;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54415
DATA_CHT_1_COMPGEN(0x00914600, "t_object_factory<t_sanctuary>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_object_factory@Vt_sanctuary@@@@;vft=4e9684;col=514634;td=5b25e4;chd=514624;offset=0;cdOffset=0;validated-hierarchy; map:54416
DATA_CHT_1_COMPGEN(0x00914618, "t_object_factory<t_sanctuary>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_object_factory@Vt_sanctuary@@@@;vft=4e9684;col=514634;td=5b25e4;chd=514624;offset=0;cdOffset=0;validated-hierarchy; map:54417
DATA_CHT_1_COMPGEN(0x00914624, "t_object_factory<t_sanctuary>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_object_factory@Vt_sanctuary@@@@;vft=4e9684;col=514634;td=5b25e4;chd=514624;offset=0;cdOffset=0;validated-hierarchy; map:54418
DATA_CHT_1_COMPGEN(0x00914634, "const t_object_factory<t_sanctuary>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_object_factory@Vt_sea_sanctuary@@@@;bcd=514648;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54419
DATA_CHT_1_COMPGEN(0x00914648, "t_object_factory<t_sea_sanctuary>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_object_factory@Vt_sea_sanctuary@@@@;vft=4e968c;col=51467c;td=5b2614;chd=51466c;offset=0;cdOffset=0;validated-hierarchy; map:54420
DATA_CHT_1_COMPGEN(0x00914660, "t_object_factory<t_sea_sanctuary>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_object_factory@Vt_sea_sanctuary@@@@;vft=4e968c;col=51467c;td=5b2614;chd=51466c;offset=0;cdOffset=0;validated-hierarchy; map:54421
DATA_CHT_1_COMPGEN(0x0091466c, "t_object_factory<t_sea_sanctuary>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_object_factory@Vt_sea_sanctuary@@@@;vft=4e968c;col=51467c;td=5b2614;chd=51466c;offset=0;cdOffset=0;validated-hierarchy; map:54422
DATA_CHT_1_COMPGEN(0x0091467c, "const t_object_factory<t_sea_sanctuary>::`RTTI Complete Object Locator'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_2@Vt_dialog_sanctuary@?%C:\Work\game\sanctuary.cpp2964110760@@PAVt_button@@H@@;vft=4e9ac4;col=5148bc;td=5b2748;chd=5148ac;offset=8;cdOffset=0;validated-hierarchy; map:54423
DATA_CHT_1_COMPGEN(0x009148bc, "const t_bound_handler_2<t_dialog_sanctuary, t_button*, int>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_button*, int>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_2@Vt_dialog_sanctuary@?%C:\Work\game\sanctuary.cpp2964110760@@PAVt_button@@H@@;bcd=514880;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54424
DATA_CHT_1_COMPGEN(0x00914880, "t_bound_handler_2<t_dialog_sanctuary, t_button*, int>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_2@Vt_dialog_sanctuary@?%C:\Work\game\sanctuary.cpp2964110760@@PAVt_button@@H@@;vft=4e9ac4;col=5148bc;td=5b2748;chd=5148ac;offset=8;cdOffset=0;validated-hierarchy; map:54425
DATA_CHT_1_COMPGEN(0x00914898, "t_bound_handler_2<t_dialog_sanctuary, t_button*, int>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_2@Vt_dialog_sanctuary@?%C:\Work\game\sanctuary.cpp2964110760@@PAVt_button@@H@@;vft=4e9ac4;col=5148bc;td=5b2748;chd=5148ac;offset=8;cdOffset=0;validated-hierarchy; map:54426
DATA_CHT_1_COMPGEN(0x009148ac, "t_bound_handler_2<t_dialog_sanctuary, t_button*, int>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54427
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_2<t_dialog_sanctuary, t_button*, int>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// === .data (5 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_dialog_sanctuary@?%C:\Work\game\sanctuary.cpp2964110760@@;td=5b26c8;validated-header; map:59066
DATA_CHT_1_COMPGEN(0x009b26c8, "t_dialog_sanctuary `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_sea_sanctuary@@;td=5b2724;validated-header; map:59067
DATA_CHT_1_COMPGEN(0x009b2724, "t_sea_sanctuary `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_object_factory@Vt_sanctuary@@@@;td=5b25e4;validated-header; map:59068
DATA_CHT_1_COMPGEN(0x009b25e4, "t_object_factory<t_sanctuary> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_object_factory@Vt_sea_sanctuary@@@@;td=5b2614;validated-header; map:59069
DATA_CHT_1_COMPGEN(0x009b2614, "t_object_factory<t_sea_sanctuary> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_2@Vt_dialog_sanctuary@?%C:\Work\game\sanctuary.cpp2964110760@@PAVt_button@@H@@;td=5b2748;validated-header; map:59070
DATA_CHT_1_COMPGEN(0x009b2748, "t_bound_handler_2<t_dialog_sanctuary, t_button*, int> `RTTI Type Descriptor'")

// === .bss (2 symbols) ===

namespace {

// confidence:B; dyninit-global; owner-conf-B; map:60341
DATA_CHT_1(0x009f41f4)
t_object_registration<t_sea_sanctuary> k_sea_sanctuary_registration; // Initial value unavailable.

// confidence:B; dyninit-global; owner-conf-B; map:60342
DATA_CHT_1(0x009f41f8)
t_object_registration<t_sanctuary> k_registration; // Initial value unavailable.

} // anonymous namespace
