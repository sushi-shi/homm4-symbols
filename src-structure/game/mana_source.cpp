// mana_source.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 30/47 (A:13 B:3 C:0); unaccounted 17; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (26 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:64551; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00701af0, 0x1c, STATIC_INIT_DISPATCH, "mana_source#1")

// name:C; dyninit; see ledger; map:64552
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "mana_source#1")

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:28832
VA_CHT_1(0x00701b10, 0x111)
t_mana_source::t_mana_source(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:28833
VA_CHT_1(0x00701cc0, 0xbfa)
void t_mana_source::activate_trigger(
    t_army* arg_0,
    t_adv_map_point const& arg_1,
    t_direction arg_2,
    t_adventure_frame* arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:64553
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
static void show_bonus(t_hero* arg_0, int arg_1, t_basic_dialog* arg_2)
{
    // Body unavailable.
}

// name:A; map symbol; map:28834
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_mana_source::get_charge_rate() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28835
VA_CHT_1(0x007028c0, 0x8a)
bool t_mana_source::benefits(t_army* arg_0) const
{
    // Body unavailable.
}

// confidence:D; dyninit-init; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:64554; name:A (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00702950, 0x11, STATIC_INIT_DISPATCH, k_text_no_benefit)

// confidence:D; dyninit-ctor; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:64555; name:A (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00702970, 0xd1, STATIC_CTOR, k_text_no_benefit)

// name:A; dyninit; see ledger; map:64556
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, k_text_no_benefit)

// confidence:D; dyninit-dtor; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:64557; name:A (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00702a50, 0xa, STATIC_DTOR, k_text_no_benefit)

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:28836
VA_CHT_1(0x00702a60, 0x182)
std::string t_mana_source::get_balloon_help() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28837
VA_CHT_1(0x00702bf0, 0x1dd)
std::string t_mana_source::replace_text(std::string const& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:28838
VA_CHT_1(0x00702dd0, 0x1eb)
void t_mana_source::right_click(t_mouse_event const& arg_0, t_adventure_frame* arg_1)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:64558; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00703030, 0x20, STATIC_INIT_DISPATCH, mana_source)

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:28839
VA_CHT_1_COMPGEN(0x00701c30, 0x2d, SCALAR_DELETING_DTOR, t_mana_source)

// name:A; map symbol; map:28840
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_mana_source)

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:28841
VA_CHT_1(0x00701c60, 0x57)
// public: void t_mana_source::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:28842
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_mana_source::~t_mana_source()
{
    // Body unavailable.
}

// name:A; map symbol; map:28843
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_hero::get_well_recharge_level() const
{
    // Body unavailable.
}

// name:A; map symbol; map:28844
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_hero::set_well_recharge_level(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:28845
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_registration<t_mana_source>::t_object_registration<t_mana_source>(t_adv_object_type arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:28846
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_factory<t_mana_source>::t_object_factory<t_mana_source>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot;vftable-certificate=302fc0:28847;class=t_object_factory<class t_mana_source>;proof=unique-hierarchy-method-and-slot-cleanup;cleanup=8;checked-rtti-and-raw-slots;vft=4e4dc0,col=50ef24,offset=0,slot=0,entry=302fc0; map:28847
VA_CHT_1(0x00702fc0, 0x62)
t_stationary_adventure_object* t_object_factory<t_mana_source>::create(
    std::string const& arg_0,
    t_qualified_adv_object_type const& arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:28848
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_mana_source)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:28849
VA_CHT_1_COMPGEN(0x00703060, 0xb, VECTOR_DELETING_DTOR, t_mana_source)

// === .rdata (7 symbols) ===

// name:A; map symbol; map:44773
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_mana_source::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:44774
DATA_CHT_1_COMPGEN(0x008e4dcc, "const t_mana_source::`vftable'")

// confidence:B; rtti-order; map:44775
DATA_CHT_1_COMPGEN(0x008e4e8c, "const t_mana_source::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:44776
DATA_CHT_1_COMPGEN(0x008e4e94, "const t_mana_source::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:44777
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_mana_source::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:44778
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_mana_source::`vbtable'{for `t_abstract_stationary_adv_object'}")

// confidence:A; rtti-name; map:44779
DATA_CHT_1_COMPGEN(0x008e4dc0, "const t_object_factory<t_mana_source>::`vftable'")

// === .rdata$r (11 symbols) ===

// name:A; map symbol; map:53195
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_mana_source::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_mana_source@@;vft=4e4dcc;col=50efc4;td=5ab9f0;chd=50efb4;offset=84;cdOffset=0;validated-hierarchy; map:53196
DATA_CHT_1_COMPGEN(0x0090efc4, "const t_mana_source::`RTTI Complete Object Locator'")

// name:A; map symbol; map:53197
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_mana_source::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_mana_source@@;bcd=50ef74;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53198
DATA_CHT_1_COMPGEN(0x0090ef74, "t_mana_source::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_mana_source@@;vft=4e4dcc;col=50efc4;td=5ab9f0;chd=50efb4;offset=84;cdOffset=0;validated-hierarchy; map:53199
DATA_CHT_1_COMPGEN(0x0090ef8c, "t_mana_source::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_mana_source@@;vft=4e4dcc;col=50efc4;td=5ab9f0;chd=50efb4;offset=84;cdOffset=0;validated-hierarchy; map:53200
DATA_CHT_1_COMPGEN(0x0090efb4, "t_mana_source::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:53201
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_mana_source::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_object_factory@Vt_mana_source@@@@;bcd=50eef0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53202
DATA_CHT_1_COMPGEN(0x0090eef0, "t_object_factory<t_mana_source>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_object_factory@Vt_mana_source@@@@;vft=4e4dc0;col=50ef24;td=5ab9bc;chd=50ef14;offset=0;cdOffset=0;validated-hierarchy; map:53203
DATA_CHT_1_COMPGEN(0x0090ef08, "t_object_factory<t_mana_source>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_object_factory@Vt_mana_source@@@@;vft=4e4dc0;col=50ef24;td=5ab9bc;chd=50ef14;offset=0;cdOffset=0;validated-hierarchy; map:53204
DATA_CHT_1_COMPGEN(0x0090ef14, "t_object_factory<t_mana_source>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_object_factory@Vt_mana_source@@@@;vft=4e4dc0;col=50ef24;td=5ab9bc;chd=50ef14;offset=0;cdOffset=0;validated-hierarchy; map:53205
DATA_CHT_1_COMPGEN(0x0090ef24, "const t_object_factory<t_mana_source>::`RTTI Complete Object Locator'")

// === .data (2 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_mana_source@@;td=5ab9f0;validated-header; map:58775
DATA_CHT_1_COMPGEN(0x009ab9f0, "t_mana_source `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_object_factory@Vt_mana_source@@@@;td=5ab9bc;validated-header; map:58776
DATA_CHT_1_COMPGEN(0x009ab9bc, "t_object_factory<t_mana_source> `RTTI Type Descriptor'")

// === .bss (1 symbols) ===

// confidence:B; dyninit-global; owner-conf-B; map:60274
DATA_CHT_1(0x009f20d0)
t_external_string const k_text_no_benefit; // Initial value unavailable.
