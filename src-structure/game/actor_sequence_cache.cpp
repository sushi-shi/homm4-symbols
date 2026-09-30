// actor_sequence_cache.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\actor_sequence_cache.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 102/188 (A:60 B:4 C:0); unaccounted 86; skipped std 137.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (114 symbols) ===

// name:C; dyninit; see ledger; map:71319
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_INIT_DISPATCH, "actor_sequence_cache#1")

// name:C; dyninit; see ledger; map:71320
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "actor_sequence_cache#1")

namespace {

// confidence:D; align-order; retn,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:2777
VA_CHT_1(0x0041d600, 0x9b)
t_sequence_cache_data::t_sequence_cache_data(std::string const& arg_0, t_screen_point const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:2778
VA_CHT_1(0x0041d790, 0x9c)
t_actor_sequence* t_sequence_cache_data::do_read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_progress_handler* arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:2779
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_sequence_cache::t_sequence_cache(std::string const& arg_0, t_screen_point const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:2780
VA_CHT_1(0x0041d8c0, 0x24)
int compare_sequence_cache_key(t_sequence_cache_key const& arg_0, t_sequence_cache_key const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:2781
VA_CHT_1(0x0041d8f0, 0xa9)
t_scaled_sequence_cache_data::t_scaled_sequence_cache_data(
    std::string const& arg_0,
    t_screen_point const& arg_1,
    double arg_2
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:2782
VA_CHT_1(0x0041da90, 0xb7)
t_actor_sequence* t_scaled_sequence_cache_data::do_read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_progress_handler* arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; RETN!,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:2783
VA_CHT_1(0x0041e160, 0x240)
t_scaled_sequence_cache::t_scaled_sequence_cache(
    std::string const& arg_0,
    t_screen_point const& arg_1,
    double arg_2
)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:2784
VA_CHT_1(0x0041e4c0, 0x90)
actor_sequence_cache_details::t_initializer::t_initializer()
{
    // Body unavailable.
}

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:2785
VA_CHT_1(0x0041e550, 0x90)
t_abstract_cache<t_actor_sequence>& get_actor_sequence_cache(
    std::string const& arg_0,
    t_screen_point const& arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:2786
VA_CHT_1(0x0041e690, 0xa8)
t_abstract_cache<t_actor_sequence>& get_scaled_actor_sequence_cache(
    std::string const& arg_0,
    t_screen_point const& arg_1,
    double arg_2
)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:71321; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00420af0, 0x20, STATIC_INIT_DISPATCH, actor_sequence_cache)

// confidence:D; align-band; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:2787
VA_CHT_1_COMPGEN(0x0041d6a0, 0x1e, VECTOR_DELETING_DTOR, t_sequence_cache_data)

// name:A; map symbol; map:2788
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_sequence_cache_data)

namespace {

// name:A; map symbol; map:2789
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_sequence_cache_data::~t_sequence_cache_data()
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:2790
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_conversion_cache_data<t_actor_sequence_24, t_actor_sequence>::~t_conversion_cache_data<t_actor_sequence_24, t_actor_sequence>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:2791
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool read(std::basic_streambuf<char, std::char_traits<char>>& arg_0, t_actor_sequence_24& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:2792
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_actor_sequence::t_actor_sequence(t_actor_sequence_24 const& arg_0, t_screen_point const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:2793
VA_CHT_1_COMPGEN(0x0041d830, 0x1e, VECTOR_DELETING_DTOR, t_actor_sequence)

// name:A; map symbol; map:2794
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_actor_sequence)

// name:A; map symbol; map:2795
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_actor_sequence::~t_actor_sequence()
{
    // Body unavailable.
}

// name:A; map symbol; map:2796
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_image_sequence::~t_image_sequence()
{
    // Body unavailable.
}

// name:A; map symbol; map:2797
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_image_sequence_base<t_bitmap_group>::~t_image_sequence_base<t_bitmap_group>()
{
    // Body unavailable.
}

// name:A; map symbol; map:2798
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_sequence_cache)

// name:A; map symbol; map:2799
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_sequence_cache)

namespace {

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:2800
VA_CHT_1(0x0041ddf0, 0x24b)
t_sequence_cache::~t_sequence_cache()
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:2801
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_conversion_cache<t_actor_sequence_24, t_actor_sequence>::~t_conversion_cache<t_actor_sequence_24, t_actor_sequence>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:2802
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_resource_cache<t_actor_sequence>::~t_resource_cache<t_actor_sequence>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:2803
VA_CHT_1_COMPGEN(0x0041d9a0, 0x1e, VECTOR_DELETING_DTOR, t_scaled_sequence_cache_data)

// name:A; map symbol; map:2804
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_scaled_sequence_cache_data)

namespace {

// name:A; map symbol; map:2805
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_scaled_sequence_cache_data::~t_scaled_sequence_cache_data()
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:2806
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_actor_sequence::t_actor_sequence(
    t_actor_sequence_24 const& arg_0,
    double arg_1,
    t_screen_point const& arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:2807
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_scaled_sequence_cache)

// name:A; map symbol; map:2808
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_scaled_sequence_cache)

namespace {

// name:A; map symbol; map:2809
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_scaled_sequence_cache::~t_scaled_sequence_cache()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:2810
VA_CHT_1(0x0041d850, 0x4c)
std::map<t_sequence_cache_key, t_shared_ptr<t_sequence_cache>, t_sequence_cache_key_less, std::allocator<t_shared_ptr<t_sequence_cache>>>& get_sequence_cache_ptr_map(

)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; dyninit; see ledger; map:2811
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, get_sequence_cache_ptr_map::sequence_cache_ptr_map)

namespace {

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:2813
VA_CHT_1(0x0041ff50, 0x51)
std::map<t_scaled_sequence_cache_key, t_scaled_sequence_cache_ptr, t_scaled_sequence_cache_key_less, std::allocator<t_scaled_sequence_cache_ptr>>& get_scaled_sequence_cache_ptr_map(

)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; dyninit; see ledger; map:2814
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, get_scaled_sequence_cache_ptr_map::scaled_sequence_cache_ptr_map)

namespace {

// name:A; map symbol; map:2816
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_sequence_cache_key::t_sequence_cache_key(std::string const& arg_0, t_screen_point const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:2817
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_sequence_cache_key::~t_sequence_cache_key()
{
    // Body unavailable.
}

// name:A; map symbol; map:2820
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_scaled_sequence_cache_key::t_scaled_sequence_cache_key(
    std::string const& arg_0,
    t_screen_point const& arg_1,
    double arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:2821
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_scaled_sequence_cache_ptr::t_scaled_sequence_cache_ptr(t_scaled_sequence_cache* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:2822
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_scaled_sequence_cache_key::~t_scaled_sequence_cache_key()
{
    // Body unavailable.
}

// name:A; map symbol; map:2823
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_scaled_sequence_cache_ptr::~t_scaled_sequence_cache_ptr()
{
    // Body unavailable.
}

// name:A; map symbol; map:2844
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_sequence_cache_key_less::operator()(
    t_sequence_cache_key const& arg_0,
    t_sequence_cache_key const& arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:2853
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_scaled_sequence_cache_key_less::operator()(
    t_scaled_sequence_cache_key const& arg_0,
    t_scaled_sequence_cache_key const& arg_1
) const
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:2932
VA_CHT_1(0x00420190, 0xeb)
void t_image_sequence_base<t_bitmap_group>::delete_layer(unsigned long arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:2935
VA_CHT_1(0x00420280, 0x11)
t_bitmap_layer const& t_image_sequence_base<t_bitmap_group>::get_layer_base(unsigned long arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:2936
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_layer const& t_bitmap_group::operator[](int arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:2937
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_layer& t_shared_ptr<t_bitmap_layer>::operator*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:2938
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_layer& t_image_sequence_base<t_bitmap_group>::get_layer_base(unsigned long arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:2939
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_layer& t_bitmap_group::operator[](int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:2940
VA_CHT_1(0x004202a0, 0x20)
unsigned long t_image_sequence_base<t_bitmap_group>::get_layer_count() const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:2941
VA_CHT_1(0x0041d6c0, 0xcb)
t_abstract_resource_cache_data<t_actor_sequence>::~t_abstract_resource_cache_data<t_actor_sequence>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:2942
VA_CHT_1(0x004202c0, 0x49)
t_abstract_cache_data<t_actor_sequence>::~t_abstract_cache_data<t_actor_sequence>()
{
    // Body unavailable.
}

// name:A; map symbol; map:2943
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_abstract_resource_cache_data<t_actor_sequence>::get_load_cost()
{
    // Body unavailable.
}

// name:A; map symbol; map:2944
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_abstract_resource_cache_data<t_actor_sequence>::add_reference()
{
    // Body unavailable.
}

// name:A; map symbol; map:2945
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_actor_sequence* t_abstract_resource_cache_data<t_actor_sequence>::do_get(t_progress_handler* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:2946
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_abstract_resource_cache_data<t_actor_sequence>::release_memory()
{
    // Body unavailable.
}

// name:A; map symbol; map:2947
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_abstract_resource_cache_data<t_actor_sequence>::remove_reference()
{
    // Body unavailable.
}

// name:A; map symbol; map:2948
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_abstract_resource_cache_data<t_actor_sequence>::read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_progress_handler* arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:2949
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_conversion_cache_data<t_actor_sequence_24, t_actor_sequence>::t_conversion_cache_data<t_actor_sequence_24, t_actor_sequence>(
    std::string const& arg_0
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:2950
VA_CHT_1(0x00420310, 0x6)
char const* t_conversion_cache_data<t_actor_sequence_24, t_actor_sequence>::get_prefix() const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:2951
VA_CHT_1(0x00420320, 0xb2)
t_actor_sequence* t_conversion_cache_data<t_actor_sequence_24, t_actor_sequence>::do_read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_progress_handler* arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:2952
VA_CHT_1(0x004203e0, 0x6c)
t_conversion_cache<t_actor_sequence_24, t_actor_sequence>::t_conversion_cache<t_actor_sequence_24, t_actor_sequence>(
    t_conversion_cache_data<t_actor_sequence_24, t_actor_sequence>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:2953
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_shared_ptr<t_scaled_sequence_cache>::t_shared_ptr<t_scaled_sequence_cache>(t_scaled_sequence_cache* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:2954
VA_CHT_1(0x00420520, 0x83)
t_shared_ptr<t_scaled_sequence_cache>::~t_shared_ptr<t_scaled_sequence_cache>()
{
    // Body unavailable.
}

// name:A; map symbol; map:2955
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_scaled_sequence_cache& t_shared_ptr<t_scaled_sequence_cache>::operator*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:2956
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_shared_ptr<t_sequence_cache>::t_shared_ptr<t_sequence_cache>(t_sequence_cache* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:2957
VA_CHT_1(0x004205b0, 0x8f)
t_shared_ptr<t_sequence_cache>::~t_shared_ptr<t_sequence_cache>()
{
    // Body unavailable.
}

// name:A; map symbol; map:2958
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_sequence_cache& t_shared_ptr<t_sequence_cache>::operator*() const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:2969
VA_CHT_1_COMPGEN(0x00420640, 0x1e, VECTOR_DELETING_DTOR, "t_abstract_cache_data<t_actor_sequence>")

// name:A; map symbol; map:2970
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_abstract_cache_data<t_actor_sequence>")

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:2971
VA_CHT_1_COMPGEN(0x00420660, 0x1e, SCALAR_DELETING_DTOR, "t_abstract_resource_cache_data<t_actor_sequence>")

// name:A; map symbol; map:2972
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_abstract_resource_cache_data<t_actor_sequence>")

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:2973
VA_CHT_1_COMPGEN(0x00420750, 0x1e, VECTOR_DELETING_DTOR, "t_conversion_cache_data<t_actor_sequence_24, t_actor_sequence>")

// name:A; map symbol; map:2974
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_conversion_cache_data<t_actor_sequence_24, t_actor_sequence>")

// confidence:D; align-band; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:2975
VA_CHT_1_COMPGEN(0x0041d8a0, 0x1e, VECTOR_DELETING_DTOR, "t_conversion_cache<t_actor_sequence_24, t_actor_sequence>")

// name:A; map symbol; map:2976
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_conversion_cache<t_actor_sequence_24, t_actor_sequence>")

namespace {

// name:A; map symbol; map:2977
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_sequence_cache_key::t_sequence_cache_key(t_sequence_cache_key const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:2978
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_scaled_sequence_cache_key::t_scaled_sequence_cache_key(t_scaled_sequence_cache_key const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:2979
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_scaled_sequence_cache_ptr::t_scaled_sequence_cache_ptr(t_scaled_sequence_cache_ptr const& arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:2989
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_shared_ptr<t_bitmap_layer>")

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:2990
VA_CHT_1(0x0041e040, 0x90)
t_shared_ptr<t_bitmap_layer>::~t_shared_ptr<t_bitmap_layer>()
{
    // Body unavailable.
}

// name:A; map symbol; map:2993
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_shared_ptr<t_bitmap_layer>::set(t_bitmap_layer* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:2994
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_resource_cache_data<t_actor_sequence>::t_abstract_resource_cache_data<t_actor_sequence>(
    std::string const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:2995
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_resource_cache<t_actor_sequence>::t_resource_cache<t_actor_sequence>()
{
    // Body unavailable.
}

// name:A; map symbol; map:2996
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_resource_cache<t_actor_sequence>::set(t_abstract_resource_cache_data<t_actor_sequence>* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:2997
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_shared_ptr<t_scaled_sequence_cache>::t_shared_ptr<t_scaled_sequence_cache>(
    t_shared_ptr<t_scaled_sequence_cache> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:2998
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_scaled_sequence_cache* t_shared_ptr<t_scaled_sequence_cache>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:2999
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_shared_ptr<t_scaled_sequence_cache>::set(t_scaled_sequence_cache* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:3000
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_shared_ptr<t_scaled_sequence_cache>::construct(t_scaled_sequence_cache* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:3001
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_shared_ptr<t_sequence_cache>::t_shared_ptr<t_sequence_cache>(t_shared_ptr<t_sequence_cache> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:3002
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_sequence_cache* t_shared_ptr<t_sequence_cache>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:3003
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_shared_ptr<t_sequence_cache>::set(t_sequence_cache* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:3004
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_shared_ptr<t_sequence_cache>::construct(t_sequence_cache* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:3006
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_shared_ptr<t_bitmap_layer>& t_shared_ptr<t_bitmap_layer>::operator=(
    t_shared_ptr<t_bitmap_layer> const& arg_0
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:3007
VA_CHT_1(0x0041d9c0, 0xcb)
t_abstract_cache_data<t_actor_sequence>::t_abstract_cache_data<t_actor_sequence>()
{
    // Body unavailable.
}

// name:A; map symbol; map:3008
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_resource_cache<t_actor_sequence>")

// name:A; map symbol; map:3009
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_resource_cache<t_actor_sequence>")

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3010
VA_CHT_1(0x0041ed60, 0xb8)
void t_shared_ptr<t_bitmap_layer>::assign(t_bitmap_layer* arg_0, t_shared_ptr_base const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3011
VA_CHT_1(0x0041fb20, 0x43)
void t_shared_ptr<t_bitmap_layer>::add_link(t_shared_ptr_base const& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:3012
VA_CHT_1(0x004287b0, 0x10)
t_abstract_cache<t_actor_sequence>::t_abstract_cache<t_actor_sequence>()
{
    // Body unavailable.
}

// name:A; map symbol; map:3013
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_abstract_cache<t_actor_sequence>::set(t_abstract_cache_data<t_actor_sequence>* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:3014
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_shared_ptr<t_scaled_sequence_cache>::add_link(t_shared_ptr_base const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:3015
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_shared_ptr<t_sequence_cache>::add_link(t_shared_ptr_base const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:3016
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_cache_data<t_actor_sequence>>::t_counted_ptr<t_abstract_cache_data<t_actor_sequence>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:3017
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_cache_data<t_actor_sequence>>& t_counted_ptr<t_abstract_cache_data<t_actor_sequence>>::operator=(
    t_abstract_cache_data<t_actor_sequence>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:3018
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_scaled_sequence_cache_data)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3019
VA_CHT_1_COMPGEN(0x00420b20, 0x8, VECTOR_DELETING_DTOR, t_sequence_cache_data)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3020
VA_CHT_1_COMPGEN(0x00420b30, 0x8, VECTOR_DELETING_DTOR, "t_conversion_cache_data<t_actor_sequence_24, t_actor_sequence>")

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3021
VA_CHT_1_COMPGEN(0x00420b40, 0x8, VECTOR_DELETING_DTOR, "t_abstract_resource_cache_data<t_actor_sequence>")

// === .rdata (14 symbols) ===

// confidence:A; rtti-name; map:42610
DATA_CHT_1_COMPGEN(0x008cc7b8, "const t_sequence_cache_data::`vftable'{for `t_abstract_resource_cache_base'}")

// confidence:B; rtti-order; map:42611
DATA_CHT_1_COMPGEN(0x008cc79c, "const t_sequence_cache_data::`vftable'{for `t_abstract_cache_data<t_actor_sequence>'}")

// confidence:A; rtti-name; map:42612
DATA_CHT_1_COMPGEN(0x008cc850, "const t_actor_sequence::`vftable'")

// confidence:A; rtti-name; map:42613
DATA_CHT_1_COMPGEN(0x008cc868, "const t_sequence_cache::`vftable'")

// confidence:A; rtti-name; map:42614
DATA_CHT_1_COMPGEN(0x008cc894, "const t_scaled_sequence_cache_data::`vftable'{for `t_abstract_resource_cache_base'}")

// confidence:B; rtti-order; map:42615
DATA_CHT_1_COMPGEN(0x008cc878, "const t_scaled_sequence_cache_data::`vftable'{for `t_abstract_cache_data<t_actor_sequence>'}")

// confidence:A; rtti-name; map:42616
DATA_CHT_1_COMPGEN(0x008cc8ac, "const t_scaled_sequence_cache::`vftable'")

// confidence:A; rtti-name; map:42617
DATA_CHT_1_COMPGEN(0x008cc81c, "const t_abstract_resource_cache_data<t_actor_sequence>::`vftable'{for `t_abstract_resource_cache_base'}")

// confidence:B; rtti-order; map:42618
DATA_CHT_1_COMPGEN(0x008cc834, "const t_abstract_resource_cache_data<t_actor_sequence>::`vftable'{for `t_abstract_cache_data<t_actor_sequence>'}")

// confidence:A; rtti-name; map:42619
DATA_CHT_1_COMPGEN(0x008cc804, "const t_abstract_cache_data<t_actor_sequence>::`vftable'")

// confidence:A; rtti-name; map:42620
DATA_CHT_1_COMPGEN(0x008cc7d0, "const t_conversion_cache_data<t_actor_sequence_24, t_actor_sequence>::`vftable'{for `t_abstract_resource_cache_base'}")

// confidence:B; rtti-order; map:42621
DATA_CHT_1_COMPGEN(0x008cc7e8, "const t_conversion_cache_data<t_actor_sequence_24, t_actor_sequence>::`vftable'{for `t_abstract_cache_data<t_actor_sequence>'}")

// confidence:A; rtti-name; map:42622
DATA_CHT_1_COMPGEN(0x008cc870, "const t_conversion_cache<t_actor_sequence_24, t_actor_sequence>::`vftable'")

// name:A; map symbol; map:42623
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_resource_cache<t_actor_sequence>::`vftable'")

// === .rdata$r (46 symbols) ===

// confidence:A; rtti-col-pointer; type-name=.?AVt_sequence_cache_data@?%C:\Work\game\actor_sequence_cache.cpp176834229@@;vft=4cc7b8;col=4f5140;td=585e10;chd=4f51e0;offset=16;cdOffset=0;validated-hierarchy; map:47587
DATA_CHT_1_COMPGEN(0x008f5140, "const t_sequence_cache_data::`RTTI Complete Object Locator'{for `t_abstract_resource_cache_base'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_cache_data@Vt_actor_sequence@@@@;bcd=4f5154;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47588
DATA_CHT_1_COMPGEN(0x008f5154, "t_abstract_cache_data<t_actor_sequence>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_resource_cache_data@Vt_actor_sequence@@@@;bcd=4f516c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47589
DATA_CHT_1_COMPGEN(0x008f516c, "t_abstract_resource_cache_data<t_actor_sequence>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_conversion_cache_data@Vt_actor_sequence_24@@Vt_actor_sequence@@@@;bcd=4f5184;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47590
DATA_CHT_1_COMPGEN(0x008f5184, "t_conversion_cache_data<t_actor_sequence_24, t_actor_sequence>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_sequence_cache_data@?%C:\Work\game\actor_sequence_cache.cpp176834229@@;bcd=4f519c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47591
DATA_CHT_1_COMPGEN(0x008f519c, "t_sequence_cache_data::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_sequence_cache_data@?%C:\Work\game\actor_sequence_cache.cpp176834229@@;vft=4cc7b8;col=4f5140;td=585e10;chd=4f51e0;offset=16;cdOffset=0;validated-hierarchy; map:47592
DATA_CHT_1_COMPGEN(0x008f51b4, "t_sequence_cache_data::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_sequence_cache_data@?%C:\Work\game\actor_sequence_cache.cpp176834229@@;vft=4cc7b8;col=4f5140;td=585e10;chd=4f51e0;offset=16;cdOffset=0;validated-hierarchy; map:47593
DATA_CHT_1_COMPGEN(0x008f51e0, "t_sequence_cache_data::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:47594
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_sequence_cache_data::`RTTI Complete Object Locator'{for `t_abstract_cache_data<t_actor_sequence>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_image_sequence_base@Vt_bitmap_group@@@@;bcd=4f5260;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47595
DATA_CHT_1_COMPGEN(0x008f5260, "t_image_sequence_base<t_bitmap_group>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_image_sequence@@;bcd=4f5278;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47596
DATA_CHT_1_COMPGEN(0x008f5278, "t_image_sequence::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_actor_sequence@@;bcd=4f5290;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47597
DATA_CHT_1_COMPGEN(0x008f5290, "t_actor_sequence::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_actor_sequence@@;vft=4cc850;col=4f52cc;td=585ec0;chd=4f52bc;offset=0;cdOffset=0;validated-hierarchy; map:47598
DATA_CHT_1_COMPGEN(0x008f52a8, "t_actor_sequence::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_actor_sequence@@;vft=4cc850;col=4f52cc;td=585ec0;chd=4f52bc;offset=0;cdOffset=0;validated-hierarchy; map:47599
DATA_CHT_1_COMPGEN(0x008f52bc, "t_actor_sequence::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_actor_sequence@@;vft=4cc850;col=4f52cc;td=585ec0;chd=4f52bc;offset=0;cdOffset=0;validated-hierarchy; map:47600
DATA_CHT_1_COMPGEN(0x008f52cc, "const t_actor_sequence::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_resource_cache@Vt_actor_sequence@@@@;bcd=4f5314;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47601
DATA_CHT_1_COMPGEN(0x008f5314, "t_resource_cache<t_actor_sequence>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_conversion_cache@Vt_actor_sequence_24@@Vt_actor_sequence@@@@;bcd=4f532c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47602
DATA_CHT_1_COMPGEN(0x008f532c, "t_conversion_cache<t_actor_sequence_24, t_actor_sequence>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_sequence_cache@?%C:\Work\game\actor_sequence_cache.cpp176834229@@;bcd=4f5344;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47603
DATA_CHT_1_COMPGEN(0x008f5344, "t_sequence_cache::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_sequence_cache@?%C:\Work\game\actor_sequence_cache.cpp176834229@@;vft=4cc868;col=4f5380;td=585f68;chd=4f5370;offset=0;cdOffset=0;validated-hierarchy; map:47604
DATA_CHT_1_COMPGEN(0x008f535c, "t_sequence_cache::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_sequence_cache@?%C:\Work\game\actor_sequence_cache.cpp176834229@@;vft=4cc868;col=4f5380;td=585f68;chd=4f5370;offset=0;cdOffset=0;validated-hierarchy; map:47605
DATA_CHT_1_COMPGEN(0x008f5370, "t_sequence_cache::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_sequence_cache@?%C:\Work\game\actor_sequence_cache.cpp176834229@@;vft=4cc868;col=4f5380;td=585f68;chd=4f5370;offset=0;cdOffset=0;validated-hierarchy; map:47606
DATA_CHT_1_COMPGEN(0x008f5380, "const t_sequence_cache::`RTTI Complete Object Locator'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_scaled_sequence_cache_data@?%C:\Work\game\actor_sequence_cache.cpp176834229@@;vft=4cc894;col=4f5394;td=585fb8;chd=4f53ec;offset=16;cdOffset=0;validated-hierarchy; map:47607
DATA_CHT_1_COMPGEN(0x008f5394, "const t_scaled_sequence_cache_data::`RTTI Complete Object Locator'{for `t_abstract_resource_cache_base'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_scaled_sequence_cache_data@?%C:\Work\game\actor_sequence_cache.cpp176834229@@;bcd=4f53a8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47608
DATA_CHT_1_COMPGEN(0x008f53a8, "t_scaled_sequence_cache_data::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_scaled_sequence_cache_data@?%C:\Work\game\actor_sequence_cache.cpp176834229@@;vft=4cc894;col=4f5394;td=585fb8;chd=4f53ec;offset=16;cdOffset=0;validated-hierarchy; map:47609
DATA_CHT_1_COMPGEN(0x008f53c0, "t_scaled_sequence_cache_data::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_scaled_sequence_cache_data@?%C:\Work\game\actor_sequence_cache.cpp176834229@@;vft=4cc894;col=4f5394;td=585fb8;chd=4f53ec;offset=16;cdOffset=0;validated-hierarchy; map:47610
DATA_CHT_1_COMPGEN(0x008f53ec, "t_scaled_sequence_cache_data::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:47611
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_scaled_sequence_cache_data::`RTTI Complete Object Locator'{for `t_abstract_cache_data<t_actor_sequence>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_scaled_sequence_cache@?%C:\Work\game\actor_sequence_cache.cpp176834229@@;bcd=4f5410;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47612
DATA_CHT_1_COMPGEN(0x008f5410, "t_scaled_sequence_cache::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_scaled_sequence_cache@?%C:\Work\game\actor_sequence_cache.cpp176834229@@;vft=4cc8ac;col=4f544c;td=586018;chd=4f543c;offset=0;cdOffset=0;validated-hierarchy; map:47613
DATA_CHT_1_COMPGEN(0x008f5428, "t_scaled_sequence_cache::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_scaled_sequence_cache@?%C:\Work\game\actor_sequence_cache.cpp176834229@@;vft=4cc8ac;col=4f544c;td=586018;chd=4f543c;offset=0;cdOffset=0;validated-hierarchy; map:47614
DATA_CHT_1_COMPGEN(0x008f543c, "t_scaled_sequence_cache::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_scaled_sequence_cache@?%C:\Work\game\actor_sequence_cache.cpp176834229@@;vft=4cc8ac;col=4f544c;td=586018;chd=4f543c;offset=0;cdOffset=0;validated-hierarchy; map:47615
DATA_CHT_1_COMPGEN(0x008f544c, "const t_scaled_sequence_cache::`RTTI Complete Object Locator'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_resource_cache_data@Vt_actor_sequence@@@@;vft=4cc81c;col=4f524c;td=585d70;chd=4f523c;offset=16;cdOffset=0;validated-hierarchy; map:47616
DATA_CHT_1_COMPGEN(0x008f524c, "const t_abstract_resource_cache_data<t_actor_sequence>::`RTTI Complete Object Locator'{for `t_abstract_resource_cache_base'}")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_resource_cache_data@Vt_actor_sequence@@@@;vft=4cc81c;col=4f524c;td=585d70;chd=4f523c;offset=16;cdOffset=0;validated-hierarchy; map:47617
DATA_CHT_1_COMPGEN(0x008f5218, "t_abstract_resource_cache_data<t_actor_sequence>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_resource_cache_data@Vt_actor_sequence@@@@;vft=4cc81c;col=4f524c;td=585d70;chd=4f523c;offset=16;cdOffset=0;validated-hierarchy; map:47618
DATA_CHT_1_COMPGEN(0x008f523c, "t_abstract_resource_cache_data<t_actor_sequence>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:47619
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_abstract_resource_cache_data<t_actor_sequence>::`RTTI Complete Object Locator'{for `t_abstract_cache_data<t_actor_sequence>'}")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_cache_data@Vt_actor_sequence@@@@;vft=4cc804;col=4f50cc;td=585d30;chd=4f50bc;offset=0;cdOffset=0;validated-hierarchy; map:47620
DATA_CHT_1_COMPGEN(0x008f50a8, "t_abstract_cache_data<t_actor_sequence>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_cache_data@Vt_actor_sequence@@@@;vft=4cc804;col=4f50cc;td=585d30;chd=4f50bc;offset=0;cdOffset=0;validated-hierarchy; map:47621
DATA_CHT_1_COMPGEN(0x008f50bc, "t_abstract_cache_data<t_actor_sequence>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_cache_data@Vt_actor_sequence@@@@;vft=4cc804;col=4f50cc;td=585d30;chd=4f50bc;offset=0;cdOffset=0;validated-hierarchy; map:47622
DATA_CHT_1_COMPGEN(0x008f50cc, "const t_abstract_cache_data<t_actor_sequence>::`RTTI Complete Object Locator'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_conversion_cache_data@Vt_actor_sequence_24@@Vt_actor_sequence@@@@;vft=4cc7d0;col=4f512c;td=585db8;chd=4f511c;offset=16;cdOffset=0;validated-hierarchy; map:47623
DATA_CHT_1_COMPGEN(0x008f512c, "const t_conversion_cache_data<t_actor_sequence_24, t_actor_sequence>::`RTTI Complete Object Locator'{for `t_abstract_resource_cache_base'}")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_conversion_cache_data@Vt_actor_sequence_24@@Vt_actor_sequence@@@@;vft=4cc7d0;col=4f512c;td=585db8;chd=4f511c;offset=16;cdOffset=0;validated-hierarchy; map:47624
DATA_CHT_1_COMPGEN(0x008f50f4, "t_conversion_cache_data<t_actor_sequence_24, t_actor_sequence>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_conversion_cache_data@Vt_actor_sequence_24@@Vt_actor_sequence@@@@;vft=4cc7d0;col=4f512c;td=585db8;chd=4f511c;offset=16;cdOffset=0;validated-hierarchy; map:47625
DATA_CHT_1_COMPGEN(0x008f511c, "t_conversion_cache_data<t_actor_sequence_24, t_actor_sequence>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:47626
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_conversion_cache_data<t_actor_sequence_24, t_actor_sequence>::`RTTI Complete Object Locator'{for `t_abstract_cache_data<t_actor_sequence>'}")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_conversion_cache@Vt_actor_sequence_24@@Vt_actor_sequence@@@@;vft=4cc870;col=4f5300;td=585f18;chd=4f52f0;offset=0;cdOffset=0;validated-hierarchy; map:47627
DATA_CHT_1_COMPGEN(0x008f52e0, "t_conversion_cache<t_actor_sequence_24, t_actor_sequence>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_conversion_cache@Vt_actor_sequence_24@@Vt_actor_sequence@@@@;vft=4cc870;col=4f5300;td=585f18;chd=4f52f0;offset=0;cdOffset=0;validated-hierarchy; map:47628
DATA_CHT_1_COMPGEN(0x008f52f0, "t_conversion_cache<t_actor_sequence_24, t_actor_sequence>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_conversion_cache@Vt_actor_sequence_24@@Vt_actor_sequence@@@@;vft=4cc870;col=4f5300;td=585f18;chd=4f52f0;offset=0;cdOffset=0;validated-hierarchy; map:47629
DATA_CHT_1_COMPGEN(0x008f5300, "const t_conversion_cache<t_actor_sequence_24, t_actor_sequence>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:47630
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_resource_cache<t_actor_sequence>::`RTTI Base Class Array'")

// name:A; map symbol; map:47631
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_resource_cache<t_actor_sequence>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:47632
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_resource_cache<t_actor_sequence>::`RTTI Complete Object Locator'")

// === .data (12 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_cache_data@Vt_actor_sequence@@@@;td=585d30;validated-header; map:57375
DATA_CHT_1_COMPGEN(0x00985d30, "t_abstract_cache_data<t_actor_sequence> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_resource_cache_data@Vt_actor_sequence@@@@;td=585d70;validated-header; map:57376
DATA_CHT_1_COMPGEN(0x00985d70, "t_abstract_resource_cache_data<t_actor_sequence> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_conversion_cache_data@Vt_actor_sequence_24@@Vt_actor_sequence@@@@;td=585db8;validated-header; map:57377
DATA_CHT_1_COMPGEN(0x00985db8, "t_conversion_cache_data<t_actor_sequence_24, t_actor_sequence> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_sequence_cache_data@?%C:\Work\game\actor_sequence_cache.cpp176834229@@;td=585e10;validated-header; map:57378
DATA_CHT_1_COMPGEN(0x00985e10, "t_sequence_cache_data `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_image_sequence_base@Vt_bitmap_group@@@@;td=585e68;validated-header; map:57379
DATA_CHT_1_COMPGEN(0x00985e68, "t_image_sequence_base<t_bitmap_group> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_image_sequence@@;td=585ea0;validated-header; map:57380
DATA_CHT_1_COMPGEN(0x00985ea0, "t_image_sequence `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_actor_sequence@@;td=585ec0;validated-header; map:57381
DATA_CHT_1_COMPGEN(0x00985ec0, "t_actor_sequence `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_resource_cache@Vt_actor_sequence@@@@;td=585ee0;validated-header; map:57382
DATA_CHT_1_COMPGEN(0x00985ee0, "t_resource_cache<t_actor_sequence> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_conversion_cache@Vt_actor_sequence_24@@Vt_actor_sequence@@@@;td=585f18;validated-header; map:57383
DATA_CHT_1_COMPGEN(0x00985f18, "t_conversion_cache<t_actor_sequence_24, t_actor_sequence> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_sequence_cache@?%C:\Work\game\actor_sequence_cache.cpp176834229@@;td=585f68;validated-header; map:57384
DATA_CHT_1_COMPGEN(0x00985f68, "t_sequence_cache `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_scaled_sequence_cache_data@?%C:\Work\game\actor_sequence_cache.cpp176834229@@;td=585fb8;validated-header; map:57385
DATA_CHT_1_COMPGEN(0x00985fb8, "t_scaled_sequence_cache_data `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_scaled_sequence_cache@?%C:\Work\game\actor_sequence_cache.cpp176834229@@;td=586018;validated-header; map:57386
DATA_CHT_1_COMPGEN(0x00986018, "t_scaled_sequence_cache `RTTI Type Descriptor'")

// === .bss (2 symbols) ===

// name:A; map symbol; map:59934
DATA_CHT_1(UNACCOUNTED)
std::_Tree<t_sequence_cache_key, std::pair<t_sequence_cache_key const, t_shared_ptr<t_sequence_cache>>, std::map<t_sequence_cache_key, t_shared_ptr<t_sequence_cache>, t_sequence_cache_key_less, std::allocator<t_shared_ptr<t_sequence_cache>>>::_Kfn, t_sequence_cache_key_less, std::allocator<t_shared_ptr<t_sequence_cache>>>::_Node*std::_Tree<t_sequence_cache_key, std::pair<t_sequence_cache_key const, t_shared_ptr<t_sequence_cache>>, std::map<t_sequence_cache_key, t_shared_ptr<t_sequence_cache>, t_sequence_cache_key_less, std::allocator<t_shared_ptr<t_sequence_cache>>>::_Kfn, t_sequence_cache_key_less, std::allocator<t_shared_ptr<t_sequence_cache>>>::_Nil; // Initial value unavailable.

// name:A; map symbol; map:59936
DATA_CHT_1(UNACCOUNTED)
std::_Tree<t_scaled_sequence_cache_key, std::pair<t_scaled_sequence_cache_key const, t_scaled_sequence_cache_ptr>, std::map<t_scaled_sequence_cache_key, t_scaled_sequence_cache_ptr, t_scaled_sequence_cache_key_less, std::allocator<t_scaled_sequence_cache_ptr>>::_Kfn, t_scaled_sequence_cache_key_less, std::allocator<t_scaled_sequence_cache_ptr>>::_Node*std::_Tree<t_scaled_sequence_cache_key, std::pair<t_scaled_sequence_cache_key const, t_scaled_sequence_cache_ptr>, std::map<t_scaled_sequence_cache_key, t_scaled_sequence_cache_ptr, t_scaled_sequence_cache_key_less, std::allocator<t_scaled_sequence_cache_ptr>>::_Kfn, t_scaled_sequence_cache_key_less, std::allocator<t_scaled_sequence_cache_ptr>>::_Nil; // Initial value unavailable.
