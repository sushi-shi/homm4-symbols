// move_missile.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 19/32 (A:16 B:2 C:1); unaccounted 13; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (22 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:64205; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0072a430, 0x15, STATIC_INIT_DISPATCH, "move_missile#1")

// name:C; dyninit; see ledger; map:64206
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "move_missile#1")

// confidence:A; dyninit-init; owner-conf-C; map:64207; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0072a450, 0x15, STATIC_INIT_DISPATCH, "move_missile#2")

// name:C; dyninit; see ledger; map:64208
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "move_missile#2")

// confidence:A; dyninit-init; owner-conf-C; map:64209; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0072a470, 0x15, STATIC_INIT_DISPATCH, "move_missile#3")

// name:C; dyninit; see ledger; map:64210
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "move_missile#3")

// confidence:A; dyninit-init; owner-conf-C; map:64211; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0072a490, 0x15, STATIC_INIT_DISPATCH, "move_missile#4")

// name:C; dyninit; see ledger; map:64212
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "move_missile#4")

// confidence:A; dyninit-init; owner-conf-C; map:64213; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0072a4b0, 0x10, STATIC_INIT_DISPATCH, "move_missile#5")

// name:C; dyninit; see ledger; map:64214
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "move_missile#5")

// confidence:A; dyninit-init; owner-conf-C; map:64215; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0072a4c0, 0x15, STATIC_INIT_DISPATCH, "move_missile#6")

// name:C; dyninit; see ledger; map:64216
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "move_missile#6")

// confidence:A; align-order; stable,vptr; map:30346
VA_CHT_1(0x0072a4e0, 0x23d)
t_move_missile::t_move_missile(
    t_combat_actor& arg_0,
    t_combat_creature& arg_1,
    t_map_point_3d const& arg_2,
    bool arg_3,
    t_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d> arg_4
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:30347
VA_CHT_1(0x0072a7e0, 0x2ae)
void t_move_missile::on_idle()
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:64217; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0072aa90, 0x20, STATIC_INIT_DISPATCH, move_missile)

// confidence:A; align-band; retn,stable,vslot; map:30348
VA_CHT_1_COMPGEN(0x0072a720, 0x1e, VECTOR_DELETING_DTOR, t_move_missile)

// name:A; map symbol; map:30349
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_move_missile)

// name:A; map symbol; map:30350
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_move_missile::~t_move_missile()
{
    // Body unavailable.
}

// name:A; map symbol; map:30351
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_point_3d operator*(t_map_point_3d const& arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:30352
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_point_3d& t_map_point_3d::operator*=(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:30353
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_move_missile)

// confidence:C; align-order; stable; map:30354
VA_CHT_1_COMPGEN(0x0072aac0, 0x8, VECTOR_DELETING_DTOR, t_move_missile)

// === .rdata (3 symbols) ===

// confidence:B; rtti-order; map:44881
DATA_CHT_1_COMPGEN(0x008e62fc, "const t_move_missile::`vftable'")

// confidence:A; rtti-name; map:44882
DATA_CHT_1_COMPGEN(0x008e630c, "const t_move_missile::`vftable'{for `t_idle_processor'}")

// confidence:B; rtti-order; map:44883
DATA_CHT_1_COMPGEN(0x008e6318, "const t_move_missile::`vftable'{for `t_counted_object'}")

// === .rdata$r (6 symbols) ===

// name:A; map symbol; map:53500
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_move_missile::`RTTI Complete Object Locator'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_move_missile@@;vft=4e630c;col=510684;td=5ad580;chd=5106d0;offset=8;cdOffset=0;validated-hierarchy; map:53501
DATA_CHT_1_COMPGEN(0x00910684, "const t_move_missile::`RTTI Complete Object Locator'{for `t_idle_processor'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_move_missile@@;bcd=510698;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53502
DATA_CHT_1_COMPGEN(0x00910698, "t_move_missile::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_move_missile@@;vft=4e630c;col=510684;td=5ad580;chd=5106d0;offset=8;cdOffset=0;validated-hierarchy; map:53503
DATA_CHT_1_COMPGEN(0x009106b0, "t_move_missile::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_move_missile@@;vft=4e630c;col=510684;td=5ad580;chd=5106d0;offset=8;cdOffset=0;validated-hierarchy; map:53504
DATA_CHT_1_COMPGEN(0x009106d0, "t_move_missile::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:53505
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_move_missile::`RTTI Complete Object Locator'{for `t_counted_object'}")

// === .data (1 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_move_missile@@;td=5ad580;validated-header; map:58863
DATA_CHT_1_COMPGEN(0x009ad580, "t_move_missile `RTTI Type Descriptor'")
