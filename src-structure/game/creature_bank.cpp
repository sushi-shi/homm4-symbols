// creature_bank.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\creature_bank.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 75/109 (A:12 B:4 C:0); unaccounted 34; skipped std 28.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (84 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66988; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0060fd00, 0x15, STATIC_INIT_DISPATCH, "creature_bank#1")

// name:C; dyninit; see ledger; map:66989
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "creature_bank#1")

// confidence:D; dyninit-init; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:66990; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0060fd20, 0x1c, STATIC_INIT_DISPATCH, registration)

// name:B; dyninit; see ledger; map:66991
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, registration)

namespace {

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23204
VA_CHT_1(0x0060fd40, 0x460)
t_bank_traits_table::t_bank_traits_table()
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:23205
VA_CHT_1(0x00610240, 0x239)
t_creature_bank::t_creature_bank(t_stationary_adventure_object const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:66992
VA_CHT_1(0x00610490, 0x13)
static t_bank_traits const& get_traits(t_creature_bank_type arg_0)
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:66993
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// get_traits$sdtor
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:23206
VA_CHT_1(0x006105f0, 0x855)
void t_creature_bank::activate_trigger(
    t_army* arg_0,
    t_adv_map_point const& arg_1,
    t_direction arg_2,
    t_adventure_frame* arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:23207
VA_CHT_1(0x00610e50, 0x44c)
void t_creature_bank::on_combat_end(
    t_army* arg_0,
    t_combat_result arg_1,
    t_creature_array* arg_2,
    t_adventure_frame* arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:23208
VA_CHT_1(0x006112a0, 0x11b)
void t_creature_bank::initialize(t_adventure_map& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:23209
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_creature_bank::preplacement(t_adventure_map& arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:23210
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_creature_bank::read_postplacement(t_adventure_map& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:23211
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_creature_bank::reset()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:23212
VA_CHT_1(0x006113c0, 0x33)
void t_creature_bank::process_new_day()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:23213
VA_CHT_1(0x00611400, 0x4fa)
void t_creature_bank::right_click(t_mouse_event const& arg_0, t_adventure_frame* arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23214
VA_CHT_1(0x00611900, 0xe7)
t_reward_artifact_type get_artifact_type(t_artifact const& arg_0, bool arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23215
VA_CHT_1(0x00611a20, 0x205)
int t_creature_bank::create_artifacts(int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23216
VA_CHT_1(0x00611c30, 0xbb3)
void t_creature_bank::create_artifacts(int* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23217
VA_CHT_1(0x00612820, 0x13f)
void t_creature_bank::add_value(int arg_0, t_adventure_map& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23218
VA_CHT_1(0x00612960, 0x1ea)
void t_creature_bank::set_reward()
{
    // Body unavailable.
}

// name:A; map symbol; map:23219
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_creature_bank::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:23220
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_creature_bank::get_version() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:23221
VA_CHT_1(0x00612da0, 0x412)
bool t_creature_bank::read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_qualified_adv_object_type const& arg_1,
    int arg_2
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:23222
VA_CHT_1(0x006131c0, 0x1cc)
float t_creature_bank::ai_value(t_adventure_ai const& arg_0, t_creature_array const& arg_1, int arg_2) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:23223
VA_CHT_1(0x00613390, 0x103)
float t_creature_bank::ai_activation_value_drop(t_creature_array const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:23224
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_skill_mastery t_creature_bank::get_anti_stealth_level() const
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:66994; name:B (dyninit; see ledger)
VA_CHT_1(0x006135f0, 0x20)
// creature_bank$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:66996; name:B (dyninit; see ledger)
VA_CHT_1(0x00613610, 0x5c)
// creature_bank$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:66997
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// creature_bank$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:66998
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// creature_bank$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:66999
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// creature_bank$tatexit4
// Function body not reconstructed; signature retained as a comment.

namespace {

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23225
VA_CHT_1(0x006104f0, 0xf7)
t_bank_traits::t_bank_traits()
{
    // Body unavailable.
}

// name:A; map symbol; map:23226
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bank_traits::~t_bank_traits()
{
    // Body unavailable.
}

// name:A; map symbol; map:23227
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bank_traits const& t_bank_traits_table::operator[](t_creature_bank_type arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:23228
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bank_traits_table::~t_bank_traits_table()
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:23229
VA_CHT_1_COMPGEN(0x006104b0, 0x33, VECTOR_DELETING_DTOR, t_creature_bank)

// name:A; map symbol; map:23230
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_creature_bank)

// name:A; map symbol; map:23231
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// public: void t_creature_bank::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:23232
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_creature_bank::~t_creature_bank()
{
    // Body unavailable.
}

// name:A; map symbol; map:23233
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_player::gain(t_material_array const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:23234
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_artifact_level t_artifact::get_level() const
{
    // Body unavailable.
}

// name:A; map symbol; map:23256
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_artifact_effect& t_counted_ptr<t_artifact_effect>::operator*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:23257
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_registration<t_creature_bank>::t_object_registration<t_creature_bank>(t_adv_object_type arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23258
VA_CHT_1(0x006101f0, 0x42)
void put(std::basic_streambuf<char, std::char_traits<char>>& arg_0, t_creature_bank_type const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:23259
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_creature_bank_type get(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:23260
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_creature_pair get(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:23267
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_factory<t_creature_bank>::t_object_factory<t_creature_bank>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:23268
VA_CHT_1(0x006134a0, 0x14d)
t_stationary_adventure_object* t_object_factory<t_creature_bank>::create(
    std::string const& arg_0,
    t_qualified_adv_object_type const& arg_1
) const
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23269
VA_CHT_1_COMPGEN(0x00613670, 0x8, VECTOR_DELETING_DTOR, t_creature_bank)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23270
VA_CHT_1_COMPGEN(0x00613680, 0x8, VECTOR_DELETING_DTOR, t_creature_bank)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23271
VA_CHT_1_COMPGEN(0x00613690, 0xe, VECTOR_DELETING_DTOR, t_creature_bank)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23272
VA_CHT_1(0x006136a0, 0xe)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::accept`vtordisp{-4, 160}'(t_abstract_adv_object_visitor&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23273
VA_CHT_1(0x006136b0, 0xe)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::accept`vtordisp{-4, 160}'(t_abstract_adv_object_visitor&)
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23274
VA_CHT_1(0x006136c0, 0xe)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::animates`vtordisp{-4, 160}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23275
VA_CHT_1(0x006136d0, 0xb)
// [thunk]: public: virtual std::auto_ptr<t_abstract_adv_object> t_adventure_object::clone`adjustor{168}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23276
VA_CHT_1(0x006136e0, 0xe)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_shadow_to`vtordisp{-4, 160}'(unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23277
VA_CHT_1(0x006136f0, 0xe)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_shadow_to`vtordisp{-4, 160}'(unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23278
VA_CHT_1(0x00613700, 0xe)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_subimage_to`vtordisp{-4, 160}'(int, unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23279
VA_CHT_1(0x00613710, 0xe)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_subimage_to`vtordisp{-4, 160}'(int, unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&, int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23280
VA_CHT_1(0x00613720, 0xe)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_to`vtordisp{-4, 160}'(unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23281
VA_CHT_1(0x00613730, 0xe)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_to`vtordisp{-4, 160}'(unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23282
VA_CHT_1(0x00613740, 0xe)
// [thunk]: public: virtual t_footprint const& t_abstract_stationary_adv_object::get_footprint`vtordisp{-4, 160}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23283
VA_CHT_1(0x00613750, 0xe)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_rect`vtordisp{-4, 160}'(unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23284
VA_CHT_1(0x00613760, 0xe)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_rect`vtordisp{-4, 160}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23285
VA_CHT_1(0x00613770, 0xe)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_shadow_rect`vtordisp{-4, 160}'(unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23286
VA_CHT_1(0x00613780, 0xe)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_shadow_rect`vtordisp{-4, 160}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23287
VA_CHT_1(0x00613790, 0xe)
// [thunk]: public: virtual int t_abstract_stationary_adv_object::get_subimage_count`vtordisp{-4, 160}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23288
VA_CHT_1(0x006137a0, 0xe)
// [thunk]: public: virtual int t_stationary_adventure_object::get_subimage_depth_offset`vtordisp{-4, 160}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23289
VA_CHT_1(0x006137b0, 0xe)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_subimage_rect`vtordisp{-4, 160}'(int, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23290
VA_CHT_1(0x006137c0, 0xe)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_subimage_rect`vtordisp{-4, 160}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23291
VA_CHT_1(0x006137d0, 0xe)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::hit_test`vtordisp{-4, 160}'(unsigned long, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23292
VA_CHT_1(0x006137e0, 0xe)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::is_decorative`vtordisp{-4, 160}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23293
VA_CHT_1(0x006137f0, 0xe)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::needs_redrawing`vtordisp{-4, 160}'(unsigned long, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23294
VA_CHT_1(0x00613800, 0xe)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::subimage_animates`vtordisp{-4, 160}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23295
VA_CHT_1(0x00613810, 0xe)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::subimage_is_underlay`vtordisp{-4, 160}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23296
VA_CHT_1(0x00613820, 0xe)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::subimage_needs_redrawing`vtordisp{-4, 160}'(int, unsigned long, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23297
VA_CHT_1(0x00613830, 0xb)
// [thunk]: public: virtual bool t_adventure_object::uses_bridge_heights`adjustor{168}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23298
VA_CHT_1(0x00613840, 0xe)
// [thunk]: public: virtual t_adventure_ai const* t_adventure_object::get_ai`vtordisp{-4, 168}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23299
VA_CHT_1(0x00613850, 0xe)
// [thunk]: public: virtual t_adventure_frame* t_adventure_object::get_adventure_frame`vtordisp{-4, 168}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23300
VA_CHT_1(0x00613860, 0xe)
// [thunk]: public: virtual t_adventure_object* t_adventure_object::get_adventure_object`vtordisp{-4, 168}'(void)
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23301
VA_CHT_1(0x00613870, 0x8)
// [thunk]: public: virtual t_creature_array* t_creature_array::get_creature_array`adjustor{96}'(void)
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23302
VA_CHT_1(0x00613880, 0xe)
// [thunk]: public: virtual t_adventure_map* t_adventure_object::get_map`vtordisp{-4, 168}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23303
VA_CHT_1(0x00613890, 0xe)
// [thunk]: public: virtual t_adv_map_point t_adventure_object::get_position`vtordisp{-4, 168}'(void) const
// Function body not reconstructed; signature retained as a comment.

// === .rdata (10 symbols) ===

// name:A; map symbol; map:44176
DATA_CHT_1(UNACCOUNTED)
// __real@8@40078000000000000000

// name:A; map symbol; map:44177
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_creature_bank::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:44178
DATA_CHT_1_COMPGEN(0x008de98c, "const t_creature_bank::`vftable'")

// confidence:B; rtti-order; map:44179
DATA_CHT_1_COMPGEN(0x008dea4c, "const t_creature_bank::`vftable'{for `t_creature_array'}")

// confidence:B; rtti-order; map:44180
DATA_CHT_1_COMPGEN(0x008dea80, "const t_creature_bank::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:44181
DATA_CHT_1_COMPGEN(0x008dea8c, "const t_creature_bank::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:44182
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_creature_bank::`vbtable'")

// name:A; map symbol; map:44183
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_creature_bank::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:44184
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_creature_bank::`vbtable'{for `t_abstract_stationary_adv_object'}")

// confidence:A; rtti-name; map:44185
DATA_CHT_1_COMPGEN(0x008de978, "const t_object_factory<t_creature_bank>::`vftable'")

// === .rdata$r (12 symbols) ===

// name:A; map symbol; map:51569
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_creature_bank::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_creature_bank@@;vft=4de98c;col=507b10;td=59dec0;chd=507b00;offset=244;cdOffset=0;validated-hierarchy; map:51570
DATA_CHT_1_COMPGEN(0x00907b10, "const t_creature_bank::`RTTI Complete Object Locator'")

// name:A; map symbol; map:51571
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_creature_bank::`RTTI Complete Object Locator'{for `t_creature_array'}")

// name:A; map symbol; map:51572
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_creature_bank::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_creature_bank@@;bcd=507ab4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:51573
DATA_CHT_1_COMPGEN(0x00907ab4, "t_creature_bank::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_creature_bank@@;vft=4de98c;col=507b10;td=59dec0;chd=507b00;offset=244;cdOffset=0;validated-hierarchy; map:51574
DATA_CHT_1_COMPGEN(0x00907acc, "t_creature_bank::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_creature_bank@@;vft=4de98c;col=507b10;td=59dec0;chd=507b00;offset=244;cdOffset=0;validated-hierarchy; map:51575
DATA_CHT_1_COMPGEN(0x00907b00, "t_creature_bank::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:51576
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_creature_bank::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_object_factory@Vt_creature_bank@@@@;bcd=507a1c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:51577
DATA_CHT_1_COMPGEN(0x00907a1c, "t_object_factory<t_creature_bank>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_object_factory@Vt_creature_bank@@@@;vft=4de978;col=507a50;td=59de7c;chd=507a40;offset=0;cdOffset=0;validated-hierarchy; map:51578
DATA_CHT_1_COMPGEN(0x00907a34, "t_object_factory<t_creature_bank>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_object_factory@Vt_creature_bank@@@@;vft=4de978;col=507a50;td=59de7c;chd=507a40;offset=0;cdOffset=0;validated-hierarchy; map:51579
DATA_CHT_1_COMPGEN(0x00907a40, "t_object_factory<t_creature_bank>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_object_factory@Vt_creature_bank@@@@;vft=4de978;col=507a50;td=59de7c;chd=507a40;offset=0;cdOffset=0;validated-hierarchy; map:51580
DATA_CHT_1_COMPGEN(0x00907a50, "const t_object_factory<t_creature_bank>::`RTTI Complete Object Locator'")

// === .data (2 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_creature_bank@@;td=59dec0;validated-header; map:58396
DATA_CHT_1_COMPGEN(0x0099dec0, "t_creature_bank `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_object_factory@Vt_creature_bank@@@@;td=59de7c;validated-header; map:58397
DATA_CHT_1_COMPGEN(0x0099de7c, "t_object_factory<t_creature_bank> `RTTI Type Descriptor'")

// === .bss (1 symbols) ===

namespace {

// confidence:B; dyninit-global; owner-conf-B; map:60186
DATA_CHT_1(0x009e580c)
t_object_registration<t_creature_bank> registration; // Initial value unavailable.

} // anonymous namespace
