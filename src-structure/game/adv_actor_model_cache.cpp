// adv_actor_model_cache.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\adv_actor_model_cache.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 123/213 (A:98 B:5 C:20); unaccounted 90; skipped std 70.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (134 symbols) ===

// name:C; dyninit; see ledger; map:71285
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_INIT_DISPATCH, "adv_actor_model_cache#1")

// name:C; dyninit; see ledger; map:71286
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adv_actor_model_cache#1")

// confidence:A; dyninit-init; owner-conf-C; map:71287; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00428830, 0x15, STATIC_INIT_DISPATCH, "adv_actor_model_cache#2")

// name:C; dyninit; see ledger; map:71288
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adv_actor_model_cache#2")

namespace {

// confidence:A; align-order; retn,stable,vptr; map:3382
VA_CHT_1(0x00428850, 0xd9)
t_cache_data::t_cache_data(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:3383
VA_CHT_1(0x004289e0, 0x1d)
void t_cache_data::add_reference()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:3384
VA_CHT_1(0x00428ae0, 0x193)
t_adv_actor_model* t_cache_data::do_get(t_progress_handler* arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:3385
VA_CHT_1(0x00428c80, 0x6)
int t_cache_data::get_size()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:3386
VA_CHT_1(0x00428c90, 0x17)
void t_cache_data::remove_reference()
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:3387
VA_CHT_1(0x00429020, 0x1d)
void t_cache_data::release_memory()
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:C; align-order; retn,stable; map:3388
VA_CHT_1(0x00429160, 0x16)
adv_actor_model_cache_details::t_initializer::t_initializer()
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:3389
VA_CHT_1(0x00429180, 0x125)
t_abstract_cache<t_adv_actor_model>& get_adv_actor_model_cache(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:3390
VA_CHT_1(0x00429e50, 0x91)
std::string map_adv_actor_model_name(std::string const& arg_0)
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:71289
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// map_adv_actor_model_name$sdtor2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:71290
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// map_adv_actor_model_name$sdtor1
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; retn,stable; map:3391
VA_CHT_1(0x0042a280, 0x43)
std::string get_adv_model_name(t_creature_type arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:3392
VA_CHT_1(0x0042a2d0, 0x49)
t_cached_ptr<t_adv_actor_model> get_adv_model(t_creature_type arg_0)
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:71291
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// get_adv_model$sdtor
// Function body not reconstructed; signature retained as a comment.

// confidence:B; align-order; retn,stable; map:3393
VA_CHT_1(0x0042a320, 0x195)
std::string get_adv_model_name(t_town_type arg_0, bool arg_1, bool arg_2)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:3394
VA_CHT_1(0x0042a4d0, 0x195)
t_cached_ptr<t_adv_actor_model> get_adv_model(t_town_type arg_0, bool arg_1, bool arg_2)
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:71292
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// get_adv_model$sdtor
// Function body not reconstructed; signature retained as a comment.

// confidence:A; dyninit-tinit; owner-conf-B; map:71293; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0042ac00, 0x20, STATIC_INIT_DISPATCH, adv_actor_model_cache)

// confidence:A; align-band; retn,stable,vslot; map:3395
VA_CHT_1_COMPGEN(0x00428930, 0x1e, VECTOR_DELETING_DTOR, t_cache_data)

// name:A; map symbol; map:3396
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_cache_data)

// name:A; map symbol; map:3397
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_cache_data<t_adv_actor_model>::t_abstract_cache_data<t_adv_actor_model>()
{
    // Body unavailable.
}

// name:A; map symbol; map:3398
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_pointer_cache<t_adv_actor_model_definition>::~t_pointer_cache<t_adv_actor_model_definition>()
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:3399
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cache_data::~t_cache_data()
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:A; align-band; retn,stable,vslot; map:3400
VA_CHT_1_COMPGEN(0x00428a00, 0x1e, SCALAR_DELETING_DTOR, "t_abstract_cache_data<t_adv_actor_model>")

// name:A; map symbol; map:3401
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_abstract_cache_data<t_adv_actor_model>")

namespace {

// confidence:C; align-band; retn,stable; map:3402
VA_CHT_1(0x0042a670, 0x4e)
std::map<std::string, t_shared_ptr<t_cache>, t_string_insensitive_less, std::allocator<t_shared_ptr<t_cache>>>& get_cache_ptr_map(

)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; dyninit; see ledger; map:3403
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, get_cache_ptr_map::cache_ptr_map)

namespace {

// name:A; map symbol; map:3405
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cache::t_cache(std::string const& arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:3406
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_cache)

// name:A; map symbol; map:3407
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_cache)

namespace {

// confidence:A; align-band; retn,stable,vptr; map:3408
VA_CHT_1(0x00428e00, 0x218)
t_cache::~t_cache()
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:3411
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_cache<t_adv_actor_model>& t_abstract_cache<t_adv_actor_model>::operator=(
    t_abstract_cache<t_adv_actor_model> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:3466
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_cache_data<t_adv_actor_model>::~t_abstract_cache_data<t_adv_actor_model>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:3467
VA_CHT_1(0x00428950, 0x8f)
t_abstract_cache<t_adv_actor_model_definition>::~t_abstract_cache<t_adv_actor_model_definition>()
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:3468
VA_CHT_1(0x00429680, 0x23a)
t_cached_ptr<t_adv_actor_model_definition> t_abstract_cache<t_adv_actor_model_definition>::get(
    t_progress_handler* arg_0
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:3469
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_pointer_cache<t_adv_actor_model_definition>::t_pointer_cache<t_adv_actor_model_definition>(
    std::string const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:3470
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_ptr<t_adv_actor_model>::t_owned_ptr<t_adv_actor_model>(t_adv_actor_model* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:3471
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_ptr<t_adv_actor_model>::~t_owned_ptr<t_adv_actor_model>()
{
    // Body unavailable.
}

// name:A; map symbol; map:3472
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_actor_model* t_owned_ptr<t_adv_actor_model>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:3473
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_owned_ptr<t_adv_actor_model>::reset(t_adv_actor_model* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:3474
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_cache_data<t_adv_actor_model>>& t_counted_ptr<t_abstract_cache_data<t_adv_actor_model>>::operator=(
    t_counted_ptr<t_abstract_cache_data<t_adv_actor_model>> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:3475
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_cache<t_adv_actor_model>::t_abstract_cache<t_adv_actor_model>(
    t_abstract_cache_data<t_adv_actor_model>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:3476
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_cache<t_adv_actor_model>::t_abstract_cache<t_adv_actor_model>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:3477
VA_CHT_1(0x0042a4c0, 0x10)
t_abstract_cache<t_adv_actor_model>::~t_abstract_cache<t_adv_actor_model>()
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:3478
VA_CHT_1(0x00429590, 0xa8)
t_cached_ptr<t_adv_actor_model> t_abstract_cache<t_adv_actor_model>::get(t_progress_handler* arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:3479
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_shared_ptr<t_cache>::t_shared_ptr<t_cache>(t_cache* arg_0)
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:3480
VA_CHT_1(0x0042ac20, 0x85)
t_shared_ptr<t_cache>::~t_shared_ptr<t_cache>()
{
    // Body unavailable.
}

// name:A; map symbol; map:3481
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cache& t_shared_ptr<t_cache>::operator*() const
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:3484
VA_CHT_1(0x0042a220, 0x51)
t_cached_ptr<t_adv_actor_model>::~t_cached_ptr<t_adv_actor_model>()
{
    // Body unavailable.
}

// name:A; map symbol; map:3485
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_creature_type enum_incr(t_creature_type& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:3486
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_town_type enum_incr(t_town_type& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,vslot; map:3491
VA_CHT_1_COMPGEN(0x0042a7c0, 0x1e, VECTOR_DELETING_DTOR, "t_abstract_cache<t_adv_actor_model_definition>")

// name:A; map symbol; map:3492
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_abstract_cache<t_adv_actor_model_definition>")

// name:A; map symbol; map:3493
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_cache_data<t_adv_actor_model_definition>>::~t_counted_ptr<t_abstract_cache_data<t_adv_actor_model_definition>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:3494
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_pointer_cache<t_adv_actor_model_definition>")

// name:A; map symbol; map:3495
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_pointer_cache<t_adv_actor_model_definition>")

// confidence:A; align-band; retn,stable,vslot; map:3496
VA_CHT_1_COMPGEN(0x0042a7e0, 0x1e, SCALAR_DELETING_DTOR, "t_abstract_cache<t_adv_actor_model>")

// name:A; map symbol; map:3497
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_abstract_cache<t_adv_actor_model>")

// name:A; map symbol; map:3498
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_cache_data<t_adv_actor_model>>::~t_counted_ptr<t_abstract_cache_data<t_adv_actor_model>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:3502
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cached_ptr<t_adv_actor_model>::t_cached_ptr<t_adv_actor_model>(t_cached_ptr<t_adv_actor_model> const& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:3503
VA_CHT_1(0x004292d0, 0x97)
t_cached_ptr<t_adv_actor_model_definition>::t_cached_ptr<t_adv_actor_model_definition>(
    t_adv_actor_model_definition* arg_0,
    t_abstract_cache_base* arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:3504
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_cache<t_adv_actor_model_definition>::t_abstract_cache<t_adv_actor_model_definition>(
    t_abstract_cache_data<t_adv_actor_model_definition>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:3505
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_cache_data<t_adv_actor_model_definition>>::t_counted_ptr<t_abstract_cache_data<t_adv_actor_model_definition>>(
    t_abstract_cache_data<t_adv_actor_model_definition>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:3506
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_cache_data<t_adv_actor_model_definition>* t_counted_ptr<t_abstract_cache_data<t_adv_actor_model_definition>>::operator t_abstract_cache_data<t_adv_actor_model_definition>*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:3507
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_cache_data<t_adv_actor_model_definition>* t_counted_ptr<t_abstract_cache_data<t_adv_actor_model_definition>>::operator->(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:3508
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_ptr_cache_data<t_adv_actor_model_definition>::t_ptr_cache_data<t_adv_actor_model_definition>(
    std::string const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:3509
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_abstract_resource_cache_data<t_adv_actor_model_definition>::get_load_cost()
{
    // Body unavailable.
}

// name:A; map symbol; map:3510
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_abstract_resource_cache_data<t_adv_actor_model_definition>::add_reference()
{
    // Body unavailable.
}

// name:A; map symbol; map:3511
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_actor_model_definition* t_abstract_resource_cache_data<t_adv_actor_model_definition>::do_get(
    t_progress_handler* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:3512
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_abstract_resource_cache_data<t_adv_actor_model_definition>::release_memory()
{
    // Body unavailable.
}

// name:A; map symbol; map:3513
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_abstract_resource_cache_data<t_adv_actor_model_definition>::remove_reference()
{
    // Body unavailable.
}

// name:A; map symbol; map:3514
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_abstract_resource_cache_data<t_adv_actor_model_definition>::read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_progress_handler* arg_1
)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:3515
VA_CHT_1(0x0042a870, 0x6)
char const* t_ptr_cache_data<t_adv_actor_model_definition>::get_prefix() const
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:3516
VA_CHT_1(0x0042a880, 0xcd)
t_adv_actor_model_definition* t_ptr_cache_data<t_adv_actor_model_definition>::do_read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_progress_handler* arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:3517
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_actor_model_definition::t_adv_actor_model_definition()
{
    // Body unavailable.
}

// name:A; map symbol; map:3518
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_actor_model_definition_base::set_postwalk_length(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:3519
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_actor_model_definition_base::set_prewalk_length(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:3520
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_actor_model_definition_base::set_walk_length(int arg_0)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:3521
VA_CHT_1_COMPGEN(0x0042aa40, 0x1e, VECTOR_DELETING_DTOR, t_adv_actor_model_definition)

// name:A; map symbol; map:3522
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_adv_actor_model_definition)

// name:A; map symbol; map:3523
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_actor_model_definition::~t_adv_actor_model_definition()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:3524
VA_CHT_1(0x0042a9a0, 0x9b)
t_actor_model_definition<t_adv_actor_model_definition_traits>::t_actor_model_definition<t_adv_actor_model_definition_traits>(

)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:3525
VA_CHT_1(0x0042a990, 0x7)
t_actor_model_definition_base::t_actor_model_definition_base()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:3526
VA_CHT_1_COMPGEN(0x0042a970, 0x20, SCALAR_DELETING_DTOR, t_actor_model_definition_base)

// name:A; map symbol; map:3527
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_actor_model_definition_base)

// confidence:A; align-band; retn,stable,vptr; map:3528
VA_CHT_1(0x0042a950, 0x11)
t_actor_model_definition_base::~t_actor_model_definition_base()
{
    // Body unavailable.
}

// name:A; map symbol; map:3529
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_actor_model_definition<t_adv_actor_model_definition_traits>::~t_actor_model_definition<t_adv_actor_model_definition_traits>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:3530
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_actor_model_definition<t_adv_actor_model_definition_traits>")

// name:A; map symbol; map:3531
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_actor_model_definition<t_adv_actor_model_definition_traits>")

// confidence:C; align-band; retn,stable; map:3532
VA_CHT_1(0x00428cc0, 0xf3)
t_static_vector<t_actor_action_definition, 6>::t_static_vector<t_actor_action_definition, 6>()
{
    // Body unavailable.
}

// name:A; map symbol; map:3533
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_actor_action_definition::t_actor_action_definition()
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:3534
VA_CHT_1(0x0042aa60, 0x129)
t_static_vector<std::string, 8>::t_static_vector<std::string, 8>()
{
    // Body unavailable.
}

// name:A; map symbol; map:3535
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::string* t_static_vector<std::string, 8>::begin()
{
    // Body unavailable.
}

// name:A; map symbol; map:3536
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::string* t_static_vector<std::string, 8>::end()
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:3537
VA_CHT_1(0x0042a6c0, 0x74)
t_static_vector<t_actor_action_definition, 6>::~t_static_vector<t_actor_action_definition, 6>()
{
    // Body unavailable.
}

// name:A; map symbol; map:3539
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_cache_data<t_adv_actor_model>>::t_counted_ptr<t_abstract_cache_data<t_adv_actor_model>>(
    t_abstract_cache_data<t_adv_actor_model>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:3540
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_cache_data<t_adv_actor_model>>::t_counted_ptr<t_abstract_cache_data<t_adv_actor_model>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:3541
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_cache_data<t_adv_actor_model>* t_counted_ptr<t_abstract_cache_data<t_adv_actor_model>>::operator t_abstract_cache_data<t_adv_actor_model>*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:3542
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_cache_data<t_adv_actor_model>* t_counted_ptr<t_abstract_cache_data<t_adv_actor_model>>::operator->(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:3543
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cached_ptr<t_adv_actor_model>::t_cached_ptr<t_adv_actor_model>(
    t_adv_actor_model* arg_0,
    t_abstract_cache_base* arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:3544
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_actor_model* t_cached_ptr<t_adv_actor_model>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:3545
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_shared_ptr<t_cache>::t_shared_ptr<t_cache>(t_shared_ptr<t_cache> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:3546
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cache* t_shared_ptr<t_cache>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:3547
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_shared_ptr<t_cache>::set(t_cache* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:3548
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_shared_ptr<t_cache>::construct(t_cache* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:3549
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_actor_action_definition::~t_actor_action_definition()
{
    // Body unavailable.
}

// name:A; map symbol; map:3550
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_static_vector<std::string, 8>::~t_static_vector<std::string, 8>()
{
    // Body unavailable.
}

// name:A; map symbol; map:3551
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_actor_action_definition)

// confidence:A; align-band; retn,stable,vslot; map:3552
VA_CHT_1_COMPGEN(0x0042acd0, 0x1e, SCALAR_DELETING_DTOR, "t_ptr_cache_data<t_adv_actor_model_definition>")

// name:A; map symbol; map:3553
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_ptr_cache_data<t_adv_actor_model_definition>")

// name:A; map symbol; map:3554
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_ptr_cache_data<t_adv_actor_model_definition>::~t_ptr_cache_data<t_adv_actor_model_definition>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:3555
VA_CHT_1(0x0042acf0, 0xcb)
t_abstract_resource_cache_data<t_adv_actor_model_definition>::~t_abstract_resource_cache_data<t_adv_actor_model_definition>(

)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:3556
VA_CHT_1(0x0042a820, 0x49)
t_abstract_cache_data<t_adv_actor_model_definition>::~t_abstract_cache_data<t_adv_actor_model_definition>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:3557
VA_CHT_1_COMPGEN(0x0042acb0, 0x1e, VECTOR_DELETING_DTOR, "t_abstract_cache_data<t_adv_actor_model_definition>")

// name:A; map symbol; map:3558
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_abstract_cache_data<t_adv_actor_model_definition>")

// confidence:A; align-band; retn,stable,vslot; map:3559
VA_CHT_1_COMPGEN(0x0042adc0, 0x1e, VECTOR_DELETING_DTOR, "t_abstract_resource_cache_data<t_adv_actor_model_definition>")

// name:A; map symbol; map:3560
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_abstract_resource_cache_data<t_adv_actor_model_definition>")

// name:A; map symbol; map:3561
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_actor_action_definition* t_static_vector<t_actor_action_definition, 6>::begin()
{
    // Body unavailable.
}

// name:A; map symbol; map:3562
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_actor_action_definition* t_static_vector<t_actor_action_definition, 6>::end()
{
    // Body unavailable.
}

// name:A; map symbol; map:3563
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_resource_cache_data<t_adv_actor_model_definition>::t_abstract_resource_cache_data<t_adv_actor_model_definition>(
    std::string const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:3564
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_ptr<t_adv_actor_model_definition>::t_owned_ptr<t_adv_actor_model_definition>(
    t_adv_actor_model_definition* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:3565
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_ptr<t_adv_actor_model_definition>::~t_owned_ptr<t_adv_actor_model_definition>()
{
    // Body unavailable.
}

// name:A; map symbol; map:3566
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_actor_model_definition* t_owned_ptr<t_adv_actor_model_definition>::release()
{
    // Body unavailable.
}

// name:A; map symbol; map:3567
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_owned_ptr<t_adv_actor_model_definition>::reset(t_adv_actor_model_definition* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:3568
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_actor_model_definition& t_owned_ptr<t_adv_actor_model_definition>::operator*() const
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:3569
VA_CHT_1(0x00429e00, 0x43)
void t_shared_ptr<t_cache>::add_link(t_shared_ptr_base const& arg_0) const
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:3570
VA_CHT_1(0x0042ade0, 0xcb)
t_abstract_cache_data<t_adv_actor_model_definition>::t_abstract_cache_data<t_adv_actor_model_definition>()
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:3572
VA_CHT_1_COMPGEN(0x0042aeb0, 0x8, VECTOR_DELETING_DTOR, t_cache_data)

// confidence:C; align-order; stable; map:3573
VA_CHT_1_COMPGEN(0x0042aec0, 0x8, VECTOR_DELETING_DTOR, "t_ptr_cache_data<t_adv_actor_model_definition>")

// confidence:C; align-order; stable; map:3574
VA_CHT_1_COMPGEN(0x0042aed0, 0x8, VECTOR_DELETING_DTOR, "t_abstract_resource_cache_data<t_adv_actor_model_definition>")

// === .rdata (15 symbols) ===

// confidence:A; rtti-name; map:42647
DATA_CHT_1_COMPGEN(0x008ccbdc, "const t_cache_data::`vftable'{for `t_cache_base'}")

// confidence:B; rtti-order; map:42648
DATA_CHT_1_COMPGEN(0x008ccbec, "const t_cache_data::`vftable'{for `t_abstract_cache_data<t_adv_actor_model>'}")

// confidence:A; rtti-name; map:42649
DATA_CHT_1_COMPGEN(0x008ccc58, "const t_abstract_cache_data<t_adv_actor_model>::`vftable'")

// confidence:A; rtti-name; map:42650
DATA_CHT_1_COMPGEN(0x008ccc8c, "const t_cache::`vftable'")

// confidence:A; rtti-name; map:42651
DATA_CHT_1_COMPGEN(0x008ccc70, "const t_abstract_cache<t_adv_actor_model_definition>::`vftable'")

// confidence:A; rtti-name; map:42652
DATA_CHT_1_COMPGEN(0x008ccc04, "const t_pointer_cache<t_adv_actor_model_definition>::`vftable'")

// confidence:A; rtti-name; map:42653
DATA_CHT_1_COMPGEN(0x008ccc94, "const t_abstract_cache<t_adv_actor_model>::`vftable'")

// confidence:A; rtti-name; map:42654
DATA_CHT_1_COMPGEN(0x008ccc28, "const t_ptr_cache_data<t_adv_actor_model_definition>::`vftable'{for `t_abstract_resource_cache_base'}")

// confidence:B; rtti-order; map:42655
DATA_CHT_1_COMPGEN(0x008ccc0c, "const t_ptr_cache_data<t_adv_actor_model_definition>::`vftable'{for `t_abstract_cache_data<t_adv_actor_model_definition>'}")

// confidence:A; rtti-name; map:42656
DATA_CHT_1_COMPGEN(0x008ccc9c, "const t_adv_actor_model_definition::`vftable'")

// confidence:A; rtti-name; map:42657
DATA_CHT_1_COMPGEN(0x008cccac, "const t_actor_model_definition<t_adv_actor_model_definition_traits>::`vftable'")

// confidence:A; rtti-name; map:42658
DATA_CHT_1_COMPGEN(0x008ccca4, "const t_actor_model_definition_base::`vftable'")

// confidence:A; rtti-name; map:42659
DATA_CHT_1_COMPGEN(0x008cccb4, "const t_abstract_resource_cache_data<t_adv_actor_model_definition>::`vftable'{for `t_abstract_resource_cache_base'}")

// confidence:B; rtti-order; map:42660
DATA_CHT_1_COMPGEN(0x008ccccc, "const t_abstract_resource_cache_data<t_adv_actor_model_definition>::`vftable'{for `t_abstract_cache_data<t_adv_actor_model_definition>'}")

// confidence:A; rtti-name; map:42661
DATA_CHT_1_COMPGEN(0x008ccc40, "const t_abstract_cache_data<t_adv_actor_model_definition>::`vftable'")

// === .rdata$r (51 symbols) ===

// confidence:A; rtti-col-pointer; type-name=.?AVt_cache_data@?%C:\Work\game\adv_actor_model_cache.cpp1069119971@@;vft=4ccbdc;col=4f5bc4;td=586698;chd=4f5bb4;offset=16;cdOffset=0;validated-hierarchy; map:47704
DATA_CHT_1_COMPGEN(0x008f5bc4, "const t_cache_data::`RTTI Complete Object Locator'{for `t_cache_base'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_cache_data@Vt_adv_actor_model@@@@;bcd=4f5b64;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47705
DATA_CHT_1_COMPGEN(0x008f5b64, "t_abstract_cache_data<t_adv_actor_model>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_cache_data@?%C:\Work\game\adv_actor_model_cache.cpp1069119971@@;bcd=4f5b7c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47706
DATA_CHT_1_COMPGEN(0x008f5b7c, "t_cache_data::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_cache_data@?%C:\Work\game\adv_actor_model_cache.cpp1069119971@@;vft=4ccbdc;col=4f5bc4;td=586698;chd=4f5bb4;offset=16;cdOffset=0;validated-hierarchy; map:47707
DATA_CHT_1_COMPGEN(0x008f5b94, "t_cache_data::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_cache_data@?%C:\Work\game\adv_actor_model_cache.cpp1069119971@@;vft=4ccbdc;col=4f5bc4;td=586698;chd=4f5bb4;offset=16;cdOffset=0;validated-hierarchy; map:47708
DATA_CHT_1_COMPGEN(0x008f5bb4, "t_cache_data::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:47709
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_cache_data::`RTTI Complete Object Locator'{for `t_abstract_cache_data<t_adv_actor_model>'}")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_cache_data@Vt_adv_actor_model@@@@;vft=4ccc58;col=4f59fc;td=586658;chd=4f59ec;offset=0;cdOffset=0;validated-hierarchy; map:47710
DATA_CHT_1_COMPGEN(0x008f59d8, "t_abstract_cache_data<t_adv_actor_model>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_cache_data@Vt_adv_actor_model@@@@;vft=4ccc58;col=4f59fc;td=586658;chd=4f59ec;offset=0;cdOffset=0;validated-hierarchy; map:47711
DATA_CHT_1_COMPGEN(0x008f59ec, "t_abstract_cache_data<t_adv_actor_model>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_cache_data@Vt_adv_actor_model@@@@;vft=4ccc58;col=4f59fc;td=586658;chd=4f59ec;offset=0;cdOffset=0;validated-hierarchy; map:47712
DATA_CHT_1_COMPGEN(0x008f59fc, "const t_abstract_cache_data<t_adv_actor_model>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_cache@Vt_adv_actor_model@@@@;bcd=4f5c38;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47713
DATA_CHT_1_COMPGEN(0x008f5c38, "t_abstract_cache<t_adv_actor_model>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_cache@?%C:\Work\game\adv_actor_model_cache.cpp1069119971@@;bcd=4f5c50;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47714
DATA_CHT_1_COMPGEN(0x008f5c50, "t_cache::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_cache@?%C:\Work\game\adv_actor_model_cache.cpp1069119971@@;vft=4ccc8c;col=4f5c84;td=586720;chd=4f5c74;offset=0;cdOffset=0;validated-hierarchy; map:47715
DATA_CHT_1_COMPGEN(0x008f5c68, "t_cache::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_cache@?%C:\Work\game\adv_actor_model_cache.cpp1069119971@@;vft=4ccc8c;col=4f5c84;td=586720;chd=4f5c74;offset=0;cdOffset=0;validated-hierarchy; map:47716
DATA_CHT_1_COMPGEN(0x008f5c74, "t_cache::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_cache@?%C:\Work\game\adv_actor_model_cache.cpp1069119971@@;vft=4ccc8c;col=4f5c84;td=586720;chd=4f5c74;offset=0;cdOffset=0;validated-hierarchy; map:47717
DATA_CHT_1_COMPGEN(0x008f5c84, "const t_cache::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_cache@Vt_adv_actor_model_definition@@@@;bcd=4f5af0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47718
DATA_CHT_1_COMPGEN(0x008f5af0, "t_abstract_cache<t_adv_actor_model_definition>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_cache@Vt_adv_actor_model_definition@@@@;vft=4ccc70;col=4f5bf0;td=5865d0;chd=4f5be0;offset=0;cdOffset=0;validated-hierarchy; map:47719
DATA_CHT_1_COMPGEN(0x008f5bd8, "t_abstract_cache<t_adv_actor_model_definition>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_cache@Vt_adv_actor_model_definition@@@@;vft=4ccc70;col=4f5bf0;td=5865d0;chd=4f5be0;offset=0;cdOffset=0;validated-hierarchy; map:47720
DATA_CHT_1_COMPGEN(0x008f5be0, "t_abstract_cache<t_adv_actor_model_definition>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_cache@Vt_adv_actor_model_definition@@@@;vft=4ccc70;col=4f5bf0;td=5865d0;chd=4f5be0;offset=0;cdOffset=0;validated-hierarchy; map:47721
DATA_CHT_1_COMPGEN(0x008f5bf0, "const t_abstract_cache<t_adv_actor_model_definition>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_pointer_cache@Vt_adv_actor_model_definition@@@@;bcd=4f5b08;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47722
DATA_CHT_1_COMPGEN(0x008f5b08, "t_pointer_cache<t_adv_actor_model_definition>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_pointer_cache@Vt_adv_actor_model_definition@@@@;vft=4ccc04;col=4f5b3c;td=586618;chd=4f5b2c;offset=0;cdOffset=0;validated-hierarchy; map:47723
DATA_CHT_1_COMPGEN(0x008f5b20, "t_pointer_cache<t_adv_actor_model_definition>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_pointer_cache@Vt_adv_actor_model_definition@@@@;vft=4ccc04;col=4f5b3c;td=586618;chd=4f5b2c;offset=0;cdOffset=0;validated-hierarchy; map:47724
DATA_CHT_1_COMPGEN(0x008f5b2c, "t_pointer_cache<t_adv_actor_model_definition>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_pointer_cache@Vt_adv_actor_model_definition@@@@;vft=4ccc04;col=4f5b3c;td=586618;chd=4f5b2c;offset=0;cdOffset=0;validated-hierarchy; map:47725
DATA_CHT_1_COMPGEN(0x008f5b3c, "const t_pointer_cache<t_adv_actor_model_definition>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_cache@Vt_adv_actor_model@@@@;vft=4ccc94;col=4f5cb0;td=5866e8;chd=4f5ca0;offset=0;cdOffset=0;validated-hierarchy; map:47726
DATA_CHT_1_COMPGEN(0x008f5c98, "t_abstract_cache<t_adv_actor_model>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_cache@Vt_adv_actor_model@@@@;vft=4ccc94;col=4f5cb0;td=5866e8;chd=4f5ca0;offset=0;cdOffset=0;validated-hierarchy; map:47727
DATA_CHT_1_COMPGEN(0x008f5ca0, "t_abstract_cache<t_adv_actor_model>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_cache@Vt_adv_actor_model@@@@;vft=4ccc94;col=4f5cb0;td=5866e8;chd=4f5ca0;offset=0;cdOffset=0;validated-hierarchy; map:47728
DATA_CHT_1_COMPGEN(0x008f5cb0, "const t_abstract_cache<t_adv_actor_model>::`RTTI Complete Object Locator'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_ptr_cache_data@Vt_adv_actor_model_definition@@@@;vft=4ccc28;col=4f5a48;td=586588;chd=4f5acc;offset=16;cdOffset=0;validated-hierarchy; map:47729
DATA_CHT_1_COMPGEN(0x008f5a48, "const t_ptr_cache_data<t_adv_actor_model_definition>::`RTTI Complete Object Locator'{for `t_abstract_resource_cache_base'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_cache_data@Vt_adv_actor_model_definition@@@@;bcd=4f5a5c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47730
DATA_CHT_1_COMPGEN(0x008f5a5c, "t_abstract_cache_data<t_adv_actor_model_definition>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_resource_cache_data@Vt_adv_actor_model_definition@@@@;bcd=4f5a74;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47731
DATA_CHT_1_COMPGEN(0x008f5a74, "t_abstract_resource_cache_data<t_adv_actor_model_definition>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_ptr_cache_data@Vt_adv_actor_model_definition@@@@;bcd=4f5a8c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47732
DATA_CHT_1_COMPGEN(0x008f5a8c, "t_ptr_cache_data<t_adv_actor_model_definition>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_ptr_cache_data@Vt_adv_actor_model_definition@@@@;vft=4ccc28;col=4f5a48;td=586588;chd=4f5acc;offset=16;cdOffset=0;validated-hierarchy; map:47733
DATA_CHT_1_COMPGEN(0x008f5aa4, "t_ptr_cache_data<t_adv_actor_model_definition>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_ptr_cache_data@Vt_adv_actor_model_definition@@@@;vft=4ccc28;col=4f5a48;td=586588;chd=4f5acc;offset=16;cdOffset=0;validated-hierarchy; map:47734
DATA_CHT_1_COMPGEN(0x008f5acc, "t_ptr_cache_data<t_adv_actor_model_definition>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:47735
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_ptr_cache_data<t_adv_actor_model_definition>::`RTTI Complete Object Locator'{for `t_abstract_cache_data<t_adv_actor_model_definition>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_actor_model_definition_base@@;bcd=4f5cc4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47736
DATA_CHT_1_COMPGEN(0x008f5cc4, "t_actor_model_definition_base::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_actor_model_definition@Ut_adv_actor_model_definition_traits@@@@;bcd=4f5cdc;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47737
DATA_CHT_1_COMPGEN(0x008f5cdc, "t_actor_model_definition<t_adv_actor_model_definition_traits>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adv_actor_model_definition@@;bcd=4f5cf4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47738
DATA_CHT_1_COMPGEN(0x008f5cf4, "t_adv_actor_model_definition::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adv_actor_model_definition@@;vft=4ccc9c;col=4f5d2c;td=5867f0;chd=4f5d1c;offset=0;cdOffset=0;validated-hierarchy; map:47739
DATA_CHT_1_COMPGEN(0x008f5d0c, "t_adv_actor_model_definition::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adv_actor_model_definition@@;vft=4ccc9c;col=4f5d2c;td=5867f0;chd=4f5d1c;offset=0;cdOffset=0;validated-hierarchy; map:47740
DATA_CHT_1_COMPGEN(0x008f5d1c, "t_adv_actor_model_definition::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_adv_actor_model_definition@@;vft=4ccc9c;col=4f5d2c;td=5867f0;chd=4f5d1c;offset=0;cdOffset=0;validated-hierarchy; map:47741
DATA_CHT_1_COMPGEN(0x008f5d2c, "const t_adv_actor_model_definition::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_actor_model_definition@Ut_adv_actor_model_definition_traits@@@@;vft=4cccac;col=4f5d88;td=5867a0;chd=4f5d78;offset=0;cdOffset=0;validated-hierarchy; map:47742
DATA_CHT_1_COMPGEN(0x008f5d6c, "t_actor_model_definition<t_adv_actor_model_definition_traits>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_actor_model_definition@Ut_adv_actor_model_definition_traits@@@@;vft=4cccac;col=4f5d88;td=5867a0;chd=4f5d78;offset=0;cdOffset=0;validated-hierarchy; map:47743
DATA_CHT_1_COMPGEN(0x008f5d78, "t_actor_model_definition<t_adv_actor_model_definition_traits>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_actor_model_definition@Ut_adv_actor_model_definition_traits@@@@;vft=4cccac;col=4f5d88;td=5867a0;chd=4f5d78;offset=0;cdOffset=0;validated-hierarchy; map:47744
DATA_CHT_1_COMPGEN(0x008f5d88, "const t_actor_model_definition<t_adv_actor_model_definition_traits>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_actor_model_definition_base@@;vft=4ccca4;col=4f5d58;td=586774;chd=4f5d48;offset=0;cdOffset=0;validated-hierarchy; map:47745
DATA_CHT_1_COMPGEN(0x008f5d40, "t_actor_model_definition_base::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_actor_model_definition_base@@;vft=4ccca4;col=4f5d58;td=586774;chd=4f5d48;offset=0;cdOffset=0;validated-hierarchy; map:47746
DATA_CHT_1_COMPGEN(0x008f5d48, "t_actor_model_definition_base::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_actor_model_definition_base@@;vft=4ccca4;col=4f5d58;td=586774;chd=4f5d48;offset=0;cdOffset=0;validated-hierarchy; map:47747
DATA_CHT_1_COMPGEN(0x008f5d58, "const t_actor_model_definition_base::`RTTI Complete Object Locator'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_resource_cache_data@Vt_adv_actor_model_definition@@@@;vft=4cccb4;col=4f5de4;td=586538;chd=4f5dd4;offset=16;cdOffset=0;validated-hierarchy; map:47748
DATA_CHT_1_COMPGEN(0x008f5de4, "const t_abstract_resource_cache_data<t_adv_actor_model_definition>::`RTTI Complete Object Locator'{for `t_abstract_resource_cache_base'}")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_resource_cache_data@Vt_adv_actor_model_definition@@@@;vft=4cccb4;col=4f5de4;td=586538;chd=4f5dd4;offset=16;cdOffset=0;validated-hierarchy; map:47749
DATA_CHT_1_COMPGEN(0x008f5db0, "t_abstract_resource_cache_data<t_adv_actor_model_definition>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_resource_cache_data@Vt_adv_actor_model_definition@@@@;vft=4cccb4;col=4f5de4;td=586538;chd=4f5dd4;offset=16;cdOffset=0;validated-hierarchy; map:47750
DATA_CHT_1_COMPGEN(0x008f5dd4, "t_abstract_resource_cache_data<t_adv_actor_model_definition>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:47751
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_abstract_resource_cache_data<t_adv_actor_model_definition>::`RTTI Complete Object Locator'{for `t_abstract_cache_data<t_adv_actor_model_definition>'}")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_cache_data@Vt_adv_actor_model_definition@@@@;vft=4ccc40;col=4f5a34;td=5864f0;chd=4f5a24;offset=0;cdOffset=0;validated-hierarchy; map:47752
DATA_CHT_1_COMPGEN(0x008f5a10, "t_abstract_cache_data<t_adv_actor_model_definition>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_cache_data@Vt_adv_actor_model_definition@@@@;vft=4ccc40;col=4f5a34;td=5864f0;chd=4f5a24;offset=0;cdOffset=0;validated-hierarchy; map:47753
DATA_CHT_1_COMPGEN(0x008f5a24, "t_abstract_cache_data<t_adv_actor_model_definition>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_cache_data@Vt_adv_actor_model_definition@@@@;vft=4ccc40;col=4f5a34;td=5864f0;chd=4f5a24;offset=0;cdOffset=0;validated-hierarchy; map:47754
DATA_CHT_1_COMPGEN(0x008f5a34, "const t_abstract_cache_data<t_adv_actor_model_definition>::`RTTI Complete Object Locator'")

// === .data (12 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_cache_data@Vt_adv_actor_model@@@@;td=586658;validated-header; map:57420
DATA_CHT_1_COMPGEN(0x00986658, "t_abstract_cache_data<t_adv_actor_model> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_cache_data@?%C:\Work\game\adv_actor_model_cache.cpp1069119971@@;td=586698;validated-header; map:57421
DATA_CHT_1_COMPGEN(0x00986698, "t_cache_data `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_cache@Vt_adv_actor_model@@@@;td=5866e8;validated-header; map:57422
DATA_CHT_1_COMPGEN(0x009866e8, "t_abstract_cache<t_adv_actor_model> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_cache@?%C:\Work\game\adv_actor_model_cache.cpp1069119971@@;td=586720;validated-header; map:57423
DATA_CHT_1_COMPGEN(0x00986720, "t_cache `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_cache@Vt_adv_actor_model_definition@@@@;td=5865d0;validated-header; map:57424
DATA_CHT_1_COMPGEN(0x009865d0, "t_abstract_cache<t_adv_actor_model_definition> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_pointer_cache@Vt_adv_actor_model_definition@@@@;td=586618;validated-header; map:57425
DATA_CHT_1_COMPGEN(0x00986618, "t_pointer_cache<t_adv_actor_model_definition> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_cache_data@Vt_adv_actor_model_definition@@@@;td=5864f0;validated-header; map:57426
DATA_CHT_1_COMPGEN(0x009864f0, "t_abstract_cache_data<t_adv_actor_model_definition> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_resource_cache_data@Vt_adv_actor_model_definition@@@@;td=586538;validated-header; map:57427
DATA_CHT_1_COMPGEN(0x00986538, "t_abstract_resource_cache_data<t_adv_actor_model_definition> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_ptr_cache_data@Vt_adv_actor_model_definition@@@@;td=586588;validated-header; map:57428
DATA_CHT_1_COMPGEN(0x00986588, "t_ptr_cache_data<t_adv_actor_model_definition> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_actor_model_definition_base@@;td=586774;validated-header; map:57429
DATA_CHT_1_COMPGEN(0x00986774, "t_actor_model_definition_base `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_actor_model_definition@Ut_adv_actor_model_definition_traits@@@@;td=5867a0;validated-header; map:57430
DATA_CHT_1_COMPGEN(0x009867a0, "t_actor_model_definition<t_adv_actor_model_definition_traits> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_adv_actor_model_definition@@;td=5867f0;validated-header; map:57431
DATA_CHT_1_COMPGEN(0x009867f0, "t_adv_actor_model_definition `RTTI Type Descriptor'")

// === .bss (1 symbols) ===

// name:A; map symbol; map:59942
DATA_CHT_1(UNACCOUNTED)
std::_Tree<std::string, std::pair<std::string const, t_shared_ptr<t_cache>>, std::map<std::string, t_shared_ptr<t_cache>, t_string_insensitive_less, std::allocator<t_shared_ptr<t_cache>>>::_Kfn, t_string_insensitive_less, std::allocator<t_shared_ptr<t_cache>>>::_Node*std::_Tree<std::string, std::pair<std::string const, t_shared_ptr<t_cache>>, std::map<std::string, t_shared_ptr<t_cache>, t_string_insensitive_less, std::allocator<t_shared_ptr<t_cache>>>::_Kfn, t_string_insensitive_less, std::allocator<t_shared_ptr<t_cache>>>::_Nil; // Initial value unavailable.
