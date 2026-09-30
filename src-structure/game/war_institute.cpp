// war_institute.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\war_institute.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 36/60 (A:11 B:3 C:0); unaccounted 24; skipped std 4.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (41 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:61276; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00831fe0, 0x15, STATIC_INIT_DISPATCH, "war_institute#1")

// name:C; dyninit; see ledger; map:61277
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "war_institute#1")

// confidence:D; dyninit-init; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:61278; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00832000, 0x1e, STATIC_INIT_DISPATCH, k_registration)

// name:B; dyninit; see ledger; map:61279
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, k_registration)

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:61280; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00832020, 0x11, STATIC_INIT_DISPATCH, "war_institute#3")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:61281; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00832040, 0xd7, STATIC_CTOR, "war_institute#3")

// name:C; dyninit; see ledger; map:61282
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "war_institute#3")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:61283; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00832120, 0xa, STATIC_DTOR, "war_institute#3")

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:40510
VA_CHT_1(0x00832130, 0x187)
t_war_institute::t_war_institute(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:40511
VA_CHT_1(0x00832350, 0x176)
t_war_institute::t_war_institute(t_skill_set const& arg_0, std::string const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:40512
VA_CHT_1(0x008324d0, 0xe35)
void t_war_institute::activate_trigger(
    t_army* arg_0,
    t_adv_map_point const& arg_1,
    t_direction arg_2,
    t_adventure_frame* arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:61284
VA_CHT_1(0x00833310, 0x421)
static void show_upgraded_hero_skill(t_hero* arg_0, t_skill arg_1, t_basic_dialog* arg_2)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:40513
VA_CHT_1(0x00833740, 0x221)
void t_war_institute::right_click(t_mouse_event const& arg_0, t_adventure_frame* arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40514
VA_CHT_1(0x00833970, 0x1e6)
std::vector<t_skill, std::allocator<t_skill>> t_war_institute::get_upgradable_skills(t_hero* arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:40515
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_war_institute::has_upgradable_skills(t_hero* arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:40516
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::vector<t_hero*, std::allocator<t_hero*>> t_war_institute::select_heroes_dialog(
    std::vector<t_hero*, std::allocator<t_hero*>> const& arg_0,
    std::vector<t_hero*, std::allocator<t_hero*>> const& arg_1,
    t_window* arg_2,
    t_army* arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:40517
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_war_institute::visit(t_hero* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:40518
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_war_institute::get_version() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:40519
VA_CHT_1(0x00833c40, 0x8d)
bool t_war_institute::read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_qualified_adv_object_type const& arg_1,
    int arg_2
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:40520
VA_CHT_1(0x00833cd0, 0x76)
bool t_war_institute::read_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_progress_handler* arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:40521
VA_CHT_1(0x00833d50, 0x73)
bool t_war_institute::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:40522
VA_CHT_1(0x00833dd0, 0x5f)
float t_war_institute::ai_value(t_adventure_ai const& arg_0, t_creature_array const& arg_1, int arg_2) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:40523
VA_CHT_1(0x00833e30, 0x48)
float t_war_institute::ai_value_to_hero(t_hero const* arg_0, t_creature_array const* arg_1) const
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:61285; name:B (dyninit; see ledger)
VA_CHT_1(0x00833f50, 0x20)
// war_institute$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:61287; name:B (dyninit; see ledger)
VA_CHT_1(0x00833f70, 0x5c)
// war_institute$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:61288
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// war_institute$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:61289
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// war_institute$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:61290
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// war_institute$tatexit4
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:40524
VA_CHT_1_COMPGEN(0x008322c0, 0x2d, SCALAR_DELETING_DTOR, t_war_institute)

// name:A; map symbol; map:40525
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_war_institute)

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40526
VA_CHT_1(0x008322f0, 0x57)
// public: void t_war_institute::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:40527
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_dialog_war_institute>::~t_counted_ptr<t_dialog_war_institute>()
{
    // Body unavailable.
}

// name:A; map symbol; map:40529
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::bitset<36> operator|(std::bitset<36> const& arg_0, std::bitset<36> const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:40532
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_registration<t_war_institute>::t_object_registration<t_war_institute>(
    t_adv_object_type arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:40533
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_dialog_war_institute>::t_counted_ptr<t_dialog_war_institute>()
{
    // Body unavailable.
}

// name:A; map symbol; map:40534
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_dialog_war_institute>& t_counted_ptr<t_dialog_war_institute>::operator=(
    t_dialog_war_institute* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:40535
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_dialog_war_institute* t_counted_ptr<t_dialog_war_institute>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:40536
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_factory<t_war_institute>::t_object_factory<t_war_institute>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:40537
VA_CHT_1(0x00833e80, 0x62)
t_stationary_adventure_object* t_object_factory<t_war_institute>::create(
    std::string const& arg_0,
    t_qualified_adv_object_type const& arg_1
) const
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40538
VA_CHT_1_COMPGEN(0x00833fd0, 0x8, VECTOR_DELETING_DTOR, t_war_institute)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40539
VA_CHT_1_COMPGEN(0x00833fe0, 0xb, VECTOR_DELETING_DTOR, t_war_institute)

// === .rdata (7 symbols) ===

// name:A; map symbol; map:46016
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_war_institute::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:46017
DATA_CHT_1_COMPGEN(0x008f0964, "const t_war_institute::`vftable'")

// confidence:B; rtti-order; map:46018
DATA_CHT_1_COMPGEN(0x008f0a24, "const t_war_institute::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:46019
DATA_CHT_1_COMPGEN(0x008f0a2c, "const t_war_institute::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:46020
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_war_institute::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:46021
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_war_institute::`vbtable'{for `t_abstract_stationary_adv_object'}")

// confidence:A; rtti-name; map:46022
DATA_CHT_1_COMPGEN(0x008f095c, "const t_object_factory<t_war_institute>::`vftable'")

// === .rdata$r (10 symbols) ===

// name:A; map symbol; map:56957
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_war_institute::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_war_institute@@;vft=4f0964;col=51e418;td=5aa470;chd=51e408;offset=104;cdOffset=0;validated-hierarchy; map:56958
DATA_CHT_1_COMPGEN(0x0091e418, "const t_war_institute::`RTTI Complete Object Locator'")

// name:A; map symbol; map:56959
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_war_institute::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_war_institute@@;vft=4f0964;col=51e418;td=5aa470;chd=51e408;offset=104;cdOffset=0;validated-hierarchy; map:56960
DATA_CHT_1_COMPGEN(0x0091e3dc, "t_war_institute::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_war_institute@@;vft=4f0964;col=51e418;td=5aa470;chd=51e408;offset=104;cdOffset=0;validated-hierarchy; map:56961
DATA_CHT_1_COMPGEN(0x0091e408, "t_war_institute::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:56962
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_war_institute::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_object_factory@Vt_war_institute@@@@;bcd=51e358;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56963
DATA_CHT_1_COMPGEN(0x0091e358, "t_object_factory<t_war_institute>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_object_factory@Vt_war_institute@@@@;vft=4f095c;col=51e38c;td=5bf98c;chd=51e37c;offset=0;cdOffset=0;validated-hierarchy; map:56964
DATA_CHT_1_COMPGEN(0x0091e370, "t_object_factory<t_war_institute>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_object_factory@Vt_war_institute@@@@;vft=4f095c;col=51e38c;td=5bf98c;chd=51e37c;offset=0;cdOffset=0;validated-hierarchy; map:56965
DATA_CHT_1_COMPGEN(0x0091e37c, "t_object_factory<t_war_institute>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_object_factory@Vt_war_institute@@@@;vft=4f095c;col=51e38c;td=5bf98c;chd=51e37c;offset=0;cdOffset=0;validated-hierarchy; map:56966
DATA_CHT_1_COMPGEN(0x0091e38c, "const t_object_factory<t_war_institute>::`RTTI Complete Object Locator'")

// === .data (1 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AV?$t_object_factory@Vt_war_institute@@@@;td=5bf98c;validated-header; map:59710
DATA_CHT_1_COMPGEN(0x009bf98c, "t_object_factory<t_war_institute> `RTTI Type Descriptor'")

// === .bss (1 symbols) ===

namespace {

// confidence:B; dyninit-global; owner-conf-B; map:60438
DATA_CHT_1(0x00a03488)
t_object_registration<t_war_institute> k_registration; // Initial value unavailable.

} // anonymous namespace
