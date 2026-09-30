// bitmap_pool.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\bitmap_pool.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 11/22 (A:2 B:4 C:5); unaccounted 11; skipped std 24.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (22 symbols) ===

// confidence:C; align-order; retn,stable; map:18238
VA_CHT_1(0x0057a0c0, 0x26)
t_bitmap_pool::t_bitmap_pool()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:18239
VA_CHT_1(0x0057a0f0, 0x29d)
t_bitmap_pool::t_bitmap_pool(
    t_bitmap_group_cache const* arg_0,
    t_char_ptr_pair const* arg_1,
    t_char_ptr_pair const* arg_2
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:18240
VA_CHT_1(0x0057a680, 0x37e)
t_bitmap_pool::t_bitmap_pool(
    t_bitmap_group_cache const* arg_0,
    t_string_pair const* arg_1,
    t_string_pair const* arg_2
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:18241
VA_CHT_1(0x0057aa00, 0x183)
int t_bitmap_pool::find(std::string const& arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:18242
VA_CHT_1(0x0057ac80, 0x67)
t_cached_ptr<t_bitmap_layer> t_bitmap_pool::get(int arg_0) const
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:68949; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0057b1b0, 0x20, STATIC_INIT_DISPATCH, bitmap_pool)

// confidence:A; align-band; retn,stable,vptr; map:18243
VA_CHT_1(0x00692250, 0xa0)
t_bitmap_layer_cache::t_bitmap_layer_cache(
    t_abstract_cache<t_bitmap_group> const& arg_0,
    std::string const& arg_1
)
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:18244
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_sort::t_sort(t_bitmap_pool const& arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:18245
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::string t_bitmap_layer_cache::get_name() const
{
    // Body unavailable.
}

// name:A; map symbol; map:18246
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::string t_bitmap_layer_cache_data::get_name() const
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:18247
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_find::t_find(t_bitmap_pool const& arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:18256
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_cache<t_bitmap_layer>::t_abstract_cache<t_bitmap_layer>(
    t_abstract_cache_data<t_bitmap_layer>* arg_0
)
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:18257
VA_CHT_1(0x0057a390, 0x14d)
t_cached_ptr<t_bitmap_layer> t_abstract_cache<t_bitmap_layer>::get(t_progress_handler* arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:18258
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_abstract_cache<t_bitmap_layer>::set(t_abstract_cache_data<t_bitmap_layer>* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:18263
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_cache_data<t_bitmap_layer>>::t_counted_ptr<t_abstract_cache_data<t_bitmap_layer>>(
    t_abstract_cache_data<t_bitmap_layer>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:18264
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_cache_data<t_bitmap_layer>>& t_counted_ptr<t_abstract_cache_data<t_bitmap_layer>>::operator=(
    t_abstract_cache_data<t_bitmap_layer>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:18265
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_cache_data<t_bitmap_layer>* t_counted_ptr<t_abstract_cache_data<t_bitmap_layer>>::operator t_abstract_cache_data<t_bitmap_layer>*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:18266
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_cache_data<t_bitmap_layer>* t_counted_ptr<t_abstract_cache_data<t_bitmap_layer>>::operator->(

) const
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:18267
VA_CHT_1(0x0057b460, 0x5f)
t_cached_ptr<t_bitmap_layer>::t_cached_ptr<t_bitmap_layer>(
    t_bitmap_layer* arg_0,
    t_abstract_cache_base* arg_1
)
{
    // Body unavailable.
}

namespace {

// confidence:C; align-band; retn,stable; map:18271
VA_CHT_1(0x0057b3f0, 0x6d)
bool t_find::operator()(int arg_0, std::string const& arg_1) const
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:18272
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_layer_cache t_bitmap_pool::get_cache(int arg_0) const
{
    // Body unavailable.
}

namespace {

// confidence:C; align-band; retn,stable; map:18276
VA_CHT_1(0x0057b330, 0xb3)
bool t_sort::operator()(int arg_0, int arg_1) const
{
    // Body unavailable.
}

} // anonymous namespace
