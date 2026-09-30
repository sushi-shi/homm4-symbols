// adventure_path_finder.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\adventure_path_finder.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 42/90 (A:15 B:12 C:15); unaccounted 48; skipped std 22.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (82 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:69793; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x004e9130, 0x15, STATIC_INIT_DISPATCH, "adventure_path_finder#1")

// name:C; dyninit; see ledger; map:69794
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adventure_path_finder#1")

// confidence:A; dyninit-init; owner-conf-C; map:69795; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x004e9150, 0xb, STATIC_INIT_DISPATCH, "adventure_path_finder#2")

// name:C; dyninit; see ledger; map:69796
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adventure_path_finder#2")

namespace {

// name:A; map symbol; map:12149
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void copy_enemy_data(t_adventure_path_data const& arg_0, t_adventure_path_data& arg_1)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:12150
VA_CHT_1(0x004e9160, 0x3eb)
bool write_path_data(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_adventure_path_data const& arg_1
)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:12151
VA_CHT_1(0x004e9550, 0x47d)
bool read_path_data(std::basic_streambuf<char, std::char_traits<char>>& arg_0, t_adventure_path_data& arg_1)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:C; align-order; stable; map:12152
VA_CHT_1(0x004e99d0, 0x7a)
t_army* find_restrictive_enemy(
    t_adventure_map& arg_0,
    t_adventure_enemy_marker const& arg_1,
    t_adv_map_point arg_2,
    t_creature_array const& arg_3,
    t_direction* arg_4
)
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:12153
VA_CHT_1(0x004e9a50, 0x1ce)
t_army* find_enemy(
    t_adventure_map& arg_0,
    t_adventure_enemy_marker const& arg_1,
    t_adv_map_point arg_2,
    t_creature_array const& arg_3,
    t_direction* arg_4
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:12154
VA_CHT_1(0x004e9c20, 0x47)
t_adventure_path_finder::t_adventure_path_finder(t_adventure_map& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:12155
VA_CHT_1(0x004e9c70, 0x7e)
bool t_adventure_path_finder::can_summon_boat()
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:12156
VA_CHT_1(0x004e9cf0, 0x409)
void t_adventure_path_finder::initialize()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:12157
VA_CHT_1(0x004ea100, 0x307)
bool t_adventure_path_finder::push(t_path_step& arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:12158
VA_CHT_1(0x004ea430, 0xda)
bool t_adventure_path_finder::enter_blocked_tile(t_path_step& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:12159
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_object* t_adventure_path_finder::check_trigger(t_path_step& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:12160
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adventure_path_finder::validate_water_step(t_path_step const& arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:12161
VA_CHT_1(0x004ea510, 0x351)
bool t_adventure_path_finder::check_water(t_path_step& arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:12162
VA_CHT_1(0x004ea870, 0x271)
bool t_adventure_path_finder::check_danger(t_path_step& arg_0) const
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:12163
VA_CHT_1(0x004eaaf0, 0xc39)
void t_adventure_path_finder::search_to(
    t_adv_map_point const* arg_0,
    unsigned int arg_1,
    t_handler_2<t_adventure_path_point const&, bool&> arg_2
)
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:69797
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// t_adventure_path_finder::search_to$sdtor
// Function body not reconstructed; signature retained as a comment.

// confidence:B; align-order; retn,stable; map:12164
VA_CHT_1(0x004eb740, 0xfb)
bool t_adventure_path_finder::validate_danger(t_adventure_path_point const& arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:12165
VA_CHT_1(0x004eb840, 0xa6)
bool t_adventure_path_finder::validate_point(t_adventure_path_point const& arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:12166
VA_CHT_1(0x004eb910, 0x53)
t_adventure_path_data const& t_adventure_path_finder::get_data(t_adv_map_point const& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:12167
VA_CHT_1(0x004eb970, 0x235)
bool t_adventure_path_finder::get_path(t_adv_map_point arg_0, t_adventure_path& arg_1, unsigned int arg_2)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:12168
VA_CHT_1(0x004ebbb0, 0x30)
void t_adventure_path_finder::seed_position(
    std::list<t_adv_map_point, std::allocator<t_adv_map_point>>& arg_0,
    unsigned int arg_1
)
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:12169
VA_CHT_1(0x004ebbe0, 0x75)
void t_adventure_path_finder::handler_based_search(t_handler_2<t_adventure_path_point const&, bool&> arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:12170
VA_CHT_1(0x004ebc60, 0x2e7)
bool t_adventure_path_finder::push(
    t_adv_map_point const& arg_0,
    t_adventure_path_point const& arg_1,
    unsigned int arg_2,
    unsigned int arg_3,
    float arg_4,
    t_army_path_state arg_5
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:12171
VA_CHT_1(0x004ebf50, 0xc9)
bool t_adventure_path_point::read(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:12172
VA_CHT_1(0x004ec020, 0x8f)
bool t_adventure_path_point::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:12173
VA_CHT_1(0x004ec0b0, 0x5f)
bool t_adventure_path::read(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:12174
VA_CHT_1(0x004ec110, 0x38e)
bool t_adventure_path::read(std::basic_streambuf<char, std::char_traits<char>>& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:12175
VA_CHT_1(0x004ec4a0, 0xbc)
bool t_adventure_path::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

namespace {

// confidence:C; align-order; retn,stable; map:12176
VA_CHT_1(0x004eca90, 0x2c)
t_adjacent_point_pusher::t_adjacent_point_pusher()
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:12177
VA_CHT_1(0x004ecac0, 0x57)
bool t_adjacent_point_pusher::push(
    t_adventure_path_finder& arg_0,
    t_adventure_object const& arg_1,
    t_creature_array& arg_2,
    t_handler_1<t_adv_map_point const&> arg_3
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:12178
VA_CHT_1(0x004ecbf0, 0xd9)
void t_adjacent_point_pusher::scanner(t_adv_map_point const& arg_0, t_adv_map_point const& arg_1, bool& arg_2)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:C; align-order; stable; map:12179
VA_CHT_1(0x004eccd0, 0x20b)
bool start_object_adjacent_pathfind(
    t_adventure_path_finder& arg_0,
    t_adventure_object const& arg_1,
    t_creature_array& arg_2,
    t_path_search_type arg_3,
    t_handler_1<t_adv_map_point const&> arg_4
)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:69798; name:B (dyninit; see ledger)
VA_CHT_1(0x004ecee0, 0x20)
// adventure_path_finder$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:A; dyninit-tinit; owner-conf-B; map:69800; name:B (dyninit; see ledger)
VA_CHT_1(0x004ecf00, 0x5c)
// adventure_path_finder$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:69801
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adventure_path_finder$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:69802
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adventure_path_finder$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:69803
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adventure_path_finder$tatexit4
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:12180
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_path_data const& t_adventure_enemy_marker::get_existing_data(t_adv_map_point const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:12181
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_path_data const& t_adv_path_map::get(t_adv_map_point const& arg_0, bool arg_1) const
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:12182
VA_CHT_1(0x004ec840, 0x17)
t_creature_array const* t_adventure_enemy_marker::get_army() const
{
    // Body unavailable.
}

// name:A; map symbol; map:12183
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_path_queue::t_adventure_path_queue()
{
    // Body unavailable.
}

// name:A; map symbol; map:12184
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_path_queue& t_adventure_path_queue::operator=(t_adventure_path_queue const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:12186
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adventure_tile::ai_can_build_ship() const
{
    // Body unavailable.
}

// name:A; map symbol; map:12187
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_adventure_path_point const&, bool&>::~t_handler_2<t_adventure_path_point const&, bool&>()
{
    // Body unavailable.
}

// name:A; map symbol; map:12188
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_path_step::t_path_step()
{
    // Body unavailable.
}

// name:A; map symbol; map:12189
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_2<t_adventure_path_point const&, bool&>>::~t_counted_ptr<t_handler_base_2<t_adventure_path_point const&, bool&>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:12190
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adv_path_map::point_exists(t_adv_map_point const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:12191
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_adventure_path_point const&, bool&>::t_handler_2<t_adventure_path_point const&, bool&>(
    t_handler_2<t_adventure_path_point const&, bool&> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:12192
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<t_adv_map_point const&>& t_handler_1<t_adv_map_point const&>::operator=(
    t_handler_1<t_adv_map_point const&> const& arg_0
)
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:12193
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adjacent_point_pusher::~t_adjacent_point_pusher()
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:12194
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<t_adv_map_point const&>::t_handler_1<t_adv_map_point const&>(
    t_handler_1<t_adv_map_point const&> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:12202
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_adventure_path_point const&, bool&>::t_handler_2<t_adventure_path_point const&, bool&>()
{
    // Body unavailable.
}

// name:A; map symbol; map:12203
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_handler_2<t_adventure_path_point const&, bool&>::operator()(
    t_adventure_path_point const& arg_0,
    bool& arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:12204
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<t_adv_map_point const&>::t_handler_1<t_adv_map_point const&>()
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:12205
VA_CHT_1(0x004ecb20, 0x5d)
void t_handler_1<t_adv_map_point const&>::operator()(t_adv_map_point const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:12211
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_2<t_adventure_path_point const&, bool&>>::t_counted_ptr<t_handler_base_2<t_adventure_path_point const&, bool&>>(
    t_counted_ptr<t_handler_base_2<t_adventure_path_point const&, bool&>> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:12212
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_2<t_adventure_path_point const&, bool&>>::t_counted_ptr<t_handler_base_2<t_adventure_path_point const&, bool&>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:12213
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_adventure_path_point const&, bool&>& t_counted_ptr<t_handler_base_2<t_adventure_path_point const&, bool&>>::operator*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:12214
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_1<t_adv_map_point const&>>::t_counted_ptr<t_handler_base_1<t_adv_map_point const&>>(
    t_counted_ptr<t_handler_base_1<t_adv_map_point const&>> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:12215
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_1<t_adv_map_point const&>>::t_counted_ptr<t_handler_base_1<t_adv_map_point const&>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:12216
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_1<t_adv_map_point const&>>& t_counted_ptr<t_handler_base_1<t_adv_map_point const&>>::operator=(
    t_counted_ptr<t_handler_base_1<t_adv_map_point const&>> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:12217
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_1<t_adv_map_point const&>& t_counted_ptr<t_handler_base_1<t_adv_map_point const&>>::operator*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:12218
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void put(std::basic_streambuf<char, std::char_traits<char>>& arg_0, t_adv_map_point const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:12219
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void put(std::basic_streambuf<char, std::char_traits<char>>& arg_0, t_army_path_state const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:12220
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_map_point get(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:12221
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_army_path_state get(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:12222
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_terrain_type enum_incr(t_terrain_type& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:12223
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_path_point_old get(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:12224
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_3<t_adv_map_point const&, t_adv_map_point const&, bool&> bound_handler(
    t_adjacent_point_pusher& arg_0,
    void (t_adjacent_point_pusher::*)(t_adv_map_point const&, t_adv_map_point const&, bool&)
)
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:12227
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_path_point_old::t_adventure_path_point_old()
{
    // Body unavailable.
}

// name:A; map symbol; map:12228
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_path_data_old::t_adventure_path_data_old()
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:12229
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_3<t_adjacent_point_pusher, t_adv_map_point const&, t_adv_map_point const&, bool&>::t_bound_handler_3<t_adjacent_point_pusher, t_adv_map_point const&, t_adv_map_point const&, bool&>(
    t_adjacent_point_pusher& arg_0,
    void (t_adjacent_point_pusher::*)(t_adv_map_point const&, t_adv_map_point const&, bool&)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:12230
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_3<t_adjacent_point_pusher, t_adv_map_point const&, t_adv_map_point const&, bool&>::operator()(
    t_adv_map_point const& arg_0,
    t_adv_map_point const& arg_1,
    bool& arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:12231
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_3<t_adjacent_point_pusher, t_adv_map_point const&, t_adv_map_point const&, bool&>")

// name:A; map symbol; map:12232
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_3<t_adjacent_point_pusher, t_adv_map_point const&, t_adv_map_point const&, bool&>")

// name:A; map symbol; map:12233
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_3<t_adjacent_point_pusher, t_adv_map_point const&, t_adv_map_point const&, bool&>::~t_bound_handler_3<t_adjacent_point_pusher, t_adv_map_point const&, t_adv_map_point const&, bool&>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:12238
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_compare_adjusted_move_cost::operator()(
    t_adventure_path_point const& arg_0,
    t_adventure_path_point const& arg_1
) const
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:12241
VA_CHT_1_COMPGEN(0x004ecf60, 0x8, VECTOR_DELETING_DTOR, "t_bound_handler_3<t_adjacent_point_pusher, t_adv_map_point const&, t_adv_map_point const&, bool&>")

// === .rdata (2 symbols) ===

// confidence:A; rtti-name; map:43315
DATA_CHT_1_COMPGEN(0x008d443c, "const t_bound_handler_3<t_adjacent_point_pusher, t_adv_map_point const&, t_adv_map_point const&, bool&>::`vftable'{for `t_abstract_function_3<void, t_adv_map_point const&, t_adv_map_point const&, bool&>'}")

// confidence:B; rtti-order; map:43316
DATA_CHT_1_COMPGEN(0x008d4448, "const t_bound_handler_3<t_adjacent_point_pusher, t_adv_map_point const&, t_adv_map_point const&, bool&>::`vftable'{for `t_counted_object'}")

// === .rdata$r (5 symbols) ===

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_3@Vt_adjacent_point_pusher@?%C:\Work\game\adventure_path_finder.cpp2134031146@@ABUt_adv_map_point@@ABU3@AA_N@@;vft=4d443c;col=4fc40c;td=58eb30;chd=4fc3fc;offset=8;cdOffset=0;validated-hierarchy; map:49094
DATA_CHT_1_COMPGEN(0x008fc40c, "const t_bound_handler_3<t_adjacent_point_pusher, t_adv_map_point const&, t_adv_map_point const&, bool&>::`RTTI Complete Object Locator'{for `t_abstract_function_3<void, t_adv_map_point const&, t_adv_map_point const&, bool&>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_3@Vt_adjacent_point_pusher@?%C:\Work\game\adventure_path_finder.cpp2134031146@@ABUt_adv_map_point@@ABU3@AA_N@@;bcd=4fc3d0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49095
DATA_CHT_1_COMPGEN(0x008fc3d0, "t_bound_handler_3<t_adjacent_point_pusher, t_adv_map_point const&, t_adv_map_point const&, bool&>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_3@Vt_adjacent_point_pusher@?%C:\Work\game\adventure_path_finder.cpp2134031146@@ABUt_adv_map_point@@ABU3@AA_N@@;vft=4d443c;col=4fc40c;td=58eb30;chd=4fc3fc;offset=8;cdOffset=0;validated-hierarchy; map:49096
DATA_CHT_1_COMPGEN(0x008fc3e8, "t_bound_handler_3<t_adjacent_point_pusher, t_adv_map_point const&, t_adv_map_point const&, bool&>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_3@Vt_adjacent_point_pusher@?%C:\Work\game\adventure_path_finder.cpp2134031146@@ABUt_adv_map_point@@ABU3@AA_N@@;vft=4d443c;col=4fc40c;td=58eb30;chd=4fc3fc;offset=8;cdOffset=0;validated-hierarchy; map:49097
DATA_CHT_1_COMPGEN(0x008fc3fc, "t_bound_handler_3<t_adjacent_point_pusher, t_adv_map_point const&, t_adv_map_point const&, bool&>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:49098
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_3<t_adjacent_point_pusher, t_adv_map_point const&, t_adv_map_point const&, bool&>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// === .data (1 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_3@Vt_adjacent_point_pusher@?%C:\Work\game\adventure_path_finder.cpp2134031146@@ABUt_adv_map_point@@ABU3@AA_N@@;td=58eb30;validated-header; map:57770
DATA_CHT_1_COMPGEN(0x0098eb30, "t_bound_handler_3<t_adjacent_point_pusher, t_adv_map_point const&, t_adv_map_point const&, bool&> `RTTI Type Descriptor'")
