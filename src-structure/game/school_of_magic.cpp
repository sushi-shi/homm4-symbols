// school_of_magic.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\school_of_magic.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 55/91 (A:43 B:6 C:6); unaccounted 36; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (49 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:63228; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0078c8b0, 0x15, STATIC_INIT_DISPATCH, "school_of_magic#1")

// name:C; dyninit; see ledger; map:63229
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "school_of_magic#1")

// confidence:A; dyninit-init; owner-conf-B; map:63230; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0078c8d0, 0x1e, STATIC_INIT_DISPATCH, k_registration)

// name:B; dyninit; see ledger; map:63231
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, k_registration)

// confidence:A; dyninit-init; owner-conf-B; map:63232; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0078c8f0, 0x1e, STATIC_INIT_DISPATCH, k_school_of_war_registration)

// name:B; dyninit; see ledger; map:63233
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, k_school_of_war_registration)

// confidence:A; align-order; retn,stable,vptr; map:33603
VA_CHT_1(0x0078c910, 0x16c)
t_school_of_magic::t_school_of_magic(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:33604
VA_CHT_1(0x0078cb20, 0xb07)
void t_school_of_magic::activate_trigger(
    t_army* arg_0,
    t_adv_map_point const& arg_1,
    t_direction arg_2,
    t_adventure_frame* arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:33605
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_skill_set const& t_school_of_magic::get_default_available_skill_set()
{
    // Body unavailable.
}

// name:A; map symbol; map:33606
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_school_of_magic::get_version() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:33607
VA_CHT_1(0x0078d640, 0x119)
bool t_school_of_magic::read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_qualified_adv_object_type const& arg_1,
    int arg_2
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:33608
VA_CHT_1(0x0078d760, 0xa7)
bool t_school_of_magic::read_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_progress_handler* arg_1
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:33609
VA_CHT_1(0x0078d810, 0x1db)
void t_school_of_magic::place(t_adventure_map& arg_0, t_adv_map_point const& arg_1)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vslot; map:33610
VA_CHT_1(0x0078d9f0, 0xc8)
bool t_school_of_magic::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:33611
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_school_of_magic::select_heroes_dialog(
    std::vector<t_hero*, std::allocator<t_hero*>> const& arg_0,
    t_window* arg_1,
    t_army* arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:33612
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_school_of_magic::visit(t_hero* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:33613
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
float t_school_of_magic::sum_available_skill_values(t_creature_array const& arg_0) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:33614
VA_CHT_1(0x0078dac0, 0x10b)
float t_school_of_magic::ai_value(t_adventure_ai const& arg_0, t_creature_array const& arg_1, int arg_2) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:33615
VA_CHT_1(0x0078dbd0, 0x23c)
void t_school_of_magic::right_click(t_mouse_event const& arg_0, t_adventure_frame* arg_1)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:33616
VA_CHT_1(0x0078de10, 0xc3)
t_school_of_war::t_school_of_war(std::string const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:33617
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_skill_set const& t_school_of_war::get_default_available_skill_set()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:33618
VA_CHT_1(0x0078df90, 0x10b)
float t_school_of_war::ai_value(t_adventure_ai const& arg_0, t_creature_array const& arg_1, int arg_2) const
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:63234; name:B (dyninit; see ledger)
VA_CHT_1(0x0078e180, 0x20)
// school_of_magic$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:A; dyninit-tinit; owner-conf-B; map:63236; name:B (dyninit; see ledger)
VA_CHT_1(0x0078e1a0, 0x5c)
// school_of_magic$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:63237
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// school_of_magic$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:63238
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// school_of_magic$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:63239
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// school_of_magic$tatexit4
// Function body not reconstructed; signature retained as a comment.

// confidence:A; align-band; retn,stable,vslot; map:33619
VA_CHT_1_COMPGEN(0x0078ca80, 0x30, VECTOR_DELETING_DTOR, t_school_of_magic)

// name:A; map symbol; map:33620
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_school_of_magic)

// confidence:C; align-band; retn,stable; map:33621
VA_CHT_1(0x0078cab0, 0x6a)
// public: void t_school_of_magic::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:33622
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_school_of_magic::~t_school_of_magic()
{
    // Body unavailable.
}

// name:A; map symbol; map:33623
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_dialog_school_of_magic>::~t_counted_ptr<t_dialog_school_of_magic>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:33624
VA_CHT_1_COMPGEN(0x0078dee0, 0x30, SCALAR_DELETING_DTOR, t_school_of_war)

// name:A; map symbol; map:33625
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_school_of_war)

// confidence:C; align-band; retn; map:33626
VA_CHT_1(0x0078df10, 0x6a)
// public: void t_school_of_war::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:33627
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_school_of_war::~t_school_of_war()
{
    // Body unavailable.
}

// name:A; map symbol; map:33628
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_registration<t_school_of_magic>::t_object_registration<t_school_of_magic>(
    t_adv_object_type arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:33629
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_registration<t_school_of_war>::t_object_registration<t_school_of_war>(
    t_adv_object_type arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:33630
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_dialog_school_of_magic>::t_counted_ptr<t_dialog_school_of_magic>()
{
    // Body unavailable.
}

// name:A; map symbol; map:33631
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_dialog_school_of_magic>& t_counted_ptr<t_dialog_school_of_magic>::operator=(
    t_dialog_school_of_magic* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:33632
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_dialog_school_of_magic* t_counted_ptr<t_dialog_school_of_magic>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:33633
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_factory<t_school_of_magic>::t_object_factory<t_school_of_magic>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:33634
VA_CHT_1(0x0078e0a0, 0x65)
t_stationary_adventure_object* t_object_factory<t_school_of_magic>::create(
    std::string const& arg_0,
    t_qualified_adv_object_type const& arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:33635
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_factory<t_school_of_war>::t_object_factory<t_school_of_war>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:33636
VA_CHT_1(0x0078e110, 0x65)
t_stationary_adventure_object* t_object_factory<t_school_of_war>::create(
    std::string const& arg_0,
    t_qualified_adv_object_type const& arg_1
) const
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:33637
VA_CHT_1_COMPGEN(0x0078e200, 0x8, VECTOR_DELETING_DTOR, t_school_of_magic)

// confidence:C; align-order; stable; map:33638
VA_CHT_1_COMPGEN(0x0078e210, 0xb, VECTOR_DELETING_DTOR, t_school_of_magic)

// confidence:C; align-order; stable; map:33639
VA_CHT_1_COMPGEN(0x0078e220, 0x8, VECTOR_DELETING_DTOR, t_school_of_war)

// confidence:C; align-order; stable; map:33640
VA_CHT_1_COMPGEN(0x0078e230, 0xb, VECTOR_DELETING_DTOR, t_school_of_war)

// === .rdata (14 symbols) ===

// name:A; map symbol; map:45260
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_school_of_magic::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:45261
DATA_CHT_1_COMPGEN(0x008e9c6c, "const t_school_of_magic::`vftable'")

// confidence:B; rtti-order; map:45262
DATA_CHT_1_COMPGEN(0x008e9d2c, "const t_school_of_magic::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:45263
DATA_CHT_1_COMPGEN(0x008e9d34, "const t_school_of_magic::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:45264
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_school_of_magic::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:45265
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_school_of_magic::`vbtable'{for `t_abstract_stationary_adv_object'}")

// name:A; map symbol; map:45266
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_school_of_war::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:45267
DATA_CHT_1_COMPGEN(0x008e9e14, "const t_school_of_war::`vftable'")

// confidence:B; rtti-order; map:45268
DATA_CHT_1_COMPGEN(0x008e9ed4, "const t_school_of_war::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:45269
DATA_CHT_1_COMPGEN(0x008e9edc, "const t_school_of_war::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:45270
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_school_of_war::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:45271
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_school_of_war::`vbtable'{for `t_abstract_stationary_adv_object'}")

// confidence:A; rtti-name; map:45272
DATA_CHT_1_COMPGEN(0x008e9c5c, "const t_object_factory<t_school_of_magic>::`vftable'")

// confidence:A; rtti-name; map:45273
DATA_CHT_1_COMPGEN(0x008e9c64, "const t_object_factory<t_school_of_war>::`vftable'")

// === .rdata$r (22 symbols) ===

// name:A; map symbol; map:54456
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_school_of_magic::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_school_of_magic@@;vft=4e9c6c;col=514c20;td=5b3068;chd=514c10;offset=128;cdOffset=0;validated-hierarchy; map:54457
DATA_CHT_1_COMPGEN(0x00914c20, "const t_school_of_magic::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54458
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_school_of_magic::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_school_of_magic@@;bcd=514bcc;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54459
DATA_CHT_1_COMPGEN(0x00914bcc, "t_school_of_magic::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_school_of_magic@@;vft=4e9c6c;col=514c20;td=5b3068;chd=514c10;offset=128;cdOffset=0;validated-hierarchy; map:54460
DATA_CHT_1_COMPGEN(0x00914be4, "t_school_of_magic::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_school_of_magic@@;vft=4e9c6c;col=514c20;td=5b3068;chd=514c10;offset=128;cdOffset=0;validated-hierarchy; map:54461
DATA_CHT_1_COMPGEN(0x00914c10, "t_school_of_magic::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54462
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_school_of_magic::`RTTI Complete Object Locator'{for `t_counted_object'}")

// name:A; map symbol; map:54463
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_school_of_war::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_school_of_war@@;vft=4e9e14;col=514cc8;td=5b3088;chd=514cb8;offset=128;cdOffset=0;validated-hierarchy; map:54464
DATA_CHT_1_COMPGEN(0x00914cc8, "const t_school_of_war::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54465
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_school_of_war::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_school_of_war@@;bcd=514c70;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54466
DATA_CHT_1_COMPGEN(0x00914c70, "t_school_of_war::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_school_of_war@@;vft=4e9e14;col=514cc8;td=5b3088;chd=514cb8;offset=128;cdOffset=0;validated-hierarchy; map:54467
DATA_CHT_1_COMPGEN(0x00914c88, "t_school_of_war::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_school_of_war@@;vft=4e9e14;col=514cc8;td=5b3088;chd=514cb8;offset=128;cdOffset=0;validated-hierarchy; map:54468
DATA_CHT_1_COMPGEN(0x00914cb8, "t_school_of_war::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54469
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_school_of_war::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_object_factory@Vt_school_of_magic@@@@;bcd=514b00;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54470
DATA_CHT_1_COMPGEN(0x00914b00, "t_object_factory<t_school_of_magic>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_object_factory@Vt_school_of_magic@@@@;vft=4e9c5c;col=514b34;td=5b2ffc;chd=514b24;offset=0;cdOffset=0;validated-hierarchy; map:54471
DATA_CHT_1_COMPGEN(0x00914b18, "t_object_factory<t_school_of_magic>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_object_factory@Vt_school_of_magic@@@@;vft=4e9c5c;col=514b34;td=5b2ffc;chd=514b24;offset=0;cdOffset=0;validated-hierarchy; map:54472
DATA_CHT_1_COMPGEN(0x00914b24, "t_object_factory<t_school_of_magic>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_object_factory@Vt_school_of_magic@@@@;vft=4e9c5c;col=514b34;td=5b2ffc;chd=514b24;offset=0;cdOffset=0;validated-hierarchy; map:54473
DATA_CHT_1_COMPGEN(0x00914b34, "const t_object_factory<t_school_of_magic>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_object_factory@Vt_school_of_war@@@@;bcd=514b48;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54474
DATA_CHT_1_COMPGEN(0x00914b48, "t_object_factory<t_school_of_war>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_object_factory@Vt_school_of_war@@@@;vft=4e9c64;col=514b7c;td=5b3034;chd=514b6c;offset=0;cdOffset=0;validated-hierarchy; map:54475
DATA_CHT_1_COMPGEN(0x00914b60, "t_object_factory<t_school_of_war>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_object_factory@Vt_school_of_war@@@@;vft=4e9c64;col=514b7c;td=5b3034;chd=514b6c;offset=0;cdOffset=0;validated-hierarchy; map:54476
DATA_CHT_1_COMPGEN(0x00914b6c, "t_object_factory<t_school_of_war>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_object_factory@Vt_school_of_war@@@@;vft=4e9c64;col=514b7c;td=5b3034;chd=514b6c;offset=0;cdOffset=0;validated-hierarchy; map:54477
DATA_CHT_1_COMPGEN(0x00914b7c, "const t_object_factory<t_school_of_war>::`RTTI Complete Object Locator'")

// === .data (4 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_school_of_magic@@;td=5b3068;validated-header; map:59077
DATA_CHT_1_COMPGEN(0x009b3068, "t_school_of_magic `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_school_of_war@@;td=5b3088;validated-header; map:59078
DATA_CHT_1_COMPGEN(0x009b3088, "t_school_of_war `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_object_factory@Vt_school_of_magic@@@@;td=5b2ffc;validated-header; map:59079
DATA_CHT_1_COMPGEN(0x009b2ffc, "t_object_factory<t_school_of_magic> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_object_factory@Vt_school_of_war@@@@;td=5b3034;validated-header; map:59080
DATA_CHT_1_COMPGEN(0x009b3034, "t_object_factory<t_school_of_war> `RTTI Type Descriptor'")

// === .bss (2 symbols) ===

namespace {

// confidence:B; dyninit-global; owner-conf-B; map:60347
DATA_CHT_1(0x009f4b44)
t_object_registration<t_school_of_war> k_school_of_war_registration; // Initial value unavailable.

// confidence:B; dyninit-global; owner-conf-B; map:60348
DATA_CHT_1(0x009f4b48)
t_object_registration<t_school_of_magic> k_registration; // Initial value unavailable.

} // anonymous namespace
