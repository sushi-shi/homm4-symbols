// adv_medicine_wagon.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 28/61 (A:21 B:2 C:5); unaccounted 33; skipped std 3.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (41 symbols) ===

// name:C; dyninit; see ledger; map:71044
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_INIT_DISPATCH, "adv_medicine_wagon#1")

// name:C; dyninit; see ledger; map:71045
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adv_medicine_wagon#1")

// name:C; dyninit; see ledger; map:71046
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "adv_medicine_wagon#1")

// name:C; dyninit; see ledger; map:71047
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "adv_medicine_wagon#1")

// name:C; dyninit; see ledger; map:71048
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_INIT_DISPATCH, "adv_medicine_wagon#2")

// name:C; dyninit; see ledger; map:71049
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adv_medicine_wagon#2")

// name:C; dyninit; see ledger; map:71050
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "adv_medicine_wagon#2")

// name:C; dyninit; see ledger; map:71051
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "adv_medicine_wagon#2")

// confidence:A; dyninit-init; owner-conf-C; map:71052; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x004403c0, 0x15, STATIC_INIT_DISPATCH, "adv_medicine_wagon#3")

// name:C; dyninit; see ledger; map:71053
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adv_medicine_wagon#3")

// confidence:A; dyninit-init; owner-conf-C; map:71054; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x004403e0, 0x1c, STATIC_INIT_DISPATCH, "adv_medicine_wagon#4")

// name:C; dyninit; see ledger; map:71055
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adv_medicine_wagon#4")

// confidence:A; align-order; retn,stable,vptr; map:4806
VA_CHT_1(0x00440400, 0x11f)
t_adv_medicine_wagon::t_adv_medicine_wagon(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:4807
VA_CHT_1(0x004405c0, 0x930)
void t_adv_medicine_wagon::activate_trigger(
    t_army* arg_0,
    t_adv_map_point const& arg_1,
    t_direction arg_2,
    t_adventure_frame* arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:4808
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adv_medicine_wagon::initialize(t_adventure_map& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:4809
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adv_medicine_wagon::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:4810
VA_CHT_1(0x00441170, 0x1fd)
bool t_adv_medicine_wagon::read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_qualified_adv_object_type const& arg_1,
    int arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:4811
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
float t_adv_medicine_wagon::ai_value(
    t_adventure_ai const& arg_0,
    t_creature_array const& arg_1,
    int arg_2
) const
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:71056; name:B (dyninit; see ledger)
VA_CHT_1(0x004418d0, 0x20)
// adv_medicine_wagon$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:A; dyninit-tinit; owner-conf-B; map:71058; name:B (dyninit; see ledger)
VA_CHT_1(0x004418f0, 0x5c)
// adv_medicine_wagon$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:71059
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adv_medicine_wagon$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:71060
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adv_medicine_wagon$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:71061
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adv_medicine_wagon$tatexit4
// Function body not reconstructed; signature retained as a comment.

// confidence:A; align-band; retn,stable,vslot; map:4812
VA_CHT_1_COMPGEN(0x00440520, 0x2d, VECTOR_DELETING_DTOR, t_adv_medicine_wagon)

// name:A; map symbol; map:4813
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_adv_medicine_wagon)

// confidence:C; align-band; retn,stable; map:4814
VA_CHT_1(0x004413b0, 0x38)
// public: void t_adv_medicine_wagon::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:4815
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_medicine_wagon::~t_adv_medicine_wagon()
{
    // Body unavailable.
}

// name:A; map symbol; map:4816
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_window::set_help_balloon_text(std::string const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:4817
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_window::set_right_click_text(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:4820
VA_CHT_1(0x00440550, 0x6a)
t_cached_ptr<t_bitmap_layer>::t_cached_ptr<t_bitmap_layer>()
{
    // Body unavailable.
}

// name:A; map symbol; map:4821
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cached_ptr<t_bitmap_layer>& t_cached_ptr<t_bitmap_layer>::operator=(
    t_cached_ptr<t_bitmap_layer> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:4822
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_registration<t_adv_medicine_wagon>::t_object_registration<t_adv_medicine_wagon>(
    t_adv_object_type arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:4823
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_bitmap_layer_cache_window>& t_counted_ptr<t_bitmap_layer_cache_window>::operator=(
    t_bitmap_layer_cache_window* arg_0
)
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:4824
VA_CHT_1(0x004415e0, 0x21)
t_bitmap_layer_cache_window* t_counted_ptr<t_bitmap_layer_cache_window>::operator t_bitmap_layer_cache_window*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:4825
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_layer_cache_window* t_counted_ptr<t_bitmap_layer_cache_window>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:4826
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_factory<t_adv_medicine_wagon>::t_object_factory<t_adv_medicine_wagon>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:4827
VA_CHT_1(0x00441640, 0x62)
t_stationary_adventure_object* t_object_factory<t_adv_medicine_wagon>::create(
    std::string const& arg_0,
    t_qualified_adv_object_type const& arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:4828
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_cached_ptr<t_bitmap_layer>::assign(t_bitmap_layer* arg_0, t_cached_ptr_base const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:4829
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_layer* t_cached_ptr<t_bitmap_layer>::get() const
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:4830
VA_CHT_1_COMPGEN(0x00441950, 0x8, VECTOR_DELETING_DTOR, t_adv_medicine_wagon)

// confidence:C; align-order; stable; map:4831
VA_CHT_1_COMPGEN(0x00441960, 0xb, VECTOR_DELETING_DTOR, t_adv_medicine_wagon)

// === .rdata (7 symbols) ===

// name:A; map symbol; map:42890
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_medicine_wagon::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:42891
DATA_CHT_1_COMPGEN(0x008d042c, "const t_adv_medicine_wagon::`vftable'")

// confidence:B; rtti-order; map:42892
DATA_CHT_1_COMPGEN(0x008d04ec, "const t_adv_medicine_wagon::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:42893
DATA_CHT_1_COMPGEN(0x008d04f4, "const t_adv_medicine_wagon::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:42894
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_medicine_wagon::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:42895
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_medicine_wagon::`vbtable'{for `t_abstract_stationary_adv_object'}")

// confidence:A; rtti-name; map:42896
DATA_CHT_1_COMPGEN(0x008d0420, "const t_object_factory<t_adv_medicine_wagon>::`vftable'")

// === .rdata$r (11 symbols) ===

// name:A; map symbol; map:48116
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_medicine_wagon::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_adv_medicine_wagon@@;vft=4d042c;col=4f7c60;td=588c74;chd=4f7c50;offset=100;cdOffset=0;validated-hierarchy; map:48117
DATA_CHT_1_COMPGEN(0x008f7c60, "const t_adv_medicine_wagon::`RTTI Complete Object Locator'")

// name:A; map symbol; map:48118
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_medicine_wagon::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adv_medicine_wagon@@;bcd=4f7c10;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48119
DATA_CHT_1_COMPGEN(0x008f7c10, "t_adv_medicine_wagon::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adv_medicine_wagon@@;vft=4d042c;col=4f7c60;td=588c74;chd=4f7c50;offset=100;cdOffset=0;validated-hierarchy; map:48120
DATA_CHT_1_COMPGEN(0x008f7c28, "t_adv_medicine_wagon::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adv_medicine_wagon@@;vft=4d042c;col=4f7c60;td=588c74;chd=4f7c50;offset=100;cdOffset=0;validated-hierarchy; map:48121
DATA_CHT_1_COMPGEN(0x008f7c50, "t_adv_medicine_wagon::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:48122
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_medicine_wagon::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_object_factory@Vt_adv_medicine_wagon@@@@;bcd=4f7b8c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48123
DATA_CHT_1_COMPGEN(0x008f7b8c, "t_object_factory<t_adv_medicine_wagon>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_object_factory@Vt_adv_medicine_wagon@@@@;vft=4d0420;col=4f7bc0;td=588c38;chd=4f7bb0;offset=0;cdOffset=0;validated-hierarchy; map:48124
DATA_CHT_1_COMPGEN(0x008f7ba4, "t_object_factory<t_adv_medicine_wagon>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_object_factory@Vt_adv_medicine_wagon@@@@;vft=4d0420;col=4f7bc0;td=588c38;chd=4f7bb0;offset=0;cdOffset=0;validated-hierarchy; map:48125
DATA_CHT_1_COMPGEN(0x008f7bb0, "t_object_factory<t_adv_medicine_wagon>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_object_factory@Vt_adv_medicine_wagon@@@@;vft=4d0420;col=4f7bc0;td=588c38;chd=4f7bb0;offset=0;cdOffset=0;validated-hierarchy; map:48126
DATA_CHT_1_COMPGEN(0x008f7bc0, "const t_object_factory<t_adv_medicine_wagon>::`RTTI Complete Object Locator'")

// === .data (2 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_adv_medicine_wagon@@;td=588c74;validated-header; map:57501
DATA_CHT_1_COMPGEN(0x00988c74, "t_adv_medicine_wagon `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_object_factory@Vt_adv_medicine_wagon@@@@;td=588c38;validated-header; map:57502
DATA_CHT_1_COMPGEN(0x00988c38, "t_object_factory<t_adv_medicine_wagon> `RTTI Type Descriptor'")
