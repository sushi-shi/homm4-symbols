// adv_actor_action.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\adv_actor_action.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 3/17 (A:0 B:0 C:0); unaccounted 14; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (8 symbols) ===

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3273
VA_CHT_1(0x004266b0, 0x2d0)
std::string const& get_adv_action_name(t_adv_actor_action_id arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3274
VA_CHT_1(0x004269a0, 0x67)
t_adv_actor_action_id get_adv_action(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:71301; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00426a10, 0x20, STATIC_INIT_DISPATCH, adv_actor_action)

namespace {

// name:A; map symbol; map:3275
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_actor_action_properties const& get_adv_actor_action_properties(t_adv_actor_action_id arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:3276
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_actor_action_properties::t_adv_actor_action_properties(std::string const& arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; dyninit; see ledger; map:3277
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, get_adv_actor_action_properties::k_adv_actor_action_properties_array)

namespace {

// name:A; map symbol; map:3278
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_actor_action_properties::~t_adv_actor_action_properties()
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:3279
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_actor_action_id enum_incr(t_adv_actor_action_id& arg_0)
{
    // Body unavailable.
}

// === .data (8 symbols) ===

// name:A; map symbol; map:57401
DATA_CHT_1_COMPGEN(UNACCOUNTED, "attack")

// name:A; map symbol; map:57402
DATA_CHT_1_COMPGEN(UNACCOUNTED, "postwalk")

// name:A; map symbol; map:57403
DATA_CHT_1_COMPGEN(UNACCOUNTED, "walk")

// name:A; map symbol; map:57404
DATA_CHT_1_COMPGEN(UNACCOUNTED, "prewalk")

// name:A; map symbol; map:57405
DATA_CHT_1_COMPGEN(UNACCOUNTED, "fidget")

// name:A; map symbol; map:57406
DATA_CHT_1_COMPGEN(UNACCOUNTED, "wait")

// name:A; map symbol; map:57407
DATA_CHT_1_COMPGEN(UNACCOUNTED, "action_id >= 0&& action_id < k_...")

// name:A; map symbol; map:57408
DATA_CHT_1_COMPGEN(UNACCOUNTED, "C:\\\\work\\\\game\\\\adv_actor_action.cp...")

// === .bss (1 symbols) ===

// name:A; map symbol; map:59941
DATA_CHT_1(UNACCOUNTED)
// t_adv_actor_action_properties const* const `t_adv_actor_action_properties const& get_adv_actor_action_properties(t_adv_actor_action_id)'::`2'::k_adv_actor_action_properties_array
