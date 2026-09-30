// adv_sign.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\adv_sign.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 30/47 (A:22 B:6 C:2); unaccounted 17; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (28 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:70800; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00465ca0, 0x15, STATIC_INIT_DISPATCH, "adv_sign#1")

// name:C; dyninit; see ledger; map:70801
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adv_sign#1")

// confidence:A; dyninit-init; owner-conf-B; map:70802; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00465cc0, 0x1c, STATIC_INIT_DISPATCH, k_registration)

// name:B; dyninit; see ledger; map:70803
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, k_registration)

// confidence:A; dyninit-init; owner-conf-C; map:70804; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00465ce0, 0x11, STATIC_INIT_DISPATCH, "adv_sign#3")

// confidence:B; dyninit-ctor; owner-conf-C; map:70805; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00465d00, 0xd1, STATIC_CTOR, "adv_sign#3")

// name:C; dyninit; see ledger; map:70806
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "adv_sign#3")

// confidence:B; dyninit-dtor; owner-conf-C; map:70807; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00465de0, 0xa, STATIC_DTOR, "adv_sign#3")

// confidence:A; align-order; retn,stable,vptr; map:5862
VA_CHT_1(0x00465df0, 0x15b)
t_adv_sign::t_adv_sign(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:5863
VA_CHT_1(0x00466020, 0x21e)
void t_adv_sign::activate_trigger(
    t_army* arg_0,
    t_adv_map_point const& arg_1,
    t_direction arg_2,
    t_adventure_frame* arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:5864
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_adv_sign::get_version() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:5865
VA_CHT_1(0x00466240, 0x66)
bool t_adv_sign::read_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_progress_handler* arg_1
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:5866
VA_CHT_1(0x004662b0, 0x32)
bool t_adv_sign::read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_qualified_adv_object_type const& arg_1,
    int arg_2
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:5867
VA_CHT_1(0x004662f0, 0x53)
bool t_adv_sign::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vslot; map:5868
VA_CHT_1(0x00466350, 0xf0)
void t_adv_sign::right_click(t_mouse_event const& arg_0, t_adventure_frame* arg_1)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:70808; name:B (dyninit; see ledger)
VA_CHT_1(0x004664b0, 0x20)
// adv_sign$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:A; dyninit-tinit; owner-conf-B; map:70810; name:B (dyninit; see ledger)
VA_CHT_1(0x004664d0, 0x5c)
// adv_sign$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:70811
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adv_sign$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:70812
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adv_sign$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:70813
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adv_sign$tatexit4
// Function body not reconstructed; signature retained as a comment.

// confidence:A; align-band; retn,stable,vslot; map:5869
VA_CHT_1_COMPGEN(0x00465f50, 0x2d, VECTOR_DELETING_DTOR, t_adv_sign)

// name:A; map symbol; map:5870
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_adv_sign)

// name:A; map symbol; map:5871
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// public: void t_adv_sign::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:5872
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_registration<t_adv_sign>::t_object_registration<t_adv_sign>(t_adv_object_type arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:5873
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_factory<t_adv_sign>::t_object_factory<t_adv_sign>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,vslot; map:5874
VA_CHT_1(0x00466440, 0x62)
t_stationary_adventure_object* t_object_factory<t_adv_sign>::create(
    std::string const& arg_0,
    t_qualified_adv_object_type const& arg_1
) const
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:5875
VA_CHT_1_COMPGEN(0x00466530, 0x8, VECTOR_DELETING_DTOR, t_adv_sign)

// confidence:C; align-order; stable; map:5876
VA_CHT_1_COMPGEN(0x00466540, 0xb, VECTOR_DELETING_DTOR, t_adv_sign)

// === .rdata (7 symbols) ===

// name:A; map symbol; map:43013
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_sign::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:43014
DATA_CHT_1_COMPGEN(0x008d1d24, "const t_adv_sign::`vftable'")

// confidence:B; rtti-order; map:43015
DATA_CHT_1_COMPGEN(0x008d1de4, "const t_adv_sign::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:43016
DATA_CHT_1_COMPGEN(0x008d1dec, "const t_adv_sign::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:43017
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_sign::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:43018
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_sign::`vbtable'{for `t_abstract_stationary_adv_object'}")

// confidence:A; rtti-name; map:43019
DATA_CHT_1_COMPGEN(0x008d1d1c, "const t_object_factory<t_adv_sign>::`vftable'")

// === .rdata$r (10 symbols) ===

// name:A; map symbol; map:48338
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_sign::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_adv_sign@@;vft=4d1d24;col=4f8d24;td=58a8fc;chd=4f8d14;offset=116;cdOffset=0;validated-hierarchy; map:48339
DATA_CHT_1_COMPGEN(0x008f8d24, "const t_adv_sign::`RTTI Complete Object Locator'")

// name:A; map symbol; map:48340
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_sign::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adv_sign@@;vft=4d1d24;col=4f8d24;td=58a8fc;chd=4f8d14;offset=116;cdOffset=0;validated-hierarchy; map:48341
DATA_CHT_1_COMPGEN(0x008f8cec, "t_adv_sign::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adv_sign@@;vft=4d1d24;col=4f8d24;td=58a8fc;chd=4f8d14;offset=116;cdOffset=0;validated-hierarchy; map:48342
DATA_CHT_1_COMPGEN(0x008f8d14, "t_adv_sign::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:48343
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_sign::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_object_factory@Vt_adv_sign@@@@;bcd=4f8c68;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48344
DATA_CHT_1_COMPGEN(0x008f8c68, "t_object_factory<t_adv_sign>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_object_factory@Vt_adv_sign@@@@;vft=4d1d1c;col=4f8c9c;td=58abdc;chd=4f8c8c;offset=0;cdOffset=0;validated-hierarchy; map:48345
DATA_CHT_1_COMPGEN(0x008f8c80, "t_object_factory<t_adv_sign>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_object_factory@Vt_adv_sign@@@@;vft=4d1d1c;col=4f8c9c;td=58abdc;chd=4f8c8c;offset=0;cdOffset=0;validated-hierarchy; map:48346
DATA_CHT_1_COMPGEN(0x008f8c8c, "t_object_factory<t_adv_sign>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_object_factory@Vt_adv_sign@@@@;vft=4d1d1c;col=4f8c9c;td=58abdc;chd=4f8c8c;offset=0;cdOffset=0;validated-hierarchy; map:48347
DATA_CHT_1_COMPGEN(0x008f8c9c, "const t_object_factory<t_adv_sign>::`RTTI Complete Object Locator'")

// === .data (1 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AV?$t_object_factory@Vt_adv_sign@@@@;td=58abdc;validated-header; map:57558
DATA_CHT_1_COMPGEN(0x0098abdc, "t_object_factory<t_adv_sign> `RTTI Type Descriptor'")

// === .bss (1 symbols) ===

namespace {

// confidence:B; dyninit-global; owner-conf-B; map:59965
DATA_CHT_1(0x009cfc54)
t_object_registration<t_adv_sign> k_registration; // Initial value unavailable.

} // anonymous namespace
