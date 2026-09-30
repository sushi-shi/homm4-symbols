// adv_tavern.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 29/59 (A:12 B:2 C:0); unaccounted 30; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (39 symbols) ===

// name:C; dyninit; see ledger; map:70768
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_INIT_DISPATCH, "adv_tavern#1")

// name:C; dyninit; see ledger; map:70769
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adv_tavern#1")

// name:C; dyninit; see ledger; map:70770
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "adv_tavern#1")

// name:C; dyninit; see ledger; map:70771
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "adv_tavern#1")

// name:C; dyninit; see ledger; map:70772
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_INIT_DISPATCH, "adv_tavern#2")

// name:C; dyninit; see ledger; map:70773
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adv_tavern#2")

// name:C; dyninit; see ledger; map:70774
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "adv_tavern#2")

// name:C; dyninit; see ledger; map:70775
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "adv_tavern#2")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:70776; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x004689c0, 0x15, STATIC_INIT_DISPATCH, "adv_tavern#3")

// name:C; dyninit; see ledger; map:70777
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adv_tavern#3")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:70778; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x004689e0, 0x1c, STATIC_INIT_DISPATCH, "adv_tavern#4")

// name:C; dyninit; see ledger; map:70779
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adv_tavern#4")

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:6025
VA_CHT_1(0x00468a00, 0x11c)
t_adv_tavern::t_adv_tavern(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:6026
VA_CHT_1(0x00468bb0, 0x67d)
void t_adv_tavern::activate_trigger(
    t_army* arg_0,
    t_adv_map_point const& arg_1,
    t_direction arg_2,
    t_adventure_frame* arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:6027
VA_CHT_1(0x004692a0, 0x1a)
void t_adv_tavern::process_new_day()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:6028
VA_CHT_1(0x004692c0, 0x71)
bool t_adv_tavern::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:6029
VA_CHT_1(0x00469340, 0x7f)
bool t_adv_tavern::read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_qualified_adv_object_type const& arg_1,
    int arg_2
)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:70780; name:B (dyninit; see ledger)
VA_CHT_1(0x00469430, 0x20)
// adv_tavern$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:70782; name:B (dyninit; see ledger)
VA_CHT_1(0x00469450, 0x5c)
// adv_tavern$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:70783
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adv_tavern$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:70784
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adv_tavern$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:70785
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adv_tavern$tatexit4
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:6030
VA_CHT_1_COMPGEN(0x00468b20, 0x2d, SCALAR_DELETING_DTOR, t_adv_tavern)

// name:A; map symbol; map:6031
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_adv_tavern)

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:6032
VA_CHT_1(0x00469230, 0x6b)
// public: void t_adv_tavern::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:6033
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_tavern::~t_adv_tavern()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:6034
VA_CHT_1(0x00468b50, 0x57)
t_default_hero::~t_default_hero()
{
    // Body unavailable.
}

// name:A; map symbol; map:6035
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_default_hero const& t_hire_hero_dialog::get_data() const
{
    // Body unavailable.
}

// name:A; map symbol; map:6036
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_player::spend(t_material arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:6037
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_hire_hero_dialog>::~t_counted_ptr<t_hire_hero_dialog>()
{
    // Body unavailable.
}

// name:A; map symbol; map:6038
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_default_hero::t_default_hero(t_default_hero const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:6039
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_registration<t_adv_tavern>::t_object_registration<t_adv_tavern>(t_adv_object_type arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:6040
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_hire_hero_dialog>::t_counted_ptr<t_hire_hero_dialog>()
{
    // Body unavailable.
}

// name:A; map symbol; map:6041
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_hire_hero_dialog>& t_counted_ptr<t_hire_hero_dialog>::operator=(t_hire_hero_dialog* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:6042
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_hire_hero_dialog* t_counted_ptr<t_hire_hero_dialog>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:6043
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_factory<t_adv_tavern>::t_object_factory<t_adv_tavern>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:6044
VA_CHT_1(0x004693c0, 0x62)
t_stationary_adventure_object* t_object_factory<t_adv_tavern>::create(
    std::string const& arg_0,
    t_qualified_adv_object_type const& arg_1
) const
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:6045
VA_CHT_1_COMPGEN(0x004694b0, 0x8, VECTOR_DELETING_DTOR, t_adv_tavern)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:6046
VA_CHT_1_COMPGEN(0x004694c0, 0xb, VECTOR_DELETING_DTOR, t_adv_tavern)

// === .rdata (7 symbols) ===

// name:A; map symbol; map:43034
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_tavern::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:43035
DATA_CHT_1_COMPGEN(0x008d2224, "const t_adv_tavern::`vftable'")

// confidence:B; rtti-order; map:43036
DATA_CHT_1_COMPGEN(0x008d22e4, "const t_adv_tavern::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:43037
DATA_CHT_1_COMPGEN(0x008d22ec, "const t_adv_tavern::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:43038
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_tavern::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:43039
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_tavern::`vbtable'{for `t_abstract_stationary_adv_object'}")

// confidence:A; rtti-name; map:43040
DATA_CHT_1_COMPGEN(0x008d221c, "const t_object_factory<t_adv_tavern>::`vftable'")

// === .rdata$r (11 symbols) ===

// name:A; map symbol; map:48370
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_tavern::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_adv_tavern@@;vft=4d2224;col=4f8fe4;td=58ad0c;chd=4f8fd4;offset=92;cdOffset=0;validated-hierarchy; map:48371
DATA_CHT_1_COMPGEN(0x008f8fe4, "const t_adv_tavern::`RTTI Complete Object Locator'")

// name:A; map symbol; map:48372
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_tavern::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adv_tavern@@;bcd=4f8f94;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48373
DATA_CHT_1_COMPGEN(0x008f8f94, "t_adv_tavern::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adv_tavern@@;vft=4d2224;col=4f8fe4;td=58ad0c;chd=4f8fd4;offset=92;cdOffset=0;validated-hierarchy; map:48374
DATA_CHT_1_COMPGEN(0x008f8fac, "t_adv_tavern::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adv_tavern@@;vft=4d2224;col=4f8fe4;td=58ad0c;chd=4f8fd4;offset=92;cdOffset=0;validated-hierarchy; map:48375
DATA_CHT_1_COMPGEN(0x008f8fd4, "t_adv_tavern::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:48376
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_tavern::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_object_factory@Vt_adv_tavern@@@@;bcd=4f8f10;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48377
DATA_CHT_1_COMPGEN(0x008f8f10, "t_object_factory<t_adv_tavern>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_object_factory@Vt_adv_tavern@@@@;vft=4d221c;col=4f8f44;td=58acd8;chd=4f8f34;offset=0;cdOffset=0;validated-hierarchy; map:48378
DATA_CHT_1_COMPGEN(0x008f8f28, "t_object_factory<t_adv_tavern>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_object_factory@Vt_adv_tavern@@@@;vft=4d221c;col=4f8f44;td=58acd8;chd=4f8f34;offset=0;cdOffset=0;validated-hierarchy; map:48379
DATA_CHT_1_COMPGEN(0x008f8f34, "t_object_factory<t_adv_tavern>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_object_factory@Vt_adv_tavern@@@@;vft=4d221c;col=4f8f44;td=58acd8;chd=4f8f34;offset=0;cdOffset=0;validated-hierarchy; map:48380
DATA_CHT_1_COMPGEN(0x008f8f44, "const t_object_factory<t_adv_tavern>::`RTTI Complete Object Locator'")

// === .data (2 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_adv_tavern@@;td=58ad0c;validated-header; map:57563
DATA_CHT_1_COMPGEN(0x0098ad0c, "t_adv_tavern `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_object_factory@Vt_adv_tavern@@@@;td=58acd8;validated-header; map:57564
DATA_CHT_1_COMPGEN(0x0098acd8, "t_object_factory<t_adv_tavern> `RTTI Type Descriptor'")
