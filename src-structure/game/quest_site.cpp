// quest_site.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\quest_site.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 420/800 (A:295 B:19 C:106); unaccounted 380; skipped std 7.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (460 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:63617; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007673b0, 0x15, STATIC_INIT_DISPATCH, "quest_site#1")

// name:C; dyninit; see ledger; map:63618
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "quest_site#1")

// confidence:A; dyninit-init; owner-conf-B; map:63619; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007673d0, 0x1c, STATIC_INIT_DISPATCH, g_quest_gate_registration)

// name:B; dyninit; see ledger; map:63620
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, g_quest_gate_registration)

// confidence:A; dyninit-init; owner-conf-B; map:63621; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007673f0, 0x1c, STATIC_INIT_DISPATCH, g_quest_guard_registration)

// name:B; dyninit; see ledger; map:63622
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, g_quest_guard_registration)

// confidence:A; dyninit-init; owner-conf-B; map:63623; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00767410, 0x1c, STATIC_INIT_DISPATCH, g_seers_hut_registration)

// name:B; dyninit; see ledger; map:63624
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, g_seers_hut_registration)

// confidence:A; align-order; retn,stable,vptr; map:32400
VA_CHT_1(0x00767430, 0x1ff)
t_quest_origin_site::t_quest_origin_site(t_stationary_adventure_object const& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:32401
VA_CHT_1(0x00767630, 0x20)
t_abstract_script_boolean_expression const& t_quest_origin_site::get_completion_condition() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:32402
VA_CHT_1(0x00767890, 0x6c)
t_abstract_script_action const& t_quest_origin_site::get_triggered_script() const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:32403
VA_CHT_1(0x00767900, 0x278)
bool t_quest_origin_site::read_version(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1,
    int* arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:32404
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_quest_origin_site::read_data(std::basic_streambuf<char, std::char_traits<char>>& arg_0, int* arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:32405
VA_CHT_1(0x00767b80, 0x199)
bool t_quest_origin_site::read_from_map_impl(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_progress_handler* arg_1,
    int arg_2
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:32406
VA_CHT_1(0x00767d20, 0x272)
bool t_quest_origin_site::write_impl(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vslot; map:32407
VA_CHT_1(0x00767fa0, 0x70)
void t_quest_origin_site::place(t_adventure_map& arg_0, t_adv_map_point const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:32408
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_quest_origin_site::set_visited(t_player_color arg_0, bool arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:32409
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_quest_origin_site::get_visited(t_player_color arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:32410
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_quest_origin_site::set_completed(t_player_color arg_0, bool arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:32411
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_quest_origin_site::get_completed(t_player_color arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:32412
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::string t_quest_origin_site::get_name() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:32413
VA_CHT_1(0x00768140, 0x25a)
void t_quest_origin_site::right_click(t_mouse_event const& arg_0, t_adventure_frame* arg_1)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:32414
VA_CHT_1(0x007683b0, 0x34c)
void t_quest_origin_site::activate_trigger(
    t_army* arg_0,
    t_adv_map_point const& arg_1,
    t_direction arg_2,
    t_adventure_frame* arg_3
)
{
    // Body unavailable.
}

// confidence:A; align-order; stable,vslot; map:32415
VA_CHT_1(0x00768700, 0x2a0)
void t_quest_origin_site::on_initial_visit(
    t_army* arg_0,
    t_level_map_point_2d arg_1,
    t_direction arg_2,
    t_adventure_frame* arg_3
)
{
    // Body unavailable.
}

// confidence:A; align-order; stable,vslot; map:32416
VA_CHT_1(0x007689a0, 0x85)
void t_quest_origin_site::on_complete(
    t_army* arg_0,
    t_level_map_point_2d arg_1,
    t_direction arg_2,
    t_adventure_frame* arg_3
)
{
    // Body unavailable.
}

// confidence:A; align-order; stable,vslot; map:32417
VA_CHT_1(0x00768a30, 0x3)
void t_quest_origin_site::on_completed(
    t_army* arg_0,
    t_level_map_point_2d arg_1,
    t_direction arg_2,
    t_adventure_frame* arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:32418
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_quest_origin_site::on_revisited(
    t_army* arg_0,
    t_level_map_point_2d arg_1,
    t_direction arg_2,
    t_adventure_frame* arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:32419
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_quest_origin_site::is_completed(t_creature_array const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:32420
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_quest_gate::get_version() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:32421
VA_CHT_1(0x00768c30, 0x8a)
bool t_quest_gate::read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_qualified_adv_object_type const& arg_1,
    int arg_2
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:32422
VA_CHT_1(0x00768cc0, 0x70)
bool t_quest_gate::read_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_progress_handler* arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:32423
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_quest_gate::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:32424
VA_CHT_1(0x00768d40, 0x103)
bool t_quest_gate::blocks_army(t_creature_array const& arg_0, t_path_search_type arg_1) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:32425
VA_CHT_1(0x00768e50, 0xd1)
bool t_quest_gate::is_triggered_by(t_creature_array const& arg_0) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:32426
VA_CHT_1(0x00768f30, 0x19f)
bool t_quest_gate::trigger_event(t_army& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:32427
VA_CHT_1(0x007690d0, 0x126)
t_quest_site::t_quest_site(t_stationary_adventure_object const& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:32428
VA_CHT_1(0x00769240, 0x14b)
t_abstract_script_action const& t_quest_site::get_completion_script() const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:32429
VA_CHT_1(0x00769390, 0xb4)
bool t_quest_site::read_completion_script(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:32430
VA_CHT_1(0x00769450, 0xaf)
bool t_quest_site::read_completion_script_from_map(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:32431
VA_CHT_1(0x00769500, 0xea)
bool t_quest_site::read_version(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1,
    int* arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:32432
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_quest_site::read_data(std::basic_streambuf<char, std::char_traits<char>>& arg_0, int* arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:32433
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_quest_site::read_from_map_impl(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_progress_handler* arg_1,
    int arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:32434
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_quest_site::write_impl(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:A; align-order; vslot; map:32435
VA_CHT_1(0x007695f0, 0x192)
void t_quest_site::on_complete(
    t_army* arg_0,
    t_level_map_point_2d arg_1,
    t_direction arg_2,
    t_adventure_frame* arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:32436
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_quest_guard::get_version() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vslot; map:32437
VA_CHT_1(0x00769790, 0x6c)
bool t_quest_guard::read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_qualified_adv_object_type const& arg_1,
    int arg_2
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vslot; map:32438
VA_CHT_1(0x00769800, 0xc6)
bool t_quest_guard::read_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_progress_handler* arg_1
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vslot; map:32439
VA_CHT_1(0x007698d0, 0xc0)
bool t_quest_guard::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:32440
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_quest_guard::on_complete(
    t_army* arg_0,
    t_level_map_point_2d arg_1,
    t_direction arg_2,
    t_adventure_frame* arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:32441
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_seers_hut::get_version() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vslot; map:32442
VA_CHT_1(0x00769a20, 0xb8)
bool t_seers_hut::read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_qualified_adv_object_type const& arg_1,
    int arg_2
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vslot; map:32443
VA_CHT_1(0x00769ae0, 0x10d)
bool t_seers_hut::read_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_progress_handler* arg_1
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vslot; map:32444
VA_CHT_1(0x00769bf0, 0x115)
bool t_seers_hut::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:A; align-order; vslot; map:32445
VA_CHT_1(0x00769d10, 0x109)
void t_seers_hut::on_completed(
    t_army* arg_0,
    t_level_map_point_2d arg_1,
    t_direction arg_2,
    t_adventure_frame* arg_3
)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:63625; name:B (dyninit; see ledger)
VA_CHT_1(0x0076a8e0, 0x15a)
// quest_site$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:A; align-order; atexit,stable; map:63627; name:C (dyninit; see ledger)
VA_CHT_1(0x0076aa60, 0x1f)
// t_script_action_base<42,t_script_sequence>::k_factory$atexit
// Function body not reconstructed; signature retained as a comment.

// confidence:A; align-order; atexit,stable; map:63628; name:C (dyninit; see ledger)
VA_CHT_1(0x0076aa80, 0x1f)
// t_script_numeric_expression_base<1,t_script_expression_day>::k_factory$atexit
// Function body not reconstructed; signature retained as a comment.

// confidence:A; align-order; atexit,stable; map:63629; name:C (dyninit; see ledger)
VA_CHT_1(0x0076aaa0, 0x1f)
// t_script_numeric_expression_base<2,t_script_expression_day_of_week>::k_factory$atexit
// Function body not reconstructed; signature retained as a comment.

// confidence:A; align-order; atexit,stable; map:63630; name:C (dyninit; see ledger)
VA_CHT_1(0x0076aac0, 0x1f)
// t_script_numeric_expression_base<19,t_script_expression_week>::k_factory$atexit
// Function body not reconstructed; signature retained as a comment.

// confidence:A; align-order; atexit,stable; map:63631; name:C (dyninit; see ledger)
VA_CHT_1(0x0076aae0, 0x1f)
// t_script_numeric_expression_base<20,t_script_expression_week_of_month>::k_factory$atexit
// Function body not reconstructed; signature retained as a comment.

// confidence:A; align-order; atexit,stable; map:63632; name:C (dyninit; see ledger)
VA_CHT_1(0x0076ab00, 0x1f)
// t_script_numeric_expression_base<9,t_script_expression_month>::k_factory$atexit
// Function body not reconstructed; signature retained as a comment.

// confidence:A; align-order; atexit,stable; map:63633; name:C (dyninit; see ledger)
VA_CHT_1(0x0076ab20, 0x1f)
// t_script_boolean_expression_base<22,t_script_expression_true>::k_factory$atexit
// Function body not reconstructed; signature retained as a comment.

// name:C; dyninit; see ledger; map:63634
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "t_script_boolean_expression_base<5,t_script_expression_false>::k_factory")

// confidence:A; dyninit-tinit; owner-conf-B; map:63635; name:B (dyninit; see ledger)
VA_CHT_1(0x0076b0a0, 0x5c)
// quest_site$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:63636
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// quest_site$tatexit10
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:63637
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// quest_site$tatexit11
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:63638
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// quest_site$tatexit12
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:32446
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_boolean_expression<5>::t_script_boolean_expression<5>()
{
    // Body unavailable.
}

// name:A; map symbol; map:32447
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<42>::t_script_action<42>()
{
    // Body unavailable.
}

// name:A; map symbol; map:32448
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_abstract_script_action::add_icons(t_basic_dialog* arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:32449
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_script_sequence::executed_subaction(t_abstract_script_action const& arg_0) const
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:32450
VA_CHT_1_COMPGEN(0x007676f0, 0x33, SCALAR_DELETING_DTOR, t_quest_origin_site)

// name:A; map symbol; map:32451
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_quest_origin_site)

// name:A; map symbol; map:32452
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_boolean_expression<5>")

// name:A; map symbol; map:32453
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_boolean_expression<5>")

// name:A; map symbol; map:32454
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_boolean_expression_base<5, t_script_expression_false>::t_script_boolean_expression_base<5, t_script_expression_false>(

)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:32455
VA_CHT_1_COMPGEN(0x00767860, 0x1e, VECTOR_DELETING_DTOR, "t_script_action<42>")

// confidence:A; align-band; retn,vslot; map:32456
VA_CHT_1_COMPGEN(0x00769e20, 0x72, SCALAR_DELETING_DTOR, "t_script_action<42>")

// name:A; map symbol; map:32457
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<42, t_script_sequence>::t_script_action_base<42, t_script_sequence>()
{
    // Body unavailable.
}

// name:A; map symbol; map:32458
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_sequence::t_script_sequence()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:32459
VA_CHT_1(0x007918e0, 0x10)
t_abstract_script_action::~t_abstract_script_action()
{
    // Body unavailable.
}

// name:A; map symbol; map:32460
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_abstract_script_action::execute(t_script_context_hero const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:32461
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_abstract_script_action::execute(t_script_context_town const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:32462
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_abstract_script_action::execute(t_script_context_object const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:32463
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_abstract_script_action::execute(t_script_context_army const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:32464
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_abstract_script_action::execute(t_script_context_global const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:32465
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_abstract_script_action)

// name:A; map symbol; map:32466
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_abstract_script_action)

// confidence:A; align-band; retn,stable,vslot; map:32467
VA_CHT_1_COMPGEN(0x00767650, 0x1e, VECTOR_DELETING_DTOR, t_script_sequence)

// name:A; map symbol; map:32468
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_script_sequence)

// name:A; map symbol; map:32469
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_script_action::t_abstract_script_action()
{
    // Body unavailable.
}

// name:A; map symbol; map:32470
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_sequence::~t_script_sequence()
{
    // Body unavailable.
}

// name:A; map symbol; map:32471
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// public: void t_quest_origin_site::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:32472
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_quest_origin_site::~t_quest_origin_site()
{
    // Body unavailable.
}

// name:A; map symbol; map:32473
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_boolean_expression<5>::~t_script_boolean_expression<5>()
{
    // Body unavailable.
}

// name:A; map symbol; map:32474
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_boolean_expression_base<5, t_script_expression_false>::~t_script_boolean_expression_base<5, t_script_expression_false>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:32475
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_boolean_expression_base<5, t_script_expression_false>")

// name:A; map symbol; map:32476
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_boolean_expression_base<5, t_script_expression_false>")

// confidence:A; align-band; retn,stable,vptr; map:32477
VA_CHT_1(0x00767880, 0x10)
t_script_expression_false::t_script_expression_false()
{
    // Body unavailable.
}

// name:A; map symbol; map:32478
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_expression_false::~t_script_expression_false()
{
    // Body unavailable.
}

// name:A; map symbol; map:32479
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<42>::~t_script_action<42>()
{
    // Body unavailable.
}

// name:A; map symbol; map:32480
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<42, t_script_sequence>::~t_script_action_base<42, t_script_sequence>()
{
    // Body unavailable.
}

// name:A; map symbol; map:32481
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_action_base<42, t_script_sequence>")

// name:A; map symbol; map:32482
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_action_base<42, t_script_sequence>")

// name:A; map symbol; map:32483
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_script_expression_false)

// name:A; map symbol; map:32484
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_script_expression_false)

// name:A; map symbol; map:32485
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_simple_expression<t_abstract_script_boolean_expression>::t_script_simple_expression<t_abstract_script_boolean_expression>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:32486
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_simple_expression<t_abstract_script_boolean_expression>::~t_script_simple_expression<t_abstract_script_boolean_expression>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:32487
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_simple_expression<t_abstract_script_boolean_expression>")

// name:A; map symbol; map:32488
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_simple_expression<t_abstract_script_boolean_expression>")

// confidence:A; align-band; retn,stable,vptr; map:32489
VA_CHT_1(0x00794bb0, 0x10)
t_abstract_script_boolean_expression::t_abstract_script_boolean_expression()
{
    // Body unavailable.
}

// name:A; map symbol; map:32490
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_script_boolean_expression::~t_abstract_script_boolean_expression()
{
    // Body unavailable.
}

// name:A; map symbol; map:32491
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_abstract_script_boolean_expression)

// name:A; map symbol; map:32492
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_abstract_script_boolean_expression)

// confidence:A; align-band; retn,stable,vptr; map:32493
VA_CHT_1(0x0079d440, 0x10)
t_abstract_script_expression_base<t_abstract_script_boolean_expression, t_script_boolean_expression_type, bool>::t_abstract_script_expression_base<t_abstract_script_boolean_expression, t_script_boolean_expression_type, bool>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:32494
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_abstract_script_expression_base<t_abstract_script_boolean_expression, t_script_boolean_expression_type, bool>")

// name:A; map symbol; map:32495
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_abstract_script_expression_base<t_abstract_script_boolean_expression, t_script_boolean_expression_type, bool>")

// name:A; map symbol; map:32496
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::string const& t_quest_origin_site::get_site_name() const
{
    // Body unavailable.
}

// name:A; map symbol; map:32497
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_expression_context_army::t_expression_context_army(t_script_context_army const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:32498
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::string const& t_quest_origin_site::get_proposal_message() const
{
    // Body unavailable.
}

// name:A; map symbol; map:32499
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_player::inc_quests_completed()
{
    // Body unavailable.
}

// name:A; map symbol; map:32500
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::string const& t_quest_origin_site::get_progress_message() const
{
    // Body unavailable.
}

// name:A; map symbol; map:32501
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_expression_context_army::t_expression_context_army(
    t_adventure_map const* arg_0,
    t_creature_array const* arg_1,
    t_player const* arg_2,
    t_creature_array const* arg_3,
    t_player const* arg_4,
    t_adv_map_point const* arg_5
)
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:32502
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int quest_gate_details::to_base_map_format_version(int arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:32503
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_quest_gate>::~t_counted_ptr<t_quest_gate>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:32504
VA_CHT_1_COMPGEN(0x00769200, 0x33, SCALAR_DELETING_DTOR, t_quest_site)

// name:A; map symbol; map:32505
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_quest_site)

// name:A; map symbol; map:32506
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// public: void t_quest_site::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:32507
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_quest_site::~t_quest_site()
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:32508
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int quest_site_details::to_base_map_format_version(int arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:32509
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::string const& t_quest_site::get_completion_question() const
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:32510
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int quest_guard_details::to_base_map_format_version(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:32511
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int seers_hut_details::to_base_map_format_version(int arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:32512
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_script_expression_base<t_abstract_script_boolean_expression, t_script_boolean_expression_type, bool>::~t_abstract_script_expression_base<t_abstract_script_boolean_expression, t_script_boolean_expression_type, bool>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:32518
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_action>& t_counted_ptr<t_abstract_script_action>::operator=(
    t_counted_ptr<t_abstract_script_action> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:32519
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_action>& t_counted_ptr<t_abstract_script_action>::operator=(
    t_abstract_script_action* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:32520
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_script_action& t_counted_ptr<t_abstract_script_action>::operator*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:32521
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_script_boolean_expression* t_counted_ptr<t_abstract_script_boolean_expression>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:32522
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_boolean_expression>& t_counted_ptr<t_abstract_script_boolean_expression>::operator=(
    t_counted_ptr<t_abstract_script_boolean_expression> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:32523
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_script_boolean_expression& t_counted_ptr<t_abstract_script_boolean_expression>::operator*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:32524
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_abstract_script_expression_base<t_abstract_script_boolean_expression, t_script_boolean_expression_type, bool>::evaluate(
    t_expression_context_army const& arg_0
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:32525
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_expression_context_global::t_expression_context_global(t_adventure_map const* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:32526
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_abstract_script_expression_base<t_abstract_script_boolean_expression, t_script_boolean_expression_type, bool>::evaluate(
    t_expression_context_object const& arg_0
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:32527
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_abstract_script_expression_base<t_abstract_script_boolean_expression, t_script_boolean_expression_type, bool>::evaluate(
    t_expression_context_town const& arg_0
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:32528
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_abstract_script_expression_base<t_abstract_script_boolean_expression, t_script_boolean_expression_type, bool>::evaluate(
    t_expression_context_hero const& arg_0
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:32529
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_action> t_script_action_base<42, t_script_sequence>::clone() const
{
    // Body unavailable.
}

// name:A; map symbol; map:32530
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_type t_script_action_base<42, t_script_sequence>::get_type() const
{
    // Body unavailable.
}

// name:A; map symbol; map:32531
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_script_simple_expression<t_abstract_script_boolean_expression>::read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:32532
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_script_simple_expression<t_abstract_script_boolean_expression>::read_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:32533
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_script_simple_expression<t_abstract_script_boolean_expression>::write(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:32534
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_abstract_script_expression_base<t_abstract_script_boolean_expression, t_script_boolean_expression_type, bool>::write(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:32535
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_boolean_expression> t_script_boolean_expression_base<5, t_script_expression_false>::clone(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:32536
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_boolean_expression_type t_script_boolean_expression_base<5, t_script_expression_false>::get_type(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:32537
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_registration<t_quest_gate>::t_object_registration<t_quest_gate>(t_adv_object_type arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:32538
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_registration<t_quest_guard>::t_object_registration<t_quest_guard>(t_adv_object_type arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:32539
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_registration<t_seers_hut>::t_object_registration<t_seers_hut>(t_adv_object_type arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:32540
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_quest_gate>::t_counted_ptr<t_quest_gate>(t_quest_gate* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:32542
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<42>::t_script_action<42>(t_script_action<42> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:32543
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_boolean_expression<5>::t_script_boolean_expression<5>(t_script_boolean_expression<5> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:32544
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_factory<t_quest_gate>::t_object_factory<t_quest_gate>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:32545
VA_CHT_1(0x00769f20, 0x1b2)
t_stationary_adventure_object* t_object_factory<t_quest_gate>::create(
    std::string const& arg_0,
    t_qualified_adv_object_type const& arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:32546
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_quest_gate::t_quest_gate(t_stationary_adventure_object const& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:32547
VA_CHT_1_COMPGEN(0x0076a0e0, 0x33, VECTOR_DELETING_DTOR, t_quest_gate)

// name:A; map symbol; map:32548
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_quest_gate)

// name:A; map symbol; map:32549
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// public: void t_quest_gate::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:32550
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_quest_gate::~t_quest_gate()
{
    // Body unavailable.
}

// name:A; map symbol; map:32551
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_factory<t_quest_guard>::t_object_factory<t_quest_guard>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,vslot; map:32552
VA_CHT_1(0x0076a230, 0x1b2)
t_stationary_adventure_object* t_object_factory<t_quest_guard>::create(
    std::string const& arg_0,
    t_qualified_adv_object_type const& arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:32553
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_quest_guard::t_quest_guard(t_stationary_adventure_object const& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:32554
VA_CHT_1_COMPGEN(0x0076a3f0, 0x33, VECTOR_DELETING_DTOR, t_quest_guard)

// name:A; map symbol; map:32555
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_quest_guard)

// name:A; map symbol; map:32556
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// public: void t_quest_guard::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:32557
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_quest_guard::~t_quest_guard()
{
    // Body unavailable.
}

// name:A; map symbol; map:32558
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_factory<t_seers_hut>::t_object_factory<t_seers_hut>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:32559
VA_CHT_1(0x0076a560, 0x1d9)
t_stationary_adventure_object* t_object_factory<t_seers_hut>::create(
    std::string const& arg_0,
    t_qualified_adv_object_type const& arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:32560
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_seers_hut::t_seers_hut(t_stationary_adventure_object const& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:32561
VA_CHT_1_COMPGEN(0x0076a740, 0x33, SCALAR_DELETING_DTOR, t_seers_hut)

// name:A; map symbol; map:32562
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_seers_hut)

// name:A; map symbol; map:32563
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// public: void t_seers_hut::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:32564
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_seers_hut::~t_seers_hut()
{
    // Body unavailable.
}

// name:A; map symbol; map:32565
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_counted_ptr<t_abstract_script_action>")

// name:A; map symbol; map:32566
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<42, t_script_sequence>::t_script_action_base<42, t_script_sequence>(
    t_script_action_base<42, t_script_sequence> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:32567
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_boolean_expression_base<5, t_script_expression_false>::t_script_boolean_expression_base<5, t_script_expression_false>(
    t_script_boolean_expression_base<5, t_script_expression_false> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:32568
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_expression_false::t_script_expression_false(t_script_expression_false const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:32569
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_simple_expression<t_abstract_script_boolean_expression>::t_script_simple_expression<t_abstract_script_boolean_expression>(
    t_script_simple_expression<t_abstract_script_boolean_expression> const& arg_0
)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:32570
VA_CHT_1(0x00794bc0, 0x22)
t_abstract_script_boolean_expression::t_abstract_script_boolean_expression(
    t_abstract_script_boolean_expression const& arg_0
)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:32571
VA_CHT_1(0x0079f6c0, 0x12)
t_abstract_script_expression_base<t_abstract_script_boolean_expression, t_script_boolean_expression_type, bool>::t_abstract_script_expression_base<t_abstract_script_boolean_expression, t_script_boolean_expression_type, bool>(
    t_abstract_script_expression_base<t_abstract_script_boolean_expression, t_script_boolean_expression_type, bool> const& arg_0
)
{
    // Body unavailable.
}

// name:A; dyninit; see ledger; map:32572
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "t_script_action_base<42,t_script_sequence>::k_factory")

// name:A; dyninit; see ledger; map:32573
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "t_script_numeric_expression_base<1,t_script_expression_day>::k_factory")

// name:A; dyninit; see ledger; map:32574
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "t_script_numeric_expression_base<2,t_script_expression_day_of_week>::k_factory")

// name:A; dyninit; see ledger; map:32575
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "t_script_numeric_expression_base<19,t_script_expression_week>::k_factory")

// name:A; dyninit; see ledger; map:32576
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "t_script_numeric_expression_base<20,t_script_expression_week_of_month>::k_factory")

// name:A; dyninit; see ledger; map:32577
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "t_script_numeric_expression_base<9,t_script_expression_month>::k_factory")

// name:A; dyninit; see ledger; map:32578
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "t_script_boolean_expression_base<22,t_script_expression_true>::k_factory")

// name:A; dyninit; see ledger; map:32579
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "t_script_boolean_expression_base<5,t_script_expression_false>::k_factory")

// name:A; dyninit; see ledger; map:32580
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "t_script_boolean_expression_base<5,t_script_expression_false>::k_factory")

// name:A; dyninit; see ledger; map:32581
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "t_script_boolean_expression_base<22,t_script_expression_true>::k_factory")

// name:A; dyninit; see ledger; map:32582
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "t_script_numeric_expression_base<9,t_script_expression_month>::k_factory")

// name:A; dyninit; see ledger; map:32583
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "t_script_numeric_expression_base<20,t_script_expression_week_of_month>::k_factory")

// name:A; dyninit; see ledger; map:32584
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "t_script_numeric_expression_base<19,t_script_expression_week>::k_factory")

// name:A; dyninit; see ledger; map:32585
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "t_script_numeric_expression_base<2,t_script_expression_day_of_week>::k_factory")

// name:A; dyninit; see ledger; map:32586
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "t_script_numeric_expression_base<1,t_script_expression_day>::k_factory")

// name:A; dyninit; see ledger; map:32587
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "t_script_action_base<42,t_script_sequence>::k_factory")

// confidence:A; align-band; retn,stable,vptr; map:32588
VA_CHT_1(0x0076ab70, 0x14)
t_script_action_factory<42>::~t_script_action_factory<42>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:32589
VA_CHT_1(0x0076ab40, 0x7)
t_abstract_script_action::t_factory::~t_factory()
{
    // Body unavailable.
}

// name:A; map symbol; map:32590
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression_factory<1>::~t_script_numeric_expression_factory<1>()
{
    // Body unavailable.
}

// name:A; map symbol; map:32591
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression_factory<2>::~t_script_numeric_expression_factory<2>()
{
    // Body unavailable.
}

// name:A; map symbol; map:32592
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression_factory<19>::~t_script_numeric_expression_factory<19>()
{
    // Body unavailable.
}

// name:A; map symbol; map:32593
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression_factory<20>::~t_script_numeric_expression_factory<20>()
{
    // Body unavailable.
}

// name:A; map symbol; map:32594
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression_factory<9>::~t_script_numeric_expression_factory<9>()
{
    // Body unavailable.
}

// name:A; map symbol; map:32595
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_boolean_expression_factory<22>::~t_script_boolean_expression_factory<22>()
{
    // Body unavailable.
}

// name:A; map symbol; map:32596
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_boolean_expression_factory<5>::~t_script_boolean_expression_factory<5>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:32597
VA_CHT_1(0x0076ab50, 0x7)
t_abstract_script_expression_factory<t_abstract_script_numeric_expression>::~t_abstract_script_expression_factory<t_abstract_script_numeric_expression>(

)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:32598
VA_CHT_1(0x0076ab60, 0x7)
t_abstract_script_expression_factory<t_abstract_script_boolean_expression>::~t_abstract_script_expression_factory<t_abstract_script_boolean_expression>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:32599
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_factory<42>::t_script_action_factory<42>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:32600
VA_CHT_1(0x0076ab90, 0x47)
t_counted_ptr<t_abstract_script_action> t_script_action_factory<42>::create() const
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:32601
VA_CHT_1(0x0076abe0, 0x49)
t_script_numeric_expression_factory<1>::t_script_numeric_expression_factory<1>()
{
    // Body unavailable.
}

// name:A; map symbol; map:32602
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_numeric_expression> t_script_numeric_expression_factory<1>::create() const
{
    // Body unavailable.
}

// name:A; map symbol; map:32603
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression<1>::t_script_numeric_expression<1>()
{
    // Body unavailable.
}

// name:A; map symbol; map:32604
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_abstract_script_expression_base<t_abstract_script_numeric_expression, t_script_numeric_expression_type, int>::evaluate(
    t_expression_context_army const& arg_0
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:32605
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_abstract_script_expression_base<t_abstract_script_numeric_expression, t_script_numeric_expression_type, int>::evaluate(
    t_expression_context_object const& arg_0
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:32606
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_abstract_script_expression_base<t_abstract_script_numeric_expression, t_script_numeric_expression_type, int>::evaluate(
    t_expression_context_town const& arg_0
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:32607
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_abstract_script_expression_base<t_abstract_script_numeric_expression, t_script_numeric_expression_type, int>::evaluate(
    t_expression_context_hero const& arg_0
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:32608
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_script_simple_expression<t_abstract_script_numeric_expression>::read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:32609
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_script_simple_expression<t_abstract_script_numeric_expression>::read_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:32610
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_script_simple_expression<t_abstract_script_numeric_expression>::write(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:32611
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_abstract_script_expression_base<t_abstract_script_numeric_expression, t_script_numeric_expression_type, int>::write(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:32612
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_numeric_expression> t_script_numeric_expression_base<1, t_script_expression_day>::clone(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:32613
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression_type t_script_numeric_expression_base<1, t_script_expression_day>::get_type(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:32614
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression<1>::t_script_numeric_expression<1>(t_script_numeric_expression<1> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:32615
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_numeric_expression<1>")

// name:A; map symbol; map:32616
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_numeric_expression<1>")

// name:A; map symbol; map:32617
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression_base<1, t_script_expression_day>::t_script_numeric_expression_base<1, t_script_expression_day>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:32618
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression_base<1, t_script_expression_day>::t_script_numeric_expression_base<1, t_script_expression_day>(
    t_script_numeric_expression_base<1, t_script_expression_day> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:32619
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression<1>::~t_script_numeric_expression<1>()
{
    // Body unavailable.
}

// name:A; map symbol; map:32620
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression_base<1, t_script_expression_day>::~t_script_numeric_expression_base<1, t_script_expression_day>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:32621
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_numeric_expression_base<1, t_script_expression_day>")

// name:A; map symbol; map:32622
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_numeric_expression_base<1, t_script_expression_day>")

// name:A; map symbol; map:32623
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_expression_day::t_script_expression_day()
{
    // Body unavailable.
}

// name:A; map symbol; map:32624
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_expression_day::~t_script_expression_day()
{
    // Body unavailable.
}

// name:A; map symbol; map:32625
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_expression_day::t_script_expression_day(t_script_expression_day const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:32626
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_script_expression_day)

// name:A; map symbol; map:32627
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_script_expression_day)

// name:A; map symbol; map:32628
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_simple_expression<t_abstract_script_numeric_expression>::t_script_simple_expression<t_abstract_script_numeric_expression>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:32629
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_simple_expression<t_abstract_script_numeric_expression>::~t_script_simple_expression<t_abstract_script_numeric_expression>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:32630
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_simple_expression<t_abstract_script_numeric_expression>::t_script_simple_expression<t_abstract_script_numeric_expression>(
    t_script_simple_expression<t_abstract_script_numeric_expression> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:32631
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_simple_expression<t_abstract_script_numeric_expression>")

// name:A; map symbol; map:32632
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_simple_expression<t_abstract_script_numeric_expression>")

// name:A; map symbol; map:32633
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_script_numeric_expression::t_abstract_script_numeric_expression()
{
    // Body unavailable.
}

// name:A; map symbol; map:32634
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_script_numeric_expression::~t_abstract_script_numeric_expression()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:32635
VA_CHT_1(0x00793b40, 0x10)
t_abstract_script_expression_base<t_abstract_script_numeric_expression, t_script_numeric_expression_type, int>::~t_abstract_script_expression_base<t_abstract_script_numeric_expression, t_script_numeric_expression_type, int>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:32636
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_abstract_script_expression_base<t_abstract_script_numeric_expression, t_script_numeric_expression_type, int>")

// name:A; map symbol; map:32637
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_abstract_script_expression_base<t_abstract_script_numeric_expression, t_script_numeric_expression_type, int>")

// name:A; map symbol; map:32638
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_script_numeric_expression::t_abstract_script_numeric_expression(
    t_abstract_script_numeric_expression const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:32639
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_abstract_script_numeric_expression)

// name:A; map symbol; map:32640
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_abstract_script_numeric_expression)

// name:A; map symbol; map:32641
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_script_expression_base<t_abstract_script_numeric_expression, t_script_numeric_expression_type, int>::t_abstract_script_expression_base<t_abstract_script_numeric_expression, t_script_numeric_expression_type, int>(

)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:32642
VA_CHT_1(0x00793590, 0x12)
t_abstract_script_expression_base<t_abstract_script_numeric_expression, t_script_numeric_expression_type, int>::t_abstract_script_expression_base<t_abstract_script_numeric_expression, t_script_numeric_expression_type, int>(
    t_abstract_script_expression_base<t_abstract_script_numeric_expression, t_script_numeric_expression_type, int> const& arg_0
)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:32643
VA_CHT_1(0x0076ad40, 0x49)
t_script_numeric_expression_factory<2>::t_script_numeric_expression_factory<2>()
{
    // Body unavailable.
}

// name:A; map symbol; map:32644
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_numeric_expression> t_script_numeric_expression_factory<2>::create() const
{
    // Body unavailable.
}

// name:A; map symbol; map:32645
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression<2>::t_script_numeric_expression<2>()
{
    // Body unavailable.
}

// name:A; map symbol; map:32646
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_numeric_expression> t_script_numeric_expression_base<2, t_script_expression_day_of_week>::clone(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:32647
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression_type t_script_numeric_expression_base<2, t_script_expression_day_of_week>::get_type(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:32648
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression<2>::t_script_numeric_expression<2>(t_script_numeric_expression<2> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:32649
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_numeric_expression<2>")

// name:A; map symbol; map:32650
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_numeric_expression<2>")

// name:A; map symbol; map:32651
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression_base<2, t_script_expression_day_of_week>::t_script_numeric_expression_base<2, t_script_expression_day_of_week>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:32652
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression_base<2, t_script_expression_day_of_week>::t_script_numeric_expression_base<2, t_script_expression_day_of_week>(
    t_script_numeric_expression_base<2, t_script_expression_day_of_week> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:32653
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression<2>::~t_script_numeric_expression<2>()
{
    // Body unavailable.
}

// name:A; map symbol; map:32654
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression_base<2, t_script_expression_day_of_week>::~t_script_numeric_expression_base<2, t_script_expression_day_of_week>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:32655
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_numeric_expression_base<2, t_script_expression_day_of_week>")

// name:A; map symbol; map:32656
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_numeric_expression_base<2, t_script_expression_day_of_week>")

// name:A; map symbol; map:32657
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_expression_day_of_week::t_script_expression_day_of_week()
{
    // Body unavailable.
}

// name:A; map symbol; map:32658
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_expression_day_of_week::~t_script_expression_day_of_week()
{
    // Body unavailable.
}

// name:A; map symbol; map:32659
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_expression_day_of_week::t_script_expression_day_of_week(t_script_expression_day_of_week const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:32660
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_script_expression_day_of_week)

// name:A; map symbol; map:32661
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_script_expression_day_of_week)

// confidence:A; align-band; retn,stable,vptr; map:32662
VA_CHT_1(0x0076add0, 0x49)
t_script_numeric_expression_factory<19>::t_script_numeric_expression_factory<19>()
{
    // Body unavailable.
}

// name:A; map symbol; map:32663
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_numeric_expression> t_script_numeric_expression_factory<19>::create() const
{
    // Body unavailable.
}

// name:A; map symbol; map:32664
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression<19>::t_script_numeric_expression<19>()
{
    // Body unavailable.
}

// name:A; map symbol; map:32665
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_numeric_expression> t_script_numeric_expression_base<19, t_script_expression_week>::clone(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:32666
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression_type t_script_numeric_expression_base<19, t_script_expression_week>::get_type(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:32667
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression<19>::t_script_numeric_expression<19>(t_script_numeric_expression<19> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:32668
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_numeric_expression<19>")

// name:A; map symbol; map:32669
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_numeric_expression<19>")

// name:A; map symbol; map:32670
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression_base<19, t_script_expression_week>::t_script_numeric_expression_base<19, t_script_expression_week>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:32671
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression_base<19, t_script_expression_week>::t_script_numeric_expression_base<19, t_script_expression_week>(
    t_script_numeric_expression_base<19, t_script_expression_week> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:32672
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression<19>::~t_script_numeric_expression<19>()
{
    // Body unavailable.
}

// name:A; map symbol; map:32673
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression_base<19, t_script_expression_week>::~t_script_numeric_expression_base<19, t_script_expression_week>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:32674
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_numeric_expression_base<19, t_script_expression_week>")

// name:A; map symbol; map:32675
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_numeric_expression_base<19, t_script_expression_week>")

// name:A; map symbol; map:32676
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_expression_week::t_script_expression_week()
{
    // Body unavailable.
}

// name:A; map symbol; map:32677
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_expression_week::~t_script_expression_week()
{
    // Body unavailable.
}

// name:A; map symbol; map:32678
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_expression_week::t_script_expression_week(t_script_expression_week const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:32679
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_script_expression_week)

// name:A; map symbol; map:32680
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_script_expression_week)

// confidence:A; align-band; retn,stable,vptr; map:32681
VA_CHT_1(0x0076ae60, 0x49)
t_script_numeric_expression_factory<20>::t_script_numeric_expression_factory<20>()
{
    // Body unavailable.
}

// name:A; map symbol; map:32682
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_numeric_expression> t_script_numeric_expression_factory<20>::create() const
{
    // Body unavailable.
}

// name:A; map symbol; map:32683
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression<20>::t_script_numeric_expression<20>()
{
    // Body unavailable.
}

// name:A; map symbol; map:32684
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_numeric_expression> t_script_numeric_expression_base<20, t_script_expression_week_of_month>::clone(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:32685
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression_type t_script_numeric_expression_base<20, t_script_expression_week_of_month>::get_type(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:32686
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression<20>::t_script_numeric_expression<20>(t_script_numeric_expression<20> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:32687
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_numeric_expression<20>")

// name:A; map symbol; map:32688
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_numeric_expression<20>")

// name:A; map symbol; map:32689
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression_base<20, t_script_expression_week_of_month>::t_script_numeric_expression_base<20, t_script_expression_week_of_month>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:32690
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression_base<20, t_script_expression_week_of_month>::t_script_numeric_expression_base<20, t_script_expression_week_of_month>(
    t_script_numeric_expression_base<20, t_script_expression_week_of_month> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:32691
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression<20>::~t_script_numeric_expression<20>()
{
    // Body unavailable.
}

// name:A; map symbol; map:32692
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression_base<20, t_script_expression_week_of_month>::~t_script_numeric_expression_base<20, t_script_expression_week_of_month>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:32693
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_numeric_expression_base<20, t_script_expression_week_of_month>")

// name:A; map symbol; map:32694
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_numeric_expression_base<20, t_script_expression_week_of_month>")

// name:A; map symbol; map:32695
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_expression_week_of_month::t_script_expression_week_of_month()
{
    // Body unavailable.
}

// name:A; map symbol; map:32696
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_expression_week_of_month::~t_script_expression_week_of_month()
{
    // Body unavailable.
}

// name:A; map symbol; map:32697
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_expression_week_of_month::t_script_expression_week_of_month(
    t_script_expression_week_of_month const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:32698
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_script_expression_week_of_month)

// name:A; map symbol; map:32699
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_script_expression_week_of_month)

// confidence:A; align-band; retn,stable,vptr; map:32700
VA_CHT_1(0x0076aef0, 0x49)
t_script_numeric_expression_factory<9>::t_script_numeric_expression_factory<9>()
{
    // Body unavailable.
}

// name:A; map symbol; map:32701
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_numeric_expression> t_script_numeric_expression_factory<9>::create() const
{
    // Body unavailable.
}

// name:A; map symbol; map:32702
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression<9>::t_script_numeric_expression<9>()
{
    // Body unavailable.
}

// name:A; map symbol; map:32703
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_numeric_expression> t_script_numeric_expression_base<9, t_script_expression_month>::clone(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:32704
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression_type t_script_numeric_expression_base<9, t_script_expression_month>::get_type(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:32705
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression<9>::t_script_numeric_expression<9>(t_script_numeric_expression<9> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:32706
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_numeric_expression<9>")

// name:A; map symbol; map:32707
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_numeric_expression<9>")

// name:A; map symbol; map:32708
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression_base<9, t_script_expression_month>::t_script_numeric_expression_base<9, t_script_expression_month>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:32709
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression_base<9, t_script_expression_month>::t_script_numeric_expression_base<9, t_script_expression_month>(
    t_script_numeric_expression_base<9, t_script_expression_month> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:32710
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression<9>::~t_script_numeric_expression<9>()
{
    // Body unavailable.
}

// name:A; map symbol; map:32711
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression_base<9, t_script_expression_month>::~t_script_numeric_expression_base<9, t_script_expression_month>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:32712
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_numeric_expression_base<9, t_script_expression_month>")

// name:A; map symbol; map:32713
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_numeric_expression_base<9, t_script_expression_month>")

// name:A; map symbol; map:32714
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_expression_month::t_script_expression_month()
{
    // Body unavailable.
}

// name:A; map symbol; map:32715
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_expression_month::~t_script_expression_month()
{
    // Body unavailable.
}

// name:A; map symbol; map:32716
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_expression_month::t_script_expression_month(t_script_expression_month const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:32717
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_script_expression_month)

// name:A; map symbol; map:32718
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_script_expression_month)

// confidence:A; align-band; retn,stable,vptr; map:32719
VA_CHT_1(0x0076af80, 0x49)
t_script_boolean_expression_factory<22>::t_script_boolean_expression_factory<22>()
{
    // Body unavailable.
}

// name:A; map symbol; map:32720
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_boolean_expression> t_script_boolean_expression_factory<22>::create() const
{
    // Body unavailable.
}

// name:A; map symbol; map:32721
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_boolean_expression<22>::t_script_boolean_expression<22>()
{
    // Body unavailable.
}

// name:A; map symbol; map:32722
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_boolean_expression> t_script_boolean_expression_base<22, t_script_expression_true>::clone(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:32723
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_boolean_expression_type t_script_boolean_expression_base<22, t_script_expression_true>::get_type(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:32724
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_boolean_expression<22>::t_script_boolean_expression<22>(t_script_boolean_expression<22> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:32725
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_boolean_expression<22>")

// name:A; map symbol; map:32726
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_boolean_expression<22>")

// name:A; map symbol; map:32727
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_boolean_expression_base<22, t_script_expression_true>::t_script_boolean_expression_base<22, t_script_expression_true>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:32728
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_boolean_expression_base<22, t_script_expression_true>::t_script_boolean_expression_base<22, t_script_expression_true>(
    t_script_boolean_expression_base<22, t_script_expression_true> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:32729
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_boolean_expression<22>::~t_script_boolean_expression<22>()
{
    // Body unavailable.
}

// name:A; map symbol; map:32730
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_boolean_expression_base<22, t_script_expression_true>::~t_script_boolean_expression_base<22, t_script_expression_true>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:32731
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_boolean_expression_base<22, t_script_expression_true>")

// name:A; map symbol; map:32732
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_boolean_expression_base<22, t_script_expression_true>")

// name:A; map symbol; map:32733
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_expression_true::t_script_expression_true()
{
    // Body unavailable.
}

// name:A; map symbol; map:32734
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_expression_true::~t_script_expression_true()
{
    // Body unavailable.
}

// name:A; map symbol; map:32735
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_expression_true::t_script_expression_true(t_script_expression_true const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:32736
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_script_expression_true)

// name:A; map symbol; map:32737
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_script_expression_true)

// confidence:A; align-band; retn,stable,vptr; map:32738
VA_CHT_1(0x0076b010, 0x49)
t_script_boolean_expression_factory<5>::t_script_boolean_expression_factory<5>()
{
    // Body unavailable.
}

// name:A; map symbol; map:32739
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_boolean_expression> t_script_boolean_expression_factory<5>::create() const
{
    // Body unavailable.
}

// name:A; map symbol; map:32740
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_script_expression_factory<t_abstract_script_numeric_expression>::t_abstract_script_expression_factory<t_abstract_script_numeric_expression>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:32741
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_script_expression_factory<t_abstract_script_boolean_expression>::t_abstract_script_expression_factory<t_abstract_script_boolean_expression>(

)
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:32742
VA_CHT_1_COMPGEN(0x0076b100, 0x8, VECTOR_DELETING_DTOR, t_seers_hut)

// confidence:C; align-order; stable; map:32743
VA_CHT_1_COMPGEN(0x0076b110, 0xe, VECTOR_DELETING_DTOR, t_seers_hut)

// confidence:C; align-order; stable; map:32744
VA_CHT_1(0x0076b120, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::accept`vtordisp{-4, 116}'(t_abstract_adv_object_visitor&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32745
VA_CHT_1(0x0076b130, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::accept`vtordisp{-4, 116}'(t_abstract_adv_object_visitor&)
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32746
VA_CHT_1(0x0076b140, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::animates`vtordisp{-4, 116}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32747
VA_CHT_1(0x0076b150, 0x8)
// [thunk]: public: virtual std::auto_ptr<t_abstract_adv_object> t_adventure_object::clone`adjustor{124}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32748
VA_CHT_1(0x0076b160, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_shadow_to`vtordisp{-4, 116}'(unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32749
VA_CHT_1(0x0076b170, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_shadow_to`vtordisp{-4, 116}'(unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32750
VA_CHT_1(0x0076b180, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_subimage_to`vtordisp{-4, 116}'(int, unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32751
VA_CHT_1(0x0076b190, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_subimage_to`vtordisp{-4, 116}'(int, unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&, int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32752
VA_CHT_1(0x0076b1a0, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_to`vtordisp{-4, 116}'(unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32753
VA_CHT_1(0x0076b1b0, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_to`vtordisp{-4, 116}'(unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32754
VA_CHT_1(0x0076b1c0, 0xb)
// [thunk]: public: virtual t_footprint const& t_abstract_stationary_adv_object::get_footprint`vtordisp{-4, 116}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32755
VA_CHT_1(0x0076b1d0, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_rect`vtordisp{-4, 116}'(unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32756
VA_CHT_1(0x0076b1e0, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_rect`vtordisp{-4, 116}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32757
VA_CHT_1(0x0076b1f0, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_shadow_rect`vtordisp{-4, 116}'(unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32758
VA_CHT_1(0x0076b200, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_shadow_rect`vtordisp{-4, 116}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32759
VA_CHT_1(0x0076b210, 0xb)
// [thunk]: public: virtual int t_abstract_stationary_adv_object::get_subimage_count`vtordisp{-4, 116}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32760
VA_CHT_1(0x0076b220, 0xb)
// [thunk]: public: virtual int t_stationary_adventure_object::get_subimage_depth_offset`vtordisp{-4, 116}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32761
VA_CHT_1(0x0076b230, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_subimage_rect`vtordisp{-4, 116}'(int, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32762
VA_CHT_1(0x0076b240, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_subimage_rect`vtordisp{-4, 116}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32763
VA_CHT_1(0x0076b250, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::hit_test`vtordisp{-4, 116}'(unsigned long, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32764
VA_CHT_1(0x0076b260, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::is_decorative`vtordisp{-4, 116}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32765
VA_CHT_1(0x0076b270, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::needs_redrawing`vtordisp{-4, 116}'(unsigned long, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32766
VA_CHT_1(0x0076b280, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::subimage_animates`vtordisp{-4, 116}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32767
VA_CHT_1(0x0076b290, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::subimage_is_underlay`vtordisp{-4, 116}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32768
VA_CHT_1(0x0076b2a0, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::subimage_needs_redrawing`vtordisp{-4, 116}'(int, unsigned long, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32769
VA_CHT_1(0x0076b2b0, 0x8)
// [thunk]: public: virtual bool t_adventure_object::uses_bridge_heights`adjustor{124}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32770
VA_CHT_1(0x0076b2c0, 0xb)
// [thunk]: public: virtual t_adventure_ai const* t_adventure_object::get_ai`vtordisp{-4, 124}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32771
VA_CHT_1(0x0076b2d0, 0xb)
// [thunk]: public: virtual t_adventure_frame* t_adventure_object::get_adventure_frame`vtordisp{-4, 124}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32772
VA_CHT_1(0x0076b2e0, 0xb)
// [thunk]: public: virtual t_adventure_object* t_adventure_object::get_adventure_object`vtordisp{-4, 124}'(void)
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32773
VA_CHT_1(0x0076b2f0, 0xb)
// [thunk]: public: virtual t_adventure_map* t_adventure_object::get_map`vtordisp{-4, 124}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32774
VA_CHT_1(0x0076b300, 0xb)
// [thunk]: public: virtual t_adv_map_point t_adventure_object::get_position`vtordisp{-4, 124}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32775
VA_CHT_1_COMPGEN(0x0076b310, 0x8, VECTOR_DELETING_DTOR, t_quest_site)

// confidence:C; align-order; stable; map:32776
VA_CHT_1_COMPGEN(0x0076b320, 0xe, VECTOR_DELETING_DTOR, t_quest_site)

// confidence:C; align-order; stable; map:32777
VA_CHT_1(0x0076b330, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::accept`vtordisp{-4, 100}'(t_abstract_adv_object_visitor&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32778
VA_CHT_1(0x0076b340, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::accept`vtordisp{-4, 100}'(t_abstract_adv_object_visitor&)
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32779
VA_CHT_1(0x0076b350, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::animates`vtordisp{-4, 100}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32780
VA_CHT_1(0x0076b360, 0x8)
// [thunk]: public: virtual std::auto_ptr<t_abstract_adv_object> t_adventure_object::clone`adjustor{108}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32781
VA_CHT_1(0x0076b370, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_shadow_to`vtordisp{-4, 100}'(unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32782
VA_CHT_1(0x0076b380, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_shadow_to`vtordisp{-4, 100}'(unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32783
VA_CHT_1(0x0076b390, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_subimage_to`vtordisp{-4, 100}'(int, unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32784
VA_CHT_1(0x0076b3a0, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_subimage_to`vtordisp{-4, 100}'(int, unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&, int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32785
VA_CHT_1(0x0076b3b0, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_to`vtordisp{-4, 100}'(unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32786
VA_CHT_1(0x0076b3c0, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_to`vtordisp{-4, 100}'(unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32787
VA_CHT_1(0x0076b3d0, 0xb)
// [thunk]: public: virtual t_footprint const& t_abstract_stationary_adv_object::get_footprint`vtordisp{-4, 100}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32788
VA_CHT_1(0x0076b3e0, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_rect`vtordisp{-4, 100}'(unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32789
VA_CHT_1(0x0076b3f0, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_rect`vtordisp{-4, 100}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32790
VA_CHT_1(0x0076b400, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_shadow_rect`vtordisp{-4, 100}'(unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32791
VA_CHT_1(0x0076b410, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_shadow_rect`vtordisp{-4, 100}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32792
VA_CHT_1(0x0076b420, 0xb)
// [thunk]: public: virtual int t_abstract_stationary_adv_object::get_subimage_count`vtordisp{-4, 100}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32793
VA_CHT_1(0x0076b430, 0xb)
// [thunk]: public: virtual int t_stationary_adventure_object::get_subimage_depth_offset`vtordisp{-4, 100}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32794
VA_CHT_1(0x0076b440, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_subimage_rect`vtordisp{-4, 100}'(int, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32795
VA_CHT_1(0x0076b450, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_subimage_rect`vtordisp{-4, 100}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32796
VA_CHT_1(0x0076b460, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::hit_test`vtordisp{-4, 100}'(unsigned long, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32797
VA_CHT_1(0x0076b470, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::is_decorative`vtordisp{-4, 100}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32798
VA_CHT_1(0x0076b480, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::needs_redrawing`vtordisp{-4, 100}'(unsigned long, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32799
VA_CHT_1(0x0076b490, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::subimage_animates`vtordisp{-4, 100}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32800
VA_CHT_1(0x0076b4a0, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::subimage_is_underlay`vtordisp{-4, 100}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32801
VA_CHT_1(0x0076b4b0, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::subimage_needs_redrawing`vtordisp{-4, 100}'(int, unsigned long, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32802
VA_CHT_1(0x0076b4c0, 0x8)
// [thunk]: public: virtual bool t_adventure_object::uses_bridge_heights`adjustor{108}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32803
VA_CHT_1(0x0076b4d0, 0xb)
// [thunk]: public: virtual t_adventure_ai const* t_adventure_object::get_ai`vtordisp{-4, 108}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32804
VA_CHT_1(0x0076b4e0, 0xb)
// [thunk]: public: virtual t_adventure_frame* t_adventure_object::get_adventure_frame`vtordisp{-4, 108}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32805
VA_CHT_1(0x0076b4f0, 0xb)
// [thunk]: public: virtual t_adventure_object* t_adventure_object::get_adventure_object`vtordisp{-4, 108}'(void)
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32806
VA_CHT_1(0x0076b500, 0xb)
// [thunk]: public: virtual t_adventure_map* t_adventure_object::get_map`vtordisp{-4, 108}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32807
VA_CHT_1(0x0076b510, 0xb)
// [thunk]: public: virtual t_adv_map_point t_adventure_object::get_position`vtordisp{-4, 108}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32808
VA_CHT_1_COMPGEN(0x0076b520, 0x8, VECTOR_DELETING_DTOR, t_quest_gate)

// confidence:C; align-order; stable; map:32809
VA_CHT_1_COMPGEN(0x0076b530, 0xe, VECTOR_DELETING_DTOR, t_quest_gate)

// confidence:C; align-order; stable; map:32810
VA_CHT_1(0x0076b540, 0x8)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::accept`vtordisp{-4, 80}'(t_abstract_adv_object_visitor&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32811
VA_CHT_1(0x0076b550, 0xe)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::accept`vtordisp{-4, 80}'(t_abstract_adv_object_visitor&)
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32812
VA_CHT_1(0x0076b560, 0x8)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::animates`vtordisp{-4, 80}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32813
VA_CHT_1(0x0076b570, 0xe)
// [thunk]: public: virtual std::auto_ptr<t_abstract_adv_object> t_adventure_object::clone`adjustor{88}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32814
VA_CHT_1(0x0076b580, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_shadow_to`vtordisp{-4, 80}'(unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32815
VA_CHT_1(0x0076b590, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_shadow_to`vtordisp{-4, 80}'(unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32816
VA_CHT_1(0x0076b5a0, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_subimage_to`vtordisp{-4, 80}'(int, unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32817
VA_CHT_1(0x0076b5b0, 0x8)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_subimage_to`vtordisp{-4, 80}'(int, unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&, int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32818
VA_CHT_1(0x0076b5c0, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_to`vtordisp{-4, 80}'(unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32819
VA_CHT_1(0x0076b5d0, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_to`vtordisp{-4, 80}'(unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32820
VA_CHT_1(0x0076b5e0, 0xb)
// [thunk]: public: virtual t_footprint const& t_abstract_stationary_adv_object::get_footprint`vtordisp{-4, 80}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32821
VA_CHT_1(0x0076b5f0, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_rect`vtordisp{-4, 80}'(unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32822
VA_CHT_1(0x0076b600, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_rect`vtordisp{-4, 80}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32823
VA_CHT_1(0x0076b610, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_shadow_rect`vtordisp{-4, 80}'(unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32824
VA_CHT_1(0x0076b620, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_shadow_rect`vtordisp{-4, 80}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32825
VA_CHT_1(0x0076b630, 0xb)
// [thunk]: public: virtual int t_abstract_stationary_adv_object::get_subimage_count`vtordisp{-4, 80}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32826
VA_CHT_1(0x0076b640, 0xb)
// [thunk]: public: virtual int t_stationary_adventure_object::get_subimage_depth_offset`vtordisp{-4, 80}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32827
VA_CHT_1(0x0076b650, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_subimage_rect`vtordisp{-4, 80}'(int, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32828
VA_CHT_1(0x0076b660, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_subimage_rect`vtordisp{-4, 80}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32829
VA_CHT_1(0x0076b670, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::hit_test`vtordisp{-4, 80}'(unsigned long, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32830
VA_CHT_1(0x0076b680, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::is_decorative`vtordisp{-4, 80}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32831
VA_CHT_1(0x0076b690, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::needs_redrawing`vtordisp{-4, 80}'(unsigned long, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32832
VA_CHT_1(0x0076b6a0, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::subimage_animates`vtordisp{-4, 80}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32833
VA_CHT_1(0x0076b6b0, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::subimage_is_underlay`vtordisp{-4, 80}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32834
VA_CHT_1(0x0076b6c0, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::subimage_needs_redrawing`vtordisp{-4, 80}'(int, unsigned long, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32835
VA_CHT_1(0x0076b6d0, 0xb)
// [thunk]: public: virtual bool t_adventure_object::uses_bridge_heights`adjustor{88}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32836
VA_CHT_1(0x0076b6e0, 0xb)
// [thunk]: public: virtual t_adventure_ai const* t_adventure_object::get_ai`vtordisp{-4, 88}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32837
VA_CHT_1(0x0076b6f0, 0xb)
// [thunk]: public: virtual t_adventure_frame* t_adventure_object::get_adventure_frame`vtordisp{-4, 88}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32838
VA_CHT_1(0x0076b700, 0xb)
// [thunk]: public: virtual t_adventure_object* t_adventure_object::get_adventure_object`vtordisp{-4, 88}'(void)
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32839
VA_CHT_1(0x0076b710, 0x8)
// [thunk]: public: virtual t_adventure_map* t_adventure_object::get_map`vtordisp{-4, 88}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32840
VA_CHT_1(0x0076b720, 0xb)
// [thunk]: public: virtual t_adv_map_point t_adventure_object::get_position`vtordisp{-4, 88}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32841
VA_CHT_1_COMPGEN(0x0076b730, 0xb, VECTOR_DELETING_DTOR, t_quest_origin_site)

// confidence:C; align-order; stable; map:32842
VA_CHT_1_COMPGEN(0x0076b740, 0xb, VECTOR_DELETING_DTOR, t_quest_origin_site)

// confidence:C; align-order; stable; map:32843
VA_CHT_1_COMPGEN(0x0076b750, 0xb, VECTOR_DELETING_DTOR, t_quest_guard)

// confidence:C; align-order; stable; map:32844
VA_CHT_1_COMPGEN(0x0076b760, 0xb, VECTOR_DELETING_DTOR, t_quest_guard)

// === .rdata (74 symbols) ===

// name:A; map symbol; map:45081
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_quest_origin_site::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:45082
DATA_CHT_1_COMPGEN(0x008e7f2c, "const t_quest_origin_site::`vftable'")

// confidence:B; rtti-order; map:45083
DATA_CHT_1_COMPGEN(0x008e7fec, "const t_quest_origin_site::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:45084
DATA_CHT_1_COMPGEN(0x008e7ff4, "const t_quest_origin_site::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:45085
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_quest_origin_site::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:45086
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_quest_origin_site::`vbtable'{for `t_abstract_stationary_adv_object'}")

// confidence:A; rtti-name; map:45087
DATA_CHT_1_COMPGEN(0x008e80b8, "const t_script_boolean_expression<5>::`vftable'")

// confidence:A; rtti-name; map:45088
DATA_CHT_1_COMPGEN(0x008e80e8, "const t_script_action<42>::`vftable'")

// name:A; map symbol; map:45089
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_boolean_expression_base<5, t_script_expression_false>::`vftable'")

// name:A; map symbol; map:45090
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_action_base<42, t_script_sequence>::`vftable'")

// confidence:A; rtti-name; map:45091
DATA_CHT_1_COMPGEN(0x008e8138, "const t_script_sequence::`vftable'")

// confidence:A; rtti-name; map:45092
DATA_CHT_1_COMPGEN(0x008ea280, "const t_abstract_script_action::`vftable'")

// confidence:A; rtti-name; map:45093
DATA_CHT_1_COMPGEN(0x008e8170, "const t_script_expression_false::`vftable'")

// name:A; map symbol; map:45094
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_simple_expression<t_abstract_script_boolean_expression>::`vftable'")

// confidence:A; rtti-name; map:45095
DATA_CHT_1_COMPGEN(0x008ea9e0, "const t_abstract_script_boolean_expression::`vftable'")

// confidence:A; rtti-name; map:45096
DATA_CHT_1_COMPGEN(0x008eb094, "const t_abstract_script_expression_base<t_abstract_script_boolean_expression, t_script_boolean_expression_type, bool>::`vftable'")

// name:A; map symbol; map:45097
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_quest_site::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:45098
DATA_CHT_1_COMPGEN(0x008e81a4, "const t_quest_site::`vftable'")

// confidence:B; rtti-order; map:45099
DATA_CHT_1_COMPGEN(0x008e8264, "const t_quest_site::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:45100
DATA_CHT_1_COMPGEN(0x008e826c, "const t_quest_site::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:45101
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_quest_site::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:45102
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_quest_site::`vbtable'{for `t_abstract_stationary_adv_object'}")

// confidence:A; rtti-name; map:45103
DATA_CHT_1_COMPGEN(0x008e7f14, "const t_object_factory<t_quest_gate>::`vftable'")

// name:A; map symbol; map:45104
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_quest_gate::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:45105
DATA_CHT_1_COMPGEN(0x008e834c, "const t_quest_gate::`vftable'")

// confidence:B; rtti-order; map:45106
DATA_CHT_1_COMPGEN(0x008e840c, "const t_quest_gate::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:45107
DATA_CHT_1_COMPGEN(0x008e8414, "const t_quest_gate::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:45108
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_quest_gate::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:45109
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_quest_gate::`vbtable'{for `t_abstract_stationary_adv_object'}")

// confidence:A; rtti-name; map:45110
DATA_CHT_1_COMPGEN(0x008e7f1c, "const t_object_factory<t_quest_guard>::`vftable'")

// name:A; map symbol; map:45111
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_quest_guard::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:45112
DATA_CHT_1_COMPGEN(0x008e84f4, "const t_quest_guard::`vftable'")

// confidence:B; rtti-order; map:45113
DATA_CHT_1_COMPGEN(0x008e85b4, "const t_quest_guard::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:45114
DATA_CHT_1_COMPGEN(0x008e85bc, "const t_quest_guard::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:45115
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_quest_guard::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:45116
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_quest_guard::`vbtable'{for `t_abstract_stationary_adv_object'}")

// confidence:A; rtti-name; map:45117
DATA_CHT_1_COMPGEN(0x008e7f24, "const t_object_factory<t_seers_hut>::`vftable'")

// name:A; map symbol; map:45118
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_seers_hut::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:45119
DATA_CHT_1_COMPGEN(0x008e869c, "const t_seers_hut::`vftable'")

// confidence:B; rtti-order; map:45120
DATA_CHT_1_COMPGEN(0x008e875c, "const t_seers_hut::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:45121
DATA_CHT_1_COMPGEN(0x008e8764, "const t_seers_hut::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:45122
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_seers_hut::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:45123
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_seers_hut::`vbtable'{for `t_abstract_stationary_adv_object'}")

// confidence:A; rtti-name; map:45124
DATA_CHT_1_COMPGEN(0x008e8840, "const t_abstract_script_expression_factory<t_abstract_script_numeric_expression>::`vftable'")

// confidence:A; rtti-name; map:45125
DATA_CHT_1_COMPGEN(0x008e8848, "const t_abstract_script_expression_factory<t_abstract_script_boolean_expression>::`vftable'")

// confidence:A; rtti-name; map:45126
DATA_CHT_1_COMPGEN(0x008e8850, "const t_script_action_factory<42>::`vftable'")

// confidence:A; rtti-name; map:45127
DATA_CHT_1_COMPGEN(0x008e8858, "const t_script_numeric_expression_factory<1>::`vftable'")

// confidence:A; rtti-name; map:45128
DATA_CHT_1_COMPGEN(0x008e8860, "const t_script_numeric_expression<1>::`vftable'")

// name:A; map symbol; map:45129
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_numeric_expression_base<1, t_script_expression_day>::`vftable'")

// name:A; map symbol; map:45130
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_expression_day::`vftable'")

// name:A; map symbol; map:45131
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_simple_expression<t_abstract_script_numeric_expression>::`vftable'")

// confidence:A; rtti-name; map:45132
DATA_CHT_1_COMPGEN(0x008ea84c, "const t_abstract_script_numeric_expression::`vftable'")

// confidence:A; rtti-name; map:45133
DATA_CHT_1_COMPGEN(0x008ea7b0, "const t_abstract_script_expression_base<t_abstract_script_numeric_expression, t_script_numeric_expression_type, int>::`vftable'")

// confidence:A; rtti-name; map:45134
DATA_CHT_1_COMPGEN(0x008e8890, "const t_script_numeric_expression_factory<2>::`vftable'")

// confidence:A; rtti-name; map:45135
DATA_CHT_1_COMPGEN(0x008e8898, "const t_script_numeric_expression<2>::`vftable'")

// name:A; map symbol; map:45136
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_numeric_expression_base<2, t_script_expression_day_of_week>::`vftable'")

// name:A; map symbol; map:45137
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_expression_day_of_week::`vftable'")

// confidence:A; rtti-name; map:45138
DATA_CHT_1_COMPGEN(0x008e88c8, "const t_script_numeric_expression_factory<19>::`vftable'")

// confidence:A; rtti-name; map:45139
DATA_CHT_1_COMPGEN(0x008e88d0, "const t_script_numeric_expression<19>::`vftable'")

// name:A; map symbol; map:45140
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_numeric_expression_base<19, t_script_expression_week>::`vftable'")

// name:A; map symbol; map:45141
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_expression_week::`vftable'")

// confidence:A; rtti-name; map:45142
DATA_CHT_1_COMPGEN(0x008e8900, "const t_script_numeric_expression_factory<20>::`vftable'")

// confidence:A; rtti-name; map:45143
DATA_CHT_1_COMPGEN(0x008e8908, "const t_script_numeric_expression<20>::`vftable'")

// name:A; map symbol; map:45144
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_numeric_expression_base<20, t_script_expression_week_of_month>::`vftable'")

// name:A; map symbol; map:45145
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_expression_week_of_month::`vftable'")

// confidence:A; rtti-name; map:45146
DATA_CHT_1_COMPGEN(0x008e8938, "const t_script_numeric_expression_factory<9>::`vftable'")

// confidence:A; rtti-name; map:45147
DATA_CHT_1_COMPGEN(0x008e8940, "const t_script_numeric_expression<9>::`vftable'")

// name:A; map symbol; map:45148
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_numeric_expression_base<9, t_script_expression_month>::`vftable'")

// name:A; map symbol; map:45149
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_expression_month::`vftable'")

// confidence:A; rtti-name; map:45150
DATA_CHT_1_COMPGEN(0x008e8970, "const t_script_boolean_expression_factory<22>::`vftable'")

// confidence:A; rtti-name; map:45151
DATA_CHT_1_COMPGEN(0x008e8978, "const t_script_boolean_expression<22>::`vftable'")

// name:A; map symbol; map:45152
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_boolean_expression_base<22, t_script_expression_true>::`vftable'")

// name:A; map symbol; map:45153
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_expression_true::`vftable'")

// confidence:A; rtti-name; map:45154
DATA_CHT_1_COMPGEN(0x008e89a8, "const t_script_boolean_expression_factory<5>::`vftable'")

// === .rdata$r (211 symbols) ===

// name:A; map symbol; map:54023
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_quest_origin_site::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_quest_origin_site@@;vft=4e7f2c;col=512f74;td=5b1094;chd=512f64;offset=164;cdOffset=0;validated-hierarchy; map:54024
DATA_CHT_1_COMPGEN(0x00912f74, "const t_quest_origin_site::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54025
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_quest_origin_site::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_quest_origin_site@@;bcd=512f24;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54026
DATA_CHT_1_COMPGEN(0x00912f24, "t_quest_origin_site::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_quest_origin_site@@;vft=4e7f2c;col=512f74;td=5b1094;chd=512f64;offset=164;cdOffset=0;validated-hierarchy; map:54027
DATA_CHT_1_COMPGEN(0x00912f3c, "t_quest_origin_site::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_quest_origin_site@@;vft=4e7f2c;col=512f74;td=5b1094;chd=512f64;offset=164;cdOffset=0;validated-hierarchy; map:54028
DATA_CHT_1_COMPGEN(0x00912f64, "t_quest_origin_site::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54029
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_quest_origin_site::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_script_expression_base@Vt_abstract_script_boolean_expression@@W4t_script_boolean_expression_type@@_N@@;bcd=512e14;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54030
DATA_CHT_1_COMPGEN(0x00912e14, "t_abstract_script_expression_base<t_abstract_script_boolean_expression, t_script_boolean_expression_type, bool>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_abstract_script_boolean_expression@@;bcd=512e2c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54031
DATA_CHT_1_COMPGEN(0x00912e2c, "t_abstract_script_boolean_expression::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_simple_expression@Vt_abstract_script_boolean_expression@@@@;bcd=512e44;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54032
DATA_CHT_1_COMPGEN(0x00912e44, "t_script_simple_expression<t_abstract_script_boolean_expression>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_script_expression_false@@;bcd=512e5c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54033
DATA_CHT_1_COMPGEN(0x00912e5c, "t_script_expression_false::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_boolean_expression_base@$04Vt_script_expression_false@@@@;bcd=512e74;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54034
DATA_CHT_1_COMPGEN(0x00912e74, "t_script_boolean_expression_base<5, t_script_expression_false>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_boolean_expression@$04@@;bcd=512e8c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54035
DATA_CHT_1_COMPGEN(0x00912e8c, "t_script_boolean_expression<5>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_boolean_expression@$04@@;vft=4e80b8;col=512ed4;td=5b1064;chd=512ec4;offset=0;cdOffset=0;validated-hierarchy; map:54036
DATA_CHT_1_COMPGEN(0x00912ea4, "t_script_boolean_expression<5>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_boolean_expression@$04@@;vft=4e80b8;col=512ed4;td=5b1064;chd=512ec4;offset=0;cdOffset=0;validated-hierarchy; map:54037
DATA_CHT_1_COMPGEN(0x00912ec4, "t_script_boolean_expression<5>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_boolean_expression@$04@@;vft=4e80b8;col=512ed4;td=5b1064;chd=512ec4;offset=0;cdOffset=0;validated-hierarchy; map:54038
DATA_CHT_1_COMPGEN(0x00912ed4, "const t_script_boolean_expression<5>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_abstract_script_action@@;bcd=512d78;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54039
DATA_CHT_1_COMPGEN(0x00912d78, "t_abstract_script_action::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_script_sequence@@;bcd=512d90;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54040
DATA_CHT_1_COMPGEN(0x00912d90, "t_script_sequence::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action_base@$0CK@Vt_script_sequence@@@@;bcd=512da8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54041
DATA_CHT_1_COMPGEN(0x00912da8, "t_script_action_base<42, t_script_sequence>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action@$0CK@@@;bcd=512dc0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54042
DATA_CHT_1_COMPGEN(0x00912dc0, "t_script_action<42>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_action@$0CK@@@;vft=4e80e8;col=512e00;td=5b0eac;chd=512df0;offset=0;cdOffset=0;validated-hierarchy; map:54043
DATA_CHT_1_COMPGEN(0x00912dd8, "t_script_action<42>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_action@$0CK@@@;vft=4e80e8;col=512e00;td=5b0eac;chd=512df0;offset=0;cdOffset=0;validated-hierarchy; map:54044
DATA_CHT_1_COMPGEN(0x00912df0, "t_script_action<42>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_action@$0CK@@@;vft=4e80e8;col=512e00;td=5b0eac;chd=512df0;offset=0;cdOffset=0;validated-hierarchy; map:54045
DATA_CHT_1_COMPGEN(0x00912e00, "const t_script_action<42>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54046
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_boolean_expression_base<5, t_script_expression_false>::`RTTI Base Class Array'")

// name:A; map symbol; map:54047
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_boolean_expression_base<5, t_script_expression_false>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54048
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_boolean_expression_base<5, t_script_expression_false>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54049
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_action_base<42, t_script_sequence>::`RTTI Base Class Array'")

// name:A; map symbol; map:54050
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_action_base<42, t_script_sequence>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54051
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_action_base<42, t_script_sequence>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_script_sequence@@;vft=4e8138;col=512fa8;td=5b0e4c;chd=512f98;offset=0;cdOffset=0;validated-hierarchy; map:54052
DATA_CHT_1_COMPGEN(0x00912f88, "t_script_sequence::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_script_sequence@@;vft=4e8138;col=512fa8;td=5b0e4c;chd=512f98;offset=0;cdOffset=0;validated-hierarchy; map:54053
DATA_CHT_1_COMPGEN(0x00912f98, "t_script_sequence::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_script_sequence@@;vft=4e8138;col=512fa8;td=5b0e4c;chd=512f98;offset=0;cdOffset=0;validated-hierarchy; map:54054
DATA_CHT_1_COMPGEN(0x00912fa8, "const t_script_sequence::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_abstract_script_action@@;vft=4ea280;col=514e1c;td=5b0e24;chd=514e0c;offset=0;cdOffset=0;validated-hierarchy; map:54055
DATA_CHT_1_COMPGEN(0x00914e00, "t_abstract_script_action::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_abstract_script_action@@;vft=4ea280;col=514e1c;td=5b0e24;chd=514e0c;offset=0;cdOffset=0;validated-hierarchy; map:54056
DATA_CHT_1_COMPGEN(0x00914e0c, "t_abstract_script_action::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_abstract_script_action@@;vft=4ea280;col=514e1c;td=5b0e24;chd=514e0c;offset=0;cdOffset=0;validated-hierarchy; map:54057
DATA_CHT_1_COMPGEN(0x00914e1c, "const t_abstract_script_action::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_script_expression_false@@;vft=4e8170;col=512fe4;td=5b0fe4;chd=512fd4;offset=0;cdOffset=0;validated-hierarchy; map:54058
DATA_CHT_1_COMPGEN(0x00912fbc, "t_script_expression_false::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_script_expression_false@@;vft=4e8170;col=512fe4;td=5b0fe4;chd=512fd4;offset=0;cdOffset=0;validated-hierarchy; map:54059
DATA_CHT_1_COMPGEN(0x00912fd4, "t_script_expression_false::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_script_expression_false@@;vft=4e8170;col=512fe4;td=5b0fe4;chd=512fd4;offset=0;cdOffset=0;validated-hierarchy; map:54060
DATA_CHT_1_COMPGEN(0x00912fe4, "const t_script_expression_false::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54061
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_simple_expression<t_abstract_script_boolean_expression>::`RTTI Base Class Array'")

// name:A; map symbol; map:54062
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_simple_expression<t_abstract_script_boolean_expression>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54063
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_simple_expression<t_abstract_script_boolean_expression>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_abstract_script_boolean_expression@@;vft=4ea9e0;col=516454;td=5b0f58;chd=516444;offset=0;cdOffset=0;validated-hierarchy; map:54064
DATA_CHT_1_COMPGEN(0x00916434, "t_abstract_script_boolean_expression::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_abstract_script_boolean_expression@@;vft=4ea9e0;col=516454;td=5b0f58;chd=516444;offset=0;cdOffset=0;validated-hierarchy; map:54065
DATA_CHT_1_COMPGEN(0x00916444, "t_abstract_script_boolean_expression::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_abstract_script_boolean_expression@@;vft=4ea9e0;col=516454;td=5b0f58;chd=516444;offset=0;cdOffset=0;validated-hierarchy; map:54066
DATA_CHT_1_COMPGEN(0x00916454, "const t_abstract_script_boolean_expression::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_script_expression_base@Vt_abstract_script_boolean_expression@@W4t_script_boolean_expression_type@@_N@@;vft=4eb094;col=517590;td=5b0ed8;chd=517580;offset=0;cdOffset=0;validated-hierarchy; map:54067
DATA_CHT_1_COMPGEN(0x00917574, "t_abstract_script_expression_base<t_abstract_script_boolean_expression, t_script_boolean_expression_type, bool>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_script_expression_base@Vt_abstract_script_boolean_expression@@W4t_script_boolean_expression_type@@_N@@;vft=4eb094;col=517590;td=5b0ed8;chd=517580;offset=0;cdOffset=0;validated-hierarchy; map:54068
DATA_CHT_1_COMPGEN(0x00917580, "t_abstract_script_expression_base<t_abstract_script_boolean_expression, t_script_boolean_expression_type, bool>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_script_expression_base@Vt_abstract_script_boolean_expression@@W4t_script_boolean_expression_type@@_N@@;vft=4eb094;col=517590;td=5b0ed8;chd=517580;offset=0;cdOffset=0;validated-hierarchy; map:54069
DATA_CHT_1_COMPGEN(0x00917590, "const t_abstract_script_expression_base<t_abstract_script_boolean_expression, t_script_boolean_expression_type, bool>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54070
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_quest_site::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_quest_site@@;vft=4e81a4;col=513088;td=5b10b8;chd=513078;offset=184;cdOffset=0;validated-hierarchy; map:54071
DATA_CHT_1_COMPGEN(0x00913088, "const t_quest_site::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54072
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_quest_site::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_quest_site@@;bcd=513034;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54073
DATA_CHT_1_COMPGEN(0x00913034, "t_quest_site::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_quest_site@@;vft=4e81a4;col=513088;td=5b10b8;chd=513078;offset=184;cdOffset=0;validated-hierarchy; map:54074
DATA_CHT_1_COMPGEN(0x0091304c, "t_quest_site::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_quest_site@@;vft=4e81a4;col=513088;td=5b10b8;chd=513078;offset=184;cdOffset=0;validated-hierarchy; map:54075
DATA_CHT_1_COMPGEN(0x00913078, "t_quest_site::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54076
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_quest_site::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_object_factory@Vt_quest_gate@@@@;bcd=512ca0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54077
DATA_CHT_1_COMPGEN(0x00912ca0, "t_object_factory<t_quest_gate>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_object_factory@Vt_quest_gate@@@@;vft=4e7f14;col=512cd4;td=5b0d8c;chd=512cc4;offset=0;cdOffset=0;validated-hierarchy; map:54078
DATA_CHT_1_COMPGEN(0x00912cb8, "t_object_factory<t_quest_gate>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_object_factory@Vt_quest_gate@@@@;vft=4e7f14;col=512cd4;td=5b0d8c;chd=512cc4;offset=0;cdOffset=0;validated-hierarchy; map:54079
DATA_CHT_1_COMPGEN(0x00912cc4, "t_object_factory<t_quest_gate>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_object_factory@Vt_quest_gate@@@@;vft=4e7f14;col=512cd4;td=5b0d8c;chd=512cc4;offset=0;cdOffset=0;validated-hierarchy; map:54080
DATA_CHT_1_COMPGEN(0x00912cd4, "const t_object_factory<t_quest_gate>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54081
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_quest_gate::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_quest_gate@@;vft=4e834c;col=51312c;td=5b10d4;chd=51311c;offset=164;cdOffset=0;validated-hierarchy; map:54082
DATA_CHT_1_COMPGEN(0x0091312c, "const t_quest_gate::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54083
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_quest_gate::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_quest_gate@@;bcd=5130d8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54084
DATA_CHT_1_COMPGEN(0x009130d8, "t_quest_gate::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_quest_gate@@;vft=4e834c;col=51312c;td=5b10d4;chd=51311c;offset=164;cdOffset=0;validated-hierarchy; map:54085
DATA_CHT_1_COMPGEN(0x009130f0, "t_quest_gate::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_quest_gate@@;vft=4e834c;col=51312c;td=5b10d4;chd=51311c;offset=164;cdOffset=0;validated-hierarchy; map:54086
DATA_CHT_1_COMPGEN(0x0091311c, "t_quest_gate::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54087
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_quest_gate::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_object_factory@Vt_quest_guard@@@@;bcd=512ce8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54088
DATA_CHT_1_COMPGEN(0x00912ce8, "t_object_factory<t_quest_guard>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_object_factory@Vt_quest_guard@@@@;vft=4e7f1c;col=512d1c;td=5b0dc0;chd=512d0c;offset=0;cdOffset=0;validated-hierarchy; map:54089
DATA_CHT_1_COMPGEN(0x00912d00, "t_object_factory<t_quest_guard>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_object_factory@Vt_quest_guard@@@@;vft=4e7f1c;col=512d1c;td=5b0dc0;chd=512d0c;offset=0;cdOffset=0;validated-hierarchy; map:54090
DATA_CHT_1_COMPGEN(0x00912d0c, "t_object_factory<t_quest_guard>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_object_factory@Vt_quest_guard@@@@;vft=4e7f1c;col=512d1c;td=5b0dc0;chd=512d0c;offset=0;cdOffset=0;validated-hierarchy; map:54091
DATA_CHT_1_COMPGEN(0x00912d1c, "const t_object_factory<t_quest_guard>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54092
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_quest_guard::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_quest_guard@@;vft=4e84f4;col=5131d4;td=5b10f0;chd=5131c4;offset=184;cdOffset=0;validated-hierarchy; map:54093
DATA_CHT_1_COMPGEN(0x009131d4, "const t_quest_guard::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54094
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_quest_guard::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_quest_guard@@;bcd=51317c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54095
DATA_CHT_1_COMPGEN(0x0091317c, "t_quest_guard::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_quest_guard@@;vft=4e84f4;col=5131d4;td=5b10f0;chd=5131c4;offset=184;cdOffset=0;validated-hierarchy; map:54096
DATA_CHT_1_COMPGEN(0x00913194, "t_quest_guard::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_quest_guard@@;vft=4e84f4;col=5131d4;td=5b10f0;chd=5131c4;offset=184;cdOffset=0;validated-hierarchy; map:54097
DATA_CHT_1_COMPGEN(0x009131c4, "t_quest_guard::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54098
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_quest_guard::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_object_factory@Vt_seers_hut@@@@;bcd=512d30;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54099
DATA_CHT_1_COMPGEN(0x00912d30, "t_object_factory<t_seers_hut>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_object_factory@Vt_seers_hut@@@@;vft=4e7f24;col=512d64;td=5b0df4;chd=512d54;offset=0;cdOffset=0;validated-hierarchy; map:54100
DATA_CHT_1_COMPGEN(0x00912d48, "t_object_factory<t_seers_hut>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_object_factory@Vt_seers_hut@@@@;vft=4e7f24;col=512d64;td=5b0df4;chd=512d54;offset=0;cdOffset=0;validated-hierarchy; map:54101
DATA_CHT_1_COMPGEN(0x00912d54, "t_object_factory<t_seers_hut>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_object_factory@Vt_seers_hut@@@@;vft=4e7f24;col=512d64;td=5b0df4;chd=512d54;offset=0;cdOffset=0;validated-hierarchy; map:54102
DATA_CHT_1_COMPGEN(0x00912d64, "const t_object_factory<t_seers_hut>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54103
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_seers_hut::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_seers_hut@@;vft=4e869c;col=51327c;td=5b110c;chd=51326c;offset=200;cdOffset=0;validated-hierarchy; map:54104
DATA_CHT_1_COMPGEN(0x0091327c, "const t_seers_hut::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54105
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_seers_hut::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_seers_hut@@;bcd=513224;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54106
DATA_CHT_1_COMPGEN(0x00913224, "t_seers_hut::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_seers_hut@@;vft=4e869c;col=51327c;td=5b110c;chd=51326c;offset=200;cdOffset=0;validated-hierarchy; map:54107
DATA_CHT_1_COMPGEN(0x0091323c, "t_seers_hut::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_seers_hut@@;vft=4e869c;col=51327c;td=5b110c;chd=51326c;offset=200;cdOffset=0;validated-hierarchy; map:54108
DATA_CHT_1_COMPGEN(0x0091326c, "t_seers_hut::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54109
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_seers_hut::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_script_expression_factory@Vt_abstract_script_numeric_expression@@@@;bcd=513290;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54110
DATA_CHT_1_COMPGEN(0x00913290, "t_abstract_script_expression_factory<t_abstract_script_numeric_expression>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_script_expression_factory@Vt_abstract_script_numeric_expression@@@@;vft=4e8840;col=5132c4;td=5b1128;chd=5132b4;offset=0;cdOffset=0;validated-hierarchy; map:54111
DATA_CHT_1_COMPGEN(0x009132a8, "t_abstract_script_expression_factory<t_abstract_script_numeric_expression>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_script_expression_factory@Vt_abstract_script_numeric_expression@@@@;vft=4e8840;col=5132c4;td=5b1128;chd=5132b4;offset=0;cdOffset=0;validated-hierarchy; map:54112
DATA_CHT_1_COMPGEN(0x009132b4, "t_abstract_script_expression_factory<t_abstract_script_numeric_expression>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_script_expression_factory@Vt_abstract_script_numeric_expression@@@@;vft=4e8840;col=5132c4;td=5b1128;chd=5132b4;offset=0;cdOffset=0;validated-hierarchy; map:54113
DATA_CHT_1_COMPGEN(0x009132c4, "const t_abstract_script_expression_factory<t_abstract_script_numeric_expression>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_script_expression_factory@Vt_abstract_script_boolean_expression@@@@;bcd=5132d8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54114
DATA_CHT_1_COMPGEN(0x009132d8, "t_abstract_script_expression_factory<t_abstract_script_boolean_expression>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_script_expression_factory@Vt_abstract_script_boolean_expression@@@@;vft=4e8848;col=51330c;td=5b1188;chd=5132fc;offset=0;cdOffset=0;validated-hierarchy; map:54115
DATA_CHT_1_COMPGEN(0x009132f0, "t_abstract_script_expression_factory<t_abstract_script_boolean_expression>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_script_expression_factory@Vt_abstract_script_boolean_expression@@@@;vft=4e8848;col=51330c;td=5b1188;chd=5132fc;offset=0;cdOffset=0;validated-hierarchy; map:54116
DATA_CHT_1_COMPGEN(0x009132fc, "t_abstract_script_expression_factory<t_abstract_script_boolean_expression>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_script_expression_factory@Vt_abstract_script_boolean_expression@@@@;vft=4e8848;col=51330c;td=5b1188;chd=5132fc;offset=0;cdOffset=0;validated-hierarchy; map:54117
DATA_CHT_1_COMPGEN(0x0091330c, "const t_abstract_script_expression_factory<t_abstract_script_boolean_expression>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action_factory@$0CK@@@;bcd=513320;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54118
DATA_CHT_1_COMPGEN(0x00913320, "t_script_action_factory<42>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_action_factory@$0CK@@@;vft=4e8850;col=513358;td=5b11e8;chd=513348;offset=0;cdOffset=0;validated-hierarchy; map:54119
DATA_CHT_1_COMPGEN(0x00913338, "t_script_action_factory<42>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_action_factory@$0CK@@@;vft=4e8850;col=513358;td=5b11e8;chd=513348;offset=0;cdOffset=0;validated-hierarchy; map:54120
DATA_CHT_1_COMPGEN(0x00913348, "t_script_action_factory<42>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_action_factory@$0CK@@@;vft=4e8850;col=513358;td=5b11e8;chd=513348;offset=0;cdOffset=0;validated-hierarchy; map:54121
DATA_CHT_1_COMPGEN(0x00913358, "const t_script_action_factory<42>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_numeric_expression_factory@$00@@;bcd=51336c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54122
DATA_CHT_1_COMPGEN(0x0091336c, "t_script_numeric_expression_factory<1>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_numeric_expression_factory@$00@@;vft=4e8858;col=5133a4;td=5b1218;chd=513394;offset=0;cdOffset=0;validated-hierarchy; map:54123
DATA_CHT_1_COMPGEN(0x00913384, "t_script_numeric_expression_factory<1>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_numeric_expression_factory@$00@@;vft=4e8858;col=5133a4;td=5b1218;chd=513394;offset=0;cdOffset=0;validated-hierarchy; map:54124
DATA_CHT_1_COMPGEN(0x00913394, "t_script_numeric_expression_factory<1>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_numeric_expression_factory@$00@@;vft=4e8858;col=5133a4;td=5b1218;chd=513394;offset=0;cdOffset=0;validated-hierarchy; map:54125
DATA_CHT_1_COMPGEN(0x009133a4, "const t_script_numeric_expression_factory<1>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_script_expression_base@Vt_abstract_script_numeric_expression@@W4t_script_numeric_expression_type@@H@@;bcd=5133b8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54126
DATA_CHT_1_COMPGEN(0x009133b8, "t_abstract_script_expression_base<t_abstract_script_numeric_expression, t_script_numeric_expression_type, int>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_abstract_script_numeric_expression@@;bcd=5133d0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54127
DATA_CHT_1_COMPGEN(0x009133d0, "t_abstract_script_numeric_expression::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_simple_expression@Vt_abstract_script_numeric_expression@@@@;bcd=5133e8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54128
DATA_CHT_1_COMPGEN(0x009133e8, "t_script_simple_expression<t_abstract_script_numeric_expression>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_script_expression_day@@;bcd=513400;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54129
DATA_CHT_1_COMPGEN(0x00913400, "t_script_expression_day::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_numeric_expression_base@$00Vt_script_expression_day@@@@;bcd=513418;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54130
DATA_CHT_1_COMPGEN(0x00913418, "t_script_numeric_expression_base<1, t_script_expression_day>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_numeric_expression@$00@@;bcd=513430;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54131
DATA_CHT_1_COMPGEN(0x00913430, "t_script_numeric_expression<1>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_numeric_expression@$00@@;vft=4e8860;col=513478;td=5b13d8;chd=513468;offset=0;cdOffset=0;validated-hierarchy; map:54132
DATA_CHT_1_COMPGEN(0x00913448, "t_script_numeric_expression<1>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_numeric_expression@$00@@;vft=4e8860;col=513478;td=5b13d8;chd=513468;offset=0;cdOffset=0;validated-hierarchy; map:54133
DATA_CHT_1_COMPGEN(0x00913468, "t_script_numeric_expression<1>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_numeric_expression@$00@@;vft=4e8860;col=513478;td=5b13d8;chd=513468;offset=0;cdOffset=0;validated-hierarchy; map:54134
DATA_CHT_1_COMPGEN(0x00913478, "const t_script_numeric_expression<1>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54135
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_numeric_expression_base<1, t_script_expression_day>::`RTTI Base Class Array'")

// name:A; map symbol; map:54136
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_numeric_expression_base<1, t_script_expression_day>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54137
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_numeric_expression_base<1, t_script_expression_day>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54138
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_expression_day::`RTTI Base Class Array'")

// name:A; map symbol; map:54139
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_expression_day::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54140
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_expression_day::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54141
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_simple_expression<t_abstract_script_numeric_expression>::`RTTI Base Class Array'")

// name:A; map symbol; map:54142
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_simple_expression<t_abstract_script_numeric_expression>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54143
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_simple_expression<t_abstract_script_numeric_expression>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_abstract_script_numeric_expression@@;vft=4ea84c;col=515f88;td=5b12d0;chd=515f78;offset=0;cdOffset=0;validated-hierarchy; map:54144
DATA_CHT_1_COMPGEN(0x00915f68, "t_abstract_script_numeric_expression::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_abstract_script_numeric_expression@@;vft=4ea84c;col=515f88;td=5b12d0;chd=515f78;offset=0;cdOffset=0;validated-hierarchy; map:54145
DATA_CHT_1_COMPGEN(0x00915f78, "t_abstract_script_numeric_expression::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_abstract_script_numeric_expression@@;vft=4ea84c;col=515f88;td=5b12d0;chd=515f78;offset=0;cdOffset=0;validated-hierarchy; map:54146
DATA_CHT_1_COMPGEN(0x00915f88, "const t_abstract_script_numeric_expression::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_script_expression_base@Vt_abstract_script_numeric_expression@@W4t_script_numeric_expression_type@@H@@;vft=4ea7b0;col=515e10;td=5b1250;chd=515e00;offset=0;cdOffset=0;validated-hierarchy; map:54147
DATA_CHT_1_COMPGEN(0x00915df4, "t_abstract_script_expression_base<t_abstract_script_numeric_expression, t_script_numeric_expression_type, int>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_script_expression_base@Vt_abstract_script_numeric_expression@@W4t_script_numeric_expression_type@@H@@;vft=4ea7b0;col=515e10;td=5b1250;chd=515e00;offset=0;cdOffset=0;validated-hierarchy; map:54148
DATA_CHT_1_COMPGEN(0x00915e00, "t_abstract_script_expression_base<t_abstract_script_numeric_expression, t_script_numeric_expression_type, int>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_script_expression_base@Vt_abstract_script_numeric_expression@@W4t_script_numeric_expression_type@@H@@;vft=4ea7b0;col=515e10;td=5b1250;chd=515e00;offset=0;cdOffset=0;validated-hierarchy; map:54149
DATA_CHT_1_COMPGEN(0x00915e10, "const t_abstract_script_expression_base<t_abstract_script_numeric_expression, t_script_numeric_expression_type, int>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_numeric_expression_factory@$01@@;bcd=51348c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54150
DATA_CHT_1_COMPGEN(0x0091348c, "t_script_numeric_expression_factory<2>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_numeric_expression_factory@$01@@;vft=4e8890;col=5134c4;td=5b1408;chd=5134b4;offset=0;cdOffset=0;validated-hierarchy; map:54151
DATA_CHT_1_COMPGEN(0x009134a4, "t_script_numeric_expression_factory<2>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_numeric_expression_factory@$01@@;vft=4e8890;col=5134c4;td=5b1408;chd=5134b4;offset=0;cdOffset=0;validated-hierarchy; map:54152
DATA_CHT_1_COMPGEN(0x009134b4, "t_script_numeric_expression_factory<2>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_numeric_expression_factory@$01@@;vft=4e8890;col=5134c4;td=5b1408;chd=5134b4;offset=0;cdOffset=0;validated-hierarchy; map:54153
DATA_CHT_1_COMPGEN(0x009134c4, "const t_script_numeric_expression_factory<2>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_script_expression_day_of_week@@;bcd=5134d8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54154
DATA_CHT_1_COMPGEN(0x009134d8, "t_script_expression_day_of_week::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_numeric_expression_base@$01Vt_script_expression_day_of_week@@@@;bcd=5134f0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54155
DATA_CHT_1_COMPGEN(0x009134f0, "t_script_numeric_expression_base<2, t_script_expression_day_of_week>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_numeric_expression@$01@@;bcd=513508;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54156
DATA_CHT_1_COMPGEN(0x00913508, "t_script_numeric_expression<2>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_numeric_expression@$01@@;vft=4e8898;col=513550;td=5b14c8;chd=513540;offset=0;cdOffset=0;validated-hierarchy; map:54157
DATA_CHT_1_COMPGEN(0x00913520, "t_script_numeric_expression<2>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_numeric_expression@$01@@;vft=4e8898;col=513550;td=5b14c8;chd=513540;offset=0;cdOffset=0;validated-hierarchy; map:54158
DATA_CHT_1_COMPGEN(0x00913540, "t_script_numeric_expression<2>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_numeric_expression@$01@@;vft=4e8898;col=513550;td=5b14c8;chd=513540;offset=0;cdOffset=0;validated-hierarchy; map:54159
DATA_CHT_1_COMPGEN(0x00913550, "const t_script_numeric_expression<2>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54160
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_numeric_expression_base<2, t_script_expression_day_of_week>::`RTTI Base Class Array'")

// name:A; map symbol; map:54161
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_numeric_expression_base<2, t_script_expression_day_of_week>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54162
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_numeric_expression_base<2, t_script_expression_day_of_week>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54163
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_expression_day_of_week::`RTTI Base Class Array'")

// name:A; map symbol; map:54164
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_expression_day_of_week::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54165
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_expression_day_of_week::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_numeric_expression_factory@$0BD@@@;bcd=513564;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54166
DATA_CHT_1_COMPGEN(0x00913564, "t_script_numeric_expression_factory<19>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_numeric_expression_factory@$0BD@@@;vft=4e88c8;col=51359c;td=5b14f8;chd=51358c;offset=0;cdOffset=0;validated-hierarchy; map:54167
DATA_CHT_1_COMPGEN(0x0091357c, "t_script_numeric_expression_factory<19>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_numeric_expression_factory@$0BD@@@;vft=4e88c8;col=51359c;td=5b14f8;chd=51358c;offset=0;cdOffset=0;validated-hierarchy; map:54168
DATA_CHT_1_COMPGEN(0x0091358c, "t_script_numeric_expression_factory<19>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_numeric_expression_factory@$0BD@@@;vft=4e88c8;col=51359c;td=5b14f8;chd=51358c;offset=0;cdOffset=0;validated-hierarchy; map:54169
DATA_CHT_1_COMPGEN(0x0091359c, "const t_script_numeric_expression_factory<19>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_script_expression_week@@;bcd=5135b0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54170
DATA_CHT_1_COMPGEN(0x009135b0, "t_script_expression_week::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_numeric_expression_base@$0BD@Vt_script_expression_week@@@@;bcd=5135c8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54171
DATA_CHT_1_COMPGEN(0x009135c8, "t_script_numeric_expression_base<19, t_script_expression_week>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_numeric_expression@$0BD@@@;bcd=5135e0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54172
DATA_CHT_1_COMPGEN(0x009135e0, "t_script_numeric_expression<19>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_numeric_expression@$0BD@@@;vft=4e88d0;col=513628;td=5b15b4;chd=513618;offset=0;cdOffset=0;validated-hierarchy; map:54173
DATA_CHT_1_COMPGEN(0x009135f8, "t_script_numeric_expression<19>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_numeric_expression@$0BD@@@;vft=4e88d0;col=513628;td=5b15b4;chd=513618;offset=0;cdOffset=0;validated-hierarchy; map:54174
DATA_CHT_1_COMPGEN(0x00913618, "t_script_numeric_expression<19>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_numeric_expression@$0BD@@@;vft=4e88d0;col=513628;td=5b15b4;chd=513618;offset=0;cdOffset=0;validated-hierarchy; map:54175
DATA_CHT_1_COMPGEN(0x00913628, "const t_script_numeric_expression<19>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54176
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_numeric_expression_base<19, t_script_expression_week>::`RTTI Base Class Array'")

// name:A; map symbol; map:54177
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_numeric_expression_base<19, t_script_expression_week>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54178
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_numeric_expression_base<19, t_script_expression_week>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54179
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_expression_week::`RTTI Base Class Array'")

// name:A; map symbol; map:54180
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_expression_week::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54181
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_expression_week::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_numeric_expression_factory@$0BE@@@;bcd=51363c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54182
DATA_CHT_1_COMPGEN(0x0091363c, "t_script_numeric_expression_factory<20>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_numeric_expression_factory@$0BE@@@;vft=4e8900;col=513674;td=5b15e8;chd=513664;offset=0;cdOffset=0;validated-hierarchy; map:54183
DATA_CHT_1_COMPGEN(0x00913654, "t_script_numeric_expression_factory<20>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_numeric_expression_factory@$0BE@@@;vft=4e8900;col=513674;td=5b15e8;chd=513664;offset=0;cdOffset=0;validated-hierarchy; map:54184
DATA_CHT_1_COMPGEN(0x00913664, "t_script_numeric_expression_factory<20>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_numeric_expression_factory@$0BE@@@;vft=4e8900;col=513674;td=5b15e8;chd=513664;offset=0;cdOffset=0;validated-hierarchy; map:54185
DATA_CHT_1_COMPGEN(0x00913674, "const t_script_numeric_expression_factory<20>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_script_expression_week_of_month@@;bcd=513688;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54186
DATA_CHT_1_COMPGEN(0x00913688, "t_script_expression_week_of_month::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_numeric_expression_base@$0BE@Vt_script_expression_week_of_month@@@@;bcd=5136a0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54187
DATA_CHT_1_COMPGEN(0x009136a0, "t_script_numeric_expression_base<20, t_script_expression_week_of_month>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_numeric_expression@$0BE@@@;bcd=5136b8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54188
DATA_CHT_1_COMPGEN(0x009136b8, "t_script_numeric_expression<20>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_numeric_expression@$0BE@@@;vft=4e8908;col=513700;td=5b16b4;chd=5136f0;offset=0;cdOffset=0;validated-hierarchy; map:54189
DATA_CHT_1_COMPGEN(0x009136d0, "t_script_numeric_expression<20>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_numeric_expression@$0BE@@@;vft=4e8908;col=513700;td=5b16b4;chd=5136f0;offset=0;cdOffset=0;validated-hierarchy; map:54190
DATA_CHT_1_COMPGEN(0x009136f0, "t_script_numeric_expression<20>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_numeric_expression@$0BE@@@;vft=4e8908;col=513700;td=5b16b4;chd=5136f0;offset=0;cdOffset=0;validated-hierarchy; map:54191
DATA_CHT_1_COMPGEN(0x00913700, "const t_script_numeric_expression<20>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54192
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_numeric_expression_base<20, t_script_expression_week_of_month>::`RTTI Base Class Array'")

// name:A; map symbol; map:54193
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_numeric_expression_base<20, t_script_expression_week_of_month>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54194
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_numeric_expression_base<20, t_script_expression_week_of_month>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54195
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_expression_week_of_month::`RTTI Base Class Array'")

// name:A; map symbol; map:54196
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_expression_week_of_month::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54197
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_expression_week_of_month::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_numeric_expression_factory@$08@@;bcd=513714;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54198
DATA_CHT_1_COMPGEN(0x00913714, "t_script_numeric_expression_factory<9>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_numeric_expression_factory@$08@@;vft=4e8938;col=51374c;td=5b16e8;chd=51373c;offset=0;cdOffset=0;validated-hierarchy; map:54199
DATA_CHT_1_COMPGEN(0x0091372c, "t_script_numeric_expression_factory<9>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_numeric_expression_factory@$08@@;vft=4e8938;col=51374c;td=5b16e8;chd=51373c;offset=0;cdOffset=0;validated-hierarchy; map:54200
DATA_CHT_1_COMPGEN(0x0091373c, "t_script_numeric_expression_factory<9>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_numeric_expression_factory@$08@@;vft=4e8938;col=51374c;td=5b16e8;chd=51373c;offset=0;cdOffset=0;validated-hierarchy; map:54201
DATA_CHT_1_COMPGEN(0x0091374c, "const t_script_numeric_expression_factory<9>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_script_expression_month@@;bcd=513760;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54202
DATA_CHT_1_COMPGEN(0x00913760, "t_script_expression_month::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_numeric_expression_base@$08Vt_script_expression_month@@@@;bcd=513778;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54203
DATA_CHT_1_COMPGEN(0x00913778, "t_script_numeric_expression_base<9, t_script_expression_month>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_numeric_expression@$08@@;bcd=513790;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54204
DATA_CHT_1_COMPGEN(0x00913790, "t_script_numeric_expression<9>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_numeric_expression@$08@@;vft=4e8940;col=5137d8;td=5b179c;chd=5137c8;offset=0;cdOffset=0;validated-hierarchy; map:54205
DATA_CHT_1_COMPGEN(0x009137a8, "t_script_numeric_expression<9>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_numeric_expression@$08@@;vft=4e8940;col=5137d8;td=5b179c;chd=5137c8;offset=0;cdOffset=0;validated-hierarchy; map:54206
DATA_CHT_1_COMPGEN(0x009137c8, "t_script_numeric_expression<9>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_numeric_expression@$08@@;vft=4e8940;col=5137d8;td=5b179c;chd=5137c8;offset=0;cdOffset=0;validated-hierarchy; map:54207
DATA_CHT_1_COMPGEN(0x009137d8, "const t_script_numeric_expression<9>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54208
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_numeric_expression_base<9, t_script_expression_month>::`RTTI Base Class Array'")

// name:A; map symbol; map:54209
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_numeric_expression_base<9, t_script_expression_month>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54210
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_numeric_expression_base<9, t_script_expression_month>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54211
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_expression_month::`RTTI Base Class Array'")

// name:A; map symbol; map:54212
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_expression_month::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54213
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_expression_month::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_boolean_expression_factory@$0BG@@@;bcd=5137ec;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54214
DATA_CHT_1_COMPGEN(0x009137ec, "t_script_boolean_expression_factory<22>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_boolean_expression_factory@$0BG@@@;vft=4e8970;col=513824;td=5b17cc;chd=513814;offset=0;cdOffset=0;validated-hierarchy; map:54215
DATA_CHT_1_COMPGEN(0x00913804, "t_script_boolean_expression_factory<22>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_boolean_expression_factory@$0BG@@@;vft=4e8970;col=513824;td=5b17cc;chd=513814;offset=0;cdOffset=0;validated-hierarchy; map:54216
DATA_CHT_1_COMPGEN(0x00913814, "t_script_boolean_expression_factory<22>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_boolean_expression_factory@$0BG@@@;vft=4e8970;col=513824;td=5b17cc;chd=513814;offset=0;cdOffset=0;validated-hierarchy; map:54217
DATA_CHT_1_COMPGEN(0x00913824, "const t_script_boolean_expression_factory<22>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_script_expression_true@@;bcd=513838;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54218
DATA_CHT_1_COMPGEN(0x00913838, "t_script_expression_true::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_boolean_expression_base@$0BG@Vt_script_expression_true@@@@;bcd=513850;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54219
DATA_CHT_1_COMPGEN(0x00913850, "t_script_boolean_expression_base<22, t_script_expression_true>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_boolean_expression@$0BG@@@;bcd=513868;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54220
DATA_CHT_1_COMPGEN(0x00913868, "t_script_boolean_expression<22>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_boolean_expression@$0BG@@@;vft=4e8978;col=5138b0;td=5b1884;chd=5138a0;offset=0;cdOffset=0;validated-hierarchy; map:54221
DATA_CHT_1_COMPGEN(0x00913880, "t_script_boolean_expression<22>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_boolean_expression@$0BG@@@;vft=4e8978;col=5138b0;td=5b1884;chd=5138a0;offset=0;cdOffset=0;validated-hierarchy; map:54222
DATA_CHT_1_COMPGEN(0x009138a0, "t_script_boolean_expression<22>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_boolean_expression@$0BG@@@;vft=4e8978;col=5138b0;td=5b1884;chd=5138a0;offset=0;cdOffset=0;validated-hierarchy; map:54223
DATA_CHT_1_COMPGEN(0x009138b0, "const t_script_boolean_expression<22>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54224
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_boolean_expression_base<22, t_script_expression_true>::`RTTI Base Class Array'")

// name:A; map symbol; map:54225
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_boolean_expression_base<22, t_script_expression_true>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54226
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_boolean_expression_base<22, t_script_expression_true>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54227
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_expression_true::`RTTI Base Class Array'")

// name:A; map symbol; map:54228
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_expression_true::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54229
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_expression_true::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_boolean_expression_factory@$04@@;bcd=5138c4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54230
DATA_CHT_1_COMPGEN(0x009138c4, "t_script_boolean_expression_factory<5>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_boolean_expression_factory@$04@@;vft=4e89a8;col=5138fc;td=5b18b8;chd=5138ec;offset=0;cdOffset=0;validated-hierarchy; map:54231
DATA_CHT_1_COMPGEN(0x009138dc, "t_script_boolean_expression_factory<5>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_boolean_expression_factory@$04@@;vft=4e89a8;col=5138fc;td=5b18b8;chd=5138ec;offset=0;cdOffset=0;validated-hierarchy; map:54232
DATA_CHT_1_COMPGEN(0x009138ec, "t_script_boolean_expression_factory<5>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_boolean_expression_factory@$04@@;vft=4e89a8;col=5138fc;td=5b18b8;chd=5138ec;offset=0;cdOffset=0;validated-hierarchy; map:54233
DATA_CHT_1_COMPGEN(0x009138fc, "const t_script_boolean_expression_factory<5>::`RTTI Complete Object Locator'")

// === .data (52 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_quest_origin_site@@;td=5b1094;validated-header; map:58979
DATA_CHT_1_COMPGEN(0x009b1094, "t_quest_origin_site `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_script_expression_base@Vt_abstract_script_boolean_expression@@W4t_script_boolean_expression_type@@_N@@;td=5b0ed8;validated-header; map:58980
DATA_CHT_1_COMPGEN(0x009b0ed8, "t_abstract_script_expression_base<t_abstract_script_boolean_expression, t_script_boolean_expression_type, bool> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_abstract_script_boolean_expression@@;td=5b0f58;validated-header; map:58981
DATA_CHT_1_COMPGEN(0x009b0f58, "t_abstract_script_boolean_expression `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_simple_expression@Vt_abstract_script_boolean_expression@@@@;td=5b0f90;validated-header; map:58982
DATA_CHT_1_COMPGEN(0x009b0f90, "t_script_simple_expression<t_abstract_script_boolean_expression> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_script_expression_false@@;td=5b0fe4;validated-header; map:58983
DATA_CHT_1_COMPGEN(0x009b0fe4, "t_script_expression_false `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_boolean_expression_base@$04Vt_script_expression_false@@@@;td=5b1010;validated-header; map:58984
DATA_CHT_1_COMPGEN(0x009b1010, "t_script_boolean_expression_base<5, t_script_expression_false> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_boolean_expression@$04@@;td=5b1064;validated-header; map:58985
DATA_CHT_1_COMPGEN(0x009b1064, "t_script_boolean_expression<5> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_abstract_script_action@@;td=5b0e24;validated-header; map:58986
DATA_CHT_1_COMPGEN(0x009b0e24, "t_abstract_script_action `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_script_sequence@@;td=5b0e4c;validated-header; map:58987
DATA_CHT_1_COMPGEN(0x009b0e4c, "t_script_sequence `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action_base@$0CK@Vt_script_sequence@@@@;td=5b0e6c;validated-header; map:58988
DATA_CHT_1_COMPGEN(0x009b0e6c, "t_script_action_base<42, t_script_sequence> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action@$0CK@@@;td=5b0eac;validated-header; map:58989
DATA_CHT_1_COMPGEN(0x009b0eac, "t_script_action<42> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_quest_site@@;td=5b10b8;validated-header; map:58990
DATA_CHT_1_COMPGEN(0x009b10b8, "t_quest_site `RTTI Type Descriptor'")

// name:A; map symbol; map:58991
DATA_CHT_1_COMPGEN(UNACCOUNTED, "dynamic_cast< t_actual const* >...")

// name:A; map symbol; map:58992
DATA_CHT_1_COMPGEN(UNACCOUNTED, "C:\\\\work\\\\game\\\\abstract_script_act...")

// name:A; map symbol; map:58993
DATA_CHT_1_COMPGEN(UNACCOUNTED, "C:\\\\work\\\\game\\\\abstract_script_exp...")

// confidence:A; rtti-type-name; type-name=.?AV?$t_object_factory@Vt_quest_gate@@@@;td=5b0d8c;validated-header; map:58994
DATA_CHT_1_COMPGEN(0x009b0d8c, "t_object_factory<t_quest_gate> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_quest_gate@@;td=5b10d4;validated-header; map:58995
DATA_CHT_1_COMPGEN(0x009b10d4, "t_quest_gate `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_object_factory@Vt_quest_guard@@@@;td=5b0dc0;validated-header; map:58996
DATA_CHT_1_COMPGEN(0x009b0dc0, "t_object_factory<t_quest_guard> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_quest_guard@@;td=5b10f0;validated-header; map:58997
DATA_CHT_1_COMPGEN(0x009b10f0, "t_quest_guard `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_object_factory@Vt_seers_hut@@@@;td=5b0df4;validated-header; map:58998
DATA_CHT_1_COMPGEN(0x009b0df4, "t_object_factory<t_seers_hut> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_seers_hut@@;td=5b110c;validated-header; map:58999
DATA_CHT_1_COMPGEN(0x009b110c, "t_seers_hut `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_script_expression_factory@Vt_abstract_script_numeric_expression@@@@;td=5b1128;validated-header; map:59000
DATA_CHT_1_COMPGEN(0x009b1128, "t_abstract_script_expression_factory<t_abstract_script_numeric_expression> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_script_expression_factory@Vt_abstract_script_boolean_expression@@@@;td=5b1188;validated-header; map:59001
DATA_CHT_1_COMPGEN(0x009b1188, "t_abstract_script_expression_factory<t_abstract_script_boolean_expression> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action_factory@$0CK@@@;td=5b11e8;validated-header; map:59002
DATA_CHT_1_COMPGEN(0x009b11e8, "t_script_action_factory<42> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_numeric_expression_factory@$00@@;td=5b1218;validated-header; map:59003
DATA_CHT_1_COMPGEN(0x009b1218, "t_script_numeric_expression_factory<1> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_script_expression_base@Vt_abstract_script_numeric_expression@@W4t_script_numeric_expression_type@@H@@;td=5b1250;validated-header; map:59004
DATA_CHT_1_COMPGEN(0x009b1250, "t_abstract_script_expression_base<t_abstract_script_numeric_expression, t_script_numeric_expression_type, int> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_abstract_script_numeric_expression@@;td=5b12d0;validated-header; map:59005
DATA_CHT_1_COMPGEN(0x009b12d0, "t_abstract_script_numeric_expression `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_simple_expression@Vt_abstract_script_numeric_expression@@@@;td=5b1308;validated-header; map:59006
DATA_CHT_1_COMPGEN(0x009b1308, "t_script_simple_expression<t_abstract_script_numeric_expression> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_script_expression_day@@;td=5b135c;validated-header; map:59007
DATA_CHT_1_COMPGEN(0x009b135c, "t_script_expression_day `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_numeric_expression_base@$00Vt_script_expression_day@@@@;td=5b1388;validated-header; map:59008
DATA_CHT_1_COMPGEN(0x009b1388, "t_script_numeric_expression_base<1, t_script_expression_day> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_numeric_expression@$00@@;td=5b13d8;validated-header; map:59009
DATA_CHT_1_COMPGEN(0x009b13d8, "t_script_numeric_expression<1> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_numeric_expression_factory@$01@@;td=5b1408;validated-header; map:59010
DATA_CHT_1_COMPGEN(0x009b1408, "t_script_numeric_expression_factory<2> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_script_expression_day_of_week@@;td=5b1440;validated-header; map:59011
DATA_CHT_1_COMPGEN(0x009b1440, "t_script_expression_day_of_week `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_numeric_expression_base@$01Vt_script_expression_day_of_week@@@@;td=5b1470;validated-header; map:59012
DATA_CHT_1_COMPGEN(0x009b1470, "t_script_numeric_expression_base<2, t_script_expression_day_of_week> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_numeric_expression@$01@@;td=5b14c8;validated-header; map:59013
DATA_CHT_1_COMPGEN(0x009b14c8, "t_script_numeric_expression<2> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_numeric_expression_factory@$0BD@@@;td=5b14f8;validated-header; map:59014
DATA_CHT_1_COMPGEN(0x009b14f8, "t_script_numeric_expression_factory<19> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_script_expression_week@@;td=5b1534;validated-header; map:59015
DATA_CHT_1_COMPGEN(0x009b1534, "t_script_expression_week `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_numeric_expression_base@$0BD@Vt_script_expression_week@@@@;td=5b1560;validated-header; map:59016
DATA_CHT_1_COMPGEN(0x009b1560, "t_script_numeric_expression_base<19, t_script_expression_week> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_numeric_expression@$0BD@@@;td=5b15b4;validated-header; map:59017
DATA_CHT_1_COMPGEN(0x009b15b4, "t_script_numeric_expression<19> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_numeric_expression_factory@$0BE@@@;td=5b15e8;validated-header; map:59018
DATA_CHT_1_COMPGEN(0x009b15e8, "t_script_numeric_expression_factory<20> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_script_expression_week_of_month@@;td=5b1624;validated-header; map:59019
DATA_CHT_1_COMPGEN(0x009b1624, "t_script_expression_week_of_month `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_numeric_expression_base@$0BE@Vt_script_expression_week_of_month@@@@;td=5b1658;validated-header; map:59020
DATA_CHT_1_COMPGEN(0x009b1658, "t_script_numeric_expression_base<20, t_script_expression_week_of_month> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_numeric_expression@$0BE@@@;td=5b16b4;validated-header; map:59021
DATA_CHT_1_COMPGEN(0x009b16b4, "t_script_numeric_expression<20> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_numeric_expression_factory@$08@@;td=5b16e8;validated-header; map:59022
DATA_CHT_1_COMPGEN(0x009b16e8, "t_script_numeric_expression_factory<9> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_script_expression_month@@;td=5b1720;validated-header; map:59023
DATA_CHT_1_COMPGEN(0x009b1720, "t_script_expression_month `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_numeric_expression_base@$08Vt_script_expression_month@@@@;td=5b1748;validated-header; map:59024
DATA_CHT_1_COMPGEN(0x009b1748, "t_script_numeric_expression_base<9, t_script_expression_month> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_numeric_expression@$08@@;td=5b179c;validated-header; map:59025
DATA_CHT_1_COMPGEN(0x009b179c, "t_script_numeric_expression<9> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_boolean_expression_factory@$0BG@@@;td=5b17cc;validated-header; map:59026
DATA_CHT_1_COMPGEN(0x009b17cc, "t_script_boolean_expression_factory<22> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_script_expression_true@@;td=5b1808;validated-header; map:59027
DATA_CHT_1_COMPGEN(0x009b1808, "t_script_expression_true `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_boolean_expression_base@$0BG@Vt_script_expression_true@@@@;td=5b1830;validated-header; map:59028
DATA_CHT_1_COMPGEN(0x009b1830, "t_script_boolean_expression_base<22, t_script_expression_true> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_boolean_expression@$0BG@@@;td=5b1884;validated-header; map:59029
DATA_CHT_1_COMPGEN(0x009b1884, "t_script_boolean_expression<22> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_boolean_expression_factory@$04@@;td=5b18b8;validated-header; map:59030
DATA_CHT_1_COMPGEN(0x009b18b8, "t_script_boolean_expression_factory<5> `RTTI Type Descriptor'")

// === .bss (3 symbols) ===

namespace {

// confidence:B; dyninit-global; owner-conf-B; map:60329
DATA_CHT_1(0x009f3d0c)
t_object_registration<t_seers_hut> g_seers_hut_registration; // Initial value unavailable.

// confidence:B; dyninit-global; owner-conf-B; map:60330
DATA_CHT_1(0x009f3d10)
t_object_registration<t_quest_gate> g_quest_gate_registration; // Initial value unavailable.

// confidence:B; dyninit-global; owner-conf-B; map:60331
DATA_CHT_1(0x009f3d14)
t_object_registration<t_quest_guard> g_quest_guard_registration; // Initial value unavailable.

} // anonymous namespace
