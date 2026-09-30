// music.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\music.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 14/26 (A:3 B:2 C:9); unaccounted 12; skipped std 22.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (25 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:64194; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0072ad70, 0x29, STATIC_INIT_DISPATCH, "music#1")

// name:C; dyninit; see ledger; map:64195
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "music#1")

// name:C; dyninit; see ledger; map:64196
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "music#1")

// confidence:B; dyninit-dtor; owner-conf-C; map:64197; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0072ada0, 0x43, STATIC_DTOR, "music#1")

// confidence:A; dyninit-init; owner-conf-C; map:64198; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0072adf0, 0x16, STATIC_INIT_DISPATCH, "music#2")

// name:C; dyninit; see ledger; map:64199
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "music#2")

// name:C; dyninit; see ledger; map:64200
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "music#2")

// confidence:B; dyninit-dtor; owner-conf-C; map:64201; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0072ae10, 0xa, STATIC_DTOR, "music#2")

// confidence:C; align-order; retn,stable; map:30378
VA_CHT_1(0x0072ae20, 0x6f)
t_sound_cache get_music_playing()
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:30379
VA_CHT_1(0x0072aeb0, 0x23)
t_counted_ptr<t_playing_sound> get_music_playing_pointer()
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:30380
VA_CHT_1(0x0072aee0, 0x6)
int get_music_volume()
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:30381
VA_CHT_1(0x0072af50, 0x136)
void set_music_volume(int arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:30382
VA_CHT_1(0x0072b090, 0x282)
void play_sound(t_sound& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:30383
VA_CHT_1(0x0072b320, 0x75)
void clear_music_cache()
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:30384
VA_CHT_1(0x0072b3a0, 0x434)
void play_music(t_sound_cache const& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:30385
VA_CHT_1(0x0072b7e0, 0x14)
void stop_music()
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:30386
VA_CHT_1(0x0072bb00, 0x2b)
void set_music(t_terrain_type arg_0)
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:64202
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// set_music$sdtor
// Function body not reconstructed; signature retained as a comment.

// confidence:A; dyninit-tinit; owner-conf-B; map:64203; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0072bb30, 0x20, STATIC_INIT_DISPATCH, music)

namespace {

// name:A; map symbol; map:30387
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_sound_pair::~t_sound_pair()
{
    // Body unavailable.
}

// name:A; map symbol; map:30388
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_sound_pair::t_sound_pair()
{
    // Body unavailable.
}

// name:A; map symbol; map:30389
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_sound_pair& t_sound_pair::operator=(t_sound_pair const& arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:30406
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_abstract_cache<t_sound>::operator==(t_abstract_cache<t_sound> const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:30412
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_sound_pair)

namespace {

// name:A; map symbol; map:30413
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_sound_pair::t_sound_pair(t_sound_pair const& arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// === .bss (1 symbols) ===

namespace {

// name:A; map symbol; map:60306
DATA_CHT_1(UNACCOUNTED)
t_sound_pair g_playing_music; // Initial value unavailable.

} // anonymous namespace
