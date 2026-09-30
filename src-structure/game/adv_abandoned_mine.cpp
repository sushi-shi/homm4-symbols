// adv_abandoned_mine.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\adv_abandoned_mine.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 111/183 (A:32 B:4 C:0); unaccounted 72; skipped std 51.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (138 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:71303; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00421930, 0x15, STATIC_INIT_DISPATCH, "adv_abandoned_mine#1")

// name:C; dyninit; see ledger; map:71304
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adv_abandoned_mine#1")

// confidence:D; dyninit-init; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:71305; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00421950, 0x1c, STATIC_INIT_DISPATCH, registration)

// name:B; dyninit; see ledger; map:71306
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, registration)

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:3095
VA_CHT_1(0x00421970, 0x295)
t_adv_abandoned_mine::t_adv_abandoned_mine(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:3096
VA_CHT_1(0x00421dd0, 0x6c0)
void t_adv_abandoned_mine::activate_trigger(
    t_army* arg_0,
    t_adv_map_point const& arg_1,
    t_direction arg_2,
    t_adventure_frame* arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:3097
VA_CHT_1(0x00422600, 0x54)
void t_adv_abandoned_mine::on_combat_end(
    t_army* arg_0,
    t_combat_result arg_1,
    t_creature_array* arg_2,
    t_adventure_frame* arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3098
VA_CHT_1(0x00422660, 0x9e2)
void t_adv_abandoned_mine::visit(t_army* arg_0, t_adventure_frame* arg_1, t_creature_array& arg_2)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:3099
VA_CHT_1(0x00423050, 0x56b)
void t_adv_abandoned_mine::right_click(t_mouse_event const& arg_0, t_adventure_frame* arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3100
VA_CHT_1(0x004235c0, 0x6cf)
void t_adv_abandoned_mine::default_garrison()
{
    // Body unavailable.
}

// name:A; map symbol; map:3101
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adv_abandoned_mine::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3102
VA_CHT_1(0x00423d20, 0x225)
bool t_adv_abandoned_mine::write_events(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:3103
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_adv_abandoned_mine::get_version() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:3104
VA_CHT_1(0x00423f60, 0xec)
bool t_adv_abandoned_mine::read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_qualified_adv_object_type const& arg_1,
    int arg_2
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3105
VA_CHT_1(0x00424050, 0x609)
bool t_adv_abandoned_mine::read_events(std::basic_streambuf<char, std::char_traits<char>>& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:3106
VA_CHT_1(0x004246a0, 0x10f)
bool t_adv_abandoned_mine::read_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_progress_handler* arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:3107
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adv_abandoned_mine::read_built_in_events_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    unsigned short arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:3108
VA_CHT_1(0x004247b0, 0x230)
bool t_adv_abandoned_mine::read_continuous_events_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    unsigned short arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:3109
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adv_abandoned_mine::read_garrison_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    unsigned short arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3110
VA_CHT_1(0x004249e0, 0x215)
bool t_adv_abandoned_mine::read_timed_events_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    unsigned short arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3111
VA_CHT_1(0x00424c00, 0x222)
bool t_adv_abandoned_mine::read_triggerable_events_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    unsigned short arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:3112
VA_CHT_1(0x00424e30, 0xc6)
float t_adv_abandoned_mine::ai_value(
    t_adventure_ai const& arg_0,
    t_creature_array const& arg_1,
    int arg_2
) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:3113
VA_CHT_1(0x00424f00, 0x3c)
bool t_adv_abandoned_mine::preplacement(t_adventure_map& arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:3114
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adv_abandoned_mine::read_postplacement(t_adventure_map& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:3115
VA_CHT_1(0x00424f50, 0x19)
void t_adv_abandoned_mine::initialize(t_adventure_map& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:3116
VA_CHT_1(0x00424f70, 0x38)
void t_adv_abandoned_mine::place(t_adventure_map& arg_0, t_adv_map_point const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:3117
VA_CHT_1(0x00424fb0, 0x15)
void t_adv_abandoned_mine::process_new_day()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3118
VA_CHT_1(0x00424fd0, 0x242)
void t_adv_abandoned_mine::execute_script(t_garrison_scriptable_event arg_0, t_army* arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:3119
VA_CHT_1(0x00425220, 0x29e)
bool t_adv_abandoned_mine::process_timed_events(t_adventure_map& arg_0, bool arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:3120
VA_CHT_1(0x004254c0, 0x238)
bool t_adv_abandoned_mine::process_continuous_events(t_adventure_map& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:3121
VA_CHT_1(0x00425700, 0x263)
bool t_adv_abandoned_mine::process_triggerable_events(t_adventure_map& arg_0, std::string const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:3122
VA_CHT_1(0x00425970, 0x13)
void t_adv_abandoned_mine::on_begin_turn()
{
    // Body unavailable.
}

// confidence:D; align-order; vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:3123
VA_CHT_1(0x00425990, 0x13)
void t_adv_abandoned_mine::on_end_turn()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:3124
VA_CHT_1(0x004259b0, 0x24)
float t_adv_abandoned_mine::ai_activation_value_drop(t_creature_array const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:3125
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_skill_mastery t_adv_abandoned_mine::get_anti_stealth_level() const
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:71307; name:B (dyninit; see ledger)
VA_CHT_1(0x00426400, 0x20)
// adv_abandoned_mine$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:71309; name:B (dyninit; see ledger)
VA_CHT_1(0x00426420, 0x5c)
// adv_abandoned_mine$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:71310
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adv_abandoned_mine$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:71311
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adv_abandoned_mine$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:71312
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adv_abandoned_mine$tatexit4
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:3126
VA_CHT_1_COMPGEN(0x00421c10, 0x33, VECTOR_DELETING_DTOR, t_adv_abandoned_mine)

// name:A; map symbol; map:3127
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_adv_abandoned_mine)

// name:A; map symbol; map:3128
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bool_array::t_bool_array()
{
    // Body unavailable.
}

// name:A; map symbol; map:3129
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bool_array::~t_bool_array()
{
    // Body unavailable.
}

// name:A; map symbol; map:3130
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// public: void t_adv_abandoned_mine::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:3131
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_abandoned_mine::~t_adv_abandoned_mine()
{
    // Body unavailable.
}

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:3132
VA_CHT_1(0x00426260, 0x4c)
bool& t_bool_array::operator[](int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:3133
VA_CHT_1(0x004f0020, 0x18)
t_sound_cache::~t_sound_cache()
{
    // Body unavailable.
}

// name:A; map symbol; map:3134
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_playing_sound>::~t_counted_ptr<t_playing_sound>()
{
    // Body unavailable.
}

// name:A; map symbol; map:3135
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_basic_dialog::open(t_screen_point arg_0, bool arg_1, t_vertical_alignment arg_2, bool arg_3)
{
    // Body unavailable.
}

// name:A; map symbol; map:3136
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_window* t_window::get_parent() const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3137
VA_CHT_1(0x004224b0, 0x38)
t_screen_rect t_window::get_client_rect() const
{
    // Body unavailable.
}

// name:A; map symbol; map:3138
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_hero_keyword_replacer::t_hero_keyword_replacer()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:3139
VA_CHT_1(0x004224f0, 0xb5)
t_keyword_replacer::t_keyword_replacer()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:3140
VA_CHT_1_COMPGEN(0x004225b0, 0x1e, VECTOR_DELETING_DTOR, t_keyword_replacer)

// name:A; map symbol; map:3141
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_keyword_replacer)

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:3142
VA_CHT_1_COMPGEN(0x004225d0, 0x1e, VECTOR_DELETING_DTOR, t_hero_keyword_replacer)

// name:A; map symbol; map:3143
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_hero_keyword_replacer)

// name:A; map symbol; map:3144
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_hero_keyword_replacer::~t_hero_keyword_replacer()
{
    // Body unavailable.
}

// name:A; map symbol; map:3145
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_player::is_computer() const
{
    // Body unavailable.
}

// name:A; map symbol; map:3146
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_basic_dialog>::~t_counted_ptr<t_basic_dialog>()
{
    // Body unavailable.
}

// name:A; map symbol; map:3147
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_combat_context>::~t_counted_ptr<t_combat_context>()
{
    // Body unavailable.
}

// name:A; map symbol; map:3148
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool attacker_lost(t_combat_result arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:3149
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_map_point::t_adv_map_point()
{
    // Body unavailable.
}

// name:A; map symbol; map:3150
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_material t_adv_abandoned_mine::get_material() const
{
    // Body unavailable.
}

// name:A; map symbol; map:3151
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_qualified_adv_object_type::major_subtype() const
{
    // Body unavailable.
}

// name:A; map symbol; map:3152
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_keyword_replacer::add_keyword(std::string const& arg_0, std::string const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:3153
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_mine>::~t_counted_ptr<t_mine>()
{
    // Body unavailable.
}

// name:A; map symbol; map:3154
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_adv_abandoned_mine>::~t_counted_ptr<t_adv_abandoned_mine>()
{
    // Body unavailable.
}

// name:A; map symbol; map:3155
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_adventure_map::get_local_player_number() const
{
    // Body unavailable.
}

// name:A; map symbol; map:3156
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_context_town::t_script_context_town(
    t_adventure_map* arg_0,
    t_owned_adv_object* arg_1,
    t_creature_array* arg_2,
    t_creature_array* arg_3,
    t_player* arg_4,
    t_adv_map_point const* arg_5,
    t_town* arg_6
)
{
    // Body unavailable.
}

// name:A; map symbol; map:3157
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_adventure_map::get_day() const
{
    // Body unavailable.
}

// name:A; map symbol; map:3158
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_ownable_timed_event::has_executed() const
{
    // Body unavailable.
}

// name:A; map symbol; map:3159
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_ownable_continuous_event::get_run_only_during_owners_turn() const
{
    // Body unavailable.
}

// name:A; map symbol; map:3160
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::string const& t_triggerable_event::get_name() const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:3205
VA_CHT_1(0x00422490, 0x1d)
t_abstract_cache<t_sound>::~t_abstract_cache<t_sound>()
{
    // Body unavailable.
}

// name:A; map symbol; map:3206
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_ownable_built_in_event>& t_counted_ptr<t_ownable_built_in_event>::operator=(
    t_ownable_built_in_event* arg_0
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:3207
VA_CHT_1(0x00426110, 0x51)
t_cached_ptr<t_sound>::~t_cached_ptr<t_sound>()
{
    // Body unavailable.
}

// name:A; map symbol; map:3208
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_sound* t_cached_ptr<t_sound>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:3209
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_registration<t_adv_abandoned_mine>::t_object_registration<t_adv_abandoned_mine>(
    t_adv_object_type arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:3210
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_basic_dialog>::t_counted_ptr<t_basic_dialog>(t_basic_dialog* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:3211
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_basic_dialog>::t_counted_ptr<t_basic_dialog>()
{
    // Body unavailable.
}

// name:A; map symbol; map:3212
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_basic_dialog>& t_counted_ptr<t_basic_dialog>::operator=(t_basic_dialog* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:3213
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_basic_dialog* t_counted_ptr<t_basic_dialog>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:3214
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_combat_context>::t_counted_ptr<t_combat_context>()
{
    // Body unavailable.
}

// name:A; map symbol; map:3215
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_combat_context>& t_counted_ptr<t_combat_context>::operator=(t_combat_context* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:3216
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_context& t_counted_ptr<t_combat_context>::operator*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:3217
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_mine>::t_counted_ptr<t_mine>()
{
    // Body unavailable.
}

// name:A; map symbol; map:3218
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_mine>& t_counted_ptr<t_mine>::operator=(t_mine* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:3219
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_mine* t_counted_ptr<t_mine>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:3220
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_adv_abandoned_mine>::t_counted_ptr<t_adv_abandoned_mine>(t_adv_abandoned_mine* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:3221
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_random_number_generator::operator()(int arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:3222
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_random_number_generator::operator()()
{
    // Body unavailable.
}

// name:A; map symbol; map:3223
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_garrison_scriptable_event enum_incr(t_garrison_scriptable_event& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:3224
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_ownable_timed_event>& t_counted_ptr<t_ownable_timed_event>::operator=(
    t_ownable_timed_event* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:3225
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_ownable_triggerable_event>& t_counted_ptr<t_ownable_triggerable_event>::operator=(
    t_ownable_triggerable_event* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:3226
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_ownable_continuous_event>& t_counted_ptr<t_ownable_continuous_event>::operator=(
    t_ownable_continuous_event* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:3227
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_material get(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:3232
VA_CHT_1_COMPGEN(0x004ed930, 0x1e, VECTOR_DELETING_DTOR, "t_abstract_cache<t_sound>")

// name:A; map symbol; map:3233
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_abstract_cache<t_sound>")

// name:A; map symbol; map:3234
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_cache_data<t_sound>>::~t_counted_ptr<t_abstract_cache_data<t_sound>>()
{
    // Body unavailable.
}

// name:A; map symbol; map:3235
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_factory<t_adv_abandoned_mine>::t_object_factory<t_adv_abandoned_mine>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:3236
VA_CHT_1(0x004261f0, 0x65)
t_stationary_adventure_object* t_object_factory<t_adv_abandoned_mine>::create(
    std::string const& arg_0,
    t_qualified_adv_object_type const& arg_1
) const
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3238
VA_CHT_1_COMPGEN(0x00426480, 0x8, VECTOR_DELETING_DTOR, t_adv_abandoned_mine)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3239
VA_CHT_1_COMPGEN(0x00426490, 0x8, VECTOR_DELETING_DTOR, t_adv_abandoned_mine)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3240
VA_CHT_1_COMPGEN(0x004264a0, 0xe, VECTOR_DELETING_DTOR, t_adv_abandoned_mine)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3241
VA_CHT_1(0x004264b0, 0xe)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::accept`vtordisp{-4, 152}'(t_abstract_adv_object_visitor&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3242
VA_CHT_1(0x004264c0, 0xe)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::accept`vtordisp{-4, 152}'(t_abstract_adv_object_visitor&)
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3243
VA_CHT_1(0x004264d0, 0xe)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::animates`vtordisp{-4, 152}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3244
VA_CHT_1(0x004264e0, 0xb)
// [thunk]: public: virtual std::auto_ptr<t_abstract_adv_object> t_adventure_object::clone`adjustor{160}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3245
VA_CHT_1(0x004264f0, 0xe)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_shadow_to`vtordisp{-4, 152}'(unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3246
VA_CHT_1(0x00426500, 0xe)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_shadow_to`vtordisp{-4, 152}'(unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3247
VA_CHT_1(0x00426510, 0xe)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_subimage_to`vtordisp{-4, 152}'(int, unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3248
VA_CHT_1(0x00426520, 0xe)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_subimage_to`vtordisp{-4, 152}'(int, unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&, int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3249
VA_CHT_1(0x00426530, 0xe)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_to`vtordisp{-4, 152}'(unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3250
VA_CHT_1(0x00426540, 0xe)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_to`vtordisp{-4, 152}'(unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3251
VA_CHT_1(0x00426550, 0xe)
// [thunk]: public: virtual t_footprint const& t_abstract_stationary_adv_object::get_footprint`vtordisp{-4, 152}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3252
VA_CHT_1(0x00426560, 0xe)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_rect`vtordisp{-4, 152}'(unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3253
VA_CHT_1(0x00426570, 0xe)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_rect`vtordisp{-4, 152}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3254
VA_CHT_1(0x00426580, 0xe)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_shadow_rect`vtordisp{-4, 152}'(unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3255
VA_CHT_1(0x00426590, 0xe)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_shadow_rect`vtordisp{-4, 152}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3256
VA_CHT_1(0x004265a0, 0xe)
// [thunk]: public: virtual int t_abstract_stationary_adv_object::get_subimage_count`vtordisp{-4, 152}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3257
VA_CHT_1(0x004265b0, 0xe)
// [thunk]: public: virtual int t_stationary_adventure_object::get_subimage_depth_offset`vtordisp{-4, 152}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3258
VA_CHT_1(0x004265c0, 0xe)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_subimage_rect`vtordisp{-4, 152}'(int, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3259
VA_CHT_1(0x004265d0, 0xe)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_subimage_rect`vtordisp{-4, 152}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3260
VA_CHT_1(0x004265e0, 0xe)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::hit_test`vtordisp{-4, 152}'(unsigned long, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3261
VA_CHT_1(0x004265f0, 0xe)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::is_decorative`vtordisp{-4, 152}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3262
VA_CHT_1(0x00426600, 0xe)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::needs_redrawing`vtordisp{-4, 152}'(unsigned long, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3263
VA_CHT_1(0x00426610, 0xe)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::subimage_animates`vtordisp{-4, 152}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3264
VA_CHT_1(0x00426620, 0xe)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::subimage_is_underlay`vtordisp{-4, 152}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3265
VA_CHT_1(0x00426630, 0xe)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::subimage_needs_redrawing`vtordisp{-4, 152}'(int, unsigned long, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3266
VA_CHT_1(0x00426640, 0xb)
// [thunk]: public: virtual bool t_adventure_object::uses_bridge_heights`adjustor{160}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3267
VA_CHT_1(0x00426650, 0xe)
// [thunk]: public: virtual t_adventure_ai const* t_adventure_object::get_ai`vtordisp{-4, 160}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3268
VA_CHT_1(0x00426660, 0xe)
// [thunk]: public: virtual t_adventure_frame* t_adventure_object::get_adventure_frame`vtordisp{-4, 160}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3269
VA_CHT_1(0x00426670, 0xe)
// [thunk]: public: virtual t_adventure_object* t_adventure_object::get_adventure_object`vtordisp{-4, 160}'(void)
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3270
VA_CHT_1(0x00426680, 0x8)
// [thunk]: public: virtual t_creature_array* t_creature_array::get_creature_array`adjustor{88}'(void)
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3271
VA_CHT_1(0x00426690, 0xe)
// [thunk]: public: virtual t_adventure_map* t_adventure_object::get_map`vtordisp{-4, 160}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3272
VA_CHT_1(0x004266a0, 0xe)
// [thunk]: public: virtual t_adv_map_point t_adventure_object::get_position`vtordisp{-4, 160}'(void) const
// Function body not reconstructed; signature retained as a comment.

// === .rdata (12 symbols) ===

// name:A; map symbol; map:42630
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_abandoned_mine::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:42631
DATA_CHT_1_COMPGEN(0x008cc93c, "const t_adv_abandoned_mine::`vftable'")

// confidence:B; rtti-order; map:42632
DATA_CHT_1_COMPGEN(0x008cc9fc, "const t_adv_abandoned_mine::`vftable'{for `t_creature_array'}")

// confidence:B; rtti-order; map:42633
DATA_CHT_1_COMPGEN(0x008cca30, "const t_adv_abandoned_mine::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:42634
DATA_CHT_1_COMPGEN(0x008cca3c, "const t_adv_abandoned_mine::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:42635
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_abandoned_mine::`vbtable'")

// name:A; map symbol; map:42636
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_abandoned_mine::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:42637
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_abandoned_mine::`vbtable'{for `t_abstract_stationary_adv_object'}")

// confidence:A; rtti-name; map:42638
DATA_CHT_1_COMPGEN(0x008ccb18, "const t_hero_keyword_replacer::`vftable'")

// confidence:A; rtti-name; map:42639
DATA_CHT_1_COMPGEN(0x008ccb24, "const t_keyword_replacer::`vftable'")

// confidence:A; rtti-name; map:42640
DATA_CHT_1_COMPGEN(0x008ccb10, "const t_abstract_cache<t_sound>::`vftable'")

// confidence:A; rtti-name; map:42641
DATA_CHT_1_COMPGEN(0x008cc930, "const t_object_factory<t_adv_abandoned_mine>::`vftable'")

// === .rdata$r (26 symbols) ===

// name:A; map symbol; map:47660
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_abandoned_mine::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_adv_abandoned_mine@@;vft=4cc93c;col=4f57a8;td=586300;chd=4f5798;offset=236;cdOffset=0;validated-hierarchy; map:47661
DATA_CHT_1_COMPGEN(0x008f57a8, "const t_adv_abandoned_mine::`RTTI Complete Object Locator'")

// name:A; map symbol; map:47662
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_abandoned_mine::`RTTI Complete Object Locator'{for `t_creature_array'}")

// name:A; map symbol; map:47663
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_abandoned_mine::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_uncopyable@@;bcd=4f571c;pmd=80,-1,0;attributes=9;validated-hierarchy-link; map:47664
DATA_CHT_1_COMPGEN(0x008f571c, "t_uncopyable::`RTTI Base Class Descriptor at (80, -1, 0, 9)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_creature_array@@;bcd=4f5734;pmd=72,-1,0;attributes=0;validated-hierarchy-link; map:47665
DATA_CHT_1_COMPGEN(0x008f5734, "t_creature_array::`RTTI Base Class Descriptor at (72, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adv_abandoned_mine@@;bcd=4f574c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47666
DATA_CHT_1_COMPGEN(0x008f574c, "t_adv_abandoned_mine::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adv_abandoned_mine@@;vft=4cc93c;col=4f57a8;td=586300;chd=4f5798;offset=236;cdOffset=0;validated-hierarchy; map:47667
DATA_CHT_1_COMPGEN(0x008f5764, "t_adv_abandoned_mine::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adv_abandoned_mine@@;vft=4cc93c;col=4f57a8;td=586300;chd=4f5798;offset=236;cdOffset=0;validated-hierarchy; map:47668
DATA_CHT_1_COMPGEN(0x008f5798, "t_adv_abandoned_mine::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:47669
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_abandoned_mine::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_keyword_replacer@@;bcd=4f57bc;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47670
DATA_CHT_1_COMPGEN(0x008f57bc, "t_keyword_replacer::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_hero_keyword_replacer@@;bcd=4f57d4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47671
DATA_CHT_1_COMPGEN(0x008f57d4, "t_hero_keyword_replacer::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_hero_keyword_replacer@@;vft=4ccb18;col=4f5808;td=586348;chd=4f57f8;offset=0;cdOffset=0;validated-hierarchy; map:47672
DATA_CHT_1_COMPGEN(0x008f57ec, "t_hero_keyword_replacer::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_hero_keyword_replacer@@;vft=4ccb18;col=4f5808;td=586348;chd=4f57f8;offset=0;cdOffset=0;validated-hierarchy; map:47673
DATA_CHT_1_COMPGEN(0x008f57f8, "t_hero_keyword_replacer::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_hero_keyword_replacer@@;vft=4ccb18;col=4f5808;td=586348;chd=4f57f8;offset=0;cdOffset=0;validated-hierarchy; map:47674
DATA_CHT_1_COMPGEN(0x008f5808, "const t_hero_keyword_replacer::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_keyword_replacer@@;vft=4ccb24;col=4f5878;td=586324;chd=4f5868;offset=0;cdOffset=0;validated-hierarchy; map:47675
DATA_CHT_1_COMPGEN(0x008f5860, "t_keyword_replacer::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_keyword_replacer@@;vft=4ccb24;col=4f5878;td=586324;chd=4f5868;offset=0;cdOffset=0;validated-hierarchy; map:47676
DATA_CHT_1_COMPGEN(0x008f5868, "t_keyword_replacer::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_keyword_replacer@@;vft=4ccb24;col=4f5878;td=586324;chd=4f5868;offset=0;cdOffset=0;validated-hierarchy; map:47677
DATA_CHT_1_COMPGEN(0x008f5878, "const t_keyword_replacer::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_cache@Vt_sound@@@@;bcd=4f581c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47678
DATA_CHT_1_COMPGEN(0x008f581c, "t_abstract_cache<t_sound>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_cache@Vt_sound@@@@;vft=4ccb10;col=4f584c;td=586370;chd=4f583c;offset=0;cdOffset=0;validated-hierarchy; map:47679
DATA_CHT_1_COMPGEN(0x008f5834, "t_abstract_cache<t_sound>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_cache@Vt_sound@@@@;vft=4ccb10;col=4f584c;td=586370;chd=4f583c;offset=0;cdOffset=0;validated-hierarchy; map:47680
DATA_CHT_1_COMPGEN(0x008f583c, "t_abstract_cache<t_sound>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_cache@Vt_sound@@@@;vft=4ccb10;col=4f584c;td=586370;chd=4f583c;offset=0;cdOffset=0;validated-hierarchy; map:47681
DATA_CHT_1_COMPGEN(0x008f584c, "const t_abstract_cache<t_sound>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_object_factory@Vt_adv_abandoned_mine@@@@;bcd=4f5684;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47682
DATA_CHT_1_COMPGEN(0x008f5684, "t_object_factory<t_adv_abandoned_mine>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_object_factory@Vt_adv_abandoned_mine@@@@;vft=4cc930;col=4f56b8;td=5862c4;chd=4f56a8;offset=0;cdOffset=0;validated-hierarchy; map:47683
DATA_CHT_1_COMPGEN(0x008f569c, "t_object_factory<t_adv_abandoned_mine>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_object_factory@Vt_adv_abandoned_mine@@@@;vft=4cc930;col=4f56b8;td=5862c4;chd=4f56a8;offset=0;cdOffset=0;validated-hierarchy; map:47684
DATA_CHT_1_COMPGEN(0x008f56a8, "t_object_factory<t_adv_abandoned_mine>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_object_factory@Vt_adv_abandoned_mine@@@@;vft=4cc930;col=4f56b8;td=5862c4;chd=4f56a8;offset=0;cdOffset=0;validated-hierarchy; map:47685
DATA_CHT_1_COMPGEN(0x008f56b8, "const t_object_factory<t_adv_abandoned_mine>::`RTTI Complete Object Locator'")

// === .data (5 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_adv_abandoned_mine@@;td=586300;validated-header; map:57396
DATA_CHT_1_COMPGEN(0x00986300, "t_adv_abandoned_mine `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_keyword_replacer@@;td=586324;validated-header; map:57397
DATA_CHT_1_COMPGEN(0x00986324, "t_keyword_replacer `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_hero_keyword_replacer@@;td=586348;validated-header; map:57398
DATA_CHT_1_COMPGEN(0x00986348, "t_hero_keyword_replacer `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_cache@Vt_sound@@@@;td=586370;validated-header; map:57399
DATA_CHT_1_COMPGEN(0x00986370, "t_abstract_cache<t_sound> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_object_factory@Vt_adv_abandoned_mine@@@@;td=5862c4;validated-header; map:57400
DATA_CHT_1_COMPGEN(0x009862c4, "t_object_factory<t_adv_abandoned_mine> `RTTI Type Descriptor'")

// === .bss (2 symbols) ===

namespace {

// confidence:B; dyninit-global; owner-conf-B; map:59938
DATA_CHT_1(0x009c605c)
t_object_registration<t_adv_abandoned_mine> registration; // Initial value unavailable.

} // anonymous namespace

// name:A; map symbol; map:59939
DATA_CHT_1(UNACCOUNTED)
std::_Tree<std::string, std::pair<std::string const, std::string>, std::map<std::string, std::string, t_string_insensitive_less, std::allocator<std::string>>::_Kfn, t_string_insensitive_less, std::allocator<std::string>>::_Node*std::_Tree<std::string, std::pair<std::string const, std::string>, std::map<std::string, std::string, t_string_insensitive_less, std::allocator<std::string>>::_Kfn, t_string_insensitive_less, std::allocator<std::string>>::_Nil; // Initial value unavailable.
