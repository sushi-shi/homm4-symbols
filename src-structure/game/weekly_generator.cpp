// weekly_generator.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\weekly_generator.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 55/98 (A:44 B:7 C:4); unaccounted 43; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (56 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:61264; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00834100, 0x15, STATIC_INIT_DISPATCH, "weekly_generator#1")

// name:C; dyninit; see ledger; map:61265
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "weekly_generator#1")

// confidence:A; dyninit-init; owner-conf-B; map:61266; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00834120, 0x1c, STATIC_INIT_DISPATCH, k_registration)

// name:B; dyninit; see ledger; map:61267
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, k_registration)

// confidence:A; dyninit-init; owner-conf-B; map:61268; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00834140, 0x1c, STATIC_INIT_DISPATCH, k_random_registration)

// name:B; dyninit; see ledger; map:61269
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, k_random_registration)

// confidence:A; align-order; retn,stable,vptr; map:40547
VA_CHT_1(0x00834160, 0x1e4)
t_weekly_generator::t_weekly_generator(t_material arg_0, t_player_color arg_1)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:40548
VA_CHT_1(0x00834420, 0x192)
t_weekly_generator::t_weekly_generator(std::string const& arg_0, t_qualified_adv_object_type const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:40549
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_weekly_generator::reset(t_material arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:40550
VA_CHT_1(0x008345c0, 0x78e)
void t_weekly_generator::activate_trigger(
    t_army* arg_0,
    t_adv_map_point const& arg_1,
    t_direction arg_2,
    t_adventure_frame* arg_3
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:40551
VA_CHT_1(0x00834d50, 0x21e)
void t_weekly_generator::right_click(t_mouse_event const& arg_0, t_adventure_frame* arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:40552
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_weekly_generator::get_production(t_material arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:40553
VA_CHT_1(0x00834f70, 0x32)
void t_weekly_generator::place(t_adventure_map& arg_0, t_adv_map_point const& arg_1)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:40554
VA_CHT_1(0x00834fb0, 0xd4)
void t_weekly_generator::process_new_day()
{
    // Body unavailable.
}

// name:A; map symbol; map:40555
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_weekly_generator::set_owner(int arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; stable,vslot; map:40556
VA_CHT_1(0x00835090, 0x5)
int t_weekly_generator::get_version() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:40557
VA_CHT_1(0x008350a0, 0x65)
bool t_weekly_generator::read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_qualified_adv_object_type const& arg_1,
    int arg_2
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:40558
VA_CHT_1(0x00835110, 0x4d)
bool t_weekly_generator::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:40559
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_weekly_generator::read_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_progress_handler* arg_1
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:40560
VA_CHT_1(0x008351d0, 0x68)
float t_weekly_generator::ai_value(
    t_adventure_ai const& arg_0,
    t_creature_array const& arg_1,
    int arg_2
) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vptr; map:40561
VA_CHT_1(0x00835240, 0x166)
t_random_weekly_generator::t_random_weekly_generator(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vslot; map:40562
VA_CHT_1(0x00835480, 0xf9)
void t_random_weekly_generator::place(t_adventure_map& arg_0, t_adv_map_point const& arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:40563
VA_CHT_1(0x008355f0, 0x62)
bool t_random_weekly_generator::read_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_progress_handler* arg_1
)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:61270; name:B (dyninit; see ledger)
VA_CHT_1(0x00835660, 0x20)
// weekly_generator$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:A; dyninit-tinit; owner-conf-B; map:61272; name:B (dyninit; see ledger)
VA_CHT_1(0x00835680, 0x5c)
// weekly_generator$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:61273
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// weekly_generator$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:61274
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// weekly_generator$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:61275
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// weekly_generator$tatexit4
// Function body not reconstructed; signature retained as a comment.

// confidence:A; align-band; retn,stable,vslot; map:40564
VA_CHT_1_COMPGEN(0x00834350, 0x2d, SCALAR_DELETING_DTOR, t_weekly_generator)

// name:A; map symbol; map:40565
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_weekly_generator)

// name:A; map symbol; map:40566
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// public: void t_weekly_generator::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:40567
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_weekly_generator::~t_weekly_generator()
{
    // Body unavailable.
}

// name:A; map symbol; map:40568
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_material t_weekly_generator::get_material() const
{
    // Body unavailable.
}

// name:A; map symbol; map:40569
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_weekly_generator::get_production() const
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:40570
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int to_base_class_save_format_version(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:40571
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int to_base_class_map_format_version(int arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:A; align-band; retn,stable,vslot; map:40572
VA_CHT_1_COMPGEN(0x008353b0, 0x2d, VECTOR_DELETING_DTOR, t_random_weekly_generator)

// name:A; map symbol; map:40573
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_random_weekly_generator)

// name:A; map symbol; map:40574
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// public: void t_random_weekly_generator::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:40575
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_random_weekly_generator::~t_random_weekly_generator()
{
    // Body unavailable.
}

// name:A; map symbol; map:40576
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_weekly_generator>::~t_counted_ptr<t_weekly_generator>()
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:40577
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int random_to_base_class_map_format_version(int arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:40578
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_register_with_type<t_weekly_generator>::t_register_with_type<t_weekly_generator>(t_adv_object_type arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:40579
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_registration<t_random_weekly_generator>::t_object_registration<t_random_weekly_generator>(
    t_adv_object_type arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:40580
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_weekly_generator>::t_counted_ptr<t_weekly_generator>()
{
    // Body unavailable.
}

// name:A; map symbol; map:40581
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_weekly_generator>& t_counted_ptr<t_weekly_generator>::operator=(t_weekly_generator* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:40582
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_weekly_generator* t_counted_ptr<t_weekly_generator>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:40583
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_weekly_generator& t_counted_ptr<t_weekly_generator>::operator*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:40584
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_factory_with_type<t_weekly_generator>::t_object_factory_with_type<t_weekly_generator>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,vslot; map:40585
VA_CHT_1(0x00835580, 0x6a)
t_stationary_adventure_object* t_object_factory_with_type<t_weekly_generator>::create(
    std::string const& arg_0,
    t_qualified_adv_object_type const& arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:40586
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_factory<t_random_weekly_generator>::t_object_factory<t_random_weekly_generator>()
{
    // Body unavailable.
}

// name:A; map symbol; map:40587
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_stationary_adventure_object* t_object_factory<t_random_weekly_generator>::create(
    std::string const& arg_0,
    t_qualified_adv_object_type const& arg_1
) const
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:40588
VA_CHT_1_COMPGEN(0x008356e0, 0x8, VECTOR_DELETING_DTOR, t_weekly_generator)

// confidence:C; align-order; stable; map:40589
VA_CHT_1_COMPGEN(0x008356f0, 0xb, VECTOR_DELETING_DTOR, t_weekly_generator)

// confidence:C; align-order; stable; map:40590
VA_CHT_1_COMPGEN(0x00835700, 0x8, VECTOR_DELETING_DTOR, t_random_weekly_generator)

// confidence:C; align-order; stable; map:40591
VA_CHT_1_COMPGEN(0x00835710, 0xb, VECTOR_DELETING_DTOR, t_random_weekly_generator)

// === .rdata (14 symbols) ===

// name:A; map symbol; map:46024
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_weekly_generator::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:46025
DATA_CHT_1_COMPGEN(0x008f0b54, "const t_weekly_generator::`vftable'")

// confidence:B; rtti-order; map:46026
DATA_CHT_1_COMPGEN(0x008f0c14, "const t_weekly_generator::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:46027
DATA_CHT_1_COMPGEN(0x008f0c1c, "const t_weekly_generator::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:46028
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_weekly_generator::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:46029
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_weekly_generator::`vbtable'{for `t_abstract_stationary_adv_object'}")

// name:A; map symbol; map:46030
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_random_weekly_generator::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:46031
DATA_CHT_1_COMPGEN(0x008f0cf4, "const t_random_weekly_generator::`vftable'")

// confidence:B; rtti-order; map:46032
DATA_CHT_1_COMPGEN(0x008f0db4, "const t_random_weekly_generator::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:46033
DATA_CHT_1_COMPGEN(0x008f0dbc, "const t_random_weekly_generator::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:46034
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_random_weekly_generator::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:46035
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_random_weekly_generator::`vbtable'{for `t_abstract_stationary_adv_object'}")

// confidence:A; rtti-name; map:46036
DATA_CHT_1_COMPGEN(0x008f0b40, "const t_object_factory_with_type<t_weekly_generator>::`vftable'")

// confidence:A; rtti-name; map:46037
DATA_CHT_1_COMPGEN(0x008f0b48, "const t_object_factory<t_random_weekly_generator>::`vftable'")

// === .rdata$r (22 symbols) ===

// name:A; map symbol; map:56971
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_weekly_generator::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_weekly_generator@@;vft=4f0b54;col=51e59c;td=5bfb2c;chd=51e58c;offset=124;cdOffset=0;validated-hierarchy; map:56972
DATA_CHT_1_COMPGEN(0x0091e59c, "const t_weekly_generator::`RTTI Complete Object Locator'")

// name:A; map symbol; map:56973
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_weekly_generator::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_weekly_generator@@;bcd=51e544;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56974
DATA_CHT_1_COMPGEN(0x0091e544, "t_weekly_generator::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_weekly_generator@@;vft=4f0b54;col=51e59c;td=5bfb2c;chd=51e58c;offset=124;cdOffset=0;validated-hierarchy; map:56975
DATA_CHT_1_COMPGEN(0x0091e55c, "t_weekly_generator::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_weekly_generator@@;vft=4f0b54;col=51e59c;td=5bfb2c;chd=51e58c;offset=124;cdOffset=0;validated-hierarchy; map:56976
DATA_CHT_1_COMPGEN(0x0091e58c, "t_weekly_generator::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:56977
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_weekly_generator::`RTTI Complete Object Locator'{for `t_counted_object'}")

// name:A; map symbol; map:56978
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_random_weekly_generator::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_random_weekly_generator@@;vft=4f0cf4;col=51e644;td=5bfb50;chd=51e634;offset=112;cdOffset=0;validated-hierarchy; map:56979
DATA_CHT_1_COMPGEN(0x0091e644, "const t_random_weekly_generator::`RTTI Complete Object Locator'")

// name:A; map symbol; map:56980
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_random_weekly_generator::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_random_weekly_generator@@;bcd=51e5ec;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56981
DATA_CHT_1_COMPGEN(0x0091e5ec, "t_random_weekly_generator::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_random_weekly_generator@@;vft=4f0cf4;col=51e644;td=5bfb50;chd=51e634;offset=112;cdOffset=0;validated-hierarchy; map:56982
DATA_CHT_1_COMPGEN(0x0091e604, "t_random_weekly_generator::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_random_weekly_generator@@;vft=4f0cf4;col=51e644;td=5bfb50;chd=51e634;offset=112;cdOffset=0;validated-hierarchy; map:56983
DATA_CHT_1_COMPGEN(0x0091e634, "t_random_weekly_generator::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:56984
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_random_weekly_generator::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_object_factory_with_type@Vt_weekly_generator@@@@;bcd=51e478;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56985
DATA_CHT_1_COMPGEN(0x0091e478, "t_object_factory_with_type<t_weekly_generator>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_object_factory_with_type@Vt_weekly_generator@@@@;vft=4f0b40;col=51e4ac;td=5bfaa8;chd=51e49c;offset=0;cdOffset=0;validated-hierarchy; map:56986
DATA_CHT_1_COMPGEN(0x0091e490, "t_object_factory_with_type<t_weekly_generator>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_object_factory_with_type@Vt_weekly_generator@@@@;vft=4f0b40;col=51e4ac;td=5bfaa8;chd=51e49c;offset=0;cdOffset=0;validated-hierarchy; map:56987
DATA_CHT_1_COMPGEN(0x0091e49c, "t_object_factory_with_type<t_weekly_generator>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_object_factory_with_type@Vt_weekly_generator@@@@;vft=4f0b40;col=51e4ac;td=5bfaa8;chd=51e49c;offset=0;cdOffset=0;validated-hierarchy; map:56988
DATA_CHT_1_COMPGEN(0x0091e4ac, "const t_object_factory_with_type<t_weekly_generator>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_object_factory@Vt_random_weekly_generator@@@@;bcd=51e4c0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56989
DATA_CHT_1_COMPGEN(0x0091e4c0, "t_object_factory<t_random_weekly_generator>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_object_factory@Vt_random_weekly_generator@@@@;vft=4f0b48;col=51e4f4;td=5bfaec;chd=51e4e4;offset=0;cdOffset=0;validated-hierarchy; map:56990
DATA_CHT_1_COMPGEN(0x0091e4d8, "t_object_factory<t_random_weekly_generator>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_object_factory@Vt_random_weekly_generator@@@@;vft=4f0b48;col=51e4f4;td=5bfaec;chd=51e4e4;offset=0;cdOffset=0;validated-hierarchy; map:56991
DATA_CHT_1_COMPGEN(0x0091e4e4, "t_object_factory<t_random_weekly_generator>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_object_factory@Vt_random_weekly_generator@@@@;vft=4f0b48;col=51e4f4;td=5bfaec;chd=51e4e4;offset=0;cdOffset=0;validated-hierarchy; map:56992
DATA_CHT_1_COMPGEN(0x0091e4f4, "const t_object_factory<t_random_weekly_generator>::`RTTI Complete Object Locator'")

// === .data (4 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_weekly_generator@@;td=5bfb2c;validated-header; map:59712
DATA_CHT_1_COMPGEN(0x009bfb2c, "t_weekly_generator `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_random_weekly_generator@@;td=5bfb50;validated-header; map:59713
DATA_CHT_1_COMPGEN(0x009bfb50, "t_random_weekly_generator `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_object_factory_with_type@Vt_weekly_generator@@@@;td=5bfaa8;validated-header; map:59714
DATA_CHT_1_COMPGEN(0x009bfaa8, "t_object_factory_with_type<t_weekly_generator> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_object_factory@Vt_random_weekly_generator@@@@;td=5bfaec;validated-header; map:59715
DATA_CHT_1_COMPGEN(0x009bfaec, "t_object_factory<t_random_weekly_generator> `RTTI Type Descriptor'")

// === .bss (2 symbols) ===

namespace {

// confidence:B; dyninit-global; owner-conf-B; map:60439
DATA_CHT_1(0x00a034a8)
t_register_with_type<t_weekly_generator> k_registration; // Initial value unavailable.

// confidence:B; dyninit-global; owner-conf-B; map:60440
DATA_CHT_1(0x00a034ac)
t_object_registration<t_random_weekly_generator> k_random_registration; // Initial value unavailable.

} // anonymous namespace
