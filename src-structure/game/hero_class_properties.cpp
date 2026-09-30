// hero_class_properties.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\hero_class_properties.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 24/39 (A:3 B:4 C:17); unaccounted 15; skipped std 48.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (37 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:65249; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006c7400, 0x24, STATIC_INIT_DISPATCH, k_class_properties)

// confidence:A; align-order; atexit,stable; map:65250; name:C (dyninit; see ledger)
VA_CHT_1(0x006c7430, 0x37)
// k_class_properties$ctor
// Function body not reconstructed; signature retained as a comment.

// name:C; dyninit; see ledger; map:65251
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, k_class_properties)

// confidence:B; dyninit-dtor; owner-conf-C; map:65252; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006c7470, 0x14, STATIC_DTOR, k_class_properties)

namespace {

// confidence:B; align-order; retn,stable; map:27267
VA_CHT_1(0x006c7510, 0x2a4)
t_class_properties::t_class_properties(t_class_data const& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:27268
VA_CHT_1(0x006c77c0, 0x241)
t_hero_class_keyword_list::t_hero_class_keyword_list()
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:C; align-order; retn,stable; map:27269
VA_CHT_1(0x006c7a10, 0xe6)
t_hero_class get_hero_class(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:65253
VA_CHT_1(0x006c7b00, 0x9f)
static t_enum_map<t_hero_class> const& get_map()
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:65254
VA_CHT_1(0x006c7bb0, 0xa)
static t_hero_class_keyword_list const& get_keyword_list()
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:65255
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// get_keyword_list$sdtor1
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:65256
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// get_keyword_list$sdtor2
// Function body not reconstructed; signature retained as a comment.

namespace {

// confidence:C; align-order; retn,stable; map:27270
VA_CHT_1(0x006c7bc0, 0x2fb)
t_skill_weight_table::t_skill_weight_table()
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:C; align-order; retn,stable; map:27271
VA_CHT_1(0x006c7ec0, 0xcc)
void get_hero_hiring_cost(t_town_type arg_0, int* const arg_1)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:65257
VA_CHT_1(0x006c7fa0, 0x242)
static void set_data()
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:27272
VA_CHT_1(0x006c81f0, 0x1a)
t_town_type get_alignment(t_hero_class arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:27273
VA_CHT_1(0x006c8210, 0x1a)
std::vector<t_skill, std::allocator<t_skill>> const& get_starting_skills(t_hero_class arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:27274
VA_CHT_1(0x006c8410, 0x1b8)
std::string get_class_name(t_hero_class arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:27275
VA_CHT_1(0x006c85d0, 0x1e0)
std::string get_keyword(t_hero_class arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:27276
VA_CHT_1(0x006c87b0, 0x43)
std::string get_class_description(t_hero_class arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:27277
VA_CHT_1(0x006c8800, 0x1)
int get_skill_weight(t_hero_class arg_0, t_skill_type arg_1)
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:65258
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// get_skill_weight$sdtor
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; retn,stable; map:27278
VA_CHT_1(0x006c8810, 0xb6)
int get_class_weight(t_hero_class arg_0, std::vector<t_skill, std::allocator<t_skill>> const& arg_1)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:27279
VA_CHT_1(0x006c88d0, 0xbd)
t_hero_class get_best_class(std::vector<t_skill, std::allocator<t_skill>> const& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:27280
VA_CHT_1(0x006c8990, 0x40)
bool is_spellcaster(t_hero_class arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:27281
VA_CHT_1(0x006c89d0, 0x26e)
std::string get_type_keyword(t_town_type arg_0, bool arg_1, bool arg_2)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:27282
VA_CHT_1(0x006c8c40, 0x2f4)
std::string get_combat_type_keyword(t_town_type arg_0, t_hero_combat_model_type arg_1, bool arg_2)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:27283
VA_CHT_1(0x006c8f40, 0x64)
int compute_default_experience_level(
    t_hero_class arg_0,
    std::vector<t_skill, std::allocator<t_skill>> const& arg_1
)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:65259; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006c9090, 0x20, STATIC_INIT_DISPATCH, hero_class_properties)

namespace {

// name:A; map symbol; map:27284
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_class_properties::t_class_properties()
{
    // Body unavailable.
}

// name:A; map symbol; map:27285
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_class_properties::~t_class_properties()
{
    // Body unavailable.
}

// name:A; map symbol; map:27286
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_hero_class_keyword_list::~t_hero_class_keyword_list()
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:27287
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_enum_map<t_hero_class>::~t_enum_map<t_hero_class>()
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:27288
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_class_properties& t_class_properties::operator=(t_class_properties const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:27289
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_skill_weight_table::get_weight(t_hero_class arg_0, t_skill_type arg_1) const
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:27327
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_enum_map<t_hero_class>::t_enum_map<t_hero_class>(
    t_char_ptr_pair const* arg_0,
    t_char_ptr_pair const* arg_1,
    t_hero_class arg_2,
    t_hero_class arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:27328
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_hero_class t_enum_map<t_hero_class>::operator[](std::string arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:27339
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_enum_map<t_hero_class>::find(std::string arg_0, t_hero_class& arg_1) const
{
    // Body unavailable.
}

// === .bss (2 symbols) ===

// name:A; map symbol; map:60240
DATA_CHT_1(UNACCOUNTED)
// t_class_properties*k_class_properties

// name:A; map symbol; map:60241
DATA_CHT_1(UNACCOUNTED)
char const**k_class_name; // Initial value unavailable.
