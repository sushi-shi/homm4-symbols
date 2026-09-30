// abstract_adventure_map.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\abstract_adventure_map.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 96/446 (A:16 B:8 C:14); unaccounted 350; skipped std 390.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (422 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:71437; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00404b70, 0x15, STATIC_INIT_DISPATCH, "abstract_adventure_map#1")

// name:C; dyninit; see ledger; map:71438
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "abstract_adventure_map#1")

// name:C; dyninit; see ledger; map:71439
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_INIT_DISPATCH, "abstract_adventure_map#2")

// name:C; dyninit; see ledger; map:71440
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "abstract_adventure_map#2")

// name:C; dyninit; see ledger; map:71441
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "abstract_adventure_map#2")

// name:C; dyninit; see ledger; map:71442
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "abstract_adventure_map#2")

// name:C; dyninit; see ledger; map:71443
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_INIT_DISPATCH, "abstract_adventure_map#3")

// name:C; dyninit; see ledger; map:71444
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "abstract_adventure_map#3")

// name:C; dyninit; see ledger; map:71445
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "abstract_adventure_map#3")

// name:C; dyninit; see ledger; map:71446
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "abstract_adventure_map#3")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:71447; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00404b90, 0x11, STATIC_INIT_DISPATCH, "abstract_adventure_map#4")

// confidence:B; dyninit-ctor; owner-conf-C; map:71448; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00404bb0, 0xd1, STATIC_CTOR, "abstract_adventure_map#4")

// name:C; dyninit; see ledger; map:71449
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "abstract_adventure_map#4")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:71450; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00404c90, 0xa, STATIC_DTOR, "abstract_adventure_map#4")

namespace {

// name:A; map symbol; map:353
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_info& t_object_info_array::get(int arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable;manual-review=complete-F00038:unresolved; map:354
VA_CHT_1(0x00404ca0, 0x30)
t_object_info const& t_object_info_array::get(int arg_0) const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable;manual-review=complete-F00039:unresolved; map:355
VA_CHT_1(0x00404cd0, 0x20b)
t_object_info& t_object_info_array::append_new()
{
    // Body unavailable.
}

// name:A; map symbol; map:356
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adventure_map_view_cell_grid::resize(t_screen_rect const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:357
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_map_view_cell& t_adventure_map_view_cell_grid::get(t_screen_point const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:358
VA_CHT_1(0x00405160, 0xa3)
t_adventure_map_view_cell const& t_adventure_map_view_cell_grid::get(t_screen_point const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:359
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int compute_vertex_light_helper(int arg_0, int arg_1, int arg_2)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:360
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_abstract_adventure_tile::add_intersecting_object_id(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:361
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_abstract_adventure_tile::remove_intersecting_object_id(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:362
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int const* t_adventure_map_view_cell::shadow_insert(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:363
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adventure_map_view_cell::shadow_erase(int arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vptr; map:364
VA_CHT_1(0x004052b0, 0x155)
t_abstract_adventure_map::t_abstract_adventure_map()
{
    // Body unavailable.
}

// name:A; map symbol; map:365
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_adventure_map::t_abstract_adventure_map(t_abstract_adventure_map const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:366
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_adventure_map::t_abstract_adventure_map(t_abstract_adventure_map::t_params const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:367
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_adventure_map::t_abstract_adventure_map(int arg_0, int arg_1, long arg_2)
{
    // Body unavailable.
}

// confidence:C; align-order; retn; map:368
VA_CHT_1(0x00405430, 0x331)
void t_abstract_adventure_map::init(t_abstract_adventure_map::t_params const& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vptr; map:369
VA_CHT_1(0x00405810, 0x14d)
t_abstract_adventure_map::~t_abstract_adventure_map()
{
    // Body unavailable.
}

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:370
VA_CHT_1(0x00405980, 0x1e)
t_abstract_adventure_map& t_abstract_adventure_map::operator=(t_abstract_adventure_map const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:371
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_adventure_map::t_apply_height_map_result t_abstract_adventure_map::apply_height_map(
    int arg_0,
    std::map<t_map_point_2d, int, std::less<t_map_point_2d>, std::allocator<int>> const& arg_1
)
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:71451
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// t_abstract_adventure_map::apply_height_map$sdtor
// Function body not reconstructed; signature retained as a comment.

// confidence:B; align-order; retn,stable; map:372
VA_CHT_1(0x004059c0, 0x2a9)
void t_abstract_adventure_map::apply_height_map(t_isometric_vertex_map<int> const& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:373
VA_CHT_1(0x00405c70, 0xa)
int t_abstract_adventure_map::get_size() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:374
VA_CHT_1(0x00405c80, 0xa)
int t_abstract_adventure_map::get_num_levels() const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:375
VA_CHT_1(0x00405c90, 0x33)
int t_abstract_adventure_map::get_object_height(int arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:376
VA_CHT_1(0x00405cd0, 0x13)
int t_abstract_adventure_map::get_row_start(int arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:377
VA_CHT_1(0x00405cf0, 0x14)
int t_abstract_adventure_map::get_row_end(int arg_0) const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable;manual-review=complete-F00055:unresolved; map:378
VA_CHT_1(0x00405d10, 0xa)
long t_abstract_adventure_map::get_terrain_random_seed() const
{
    // Body unavailable.
}

// confidence:D; align-order; stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:379
VA_CHT_1(0x00405d20, 0xa6)
t_quad<t_abstract_adventure_tile_vertex const&> t_abstract_adventure_map::get_tile_vertex_quad(
    t_level_map_point_2d arg_0
) const
{
    // Body unavailable.
}

// confidence:A; align-order; stable,vslot; map:380
VA_CHT_1(0x00405dd0, 0xa6)
t_quad<t_abstract_adventure_tile_vertex&> t_abstract_adventure_map::get_tile_vertex_quad(
    t_level_map_point_2d arg_0
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:381
VA_CHT_1(0x00405e80, 0x13)
int t_abstract_adventure_map::get_vertex_row_start(int arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:382
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_abstract_adventure_map::get_vertex_row_end(int arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:383
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_point t_abstract_adventure_map::get_view_size() const
{
    // Body unavailable.
}

// name:A; map symbol; map:384
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_abstract_adventure_map::is_valid(t_map_point_2d const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:385
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_abstract_adventure_map::is_valid(t_level_map_point_2d const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:386
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_abstract_adventure_map::is_vertex_valid(t_map_point_2d const& arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:387
VA_CHT_1(0x00405f60, 0x40)
bool t_abstract_adventure_map::is_vertex_valid(t_level_map_point_2d const& arg_0) const
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:388
VA_CHT_1(0x00405fa0, 0x5b)
t_map_point_2d t_abstract_adventure_map::get_map_point(t_screen_point arg_0) const
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:389
VA_CHT_1(0x00406000, 0x4d)
t_screen_point t_abstract_adventure_map::get_screen_point(t_map_point_2d arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:390
VA_CHT_1(0x00406050, 0x81)
t_adventure_map_view_cell const& t_abstract_adventure_map::get_view_cell(
    int arg_0,
    t_screen_point arg_1
) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:391
VA_CHT_1(0x004060e0, 0x8f)
bool t_abstract_adventure_map::is_valid_view_cell(int arg_0, t_screen_point const& arg_1) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vslot; map:392
VA_CHT_1(0x00406170, 0x29f)
void t_abstract_adventure_map::stamp_object(int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:393
VA_CHT_1(0x00406410, 0x171)
void t_abstract_adventure_map::unstamp_object(int arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn;manual-review=complete-F00067:unresolved; map:394
VA_CHT_1(0x00406590, 0xe7)
void t_abstract_adventure_map::on_floating_object(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:395
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_abstract_adventure_map::on_moving_object(int arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable;manual-review=complete-F00072:unresolved; map:396
VA_CHT_1(0x00406940, 0x40)
void t_abstract_adventure_map::on_object_moved(int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:397
VA_CHT_1(0x00406980, 0x159)
void t_abstract_adventure_map::on_object_placed(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:398
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_abstract_adventure_map::on_object_sunk(int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:399
VA_CHT_1(0x004070d0, 0x37)
void t_abstract_adventure_map::on_removing_object(int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:400
VA_CHT_1(0x004079d0, 0xf7)
t_screen_rect t_abstract_adventure_map::compute_object_extent(int arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:401
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_rect t_abstract_adventure_map::compute_object_shadow_extent(int arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:402
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_abstract_adventure_map::compute_vertex_light(t_level_map_point_2d const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:403
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
unsigned int t_abstract_adventure_map::get_object_placement_num(int arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:404
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_map_view_cell& t_abstract_adventure_map::get_view_cell(int arg_0, t_screen_point arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:405
VA_CHT_1(0x00408a90, 0x25)
std::string const& t_abstract_adventure_map::get_map_description() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:406
VA_CHT_1(0x00408b40, 0x25)
t_difficulty t_abstract_adventure_map::get_map_difficulty() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:407
VA_CHT_1(0x00408b70, 0x25)
std::string const& t_abstract_adventure_map::get_map_name() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:408
VA_CHT_1(0x00408be0, 0x21)
void t_abstract_adventure_map::set_map_description(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:409
VA_CHT_1(0x00408c10, 0x19)
void t_abstract_adventure_map::set_map_difficulty(t_difficulty arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:410
VA_CHT_1(0x00408c30, 0x4b)
void t_abstract_adventure_map::set_map_name(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:411
VA_CHT_1(0x00408e60, 0xc)
void t_abstract_adventure_map::stamp_object_image(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:412
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_abstract_adventure_map::unstamp_object_image(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:413
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_abstract_adventure_map::compute_height(
    t_abstract_adv_object const& arg_0,
    t_level_map_point_2d const& arg_1
) const
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:71452
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// t_abstract_adventure_map::compute_height$sdtor
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:414
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool is_under_fog_of_war(
    t_abstract_adventure_map const& arg_0,
    int arg_1,
    t_level_map_point_2d const& arg_2,
    t_map_point_2d const& arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:415
VA_CHT_1(0x004096a0, 0x3e)
bool is_under_fog_of_war(t_abstract_adventure_map const& arg_0, int arg_1, int arg_2)
{
    // Body unavailable.
}

// confidence:D; align-order; RETN!,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:416
VA_CHT_1(0x004098b0, 0x3e)
bool is_under_shroud(
    t_abstract_adventure_map const& arg_0,
    int arg_1,
    t_level_map_point_2d const& arg_2,
    t_map_point_2d const& arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:417
VA_CHT_1(0x00409a00, 0x3e)
bool is_under_shroud(t_abstract_adventure_map const& arg_0, int arg_1, int arg_2)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:71453; name:B (dyninit; see ledger)
VA_CHT_1(0x0040a360, 0x20)
// abstract_adventure_map$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:C; dyninit-tinit; owner-conf-B;manual-review=complete-F00091:unresolved; map:71455; name:B (dyninit; see ledger)
VA_CHT_1(0x0040a910, 0xd0)
// abstract_adventure_map$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:71456
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// abstract_adventure_map$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:71457
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// abstract_adventure_map$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:71458
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// abstract_adventure_map$tatexit4
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:71459
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// abstract_adventure_map$tatexit5
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:71460
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// abstract_adventure_map$tatexit6
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:71461
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// abstract_adventure_map$tatexit7
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:71462
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// abstract_adventure_map$tatexit8
// Function body not reconstructed; signature retained as a comment.

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:71463; name:B (dyninit; see ledger)
VA_CHT_1(0x0040ae90, 0x3f)
// abstract_adventure_map$tinit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:71464
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// abstract_adventure_map$tatexit9
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; atexit,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:71465; name:B (dyninit; see ledger)
VA_CHT_1(0x0040aed0, 0x50)
// abstract_adventure_map$tatexit10
// Function body not reconstructed; signature retained as a comment.

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:71466; name:B (dyninit; see ledger)
VA_CHT_1(0x0040af70, 0x3f)
// abstract_adventure_map$tinit4
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:71467
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// abstract_adventure_map$tatexit11
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; atexit,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:71468; name:B (dyninit; see ledger)
VA_CHT_1(0x0040afb0, 0x50)
// abstract_adventure_map$tatexit12
// Function body not reconstructed; signature retained as a comment.

namespace {

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:418
VA_CHT_1(0x004059a0, 0x20)
t_object_info::t_object_info()
{
    // Body unavailable.
}

// name:A; map symbol; map:419
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_info_array::t_obj_info_vector_ptr::t_obj_info_vector_ptr()
{
    // Body unavailable.
}

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:420
VA_CHT_1(0x00409ab0, 0x25)
t_object_info_array::t_obj_info_vector_ptr::~t_obj_info_vector_ptr()
{
    // Body unavailable.
}

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:421
VA_CHT_1(0x00409ca0, 0x25)
t_object_info_array::t_obj_info_vector_ptr_vector_ptr::t_obj_info_vector_ptr_vector_ptr()
{
    // Body unavailable.
}

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:422
VA_CHT_1(0x00408c90, 0x1d)
t_object_info_array::t_obj_info_vector_ptr_vector_ptr::~t_obj_info_vector_ptr_vector_ptr()
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:423
VA_CHT_1(0x00408ac0, 0x18)
int t_screen_rect::height() const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:424
VA_CHT_1(0x00408ae0, 0x18)
int t_screen_rect::width() const
{
    // Body unavailable.
}

// name:A; map symbol; map:425
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool is_normalized(t_screen_rect const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:426
VA_CHT_1(0x0040a470, 0x1d)
t_screen_point::t_screen_point()
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable,vslot;manual-review=complete-F00045:unresolved; map:427
VA_CHT_1_COMPGEN(0x00405410, 0x1e, SCALAR_DELETING_DTOR, t_abstract_adventure_map)

// name:A; map symbol; map:428
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_abstract_adventure_map)

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:429
VA_CHT_1(0x00409550, 0x3e)
int t_isometric_map_base_base::get_row_end(int arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:430
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_isometric_map_base_base::get_row_start(int arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:431
VA_CHT_1(0x004091a0, 0x1c)
std::string const& t_external_string::operator std::string const&() const
{
    // Body unavailable.
}

// name:A; map symbol; map:432
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::string const& t_external_string::get() const
{
    // Body unavailable.
}

namespace {

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:433
VA_CHT_1(0x00407110, 0x4c)
t_adventure_map_view_cell_grid::t_adventure_map_view_cell_grid(t_screen_rect const& arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:434
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_isometric_map<unsigned char>::~t_isometric_map<unsigned char>()
{
    // Body unavailable.
}

// name:A; map symbol; map:435
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_isometric_vertex_map<unsigned char>::~t_isometric_vertex_map<unsigned char>()
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:436
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_map_view_cell_grid::~t_adventure_map_view_cell_grid()
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:437
VA_CHT_1(0x00408b00, 0x18)
int t_abstract_tile_vertex::get_light() const
{
    // Body unavailable.
}

// name:A; map symbol; map:438
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_abstract_tile_vertex::set_height(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:439
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_abstract_tile_vertex::set_light(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:440
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_point_2d::t_map_point_2d(int arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:441
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_point_2d operator+(t_map_point_2d const& arg_0, t_map_point_2d const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:442
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_point_2d& t_map_point_2d::operator+=(t_map_point_2d const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:443
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_point_2d operator-(t_map_point_2d const& arg_0, t_map_point_2d const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:444
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_point_2d& t_map_point_2d::operator-=(t_map_point_2d const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:445
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_level_map_point_2d::t_level_map_point_2d(t_map_point_2d const& arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:446
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_abstract_adventure_tile::get_intersecting_object_count() const
{
    // Body unavailable.
}

// name:A; map symbol; map:447
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_abstract_adventure_tile::get_intersecting_object_id(int arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:448
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_adv_object const& t_abstract_adventure_map::get_const_object(int arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:449
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_adventure_tile_vertex const& t_abstract_adventure_map::get_const_tile_vertex(
    t_level_map_point_2d arg_0
) const
{
    // Body unavailable.
}

namespace {

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:450
VA_CHT_1(0x00405960, 0x1e)
t_object_info& t_object_info_array::operator[](int arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:451
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_adventure_map::t_apply_height_map_result::t_apply_height_map_result()
{
    // Body unavailable.
}

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:452
VA_CHT_1(0x00405770, 0x3e)
t_abstract_adventure_map::t_apply_height_map_result::~t_apply_height_map_result()
{
    // Body unavailable.
}

// name:A; map symbol; map:453
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_vector_set<int, std::less<int>, std::allocator<int>>::~t_vector_set<int, std::less<int>, std::allocator<int>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:454
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_adventure_map::t_apply_height_map_result::t_apply_height_map_result(
    t_abstract_adventure_map::t_apply_height_map_result const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:455
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_vector_set<t_map_point_2d, std::less<t_map_point_2d>, std::allocator<t_map_point_2d>>::~t_vector_set<t_map_point_2d, std::less<t_map_point_2d>, std::allocator<t_map_point_2d>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:457
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_vector_set<t_map_point_2d, std::less<t_map_point_2d>, std::allocator<t_map_point_2d>>::t_vector_set<t_map_point_2d, std::less<t_map_point_2d>, std::allocator<t_map_point_2d>>(
    t_vector_set<t_map_point_2d, std::less<t_map_point_2d>, std::allocator<t_map_point_2d>> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:459
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_level_map_point_2d::t_level_map_point_2d()
{
    // Body unavailable.
}

// name:A; map symbol; map:460
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_point_2d::t_map_point_2d()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:461
VA_CHT_1(0x00408b20, 0x18)
int t_isometric_map_base_base::get_size() const
{
    // Body unavailable.
}

namespace {

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:462
VA_CHT_1(0x00408ba0, 0x18)
int t_object_info_array::get_count() const
{
    // Body unavailable.
}

// name:A; map symbol; map:463
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_info const& t_object_info_array::operator[](int arg_0) const
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:464
VA_CHT_1(0x00408a60, 0x28)
t_level_map_point_2d::t_level_map_point_2d(int arg_0, int arg_1, int arg_2)
{
    // Body unavailable.
}

// name:A; map symbol; map:465
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_point_2d convert_screen_point_to_map(t_screen_point arg_0, int arg_1, t_screen_point arg_2, int arg_3)
{
    // Body unavailable.
}

// name:A; map symbol; map:466
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_point convert_map_point_to_screen(
    t_map_point_2d const& arg_0,
    int arg_1,
    t_screen_point arg_2,
    int arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:467
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_map_view_cell_grid const& t_abstract_adventure_map::t_impl::get_view_cell_grid(int arg_0) const
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:468
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adventure_map_view_cell_grid::is_valid(t_screen_point const& arg_0) const
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:469
VA_CHT_1(0x00408bc0, 0x18)
int t_abstract_tile_vertex::get_height() const
{
    // Body unavailable.
}

// name:A; map symbol; map:470
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_level_map_point_2d operator+(t_level_map_point_2d const& arg_0, t_map_point_2d const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:471
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_level_map_point_2d& t_level_map_point_2d::operator+=(t_map_point_2d const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:472
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_map_view_cell_grid& t_abstract_adventure_map::t_impl::get_view_cell_grid(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:473
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_map_view_cell::t_object_subimage_info::t_object_subimage_info(int arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:474
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_map_view_cell::t_object_subimage_info* t_adventure_map_view_cell::object_subimage_begin()
{
    // Body unavailable.
}

// name:A; map symbol; map:475
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_map_view_cell::t_object_subimage_info* t_adventure_map_view_cell::object_subimage_end()
{
    // Body unavailable.
}

// name:A; map symbol; map:476
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_map_view_cell::t_object_subimage_info* t_adventure_map_view_cell::object_subimage_insert(
    t_adventure_map_view_cell::t_object_subimage_info* arg_0,
    t_adventure_map_view_cell::t_object_subimage_info arg_1
)
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:477
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_rect to_view_cell_coordinates(t_screen_rect const& arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:478
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_map_view_cell::t_object_subimage_info* t_adventure_map_view_cell::object_subimage_erase(
    t_adventure_map_view_cell::t_object_subimage_info* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:479
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::vector<t_isometric_map_row_data, std::allocator<t_isometric_map_row_data>> const& t_copy_on_write_ptr<std::vector<t_isometric_map_row_data, std::allocator<t_isometric_map_row_data>>>::operator*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:481
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::vector<int, std::allocator<int>> const* t_copy_on_write_ptr<std::vector<int, std::allocator<int>>>::get_const(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:482
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::vector<int, std::allocator<int>>& t_copy_on_write_ptr<std::vector<int, std::allocator<int>>>::operator*()
{
    // Body unavailable.
}

// name:A; map symbol; map:483
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::vector<int, std::allocator<int>> const& t_copy_on_write_ptr<std::vector<int, std::allocator<int>>>::operator*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:484
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::vector<int, std::allocator<int>> const* t_copy_on_write_ptr<std::vector<int, std::allocator<int>>>::operator->(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:494
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::vector<t_adventure_map_view_cell::t_object_subimage_info, std::allocator<t_adventure_map_view_cell::t_object_subimage_info>>* t_copy_on_write_ptr<std::vector<t_adventure_map_view_cell::t_object_subimage_info, std::allocator<t_adventure_map_view_cell::t_object_subimage_info>>>::operator->(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:495
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_vector_set<t_map_point_2d, std::less<t_map_point_2d>, std::allocator<t_map_point_2d>>::t_vector_set<t_map_point_2d, std::less<t_map_point_2d>, std::allocator<t_map_point_2d>>(
    std::less<t_map_point_2d> const& arg_0,
    std::allocator<t_map_point_2d> const& arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:496
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_point_2d const* t_vector_set<t_map_point_2d, std::less<t_map_point_2d>, std::allocator<t_map_point_2d>>::begin(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:497
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_point_2d const* t_vector_set<t_map_point_2d, std::less<t_map_point_2d>, std::allocator<t_map_point_2d>>::end(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:504
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_adventure_map::t_impl const* t_copy_on_write_ptr<t_abstract_adventure_map::t_impl>::get_const(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:505
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_adventure_map::t_impl& t_copy_on_write_ptr<t_abstract_adventure_map::t_impl>::operator*()
{
    // Body unavailable.
}

// name:A; map symbol; map:506
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_adventure_map::t_impl const& t_copy_on_write_ptr<t_abstract_adventure_map::t_impl>::operator*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:507
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_adventure_map::t_impl* t_copy_on_write_ptr<t_abstract_adventure_map::t_impl>::operator->()
{
    // Body unavailable.
}

// name:A; map symbol; map:508
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_adventure_map::t_impl const* t_copy_on_write_ptr<t_abstract_adventure_map::t_impl>::operator->(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:514
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::vector<t_object_info, std::allocator<t_object_info>>& t_copy_on_write_ptr<std::vector<t_object_info, std::allocator<t_object_info>>>::operator*(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:515
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::vector<t_object_info, std::allocator<t_object_info>> const& t_copy_on_write_ptr<std::vector<t_object_info, std::allocator<t_object_info>>>::operator*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:516
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::vector<t_object_info_array::t_obj_info_vector_ptr, std::allocator<t_object_info_array::t_obj_info_vector_ptr>>& t_copy_on_write_ptr<std::vector<t_object_info_array::t_obj_info_vector_ptr, std::allocator<t_object_info_array::t_obj_info_vector_ptr>>>::operator*(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:517
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::vector<t_object_info_array::t_obj_info_vector_ptr, std::allocator<t_object_info_array::t_obj_info_vector_ptr>> const& t_copy_on_write_ptr<std::vector<t_object_info_array::t_obj_info_vector_ptr, std::allocator<t_object_info_array::t_obj_info_vector_ptr>>>::operator*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:518
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::vector<t_object_info_array::t_obj_info_vector_ptr_vector_ptr, std::allocator<t_object_info_array::t_obj_info_vector_ptr_vector_ptr>>& t_copy_on_write_ptr<std::vector<t_object_info_array::t_obj_info_vector_ptr_vector_ptr, std::allocator<t_object_info_array::t_obj_info_vector_ptr_vector_ptr>>>::operator*(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:519
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::vector<t_object_info_array::t_obj_info_vector_ptr_vector_ptr, std::allocator<t_object_info_array::t_obj_info_vector_ptr_vector_ptr>> const& t_copy_on_write_ptr<std::vector<t_object_info_array::t_obj_info_vector_ptr_vector_ptr, std::allocator<t_object_info_array::t_obj_info_vector_ptr_vector_ptr>>>::operator*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:532
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::vector<t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>, std::allocator<t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>>>& t_copy_on_write_ptr<std::vector<t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>, std::allocator<t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>>>>::operator*(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:533
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::vector<t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>, std::allocator<t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>>> const& t_copy_on_write_ptr<std::vector<t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>, std::allocator<t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>>>>::operator*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:534
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::vector<t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>, std::allocator<t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>>>* t_copy_on_write_ptr<std::vector<t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>, std::allocator<t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>>>>::operator->(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:535
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::vector<t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>, std::allocator<t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>>> const* t_copy_on_write_ptr<std::vector<t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>, std::allocator<t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>>>>::operator->(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:540
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>& t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>::operator*(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:541
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4> const& t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>::operator*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:542
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_static_vector<t_adventure_map_view_cell, 4>& t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>::operator[](
    unsigned int arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:543
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_static_vector<t_adventure_map_view_cell, 4> const& t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>::operator[](
    unsigned int arg_0
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:544
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_map_view_cell& t_static_vector<t_adventure_map_view_cell, 4>::operator[](unsigned int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:545
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_map_view_cell const& t_static_vector<t_adventure_map_view_cell, 4>::operator[](
    unsigned int arg_0
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:549
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_adventure_map::t_impl::t_properties& t_copy_on_write_ptr<t_abstract_adventure_map::t_impl::t_properties>::operator*(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:550
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_adventure_map::t_impl::t_properties* t_copy_on_write_ptr<t_abstract_adventure_map::t_impl::t_properties>::operator->(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:551
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_adventure_map::t_impl::t_properties const* t_copy_on_write_ptr<t_abstract_adventure_map::t_impl::t_properties>::operator->(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:552
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::vector<t_adventure_map_view_cell_grid, std::allocator<t_adventure_map_view_cell_grid>>& t_copy_on_write_ptr<std::vector<t_adventure_map_view_cell_grid, std::allocator<t_adventure_map_view_cell_grid>>>::operator*(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:553
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::vector<t_adventure_map_view_cell_grid, std::allocator<t_adventure_map_view_cell_grid>> const& t_copy_on_write_ptr<std::vector<t_adventure_map_view_cell_grid, std::allocator<t_adventure_map_view_cell_grid>>>::operator*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:554
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::vector<t_adventure_map_view_cell_grid, std::allocator<t_adventure_map_view_cell_grid>>* t_copy_on_write_ptr<std::vector<t_adventure_map_view_cell_grid, std::allocator<t_adventure_map_view_cell_grid>>>::operator->(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:558
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_basic_isometric_map<t_isometric_tile_map_base, unsigned char>::~t_basic_isometric_map<t_isometric_tile_map_base, unsigned char>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:559
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_isometric_tile_map_base::~t_isometric_tile_map_base()
{
    // Body unavailable.
}

// name:A; map symbol; map:560
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_isometric_map_base_base::~t_isometric_map_base_base()
{
    // Body unavailable.
}

// name:A; map symbol; map:562
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_basic_isometric_map<t_isometric_vertex_map_base, unsigned char>::~t_basic_isometric_map<t_isometric_vertex_map_base, unsigned char>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:563
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_isometric_vertex_map_base::~t_isometric_vertex_map_base()
{
    // Body unavailable.
}

// name:A; map symbol; map:564
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_vector_set<int, std::less<int>, std::allocator<int>>::t_vector_set<int, std::less<int>, std::allocator<int>>(
    std::less<int> const& arg_0,
    std::allocator<int> const& arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:565
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int const* t_vector_set<int, std::less<int>, std::allocator<int>>::begin() const
{
    // Body unavailable.
}

// name:A; map symbol; map:566
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int const* t_vector_set<int, std::less<int>, std::allocator<int>>::end() const
{
    // Body unavailable.
}

// name:A; map symbol; map:574
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::vector<t_isometric_map_row_data, std::allocator<t_isometric_map_row_data>> const* t_copy_on_write_ptr<std::vector<t_isometric_map_row_data, std::allocator<t_isometric_map_row_data>>>::get(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:576
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::vector<int, std::allocator<int>> const* t_copy_on_write_ptr<std::vector<int, std::allocator<int>>>::get(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:598
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_adventure_map::t_impl const* t_copy_on_write_ptr<t_abstract_adventure_map::t_impl>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:608
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::vector<t_object_info, std::allocator<t_object_info>> const* t_copy_on_write_ptr<std::vector<t_object_info, std::allocator<t_object_info>>>::get(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:609
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::vector<t_object_info_array::t_obj_info_vector_ptr, std::allocator<t_object_info_array::t_obj_info_vector_ptr>> const* t_copy_on_write_ptr<std::vector<t_object_info_array::t_obj_info_vector_ptr, std::allocator<t_object_info_array::t_obj_info_vector_ptr>>>::get(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:610
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::vector<t_object_info_array::t_obj_info_vector_ptr_vector_ptr, std::allocator<t_object_info_array::t_obj_info_vector_ptr_vector_ptr>> const* t_copy_on_write_ptr<std::vector<t_object_info_array::t_obj_info_vector_ptr_vector_ptr, std::allocator<t_object_info_array::t_obj_info_vector_ptr_vector_ptr>>>::get(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:623
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::vector<t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>, std::allocator<t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>>> const* t_copy_on_write_ptr<std::vector<t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>, std::allocator<t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>>>>::get(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:629
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4> const* t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>::get(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:630
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_static_vector<t_adventure_map_view_cell, 4>* t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>::begin(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:631
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_static_vector<t_adventure_map_view_cell, 4> const* t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>::begin(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:632
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_map_view_cell* t_static_vector<t_adventure_map_view_cell, 4>::begin()
{
    // Body unavailable.
}

// name:A; map symbol; map:633
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_map_view_cell const* t_static_vector<t_adventure_map_view_cell, 4>::begin() const
{
    // Body unavailable.
}

// name:A; map symbol; map:640
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_adventure_map::t_impl::t_properties const* t_copy_on_write_ptr<t_abstract_adventure_map::t_impl::t_properties>::get(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:641
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::vector<t_adventure_map_view_cell_grid, std::allocator<t_adventure_map_view_cell_grid>> const* t_copy_on_write_ptr<std::vector<t_adventure_map_view_cell_grid, std::allocator<t_adventure_map_view_cell_grid>>>::get(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:652
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool operator<(t_map_point_2d const& arg_0, t_map_point_2d const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:768
VA_CHT_1(0x004098f0, 0x4a)
t_copy_on_write_ptr<std::vector<t_isometric_map_row_data, std::allocator<t_isometric_map_row_data>>>::~t_copy_on_write_ptr<std::vector<t_isometric_map_row_data, std::allocator<t_isometric_map_row_data>>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:769
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::vector<int, std::allocator<int>>* t_copy_on_write_ptr<std::vector<int, std::allocator<int>>>::get()
{
    // Body unavailable.
}

// name:A; map symbol; map:770
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::vector<t_adventure_map_view_cell::t_object_subimage_info, std::allocator<t_adventure_map_view_cell::t_object_subimage_info>>* t_copy_on_write_ptr<std::vector<t_adventure_map_view_cell::t_object_subimage_info, std::allocator<t_adventure_map_view_cell::t_object_subimage_info>>>::get(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:771
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_point_2d const* t_vector_set<t_map_point_2d, std::less<t_map_point_2d>, std::allocator<t_map_point_2d>>::erase(
    t_map_point_2d const* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:772
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::pair<t_map_point_2d const*, bool> t_vector_set<t_map_point_2d, std::less<t_map_point_2d>, std::allocator<t_map_point_2d>>::insert(
    t_map_point_2d const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:773
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_copy_on_write_ptr<t_abstract_adventure_map::t_impl>::t_copy_on_write_ptr<t_abstract_adventure_map::t_impl>(
    t_copy_on_write_ptr<t_abstract_adventure_map::t_impl> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:774
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_copy_on_write_ptr<t_abstract_adventure_map::t_impl>::t_copy_on_write_ptr<t_abstract_adventure_map::t_impl>()
{
    // Body unavailable.
}

// name:A; map symbol; map:775
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_copy_on_write_ptr<t_abstract_adventure_map::t_impl>::~t_copy_on_write_ptr<t_abstract_adventure_map::t_impl>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:776
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_adventure_map::t_impl* t_copy_on_write_ptr<t_abstract_adventure_map::t_impl>::get()
{
    // Body unavailable.
}

// name:A; map symbol; map:777
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_copy_on_write_ptr<t_abstract_adventure_map::t_impl>& t_copy_on_write_ptr<t_abstract_adventure_map::t_impl>::operator=(
    t_copy_on_write_ptr<t_abstract_adventure_map::t_impl> const& arg_0
)
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable;manual-review=complete-F00073:unresolved; map:778
VA_CHT_1(0x00407070, 0x20)
t_quad<t_abstract_adventure_tile_vertex const&>::t_quad<t_abstract_adventure_tile_vertex const&>(
    t_abstract_adventure_tile_vertex const& arg_0,
    t_abstract_adventure_tile_vertex const& arg_1,
    t_abstract_adventure_tile_vertex const& arg_2,
    t_abstract_adventure_tile_vertex const& arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:779
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_copy_on_write_ptr<std::vector<t_object_info, std::allocator<t_object_info>>>::t_copy_on_write_ptr<std::vector<t_object_info, std::allocator<t_object_info>>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:780
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_copy_on_write_ptr<std::vector<t_object_info, std::allocator<t_object_info>>>::~t_copy_on_write_ptr<std::vector<t_object_info, std::allocator<t_object_info>>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:781
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::vector<t_object_info, std::allocator<t_object_info>>* t_copy_on_write_ptr<std::vector<t_object_info, std::allocator<t_object_info>>>::get(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:782
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_copy_on_write_ptr<std::vector<t_object_info_array::t_obj_info_vector_ptr, std::allocator<t_object_info_array::t_obj_info_vector_ptr>>>::t_copy_on_write_ptr<std::vector<t_object_info_array::t_obj_info_vector_ptr, std::allocator<t_object_info_array::t_obj_info_vector_ptr>>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:783
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_copy_on_write_ptr<std::vector<t_object_info_array::t_obj_info_vector_ptr, std::allocator<t_object_info_array::t_obj_info_vector_ptr>>>::~t_copy_on_write_ptr<std::vector<t_object_info_array::t_obj_info_vector_ptr, std::allocator<t_object_info_array::t_obj_info_vector_ptr>>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:784
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::vector<t_object_info_array::t_obj_info_vector_ptr, std::allocator<t_object_info_array::t_obj_info_vector_ptr>>* t_copy_on_write_ptr<std::vector<t_object_info_array::t_obj_info_vector_ptr, std::allocator<t_object_info_array::t_obj_info_vector_ptr>>>::get(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:785
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::vector<t_object_info_array::t_obj_info_vector_ptr_vector_ptr, std::allocator<t_object_info_array::t_obj_info_vector_ptr_vector_ptr>>* t_copy_on_write_ptr<std::vector<t_object_info_array::t_obj_info_vector_ptr_vector_ptr, std::allocator<t_object_info_array::t_obj_info_vector_ptr_vector_ptr>>>::get(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:786
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_copy_on_write_ptr<std::vector<t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>, std::allocator<t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>>>>::t_copy_on_write_ptr<std::vector<t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>, std::allocator<t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>>>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:787
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_copy_on_write_ptr<std::vector<t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>, std::allocator<t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>>>>::~t_copy_on_write_ptr<std::vector<t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>, std::allocator<t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>>>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:788
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::vector<t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>, std::allocator<t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>>>* t_copy_on_write_ptr<std::vector<t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>, std::allocator<t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>>>>::get(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:789
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>::t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:790
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>::~t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:791
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>* t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>::get(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:794
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_adventure_map::t_impl::t_properties* t_copy_on_write_ptr<t_abstract_adventure_map::t_impl::t_properties>::get(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:795
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::vector<t_adventure_map_view_cell_grid, std::allocator<t_adventure_map_view_cell_grid>>* t_copy_on_write_ptr<std::vector<t_adventure_map_view_cell_grid, std::allocator<t_adventure_map_view_cell_grid>>>::get(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:796
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_isometric_map<unsigned char>::t_isometric_map<unsigned char>(
    int arg_0,
    int arg_1,
    int arg_2,
    unsigned char const& arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:797
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_isometric_vertex_map<unsigned char>::t_isometric_vertex_map<unsigned char>(
    int arg_0,
    int arg_1,
    int arg_2,
    unsigned char const& arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:798
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::pair<int const*, bool> t_vector_set<int, std::less<int>, std::allocator<int>>::insert(int const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:801
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int const& t_basic_isometric_map<t_isometric_vertex_map_base, int>::get(
    t_level_map_point_2d const& arg_0
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:802
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_isometric_map_base_base::get_row_offset(int arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:803
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_basic_isometric_map<t_isometric_vertex_map_base, int>::get_levels() const
{
    // Body unavailable.
}

// name:A; map symbol; map:804
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_basic_isometric_map<t_isometric_vertex_map_base, int>::is_valid(
    t_level_map_point_2d const& arg_0
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:805
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_isometric_map_base_base::is_valid(t_map_point_2d const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:806
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_quad<t_abstract_adventure_tile_vertex&>::t_quad<t_abstract_adventure_tile_vertex&>(
    t_abstract_adventure_tile_vertex& arg_0,
    t_abstract_adventure_tile_vertex& arg_1,
    t_abstract_adventure_tile_vertex& arg_2,
    t_abstract_adventure_tile_vertex& arg_3
)
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:808
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool is_under_fog_of_war_helper(
    t_abstract_adventure_map const& arg_0,
    int arg_1,
    t_level_map_point_2d const& arg_2,
    t_map_point_2d const& arg_3,
    t_test_visible arg_4
)
{
    // Body unavailable.
}

// name:A; map symbol; map:809
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_test_visible::operator()(t_tile_visibility arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:810
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool is_under_fog_of_war_helper(
    t_abstract_adventure_map const& arg_0,
    int arg_1,
    t_level_map_point_2d const& arg_2,
    t_map_point_2d const& arg_3,
    t_test_explored arg_4
)
{
    // Body unavailable.
}

// name:A; map symbol; map:811
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_test_explored::operator()(t_tile_visibility arg_0) const
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:835
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void* operator new(unsigned int arg_0, void* arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:858
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void operator delete(void* arg_0, void* arg_1)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:870
VA_CHT_1_COMPGEN(0x00408cb0, 0x1e, SCALAR_DELETING_DTOR, "copy_on_write_ptr_details::t_body<std::vector<t_isometric_map_row_data, std::allocator<t_isometric_map_row_data>>>")

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:871
VA_CHT_1_COMPGEN(0x00408cd0, 0x1e, SCALAR_DELETING_DTOR, "copy_on_write_ptr_details::t_body<t_abstract_adventure_map::t_impl>")

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:872
VA_CHT_1_COMPGEN(0x00408e70, 0x1e, SCALAR_DELETING_DTOR, "copy_on_write_ptr_details::t_body<std::vector<t_object_info, std::allocator<t_object_info>>>")

// name:A; map symbol; map:873
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "copy_on_write_ptr_details::t_body<std::vector<t_object_info_array::t_obj_info_vector_ptr, std::allocator<t_object_info_array::t_obj_info_vector_ptr>>>")

// name:A; map symbol; map:874
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "copy_on_write_ptr_details::t_body<std::vector<t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>, std::allocator<t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>>>>")

// name:A; map symbol; map:875
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "copy_on_write_ptr_details::t_body<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>")

namespace {

// name:A; map symbol; map:876
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_map_view_cell_grid& t_adventure_map_view_cell_grid::operator=(
    t_adventure_map_view_cell_grid const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:877
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_info_array::t_obj_info_vector_ptr_vector_ptr& t_object_info_array::t_obj_info_vector_ptr_vector_ptr::operator=(
    t_object_info_array::t_obj_info_vector_ptr_vector_ptr const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:878
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_info_array::t_obj_info_vector_ptr& t_object_info_array::t_obj_info_vector_ptr::operator=(
    t_object_info_array::t_obj_info_vector_ptr const& arg_0
)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:879
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>")

namespace {

// name:A; map symbol; map:880
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_map_view_cell_grid::t_adventure_map_view_cell_grid(t_adventure_map_view_cell_grid const& arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:881
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_adventure_map_view_cell_grid)

namespace {

// name:A; map symbol; map:882
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_info_array::t_obj_info_vector_ptr_vector_ptr::t_obj_info_vector_ptr_vector_ptr(
    t_object_info_array::t_obj_info_vector_ptr_vector_ptr const& arg_0
)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:883
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_object_info_array::t_obj_info_vector_ptr_vector_ptr)

namespace {

// name:A; map symbol; map:884
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_info_array::t_obj_info_vector_ptr::t_obj_info_vector_ptr(
    t_object_info_array::t_obj_info_vector_ptr const& arg_0
)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:885
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_object_info_array::t_obj_info_vector_ptr)

// name:A; map symbol; map:886
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
copy_on_write_ptr_details::t_body<std::vector<t_isometric_map_row_data, std::allocator<t_isometric_map_row_data>>>::~t_body<std::vector<t_isometric_map_row_data, std::allocator<t_isometric_map_row_data>>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:887
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
copy_on_write_ptr_details::t_body<t_abstract_adventure_map::t_impl>::~t_body<t_abstract_adventure_map::t_impl>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:888
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
copy_on_write_ptr_details::t_body<std::vector<t_object_info, std::allocator<t_object_info>>>::~t_body<std::vector<t_object_info, std::allocator<t_object_info>>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:889
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
copy_on_write_ptr_details::t_body<std::vector<t_object_info_array::t_obj_info_vector_ptr, std::allocator<t_object_info_array::t_obj_info_vector_ptr>>>::~t_body<std::vector<t_object_info_array::t_obj_info_vector_ptr, std::allocator<t_object_info_array::t_obj_info_vector_ptr>>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:890
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
copy_on_write_ptr_details::t_body<std::vector<t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>, std::allocator<t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>>>>::~t_body<std::vector<t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>, std::allocator<t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>>>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:891
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
copy_on_write_ptr_details::t_body<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>::~t_body<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:892
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_adventure_map::t_impl::~t_impl()
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:893
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_info_array::~t_object_info_array()
{
    // Body unavailable.
}

// name:A; map symbol; map:894
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_info_array::t_obj_info_vector_ptr_vector_ptr_vector_ptr::~t_obj_info_vector_ptr_vector_ptr_vector_ptr(

)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:895
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_copy_on_write_ptr<std::vector<t_object_info_array::t_obj_info_vector_ptr_vector_ptr, std::allocator<t_object_info_array::t_obj_info_vector_ptr_vector_ptr>>>::~t_copy_on_write_ptr<std::vector<t_object_info_array::t_obj_info_vector_ptr_vector_ptr, std::allocator<t_object_info_array::t_obj_info_vector_ptr_vector_ptr>>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:896
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "copy_on_write_ptr_details::t_body<std::vector<t_object_info_array::t_obj_info_vector_ptr_vector_ptr, std::allocator<t_object_info_array::t_obj_info_vector_ptr_vector_ptr>>>")

// name:A; map symbol; map:897
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
copy_on_write_ptr_details::t_body<std::vector<t_object_info_array::t_obj_info_vector_ptr_vector_ptr, std::allocator<t_object_info_array::t_obj_info_vector_ptr_vector_ptr>>>::~t_body<std::vector<t_object_info_array::t_obj_info_vector_ptr_vector_ptr, std::allocator<t_object_info_array::t_obj_info_vector_ptr_vector_ptr>>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:899
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::less<t_map_point_2d> t_vector_set<t_map_point_2d, std::less<t_map_point_2d>, std::allocator<t_map_point_2d>>::key_comp(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:907
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::less<int> t_vector_set<int, std::less<int>, std::allocator<int>>::key_comp() const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:917
VA_CHT_1(0x00409940, 0xb6)
void t_copy_on_write_ptr<std::vector<int, std::allocator<int>>>::split()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:918
VA_CHT_1(0x0040a720, 0x127)
void t_copy_on_write_ptr<std::vector<t_adventure_map_view_cell::t_object_subimage_info, std::allocator<t_adventure_map_view_cell::t_object_subimage_info>>>::split(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:919
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_point_2d const* t_vector_set<t_map_point_2d, std::less<t_map_point_2d>, std::allocator<t_map_point_2d>>::lower_bound(
    t_map_point_2d const& arg_0
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:920
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
copy_on_write_ptr_details::t_body<t_abstract_adventure_map::t_impl>* t_copy_on_write_ptr<t_abstract_adventure_map::t_impl>::get_default_body(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:921
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_copy_on_write_ptr<t_abstract_adventure_map::t_impl>::split()
{
    // Body unavailable.
}

// name:A; map symbol; map:922
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_copy_on_write_ptr<std::vector<t_object_info, std::allocator<t_object_info>>>::t_copy_on_write_ptr<std::vector<t_object_info, std::allocator<t_object_info>>>(
    t_copy_on_write_ptr<std::vector<t_object_info, std::allocator<t_object_info>>> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:923
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_copy_on_write_ptr<std::vector<t_object_info, std::allocator<t_object_info>>>& t_copy_on_write_ptr<std::vector<t_object_info, std::allocator<t_object_info>>>::operator=(
    t_copy_on_write_ptr<std::vector<t_object_info, std::allocator<t_object_info>>> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:924
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
copy_on_write_ptr_details::t_body<std::vector<t_object_info, std::allocator<t_object_info>>>* t_copy_on_write_ptr<std::vector<t_object_info, std::allocator<t_object_info>>>::get_default_body(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:925
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_copy_on_write_ptr<std::vector<t_object_info, std::allocator<t_object_info>>>::split()
{
    // Body unavailable.
}

// name:A; map symbol; map:926
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_copy_on_write_ptr<std::vector<t_object_info_array::t_obj_info_vector_ptr, std::allocator<t_object_info_array::t_obj_info_vector_ptr>>>::t_copy_on_write_ptr<std::vector<t_object_info_array::t_obj_info_vector_ptr, std::allocator<t_object_info_array::t_obj_info_vector_ptr>>>(
    t_copy_on_write_ptr<std::vector<t_object_info_array::t_obj_info_vector_ptr, std::allocator<t_object_info_array::t_obj_info_vector_ptr>>> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:927
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_copy_on_write_ptr<std::vector<t_object_info_array::t_obj_info_vector_ptr, std::allocator<t_object_info_array::t_obj_info_vector_ptr>>>& t_copy_on_write_ptr<std::vector<t_object_info_array::t_obj_info_vector_ptr, std::allocator<t_object_info_array::t_obj_info_vector_ptr>>>::operator=(
    t_copy_on_write_ptr<std::vector<t_object_info_array::t_obj_info_vector_ptr, std::allocator<t_object_info_array::t_obj_info_vector_ptr>>> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:928
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
copy_on_write_ptr_details::t_body<std::vector<t_object_info_array::t_obj_info_vector_ptr, std::allocator<t_object_info_array::t_obj_info_vector_ptr>>>* t_copy_on_write_ptr<std::vector<t_object_info_array::t_obj_info_vector_ptr, std::allocator<t_object_info_array::t_obj_info_vector_ptr>>>::get_default_body(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:929
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_copy_on_write_ptr<std::vector<t_object_info_array::t_obj_info_vector_ptr, std::allocator<t_object_info_array::t_obj_info_vector_ptr>>>::split(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:930
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_copy_on_write_ptr<std::vector<t_object_info_array::t_obj_info_vector_ptr_vector_ptr, std::allocator<t_object_info_array::t_obj_info_vector_ptr_vector_ptr>>>::split(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:931
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_copy_on_write_ptr<std::vector<t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>, std::allocator<t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>>>>::t_copy_on_write_ptr<std::vector<t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>, std::allocator<t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>>>>(
    t_copy_on_write_ptr<std::vector<t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>, std::allocator<t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>>>> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:932
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_copy_on_write_ptr<std::vector<t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>, std::allocator<t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>>>>& t_copy_on_write_ptr<std::vector<t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>, std::allocator<t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>>>>::operator=(
    t_copy_on_write_ptr<std::vector<t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>, std::allocator<t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>>>> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:933
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
copy_on_write_ptr_details::t_body<std::vector<t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>, std::allocator<t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>>>>* t_copy_on_write_ptr<std::vector<t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>, std::allocator<t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>>>>::get_default_body(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:934
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_copy_on_write_ptr<std::vector<t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>, std::allocator<t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>>>>::split(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:935
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>::t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>(
    t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:936
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>& t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>::operator=(
    t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:937
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
copy_on_write_ptr_details::t_body<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>* t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>::get_default_body(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:938
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>::split()
{
    // Body unavailable.
}

// name:A; map symbol; map:942
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_copy_on_write_ptr<t_abstract_adventure_map::t_impl::t_properties>::~t_copy_on_write_ptr<t_abstract_adventure_map::t_impl::t_properties>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:943
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_copy_on_write_ptr<t_abstract_adventure_map::t_impl::t_properties>::split()
{
    // Body unavailable.
}

// name:A; map symbol; map:944
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_copy_on_write_ptr<std::vector<t_adventure_map_view_cell_grid, std::allocator<t_adventure_map_view_cell_grid>>>::~t_copy_on_write_ptr<std::vector<t_adventure_map_view_cell_grid, std::allocator<t_adventure_map_view_cell_grid>>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:945
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_copy_on_write_ptr<std::vector<t_adventure_map_view_cell_grid, std::allocator<t_adventure_map_view_cell_grid>>>::split(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:946
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_basic_isometric_map<t_isometric_tile_map_base, unsigned char>::t_basic_isometric_map<t_isometric_tile_map_base, unsigned char>(
    int arg_0,
    int arg_1,
    int arg_2,
    unsigned char const& arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:947
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_isometric_tile_map_base::t_isometric_tile_map_base()
{
    // Body unavailable.
}

// name:A; map symbol; map:948
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_basic_isometric_map<t_isometric_vertex_map_base, unsigned char>::t_basic_isometric_map<t_isometric_vertex_map_base, unsigned char>(
    int arg_0,
    int arg_1,
    int arg_2,
    unsigned char const& arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:949
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_isometric_vertex_map_base::t_isometric_vertex_map_base()
{
    // Body unavailable.
}

// name:A; map symbol; map:950
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int const* t_vector_set<int, std::less<int>, std::allocator<int>>::lower_bound(int const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:951
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>::~t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:956
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "copy_on_write_ptr_details::t_body<t_abstract_adventure_map::t_impl::t_properties>")

// name:A; map symbol; map:957
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "copy_on_write_ptr_details::t_body<std::vector<t_adventure_map_view_cell_grid, std::allocator<t_adventure_map_view_cell_grid>>>")

// name:A; map symbol; map:958
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_static_vector<t_adventure_map_view_cell, 4>")

// name:A; map symbol; map:959
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
copy_on_write_ptr_details::t_body<t_abstract_adventure_map::t_impl::t_properties>::~t_body<t_abstract_adventure_map::t_impl::t_properties>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:960
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
copy_on_write_ptr_details::t_body<std::vector<t_adventure_map_view_cell_grid, std::allocator<t_adventure_map_view_cell_grid>>>::~t_body<std::vector<t_adventure_map_view_cell_grid, std::allocator<t_adventure_map_view_cell_grid>>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:961
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_adventure_map::t_impl::t_properties::~t_properties()
{
    // Body unavailable.
}

// name:A; map symbol; map:963
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_static_vector<t_adventure_map_view_cell, 4>* t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>::end(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:966
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
copy_on_write_ptr_details::t_body<std::vector<int, std::allocator<int>>>::t_body<std::vector<int, std::allocator<int>>>(
    std::vector<int, std::allocator<int>> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:967
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
copy_on_write_ptr_details::t_body<std::vector<t_adventure_map_view_cell::t_object_subimage_info, std::allocator<t_adventure_map_view_cell::t_object_subimage_info>>>::t_body<std::vector<t_adventure_map_view_cell::t_object_subimage_info, std::allocator<t_adventure_map_view_cell::t_object_subimage_info>>>(
    std::vector<t_adventure_map_view_cell::t_object_subimage_info, std::allocator<t_adventure_map_view_cell::t_object_subimage_info>> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:968
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
copy_on_write_ptr_details::t_body<t_abstract_adventure_map::t_impl>::t_body<t_abstract_adventure_map::t_impl>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:969
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
copy_on_write_ptr_details::t_body<t_abstract_adventure_map::t_impl>::t_body<t_abstract_adventure_map::t_impl>(
    t_abstract_adventure_map::t_impl const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:970
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
copy_on_write_ptr_details::t_body<std::vector<t_object_info, std::allocator<t_object_info>>>::t_body<std::vector<t_object_info, std::allocator<t_object_info>>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:971
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
copy_on_write_ptr_details::t_body<std::vector<t_object_info, std::allocator<t_object_info>>>::t_body<std::vector<t_object_info, std::allocator<t_object_info>>>(
    std::vector<t_object_info, std::allocator<t_object_info>> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:972
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
copy_on_write_ptr_details::t_body<std::vector<t_object_info_array::t_obj_info_vector_ptr, std::allocator<t_object_info_array::t_obj_info_vector_ptr>>>::t_body<std::vector<t_object_info_array::t_obj_info_vector_ptr, std::allocator<t_object_info_array::t_obj_info_vector_ptr>>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:973
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
copy_on_write_ptr_details::t_body<std::vector<t_object_info_array::t_obj_info_vector_ptr, std::allocator<t_object_info_array::t_obj_info_vector_ptr>>>::t_body<std::vector<t_object_info_array::t_obj_info_vector_ptr, std::allocator<t_object_info_array::t_obj_info_vector_ptr>>>(
    std::vector<t_object_info_array::t_obj_info_vector_ptr, std::allocator<t_object_info_array::t_obj_info_vector_ptr>> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:974
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
copy_on_write_ptr_details::t_body<std::vector<t_object_info_array::t_obj_info_vector_ptr_vector_ptr, std::allocator<t_object_info_array::t_obj_info_vector_ptr_vector_ptr>>>::t_body<std::vector<t_object_info_array::t_obj_info_vector_ptr_vector_ptr, std::allocator<t_object_info_array::t_obj_info_vector_ptr_vector_ptr>>>(
    std::vector<t_object_info_array::t_obj_info_vector_ptr_vector_ptr, std::allocator<t_object_info_array::t_obj_info_vector_ptr_vector_ptr>> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:975
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
copy_on_write_ptr_details::t_body<std::vector<t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>, std::allocator<t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>>>>::t_body<std::vector<t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>, std::allocator<t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>>>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:976
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
copy_on_write_ptr_details::t_body<std::vector<t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>, std::allocator<t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>>>>::t_body<std::vector<t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>, std::allocator<t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>>>>(
    std::vector<t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>, std::allocator<t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>>> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:977
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
copy_on_write_ptr_details::t_body<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>::t_body<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:978
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
copy_on_write_ptr_details::t_body<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>::t_body<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>(
    t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:979
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
copy_on_write_ptr_details::t_body<t_abstract_adventure_map::t_impl::t_properties>::t_body<t_abstract_adventure_map::t_impl::t_properties>(
    t_abstract_adventure_map::t_impl::t_properties const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:980
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
copy_on_write_ptr_details::t_body<std::vector<t_adventure_map_view_cell_grid, std::allocator<t_adventure_map_view_cell_grid>>>::t_body<std::vector<t_adventure_map_view_cell_grid, std::allocator<t_adventure_map_view_cell_grid>>>(
    std::vector<t_adventure_map_view_cell_grid, std::allocator<t_adventure_map_view_cell_grid>> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:981
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_adventure_map::t_impl::t_impl()
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:982
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_info_array::t_object_info_array()
{
    // Body unavailable.
}

// name:A; map symbol; map:983
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_info_array::t_obj_info_vector_ptr_vector_ptr_vector_ptr::t_obj_info_vector_ptr_vector_ptr_vector_ptr(

)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:984
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_copy_on_write_ptr<std::vector<t_object_info_array::t_obj_info_vector_ptr_vector_ptr, std::allocator<t_object_info_array::t_obj_info_vector_ptr_vector_ptr>>>::t_copy_on_write_ptr<std::vector<t_object_info_array::t_obj_info_vector_ptr_vector_ptr, std::allocator<t_object_info_array::t_obj_info_vector_ptr_vector_ptr>>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:985
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
copy_on_write_ptr_details::t_body<std::vector<t_object_info_array::t_obj_info_vector_ptr_vector_ptr, std::allocator<t_object_info_array::t_obj_info_vector_ptr_vector_ptr>>>* t_copy_on_write_ptr<std::vector<t_object_info_array::t_obj_info_vector_ptr_vector_ptr, std::allocator<t_object_info_array::t_obj_info_vector_ptr_vector_ptr>>>::get_default_body(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:986
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
copy_on_write_ptr_details::t_body<std::vector<t_object_info_array::t_obj_info_vector_ptr_vector_ptr, std::allocator<t_object_info_array::t_obj_info_vector_ptr_vector_ptr>>>::t_body<std::vector<t_object_info_array::t_obj_info_vector_ptr_vector_ptr, std::allocator<t_object_info_array::t_obj_info_vector_ptr_vector_ptr>>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:987
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_adventure_map::t_impl::t_impl(t_abstract_adventure_map::t_impl const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:988
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_adventure_map::t_impl::t_properties::t_properties(
    t_abstract_adventure_map::t_impl::t_properties const& arg_0
)
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:989
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_info_array::t_object_info_array(t_object_info_array const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:990
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_info_array::t_obj_info_vector_ptr_vector_ptr_vector_ptr::t_obj_info_vector_ptr_vector_ptr_vector_ptr(
    t_object_info_array::t_obj_info_vector_ptr_vector_ptr_vector_ptr const& arg_0
)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:1012
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_copy_on_write_ptr<std::vector<t_object_info_array::t_obj_info_vector_ptr_vector_ptr, std::allocator<t_object_info_array::t_obj_info_vector_ptr_vector_ptr>>>::t_copy_on_write_ptr<std::vector<t_object_info_array::t_obj_info_vector_ptr_vector_ptr, std::allocator<t_object_info_array::t_obj_info_vector_ptr_vector_ptr>>>(
    t_copy_on_write_ptr<std::vector<t_object_info_array::t_obj_info_vector_ptr_vector_ptr, std::allocator<t_object_info_array::t_obj_info_vector_ptr_vector_ptr>>> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:1017
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_copy_on_write_ptr<t_abstract_adventure_map::t_impl::t_properties>::t_copy_on_write_ptr<t_abstract_adventure_map::t_impl::t_properties>(
    t_copy_on_write_ptr<t_abstract_adventure_map::t_impl::t_properties> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:1018
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_copy_on_write_ptr<t_abstract_adventure_map::t_impl::t_properties>::t_copy_on_write_ptr<t_abstract_adventure_map::t_impl::t_properties>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:1019
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_copy_on_write_ptr<std::vector<t_adventure_map_view_cell_grid, std::allocator<t_adventure_map_view_cell_grid>>>::t_copy_on_write_ptr<std::vector<t_adventure_map_view_cell_grid, std::allocator<t_adventure_map_view_cell_grid>>>(
    t_copy_on_write_ptr<std::vector<t_adventure_map_view_cell_grid, std::allocator<t_adventure_map_view_cell_grid>>> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:1020
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_copy_on_write_ptr<std::vector<t_adventure_map_view_cell_grid, std::allocator<t_adventure_map_view_cell_grid>>>::t_copy_on_write_ptr<std::vector<t_adventure_map_view_cell_grid, std::allocator<t_adventure_map_view_cell_grid>>>(

)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:1021
VA_CHT_1(0x00407160, 0x48)
void t_basic_isometric_map<t_isometric_tile_map_base, unsigned char>::initialize(
    int arg_0,
    int arg_1,
    int arg_2,
    unsigned char const& arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:1022
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_basic_isometric_map<t_isometric_vertex_map_base, unsigned char>::initialize(
    int arg_0,
    int arg_1,
    int arg_2,
    unsigned char const& arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:1024
VA_CHT_1(0x004067e0, 0x159)
t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>::t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>(
    t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4> const& arg_0
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:1025
VA_CHT_1(0x00409420, 0xba)
t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>::t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:1026
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_static_vector<t_adventure_map_view_cell, 4>::~t_static_vector<t_adventure_map_view_cell, 4>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:1027
VA_CHT_1(0x00409110, 0x6d)
t_adventure_map_view_cell::~t_adventure_map_view_cell()
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable,vslot;manual-review=complete-F00081:unresolved; map:1028
VA_CHT_1_COMPGEN(0x00409180, 0x1e, SCALAR_DELETING_DTOR, t_adventure_map_view_cell)

// name:A; map symbol; map:1029
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_adventure_map_view_cell)

// name:A; map symbol; map:1030
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_copy_on_write_ptr<std::vector<int, std::allocator<int>>>::~t_copy_on_write_ptr<std::vector<int, std::allocator<int>>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:1031
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_copy_on_write_ptr<std::vector<t_adventure_map_view_cell::t_object_subimage_info, std::allocator<t_adventure_map_view_cell::t_object_subimage_info>>>::~t_copy_on_write_ptr<std::vector<t_adventure_map_view_cell::t_object_subimage_info, std::allocator<t_adventure_map_view_cell::t_object_subimage_info>>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:1032
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "copy_on_write_ptr_details::t_body<std::vector<int, std::allocator<int>>>")

// name:A; map symbol; map:1033
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "copy_on_write_ptr_details::t_body<std::vector<t_adventure_map_view_cell::t_object_subimage_info, std::allocator<t_adventure_map_view_cell::t_object_subimage_info>>>")

// name:A; map symbol; map:1034
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
copy_on_write_ptr_details::t_body<std::vector<int, std::allocator<int>>>::~t_body<std::vector<int, std::allocator<int>>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:1035
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
copy_on_write_ptr_details::t_body<std::vector<t_adventure_map_view_cell::t_object_subimage_info, std::allocator<t_adventure_map_view_cell::t_object_subimage_info>>>::~t_body<std::vector<t_adventure_map_view_cell::t_object_subimage_info, std::allocator<t_adventure_map_view_cell::t_object_subimage_info>>>(

)
{
    // Body unavailable.
}

// name:A; dyninit; see ledger; map:1037
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "t_copy_on_write_ptr<t_abstract_tile::t_transition_info>::g_default_body_ref")

// name:A; dyninit; see ledger; map:1038
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "t_copy_on_write_ptr<t_abstract_adventure_map::t_impl>::g_default_body_ref")

// name:C; dyninit; see ledger; map:1039
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "?g_default_body_ref@?$t_copy_on_write_ptr@V?$vector@Ut_object_info@?%C:\\work\\game\\abstract_adventure_map.cpp23622840@@")

// name:C; dyninit; see ledger; map:1040
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "?g_default_body_ref@?$t_copy_on_write_ptr@V?$vector@Vt_obj_info_vector_ptr@t_object_info_array@?%C:\\work\\game\\abstract_adventure_map.cpp23622840@@")

// name:C; dyninit; see ledger; map:1041
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "?g_default_body_ref@?$t_copy_on_write_ptr@V?$vector@Vt_obj_info_vector_ptr_vector_ptr@t_object_info_array@?%C:\\work\\game\\abstract_adventure_map.cpp23622840@@")

// name:C; dyninit; see ledger; map:1042
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "?g_default_body_ref@?$t_copy_on_write_ptr@V?$vector@V?$t_copy_on_write_ptr@V?$t_static_vector@V?$t_static_vector@Vt_adventure_map_view_cell@@")

// name:C; dyninit; see ledger; map:1043
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "?g_default_body_ref@?$t_copy_on_write_ptr@V?$t_static_vector@V?$t_static_vector@Vt_adventure_map_view_cell@@")

// name:C; dyninit; see ledger; map:1044
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "?g_default_body_ref@?$t_copy_on_write_ptr@V?$t_static_vector@V?$t_static_vector@Vt_adventure_map_view_cell@@")

// name:C; dyninit; see ledger; map:1045
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "?g_default_body_ref@?$t_copy_on_write_ptr@V?$vector@V?$t_copy_on_write_ptr@V?$t_static_vector@V?$t_static_vector@Vt_adventure_map_view_cell@@")

// name:C; dyninit; see ledger; map:1046
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "?g_default_body_ref@?$t_copy_on_write_ptr@V?$vector@Vt_obj_info_vector_ptr_vector_ptr@t_object_info_array@?%C:\\work\\game\\abstract_adventure_map.cpp23622840@@")

// name:C; dyninit; see ledger; map:1047
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "?g_default_body_ref@?$t_copy_on_write_ptr@V?$vector@Vt_obj_info_vector_ptr@t_object_info_array@?%C:\\work\\game\\abstract_adventure_map.cpp23622840@@")

// name:C; dyninit; see ledger; map:1048
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "?g_default_body_ref@?$t_copy_on_write_ptr@V?$vector@Ut_object_info@?%C:\\work\\game\\abstract_adventure_map.cpp23622840@@")

// name:A; dyninit; see ledger; map:1049
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "t_copy_on_write_ptr<t_abstract_adventure_map::t_impl>::g_default_body_ref")

// name:A; dyninit; see ledger; map:1050
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "t_copy_on_write_ptr<t_abstract_tile::t_transition_info>::g_default_body_ref")

// name:A; map symbol; map:1052
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_map_view_cell* t_static_vector<t_adventure_map_view_cell, 4>::end()
{
    // Body unavailable.
}

// name:A; map symbol; map:1071
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
copy_on_write_ptr_details::t_body<t_abstract_adventure_map::t_impl::t_properties>* t_copy_on_write_ptr<t_abstract_adventure_map::t_impl::t_properties>::get_default_body(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:1072
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
copy_on_write_ptr_details::t_body<std::vector<t_adventure_map_view_cell_grid, std::allocator<t_adventure_map_view_cell_grid>>>* t_copy_on_write_ptr<std::vector<t_adventure_map_view_cell_grid, std::allocator<t_adventure_map_view_cell_grid>>>::get_default_body(

)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:1074
VA_CHT_1(0x004078b0, 0x114)
t_static_vector<t_adventure_map_view_cell, 4>::t_static_vector<t_adventure_map_view_cell, 4>(
    t_static_vector<t_adventure_map_view_cell, 4> const& arg_0
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:1075
VA_CHT_1(0x004095e0, 0xba)
t_static_vector<t_adventure_map_view_cell, 4>::t_static_vector<t_adventure_map_view_cell, 4>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:1076
VA_CHT_1(0x00408e90, 0x55)
copy_on_write_ptr_details::t_default_body_ref<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>::~t_default_body_ref<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>(

)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:1077
VA_CHT_1(0x00408ef0, 0x55)
copy_on_write_ptr_details::t_default_body_ref<std::vector<t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>, std::allocator<t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>>>>::~t_default_body_ref<std::vector<t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>, std::allocator<t_copy_on_write_ptr<t_static_vector<t_static_vector<t_adventure_map_view_cell, 4>, 4>>>>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:1078
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
copy_on_write_ptr_details::t_default_body_ref<std::vector<t_object_info_array::t_obj_info_vector_ptr_vector_ptr, std::allocator<t_object_info_array::t_obj_info_vector_ptr_vector_ptr>>>::~t_default_body_ref<std::vector<t_object_info_array::t_obj_info_vector_ptr_vector_ptr, std::allocator<t_object_info_array::t_obj_info_vector_ptr_vector_ptr>>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:1079
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
copy_on_write_ptr_details::t_default_body_ref<std::vector<t_object_info_array::t_obj_info_vector_ptr, std::allocator<t_object_info_array::t_obj_info_vector_ptr>>>::~t_default_body_ref<std::vector<t_object_info_array::t_obj_info_vector_ptr, std::allocator<t_object_info_array::t_obj_info_vector_ptr>>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:1080
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
copy_on_write_ptr_details::t_default_body_ref<std::vector<t_object_info, std::allocator<t_object_info>>>::~t_default_body_ref<std::vector<t_object_info, std::allocator<t_object_info>>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:1081
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
copy_on_write_ptr_details::t_default_body_ref<t_abstract_adventure_map::t_impl>::~t_default_body_ref<t_abstract_adventure_map::t_impl>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:1082
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
copy_on_write_ptr_details::t_default_body_ref<t_abstract_tile::t_transition_info>::~t_default_body_ref<t_abstract_tile::t_transition_info>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:1083
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "copy_on_write_ptr_details::t_body<t_abstract_tile::t_transition_info>")

// name:A; map symbol; map:1084
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
copy_on_write_ptr_details::t_body<t_abstract_tile::t_transition_info>::~t_body<t_abstract_tile::t_transition_info>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:1085
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_tile::t_transition_info::~t_transition_info()
{
    // Body unavailable.
}

// name:A; map symbol; map:1099
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_map_view_cell::t_adventure_map_view_cell(t_adventure_map_view_cell const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:1100
VA_CHT_1(0x0040a850, 0xb4)
t_adventure_map_view_cell::t_adventure_map_view_cell()
{
    // Body unavailable.
}

// name:A; map symbol; map:1101
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
copy_on_write_ptr_details::t_body<t_abstract_adventure_map::t_impl::t_properties>::t_body<t_abstract_adventure_map::t_impl::t_properties>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:1102
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
copy_on_write_ptr_details::t_body<std::vector<t_adventure_map_view_cell_grid, std::allocator<t_adventure_map_view_cell_grid>>>::t_body<std::vector<t_adventure_map_view_cell_grid, std::allocator<t_adventure_map_view_cell_grid>>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:1103
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_adventure_map::t_impl::t_properties::t_properties()
{
    // Body unavailable.
}

// name:A; map symbol; map:1108
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_copy_on_write_ptr<std::vector<t_adventure_map_view_cell::t_object_subimage_info, std::allocator<t_adventure_map_view_cell::t_object_subimage_info>>>::t_copy_on_write_ptr<std::vector<t_adventure_map_view_cell::t_object_subimage_info, std::allocator<t_adventure_map_view_cell::t_object_subimage_info>>>(
    t_copy_on_write_ptr<std::vector<t_adventure_map_view_cell::t_object_subimage_info, std::allocator<t_adventure_map_view_cell::t_object_subimage_info>>> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:1109
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_copy_on_write_ptr<std::vector<t_adventure_map_view_cell::t_object_subimage_info, std::allocator<t_adventure_map_view_cell::t_object_subimage_info>>>::t_copy_on_write_ptr<std::vector<t_adventure_map_view_cell::t_object_subimage_info, std::allocator<t_adventure_map_view_cell::t_object_subimage_info>>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:1110
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_copy_on_write_ptr<std::vector<int, std::allocator<int>>>::t_copy_on_write_ptr<std::vector<int, std::allocator<int>>>(
    t_copy_on_write_ptr<std::vector<int, std::allocator<int>>> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:1111
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_copy_on_write_ptr<std::vector<int, std::allocator<int>>>::t_copy_on_write_ptr<std::vector<int, std::allocator<int>>>(

)
{
    // Body unavailable.
}

// name:A; dyninit; see ledger; map:1112
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "t_copy_on_write_ptr<t_abstract_adventure_map::t_impl::t_properties>::g_default_body_ref")

// name:C; dyninit; see ledger; map:1113
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "?g_default_body_ref@?$t_copy_on_write_ptr@V?$vector@Vt_adventure_map_view_cell_grid@?%C:\\work\\game\\abstract_adventure_map.cpp23622840@@")

// name:C; dyninit; see ledger; map:1114
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "?g_default_body_ref@?$t_copy_on_write_ptr@V?$vector@Vt_adventure_map_view_cell_grid@?%C:\\work\\game\\abstract_adventure_map.cpp23622840@@")

// name:A; dyninit; see ledger; map:1115
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "t_copy_on_write_ptr<t_abstract_adventure_map::t_impl::t_properties>::g_default_body_ref")

// name:A; map symbol; map:1119
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
copy_on_write_ptr_details::t_body<std::vector<t_adventure_map_view_cell::t_object_subimage_info, std::allocator<t_adventure_map_view_cell::t_object_subimage_info>>>* t_copy_on_write_ptr<std::vector<t_adventure_map_view_cell::t_object_subimage_info, std::allocator<t_adventure_map_view_cell::t_object_subimage_info>>>::get_default_body(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:1120
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
copy_on_write_ptr_details::t_body<std::vector<int, std::allocator<int>>>* t_copy_on_write_ptr<std::vector<int, std::allocator<int>>>::get_default_body(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:1121
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
copy_on_write_ptr_details::t_default_body_ref<std::vector<t_adventure_map_view_cell_grid, std::allocator<t_adventure_map_view_cell_grid>>>::~t_default_body_ref<std::vector<t_adventure_map_view_cell_grid, std::allocator<t_adventure_map_view_cell_grid>>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:1122
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
copy_on_write_ptr_details::t_default_body_ref<t_abstract_adventure_map::t_impl::t_properties>::~t_default_body_ref<t_abstract_adventure_map::t_impl::t_properties>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:1123
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
copy_on_write_ptr_details::t_body<std::vector<int, std::allocator<int>>>::t_body<std::vector<int, std::allocator<int>>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:1124
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
copy_on_write_ptr_details::t_body<std::vector<t_adventure_map_view_cell::t_object_subimage_info, std::allocator<t_adventure_map_view_cell::t_object_subimage_info>>>::t_body<std::vector<t_adventure_map_view_cell::t_object_subimage_info, std::allocator<t_adventure_map_view_cell::t_object_subimage_info>>>(

)
{
    // Body unavailable.
}

// name:C; dyninit; see ledger; map:1126
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "?g_default_body_ref@?$t_copy_on_write_ptr@V?$vector@Ut_object_subimage_info@t_adventure_map_view_cell@@")

// name:C; dyninit; see ledger; map:1127
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "?g_default_body_ref@?$t_copy_on_write_ptr@V?$vector@HV?$allocator@H@std@@@")

// name:C; dyninit; see ledger; map:1128
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "?g_default_body_ref@?$t_copy_on_write_ptr@V?$vector@HV?$allocator@H@std@@@")

// name:C; dyninit; see ledger; map:1129
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "?g_default_body_ref@?$t_copy_on_write_ptr@V?$vector@Ut_object_subimage_info@t_adventure_map_view_cell@@")

// name:A; map symbol; map:1130
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
copy_on_write_ptr_details::t_default_body_ref<std::vector<int, std::allocator<int>>>::~t_default_body_ref<std::vector<int, std::allocator<int>>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:1131
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
copy_on_write_ptr_details::t_default_body_ref<std::vector<t_adventure_map_view_cell::t_object_subimage_info, std::allocator<t_adventure_map_view_cell::t_object_subimage_info>>>::~t_default_body_ref<std::vector<t_adventure_map_view_cell::t_object_subimage_info, std::allocator<t_adventure_map_view_cell::t_object_subimage_info>>>(

)
{
    // Body unavailable.
}

// === .rdata (2 symbols) ===

// confidence:A; rtti-name; map:42499
DATA_CHT_1_COMPGEN(0x008cb5a4, "const t_abstract_adventure_map::`vftable'")

// confidence:A; rtti-name; map:42500
DATA_CHT_1_COMPGEN(0x008cb5f8, "const t_adventure_map_view_cell::`vftable'")

// === .rdata$r (8 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_abstract_adventure_map@@;bcd=4f3cec;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47323
DATA_CHT_1_COMPGEN(0x008f3cec, "t_abstract_adventure_map::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_abstract_adventure_map@@;vft=4cb5a4;col=4f3d1c;td=5853a4;chd=4f3d0c;offset=0;cdOffset=0;validated-hierarchy; map:47324
DATA_CHT_1_COMPGEN(0x008f3d04, "t_abstract_adventure_map::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_abstract_adventure_map@@;vft=4cb5a4;col=4f3d1c;td=5853a4;chd=4f3d0c;offset=0;cdOffset=0;validated-hierarchy; map:47325
DATA_CHT_1_COMPGEN(0x008f3d0c, "t_abstract_adventure_map::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_abstract_adventure_map@@;vft=4cb5a4;col=4f3d1c;td=5853a4;chd=4f3d0c;offset=0;cdOffset=0;validated-hierarchy; map:47326
DATA_CHT_1_COMPGEN(0x008f3d1c, "const t_abstract_adventure_map::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adventure_map_view_cell@@;bcd=4f3d30;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47327
DATA_CHT_1_COMPGEN(0x008f3d30, "t_adventure_map_view_cell::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adventure_map_view_cell@@;vft=4cb5f8;col=4f3d60;td=5853cc;chd=4f3d50;offset=0;cdOffset=0;validated-hierarchy; map:47328
DATA_CHT_1_COMPGEN(0x008f3d48, "t_adventure_map_view_cell::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adventure_map_view_cell@@;vft=4cb5f8;col=4f3d60;td=5853cc;chd=4f3d50;offset=0;cdOffset=0;validated-hierarchy; map:47329
DATA_CHT_1_COMPGEN(0x008f3d50, "t_adventure_map_view_cell::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_adventure_map_view_cell@@;vft=4cb5f8;col=4f3d60;td=5853cc;chd=4f3d50;offset=0;cdOffset=0;validated-hierarchy; map:47330
DATA_CHT_1_COMPGEN(0x008f3d60, "const t_adventure_map_view_cell::`RTTI Complete Object Locator'")

// === .data (12 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_abstract_adventure_map@@;td=5853a4;validated-header; map:57281
DATA_CHT_1_COMPGEN(0x009853a4, "t_abstract_adventure_map `RTTI Type Descriptor'")

// name:A; map symbol; map:57282
DATA_CHT_1_COMPGEN(UNACCOUNTED, "row >= 0&& row < m_size")

// name:A; map symbol; map:57283
DATA_CHT_1_COMPGEN(UNACCOUNTED, "C:\\\\work\\\\game\\\\isometric_map.h")

// name:A; map symbol; map:57284
DATA_CHT_1_COMPGEN(UNACCOUNTED, "new_height >= 0&& new_height <=...")

// name:A; map symbol; map:57285
DATA_CHT_1_COMPGEN(UNACCOUNTED, "C:\\\\work\\\\game\\\\abstract_tile.h")

// name:A; map symbol; map:57286
DATA_CHT_1_COMPGEN(UNACCOUNTED, "arg >= 0&& arg < get_intersecti...")

// name:A; map symbol; map:57287
DATA_CHT_1_COMPGEN(UNACCOUNTED, "C:\\\\work\\\\game\\\\abstract_adventure_...")

// name:A; map symbol; map:57288
DATA_CHT_1_COMPGEN(UNACCOUNTED, "point.level >= 0&& point.level ...")

// name:A; map symbol; map:57289
DATA_CHT_1_COMPGEN(UNACCOUNTED, "point.row >= 0&& point.row < ge...")

// name:A; map symbol; map:57290
DATA_CHT_1_COMPGEN(UNACCOUNTED, "team_num >= 0")

// name:A; map symbol; map:57291
DATA_CHT_1_COMPGEN(UNACCOUNTED, "C:\\\\work\\\\game\\\\abstract_adventure_...")

// confidence:A; rtti-type-name; type-name=.?AVt_adventure_map_view_cell@@;td=5853cc;validated-header; map:57292
DATA_CHT_1_COMPGEN(0x009853cc, "t_adventure_map_view_cell `RTTI Type Descriptor'")

// === .bss (2 symbols) ===

// name:A; map symbol; map:59921
DATA_CHT_1(UNACCOUNTED)
std::_Tree<int, std::pair<int const, int>, std::map<int, int, std::less<int>, std::allocator<int>>::_Kfn, std::less<int>, std::allocator<int>>::_Node*std::_Tree<int, std::pair<int const, int>, std::map<int, int, std::less<int>, std::allocator<int>>::_Kfn, std::less<int>, std::allocator<int>>::_Nil; // Initial value unavailable.

// name:A; map symbol; map:59923
DATA_CHT_1(UNACCOUNTED)
std::_Tree<t_map_point_2d, std::pair<t_map_point_2d const, int>, std::map<t_map_point_2d, int, std::less<t_map_point_2d>, std::allocator<int>>::_Kfn, std::less<t_map_point_2d>, std::allocator<int>>::_Node*std::_Tree<t_map_point_2d, std::pair<t_map_point_2d const, int>, std::map<t_map_point_2d, int, std::less<t_map_point_2d>, std::allocator<int>>::_Kfn, std::less<t_map_point_2d>, std::allocator<int>>::_Nil; // Initial value unavailable.
