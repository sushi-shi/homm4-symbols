// adventure_sounds.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\adventure_sounds.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 52/112 (A:21 B:6 C:25); unaccounted 60; skipped std 103.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (96 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:69767; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x004ecf70, 0x15, STATIC_INIT_DISPATCH, "adventure_sounds#1")

// name:C; dyninit; see ledger; map:69768
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adventure_sounds#1")

// confidence:A; dyninit-init; owner-conf-C; map:69769; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x004ecf90, 0x1b2, STATIC_INIT_DISPATCH, "adventure_sounds#2")

// name:C; dyninit; see ledger; map:69770
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adventure_sounds#2")

// name:C; dyninit; see ledger; map:69771
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "adventure_sounds#2")

// confidence:B; dyninit-dtor; owner-conf-C; map:69772; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x004ed150, 0x14, STATIC_DTOR, "adventure_sounds#2")

// confidence:A; dyninit-init; owner-conf-C; map:69773; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x004ed170, 0x308, STATIC_INIT_DISPATCH, "adventure_sounds#3")

// name:C; dyninit; see ledger; map:69774
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adventure_sounds#3")

// name:C; dyninit; see ledger; map:69775
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "adventure_sounds#3")

// confidence:B; dyninit-dtor; owner-conf-C; map:69776; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x004ed480, 0x14, STATIC_DTOR, "adventure_sounds#3")

// confidence:A; dyninit-init; owner-conf-C; map:69777; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x004ed4a0, 0x29, STATIC_INIT_DISPATCH, "adventure_sounds#4")

// name:C; dyninit; see ledger; map:69778
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adventure_sounds#4")

// name:C; dyninit; see ledger; map:69779
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "adventure_sounds#4")

// confidence:B; dyninit-dtor; owner-conf-C; map:69780; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x004ed4d0, 0x42, STATIC_DTOR, "adventure_sounds#4")

namespace {

// confidence:C; align-order; stable; map:12242
VA_CHT_1(0x004ed520, 0x22d)
void play_sounds_for_nearby_adventure_objects(t_level_map_point_2d arg_0, t_adventure_map const& arg_1)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:C; align-order; retn,stable; map:12243
VA_CHT_1(0x004ed750, 0x1c4)
t_cached_ptr<t_sound> get_adventure_sound(t_adventure_sound_type arg_0)
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:69781
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// get_adventure_sound$sdtor
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; retn,stable; map:12244
VA_CHT_1(0x004ed970, 0x1c4)
t_cached_ptr<t_sound> get_dialog_sound(t_dialog_sound_type arg_0)
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:69782
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// get_dialog_sound$sdtor
// Function body not reconstructed; signature retained as a comment.

namespace {

// confidence:B; align-order; retn,stable; map:12245
VA_CHT_1(0x004edb60, 0x18f)
t_cached_ptr<t_sound> t_major_type_sounds::get_major_sound(
    t_qualified_adv_object_type const& arg_0,
    t_sound_cache& arg_1,
    t_sound_cache const& arg_2
)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:C; align-order; retn,stable; map:69783
VA_CHT_1(0x004edcf0, 0x156)
static std::string get_major_keyword(t_qualified_adv_object_type const& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:69784
VA_CHT_1(0x004ede50, 0x136)
static std::string get_adv_keyword(t_qualified_adv_object_type const& arg_0)
{
    // Body unavailable.
}

namespace {

// confidence:B; align-order; retn,stable; map:12246
VA_CHT_1(0x004edf90, 0x293)
t_cached_ptr<t_sound> t_major_type_sounds::get_sound(
    t_qualified_adv_object_type const& arg_0,
    t_adv_object_type_properties const& arg_1,
    t_sound_cache const& arg_2
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:12247
VA_CHT_1(0x004ee230, 0x297)
t_cached_ptr<t_sound> t_adv_object_sound::get_sound(t_qualified_adv_object_type const& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:12248
VA_CHT_1(0x004ee4d0, 0x8a)
t_adv_object_sounds::t_adv_object_sounds()
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:C; align-order; retn,stable; map:12249
VA_CHT_1(0x004ee7c0, 0xc2)
t_cached_ptr<t_sound> get_adventure_sound(t_qualified_adv_object_type const& arg_0)
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:69785
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// get_adventure_sound$sdtor
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; retn,stable; map:12250
VA_CHT_1(0x004ee890, 0x1eb)
void handle_adventure_sound_minimization(bool arg_0)
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:69786
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// handle_adventure_sound_minimization$sdtor
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; retn,stable; map:12251
VA_CHT_1(0x004eeab0, 0x8d)
void stop_owner_sound(t_adventure_object const* arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:12252
VA_CHT_1(0x004eeb40, 0x22f)
t_counted_ptr<t_managed_sound> play_adventure_sound(
    t_adventure_object const& arg_0,
    t_cached_ptr<t_sound> arg_1,
    t_level_map_point_2d const& arg_2,
    int arg_3,
    bool arg_4
)
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:12253
VA_CHT_1(0x004eedf0, 0x13b)
int update_sound(t_level_map_point_2d arg_0, t_managed_sound* arg_1, bool arg_2)
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:12254
VA_CHT_1(0x004ef110, 0x10d)
void update_active_sounds(t_level_map_point_2d arg_0, t_adventure_map const& arg_1)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:12255
VA_CHT_1(0x004f0040, 0xc7)
void close_active_sounds()
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:69787; name:B (dyninit; see ledger)
VA_CHT_1(0x004f0950, 0x20)
// adventure_sounds$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:A; dyninit-tinit; owner-conf-B; map:69789; name:B (dyninit; see ledger)
VA_CHT_1(0x004f0970, 0x5c)
// adventure_sounds$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:69790
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adventure_sounds$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:69791
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adventure_sounds$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:69792
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adventure_sounds$tatexit4
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-band; retn,stable; map:12256
VA_CHT_1(0x004ef700, 0x21)
t_counted_ptr<t_managed_sound>::~t_counted_ptr<t_managed_sound>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:12257
VA_CHT_1(0x0072ae90, 0x11)
t_sound_cache::t_sound_cache()
{
    // Body unavailable.
}

// name:A; map symbol; map:12258
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_sound_cache)

// name:A; map symbol; map:12259
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_sound_cache)

// confidence:C; align-band; retn,stable; map:12260
VA_CHT_1(0x004eea80, 0x1d)
t_sound_cache& t_sound_cache::operator=(t_sound_cache const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:12261
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_cache<t_sound>& t_abstract_cache<t_sound>::operator=(t_abstract_cache<t_sound> const& arg_0)
{
    // Body unavailable.
}

namespace {

// confidence:C; align-band; retn,stable; map:12262
VA_CHT_1(0x004eed90, 0x51)
t_major_type_sounds::t_major_type_sounds()
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:12263
VA_CHT_1(0x004ef2b0, 0x43)
t_major_type_sounds::~t_major_type_sounds()
{
    // Body unavailable.
}

// name:A; map symbol; map:12264
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_object_sound::t_adv_object_sound()
{
    // Body unavailable.
}

// name:A; map symbol; map:12265
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_object_sound::~t_adv_object_sound()
{
    // Body unavailable.
}

// name:A; map symbol; map:12266
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cached_ptr<t_sound> t_adv_object_sounds::get_sound(t_qualified_adv_object_type const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:12267
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_object_sounds::~t_adv_object_sounds()
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:C; align-band; retn,stable; map:12268
VA_CHT_1(0x004efe50, 0xc)
void t_managed_sound::set_former_volume(int arg_0)
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:12269
VA_CHT_1(0x004f0280, 0x17)
int t_managed_sound::get_former_volume() const
{
    // Body unavailable.
}

// name:A; map symbol; map:12270
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_playing_sound> t_managed_sound::get_sound_ptr()
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:12271
VA_CHT_1(0x004ed950, 0x14)
t_adventure_object const& t_managed_sound::get_owner() const
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:12272
VA_CHT_1(0x004edb40, 0x14)
bool t_playing_sound::is_playing() const
{
    // Body unavailable.
}

// name:A; map symbol; map:12273
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_managed_sound::t_managed_sound(
    t_adventure_object const& arg_0,
    t_level_map_point_2d const& arg_1,
    t_counted_ptr<t_playing_sound> arg_2
)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:12274
VA_CHT_1_COMPGEN(0x004eed70, 0x1e, VECTOR_DELETING_DTOR, t_managed_sound)

// name:A; map symbol; map:12275
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_managed_sound)

// name:A; map symbol; map:12276
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_managed_sound::~t_managed_sound()
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:12277
VA_CHT_1(0x004ed920, 0x10)
t_level_map_point_2d const& t_managed_sound::get_position() const
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:12278
VA_CHT_1(0x004ef220, 0x89)
t_cached_ptr<t_sound>::t_cached_ptr<t_sound>(t_cached_ptr<t_sound> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:12345
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_cache_data<t_sound>>& t_counted_ptr<t_abstract_cache_data<t_sound>>::operator=(
    t_counted_ptr<t_abstract_cache_data<t_sound>> const& arg_0
)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:12346
VA_CHT_1(0x004efe60, 0x19)
t_abstract_cache<t_sound>::t_abstract_cache<t_sound>(t_abstract_cache_data<t_sound>* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:12347
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_abstract_cache<t_sound>::is_valid() const
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:12348
VA_CHT_1(0x004efe80, 0x195)
t_cached_ptr<t_sound> t_abstract_cache<t_sound>::get(t_progress_handler* arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:12349
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_playing_sound>::t_counted_ptr<t_playing_sound>(t_counted_ptr<t_playing_sound> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:12350
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_playing_sound>::t_counted_ptr<t_playing_sound>()
{
    // Body unavailable.
}

// name:A; map symbol; map:12351
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_playing_sound>& t_counted_ptr<t_playing_sound>::operator=(
    t_counted_ptr<t_playing_sound> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:12352
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_playing_sound* t_counted_ptr<t_playing_sound>::operator t_playing_sound*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:12353
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_playing_sound* t_counted_ptr<t_playing_sound>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:12354
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cached_ptr<t_sound>::t_cached_ptr<t_sound>()
{
    // Body unavailable.
}

// name:A; map symbol; map:12355
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_sound* t_cached_ptr<t_sound>::operator t_sound*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:12356
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cached_ptr<t_sound>& t_cached_ptr<t_sound>::operator=(t_cached_ptr<t_sound> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:12357
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_managed_sound>::t_counted_ptr<t_managed_sound>(t_counted_ptr<t_managed_sound> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:12358
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_managed_sound>::t_counted_ptr<t_managed_sound>(t_managed_sound* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:12359
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_managed_sound* t_counted_ptr<t_managed_sound>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:12360
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_managed_sound* t_counted_ptr<t_managed_sound>::operator t_managed_sound*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:12361
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_sound_type enum_incr(t_adventure_sound_type& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:12362
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_dialog_sound_type enum_incr(t_dialog_sound_type& arg_0)
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:12387
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_major_type_sounds& t_major_type_sounds::operator=(t_major_type_sounds const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:12388
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_object_sound& t_adv_object_sound::operator=(t_adv_object_sound const& arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:C; align-band; retn,stable; map:12389
VA_CHT_1_COMPGEN(0x004f02a0, 0x1e, SCALAR_DELETING_DTOR, "t_counted_ptr<t_managed_sound>")

// name:A; map symbol; map:12390
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_major_type_sounds)

// name:A; map symbol; map:12391
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_adv_object_sound)

// name:A; map symbol; map:12392
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_sound_cache::t_sound_cache(t_sound_cache const& arg_0)
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:12393
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_major_type_sounds::t_major_type_sounds(t_major_type_sounds const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:12394
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_object_sound::t_adv_object_sound(t_adv_object_sound const& arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:12395
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_cache<t_sound>::t_abstract_cache<t_sound>(t_abstract_cache<t_sound> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:12406
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_cache_data<t_sound>>::t_counted_ptr<t_abstract_cache_data<t_sound>>(
    t_counted_ptr<t_abstract_cache_data<t_sound>> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:12407
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_cache_data<t_sound>>::t_counted_ptr<t_abstract_cache_data<t_sound>>(
    t_abstract_cache_data<t_sound>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:12408
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_cache_data<t_sound>* t_counted_ptr<t_abstract_cache_data<t_sound>>::operator t_abstract_cache_data<t_sound>*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:12409
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_cache_data<t_sound>* t_counted_ptr<t_abstract_cache_data<t_sound>>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:12410
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cached_ptr<t_sound>::t_cached_ptr<t_sound>(t_sound* arg_0, t_abstract_cache_base* arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:12411
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_cached_ptr<t_sound>::assign(t_sound* arg_0, t_cached_ptr_base const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:12412
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_managed_sound>& t_counted_ptr<t_managed_sound>::operator=(
    t_counted_ptr<t_managed_sound> const& arg_0
)
{
    // Body unavailable.
}

// === .rdata (3 symbols) ===

// confidence:A; rtti-name; map:43317
DATA_CHT_1_COMPGEN(0x008d445c, "const t_sound_cache::`vftable'")

// confidence:A; rtti-name; map:43318
DATA_CHT_1_COMPGEN(0x008d4464, "const t_managed_sound::`vftable'")

// name:A; map symbol; map:43319
DATA_CHT_1(UNACCOUNTED)
// __real@4@40069000000000000000

// === .rdata$r (8 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_sound_cache@@;bcd=4fc420;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49099
DATA_CHT_1_COMPGEN(0x008fc420, "t_sound_cache::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_sound_cache@@;vft=4d445c;col=4fc454;td=58ef6c;chd=4fc444;offset=0;cdOffset=0;validated-hierarchy; map:49100
DATA_CHT_1_COMPGEN(0x008fc438, "t_sound_cache::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_sound_cache@@;vft=4d445c;col=4fc454;td=58ef6c;chd=4fc444;offset=0;cdOffset=0;validated-hierarchy; map:49101
DATA_CHT_1_COMPGEN(0x008fc444, "t_sound_cache::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_sound_cache@@;vft=4d445c;col=4fc454;td=58ef6c;chd=4fc444;offset=0;cdOffset=0;validated-hierarchy; map:49102
DATA_CHT_1_COMPGEN(0x008fc454, "const t_sound_cache::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_managed_sound@@;bcd=4fc468;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49103
DATA_CHT_1_COMPGEN(0x008fc468, "t_managed_sound::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_managed_sound@@;vft=4d4464;col=4fc49c;td=58ef94;chd=4fc48c;offset=0;cdOffset=0;validated-hierarchy; map:49104
DATA_CHT_1_COMPGEN(0x008fc480, "t_managed_sound::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_managed_sound@@;vft=4d4464;col=4fc49c;td=58ef94;chd=4fc48c;offset=0;cdOffset=0;validated-hierarchy; map:49105
DATA_CHT_1_COMPGEN(0x008fc48c, "t_managed_sound::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_managed_sound@@;vft=4d4464;col=4fc49c;td=58ef94;chd=4fc48c;offset=0;cdOffset=0;validated-hierarchy; map:49106
DATA_CHT_1_COMPGEN(0x008fc49c, "const t_managed_sound::`RTTI Complete Object Locator'")

// === .data (2 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_sound_cache@@;td=58ef6c;validated-header; map:57771
DATA_CHT_1_COMPGEN(0x0098ef6c, "t_sound_cache `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_managed_sound@@;td=58ef94;validated-header; map:57772
DATA_CHT_1_COMPGEN(0x0098ef94, "t_managed_sound `RTTI Type Descriptor'")

// === .bss (3 symbols) ===

namespace {

// name:A; map symbol; map:60029
DATA_CHT_1(UNACCOUNTED)
std::vector<t_counted_ptr<t_managed_sound>, std::allocator<t_counted_ptr<t_managed_sound>>> active_sounds; // Initial value unavailable.

} // anonymous namespace

// name:A; map symbol; map:60030
DATA_CHT_1(UNACCOUNTED)
// std::string*dialog_sounds

// name:A; map symbol; map:60031
DATA_CHT_1(UNACCOUNTED)
// std::string*adventure_sounds
