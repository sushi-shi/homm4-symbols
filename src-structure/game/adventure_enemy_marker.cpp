// adventure_enemy_marker.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\adventure_enemy_marker.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 41/71 (A:24 B:1 C:0); unaccounted 30; skipped std 36.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (47 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:70641; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0048f2e0, 0x15, STATIC_INIT_DISPATCH, "adventure_enemy_marker#1")

// name:C; dyninit; see ledger; map:70642
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adventure_enemy_marker#1")

namespace {

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:8165
VA_CHT_1(0x0048f300, 0x4e)
bool t_actual_enemy_data_view::compare_point(
    t_adventure_path_data const& arg_0,
    t_adventure_path_data const& arg_1
) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:8166
VA_CHT_1(0x0048f350, 0x48)
void t_actual_enemy_data_view::set_point(
    t_adventure_path_data& arg_0,
    t_adventure_path_data const& arg_1
) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:8167
VA_CHT_1(0x0048f3a0, 0x4c)
bool t_visible_enemy_data_view::compare_point(
    t_adventure_path_data const& arg_0,
    t_adventure_path_data const& arg_1
) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:8168
VA_CHT_1(0x0048f3f0, 0x4c)
void t_visible_enemy_data_view::set_point(
    t_adventure_path_data& arg_0,
    t_adventure_path_data const& arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:8169
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool blocked_by_shroud(t_creature_array const& arg_0, t_adventure_tile const& arg_1, t_path_search_type arg_2)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:8170
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_path_sector::t_adv_path_sector()
{
    // Body unavailable.
}

// name:A; map symbol; map:8171
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_path_map::t_adv_path_map(int arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:8172
VA_CHT_1(0x0048f440, 0x12a)
void t_adv_path_map::clear()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:8173
VA_CHT_1(0x0048f570, 0x180)
t_adv_path_sector* t_adv_path_map::get_sector(t_adv_map_point const& arg_0, bool arg_1) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:8174
VA_CHT_1(0x0048f6f0, 0x114)
t_adventure_enemy_marker::t_adventure_enemy_marker(t_adventure_map& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:8175
VA_CHT_1(0x0048f810, 0x19)
void t_adventure_enemy_marker::initialize()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:8176
VA_CHT_1(0x0048f830, 0x1bd)
void t_adventure_enemy_marker::find_blocked_directions(
    t_adventure_path_point const& arg_0,
    t_creature_array const& arg_1,
    bool arg_2,
    t_adv_map_point* arg_3,
    bool* arg_4,
    bool* arg_5
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:8177
VA_CHT_1(0x0048f9f0, 0x971)
void t_adventure_enemy_marker::mark_enemy(
    t_army const* arg_0,
    t_adventure_path_finder_enemy_data_view const& arg_1,
    t_skill_mastery arg_2
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:8178
VA_CHT_1(0x00490370, 0x390)
void t_adventure_enemy_marker::mark_enemies(t_adv_map_point const& arg_0, int arg_1, int arg_2)
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:70643
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// t_adventure_enemy_marker::mark_enemies$sdtor
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:8179
VA_CHT_1(0x00490720, 0x13)
void t_adventure_enemy_marker::set_army(t_creature_array* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:8180
VA_CHT_1(0x00490740, 0x15)
void t_adventure_enemy_marker::set_path_type(t_path_search_type arg_0)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:70644; name:B (dyninit; see ledger)
VA_CHT_1(0x00490bb0, 0x20)
// adventure_enemy_marker$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:70646; name:B (dyninit; see ledger)
VA_CHT_1(0x00490bd0, 0x5c)
// adventure_enemy_marker$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:70647
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adventure_enemy_marker$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:70648
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adventure_enemy_marker$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:70649
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adventure_enemy_marker$tatexit4
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:8181
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_adv_path_sector)

// name:A; map symbol; map:8182
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_adv_path_sector)

// name:A; map symbol; map:8183
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_path_sector::~t_adv_path_sector()
{
    // Body unavailable.
}

// name:A; map symbol; map:8184
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adv_path_sector::enemies_are_marked() const
{
    // Body unavailable.
}

// name:A; map symbol; map:8185
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adv_path_sector::set_enemies_marked(bool arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:8186
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adv_path_map::set_parent(t_adventure_enemy_marker* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:8187
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_direction opposite(t_direction arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:8188
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_direction clockwise(t_direction arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:8189
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_direction counter_clockwise(t_direction arg_0, int arg_1)
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:8190
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_actual_enemy_data_view::t_actual_enemy_data_view()
{
    // Body unavailable.
}

// name:A; map symbol; map:8191
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_actual_enemy_data_view::~t_actual_enemy_data_view()
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:8192
VA_CHT_1(0x00490710, 0x7)
t_adventure_path_finder_enemy_data_view::~t_adventure_path_finder_enemy_data_view()
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:8193
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_visible_enemy_data_view::t_visible_enemy_data_view()
{
    // Body unavailable.
}

// name:A; map symbol; map:8194
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_visible_enemy_data_view::~t_visible_enemy_data_view()
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:8195
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_path_finder_enemy_data_view::t_adventure_path_finder_enemy_data_view()
{
    // Body unavailable.
}

// name:A; map symbol; map:8216
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_adv_path_sector>::t_counted_ptr<t_adv_path_sector>()
{
    // Body unavailable.
}

// name:A; map symbol; map:8217
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_path_sector* t_counted_ptr<t_adv_path_sector>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:8218
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_adv_path_sector>& t_counted_ptr<t_adv_path_sector>::operator=(t_adv_path_sector* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:8219
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_path_sector* t_counted_ptr<t_adv_path_sector>::operator t_adv_path_sector*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:8220
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_path_sector* t_counted_ptr<t_adv_path_sector>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:8229
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_adv_path_sector>::t_counted_ptr<t_adv_path_sector>(
    t_counted_ptr<t_adv_path_sector> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:8230
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_adv_path_sector>& t_counted_ptr<t_adv_path_sector>::operator=(
    t_counted_ptr<t_adv_path_sector> const& arg_0
)
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:8233
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_compare_move_cost::operator()(
    t_adventure_path_point const& arg_0,
    t_adventure_path_point const& arg_1
) const
{
    // Body unavailable.
}

} // anonymous namespace

// === .rdata (4 symbols) ===

// confidence:A; rtti-name; map:43164
DATA_CHT_1_COMPGEN(0x008d382c, "const t_adv_path_sector::`vftable'")

// confidence:A; rtti-name; map:43165
DATA_CHT_1_COMPGEN(0x008d384c, "const t_actual_enemy_data_view::`vftable'")

// confidence:A; rtti-name; map:43166
DATA_CHT_1_COMPGEN(0x008d3834, "const t_adventure_path_finder_enemy_data_view::`vftable'")

// confidence:A; rtti-name; map:43167
DATA_CHT_1_COMPGEN(0x008d3840, "const t_visible_enemy_data_view::`vftable'")

// === .rdata$r (16 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adv_path_sector@@;bcd=4fa3ac;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48638
DATA_CHT_1_COMPGEN(0x008fa3ac, "t_adv_path_sector::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adv_path_sector@@;vft=4d382c;col=4fa3e0;td=58be2c;chd=4fa3d0;offset=0;cdOffset=0;validated-hierarchy; map:48639
DATA_CHT_1_COMPGEN(0x008fa3c4, "t_adv_path_sector::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adv_path_sector@@;vft=4d382c;col=4fa3e0;td=58be2c;chd=4fa3d0;offset=0;cdOffset=0;validated-hierarchy; map:48640
DATA_CHT_1_COMPGEN(0x008fa3d0, "t_adv_path_sector::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_adv_path_sector@@;vft=4d382c;col=4fa3e0;td=58be2c;chd=4fa3d0;offset=0;cdOffset=0;validated-hierarchy; map:48641
DATA_CHT_1_COMPGEN(0x008fa3e0, "const t_adv_path_sector::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adventure_path_finder_enemy_data_view@@;bcd=4fa484;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48642
DATA_CHT_1_COMPGEN(0x008fa484, "t_adventure_path_finder_enemy_data_view::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_actual_enemy_data_view@?%C:\Work\game\adventure_enemy_marker.cpp832031526@@;bcd=4fa3f4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48643
DATA_CHT_1_COMPGEN(0x008fa3f4, "t_actual_enemy_data_view::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_actual_enemy_data_view@?%C:\Work\game\adventure_enemy_marker.cpp832031526@@;vft=4d384c;col=4fa428;td=58be50;chd=4fa418;offset=0;cdOffset=0;validated-hierarchy; map:48644
DATA_CHT_1_COMPGEN(0x008fa40c, "t_actual_enemy_data_view::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_actual_enemy_data_view@?%C:\Work\game\adventure_enemy_marker.cpp832031526@@;vft=4d384c;col=4fa428;td=58be50;chd=4fa418;offset=0;cdOffset=0;validated-hierarchy; map:48645
DATA_CHT_1_COMPGEN(0x008fa418, "t_actual_enemy_data_view::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_actual_enemy_data_view@?%C:\Work\game\adventure_enemy_marker.cpp832031526@@;vft=4d384c;col=4fa428;td=58be50;chd=4fa418;offset=0;cdOffset=0;validated-hierarchy; map:48646
DATA_CHT_1_COMPGEN(0x008fa428, "const t_actual_enemy_data_view::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adventure_path_finder_enemy_data_view@@;vft=4d3834;col=4fa4b4;td=58bf0c;chd=4fa4a4;offset=0;cdOffset=0;validated-hierarchy; map:48647
DATA_CHT_1_COMPGEN(0x008fa49c, "t_adventure_path_finder_enemy_data_view::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adventure_path_finder_enemy_data_view@@;vft=4d3834;col=4fa4b4;td=58bf0c;chd=4fa4a4;offset=0;cdOffset=0;validated-hierarchy; map:48648
DATA_CHT_1_COMPGEN(0x008fa4a4, "t_adventure_path_finder_enemy_data_view::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_adventure_path_finder_enemy_data_view@@;vft=4d3834;col=4fa4b4;td=58bf0c;chd=4fa4a4;offset=0;cdOffset=0;validated-hierarchy; map:48649
DATA_CHT_1_COMPGEN(0x008fa4b4, "const t_adventure_path_finder_enemy_data_view::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_visible_enemy_data_view@?%C:\Work\game\adventure_enemy_marker.cpp832031526@@;bcd=4fa43c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48650
DATA_CHT_1_COMPGEN(0x008fa43c, "t_visible_enemy_data_view::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_visible_enemy_data_view@?%C:\Work\game\adventure_enemy_marker.cpp832031526@@;vft=4d3840;col=4fa470;td=58beb0;chd=4fa460;offset=0;cdOffset=0;validated-hierarchy; map:48651
DATA_CHT_1_COMPGEN(0x008fa454, "t_visible_enemy_data_view::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_visible_enemy_data_view@?%C:\Work\game\adventure_enemy_marker.cpp832031526@@;vft=4d3840;col=4fa470;td=58beb0;chd=4fa460;offset=0;cdOffset=0;validated-hierarchy; map:48652
DATA_CHT_1_COMPGEN(0x008fa460, "t_visible_enemy_data_view::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_visible_enemy_data_view@?%C:\Work\game\adventure_enemy_marker.cpp832031526@@;vft=4d3840;col=4fa470;td=58beb0;chd=4fa460;offset=0;cdOffset=0;validated-hierarchy; map:48653
DATA_CHT_1_COMPGEN(0x008fa470, "const t_visible_enemy_data_view::`RTTI Complete Object Locator'")

// === .data (4 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_adv_path_sector@@;td=58be2c;validated-header; map:57641
DATA_CHT_1_COMPGEN(0x0098be2c, "t_adv_path_sector `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_adventure_path_finder_enemy_data_view@@;td=58bf0c;validated-header; map:57642
DATA_CHT_1_COMPGEN(0x0098bf0c, "t_adventure_path_finder_enemy_data_view `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_actual_enemy_data_view@?%C:\Work\game\adventure_enemy_marker.cpp832031526@@;td=58be50;validated-header; map:57643
DATA_CHT_1_COMPGEN(0x0098be50, "t_actual_enemy_data_view `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_visible_enemy_data_view@?%C:\Work\game\adventure_enemy_marker.cpp832031526@@;td=58beb0;validated-header; map:57644
DATA_CHT_1_COMPGEN(0x0098beb0, "t_visible_enemy_data_view `RTTI Type Descriptor'")
