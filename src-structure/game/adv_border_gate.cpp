// adv_border_gate.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 24/46 (A:20 B:2 C:2); unaccounted 22; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (26 symbols) ===

// name:C; dyninit; see ledger; map:71195
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_INIT_DISPATCH, "adv_border_gate#1")

// name:C; dyninit; see ledger; map:71196
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adv_border_gate#1")

// name:C; dyninit; see ledger; map:71197
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "adv_border_gate#1")

// name:C; dyninit; see ledger; map:71198
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "adv_border_gate#1")

// name:C; dyninit; see ledger; map:71199
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_INIT_DISPATCH, "adv_border_gate#2")

// name:C; dyninit; see ledger; map:71200
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adv_border_gate#2")

// name:C; dyninit; see ledger; map:71201
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "adv_border_gate#2")

// name:C; dyninit; see ledger; map:71202
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "adv_border_gate#2")

// confidence:A; dyninit-init; owner-conf-C; map:71203; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00434930, 0x1c, STATIC_INIT_DISPATCH, "adv_border_gate#3")

// name:C; dyninit; see ledger; map:71204
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adv_border_gate#3")

// confidence:A; align-order; retn,stable,vptr; map:4165
VA_CHT_1(0x00434950, 0x111)
t_adv_border_gate::t_adv_border_gate(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:4166
VA_CHT_1(0x00434b00, 0x40b)
void t_adv_border_gate::activate_trigger(
    t_army* arg_0,
    t_adv_map_point const& arg_1,
    t_direction arg_2,
    t_adventure_frame* arg_3
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:4167
VA_CHT_1(0x00434f10, 0x3d)
bool t_adv_border_gate::blocks_army(t_creature_array const& arg_0, t_path_search_type arg_1) const
{
    // Body unavailable.
}

// name:A; map symbol; map:4168
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adv_border_gate::is_triggered_by(t_creature_array const& arg_0) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:4169
VA_CHT_1(0x00434f50, 0x3d)
bool t_adv_border_gate::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:4170
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adv_border_gate::read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_qualified_adv_object_type const& arg_1,
    int arg_2
)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-C; map:71205; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00435040, 0x20, STATIC_INIT_DISPATCH, adv_border_gate)

// confidence:A; align-band; retn,stable,vslot; map:4171
VA_CHT_1_COMPGEN(0x00434a70, 0x2d, SCALAR_DELETING_DTOR, t_adv_border_gate)

// name:A; map symbol; map:4172
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_adv_border_gate)

// confidence:C; align-band; retn,stable; map:4173
VA_CHT_1(0x00434aa0, 0x57)
// public: void t_adv_border_gate::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:4174
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_border_gate::~t_adv_border_gate()
{
    // Body unavailable.
}

// name:A; map symbol; map:4175
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_registration<t_adv_border_gate>::t_object_registration<t_adv_border_gate>(t_adv_object_type arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:4176
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_factory<t_adv_border_gate>::t_object_factory<t_adv_border_gate>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:4177
VA_CHT_1(0x00434fd0, 0x62)
t_stationary_adventure_object* t_object_factory<t_adv_border_gate>::create(
    std::string const& arg_0,
    t_qualified_adv_object_type const& arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:4178
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_adv_border_gate)

// confidence:C; align-order; stable; map:4179
VA_CHT_1_COMPGEN(0x00435070, 0xb, VECTOR_DELETING_DTOR, t_adv_border_gate)

// === .rdata (7 symbols) ===

// name:A; map symbol; map:42756
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_border_gate::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:42757
DATA_CHT_1_COMPGEN(0x008ce4c4, "const t_adv_border_gate::`vftable'")

// confidence:B; rtti-order; map:42758
DATA_CHT_1_COMPGEN(0x008ce584, "const t_adv_border_gate::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:42759
DATA_CHT_1_COMPGEN(0x008ce58c, "const t_adv_border_gate::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:42760
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_border_gate::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:42761
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_border_gate::`vbtable'{for `t_abstract_stationary_adv_object'}")

// confidence:A; rtti-name; map:42762
DATA_CHT_1_COMPGEN(0x008ce4bc, "const t_object_factory<t_adv_border_gate>::`vftable'")

// === .rdata$r (11 symbols) ===

// name:A; map symbol; map:47921
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_border_gate::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_adv_border_gate@@;vft=4ce4c4;col=4f6be8;td=588160;chd=4f6bd8;offset=84;cdOffset=0;validated-hierarchy; map:47922
DATA_CHT_1_COMPGEN(0x008f6be8, "const t_adv_border_gate::`RTTI Complete Object Locator'")

// name:A; map symbol; map:47923
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_border_gate::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adv_border_gate@@;bcd=4f6b98;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47924
DATA_CHT_1_COMPGEN(0x008f6b98, "t_adv_border_gate::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adv_border_gate@@;vft=4ce4c4;col=4f6be8;td=588160;chd=4f6bd8;offset=84;cdOffset=0;validated-hierarchy; map:47925
DATA_CHT_1_COMPGEN(0x008f6bb0, "t_adv_border_gate::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adv_border_gate@@;vft=4ce4c4;col=4f6be8;td=588160;chd=4f6bd8;offset=84;cdOffset=0;validated-hierarchy; map:47926
DATA_CHT_1_COMPGEN(0x008f6bd8, "t_adv_border_gate::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:47927
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_border_gate::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_object_factory@Vt_adv_border_gate@@@@;bcd=4f6b14;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47928
DATA_CHT_1_COMPGEN(0x008f6b14, "t_object_factory<t_adv_border_gate>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_object_factory@Vt_adv_border_gate@@@@;vft=4ce4bc;col=4f6b48;td=588128;chd=4f6b38;offset=0;cdOffset=0;validated-hierarchy; map:47929
DATA_CHT_1_COMPGEN(0x008f6b2c, "t_object_factory<t_adv_border_gate>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_object_factory@Vt_adv_border_gate@@@@;vft=4ce4bc;col=4f6b48;td=588128;chd=4f6b38;offset=0;cdOffset=0;validated-hierarchy; map:47930
DATA_CHT_1_COMPGEN(0x008f6b38, "t_object_factory<t_adv_border_gate>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_object_factory@Vt_adv_border_gate@@@@;vft=4ce4bc;col=4f6b48;td=588128;chd=4f6b38;offset=0;cdOffset=0;validated-hierarchy; map:47931
DATA_CHT_1_COMPGEN(0x008f6b48, "const t_object_factory<t_adv_border_gate>::`RTTI Complete Object Locator'")

// === .data (2 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_adv_border_gate@@;td=588160;validated-header; map:57466
DATA_CHT_1_COMPGEN(0x00988160, "t_adv_border_gate `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_object_factory@Vt_adv_border_gate@@@@;td=588128;validated-header; map:57467
DATA_CHT_1_COMPGEN(0x00988128, "t_object_factory<t_adv_border_gate> `RTTI Type Descriptor'")
