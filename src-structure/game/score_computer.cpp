// score_computer.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\score_computer.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 12/28 (A:5 B:4 C:3); unaccounted 16; skipped std 16.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (26 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:63209; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0078e240, 0x15, STATIC_INIT_DISPATCH, "score_computer#1")

// name:C; dyninit; see ledger; map:63210
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "score_computer#1")

// confidence:A; dyninit-init; owner-conf-C; map:63211; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0078e260, 0x16, STATIC_INIT_DISPATCH, "score_computer#2")

// name:C; dyninit; see ledger; map:63212
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "score_computer#2")

// name:C; dyninit; see ledger; map:63213
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "score_computer#2")

// confidence:B; dyninit-dtor; owner-conf-C; map:63214; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0078e280, 0xa, STATIC_DTOR, "score_computer#2")

// confidence:A; dyninit-init; owner-conf-C; map:63215; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0078e290, 0x16, STATIC_INIT_DISPATCH, "score_computer#3")

// name:C; dyninit; see ledger; map:63216
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "score_computer#3")

// name:C; dyninit; see ledger; map:63217
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "score_computer#3")

// confidence:B; dyninit-dtor; owner-conf-C; map:63218; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0078e2b0, 0xa, STATIC_DTOR, "score_computer#3")

// confidence:B; align-order; retn,stable; map:33641
VA_CHT_1(0x0078e2c0, 0x721)
void calculate_scores(t_adventure_map const& arg_0, int arg_1, t_final_scores& arg_2)
{
    // Body unavailable.
}

// name:A; map symbol; map:63219
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
static void tally_player_armies(t_player& arg_0, t_final_scores& arg_1, t_map_size arg_2)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:63220
VA_CHT_1(0x0078e9f0, 0x223)
static void tally_army(
    t_creature_array const& arg_0,
    t_player& arg_1,
    t_map_size arg_2,
    t_final_scores& arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:63221
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
static int get_artifact_value(t_artifact const& arg_0, t_map_size arg_1)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:33642
VA_CHT_1(0x0078eca0, 0x1fa)
t_creature_type get_rank_creature(int arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:63222; name:B (dyninit; see ledger)
VA_CHT_1(0x0078ef00, 0x20)
// score_computer$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:A; dyninit-tinit; owner-conf-B; map:63224; name:B (dyninit; see ledger)
VA_CHT_1(0x0078f120, 0x5c)
// score_computer$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:63225
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// score_computer$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:63226
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// score_computer$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:63227
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// score_computer$tatexit4
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-band; retn,stable; map:33643
VA_CHT_1(0x0078fb50, 0x14)
int t_player::get_battle_score() const
{
    // Body unavailable.
}

// name:A; map symbol; map:33644
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
unsigned int t_player::get_battles_won() const
{
    // Body unavailable.
}

// name:A; map symbol; map:33645
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_player::get_quests_completed_count() const
{
    // Body unavailable.
}

// name:A; map symbol; map:33650
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_ownable_garrisonable_adv_object* t_counted_ptr<t_ownable_garrisonable_adv_object>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:33651
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_sanctuary* t_counted_ptr<t_sanctuary>::get() const
{
    // Body unavailable.
}

namespace {

// confidence:C; align-band; retn,stable; map:33658
VA_CHT_1(0x0078eea0, 0x56)
bool t_compare_creature_values::operator()(t_creature_type arg_0, t_creature_type arg_1) const
{
    // Body unavailable.
}

} // anonymous namespace

// === .rdata (1 symbols) ===

// name:A; map symbol; map:45274
DATA_CHT_1(UNACCOUNTED)
// __real@4@4002c000000000000000

// === .data (1 symbols) ===

// name:A; map symbol; map:59081
DATA_CHT_1(UNACCOUNTED)
// int*k_map_difficulty_score_percentages
