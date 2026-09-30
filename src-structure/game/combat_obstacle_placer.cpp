// combat_obstacle_placer.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\combat_obstacle_placer.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 78/145 (A:30 B:2 C:1); unaccounted 67; skipped std 54.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (110 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67714; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005d7010, 0x15, STATIC_INIT_DISPATCH, "combat_obstacle_placer#1")

// name:C; dyninit; see ledger; map:67715
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_obstacle_placer#1")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67716; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005d7030, 0x15, STATIC_INIT_DISPATCH, "combat_obstacle_placer#2")

// name:C; dyninit; see ledger; map:67717
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_obstacle_placer#2")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67718; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005d7050, 0x15, STATIC_INIT_DISPATCH, "combat_obstacle_placer#3")

// name:C; dyninit; see ledger; map:67719
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_obstacle_placer#3")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67720; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005d7070, 0x15, STATIC_INIT_DISPATCH, "combat_obstacle_placer#4")

// name:C; dyninit; see ledger; map:67721
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_obstacle_placer#4")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67722; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005d7090, 0x10, STATIC_INIT_DISPATCH, "combat_obstacle_placer#5")

// name:C; dyninit; see ledger; map:67723
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_obstacle_placer#5")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67724; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005d70a0, 0x15, STATIC_INIT_DISPATCH, "combat_obstacle_placer#6")

// name:C; dyninit; see ledger; map:67725
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_obstacle_placer#6")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67726; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005d70c0, 0x24, STATIC_INIT_DISPATCH, k_frequency_keyword_map)

// name:C; dyninit; see ledger; map:67727
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, k_frequency_keyword_map)

// name:C; dyninit; see ledger; map:67728
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, k_frequency_keyword_map)

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67729; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005d70f0, 0xa, STATIC_DTOR, k_frequency_keyword_map)

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:21264
VA_CHT_1(0x005d7390, 0x43)
t_obstacle_placer_data::t_obstacle_placer_data()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:21265
VA_CHT_1(0x005d73e0, 0x1d)
std::vector<t_combat_header_obstacle_data, std::allocator<t_combat_header_obstacle_data>> const& get_obstacle_data(

)
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:67730
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// get_obstacle_data$sdtor2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:67731
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// get_obstacle_data$sdtor1
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:21266
VA_CHT_1(0x005d7400, 0x40)
t_obstacle_weighting const& get_weighting(t_obstacle_type arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:67732
VA_CHT_1(0x005d7440, 0x2c8)
static void read_weights(t_obstacle_weighting* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:67733
VA_CHT_1(0x005d78d0, 0x58)
static void read_terrain_weights(t_string_vector const& arg_0, t_obstacle_weighting* arg_1, int const* arg_2)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:67734
VA_CHT_1(0x005d7930, 0x5b)
static void read_adjacent_weights(t_string_vector const& arg_0, t_obstacle_weighting* arg_1, int const* arg_2)
{
    // Body unavailable.
}

// name:A; map symbol; map:67735
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
static void read_overlap_weights(t_string_vector const& arg_0, t_obstacle_weighting* arg_1, int const* arg_2)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:21267
VA_CHT_1(0x005d7990, 0x17b)
t_combat_obstacle_placer::t_combat_obstacle_placer(t_battlefield& arg_0, bool arg_1, int arg_2)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:21268
VA_CHT_1(0x005d7b10, 0x14c)
void t_combat_obstacle_placer::clear_rect(t_map_rect_2d const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:21269
VA_CHT_1(0x005d7c60, 0x204)
void t_combat_obstacle_placer::clear_start_positions()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:21270
VA_CHT_1(0x005d7e70, 0x26f)
void t_combat_obstacle_placer::cut_path(t_map_point_2d const& arg_0, t_map_point_2d const& arg_1, int arg_2)
{
    // Body unavailable.
}

// name:A; map symbol; map:21271
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_combat_obstacle_placer::cut_path(int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:21272
VA_CHT_1(0x005d80e0, 0x2aa)
void t_combat_obstacle_placer::cut_paths()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:21273
VA_CHT_1(0x005d8390, 0x12b)
void t_combat_obstacle_placer::push_points(t_map_rect_2d const& arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:21274
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_combat_obstacle_placer::push_points(t_map_point_2d const& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:21275
VA_CHT_1(0x005d84c0, 0x227)
int t_combat_obstacle_placer::get_weight(
    t_combat_object_model_base const& arg_0,
    t_map_point_2d const& arg_1
) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:21276
VA_CHT_1(0x005d86f0, 0x40d)
void t_combat_obstacle_placer::place_obstacle(std::string const& arg_0, t_map_point_2d const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:21277
VA_CHT_1(0x005d8b00, 0x307)
void t_combat_obstacle_placer::examine(t_map_point_2d const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:21278
VA_CHT_1(0x005d8e10, 0x45c)
void t_combat_obstacle_placer::execute()
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:67736
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// t_combat_obstacle_placer::execute$sdtor
// Function body not reconstructed; signature retained as a comment.

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:67737; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005d9790, 0x20, STATIC_INIT_DISPATCH, combat_obstacle_placer)

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:21279
VA_CHT_1(0x005d99f0, 0x23)
t_enum_map<t_frequency_type>::~t_enum_map<t_frequency_type>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:21280
VA_CHT_1(0x005d7100, 0x274)
t_pointer_cache<t_combat_header_table>::~t_pointer_cache<t_combat_header_table>()
{
    // Body unavailable.
}

// name:A; map symbol; map:21281
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_pointer_cache<t_combat_header_table>& t_pointer_cache<t_combat_header_table>::operator=(
    t_pointer_cache<t_combat_header_table> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:21282
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_cache<t_combat_header_table>& t_abstract_cache<t_combat_header_table>::operator=(
    t_abstract_cache<t_combat_header_table> const& arg_0
)
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:21283
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_frequency_type get_frequency(std::string const& arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:21284
VA_CHT_1(0x005d99d0, 0x19)
t_combat_object_list const& t_battlefield_cell::get_objects() const
{
    // Body unavailable.
}

// name:A; map symbol; map:21285
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_combat_object_model_root::blocks_movement() const
{
    // Body unavailable.
}

// name:A; map symbol; map:21286
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_obstacle_type t_combat_object_model_root::get_type() const
{
    // Body unavailable.
}

// name:A; map symbol; map:21287
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_point_2d const& t_combat_object_model_base::get_footprint_size() const
{
    // Body unavailable.
}

// name:A; map symbol; map:21288
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_battlefield_cell::is_obstacle_allowed() const
{
    // Body unavailable.
}

// name:A; map symbol; map:21289
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_obstruction_finder::~t_combat_obstruction_finder()
{
    // Body unavailable.
}

// name:A; map symbol; map:21320
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_obstacle_placer_data const& t_basic_isometric_map<t_isometric_tile_map_base, t_obstacle_placer_data>::get(
    t_map_point_2d const& arg_0
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:21321
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_obstacle_placer_data& t_basic_isometric_map<t_isometric_tile_map_base, t_obstacle_placer_data>::get(
    t_map_point_2d const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:21322
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_basic_isometric_map<t_isometric_tile_map_base, t_obstacle_placer_data>::is_valid(
    t_map_point_2d const& arg_0
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:21323
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_isometric_map<t_obstacle_placer_data>::t_isometric_map<t_obstacle_placer_data>(
    int arg_0,
    int arg_1,
    t_screen_point const& arg_2,
    t_obstacle_placer_data const& arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:21324
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_enum_map<t_frequency_type>::t_enum_map<t_frequency_type>(
    t_char_ptr_pair const* arg_0,
    t_char_ptr_pair const* arg_1,
    t_frequency_type arg_2,
    t_frequency_type arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:21325
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_frequency_type t_enum_map<t_frequency_type>::operator[](std::string arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:21326
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_cache_data<t_combat_header_table>>& t_counted_ptr<t_abstract_cache_data<t_combat_header_table>>::operator=(
    t_counted_ptr<t_abstract_cache_data<t_combat_header_table>> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:21327
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_cache<t_combat_header_table>::~t_abstract_cache<t_combat_header_table>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:21328
VA_CHT_1(0x005d93a0, 0x195)
t_cached_ptr<t_combat_header_table> t_abstract_cache<t_combat_header_table>::get(
    t_progress_handler* arg_0
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:21329
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_pointer_cache<t_combat_header_table>::t_pointer_cache<t_combat_header_table>(std::string const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:21330
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_pointer_cache<t_combat_header_table>::t_pointer_cache<t_combat_header_table>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:21331
VA_CHT_1(0x005d9310, 0x4d)
t_cached_ptr<t_combat_header_table>::t_cached_ptr<t_combat_header_table>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:21332
VA_CHT_1(0x005d9280, 0x84)
t_cached_ptr<t_combat_header_table>::~t_cached_ptr<t_combat_header_table>()
{
    // Body unavailable.
}

// name:A; map symbol; map:21333
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_header_table* t_cached_ptr<t_combat_header_table>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:21334
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cached_ptr<t_combat_header_table>& t_cached_ptr<t_combat_header_table>::operator=(
    t_cached_ptr<t_combat_header_table> const& arg_0
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:21338
VA_CHT_1_COMPGEN(0x005d95c0, 0x1e, SCALAR_DELETING_DTOR, "t_abstract_cache<t_combat_header_table>")

// name:A; map symbol; map:21339
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_abstract_cache<t_combat_header_table>")

// name:A; map symbol; map:21340
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_cache_data<t_combat_header_table>>::~t_counted_ptr<t_abstract_cache_data<t_combat_header_table>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:21341
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_pointer_cache<t_combat_header_table>")

// name:A; map symbol; map:21342
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_pointer_cache<t_combat_header_table>")

// name:A; map symbol; map:21345
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cached_ptr<t_combat_header_table>::t_cached_ptr<t_combat_header_table>(
    t_cached_ptr<t_combat_header_table> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:21348
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_basic_isometric_map<t_isometric_tile_map_base, t_obstacle_placer_data>::t_basic_isometric_map<t_isometric_tile_map_base, t_obstacle_placer_data>(
    int arg_0,
    int arg_1,
    t_screen_point const& arg_2,
    t_obstacle_placer_data const& arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:21349
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_enum_map<t_frequency_type>::find(std::string arg_0, t_frequency_type& arg_1) const
{
    // Body unavailable.
}

// name:A; map symbol; map:21350
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_cache_data<t_combat_header_table>>::t_counted_ptr<t_abstract_cache_data<t_combat_header_table>>(
    t_abstract_cache_data<t_combat_header_table>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:21351
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_cache_data<t_combat_header_table>* t_counted_ptr<t_abstract_cache_data<t_combat_header_table>>::operator t_abstract_cache_data<t_combat_header_table>*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:21352
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_cache_data<t_combat_header_table>* t_counted_ptr<t_abstract_cache_data<t_combat_header_table>>::operator->(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:21353
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_cache<t_combat_header_table>::t_abstract_cache<t_combat_header_table>(
    t_abstract_cache_data<t_combat_header_table>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:21354
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cached_ptr<t_combat_header_table>::t_cached_ptr<t_combat_header_table>(
    t_combat_header_table* arg_0,
    t_abstract_cache_base* arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:21355
VA_CHT_1(0x005d9d70, 0x48)
void t_cached_ptr<t_combat_header_table>::assign(t_combat_header_table* arg_0, t_cached_ptr_base const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:21356
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_header_table* t_cached_ptr<t_combat_header_table>::get() const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:21357
VA_CHT_1(0x005d95e0, 0x80)
t_ptr_cache_data<t_combat_header_table>::t_ptr_cache_data<t_combat_header_table>(std::string const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:21358
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_abstract_resource_cache_data<t_combat_header_table>::get_load_cost()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:21359
VA_CHT_1(0x005d96b0, 0x25)
void t_abstract_resource_cache_data<t_combat_header_table>::add_reference()
{
    // Body unavailable.
}

// name:A; map symbol; map:21360
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_header_table* t_abstract_resource_cache_data<t_combat_header_table>::do_get(
    t_progress_handler* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:21361
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_abstract_resource_cache_data<t_combat_header_table>::release_memory()
{
    // Body unavailable.
}

// name:A; map symbol; map:21362
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_abstract_resource_cache_data<t_combat_header_table>::remove_reference()
{
    // Body unavailable.
}

// name:A; map symbol; map:21363
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_abstract_resource_cache_data<t_combat_header_table>::read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_progress_handler* arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:21364
VA_CHT_1(0x005d96e0, 0x6)
char const* t_ptr_cache_data<t_combat_header_table>::get_prefix() const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:21365
VA_CHT_1(0x005d96f0, 0x9b)
t_combat_header_table* t_ptr_cache_data<t_combat_header_table>::do_read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_progress_handler* arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:21366
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool read(std::basic_streambuf<char, std::char_traits<char>>& arg_0, t_combat_header_table& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:21367
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_combat_header_table)

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:21368
VA_CHT_1_COMPGEN(0x005d97d0, 0x1e, SCALAR_DELETING_DTOR, "t_ptr_cache_data<t_combat_header_table>")

// name:A; map symbol; map:21369
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_ptr_cache_data<t_combat_header_table>")

// name:A; map symbol; map:21370
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_ptr_cache_data<t_combat_header_table>::~t_ptr_cache_data<t_combat_header_table>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:21371
VA_CHT_1(0x005d97f0, 0xd7)
t_abstract_resource_cache_data<t_combat_header_table>::~t_abstract_resource_cache_data<t_combat_header_table>(

)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:21372
VA_CHT_1(0x005d9660, 0x49)
t_abstract_cache_data<t_combat_header_table>::~t_abstract_cache_data<t_combat_header_table>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:21373
VA_CHT_1_COMPGEN(0x005d97b0, 0x1e, VECTOR_DELETING_DTOR, "t_abstract_cache_data<t_combat_header_table>")

// name:A; map symbol; map:21374
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_abstract_cache_data<t_combat_header_table>")

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:21375
VA_CHT_1_COMPGEN(0x005d98d0, 0x1e, SCALAR_DELETING_DTOR, "t_abstract_resource_cache_data<t_combat_header_table>")

// name:A; map symbol; map:21376
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_abstract_resource_cache_data<t_combat_header_table>")

// name:A; map symbol; map:21378
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_basic_isometric_map<t_isometric_tile_map_base, t_obstacle_placer_data>::initialize(
    int arg_0,
    int arg_1,
    t_screen_point const& arg_2,
    t_obstacle_placer_data const& arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:21379
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_resource_cache_data<t_combat_header_table>::t_abstract_resource_cache_data<t_combat_header_table>(
    std::string const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:21380
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_ptr<t_combat_header_table>::t_owned_ptr<t_combat_header_table>(t_combat_header_table* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:21381
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_ptr<t_combat_header_table>::~t_owned_ptr<t_combat_header_table>()
{
    // Body unavailable.
}

// name:A; map symbol; map:21382
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_header_table* t_owned_ptr<t_combat_header_table>::release()
{
    // Body unavailable.
}

// name:A; map symbol; map:21383
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_owned_ptr<t_combat_header_table>::reset(t_combat_header_table* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:21384
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_header_table& t_owned_ptr<t_combat_header_table>::operator*() const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:21385
VA_CHT_1(0x005d98f0, 0xd7)
t_abstract_cache_data<t_combat_header_table>::t_abstract_cache_data<t_combat_header_table>()
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:21401
VA_CHT_1_COMPGEN(0x005d9dc0, 0x8, VECTOR_DELETING_DTOR, "t_ptr_cache_data<t_combat_header_table>")

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:21402
VA_CHT_1_COMPGEN(0x005d9dd0, 0x8, VECTOR_DELETING_DTOR, "t_abstract_resource_cache_data<t_combat_header_table>")

// === .rdata (7 symbols) ===

// confidence:A; rtti-name; map:43969
DATA_CHT_1_COMPGEN(0x008dc8b8, "const t_abstract_cache<t_combat_header_table>::`vftable'")

// confidence:A; rtti-name; map:43970
DATA_CHT_1_COMPGEN(0x008dc8c0, "const t_pointer_cache<t_combat_header_table>::`vftable'")

// confidence:A; rtti-name; map:43971
DATA_CHT_1_COMPGEN(0x008dc8e4, "const t_ptr_cache_data<t_combat_header_table>::`vftable'{for `t_abstract_resource_cache_base'}")

// confidence:B; rtti-order; map:43972
DATA_CHT_1_COMPGEN(0x008dc8c8, "const t_ptr_cache_data<t_combat_header_table>::`vftable'{for `t_abstract_cache_data<t_combat_header_table>'}")

// confidence:A; rtti-name; map:43973
DATA_CHT_1_COMPGEN(0x008dc914, "const t_abstract_resource_cache_data<t_combat_header_table>::`vftable'{for `t_abstract_resource_cache_base'}")

// confidence:B; rtti-order; map:43974
DATA_CHT_1_COMPGEN(0x008dc92c, "const t_abstract_resource_cache_data<t_combat_header_table>::`vftable'{for `t_abstract_cache_data<t_combat_header_table>'}")

// confidence:A; rtti-name; map:43975
DATA_CHT_1_COMPGEN(0x008dc8fc, "const t_abstract_cache_data<t_combat_header_table>::`vftable'")

// === .rdata$r (22 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_cache@Vt_combat_header_table@@@@;bcd=504554;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50844
DATA_CHT_1_COMPGEN(0x00904554, "t_abstract_cache<t_combat_header_table>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_cache@Vt_combat_header_table@@@@;vft=4dc8b8;col=504584;td=59948c;chd=504574;offset=0;cdOffset=0;validated-hierarchy; map:50845
DATA_CHT_1_COMPGEN(0x0090456c, "t_abstract_cache<t_combat_header_table>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_cache@Vt_combat_header_table@@@@;vft=4dc8b8;col=504584;td=59948c;chd=504574;offset=0;cdOffset=0;validated-hierarchy; map:50846
DATA_CHT_1_COMPGEN(0x00904574, "t_abstract_cache<t_combat_header_table>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_cache@Vt_combat_header_table@@@@;vft=4dc8b8;col=504584;td=59948c;chd=504574;offset=0;cdOffset=0;validated-hierarchy; map:50847
DATA_CHT_1_COMPGEN(0x00904584, "const t_abstract_cache<t_combat_header_table>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_pointer_cache@Vt_combat_header_table@@@@;bcd=50450c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50848
DATA_CHT_1_COMPGEN(0x0090450c, "t_pointer_cache<t_combat_header_table>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_pointer_cache@Vt_combat_header_table@@@@;vft=4dc8c0;col=504540;td=599450;chd=504530;offset=0;cdOffset=0;validated-hierarchy; map:50849
DATA_CHT_1_COMPGEN(0x00904524, "t_pointer_cache<t_combat_header_table>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_pointer_cache@Vt_combat_header_table@@@@;vft=4dc8c0;col=504540;td=599450;chd=504530;offset=0;cdOffset=0;validated-hierarchy; map:50850
DATA_CHT_1_COMPGEN(0x00904530, "t_pointer_cache<t_combat_header_table>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_pointer_cache@Vt_combat_header_table@@@@;vft=4dc8c0;col=504540;td=599450;chd=504530;offset=0;cdOffset=0;validated-hierarchy; map:50851
DATA_CHT_1_COMPGEN(0x00904540, "const t_pointer_cache<t_combat_header_table>::`RTTI Complete Object Locator'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_ptr_cache_data@Vt_combat_header_table@@@@;vft=4dc8e4;col=5045d0;td=5995b8;chd=504654;offset=16;cdOffset=0;validated-hierarchy; map:50852
DATA_CHT_1_COMPGEN(0x009045d0, "const t_ptr_cache_data<t_combat_header_table>::`RTTI Complete Object Locator'{for `t_abstract_resource_cache_base'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_cache_data@Vt_combat_header_table@@@@;bcd=5045e4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50853
DATA_CHT_1_COMPGEN(0x009045e4, "t_abstract_cache_data<t_combat_header_table>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_resource_cache_data@Vt_combat_header_table@@@@;bcd=5045fc;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50854
DATA_CHT_1_COMPGEN(0x009045fc, "t_abstract_resource_cache_data<t_combat_header_table>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_ptr_cache_data@Vt_combat_header_table@@@@;bcd=504614;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50855
DATA_CHT_1_COMPGEN(0x00904614, "t_ptr_cache_data<t_combat_header_table>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_ptr_cache_data@Vt_combat_header_table@@@@;vft=4dc8e4;col=5045d0;td=5995b8;chd=504654;offset=16;cdOffset=0;validated-hierarchy; map:50856
DATA_CHT_1_COMPGEN(0x0090462c, "t_ptr_cache_data<t_combat_header_table>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_ptr_cache_data@Vt_combat_header_table@@@@;vft=4dc8e4;col=5045d0;td=5995b8;chd=504654;offset=16;cdOffset=0;validated-hierarchy; map:50857
DATA_CHT_1_COMPGEN(0x00904654, "t_ptr_cache_data<t_combat_header_table>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:50858
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_ptr_cache_data<t_combat_header_table>::`RTTI Complete Object Locator'{for `t_abstract_cache_data<t_combat_header_table>'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_resource_cache_data@Vt_combat_header_table@@@@;vft=4dc914;col=5046c0;td=599570;chd=5046b0;offset=16;cdOffset=0;validated-hierarchy; map:50859
DATA_CHT_1_COMPGEN(0x009046c0, "const t_abstract_resource_cache_data<t_combat_header_table>::`RTTI Complete Object Locator'{for `t_abstract_resource_cache_base'}")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_resource_cache_data@Vt_combat_header_table@@@@;vft=4dc914;col=5046c0;td=599570;chd=5046b0;offset=16;cdOffset=0;validated-hierarchy; map:50860
DATA_CHT_1_COMPGEN(0x0090468c, "t_abstract_resource_cache_data<t_combat_header_table>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_resource_cache_data@Vt_combat_header_table@@@@;vft=4dc914;col=5046c0;td=599570;chd=5046b0;offset=16;cdOffset=0;validated-hierarchy; map:50861
DATA_CHT_1_COMPGEN(0x009046b0, "t_abstract_resource_cache_data<t_combat_header_table>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:50862
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_abstract_resource_cache_data<t_combat_header_table>::`RTTI Complete Object Locator'{for `t_abstract_cache_data<t_combat_header_table>'}")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_cache_data@Vt_combat_header_table@@@@;vft=4dc8fc;col=5045bc;td=59952c;chd=5045ac;offset=0;cdOffset=0;validated-hierarchy; map:50863
DATA_CHT_1_COMPGEN(0x00904598, "t_abstract_cache_data<t_combat_header_table>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_cache_data@Vt_combat_header_table@@@@;vft=4dc8fc;col=5045bc;td=59952c;chd=5045ac;offset=0;cdOffset=0;validated-hierarchy; map:50864
DATA_CHT_1_COMPGEN(0x009045ac, "t_abstract_cache_data<t_combat_header_table>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_cache_data@Vt_combat_header_table@@@@;vft=4dc8fc;col=5045bc;td=59952c;chd=5045ac;offset=0;cdOffset=0;validated-hierarchy; map:50865
DATA_CHT_1_COMPGEN(0x009045bc, "const t_abstract_cache_data<t_combat_header_table>::`RTTI Complete Object Locator'")

// === .data (5 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_cache@Vt_combat_header_table@@@@;td=59948c;validated-header; map:58230
DATA_CHT_1_COMPGEN(0x0099948c, "t_abstract_cache<t_combat_header_table> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_pointer_cache@Vt_combat_header_table@@@@;td=599450;validated-header; map:58231
DATA_CHT_1_COMPGEN(0x00999450, "t_pointer_cache<t_combat_header_table> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_cache_data@Vt_combat_header_table@@@@;td=59952c;validated-header; map:58232
DATA_CHT_1_COMPGEN(0x0099952c, "t_abstract_cache_data<t_combat_header_table> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_resource_cache_data@Vt_combat_header_table@@@@;td=599570;validated-header; map:58233
DATA_CHT_1_COMPGEN(0x00999570, "t_abstract_resource_cache_data<t_combat_header_table> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_ptr_cache_data@Vt_combat_header_table@@@@;td=5995b8;validated-header; map:58234
DATA_CHT_1_COMPGEN(0x009995b8, "t_ptr_cache_data<t_combat_header_table> `RTTI Type Descriptor'")

// === .bss (1 symbols) ===

namespace {

// confidence:C; dyninit-global; owner-conf-C; map:60120
DATA_CHT_1(0x009dd850)
t_enum_map<t_frequency_type> k_frequency_keyword_map; // Initial value unavailable.

} // anonymous namespace
