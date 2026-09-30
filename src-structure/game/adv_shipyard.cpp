// adv_shipyard.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\adv_shipyard.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 32/64 (A:13 B:3 C:0); unaccounted 32; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (43 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:70834; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00462370, 0x15, STATIC_INIT_DISPATCH, "adv_shipyard#1")

// name:C; dyninit; see ledger; map:70835
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adv_shipyard#1")

// confidence:D; dyninit-init; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:70836; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00462390, 0x1c, STATIC_INIT_DISPATCH, g_shipyard_registration)

// name:B; dyninit; see ledger; map:70837
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, g_shipyard_registration)

// name:A; map symbol; map:5729
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adv_shipyard::read_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_progress_handler* arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:5730
VA_CHT_1(0x004623b0, 0x6d3)
void t_adv_shipyard::build_ship(t_town_type arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:5731
VA_CHT_1(0x00462a90, 0x243)
void t_adv_shipyard::activate_trigger(
    t_army* arg_0,
    t_adv_map_point const& arg_1,
    t_direction arg_2,
    t_adventure_frame* arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:5732
VA_CHT_1(0x00462ce0, 0x67)
void t_adv_shipyard::left_double_click(t_mouse_event const& arg_0, t_adventure_frame* arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:5733
VA_CHT_1(0x00462d50, 0x20c)
bool t_adv_shipyard::find_new_ship_position(t_adv_map_point& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:70838
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
static bool find_new_ship_position(
    t_adventure_map const* arg_0,
    t_adv_map_point& arg_1,
    t_map_rect_2d const& arg_2
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:5734
VA_CHT_1(0x00462f60, 0xd)
void t_adv_shipyard::read_postplacement(t_adventure_map& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:5735
VA_CHT_1(0x00462f70, 0x28)
bool t_adv_shipyard::preplacement(t_adventure_map& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:5736
VA_CHT_1(0x00462fa0, 0x24)
void t_adv_shipyard::on_removed()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:5737
VA_CHT_1(0x00462fd0, 0x3e7)
void t_adv_shipyard::pathing_destination_query(
    t_adventure_path_point const& arg_0,
    t_adventure_path_finder& arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:70839
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
static void add_pathing_destinations(
    t_adventure_map const* arg_0,
    int arg_1,
    t_adventure_path_point const& arg_2,
    t_adventure_path_finder& arg_3,
    t_map_rect_2d const& arg_4
)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:70840; name:B (dyninit; see ledger)
VA_CHT_1(0x00463640, 0x20)
// adv_shipyard$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:D; dyninit-tinit; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:70842; name:B (dyninit; see ledger)
VA_CHT_1(0x00463660, 0x5c)
// adv_shipyard$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:70843
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adv_shipyard$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:70844
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adv_shipyard$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:70845
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adv_shipyard$tatexit4
// Function body not reconstructed; signature retained as a comment.

namespace {

// name:A; map symbol; map:5738
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int to_base_class_map_format_version(int arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:5739
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_material_array::operator<(t_material_array const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:5740
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_material_array::t_material_array()
{
    // Body unavailable.
}

// name:A; map symbol; map:5741
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_creature_stack& t_creature_array::get_leader()
{
    // Body unavailable.
}

// name:A; map symbol; map:5742
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_town_type t_player::get_alignment() const
{
    // Body unavailable.
}

// name:A; map symbol; map:5743
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_map_rect_2d::bottom() const
{
    // Body unavailable.
}

// name:A; map symbol; map:5744
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_map_rect_2d::left() const
{
    // Body unavailable.
}

// name:A; map symbol; map:5745
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_map_rect_2d::right() const
{
    // Body unavailable.
}

// name:A; map symbol; map:5746
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_map_rect_2d::top() const
{
    // Body unavailable.
}

// name:A; map symbol; map:5747
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_path_search_type t_adventure_enemy_marker::get_path_type() const
{
    // Body unavailable.
}

// name:A; map symbol; map:5748
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_int_array<7>::t_int_array<7>()
{
    // Body unavailable.
}

// name:A; map symbol; map:5749
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int const* t_int_array<7>::get() const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:5750
VA_CHT_1(0x00463620, 0x12)
t_object_registration<t_adv_shipyard>::t_object_registration<t_adv_shipyard>(t_adv_object_type arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:5751
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_factory<t_adv_shipyard>::t_object_factory<t_adv_shipyard>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,vslot;vftable-certificate=633c0:5752;class=t_object_factory<class t_adv_shipyard>;proof=unique-hierarchy-method-and-slot-cleanup;cleanup=8;checked-rtti-and-raw-slots;vft=4d1824,col=4f89dc,offset=0,slot=0,entry=633c0; map:5752
VA_CHT_1(0x004633c0, 0x189)
t_stationary_adventure_object* t_object_factory<t_adv_shipyard>::create(
    std::string const& arg_0,
    t_qualified_adv_object_type const& arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:5753
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_shipyard::t_adv_shipyard(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:5754
VA_CHT_1_COMPGEN(0x00463550, 0x2d, SCALAR_DELETING_DTOR, t_adv_shipyard)

// name:A; map symbol; map:5755
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_adv_shipyard)

// name:A; map symbol; map:5756
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// public: void t_adv_shipyard::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:5757
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_shipyard::~t_adv_shipyard()
{
    // Body unavailable.
}

// name:A; map symbol; map:5758
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_int_array<7>::set(int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:5759
VA_CHT_1_COMPGEN(0x004636c0, 0x8, VECTOR_DELETING_DTOR, t_adv_shipyard)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:5760
VA_CHT_1_COMPGEN(0x004636d0, 0xb, VECTOR_DELETING_DTOR, t_adv_shipyard)

// === .rdata (7 symbols) ===

// confidence:A; rtti-name; map:42992
DATA_CHT_1_COMPGEN(0x008d1824, "const t_object_factory<t_adv_shipyard>::`vftable'")

// name:A; map symbol; map:42993
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_shipyard::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:42994
DATA_CHT_1_COMPGEN(0x008d182c, "const t_adv_shipyard::`vftable'")

// confidence:B; rtti-order; map:42995
DATA_CHT_1_COMPGEN(0x008d18ec, "const t_adv_shipyard::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:42996
DATA_CHT_1_COMPGEN(0x008d18f4, "const t_adv_shipyard::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:42997
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_shipyard::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:42998
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_shipyard::`vbtable'{for `t_abstract_stationary_adv_object'}")

// === .rdata$r (11 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_object_factory@Vt_adv_shipyard@@@@;bcd=4f89a8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48305
DATA_CHT_1_COMPGEN(0x008f89a8, "t_object_factory<t_adv_shipyard>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_object_factory@Vt_adv_shipyard@@@@;vft=4d1824;col=4f89dc;td=58aa7c;chd=4f89cc;offset=0;cdOffset=0;validated-hierarchy; map:48306
DATA_CHT_1_COMPGEN(0x008f89c0, "t_object_factory<t_adv_shipyard>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_object_factory@Vt_adv_shipyard@@@@;vft=4d1824;col=4f89dc;td=58aa7c;chd=4f89cc;offset=0;cdOffset=0;validated-hierarchy; map:48307
DATA_CHT_1_COMPGEN(0x008f89cc, "t_object_factory<t_adv_shipyard>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_object_factory@Vt_adv_shipyard@@@@;vft=4d1824;col=4f89dc;td=58aa7c;chd=4f89cc;offset=0;cdOffset=0;validated-hierarchy; map:48308
DATA_CHT_1_COMPGEN(0x008f89dc, "const t_object_factory<t_adv_shipyard>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:48309
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_shipyard::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_adv_shipyard@@;vft=4d182c;col=4f8a84;td=58aab8;chd=4f8a74;offset=112;cdOffset=0;validated-hierarchy; map:48310
DATA_CHT_1_COMPGEN(0x008f8a84, "const t_adv_shipyard::`RTTI Complete Object Locator'")

// name:A; map symbol; map:48311
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_shipyard::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adv_shipyard@@;bcd=4f8a2c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48312
DATA_CHT_1_COMPGEN(0x008f8a2c, "t_adv_shipyard::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adv_shipyard@@;vft=4d182c;col=4f8a84;td=58aab8;chd=4f8a74;offset=112;cdOffset=0;validated-hierarchy; map:48313
DATA_CHT_1_COMPGEN(0x008f8a44, "t_adv_shipyard::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adv_shipyard@@;vft=4d182c;col=4f8a84;td=58aab8;chd=4f8a74;offset=112;cdOffset=0;validated-hierarchy; map:48314
DATA_CHT_1_COMPGEN(0x008f8a74, "t_adv_shipyard::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:48315
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_shipyard::`RTTI Complete Object Locator'{for `t_counted_object'}")

// === .data (2 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AV?$t_object_factory@Vt_adv_shipyard@@@@;td=58aa7c;validated-header; map:57552
DATA_CHT_1_COMPGEN(0x0098aa7c, "t_object_factory<t_adv_shipyard> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_adv_shipyard@@;td=58aab8;validated-header; map:57553
DATA_CHT_1_COMPGEN(0x0098aab8, "t_adv_shipyard `RTTI Type Descriptor'")

// === .bss (1 symbols) ===

namespace {

// confidence:B; dyninit-global; owner-conf-B; map:59962
DATA_CHT_1(0x009cfc20)
t_object_registration<t_adv_shipyard> g_shipyard_registration; // Initial value unavailable.

} // anonymous namespace
