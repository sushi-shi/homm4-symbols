// script_increase_experience.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 50/138 (A:46 B:4 C:0); unaccounted 88; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (78 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:63054; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0079ead0, 0x15, STATIC_INIT_DISPATCH, "script_increase_experience#1")

// name:C; dyninit; see ledger; map:63055
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "script_increase_experience#1")

// name:A; map symbol; map:35457
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_script_increase_experience::execute(t_script_context_army const& arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:35458
VA_CHT_1(0x0079eaf0, 0x3c)
void t_script_increase_experience::make_adjustment(t_adventure_map* arg_0, t_hero* arg_1) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:35459
VA_CHT_1(0x0079eb30, 0x24)
void t_script_increase_experience::add_icons(t_basic_dialog* arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:35460
VA_CHT_1(0x0079eb60, 0x56)
void t_script_increase_experience_level::make_adjustment(t_adventure_map* arg_0, t_hero* arg_1) const
{
    // Body unavailable.
}

// name:A; map symbol; map:35461
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_script_increase_experience_level::add_icons(t_basic_dialog* arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:35462
VA_CHT_1(0x0079ebc0, 0x26)
void t_script_increase_experience_level::execute(t_script_context_army const& arg_0) const
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:63056; name:B (dyninit; see ledger)
VA_CHT_1(0x0079ec30, 0x70)
// script_increase_experience$tinit1
// Function body not reconstructed; signature retained as a comment.

// name:C; dyninit; see ledger; map:63058
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "t_script_action_base<28,t_script_increase_experience>::k_factory")

// name:C; dyninit; see ledger; map:63059
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "t_script_action_base<29,t_script_increase_experience_level>::k_factory")

// confidence:A; dyninit-tinit; owner-conf-B; map:63060; name:B (dyninit; see ledger)
VA_CHT_1(0x0079f000, 0x5c)
// script_increase_experience$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:63061
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// script_increase_experience$tatexit4
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:63062
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// script_increase_experience$tatexit5
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:63063
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// script_increase_experience$tatexit6
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:35463
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_script_simple_adjustment_action<t_script_hero_target, unsigned long>::get_adjustment() const
{
    // Body unavailable.
}

// name:A; map symbol; map:35464
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_script_hero_adjustment_action<unsigned long>::execute(t_script_context_army const& arg_0) const
{
    // Body unavailable.
}

// name:A; dyninit; see ledger; map:35465
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "t_script_action_base<28,t_script_increase_experience>::k_factory")

// name:A; dyninit; see ledger; map:35466
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "t_script_action_base<29,t_script_increase_experience_level>::k_factory")

// name:A; dyninit; see ledger; map:35467
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "t_script_action_base<29,t_script_increase_experience_level>::k_factory")

// name:A; dyninit; see ledger; map:35468
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "t_script_action_base<28,t_script_increase_experience>::k_factory")

// confidence:A; align-band; retn,stable,vptr; map:35469
VA_CHT_1(0x0079ece0, 0x14)
t_script_action_factory<28>::~t_script_action_factory<28>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:35470
VA_CHT_1(0x0079ef40, 0x14)
t_script_action_factory<29>::~t_script_action_factory<29>()
{
    // Body unavailable.
}

// name:A; map symbol; map:35471
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_factory<28>::t_script_action_factory<28>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:35472
VA_CHT_1(0x0079ed00, 0x3d)
t_counted_ptr<t_abstract_script_action> t_script_action_factory<28>::create() const
{
    // Body unavailable.
}

// name:A; map symbol; map:35473
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<28>::t_script_action<28>()
{
    // Body unavailable.
}

// name:A; map symbol; map:35474
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_script_simple_adjustment_action<t_script_hero_target, unsigned long>::read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:35475
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_script_simple_adjustment_action<t_script_hero_target, unsigned long>::read_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:35476
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_script_simple_adjustment_action<t_script_hero_target, unsigned long>::write(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:35477
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_script_hero_adjustment_action<unsigned long>::execute(t_script_context_global const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:35478
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_script_hero_adjustment_action<unsigned long>::execute(t_script_context_object const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:35479
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_script_hero_adjustment_action<unsigned long>::execute(t_script_context_town const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:35480
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_script_hero_adjustment_action<unsigned long>::execute(t_script_context_hero const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:35481
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_action> t_script_action_base<28, t_script_increase_experience>::clone() const
{
    // Body unavailable.
}

// name:A; map symbol; map:35482
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_type t_script_action_base<28, t_script_increase_experience>::get_type() const
{
    // Body unavailable.
}

// name:A; map symbol; map:35483
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<28>::t_script_action<28>(t_script_action<28> const& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:35484
VA_CHT_1_COMPGEN(0x0079eee0, 0x57, VECTOR_DELETING_DTOR, "t_script_action<28>")

// confidence:A; align-band; retn,stable,vslot; map:35485
VA_CHT_1_COMPGEN(0x0079ee50, 0x85, SCALAR_DELETING_DTOR, "t_script_action<28>")

// name:A; map symbol; map:35486
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<28, t_script_increase_experience>::t_script_action_base<28, t_script_increase_experience>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:35487
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<28, t_script_increase_experience>::t_script_action_base<28, t_script_increase_experience>(
    t_script_action_base<28, t_script_increase_experience> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:35488
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<28>::~t_script_action<28>()
{
    // Body unavailable.
}

// name:A; map symbol; map:35489
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<28, t_script_increase_experience>::~t_script_action_base<28, t_script_increase_experience>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:35490
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_action_base<28, t_script_increase_experience>")

// name:A; map symbol; map:35491
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_action_base<28, t_script_increase_experience>")

// name:A; map symbol; map:35492
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_increase_experience::t_script_increase_experience()
{
    // Body unavailable.
}

// name:A; map symbol; map:35493
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_increase_experience::~t_script_increase_experience()
{
    // Body unavailable.
}

// name:A; map symbol; map:35494
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_increase_experience::t_script_increase_experience(t_script_increase_experience const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:35495
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_script_increase_experience)

// name:A; map symbol; map:35496
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_script_increase_experience)

// name:A; map symbol; map:35497
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_hero_adjustment_action<unsigned long>::t_script_hero_adjustment_action<unsigned long>()
{
    // Body unavailable.
}

// name:A; map symbol; map:35498
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_hero_adjustment_action<unsigned long>::~t_script_hero_adjustment_action<unsigned long>()
{
    // Body unavailable.
}

// name:A; map symbol; map:35499
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_hero_adjustment_action<unsigned long>::t_script_hero_adjustment_action<unsigned long>(
    t_script_hero_adjustment_action<unsigned long> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:35500
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_hero_adjustment_action<unsigned long>")

// name:A; map symbol; map:35501
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_hero_adjustment_action<unsigned long>")

// name:A; map symbol; map:35502
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_simple_adjustment_action<t_script_hero_target, unsigned long>::~t_script_simple_adjustment_action<t_script_hero_target, unsigned long>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:35503
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_simple_adjustment_action<t_script_hero_target, unsigned long>::t_script_simple_adjustment_action<t_script_hero_target, unsigned long>(
    t_script_simple_adjustment_action<t_script_hero_target, unsigned long> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:35504
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_simple_adjustment_action<t_script_hero_target, unsigned long>")

// name:A; map symbol; map:35505
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_simple_adjustment_action<t_script_hero_target, unsigned long>")

// name:A; map symbol; map:35506
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_simple_adjustment_action<t_script_hero_target, unsigned long>::t_script_simple_adjustment_action<t_script_hero_target, unsigned long>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:35507
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_factory<29>::t_script_action_factory<29>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:35508
VA_CHT_1(0x0079ef60, 0x3d)
t_counted_ptr<t_abstract_script_action> t_script_action_factory<29>::create() const
{
    // Body unavailable.
}

// name:A; map symbol; map:35509
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<29>::t_script_action<29>()
{
    // Body unavailable.
}

// name:A; map symbol; map:35510
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_action> t_script_action_base<29, t_script_increase_experience_level>::clone(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:35511
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_type t_script_action_base<29, t_script_increase_experience_level>::get_type() const
{
    // Body unavailable.
}

// name:A; map symbol; map:35512
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<29>::t_script_action<29>(t_script_action<29> const& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:35513
VA_CHT_1_COMPGEN(0x0079efa0, 0x57, VECTOR_DELETING_DTOR, "t_script_action<29>")

// name:A; map symbol; map:35514
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_action<29>")

// name:A; map symbol; map:35515
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<29, t_script_increase_experience_level>::t_script_action_base<29, t_script_increase_experience_level>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:35516
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<29, t_script_increase_experience_level>::t_script_action_base<29, t_script_increase_experience_level>(
    t_script_action_base<29, t_script_increase_experience_level> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:35517
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<29>::~t_script_action<29>()
{
    // Body unavailable.
}

// name:A; map symbol; map:35518
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<29, t_script_increase_experience_level>::~t_script_action_base<29, t_script_increase_experience_level>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:35519
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_action_base<29, t_script_increase_experience_level>")

// name:A; map symbol; map:35520
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_action_base<29, t_script_increase_experience_level>")

// name:A; map symbol; map:35521
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_increase_experience_level::t_script_increase_experience_level()
{
    // Body unavailable.
}

// name:A; map symbol; map:35522
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_increase_experience_level::~t_script_increase_experience_level()
{
    // Body unavailable.
}

// name:A; map symbol; map:35523
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_increase_experience_level::t_script_increase_experience_level(
    t_script_increase_experience_level const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:35524
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_script_increase_experience_level)

// name:A; map symbol; map:35525
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_script_increase_experience_level)

// === .rdata (10 symbols) ===

// confidence:A; rtti-name; map:45491
DATA_CHT_1_COMPGEN(0x008eb304, "const t_script_action_factory<28>::`vftable'")

// confidence:A; rtti-name; map:45492
DATA_CHT_1_COMPGEN(0x008eb30c, "const t_script_action<28>::`vftable'")

// name:A; map symbol; map:45493
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_action_base<28, t_script_increase_experience>::`vftable'")

// name:A; map symbol; map:45494
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_increase_experience::`vftable'")

// name:A; map symbol; map:45495
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_hero_adjustment_action<unsigned long>::`vftable'")

// name:A; map symbol; map:45496
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_simple_adjustment_action<t_script_hero_target, unsigned long>::`vftable'")

// confidence:A; rtti-name; map:45497
DATA_CHT_1_COMPGEN(0x008eb344, "const t_script_action_factory<29>::`vftable'")

// confidence:A; rtti-name; map:45498
DATA_CHT_1_COMPGEN(0x008eb34c, "const t_script_action<29>::`vftable'")

// name:A; map symbol; map:45499
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_action_base<29, t_script_increase_experience_level>::`vftable'")

// name:A; map symbol; map:45500
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_increase_experience_level::`vftable'")

// === .rdata$r (40 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action_factory@$0BM@@@;bcd=517c20;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:55341
DATA_CHT_1_COMPGEN(0x00917c20, "t_script_action_factory<28>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_action_factory@$0BM@@@;vft=4eb304;col=517c58;td=5b6324;chd=517c48;offset=0;cdOffset=0;validated-hierarchy; map:55342
DATA_CHT_1_COMPGEN(0x00917c38, "t_script_action_factory<28>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_action_factory@$0BM@@@;vft=4eb304;col=517c58;td=5b6324;chd=517c48;offset=0;cdOffset=0;validated-hierarchy; map:55343
DATA_CHT_1_COMPGEN(0x00917c48, "t_script_action_factory<28>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_action_factory@$0BM@@@;vft=4eb304;col=517c58;td=5b6324;chd=517c48;offset=0;cdOffset=0;validated-hierarchy; map:55344
DATA_CHT_1_COMPGEN(0x00917c58, "const t_script_action_factory<28>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_simple_adjustment_action@W4t_script_hero_target@@K@@;bcd=517c6c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:55345
DATA_CHT_1_COMPGEN(0x00917c6c, "t_script_simple_adjustment_action<t_script_hero_target, unsigned long>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_hero_adjustment_action@K@@;bcd=517c84;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:55346
DATA_CHT_1_COMPGEN(0x00917c84, "t_script_hero_adjustment_action<unsigned long>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_script_increase_experience@@;bcd=517c9c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:55347
DATA_CHT_1_COMPGEN(0x00917c9c, "t_script_increase_experience::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action_base@$0BM@Vt_script_increase_experience@@@@;bcd=517cb4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:55348
DATA_CHT_1_COMPGEN(0x00917cb4, "t_script_action_base<28, t_script_increase_experience>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action@$0BM@@@;bcd=517ccc;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:55349
DATA_CHT_1_COMPGEN(0x00917ccc, "t_script_action<28>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_action@$0BM@@@;vft=4eb30c;col=517d18;td=5b6454;chd=517d08;offset=0;cdOffset=0;validated-hierarchy; map:55350
DATA_CHT_1_COMPGEN(0x00917ce4, "t_script_action<28>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_action@$0BM@@@;vft=4eb30c;col=517d18;td=5b6454;chd=517d08;offset=0;cdOffset=0;validated-hierarchy; map:55351
DATA_CHT_1_COMPGEN(0x00917d08, "t_script_action<28>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_action@$0BM@@@;vft=4eb30c;col=517d18;td=5b6454;chd=517d08;offset=0;cdOffset=0;validated-hierarchy; map:55352
DATA_CHT_1_COMPGEN(0x00917d18, "const t_script_action<28>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:55353
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_action_base<28, t_script_increase_experience>::`RTTI Base Class Array'")

// name:A; map symbol; map:55354
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_action_base<28, t_script_increase_experience>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:55355
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_action_base<28, t_script_increase_experience>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:55356
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_increase_experience::`RTTI Base Class Array'")

// name:A; map symbol; map:55357
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_increase_experience::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:55358
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_increase_experience::`RTTI Complete Object Locator'")

// name:A; map symbol; map:55359
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_hero_adjustment_action<unsigned long>::`RTTI Base Class Array'")

// name:A; map symbol; map:55360
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_hero_adjustment_action<unsigned long>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:55361
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_hero_adjustment_action<unsigned long>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:55362
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_simple_adjustment_action<t_script_hero_target, unsigned long>::`RTTI Base Class Array'")

// name:A; map symbol; map:55363
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_simple_adjustment_action<t_script_hero_target, unsigned long>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:55364
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_simple_adjustment_action<t_script_hero_target, unsigned long>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action_factory@$0BN@@@;bcd=517d2c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:55365
DATA_CHT_1_COMPGEN(0x00917d2c, "t_script_action_factory<29>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_action_factory@$0BN@@@;vft=4eb344;col=517d64;td=5b647c;chd=517d54;offset=0;cdOffset=0;validated-hierarchy; map:55366
DATA_CHT_1_COMPGEN(0x00917d44, "t_script_action_factory<29>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_action_factory@$0BN@@@;vft=4eb344;col=517d64;td=5b647c;chd=517d54;offset=0;cdOffset=0;validated-hierarchy; map:55367
DATA_CHT_1_COMPGEN(0x00917d54, "t_script_action_factory<29>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_action_factory@$0BN@@@;vft=4eb344;col=517d64;td=5b647c;chd=517d54;offset=0;cdOffset=0;validated-hierarchy; map:55368
DATA_CHT_1_COMPGEN(0x00917d64, "const t_script_action_factory<29>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_script_increase_experience_level@@;bcd=517d78;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:55369
DATA_CHT_1_COMPGEN(0x00917d78, "t_script_increase_experience_level::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action_base@$0BN@Vt_script_increase_experience_level@@@@;bcd=517d90;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:55370
DATA_CHT_1_COMPGEN(0x00917d90, "t_script_action_base<29, t_script_increase_experience_level>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action@$0BN@@@;bcd=517da8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:55371
DATA_CHT_1_COMPGEN(0x00917da8, "t_script_action<29>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_action@$0BN@@@;vft=4eb34c;col=517df4;td=5b6530;chd=517de4;offset=0;cdOffset=0;validated-hierarchy; map:55372
DATA_CHT_1_COMPGEN(0x00917dc0, "t_script_action<29>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_action@$0BN@@@;vft=4eb34c;col=517df4;td=5b6530;chd=517de4;offset=0;cdOffset=0;validated-hierarchy; map:55373
DATA_CHT_1_COMPGEN(0x00917de4, "t_script_action<29>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_action@$0BN@@@;vft=4eb34c;col=517df4;td=5b6530;chd=517de4;offset=0;cdOffset=0;validated-hierarchy; map:55374
DATA_CHT_1_COMPGEN(0x00917df4, "const t_script_action<29>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:55375
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_action_base<29, t_script_increase_experience_level>::`RTTI Base Class Array'")

// name:A; map symbol; map:55376
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_action_base<29, t_script_increase_experience_level>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:55377
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_action_base<29, t_script_increase_experience_level>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:55378
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_increase_experience_level::`RTTI Base Class Array'")

// name:A; map symbol; map:55379
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_increase_experience_level::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:55380
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_increase_experience_level::`RTTI Complete Object Locator'")

// === .data (10 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action_factory@$0BM@@@;td=5b6324;validated-header; map:59312
DATA_CHT_1_COMPGEN(0x009b6324, "t_script_action_factory<28> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_simple_adjustment_action@W4t_script_hero_target@@K@@;td=5b6358;validated-header; map:59313
DATA_CHT_1_COMPGEN(0x009b6358, "t_script_simple_adjustment_action<t_script_hero_target, unsigned long> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_hero_adjustment_action@K@@;td=5b63a4;validated-header; map:59314
DATA_CHT_1_COMPGEN(0x009b63a4, "t_script_hero_adjustment_action<unsigned long> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_script_increase_experience@@;td=5b63d8;validated-header; map:59315
DATA_CHT_1_COMPGEN(0x009b63d8, "t_script_increase_experience `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action_base@$0BM@Vt_script_increase_experience@@@@;td=5b6408;validated-header; map:59316
DATA_CHT_1_COMPGEN(0x009b6408, "t_script_action_base<28, t_script_increase_experience> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action@$0BM@@@;td=5b6454;validated-header; map:59317
DATA_CHT_1_COMPGEN(0x009b6454, "t_script_action<28> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action_factory@$0BN@@@;td=5b647c;validated-header; map:59318
DATA_CHT_1_COMPGEN(0x009b647c, "t_script_action_factory<29> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_script_increase_experience_level@@;td=5b64ac;validated-header; map:59319
DATA_CHT_1_COMPGEN(0x009b64ac, "t_script_increase_experience_level `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action_base@$0BN@Vt_script_increase_experience_level@@@@;td=5b64e0;validated-header; map:59320
DATA_CHT_1_COMPGEN(0x009b64e0, "t_script_action_base<29, t_script_increase_experience_level> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action@$0BN@@@;td=5b6530;validated-header; map:59321
DATA_CHT_1_COMPGEN(0x009b6530, "t_script_action<29> `RTTI Type Descriptor'")
