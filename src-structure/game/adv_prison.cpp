// adv_prison.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\adv_prison.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 33/65 (A:13 B:3 C:0); unaccounted 32; skipped std 3.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (43 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:70868; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00460120, 0x15, STATIC_INIT_DISPATCH, "adv_prison#1")

// name:C; dyninit; see ledger; map:70869
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adv_prison#1")

// confidence:D; dyninit-init; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:70870; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00460140, 0x1c, STATIC_INIT_DISPATCH, k_registration)

// name:B; dyninit; see ledger; map:70871
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, k_registration)

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:5662
VA_CHT_1(0x00460160, 0x14e)
t_adv_prison::t_adv_prison(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:5663
VA_CHT_1(0x00460360, 0x3a5)
void t_adv_prison::activate_trigger(
    t_army* arg_0,
    t_adv_map_point const& arg_1,
    t_direction arg_2,
    t_adventure_frame* arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:5664
VA_CHT_1(0x00460710, 0xb)
int t_adv_prison::get_version() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:5665
VA_CHT_1(0x00460720, 0x36)
bool t_adv_prison::read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_qualified_adv_object_type const& arg_1,
    int arg_2
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:5666
VA_CHT_1(0x00460760, 0x72)
bool t_adv_prison::read_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_progress_handler* arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:5667
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adv_prison::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:5668
VA_CHT_1(0x004607f0, 0x3f)
bool t_adv_prison::preplacement(t_adventure_map& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:5669
VA_CHT_1(0x00460830, 0x1d)
void t_adv_prison::process_new_day()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:5670
VA_CHT_1(0x00460850, 0x2b)
void t_adv_prison::read_postplacement(t_adventure_map& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:5671
VA_CHT_1(0x00460880, 0xeb)
float t_adv_prison::ai_value(t_adventure_ai const& arg_0, t_creature_array const& arg_1, int arg_2) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:5672
VA_CHT_1(0x00460970, 0x4e2)
void t_adv_prison::right_click(t_mouse_event const& arg_0, t_adventure_frame* arg_1)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:70872; name:B (dyninit; see ledger)
VA_CHT_1(0x00460ed0, 0x20)
// adv_prison$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:70874; name:B (dyninit; see ledger)
VA_CHT_1(0x00460ef0, 0x5c)
// adv_prison$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:70875
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adv_prison$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:70876
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adv_prison$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:70877
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adv_prison$tatexit4
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:5673
VA_CHT_1_COMPGEN(0x004602b0, 0x2d, VECTOR_DELETING_DTOR, t_adv_prison)

// name:A; map symbol; map:5674
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_adv_prison)

// name:A; map symbol; map:5675
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// public: void t_adv_prison::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:5676
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_prison::~t_adv_prison()
{
    // Body unavailable.
}

// name:A; map symbol; map:5677
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_hero>::~t_counted_ptr<t_hero>()
{
    // Body unavailable.
}

// name:A; map symbol; map:5678
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_adventure_map>::~t_counted_ptr<t_adventure_map>()
{
    // Body unavailable.
}

// name:A; map symbol; map:5679
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_hero::get_level() const
{
    // Body unavailable.
}

// name:A; map symbol; map:5680
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_hero>::t_counted_ptr<t_hero>(t_hero* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:5681
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_hero* t_counted_ptr<t_hero>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:5682
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_hero* t_counted_ptr<t_hero>::operator t_hero*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:5683
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_hero* t_counted_ptr<t_hero>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:5684
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_hero& t_counted_ptr<t_hero>::operator*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:5685
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_ptr<t_creature_array>::t_owned_ptr<t_creature_array>(std::auto_ptr<t_creature_array> arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:5687
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_ptr<t_creature_array>::~t_owned_ptr<t_creature_array>()
{
    // Body unavailable.
}

// name:A; map symbol; map:5688
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_creature_array* t_owned_ptr<t_creature_array>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:5689
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_adventure_map>::t_counted_ptr<t_adventure_map>(t_adventure_map* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:5690
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_registration<t_adv_prison>::t_object_registration<t_adv_prison>(t_adv_object_type arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:5691
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_creature_stack>::t_counted_ptr<t_creature_stack>(t_counted_ptr<t_hero> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:5692
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_factory<t_adv_prison>::t_object_factory<t_adv_prison>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot;vftable-certificate=60e60:5693;class=t_object_factory<class t_adv_prison>;proof=unique-hierarchy-method-and-slot-cleanup;cleanup=8;checked-rtti-and-raw-slots;vft=4d131c,col=4f8720,offset=0,slot=0,entry=60e60; map:5693
VA_CHT_1(0x00460e60, 0x62)
t_stationary_adventure_object* t_object_factory<t_adv_prison>::create(
    std::string const& arg_0,
    t_qualified_adv_object_type const& arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:5695
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_creature_stack* implicit_cast(t_creature_stack* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:5696
VA_CHT_1_COMPGEN(0x00460f50, 0x8, VECTOR_DELETING_DTOR, t_adv_prison)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:5697
VA_CHT_1_COMPGEN(0x00460f60, 0xb, VECTOR_DELETING_DTOR, t_adv_prison)

// === .rdata (8 symbols) ===

// name:A; map symbol; map:42968
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_prison::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:42969
DATA_CHT_1_COMPGEN(0x008d1324, "const t_adv_prison::`vftable'")

// confidence:B; rtti-order; map:42970
DATA_CHT_1_COMPGEN(0x008d13e4, "const t_adv_prison::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:42971
DATA_CHT_1_COMPGEN(0x008d13ec, "const t_adv_prison::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:42972
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_prison::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:42973
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_prison::`vbtable'{for `t_abstract_stationary_adv_object'}")

// name:A; map symbol; map:42974
DATA_CHT_1(UNACCOUNTED)
// __real@4@4009bb80000000000000

// confidence:A; rtti-name; map:42975
DATA_CHT_1_COMPGEN(0x008d131c, "const t_object_factory<t_adv_prison>::`vftable'")

// === .rdata$r (11 symbols) ===

// name:A; map symbol; map:48272
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_prison::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_adv_prison@@;vft=4d1324;col=4f87c0;td=58a970;chd=4f87b0;offset=92;cdOffset=0;validated-hierarchy; map:48273
DATA_CHT_1_COMPGEN(0x008f87c0, "const t_adv_prison::`RTTI Complete Object Locator'")

// name:A; map symbol; map:48274
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_prison::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adv_prison@@;bcd=4f8770;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48275
DATA_CHT_1_COMPGEN(0x008f8770, "t_adv_prison::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adv_prison@@;vft=4d1324;col=4f87c0;td=58a970;chd=4f87b0;offset=92;cdOffset=0;validated-hierarchy; map:48276
DATA_CHT_1_COMPGEN(0x008f8788, "t_adv_prison::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adv_prison@@;vft=4d1324;col=4f87c0;td=58a970;chd=4f87b0;offset=92;cdOffset=0;validated-hierarchy; map:48277
DATA_CHT_1_COMPGEN(0x008f87b0, "t_adv_prison::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:48278
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_prison::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_object_factory@Vt_adv_prison@@@@;bcd=4f86ec;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48279
DATA_CHT_1_COMPGEN(0x008f86ec, "t_object_factory<t_adv_prison>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_object_factory@Vt_adv_prison@@@@;vft=4d131c;col=4f8720;td=58a93c;chd=4f8710;offset=0;cdOffset=0;validated-hierarchy; map:48280
DATA_CHT_1_COMPGEN(0x008f8704, "t_object_factory<t_adv_prison>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_object_factory@Vt_adv_prison@@@@;vft=4d131c;col=4f8720;td=58a93c;chd=4f8710;offset=0;cdOffset=0;validated-hierarchy; map:48281
DATA_CHT_1_COMPGEN(0x008f8710, "t_object_factory<t_adv_prison>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_object_factory@Vt_adv_prison@@@@;vft=4d131c;col=4f8720;td=58a93c;chd=4f8710;offset=0;cdOffset=0;validated-hierarchy; map:48282
DATA_CHT_1_COMPGEN(0x008f8720, "const t_object_factory<t_adv_prison>::`RTTI Complete Object Locator'")

// === .data (2 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_adv_prison@@;td=58a970;validated-header; map:57546
DATA_CHT_1_COMPGEN(0x0098a970, "t_adv_prison `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_object_factory@Vt_adv_prison@@@@;td=58a93c;validated-header; map:57547
DATA_CHT_1_COMPGEN(0x0098a93c, "t_object_factory<t_adv_prison> `RTTI Type Descriptor'")

// === .bss (1 symbols) ===

namespace {

// confidence:B; dyninit-global; owner-conf-B; map:59961
DATA_CHT_1(0x009cfbec)
t_object_registration<t_adv_prison> k_registration; // Initial value unavailable.

} // anonymous namespace
