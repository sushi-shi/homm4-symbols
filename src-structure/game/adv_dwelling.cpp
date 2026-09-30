// adv_dwelling.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\adv_dwelling.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 189/265 (A:33 B:9 C:0); unaccounted 76; skipped std 25.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (201 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:71156; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00436080, 0x15, STATIC_INIT_DISPATCH, "adv_dwelling#1")

// name:C; dyninit; see ledger; map:71157
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adv_dwelling#1")

// confidence:D; dyninit-init; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:71158; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x004360a0, 0x1c, STATIC_INIT_DISPATCH, g_dwelling_registration)

// name:B; dyninit; see ledger; map:71159
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, g_dwelling_registration)

// confidence:D; dyninit-init; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:71160; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x004360c0, 0x1c, STATIC_INIT_DISPATCH, g_random_dwelling_registration)

// name:B; dyninit; see ledger; map:71161
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, g_random_dwelling_registration)

namespace {

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4242
VA_CHT_1(0x004360e0, 0xe0)
std::string create_model_name(t_creature_type arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4243
VA_CHT_1(0x004361c0, 0xe9)
t_creature_type pick_creature_type(int arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// name:B; dyninit; see ledger; map:71162
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// pick_creature_type$sdtor
// Function body not reconstructed; signature retained as a comment.

// confidence:A; align-order; retn,stable,vptr; map:4244
VA_CHT_1(0x004362d0, 0x21a)
t_adv_dwelling::t_adv_dwelling(t_creature_type arg_0, t_player_color arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:4245
VA_CHT_1(0x00436800, 0x1d9)
t_adv_dwelling::t_adv_dwelling(std::string const& arg_0, t_qualified_adv_object_type const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:4246
VA_CHT_1(0x004369e0, 0x112)
bool t_adv_dwelling::read_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_progress_handler* arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:4247
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_adv_dwelling::get_version() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:4248
VA_CHT_1(0x00436b10, 0x266)
bool t_adv_dwelling::read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_qualified_adv_object_type const& arg_1,
    int arg_2
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:4249
VA_CHT_1(0x00436d80, 0x5d)
bool t_adv_dwelling::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:4250
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adv_dwelling::set_initial_values(t_creature_type arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:4251
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adv_dwelling::grow(int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:4252
VA_CHT_1(0x00436de0, 0x45)
void t_adv_dwelling::process_new_day()
{
    // Body unavailable.
}

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:71163; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00436e30, 0x11, STATIC_INIT_DISPATCH, "adv_dwelling#4")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:71164; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00436e50, 0xd1, STATIC_CTOR, "adv_dwelling#4")

// name:C; dyninit; see ledger; map:71165
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "adv_dwelling#4")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:71166; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00436f30, 0xa, STATIC_DTOR, "adv_dwelling#4")

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:4253
VA_CHT_1(0x00436f40, 0x91a)
void t_adv_dwelling::activate_trigger(
    t_army* arg_0,
    t_adv_map_point const& arg_1,
    t_direction arg_2,
    t_adventure_frame* arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:4254
VA_CHT_1(0x00437860, 0x32)
void t_adv_dwelling::on_combat_end(
    t_army* arg_0,
    t_combat_result arg_1,
    t_creature_array* arg_2,
    t_adventure_frame* arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4255
VA_CHT_1(0x004378a0, 0x59b)
void t_adv_dwelling::visit(t_army* arg_0, t_adventure_frame* arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4256
VA_CHT_1(0x00437e40, 0x1f6)
void t_adv_dwelling::run_recruit_dialog(t_window* arg_0, t_creature_array& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:4257
VA_CHT_1(0x00438040, 0x9e7)
void t_adv_dwelling::right_click(t_mouse_event const& arg_0, t_adventure_frame* arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:4258
VA_CHT_1(0x00438a50, 0x67)
void t_adv_dwelling::set_owner(int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:4259
VA_CHT_1(0x00438ac0, 0x3d)
void t_adv_dwelling::initialize(t_adventure_map& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:4260
VA_CHT_1(0x00438b00, 0x37)
void t_adv_dwelling::destroy()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:4261
VA_CHT_1(0x00438b40, 0x5c)
bool t_adv_dwelling::preplacement(t_adventure_map& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:4262
VA_CHT_1(0x00438ba0, 0x44)
void t_adv_dwelling::place(t_adventure_map& arg_0, t_adv_map_point const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:4263
VA_CHT_1(0x00438bf0, 0x264)
float t_adv_dwelling::ai_value(t_adventure_ai const& arg_0, t_creature_array const& arg_1, int arg_2) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:4264
VA_CHT_1(0x00438f40, 0x4b)
float t_adv_dwelling::ai_activation_value_drop(t_creature_array const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:4265
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_skill_mastery t_adv_dwelling::get_anti_stealth_level() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:4266
VA_CHT_1(0x00438fa0, 0x37)
bool t_adv_dwelling::is_triggered_by(t_creature_array const& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:4267
VA_CHT_1(0x00438fe0, 0x182)
t_random_adv_dwelling::t_random_adv_dwelling(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:4268
VA_CHT_1(0x00439270, 0x94)
bool t_random_adv_dwelling::read_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_progress_handler* arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:4269
VA_CHT_1(0x00439310, 0xb7)
void t_random_adv_dwelling::place(t_adventure_map& arg_0, t_adv_map_point const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:4270
VA_CHT_1(0x004393d0, 0x6d)
bool t_random_adv_dwelling::preplacement(t_adventure_map& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:71167; name:B (dyninit; see ledger)
VA_CHT_1(0x00439520, 0x20)
// adv_dwelling$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:71169; name:B (dyninit; see ledger)
VA_CHT_1(0x00439540, 0x5c)
// adv_dwelling$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:71170
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adv_dwelling$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:71171
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adv_dwelling$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:71172
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adv_dwelling$tatexit4
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:4272
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_scriptable_adv_object::t_owned_scriptable_adv_object(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:4273
VA_CHT_1_COMPGEN(0x00436620, 0x2d, VECTOR_DELETING_DTOR, t_owned_scriptable_adv_object)

// name:A; map symbol; map:4274
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_owned_scriptable_adv_object)

// name:A; map symbol; map:4275
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// public: void t_owned_scriptable_adv_object::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:4276
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_scriptable_adv_object::~t_owned_scriptable_adv_object()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:4277
VA_CHT_1_COMPGEN(0x004366f0, 0x33, SCALAR_DELETING_DTOR, t_adv_dwelling)

// name:A; map symbol; map:4278
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_adv_dwelling)

// name:A; map symbol; map:4279
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// public: void t_adv_dwelling::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:4280
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_dwelling::~t_adv_dwelling()
{
    // Body unavailable.
}

// name:A; map symbol; map:4281
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_creature_type t_adv_dwelling::get_creature_type() const
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:4282
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int to_base_class_map_format_version(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:4283
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int to_base_class_save_format_version(int arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4284
VA_CHT_1(0x00436650, 0xa0)
bool is_ally(t_player const* arg_0, t_player const* arg_1)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4285
VA_CHT_1(0x004362b0, 0x14)
t_material_array const& t_player::get_funds() const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4286
VA_CHT_1(0x00438a30, 0x20)
void t_player::spend(t_material_array const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:4287
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_material_array& t_material_array::operator-=(t_material_array const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:4288
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_recruit_dialog::get_amount() const
{
    // Body unavailable.
}

// name:A; map symbol; map:4289
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_material_array t_recruit_dialog::get_total_cost() const
{
    // Body unavailable.
}

// name:A; map symbol; map:4290
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_material_array operator*(t_material_array arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:4291
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_recruit_dialog>::~t_counted_ptr<t_recruit_dialog>()
{
    // Body unavailable.
}

// name:A; map symbol; map:4292
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_point t_window::to_client(t_screen_point const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:4293
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_player& t_adventure_map::get_local_player() const
{
    // Body unavailable.
}

// name:A; map symbol; map:4294
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adventure_ai::moving_last_army() const
{
    // Body unavailable.
}

// name:A; map symbol; map:4295
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// public: void t_creature::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:4296
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_creature::~t_creature()
{
    // Body unavailable.
}

// name:A; map symbol; map:4297
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_stack_with_backpack::~t_stack_with_backpack()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:4298
VA_CHT_1_COMPGEN(0x00439170, 0x33, SCALAR_DELETING_DTOR, t_random_adv_dwelling)

// name:A; map symbol; map:4299
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_random_adv_dwelling)

// name:A; map symbol; map:4300
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// public: void t_random_adv_dwelling::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:4301
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_random_adv_dwelling::~t_random_adv_dwelling()
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:4302
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int random_to_base_class_map_format_version(int arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:4303
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_adv_dwelling>::~t_counted_ptr<t_adv_dwelling>()
{
    // Body unavailable.
}

// name:A; map symbol; map:4304
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_random_adv_dwelling::get_creature_level() const
{
    // Body unavailable.
}

// name:A; map symbol; map:4323
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_int_array<7>::operator[](int arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:4324
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_int_array<7>& t_int_array<7>::operator-=(t_int_array<7> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:4325
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_int_array<7>& t_int_array<7>::operator*=(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:4326
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_adv_dwelling>::t_counted_ptr<t_adv_dwelling>(t_adv_dwelling* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:4327
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_dwelling* t_counted_ptr<t_adv_dwelling>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:4328
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_dwelling& t_counted_ptr<t_adv_dwelling>::operator*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:4329
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_player& t_shared_ptr<t_player>::operator*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:4330
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_register_with_type<t_adv_dwelling>::t_register_with_type<t_adv_dwelling>(t_adv_object_type arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:4331
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_registration<t_random_adv_dwelling>::t_object_registration<t_random_adv_dwelling>(
    t_adv_object_type arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:4332
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_recruit_dialog>::t_counted_ptr<t_recruit_dialog>()
{
    // Body unavailable.
}

// name:A; map symbol; map:4333
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_recruit_dialog>& t_counted_ptr<t_recruit_dialog>::operator=(t_recruit_dialog* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:4334
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_recruit_dialog* t_counted_ptr<t_recruit_dialog>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:4340
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_factory_with_type<t_adv_dwelling>::t_object_factory_with_type<t_adv_dwelling>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:4341
VA_CHT_1(0x00439440, 0x6a)
t_stationary_adventure_object* t_object_factory_with_type<t_adv_dwelling>::create(
    std::string const& arg_0,
    t_qualified_adv_object_type const& arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:4342
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_factory<t_random_adv_dwelling>::t_object_factory<t_random_adv_dwelling>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:4343
VA_CHT_1(0x004394b0, 0x65)
t_stationary_adventure_object* t_object_factory<t_random_adv_dwelling>::create(
    std::string const& arg_0,
    t_qualified_adv_object_type const& arg_1
) const
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4344
VA_CHT_1_COMPGEN(0x004395a0, 0x8, VECTOR_DELETING_DTOR, t_owned_scriptable_adv_object)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4345
VA_CHT_1_COMPGEN(0x004395b0, 0xe, VECTOR_DELETING_DTOR, t_owned_scriptable_adv_object)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4346
VA_CHT_1(0x004395c0, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::accept`vtordisp{-4, 28}'(t_abstract_adv_object_visitor&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4347
VA_CHT_1(0x004395d0, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::accept`vtordisp{-4, 28}'(t_abstract_adv_object_visitor&)
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4348
VA_CHT_1(0x004395e0, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::animates`vtordisp{-4, 28}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4349
VA_CHT_1(0x004395f0, 0x8)
// [thunk]: public: virtual std::auto_ptr<t_abstract_adv_object> t_adventure_object::clone`adjustor{36}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4350
VA_CHT_1(0x00439600, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_shadow_to`vtordisp{-4, 28}'(unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4351
VA_CHT_1(0x00439610, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_shadow_to`vtordisp{-4, 28}'(unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4352
VA_CHT_1(0x00439620, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_subimage_to`vtordisp{-4, 28}'(int, unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4353
VA_CHT_1(0x00439630, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_subimage_to`vtordisp{-4, 28}'(int, unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&, int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4354
VA_CHT_1(0x00439640, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_to`vtordisp{-4, 28}'(unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4355
VA_CHT_1(0x00439650, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_to`vtordisp{-4, 28}'(unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4356
VA_CHT_1(0x00439660, 0xb)
// [thunk]: public: virtual t_footprint const& t_abstract_stationary_adv_object::get_footprint`vtordisp{-4, 28}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4357
VA_CHT_1(0x00439670, 0xb)
// [thunk]: public: virtual t_player_color t_owned_adv_object::get_player_color`vtordisp{-4, 16}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4358
VA_CHT_1(0x00439680, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_rect`vtordisp{-4, 28}'(unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4359
VA_CHT_1(0x00439690, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_rect`vtordisp{-4, 28}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4360
VA_CHT_1(0x004396a0, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_shadow_rect`vtordisp{-4, 28}'(unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4361
VA_CHT_1(0x004396b0, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_shadow_rect`vtordisp{-4, 28}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4362
VA_CHT_1(0x004396c0, 0xb)
// [thunk]: public: virtual int t_abstract_stationary_adv_object::get_subimage_count`vtordisp{-4, 28}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4363
VA_CHT_1(0x004396d0, 0xb)
// [thunk]: public: virtual int t_stationary_adventure_object::get_subimage_depth_offset`vtordisp{-4, 28}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4364
VA_CHT_1(0x004396e0, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_subimage_rect`vtordisp{-4, 28}'(int, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4365
VA_CHT_1(0x004396f0, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_subimage_rect`vtordisp{-4, 28}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4366
VA_CHT_1(0x00439700, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::hit_test`vtordisp{-4, 28}'(unsigned long, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4367
VA_CHT_1(0x00439710, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::is_decorative`vtordisp{-4, 28}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4368
VA_CHT_1(0x00439720, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::needs_redrawing`vtordisp{-4, 28}'(unsigned long, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4369
VA_CHT_1(0x00439730, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::subimage_animates`vtordisp{-4, 28}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4370
VA_CHT_1(0x00439740, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::subimage_is_underlay`vtordisp{-4, 28}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4371
VA_CHT_1(0x00439750, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::subimage_needs_redrawing`vtordisp{-4, 28}'(int, unsigned long, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4372
VA_CHT_1(0x00439760, 0x8)
// [thunk]: public: virtual bool t_adventure_object::uses_bridge_heights`adjustor{36}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4373
VA_CHT_1(0x00439770, 0xb)
// [thunk]: public: virtual t_adventure_ai const* t_adventure_object::get_ai`vtordisp{-4, 36}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4374
VA_CHT_1(0x00439780, 0xb)
// [thunk]: public: virtual t_adventure_frame* t_adventure_object::get_adventure_frame`vtordisp{-4, 36}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4375
VA_CHT_1(0x00439790, 0xb)
// [thunk]: public: virtual t_adventure_object* t_adventure_object::get_adventure_object`vtordisp{-4, 36}'(void)
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4376
VA_CHT_1(0x004397a0, 0xb)
// [thunk]: public: virtual t_adventure_map* t_adventure_object::get_map`vtordisp{-4, 36}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4377
VA_CHT_1(0x004397b0, 0xb)
// [thunk]: public: virtual int t_owned_adv_object::get_owner_number`vtordisp{-4, 16}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4378
VA_CHT_1(0x004397c0, 0xb)
// [thunk]: public: virtual t_adv_map_point t_adventure_object::get_position`vtordisp{-4, 36}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4379
VA_CHT_1_COMPGEN(0x004397d0, 0x8, VECTOR_DELETING_DTOR, t_random_adv_dwelling)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4380
VA_CHT_1_COMPGEN(0x004397e0, 0xb, VECTOR_DELETING_DTOR, t_random_adv_dwelling)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4381
VA_CHT_1(0x004397f0, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::accept`vtordisp{-4, 60}'(t_abstract_adv_object_visitor&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4382
VA_CHT_1(0x00439800, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::accept`vtordisp{-4, 60}'(t_abstract_adv_object_visitor&)
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4383
VA_CHT_1(0x00439810, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::animates`vtordisp{-4, 60}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4384
VA_CHT_1(0x00439820, 0x8)
// [thunk]: public: virtual std::auto_ptr<t_abstract_adv_object> t_adventure_object::clone`adjustor{68}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4385
VA_CHT_1(0x00439830, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_shadow_to`vtordisp{-4, 60}'(unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4386
VA_CHT_1(0x00439840, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_shadow_to`vtordisp{-4, 60}'(unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4387
VA_CHT_1(0x00439850, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_subimage_to`vtordisp{-4, 60}'(int, unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4388
VA_CHT_1(0x00439860, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_subimage_to`vtordisp{-4, 60}'(int, unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&, int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4389
VA_CHT_1(0x00439870, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_to`vtordisp{-4, 60}'(unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4390
VA_CHT_1(0x00439880, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_to`vtordisp{-4, 60}'(unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4391
VA_CHT_1(0x00439890, 0xb)
// [thunk]: public: virtual t_footprint const& t_abstract_stationary_adv_object::get_footprint`vtordisp{-4, 60}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4392
VA_CHT_1(0x004398a0, 0xb)
// [thunk]: public: virtual t_player_color t_owned_adv_object::get_player_color`vtordisp{-4, 48}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4393
VA_CHT_1(0x004398b0, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_rect`vtordisp{-4, 60}'(unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4394
VA_CHT_1(0x004398c0, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_rect`vtordisp{-4, 60}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4395
VA_CHT_1(0x004398d0, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_shadow_rect`vtordisp{-4, 60}'(unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4396
VA_CHT_1(0x004398e0, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_shadow_rect`vtordisp{-4, 60}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4397
VA_CHT_1(0x004398f0, 0xb)
// [thunk]: public: virtual int t_abstract_stationary_adv_object::get_subimage_count`vtordisp{-4, 60}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4398
VA_CHT_1(0x00439900, 0xb)
// [thunk]: public: virtual int t_stationary_adventure_object::get_subimage_depth_offset`vtordisp{-4, 60}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4399
VA_CHT_1(0x00439910, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_subimage_rect`vtordisp{-4, 60}'(int, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4400
VA_CHT_1(0x00439920, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_subimage_rect`vtordisp{-4, 60}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4401
VA_CHT_1(0x00439930, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::hit_test`vtordisp{-4, 60}'(unsigned long, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4402
VA_CHT_1(0x00439940, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::is_decorative`vtordisp{-4, 60}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4403
VA_CHT_1(0x00439950, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::needs_redrawing`vtordisp{-4, 60}'(unsigned long, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4404
VA_CHT_1(0x00439960, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::subimage_animates`vtordisp{-4, 60}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4405
VA_CHT_1(0x00439970, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::subimage_is_underlay`vtordisp{-4, 60}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4406
VA_CHT_1(0x00439980, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::subimage_needs_redrawing`vtordisp{-4, 60}'(int, unsigned long, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4407
VA_CHT_1(0x00439990, 0x8)
// [thunk]: public: virtual bool t_adventure_object::uses_bridge_heights`adjustor{68}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4408
VA_CHT_1(0x004399a0, 0xb)
// [thunk]: public: virtual t_adventure_ai const* t_adventure_object::get_ai`vtordisp{-4, 68}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4409
VA_CHT_1(0x004399b0, 0xb)
// [thunk]: public: virtual t_adventure_frame* t_adventure_object::get_adventure_frame`vtordisp{-4, 68}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4410
VA_CHT_1(0x004399c0, 0xb)
// [thunk]: public: virtual t_adventure_object* t_adventure_object::get_adventure_object`vtordisp{-4, 68}'(void)
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4411
VA_CHT_1(0x004399d0, 0xb)
// [thunk]: public: virtual t_adventure_map* t_adventure_object::get_map`vtordisp{-4, 68}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4412
VA_CHT_1(0x004399e0, 0xb)
// [thunk]: public: virtual int t_owned_adv_object::get_owner_number`vtordisp{-4, 48}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4413
VA_CHT_1(0x004399f0, 0xb)
// [thunk]: public: virtual t_adv_map_point t_adventure_object::get_position`vtordisp{-4, 68}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4414
VA_CHT_1_COMPGEN(0x00439a00, 0x8, VECTOR_DELETING_DTOR, t_adv_dwelling)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4415
VA_CHT_1_COMPGEN(0x00439a10, 0x8, VECTOR_DELETING_DTOR, t_adv_dwelling)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4416
VA_CHT_1_COMPGEN(0x00439a20, 0xe, VECTOR_DELETING_DTOR, t_adv_dwelling)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4417
VA_CHT_1(0x00439a30, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::accept`vtordisp{-4, 120}'(t_abstract_adv_object_visitor&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4418
VA_CHT_1(0x00439a40, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::accept`vtordisp{-4, 120}'(t_abstract_adv_object_visitor&)
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4419
VA_CHT_1(0x00439a50, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::animates`vtordisp{-4, 120}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4420
VA_CHT_1(0x00439a60, 0xb)
// [thunk]: public: virtual std::auto_ptr<t_abstract_adv_object> t_adventure_object::clone`adjustor{128}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4421
VA_CHT_1(0x00439a70, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_shadow_to`vtordisp{-4, 120}'(unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4422
VA_CHT_1(0x00439a80, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_shadow_to`vtordisp{-4, 120}'(unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4423
VA_CHT_1(0x00439a90, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_subimage_to`vtordisp{-4, 120}'(int, unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4424
VA_CHT_1(0x00439aa0, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_subimage_to`vtordisp{-4, 120}'(int, unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&, int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4425
VA_CHT_1(0x00439ab0, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_to`vtordisp{-4, 120}'(unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4426
VA_CHT_1(0x00439ac0, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_to`vtordisp{-4, 120}'(unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4427
VA_CHT_1(0x00439ad0, 0xb)
// [thunk]: public: virtual t_footprint const& t_abstract_stationary_adv_object::get_footprint`vtordisp{-4, 120}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4428
VA_CHT_1(0x00439ae0, 0xb)
// [thunk]: public: virtual t_player_color t_owned_adv_object::get_player_color`vtordisp{-4, 108}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4429
VA_CHT_1(0x00439af0, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_rect`vtordisp{-4, 120}'(unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4430
VA_CHT_1(0x00439b00, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_rect`vtordisp{-4, 120}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4431
VA_CHT_1(0x00439b10, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_shadow_rect`vtordisp{-4, 120}'(unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4432
VA_CHT_1(0x00439b20, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_shadow_rect`vtordisp{-4, 120}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4433
VA_CHT_1(0x00439b30, 0xb)
// [thunk]: public: virtual int t_abstract_stationary_adv_object::get_subimage_count`vtordisp{-4, 120}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4434
VA_CHT_1(0x00439b40, 0xb)
// [thunk]: public: virtual int t_stationary_adventure_object::get_subimage_depth_offset`vtordisp{-4, 120}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4435
VA_CHT_1(0x00439b50, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_subimage_rect`vtordisp{-4, 120}'(int, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4436
VA_CHT_1(0x00439b60, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_subimage_rect`vtordisp{-4, 120}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4437
VA_CHT_1(0x00439b70, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::hit_test`vtordisp{-4, 120}'(unsigned long, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4438
VA_CHT_1(0x00439b80, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::is_decorative`vtordisp{-4, 120}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4439
VA_CHT_1(0x00439b90, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::needs_redrawing`vtordisp{-4, 120}'(unsigned long, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4440
VA_CHT_1(0x00439ba0, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::subimage_animates`vtordisp{-4, 120}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4441
VA_CHT_1(0x00439bb0, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::subimage_is_underlay`vtordisp{-4, 120}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4442
VA_CHT_1(0x00439bc0, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::subimage_needs_redrawing`vtordisp{-4, 120}'(int, unsigned long, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4443
VA_CHT_1(0x00439bd0, 0xb)
// [thunk]: public: virtual bool t_adventure_object::uses_bridge_heights`adjustor{128}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4444
VA_CHT_1(0x00439be0, 0xe)
// [thunk]: public: virtual t_adventure_ai const* t_adventure_object::get_ai`vtordisp{-4, 128}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4445
VA_CHT_1(0x00439bf0, 0xe)
// [thunk]: public: virtual t_adventure_frame* t_adventure_object::get_adventure_frame`vtordisp{-4, 128}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4446
VA_CHT_1(0x00439c00, 0xe)
// [thunk]: public: virtual t_adventure_object* t_adventure_object::get_adventure_object`vtordisp{-4, 128}'(void)
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4447
VA_CHT_1(0x00439c10, 0x8)
// [thunk]: public: virtual t_creature_array* t_creature_array::get_creature_array`adjustor{28}'(void)
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4448
VA_CHT_1(0x00439c20, 0xe)
// [thunk]: public: virtual t_adventure_map* t_adventure_object::get_map`vtordisp{-4, 128}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4449
VA_CHT_1(0x00439c30, 0xb)
// [thunk]: public: virtual int t_owned_adv_object::get_owner_number`vtordisp{-4, 108}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:4450
VA_CHT_1(0x00439c40, 0xe)
// [thunk]: public: virtual t_adv_map_point t_adventure_object::get_position`vtordisp{-4, 128}'(void) const
// Function body not reconstructed; signature retained as a comment.

// === .rdata (25 symbols) ===

// name:A; map symbol; map:42777
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_dwelling::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:42778
DATA_CHT_1_COMPGEN(0x008ceadc, "const t_adv_dwelling::`vftable'")

// confidence:B; rtti-order; map:42779
DATA_CHT_1_COMPGEN(0x008ceb9c, "const t_adv_dwelling::`vftable'{for `t_creature_array'}")

// confidence:B; rtti-order; map:42780
DATA_CHT_1_COMPGEN(0x008cebd0, "const t_adv_dwelling::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:42781
DATA_CHT_1_COMPGEN(0x008cebdc, "const t_adv_dwelling::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:42782
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_dwelling::`vbtable'")

// name:A; map symbol; map:42783
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_dwelling::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:42784
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_dwelling::`vbtable'{for `t_abstract_stationary_adv_object'}")

// name:A; map symbol; map:42785
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_owned_scriptable_adv_object::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:42786
DATA_CHT_1_COMPGEN(0x008cec9c, "const t_owned_scriptable_adv_object::`vftable'")

// confidence:B; rtti-order; map:42787
DATA_CHT_1_COMPGEN(0x008ced5c, "const t_owned_scriptable_adv_object::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:42788
DATA_CHT_1_COMPGEN(0x008ced64, "const t_owned_scriptable_adv_object::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:42789
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_owned_scriptable_adv_object::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:42790
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_owned_scriptable_adv_object::`vbtable'{for `t_abstract_stationary_adv_object'}")

// name:A; map symbol; map:42791
DATA_CHT_1(UNACCOUNTED)
// __real@4@3ffacccccd0000000000

// name:A; map symbol; map:42792
DATA_CHT_1(UNACCOUNTED)
// __real@4@40018000000000000000

// name:A; map symbol; map:42793
DATA_CHT_1(UNACCOUNTED)
// __real@4@3ffef333330000000000

// name:A; map symbol; map:42794
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_random_adv_dwelling::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:42795
DATA_CHT_1_COMPGEN(0x008cee64, "const t_random_adv_dwelling::`vftable'")

// confidence:B; rtti-order; map:42796
DATA_CHT_1_COMPGEN(0x008cef24, "const t_random_adv_dwelling::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:42797
DATA_CHT_1_COMPGEN(0x008cef2c, "const t_random_adv_dwelling::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:42798
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_random_adv_dwelling::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:42799
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_random_adv_dwelling::`vbtable'{for `t_abstract_stationary_adv_object'}")

// confidence:A; rtti-name; map:42800
DATA_CHT_1_COMPGEN(0x008ceac8, "const t_object_factory_with_type<t_adv_dwelling>::`vftable'")

// confidence:A; rtti-name; map:42801
DATA_CHT_1_COMPGEN(0x008cead0, "const t_object_factory<t_random_adv_dwelling>::`vftable'")

// === .rdata$r (32 symbols) ===

// name:A; map symbol; map:47954
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_dwelling::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_adv_dwelling@@;vft=4ceadc;col=4f6fe4;td=5886e4;chd=4f6fd4;offset=204;cdOffset=0;validated-hierarchy; map:47955
DATA_CHT_1_COMPGEN(0x008f6fe4, "const t_adv_dwelling::`RTTI Complete Object Locator'")

// name:A; map symbol; map:47956
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_dwelling::`RTTI Complete Object Locator'{for `t_creature_array'}")

// name:A; map symbol; map:47957
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_dwelling::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_uncopyable@@;bcd=4f6f38;pmd=108,-1,0;attributes=9;validated-hierarchy-link; map:47958
DATA_CHT_1_COMPGEN(0x008f6f38, "t_uncopyable::`RTTI Base Class Descriptor at (108, -1, 0, 9)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_creature_array@@;bcd=4f6f50;pmd=100,-1,0;attributes=0;validated-hierarchy-link; map:47959
DATA_CHT_1_COMPGEN(0x008f6f50, "t_creature_array::`RTTI Base Class Descriptor at (100, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_owned_scriptable_adv_object@@;bcd=4f6f68;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47960
DATA_CHT_1_COMPGEN(0x008f6f68, "t_owned_scriptable_adv_object::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adv_dwelling@@;bcd=4f6f80;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47961
DATA_CHT_1_COMPGEN(0x008f6f80, "t_adv_dwelling::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adv_dwelling@@;vft=4ceadc;col=4f6fe4;td=5886e4;chd=4f6fd4;offset=204;cdOffset=0;validated-hierarchy; map:47962
DATA_CHT_1_COMPGEN(0x008f6f98, "t_adv_dwelling::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adv_dwelling@@;vft=4ceadc;col=4f6fe4;td=5886e4;chd=4f6fd4;offset=204;cdOffset=0;validated-hierarchy; map:47963
DATA_CHT_1_COMPGEN(0x008f6fd4, "t_adv_dwelling::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:47964
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_dwelling::`RTTI Complete Object Locator'{for `t_counted_object'}")

// name:A; map symbol; map:47965
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_owned_scriptable_adv_object::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_owned_scriptable_adv_object@@;vft=4cec9c;col=4f6ed4;td=5886b8;chd=4f6ec4;offset=112;cdOffset=0;validated-hierarchy; map:47966
DATA_CHT_1_COMPGEN(0x008f6ed4, "const t_owned_scriptable_adv_object::`RTTI Complete Object Locator'")

// name:A; map symbol; map:47967
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_owned_scriptable_adv_object::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_owned_scriptable_adv_object@@;vft=4cec9c;col=4f6ed4;td=5886b8;chd=4f6ec4;offset=112;cdOffset=0;validated-hierarchy; map:47968
DATA_CHT_1_COMPGEN(0x008f6e98, "t_owned_scriptable_adv_object::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_owned_scriptable_adv_object@@;vft=4cec9c;col=4f6ed4;td=5886b8;chd=4f6ec4;offset=112;cdOffset=0;validated-hierarchy; map:47969
DATA_CHT_1_COMPGEN(0x008f6ec4, "t_owned_scriptable_adv_object::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:47970
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_owned_scriptable_adv_object::`RTTI Complete Object Locator'{for `t_counted_object'}")

// name:A; map symbol; map:47971
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_random_adv_dwelling::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_random_adv_dwelling@@;vft=4cee64;col=4f708c;td=58876c;chd=4f707c;offset=144;cdOffset=0;validated-hierarchy; map:47972
DATA_CHT_1_COMPGEN(0x008f708c, "const t_random_adv_dwelling::`RTTI Complete Object Locator'")

// name:A; map symbol; map:47973
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_random_adv_dwelling::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_random_adv_dwelling@@;bcd=4f7034;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47974
DATA_CHT_1_COMPGEN(0x008f7034, "t_random_adv_dwelling::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_random_adv_dwelling@@;vft=4cee64;col=4f708c;td=58876c;chd=4f707c;offset=144;cdOffset=0;validated-hierarchy; map:47975
DATA_CHT_1_COMPGEN(0x008f704c, "t_random_adv_dwelling::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_random_adv_dwelling@@;vft=4cee64;col=4f708c;td=58876c;chd=4f707c;offset=144;cdOffset=0;validated-hierarchy; map:47976
DATA_CHT_1_COMPGEN(0x008f707c, "t_random_adv_dwelling::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:47977
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_random_adv_dwelling::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_object_factory_with_type@Vt_adv_dwelling@@@@;bcd=4f6dcc;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47978
DATA_CHT_1_COMPGEN(0x008f6dcc, "t_object_factory_with_type<t_adv_dwelling>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_object_factory_with_type@Vt_adv_dwelling@@@@;vft=4ceac8;col=4f6e00;td=588624;chd=4f6df0;offset=0;cdOffset=0;validated-hierarchy; map:47979
DATA_CHT_1_COMPGEN(0x008f6de4, "t_object_factory_with_type<t_adv_dwelling>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_object_factory_with_type@Vt_adv_dwelling@@@@;vft=4ceac8;col=4f6e00;td=588624;chd=4f6df0;offset=0;cdOffset=0;validated-hierarchy; map:47980
DATA_CHT_1_COMPGEN(0x008f6df0, "t_object_factory_with_type<t_adv_dwelling>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_object_factory_with_type@Vt_adv_dwelling@@@@;vft=4ceac8;col=4f6e00;td=588624;chd=4f6df0;offset=0;cdOffset=0;validated-hierarchy; map:47981
DATA_CHT_1_COMPGEN(0x008f6e00, "const t_object_factory_with_type<t_adv_dwelling>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_object_factory@Vt_random_adv_dwelling@@@@;bcd=4f6e14;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47982
DATA_CHT_1_COMPGEN(0x008f6e14, "t_object_factory<t_random_adv_dwelling>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_object_factory@Vt_random_adv_dwelling@@@@;vft=4cead0;col=4f6e48;td=588664;chd=4f6e38;offset=0;cdOffset=0;validated-hierarchy; map:47983
DATA_CHT_1_COMPGEN(0x008f6e2c, "t_object_factory<t_random_adv_dwelling>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_object_factory@Vt_random_adv_dwelling@@@@;vft=4cead0;col=4f6e48;td=588664;chd=4f6e38;offset=0;cdOffset=0;validated-hierarchy; map:47984
DATA_CHT_1_COMPGEN(0x008f6e38, "t_object_factory<t_random_adv_dwelling>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_object_factory@Vt_random_adv_dwelling@@@@;vft=4cead0;col=4f6e48;td=588664;chd=4f6e38;offset=0;cdOffset=0;validated-hierarchy; map:47985
DATA_CHT_1_COMPGEN(0x008f6e48, "const t_object_factory<t_random_adv_dwelling>::`RTTI Complete Object Locator'")

// === .data (5 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_owned_scriptable_adv_object@@;td=5886b8;validated-header; map:57472
DATA_CHT_1_COMPGEN(0x009886b8, "t_owned_scriptable_adv_object `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_adv_dwelling@@;td=5886e4;validated-header; map:57473
DATA_CHT_1_COMPGEN(0x009886e4, "t_adv_dwelling `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_random_adv_dwelling@@;td=58876c;validated-header; map:57474
DATA_CHT_1_COMPGEN(0x0098876c, "t_random_adv_dwelling `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_object_factory_with_type@Vt_adv_dwelling@@@@;td=588624;validated-header; map:57475
DATA_CHT_1_COMPGEN(0x00988624, "t_object_factory_with_type<t_adv_dwelling> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_object_factory@Vt_random_adv_dwelling@@@@;td=588664;validated-header; map:57476
DATA_CHT_1_COMPGEN(0x00988664, "t_object_factory<t_random_adv_dwelling> `RTTI Type Descriptor'")

// === .bss (2 symbols) ===

namespace {

// confidence:B; dyninit-global; owner-conf-B; map:59948
DATA_CHT_1(0x009c73cc)
t_object_registration<t_random_adv_dwelling> g_random_dwelling_registration; // Initial value unavailable.

// confidence:B; dyninit-global; owner-conf-B; map:59949
DATA_CHT_1(0x009c73d0)
t_register_with_type<t_adv_dwelling> g_dwelling_registration; // Initial value unavailable.

} // anonymous namespace
