// adv_temple.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\adv_temple.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 52/83 (A:25 B:6 C:0); unaccounted 31; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (40 symbols) ===

// confidence:D; dyninit-init; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:70740; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0046a880, 0x1c, STATIC_INIT_DISPATCH, k_registration)

// name:B; dyninit; see ledger; map:70741
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, k_registration)

// confidence:D; dyninit-init; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:70742; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0046a8a0, 0x1c, STATIC_INIT_DISPATCH, k_random_registration)

// name:B; dyninit; see ledger; map:70743
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, k_random_registration)

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:6091
VA_CHT_1(0x0046a8c0, 0x111)
t_adv_temple::t_adv_temple(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:6092
VA_CHT_1(0x0046aa70, 0x19e)
t_adv_temple::t_adv_temple(t_town_type arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:6093
VA_CHT_1(0x0046ac10, 0x563)
void t_adv_temple::activate_trigger(
    t_army* arg_0,
    t_adv_map_point const& arg_1,
    t_direction arg_2,
    t_adventure_frame* arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:70744
VA_CHT_1(0x0046b180, 0x3df)
static void show_bonus(
    t_creature_stack& arg_0,
    int arg_1,
    t_qualified_adv_object_type const& arg_2,
    t_basic_dialog* arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:6094
VA_CHT_1(0x0046b560, 0x3da)
void t_adv_temple::right_click(t_mouse_event const& arg_0, t_adventure_frame* arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:70745
VA_CHT_1(0x0046b940, 0xd3)
static t_temple_result get_result(
    t_army const* arg_0,
    t_town_type arg_1,
    t_qualified_adv_object_type const& arg_2
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:6095
VA_CHT_1(0x0046ba20, 0x22c)
std::string t_adv_temple::get_balloon_help() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:6096
VA_CHT_1(0x0046bc50, 0x12a)
t_random_temple::t_random_temple(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:6097
VA_CHT_1(0x0046be40, 0x70)
bool t_random_temple::read_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_progress_handler* arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:6098
VA_CHT_1(0x0046beb0, 0xc0)
bool t_random_temple::preplacement(t_adventure_map& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:6099
VA_CHT_1(0x0046c0f0, 0x62)
void t_random_temple::place(t_adventure_map& arg_0, t_adv_map_point const& arg_1)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:70746; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0046c160, 0x20, STATIC_INIT_DISPATCH, adv_temple)

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:6100
VA_CHT_1_COMPGEN(0x0046a9e0, 0x2d, SCALAR_DELETING_DTOR, t_adv_temple)

// name:A; map symbol; map:6101
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_adv_temple)

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:6102
VA_CHT_1(0x0046c000, 0x74)
// public: void t_adv_temple::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:6103
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_temple::~t_adv_temple()
{
    // Body unavailable.
}

// name:A; map symbol; map:6104
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_town_type t_adv_temple::get_alignment() const
{
    // Body unavailable.
}

// name:A; map symbol; map:6105
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_window::get_height() const
{
    // Body unavailable.
}

// name:A; map symbol; map:6106
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_window::get_width() const
{
    // Body unavailable.
}

// name:A; map symbol; map:6107
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_pixel_24::t_pixel_24(unsigned char arg_0, unsigned char arg_1, unsigned char arg_2)
{
    // Body unavailable.
}

// name:A; map symbol; map:6108
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_text_window::set_center_horizontal(bool arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:6109
VA_CHT_1_COMPGEN(0x0046bd80, 0x2d, VECTOR_DELETING_DTOR, t_random_temple)

// name:A; map symbol; map:6110
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_random_temple)

// name:A; map symbol; map:6111
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// public: void t_random_temple::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:6112
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_random_temple::~t_random_temple()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:6113
VA_CHT_1(0x0046aa10, 0x57)
t_cached_ptr<t_font>::~t_cached_ptr<t_font>()
{
    // Body unavailable.
}

// name:A; map symbol; map:6114
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_registration<t_adv_temple>::t_object_registration<t_adv_temple>(t_adv_object_type arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:6115
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_registration<t_random_temple>::t_object_registration<t_random_temple>(t_adv_object_type arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:6116
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_factory<t_adv_temple>::t_object_factory<t_adv_temple>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot;vftable-certificate=6c080:6117;class=t_object_factory<class t_adv_temple>;proof=unique-hierarchy-method-and-slot-cleanup;cleanup=8;checked-rtti-and-raw-slots;vft=4d2714,col=4f9204,offset=0,slot=0,entry=6c080; map:6117
VA_CHT_1(0x0046c080, 0x62)
t_stationary_adventure_object* t_object_factory<t_adv_temple>::create(
    std::string const& arg_0,
    t_qualified_adv_object_type const& arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:6118
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_factory<t_random_temple>::t_object_factory<t_random_temple>()
{
    // Body unavailable.
}

// name:A; map symbol; map:6119
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_stationary_adventure_object* t_object_factory<t_random_temple>::create(
    std::string const& arg_0,
    t_qualified_adv_object_type const& arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:6120
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_adv_temple)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:6121
VA_CHT_1_COMPGEN(0x0046c190, 0xb, VECTOR_DELETING_DTOR, t_adv_temple)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:6122
VA_CHT_1_COMPGEN(0x0046c1a0, 0x8, VECTOR_DELETING_DTOR, t_random_temple)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:6123
VA_CHT_1_COMPGEN(0x0046c1b0, 0xb, VECTOR_DELETING_DTOR, t_random_temple)

// === .rdata (14 symbols) ===

// name:A; map symbol; map:43055
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_temple::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:43056
DATA_CHT_1_COMPGEN(0x008d2724, "const t_adv_temple::`vftable'")

// confidence:B; rtti-order; map:43057
DATA_CHT_1_COMPGEN(0x008d27e4, "const t_adv_temple::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:43058
DATA_CHT_1_COMPGEN(0x008d27ec, "const t_adv_temple::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:43059
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_temple::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:43060
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_temple::`vbtable'{for `t_abstract_stationary_adv_object'}")

// name:A; map symbol; map:43061
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_random_temple::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:43062
DATA_CHT_1_COMPGEN(0x008d28bc, "const t_random_temple::`vftable'")

// confidence:B; rtti-order; map:43063
DATA_CHT_1_COMPGEN(0x008d297c, "const t_random_temple::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:43064
DATA_CHT_1_COMPGEN(0x008d2984, "const t_random_temple::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:43065
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_random_temple::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:43066
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_random_temple::`vbtable'{for `t_abstract_stationary_adv_object'}")

// confidence:A; rtti-name; map:43067
DATA_CHT_1_COMPGEN(0x008d2714, "const t_object_factory<t_adv_temple>::`vftable'")

// confidence:A; rtti-name; map:43068
DATA_CHT_1_COMPGEN(0x008d271c, "const t_object_factory<t_random_temple>::`vftable'")

// === .rdata$r (22 symbols) ===

// name:A; map symbol; map:48403
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_temple::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_adv_temple@@;vft=4d2724;col=4f92ec;td=58af28;chd=4f92dc;offset=84;cdOffset=0;validated-hierarchy; map:48404
DATA_CHT_1_COMPGEN(0x008f92ec, "const t_adv_temple::`RTTI Complete Object Locator'")

// name:A; map symbol; map:48405
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_temple::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adv_temple@@;bcd=4f929c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48406
DATA_CHT_1_COMPGEN(0x008f929c, "t_adv_temple::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adv_temple@@;vft=4d2724;col=4f92ec;td=58af28;chd=4f92dc;offset=84;cdOffset=0;validated-hierarchy; map:48407
DATA_CHT_1_COMPGEN(0x008f92b4, "t_adv_temple::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adv_temple@@;vft=4d2724;col=4f92ec;td=58af28;chd=4f92dc;offset=84;cdOffset=0;validated-hierarchy; map:48408
DATA_CHT_1_COMPGEN(0x008f92dc, "t_adv_temple::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:48409
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_temple::`RTTI Complete Object Locator'{for `t_counted_object'}")

// name:A; map symbol; map:48410
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_random_temple::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_random_temple@@;vft=4d28bc;col=4f938c;td=58afc0;chd=4f937c;offset=116;cdOffset=0;validated-hierarchy; map:48411
DATA_CHT_1_COMPGEN(0x008f938c, "const t_random_temple::`RTTI Complete Object Locator'")

// name:A; map symbol; map:48412
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_random_temple::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_random_temple@@;bcd=4f933c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48413
DATA_CHT_1_COMPGEN(0x008f933c, "t_random_temple::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_random_temple@@;vft=4d28bc;col=4f938c;td=58afc0;chd=4f937c;offset=116;cdOffset=0;validated-hierarchy; map:48414
DATA_CHT_1_COMPGEN(0x008f9354, "t_random_temple::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_random_temple@@;vft=4d28bc;col=4f938c;td=58afc0;chd=4f937c;offset=116;cdOffset=0;validated-hierarchy; map:48415
DATA_CHT_1_COMPGEN(0x008f937c, "t_random_temple::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:48416
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_random_temple::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_object_factory@Vt_adv_temple@@@@;bcd=4f91d0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48417
DATA_CHT_1_COMPGEN(0x008f91d0, "t_object_factory<t_adv_temple>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_object_factory@Vt_adv_temple@@@@;vft=4d2714;col=4f9204;td=58aec0;chd=4f91f4;offset=0;cdOffset=0;validated-hierarchy; map:48418
DATA_CHT_1_COMPGEN(0x008f91e8, "t_object_factory<t_adv_temple>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_object_factory@Vt_adv_temple@@@@;vft=4d2714;col=4f9204;td=58aec0;chd=4f91f4;offset=0;cdOffset=0;validated-hierarchy; map:48419
DATA_CHT_1_COMPGEN(0x008f91f4, "t_object_factory<t_adv_temple>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_object_factory@Vt_adv_temple@@@@;vft=4d2714;col=4f9204;td=58aec0;chd=4f91f4;offset=0;cdOffset=0;validated-hierarchy; map:48420
DATA_CHT_1_COMPGEN(0x008f9204, "const t_object_factory<t_adv_temple>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_object_factory@Vt_random_temple@@@@;bcd=4f9218;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48421
DATA_CHT_1_COMPGEN(0x008f9218, "t_object_factory<t_random_temple>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_object_factory@Vt_random_temple@@@@;vft=4d271c;col=4f924c;td=58aef4;chd=4f923c;offset=0;cdOffset=0;validated-hierarchy; map:48422
DATA_CHT_1_COMPGEN(0x008f9230, "t_object_factory<t_random_temple>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_object_factory@Vt_random_temple@@@@;vft=4d271c;col=4f924c;td=58aef4;chd=4f923c;offset=0;cdOffset=0;validated-hierarchy; map:48423
DATA_CHT_1_COMPGEN(0x008f923c, "t_object_factory<t_random_temple>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_object_factory@Vt_random_temple@@@@;vft=4d271c;col=4f924c;td=58aef4;chd=4f923c;offset=0;cdOffset=0;validated-hierarchy; map:48424
DATA_CHT_1_COMPGEN(0x008f924c, "const t_object_factory<t_random_temple>::`RTTI Complete Object Locator'")

// === .data (5 symbols) ===

// name:A; map symbol; map:57569
DATA_CHT_1(UNACCOUNTED)
char const**k_model_name; // Initial value unavailable.

// confidence:A; rtti-type-name; type-name=.?AVt_adv_temple@@;td=58af28;validated-header; map:57570
DATA_CHT_1_COMPGEN(0x0098af28, "t_adv_temple `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_random_temple@@;td=58afc0;validated-header; map:57571
DATA_CHT_1_COMPGEN(0x0098afc0, "t_random_temple `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_object_factory@Vt_adv_temple@@@@;td=58aec0;validated-header; map:57572
DATA_CHT_1_COMPGEN(0x0098aec0, "t_object_factory<t_adv_temple> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_object_factory@Vt_random_temple@@@@;td=58aef4;validated-header; map:57573
DATA_CHT_1_COMPGEN(0x0098aef4, "t_object_factory<t_random_temple> `RTTI Type Descriptor'")

// === .bss (2 symbols) ===

namespace {

// confidence:B; dyninit-global; owner-conf-B; map:59968
DATA_CHT_1(0x009cfcc4)
t_object_registration<t_adv_temple> k_registration; // Initial value unavailable.

// confidence:B; dyninit-global; owner-conf-B; map:59969
DATA_CHT_1(0x009cfcc8)
t_object_registration<t_random_temple> k_random_registration; // Initial value unavailable.

} // anonymous namespace
