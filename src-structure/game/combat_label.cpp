// combat_label.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\combat_label.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 36/65 (A:7 B:2 C:0); unaccounted 29; skipped std 128.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (52 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67781; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005cf1a0, 0x15, STATIC_INIT_DISPATCH, "combat_label#1")

// name:C; dyninit; see ledger; map:67782
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_label#1")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67783; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005cf1c0, 0x15, STATIC_INIT_DISPATCH, "combat_label#2")

// name:C; dyninit; see ledger; map:67784
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_label#2")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67785; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005cf1e0, 0x15, STATIC_INIT_DISPATCH, "combat_label#3")

// name:C; dyninit; see ledger; map:67786
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_label#3")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67787; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005cf200, 0x15, STATIC_INIT_DISPATCH, "combat_label#4")

// name:C; dyninit; see ledger; map:67788
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_label#4")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67789; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005cf220, 0x10, STATIC_INIT_DISPATCH, "combat_label#5")

// name:C; dyninit; see ledger; map:67790
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_label#5")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67791; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005cf230, 0x15, STATIC_INIT_DISPATCH, "combat_label#6")

// name:C; dyninit; see ledger; map:67792
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_label#6")

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:20877
VA_CHT_1(0x005cf250, 0x11e)
t_combat_label::t_combat_label(t_battlefield& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:20878
VA_CHT_1(0x005cf520, 0x14c)
t_combat_label::t_combat_label(t_combat_creature& arg_0, t_player_color arg_1, double arg_2)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:20879
VA_CHT_1(0x005cf670, 0x8e9)
void t_combat_label::set_creature(t_combat_creature const* arg_0, t_player_color arg_1, double arg_2)
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:67793
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// t_combat_label::set_creature$sdtor2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:67794
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// t_combat_label::set_creature$sdtor1
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:20880
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_combat_label::blocks_movement() const
{
    // Body unavailable.
}

// name:A; map symbol; map:20881
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_combat_label::is_animated() const
{
    // Body unavailable.
}

// name:A; map symbol; map:20882
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_combat_label::draw_shadow_to(
    unsigned long arg_0,
    t_screen_rect const& arg_1,
    t_abstract_bitmap<unsigned short>& arg_2,
    t_screen_point const& arg_3
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:20883
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_combat_label::draw_shadow_to(
    unsigned long arg_0,
    t_abstract_bitmap<unsigned short>& arg_1,
    t_screen_point const& arg_2
) const
{
    // Body unavailable.
}

// confidence:D; align-order; review-status=unreviewed;classification=D:not-a-best-guess; map:20884
VA_CHT_1(0x005cff70, 0xa)
void t_combat_label::set_frame(int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:20885
VA_CHT_1(0x005d01e0, 0x70)
void t_combat_label::on_idle()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:20886
VA_CHT_1(0x005d0250, 0x169)
void t_combat_label::draw_status_bar(
    int arg_0,
    int arg_1,
    t_bitmap_layer const* arg_2,
    t_screen_rect const& arg_3,
    t_abstract_bitmap<unsigned short>& arg_4,
    t_screen_point const& arg_5
) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:20887
VA_CHT_1(0x005d03c0, 0x423)
void t_combat_label::draw_to(
    unsigned long arg_0,
    t_screen_rect const& arg_1,
    t_abstract_bitmap<unsigned short>& arg_2,
    t_screen_point const& arg_3
) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:20888
VA_CHT_1(0x005d07f0, 0x37)
void t_combat_label::draw_to(
    unsigned long arg_0,
    t_abstract_bitmap<unsigned short>& arg_1,
    t_screen_point const& arg_2
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:20889
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_combat_label::get_footprint_size() const
{
    // Body unavailable.
}

// name:A; map symbol; map:20890
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_combat_label::get_height() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:20891
VA_CHT_1(0x005d0830, 0x10b)
t_screen_rect t_combat_label::get_rect() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:20892
VA_CHT_1(0x005d0940, 0x52)
t_screen_rect t_combat_label::get_rect(unsigned long arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:20893
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_rect t_combat_label::get_shadow_rect() const
{
    // Body unavailable.
}

// name:A; map symbol; map:20894
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_rect t_combat_label::get_shadow_rect(unsigned long arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:20895
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_combat_label::hit_test(unsigned long arg_0, t_screen_point const& arg_1) const
{
    // Body unavailable.
}

// name:A; map symbol; map:20896
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_combat_label::is_underlay() const
{
    // Body unavailable.
}

// name:A; map symbol; map:20897
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_combat_label::needs_redrawing(unsigned long arg_0, unsigned long arg_1) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:20898
VA_CHT_1(0x005d09b0, 0x9c)
t_map_point_3d t_combat_label::compute_position(bool arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:20899
VA_CHT_1(0x005d0a50, 0xb)
int t_combat_label::get_depth() const
{
    // Body unavailable.
}

// name:A; map symbol; map:20900
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_combat_label::on_placed()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:20901
VA_CHT_1(0x005d0a60, 0x17)
void t_combat_label::on_removed()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:20902
VA_CHT_1(0x005d0a80, 0x17)
t_combat_object_type t_combat_label::get_object_type() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:20903
VA_CHT_1(0x005d0ab0, 0xf8)
bool t_combat_label::read(t_combat_reader& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:20904
VA_CHT_1(0x005d0bb0, 0xa5)
bool t_combat_label::write(t_combat_writer& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:20905
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_combat_label::place_during_read(t_battlefield& arg_0)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:67795; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005d2620, 0x20, STATIC_INIT_DISPATCH, combat_label)

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:20906
VA_CHT_1_COMPGEN(0x005cf370, 0x1e, VECTOR_DELETING_DTOR, t_combat_label)

// name:A; map symbol; map:20907
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_combat_label)

// name:A; map symbol; map:20908
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_label::~t_combat_label()
{
    // Body unavailable.
}

namespace {

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:20910
VA_CHT_1(0x005d2510, 0x35)
t_bitmap_array::t_bitmap_array()
{
    // Body unavailable.
}

// name:A; map symbol; map:20911
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_array::~t_bitmap_array()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:21030
VA_CHT_1(0x005d2160, 0x52)
t_bitmap_array::t_bitmap_array(t_bitmap_array const& arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:21037
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_combat_label)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:21038
VA_CHT_1_COMPGEN(0x005d2650, 0x8, VECTOR_DELETING_DTOR, t_combat_label)

// === .rdata (3 symbols) ===

// confidence:B; rtti-order; map:43944
DATA_CHT_1_COMPGEN(0x008dc51c, "const t_combat_label::`vftable'")

// confidence:A; rtti-name; map:43945
DATA_CHT_1_COMPGEN(0x008dc528, "const t_combat_label::`vftable'{for `t_combat_object_base'}")

// confidence:B; rtti-order; map:43946
DATA_CHT_1_COMPGEN(0x008dc544, "const t_combat_label::`vftable'{for `t_combat_saveable_object'}")

// === .rdata$r (7 symbols) ===

// name:A; map symbol; map:50779
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_combat_label::`RTTI Complete Object Locator'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_combat_label@@;vft=4dc528;col=503fb8;td=599174;chd=504018;offset=8;cdOffset=0;validated-hierarchy; map:50780
DATA_CHT_1_COMPGEN(0x00903fb8, "const t_combat_label::`RTTI Complete Object Locator'{for `t_combat_object_base'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_idle_processor@@;bcd=503fcc;pmd=100,-1,0;attributes=0;validated-hierarchy-link; map:50781
DATA_CHT_1_COMPGEN(0x00903fcc, "t_idle_processor::`RTTI Base Class Descriptor at (100, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_combat_label@@;bcd=503fe4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50782
DATA_CHT_1_COMPGEN(0x00903fe4, "t_combat_label::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_combat_label@@;vft=4dc528;col=503fb8;td=599174;chd=504018;offset=8;cdOffset=0;validated-hierarchy; map:50783
DATA_CHT_1_COMPGEN(0x00903ffc, "t_combat_label::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_combat_label@@;vft=4dc528;col=503fb8;td=599174;chd=504018;offset=8;cdOffset=0;validated-hierarchy; map:50784
DATA_CHT_1_COMPGEN(0x00904018, "t_combat_label::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:50785
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_combat_label::`RTTI Complete Object Locator'{for `t_combat_saveable_object'}")

// === .data (1 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_combat_label@@;td=599174;validated-header; map:58217
DATA_CHT_1_COMPGEN(0x00999174, "t_combat_label `RTTI Type Descriptor'")

// === .bss (2 symbols) ===

// name:A; map symbol; map:60113
DATA_CHT_1(UNACCOUNTED)
std::_Tree<double, std::pair<double const, t_bitmap_array>, std::map<double, t_bitmap_array, std::less<double>, std::allocator<t_bitmap_array>>::_Kfn, std::less<double>, std::allocator<t_bitmap_array>>::_Node*std::_Tree<double, std::pair<double const, t_bitmap_array>, std::map<double, t_bitmap_array, std::less<double>, std::allocator<t_bitmap_array>>::_Kfn, std::less<double>, std::allocator<t_bitmap_array>>::_Nil; // Initial value unavailable.

// name:A; map symbol; map:60115
DATA_CHT_1(UNACCOUNTED)
std::_Tree<double, std::pair<double const, t_bitmap_group_cache>, std::map<double, t_bitmap_group_cache, std::less<double>, std::allocator<t_bitmap_group_cache>>::_Kfn, std::less<double>, std::allocator<t_bitmap_group_cache>>::_Node*std::_Tree<double, std::pair<double const, t_bitmap_group_cache>, std::map<double, t_bitmap_group_cache, std::less<double>, std::allocator<t_bitmap_group_cache>>::_Kfn, std::less<double>, std::allocator<t_bitmap_group_cache>>::_Nil; // Initial value unavailable.
