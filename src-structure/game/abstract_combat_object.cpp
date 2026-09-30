// abstract_combat_object.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 100/199 (A:78 B:14 C:8); unaccounted 99; skipped std 8.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (132 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:71389; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0040e970, 0x15, STATIC_INIT_DISPATCH, "abstract_combat_object#1")

// name:C; dyninit; see ledger; map:71390
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "abstract_combat_object#1")

// confidence:A; dyninit-init; owner-conf-C; map:71391; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0040e990, 0x15, STATIC_INIT_DISPATCH, "abstract_combat_object#2")

// name:C; dyninit; see ledger; map:71392
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "abstract_combat_object#2")

// confidence:A; dyninit-init; owner-conf-C; map:71393; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0040e9b0, 0x15, STATIC_INIT_DISPATCH, "abstract_combat_object#3")

// name:C; dyninit; see ledger; map:71394
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "abstract_combat_object#3")

// confidence:A; dyninit-init; owner-conf-C; map:71395; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0040e9d0, 0x15, STATIC_INIT_DISPATCH, "abstract_combat_object#4")

// name:C; dyninit; see ledger; map:71396
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "abstract_combat_object#4")

// confidence:A; dyninit-init; owner-conf-C; map:71397; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0040e9f0, 0x10, STATIC_INIT_DISPATCH, "abstract_combat_object#5")

// name:C; dyninit; see ledger; map:71398
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "abstract_combat_object#5")

// confidence:A; dyninit-init; owner-conf-C; map:71399; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0040ea00, 0x15, STATIC_INIT_DISPATCH, "abstract_combat_object#6")

// name:C; dyninit; see ledger; map:71400
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "abstract_combat_object#6")

// confidence:A; align-order; retn,stable,vptr; map:1405
VA_CHT_1(0x0040ea20, 0xa7)
t_abstract_combat_object::t_abstract_combat_object(t_battlefield* arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vptr; map:1406
VA_CHT_1(0x0040eaf0, 0x6b)
t_combat_object_base::~t_combat_object_base()
{
    // Body unavailable.
}

// confidence:C; align-order; retn; map:1407
VA_CHT_1(0x0040eb80, 0x7)
t_combat_footprint const& t_combat_object_base::get_footprint() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn; map:1408
VA_CHT_1(0x0040eba0, 0x38)
t_map_point_2d t_combat_object_base::get_footprint_center(t_map_point_2d const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:1409
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_combat_object_base::can_be_attacked() const
{
    // Body unavailable.
}

// name:A; map symbol; map:1410
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_combat_object_base::is_creature() const
{
    // Body unavailable.
}

// name:A; map symbol; map:1411
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_combat_object_base::is_permanent() const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:1412
VA_CHT_1(0x0040ebe0, 0x70)
bool t_combat_object_base::in_footprint(t_map_point_2d const& arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:1413
VA_CHT_1(0x0040ec50, 0x42)
t_map_rect_2d t_combat_object_base::get_cell_rect() const
{
    // Body unavailable.
}

// name:A; map symbol; map:1414
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_compound_object* t_abstract_combat_object::get_compound_object() const
{
    // Body unavailable.
}

// name:A; map symbol; map:1415
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_attackable_object* t_abstract_combat_object::get_attackable_object()
{
    // Body unavailable.
}

// name:A; map symbol; map:1416
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_abstract_combat_object::get_depth() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:1417
VA_CHT_1(0x0040eca0, 0x33)
bool t_abstract_combat_object::blocks_movement() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:1418
VA_CHT_1(0x0040ece0, 0x11)
bool t_abstract_combat_object::is_quicksand() const
{
    // Body unavailable.
}

// name:A; map symbol; map:1419
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_abstract_combat_object::on_battlefield_destruction()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:1420
VA_CHT_1(0x0040ed00, 0x4c)
void t_abstract_combat_object::set_shadow_displacement(int arg_0, t_battlefield const& arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:1421
VA_CHT_1(0x0040ed50, 0x83)
void t_abstract_combat_object::move(t_battlefield& arg_0, t_map_point_3d const& arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:1422
VA_CHT_1(0x0040ede0, 0x3f)
void t_abstract_combat_object::set_screen_position(t_screen_point const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:1423
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_abstract_combat_object::obscures_vision() const
{
    // Body unavailable.
}

// name:A; map symbol; map:1424
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_abstract_combat_object::on_moving()
{
    // Body unavailable.
}

// name:A; map symbol; map:1425
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_abstract_combat_object::on_moved(bool arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:1426
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_abstract_combat_object::on_turned()
{
    // Body unavailable.
}

// name:A; map symbol; map:1427
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_abstract_combat_object::on_turning()
{
    // Body unavailable.
}

// name:A; map symbol; map:1428
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_abstract_combat_object::on_placed()
{
    // Body unavailable.
}

// name:A; map symbol; map:1429
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_abstract_combat_object::on_removed()
{
    // Body unavailable.
}

// name:A; map symbol; map:1430
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_abstract_combat_object::hinders_movement() const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:1431
VA_CHT_1(0x0040ee20, 0xa1)
void t_abstract_combat_object::fade_in(t_battlefield& arg_0, int arg_1, t_combat_action_message const& arg_2)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:1432
VA_CHT_1(0x0040eed0, 0x1a5)
void t_abstract_combat_object::fade_out(t_battlefield& arg_0, t_combat_action_message const& arg_1)
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:1433
VA_CHT_1(0x0040f0b0, 0x104)
void t_abstract_combat_object::fade_out(
    t_battlefield& arg_0,
    t_handler arg_1,
    t_combat_action_message const& arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:1434
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_abstract_combat_object::clear_fader()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:1435
VA_CHT_1(0x0040f1c0, 0x22)
void t_abstract_combat_object::set_alpha(t_battlefield& arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:1436
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_abstract_combat_object::get_normal_alpha() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:1437
VA_CHT_1(0x0040f1f0, 0x6)
bool t_abstract_combat_object::is_elevated() const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:1438
VA_CHT_1(0x0040f200, 0xc2)
bool t_abstract_combat_object::read_data(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:1439
VA_CHT_1(0x0040f2d0, 0xb0)
bool t_abstract_combat_object::write_data(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:1440
VA_CHT_1(0x0040f560, 0x6f)
void t_abstract_combat_object::place_during_read(t_battlefield& arg_0)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:71401; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0040f770, 0x20, STATIC_INIT_DISPATCH, abstract_combat_object)

// name:A; map symbol; map:1441
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_rect::t_screen_rect()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:1442
VA_CHT_1_COMPGEN(0x0040ead0, 0x1e, SCALAR_DELETING_DTOR, t_abstract_combat_object)

// name:A; map symbol; map:1443
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_abstract_combat_object)

// name:A; map symbol; map:1444
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_saveable_object::t_combat_saveable_object()
{
    // Body unavailable.
}

// name:A; map symbol; map:1445
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_object_base::t_combat_object_base()
{
    // Body unavailable.
}

// name:A; map symbol; map:1446
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_point_3d::t_map_point_3d()
{
    // Body unavailable.
}

// name:A; map symbol; map:1447
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_combat_object_fader>::~t_counted_ptr<t_combat_object_fader>()
{
    // Body unavailable.
}

// name:A; map symbol; map:1448
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_combat_object::~t_abstract_combat_object()
{
    // Body unavailable.
}

// name:A; map symbol; map:1449
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_combat_saveable_object)

// name:A; map symbol; map:1450
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_combat_saveable_object)

// confidence:A; align-band; retn,stable,vslot; map:1451
VA_CHT_1_COMPGEN(0x0040eb60, 0x20, SCALAR_DELETING_DTOR, t_combat_object_base)

// name:A; map symbol; map:1452
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_combat_object_base)

// name:A; map symbol; map:1453
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_point_2d operator<<(t_map_point_2d const& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:1454
VA_CHT_1(0x0040f080, 0x2f)
t_map_point_2d& t_map_point_2d::operator<<=(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:1455
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_combat_object_base::get_half_footprint_size() const
{
    // Body unavailable.
}

// name:A; map symbol; map:1456
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_point_2d t_combat_object_base::get_cell_position() const
{
    // Body unavailable.
}

// name:A; map symbol; map:1457
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_point_3d operator>>(t_map_point_3d const& arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:1458
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_point_3d& t_map_point_3d::operator>>=(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:1459
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool const* t_combat_footprint::operator[](int arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:1460
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_rect_2d::t_map_rect_2d()
{
    // Body unavailable.
}

// name:A; map symbol; map:1461
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_point_3d const& t_combat_object_base::get_position() const
{
    // Body unavailable.
}

// name:A; map symbol; map:1462
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler::t_handler()
{
    // Body unavailable.
}

// name:A; map symbol; map:1463
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_combat_object>::~t_counted_ptr<t_abstract_combat_object>()
{
    // Body unavailable.
}

// name:A; map symbol; map:1464
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_combat_object_fader::set_end_handler(t_handler arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:1465
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler::~t_handler()
{
    // Body unavailable.
}

// name:A; map symbol; map:1466
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base>::~t_counted_ptr<t_handler_base>()
{
    // Body unavailable.
}

// name:A; map symbol; map:1467
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler& t_handler::operator=(t_handler const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:1468
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler::t_handler(t_handler const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:1469
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_abstract_combat_object::get_alpha() const
{
    // Body unavailable.
}

// name:A; map symbol; map:1470
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::list<t_counted_ptr<t_abstract_combat_object>, std::allocator<t_counted_ptr<t_abstract_combat_object>>>::iterator t_abstract_combat_object::get_list_position(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:1478
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void put(std::basic_streambuf<char, std::char_traits<char>>& arg_0, long const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:1479
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
long get(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:1480
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_combat_object>::t_counted_ptr<t_abstract_combat_object>(
    t_counted_ptr<t_abstract_combat_object> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:1481
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_combat_object>::t_counted_ptr<t_abstract_combat_object>(
    t_abstract_combat_object* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:1482
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base>::t_counted_ptr<t_handler_base>(t_counted_ptr<t_handler_base> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:1483
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base>::t_counted_ptr<t_handler_base>()
{
    // Body unavailable.
}

// name:A; map symbol; map:1484
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base>& t_counted_ptr<t_handler_base>::operator=(
    t_counted_ptr<t_handler_base> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:1485
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_combat_object_fader>::t_counted_ptr<t_combat_object_fader>()
{
    // Body unavailable.
}

// name:A; map symbol; map:1486
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_combat_object_fader>& t_counted_ptr<t_combat_object_fader>::operator=(
    t_combat_object_fader* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:1487
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_object_fader* t_counted_ptr<t_combat_object_fader>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:1488
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<t_counted_ptr<t_abstract_combat_object>> bound_handler(
    t_battlefield& arg_0,
    void (t_battlefield::*)(t_counted_ptr<t_abstract_combat_object>)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:1489
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler add_argument(
    t_handler_1<t_counted_ptr<t_abstract_combat_object>> arg_0,
    t_counted_ptr<t_abstract_combat_object> arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:1490
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler::t_handler(t_handler_base* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:1491
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<t_counted_ptr<t_abstract_combat_object>>::~t_handler_1<t_counted_ptr<t_abstract_combat_object>>()
{
    // Body unavailable.
}

// name:A; map symbol; map:1492
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_1<t_counted_ptr<t_abstract_combat_object>>>::~t_counted_ptr<t_handler_base_1<t_counted_ptr<t_abstract_combat_object>>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:1493
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base>::t_counted_ptr<t_handler_base>(t_handler_base* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:1494
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<t_counted_ptr<t_abstract_combat_object>>::t_handler_1<t_counted_ptr<t_abstract_combat_object>>(
    t_handler_base_1<t_counted_ptr<t_abstract_combat_object>>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:1495
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_1<t_counted_ptr<t_abstract_combat_object>>* t_handler_1<t_counted_ptr<t_abstract_combat_object>>::operator t_handler_base_1<t_counted_ptr<t_abstract_combat_object>>*(

) const
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:1496
VA_CHT_1(0x0040f3b0, 0x5e)
t_bound_handler_1<t_battlefield, t_counted_ptr<t_abstract_combat_object>>::t_bound_handler_1<t_battlefield, t_counted_ptr<t_abstract_combat_object>>(
    t_battlefield& arg_0,
    void (t_battlefield::*)(t_counted_ptr<t_abstract_combat_object>)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:1497
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_1<t_battlefield, t_counted_ptr<t_abstract_combat_object>>::operator()(
    t_counted_ptr<t_abstract_combat_object> arg_0
)
{
    // Body unavailable.
}

// confidence:A; align-band; stable,vptr; map:1498
VA_CHT_1(0x0040f410, 0x121)
t_add_handler<t_counted_ptr<t_abstract_combat_object>>::t_add_handler<t_counted_ptr<t_abstract_combat_object>>(
    t_handler_base_1<t_counted_ptr<t_abstract_combat_object>>* arg_0,
    t_counted_ptr<t_abstract_combat_object> arg_1
)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:1499
VA_CHT_1(0x0040f5d0, 0x8c)
void t_add_handler<t_counted_ptr<t_abstract_combat_object>>::operator()()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:1500
VA_CHT_1_COMPGEN(0x0040f660, 0x1e, SCALAR_DELETING_DTOR, "t_bound_handler_1<t_battlefield, t_counted_ptr<t_abstract_combat_object>>")

// name:A; map symbol; map:1501
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_1<t_battlefield, t_counted_ptr<t_abstract_combat_object>>")

// confidence:C; align-band; retn,stable; map:1502
VA_CHT_1(0x0040f6f0, 0x73)
t_handler_base_1<t_counted_ptr<t_abstract_combat_object>>::t_handler_base_1<t_counted_ptr<t_abstract_combat_object>>(

)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:1503
VA_CHT_1_COMPGEN(0x0040f6a0, 0x1e, SCALAR_DELETING_DTOR, "t_add_handler<t_counted_ptr<t_abstract_combat_object>>")

// name:A; map symbol; map:1504
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_add_handler<t_counted_ptr<t_abstract_combat_object>>")

// name:A; map symbol; map:1505
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base::t_handler_base()
{
    // Body unavailable.
}

// name:A; map symbol; map:1506
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base::~t_handler_base()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:1507
VA_CHT_1(0x0053c200, 0x1e)
t_abstract_function_0<void>::~t_abstract_function_0<void>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:1508
VA_CHT_1_COMPGEN(0x0040f540, 0x20, SCALAR_DELETING_DTOR, "t_abstract_function_0<void>")

// name:A; map symbol; map:1509
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_abstract_function_0<void>")

// name:A; map symbol; map:1510
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_1<t_battlefield, t_counted_ptr<t_abstract_combat_object>>::~t_bound_handler_1<t_battlefield, t_counted_ptr<t_abstract_combat_object>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:1511
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_1<t_counted_ptr<t_abstract_combat_object>>::~t_handler_base_1<t_counted_ptr<t_abstract_combat_object>>(

)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:1512
VA_CHT_1(0x0040f6c0, 0x21)
t_abstract_function_1<void, t_counted_ptr<t_abstract_combat_object>>::~t_abstract_function_1<void, t_counted_ptr<t_abstract_combat_object>>(

)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:1513
VA_CHT_1_COMPGEN(0x0040f680, 0x20, SCALAR_DELETING_DTOR, "t_abstract_function_1<void, t_counted_ptr<t_abstract_combat_object>>")

// name:A; map symbol; map:1514
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_abstract_function_1<void, t_counted_ptr<t_abstract_combat_object>>")

// name:A; map symbol; map:1515
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_handler_base_1<t_counted_ptr<t_abstract_combat_object>>")

// name:A; map symbol; map:1516
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_handler_base_1<t_counted_ptr<t_abstract_combat_object>>")

// name:A; map symbol; map:1517
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_function_1<void, t_counted_ptr<t_abstract_combat_object>>::t_abstract_function_1<void, t_counted_ptr<t_abstract_combat_object>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:1518
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_add_handler<t_counted_ptr<t_abstract_combat_object>>::~t_add_handler<t_counted_ptr<t_abstract_combat_object>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:1519
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_handler_base)

// name:A; map symbol; map:1520
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_handler_base)

// confidence:A; align-band; retn,stable,vptr; map:1521
VA_CHT_1(0x0053a3f0, 0x21)
t_abstract_function_0<void>::t_abstract_function_0<void>()
{
    // Body unavailable.
}

// name:A; map symbol; map:1522
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_handler_1<t_counted_ptr<t_abstract_combat_object>>::operator()(
    t_counted_ptr<t_abstract_combat_object> arg_0
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:1523
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_1<t_counted_ptr<t_abstract_combat_object>>>::t_counted_ptr<t_handler_base_1<t_counted_ptr<t_abstract_combat_object>>>(
    t_handler_base_1<t_counted_ptr<t_abstract_combat_object>>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:1524
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_1<t_counted_ptr<t_abstract_combat_object>>* t_counted_ptr<t_handler_base_1<t_counted_ptr<t_abstract_combat_object>>>::operator t_handler_base_1<t_counted_ptr<t_abstract_combat_object>>*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:1525
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_1<t_counted_ptr<t_abstract_combat_object>>& t_counted_ptr<t_handler_base_1<t_counted_ptr<t_abstract_combat_object>>>::operator*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:1526
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_handler_base_1<t_counted_ptr<t_abstract_combat_object>>")

// name:A; map symbol; map:1527
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_1<t_battlefield, t_counted_ptr<t_abstract_combat_object>>")

// confidence:C; align-order; stable; map:1528
VA_CHT_1_COMPGEN(0x0040f7a0, 0x8, VECTOR_DELETING_DTOR, "t_add_handler<t_counted_ptr<t_abstract_combat_object>>")

// confidence:C; align-order; stable; map:1529
VA_CHT_1_COMPGEN(0x0040f7b0, 0x8, VECTOR_DELETING_DTOR, t_abstract_combat_object)

// confidence:C; align-order; stable; map:1530
VA_CHT_1_COMPGEN(0x0040f7c0, 0x8, VECTOR_DELETING_DTOR, t_handler_base)

// === .rdata (14 symbols) ===

// confidence:A; rtti-name; map:42513
DATA_CHT_1_COMPGEN(0x008cb7ac, "const t_abstract_combat_object::`vftable'{for `t_combat_object_base'}")

// confidence:B; rtti-order; map:42514
DATA_CHT_1_COMPGEN(0x008cb7c4, "const t_abstract_combat_object::`vftable'{for `t_combat_saveable_object'}")

// confidence:A; rtti-name; map:42515
DATA_CHT_1_COMPGEN(0x008de0ac, "const t_combat_saveable_object::`vftable'")

// confidence:A; rtti-name; map:42516
DATA_CHT_1_COMPGEN(0x008cb854, "const t_combat_object_base::`vftable'")

// confidence:A; rtti-name; map:42517
DATA_CHT_1_COMPGEN(0x008cb86c, "const t_bound_handler_1<t_battlefield, t_counted_ptr<t_abstract_combat_object>>::`vftable'{for `t_abstract_function_1<void, t_counted_ptr<t_abstract_combat_object>>'}")

// confidence:B; rtti-order; map:42518
DATA_CHT_1_COMPGEN(0x008cb878, "const t_bound_handler_1<t_battlefield, t_counted_ptr<t_abstract_combat_object>>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:42519
DATA_CHT_1_COMPGEN(0x008cb88c, "const t_add_handler<t_counted_ptr<t_abstract_combat_object>>::`vftable'{for `t_abstract_function_0<void>'}")

// confidence:B; rtti-order; map:42520
DATA_CHT_1_COMPGEN(0x008cb898, "const t_add_handler<t_counted_ptr<t_abstract_combat_object>>::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:42521
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_1<t_counted_ptr<t_abstract_combat_object>>::`vftable'{for `t_abstract_function_1<void, t_counted_ptr<t_abstract_combat_object>>'}")

// name:A; map symbol; map:42522
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_1<t_counted_ptr<t_abstract_combat_object>>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:42523
DATA_CHT_1_COMPGEN(0x008cb8a0, "const t_handler_base::`vftable'{for `t_abstract_function_0<void>'}")

// confidence:B; rtti-order; map:42524
DATA_CHT_1_COMPGEN(0x008cb8ac, "const t_handler_base::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:42525
DATA_CHT_1_COMPGEN(0x008cb8b4, "const t_abstract_function_0<void>::`vftable'")

// confidence:A; rtti-name; map:42526
DATA_CHT_1_COMPGEN(0x008cb880, "const t_abstract_function_1<void, t_counted_ptr<t_abstract_combat_object>>::`vftable'")

// === .rdata$r (44 symbols) ===

// confidence:A; rtti-col-pointer; type-name=.?AVt_abstract_combat_object@@;vft=4cb7ac;col=4f406c;td=585534;chd=4f405c;offset=8;cdOffset=0;validated-hierarchy; map:47361
DATA_CHT_1_COMPGEN(0x008f406c, "const t_abstract_combat_object::`RTTI Complete Object Locator'{for `t_combat_object_base'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_combat_object_base@@;bcd=4f4000;pmd=8,-1,0;attributes=0;validated-hierarchy-link; map:47362
DATA_CHT_1_COMPGEN(0x008f4000, "t_combat_object_base::`RTTI Base Class Descriptor at (8, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_combat_saveable_object@@;bcd=4f4018;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47363
DATA_CHT_1_COMPGEN(0x008f4018, "t_combat_saveable_object::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_abstract_combat_object@@;bcd=4f4030;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47364
DATA_CHT_1_COMPGEN(0x008f4030, "t_abstract_combat_object::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_abstract_combat_object@@;vft=4cb7ac;col=4f406c;td=585534;chd=4f405c;offset=8;cdOffset=0;validated-hierarchy; map:47365
DATA_CHT_1_COMPGEN(0x008f4048, "t_abstract_combat_object::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_abstract_combat_object@@;vft=4cb7ac;col=4f406c;td=585534;chd=4f405c;offset=8;cdOffset=0;validated-hierarchy; map:47366
DATA_CHT_1_COMPGEN(0x008f405c, "t_abstract_combat_object::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:47367
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_abstract_combat_object::`RTTI Complete Object Locator'{for `t_combat_saveable_object'}")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_combat_saveable_object@@;vft=4de0ac;col=5073b8;td=58550c;chd=5073a8;offset=0;cdOffset=0;validated-hierarchy; map:47368
DATA_CHT_1_COMPGEN(0x0090739c, "t_combat_saveable_object::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_combat_saveable_object@@;vft=4de0ac;col=5073b8;td=58550c;chd=5073a8;offset=0;cdOffset=0;validated-hierarchy; map:47369
DATA_CHT_1_COMPGEN(0x009073a8, "t_combat_saveable_object::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_combat_saveable_object@@;vft=4de0ac;col=5073b8;td=58550c;chd=5073a8;offset=0;cdOffset=0;validated-hierarchy; map:47370
DATA_CHT_1_COMPGEN(0x009073b8, "const t_combat_saveable_object::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_combat_object_base@@;bcd=4f3fa8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47371
DATA_CHT_1_COMPGEN(0x008f3fa8, "t_combat_object_base::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_combat_object_base@@;vft=4cb854;col=4f3fd8;td=5854e8;chd=4f3fc8;offset=0;cdOffset=0;validated-hierarchy; map:47372
DATA_CHT_1_COMPGEN(0x008f3fc0, "t_combat_object_base::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_combat_object_base@@;vft=4cb854;col=4f3fd8;td=5854e8;chd=4f3fc8;offset=0;cdOffset=0;validated-hierarchy; map:47373
DATA_CHT_1_COMPGEN(0x008f3fc8, "t_combat_object_base::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_combat_object_base@@;vft=4cb854;col=4f3fd8;td=5854e8;chd=4f3fc8;offset=0;cdOffset=0;validated-hierarchy; map:47374
DATA_CHT_1_COMPGEN(0x008f3fd8, "const t_combat_object_base::`RTTI Complete Object Locator'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_1@Vt_battlefield@@V?$t_counted_ptr@Vt_abstract_combat_object@@@@@@;vft=4cb86c;col=4f4144;td=585608;chd=4f4134;offset=8;cdOffset=0;validated-hierarchy; map:47375
DATA_CHT_1_COMPGEN(0x008f4144, "const t_bound_handler_1<t_battlefield, t_counted_ptr<t_abstract_combat_object>>::`RTTI Complete Object Locator'{for `t_abstract_function_1<void, t_counted_ptr<t_abstract_combat_object>>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_1@XV?$t_counted_ptr@Vt_abstract_combat_object@@@@@@;bcd=4f40d8;pmd=8,-1,0;attributes=0;validated-hierarchy-link; map:47376
DATA_CHT_1_COMPGEN(0x008f40d8, "t_abstract_function_1<void, t_counted_ptr<t_abstract_combat_object>>::`RTTI Base Class Descriptor at (8, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_handler_base_1@V?$t_counted_ptr@Vt_abstract_combat_object@@@@@@;bcd=4f40f0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47377
DATA_CHT_1_COMPGEN(0x008f40f0, "t_handler_base_1<t_counted_ptr<t_abstract_combat_object>>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_1@Vt_battlefield@@V?$t_counted_ptr@Vt_abstract_combat_object@@@@@@;bcd=4f4108;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47378
DATA_CHT_1_COMPGEN(0x008f4108, "t_bound_handler_1<t_battlefield, t_counted_ptr<t_abstract_combat_object>>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_1@Vt_battlefield@@V?$t_counted_ptr@Vt_abstract_combat_object@@@@@@;vft=4cb86c;col=4f4144;td=585608;chd=4f4134;offset=8;cdOffset=0;validated-hierarchy; map:47379
DATA_CHT_1_COMPGEN(0x008f4120, "t_bound_handler_1<t_battlefield, t_counted_ptr<t_abstract_combat_object>>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_1@Vt_battlefield@@V?$t_counted_ptr@Vt_abstract_combat_object@@@@@@;vft=4cb86c;col=4f4144;td=585608;chd=4f4134;offset=8;cdOffset=0;validated-hierarchy; map:47380
DATA_CHT_1_COMPGEN(0x008f4134, "t_bound_handler_1<t_battlefield, t_counted_ptr<t_abstract_combat_object>>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:47381
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_1<t_battlefield, t_counted_ptr<t_abstract_combat_object>>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_add_handler@V?$t_counted_ptr@Vt_abstract_combat_object@@@@@@;vft=4cb88c;col=4f4264;td=5856b8;chd=4f4254;offset=8;cdOffset=0;validated-hierarchy; map:47382
DATA_CHT_1_COMPGEN(0x008f4264, "const t_add_handler<t_counted_ptr<t_abstract_combat_object>>::`RTTI Complete Object Locator'{for `t_abstract_function_0<void>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_0@X@@;bcd=4f41f8;pmd=8,-1,0;attributes=0;validated-hierarchy-link; map:47383
DATA_CHT_1_COMPGEN(0x008f41f8, "t_abstract_function_0<void>::`RTTI Base Class Descriptor at (8, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_handler_base@@;bcd=4f4210;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47384
DATA_CHT_1_COMPGEN(0x008f4210, "t_handler_base::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_add_handler@V?$t_counted_ptr@Vt_abstract_combat_object@@@@@@;bcd=4f4228;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47385
DATA_CHT_1_COMPGEN(0x008f4228, "t_add_handler<t_counted_ptr<t_abstract_combat_object>>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_add_handler@V?$t_counted_ptr@Vt_abstract_combat_object@@@@@@;vft=4cb88c;col=4f4264;td=5856b8;chd=4f4254;offset=8;cdOffset=0;validated-hierarchy; map:47386
DATA_CHT_1_COMPGEN(0x008f4240, "t_add_handler<t_counted_ptr<t_abstract_combat_object>>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_add_handler@V?$t_counted_ptr@Vt_abstract_combat_object@@@@@@;vft=4cb88c;col=4f4264;td=5856b8;chd=4f4254;offset=8;cdOffset=0;validated-hierarchy; map:47387
DATA_CHT_1_COMPGEN(0x008f4254, "t_add_handler<t_counted_ptr<t_abstract_combat_object>>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:47388
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_add_handler<t_counted_ptr<t_abstract_combat_object>>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// name:A; map symbol; map:47389
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_1<t_counted_ptr<t_abstract_combat_object>>::`RTTI Complete Object Locator'{for `t_abstract_function_1<void, t_counted_ptr<t_abstract_combat_object>>'}")

// name:A; map symbol; map:47390
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_handler_base_1<t_counted_ptr<t_abstract_combat_object>>::`RTTI Base Class Array'")

// name:A; map symbol; map:47391
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_handler_base_1<t_counted_ptr<t_abstract_combat_object>>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:47392
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_1<t_counted_ptr<t_abstract_combat_object>>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_handler_base@@;vft=4cb8a0;col=4f41d0;td=585694;chd=4f41c0;offset=8;cdOffset=0;validated-hierarchy; map:47393
DATA_CHT_1_COMPGEN(0x008f41d0, "const t_handler_base::`RTTI Complete Object Locator'{for `t_abstract_function_0<void>'}")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_handler_base@@;vft=4cb8a0;col=4f41d0;td=585694;chd=4f41c0;offset=8;cdOffset=0;validated-hierarchy; map:47394
DATA_CHT_1_COMPGEN(0x008f41b0, "t_handler_base::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_handler_base@@;vft=4cb8a0;col=4f41d0;td=585694;chd=4f41c0;offset=8;cdOffset=0;validated-hierarchy; map:47395
DATA_CHT_1_COMPGEN(0x008f41c0, "t_handler_base::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:47396
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_0@X@@;bcd=4f4158;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47397
DATA_CHT_1_COMPGEN(0x008f4158, "t_abstract_function_0<void>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_function_0@X@@;vft=4cb8b4;col=4f4188;td=58566c;chd=4f4178;offset=0;cdOffset=0;validated-hierarchy; map:47398
DATA_CHT_1_COMPGEN(0x008f4170, "t_abstract_function_0<void>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_function_0@X@@;vft=4cb8b4;col=4f4188;td=58566c;chd=4f4178;offset=0;cdOffset=0;validated-hierarchy; map:47399
DATA_CHT_1_COMPGEN(0x008f4178, "t_abstract_function_0<void>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_function_0@X@@;vft=4cb8b4;col=4f4188;td=58566c;chd=4f4178;offset=0;cdOffset=0;validated-hierarchy; map:47400
DATA_CHT_1_COMPGEN(0x008f4188, "const t_abstract_function_0<void>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_1@XV?$t_counted_ptr@Vt_abstract_combat_object@@@@@@;bcd=4f4080;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47401
DATA_CHT_1_COMPGEN(0x008f4080, "t_abstract_function_1<void, t_counted_ptr<t_abstract_combat_object>>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_function_1@XV?$t_counted_ptr@Vt_abstract_combat_object@@@@@@;vft=4cb880;col=4f40b0;td=585560;chd=4f40a0;offset=0;cdOffset=0;validated-hierarchy; map:47402
DATA_CHT_1_COMPGEN(0x008f4098, "t_abstract_function_1<void, t_counted_ptr<t_abstract_combat_object>>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_function_1@XV?$t_counted_ptr@Vt_abstract_combat_object@@@@@@;vft=4cb880;col=4f40b0;td=585560;chd=4f40a0;offset=0;cdOffset=0;validated-hierarchy; map:47403
DATA_CHT_1_COMPGEN(0x008f40a0, "t_abstract_function_1<void, t_counted_ptr<t_abstract_combat_object>>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_function_1@XV?$t_counted_ptr@Vt_abstract_combat_object@@@@@@;vft=4cb880;col=4f40b0;td=585560;chd=4f40a0;offset=0;cdOffset=0;validated-hierarchy; map:47404
DATA_CHT_1_COMPGEN(0x008f40b0, "const t_abstract_function_1<void, t_counted_ptr<t_abstract_combat_object>>::`RTTI Complete Object Locator'")

// === .data (9 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_combat_object_base@@;td=5854e8;validated-header; map:57300
DATA_CHT_1_COMPGEN(0x009854e8, "t_combat_object_base `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_combat_saveable_object@@;td=58550c;validated-header; map:57301
DATA_CHT_1_COMPGEN(0x0098550c, "t_combat_saveable_object `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_abstract_combat_object@@;td=585534;validated-header; map:57302
DATA_CHT_1_COMPGEN(0x00985534, "t_abstract_combat_object `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_function_1@XV?$t_counted_ptr@Vt_abstract_combat_object@@@@@@;td=585560;validated-header; map:57303
DATA_CHT_1_COMPGEN(0x00985560, "t_abstract_function_1<void, t_counted_ptr<t_abstract_combat_object>> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_handler_base_1@V?$t_counted_ptr@Vt_abstract_combat_object@@@@@@;td=5855b8;validated-header; map:57304
DATA_CHT_1_COMPGEN(0x009855b8, "t_handler_base_1<t_counted_ptr<t_abstract_combat_object>> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_1@Vt_battlefield@@V?$t_counted_ptr@Vt_abstract_combat_object@@@@@@;td=585608;validated-header; map:57305
DATA_CHT_1_COMPGEN(0x00985608, "t_bound_handler_1<t_battlefield, t_counted_ptr<t_abstract_combat_object>> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_function_0@X@@;td=58566c;validated-header; map:57306
DATA_CHT_1_COMPGEN(0x0098566c, "t_abstract_function_0<void> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_handler_base@@;td=585694;validated-header; map:57307
DATA_CHT_1_COMPGEN(0x00985694, "t_handler_base `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_add_handler@V?$t_counted_ptr@Vt_abstract_combat_object@@@@@@;td=5856b8;validated-header; map:57308
DATA_CHT_1_COMPGEN(0x009856b8, "t_add_handler<t_counted_ptr<t_abstract_combat_object>> `RTTI Type Descriptor'")
