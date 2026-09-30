// combat_actor_model_cache.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\combat_actor_model_cache.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 132/210 (A:103 B:3 C:26); unaccounted 78; skipped std 172.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (136 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:68125; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005ad6a0, 0x15, STATIC_INIT_DISPATCH, "combat_actor_model_cache#1")

// name:C; dyninit; see ledger; map:68126
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_actor_model_cache#1")

// confidence:A; dyninit-init; owner-conf-C; map:68127; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005ad6c0, 0x15, STATIC_INIT_DISPATCH, "combat_actor_model_cache#2")

// name:C; dyninit; see ledger; map:68128
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_actor_model_cache#2")

// confidence:A; dyninit-init; owner-conf-C; map:68129; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005ad6e0, 0x15, STATIC_INIT_DISPATCH, "combat_actor_model_cache#3")

// name:C; dyninit; see ledger; map:68130
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_actor_model_cache#3")

// confidence:A; dyninit-init; owner-conf-C; map:68131; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005ad700, 0x15, STATIC_INIT_DISPATCH, "combat_actor_model_cache#4")

// name:C; dyninit; see ledger; map:68132
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_actor_model_cache#4")

// confidence:A; dyninit-init; owner-conf-C; map:68133; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005ad720, 0x10, STATIC_INIT_DISPATCH, "combat_actor_model_cache#5")

// name:C; dyninit; see ledger; map:68134
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_actor_model_cache#5")

// confidence:A; dyninit-init; owner-conf-C; map:68135; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005ad730, 0x15, STATIC_INIT_DISPATCH, "combat_actor_model_cache#6")

// name:C; dyninit; see ledger; map:68136
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_actor_model_cache#6")

// confidence:A; align-order; retn,vptr; map:19704
VA_CHT_1(0x005ad750, 0x10)
t_combat_actor_model_cache::t_combat_actor_model_cache()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:19705
VA_CHT_1(0x005ad7a0, 0x10d)
t_combat_actor_model_cache::t_combat_actor_model_cache(std::string const& arg_0, double arg_1)
{
    // Body unavailable.
}

namespace {

// confidence:A; align-order; retn,stable,vptr; map:19706
VA_CHT_1(0x005ad8b0, 0xe5)
t_combat_actor_model_cache_data::t_combat_actor_model_cache_data(std::string const& arg_0, double arg_1)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:19707
VA_CHT_1(0x005ada50, 0x1d)
void t_combat_actor_model_cache_data::add_reference()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:19708
VA_CHT_1(0x005adab0, 0x16d)
t_combat_actor_model* t_combat_actor_model_cache_data::do_get(t_progress_handler* arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:19709
VA_CHT_1(0x005adc20, 0x6)
int t_combat_actor_model_cache_data::get_size()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:19710
VA_CHT_1(0x005adc50, 0x17)
void t_combat_actor_model_cache_data::remove_reference()
{
    // Body unavailable.
}

// name:A; map symbol; map:19711
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_combat_actor_model_cache_data::release_memory()
{
    // Body unavailable.
}

// name:A; map symbol; map:19712
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_creature_caches::t_creature_caches(double arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:C; align-order; retn; map:19713
VA_CHT_1(0x005adcc0, 0x311)
t_cached_ptr<t_combat_actor_model> get_combat_actor_model(t_creature_type arg_0, double arg_1)
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:68137
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// get_combat_actor_model$sdtor
// Function body not reconstructed; signature retained as a comment.

namespace {

// confidence:C; align-order; retn; map:19714
VA_CHT_1(0x005ae120, 0x22a)
t_hero_caches::t_hero_caches(double arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:C; align-order; retn; map:19715
VA_CHT_1(0x005ae350, 0x2d9)
t_cached_ptr<t_combat_actor_model> get_combat_actor_model(
    t_town_type arg_0,
    bool arg_1,
    bool arg_2,
    bool arg_3,
    double arg_4
)
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:68138
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// get_combat_actor_model$sdtor
// Function body not reconstructed; signature retained as a comment.

namespace {

// confidence:C; align-order; retn; map:19716
VA_CHT_1(0x005ae7b0, 0x1f0)
t_missile_caches::t_missile_caches(double arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:C; align-order; retn; map:19717
VA_CHT_1(0x005ae9a0, 0x2e7)
t_cached_ptr<t_combat_actor_model> get_combat_actor_model(t_missile_type arg_0, double arg_1)
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:68139
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// get_combat_actor_model$sdtor
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; retn; map:19718
VA_CHT_1(0x005aed20, 0x49)
t_combat_actor_model_cache_set::t_combat_actor_model_cache_set(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn; map:19719
VA_CHT_1(0x005aed70, 0x13c)
t_cached_ptr<t_combat_actor_model> t_combat_actor_model_cache_set::get(double arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn; map:19720
VA_CHT_1(0x005af630, 0x7a)
t_cached_ptr<t_combat_actor_model> get_adam_model(double arg_0)
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:68140
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// get_adam_model$sdtor
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; retn; map:19721
VA_CHT_1(0x005af950, 0x7a)
t_cached_ptr<t_combat_actor_model> get_jack_model(double arg_0)
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:68141
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// get_jack_model$sdtor
// Function body not reconstructed; signature retained as a comment.

// confidence:A; dyninit-tinit; owner-conf-B; map:68142; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005b1d10, 0x20, STATIC_INIT_DISPATCH, combat_actor_model_cache)

// name:A; map symbol; map:19722
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_combat_actor_model_cache)

// name:A; map symbol; map:19723
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_combat_actor_model_cache)

// confidence:A; align-band; retn,stable,vptr; map:19724
VA_CHT_1(0x005b1830, 0x18)
t_combat_actor_model_cache::~t_combat_actor_model_cache()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:19725
VA_CHT_1_COMPGEN(0x005ad9a0, 0x1e, VECTOR_DELETING_DTOR, t_combat_actor_model_cache_data)

// name:A; map symbol; map:19726
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_combat_actor_model_cache_data)

// confidence:A; align-band; retn,stable,vptr; map:19727
VA_CHT_1(0x005b1510, 0x49)
t_abstract_cache_data<t_combat_actor_model>::t_abstract_cache_data<t_combat_actor_model>()
{
    // Body unavailable.
}

// name:A; map symbol; map:19728
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_pointer_cache<t_combat_actor_model_definition>::~t_pointer_cache<t_combat_actor_model_definition>()
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:19729
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_actor_model_cache_data::~t_combat_actor_model_cache_data()
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:A; align-band; retn,stable,vslot; map:19730
VA_CHT_1_COMPGEN(0x005ada70, 0x1e, SCALAR_DELETING_DTOR, "t_abstract_cache_data<t_combat_actor_model>")

// name:A; map symbol; map:19731
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_abstract_cache_data<t_combat_actor_model>")

// name:A; map symbol; map:19732
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_actor_model_cache& t_combat_actor_model_cache::operator=(t_combat_actor_model_cache const& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:19733
VA_CHT_1(0x005b0910, 0x43)
t_abstract_cache<t_combat_actor_model>& t_abstract_cache<t_combat_actor_model>::operator=(
    t_abstract_cache<t_combat_actor_model> const& arg_0
)
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:19734
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cached_ptr<t_combat_actor_model> t_creature_caches::get(t_creature_type arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:19736
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_creature_caches::~t_creature_caches()
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:19738
VA_CHT_1(0x005ae630, 0x39)
t_cached_ptr<t_combat_actor_model> t_hero_caches::get(
    t_town_type arg_0,
    bool arg_1,
    t_hero_combat_model_type arg_2
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:19740
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_hero_caches::~t_hero_caches()
{
    // Body unavailable.
}

// confidence:C; align-band; retn; map:19742
VA_CHT_1(0x005ae100, 0x13)
double t_missile_caches::get_scale() const
{
    // Body unavailable.
}

// name:A; map symbol; map:19743
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cached_ptr<t_combat_actor_model> t_missile_caches::get(t_missile_type arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:19744
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_missile_caches::~t_missile_caches()
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:C; align-band; retn,stable; map:19745
VA_CHT_1(0x005b1250, 0x54)
t_combat_actor_model_cache_set::~t_combat_actor_model_cache_set()
{
    // Body unavailable.
}

namespace {

// confidence:C; align-band; retn,stable; map:19773
VA_CHT_1(0x005b1010, 0x52)
t_creature_caches::t_creature_caches(t_creature_caches const& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:19774
VA_CHT_1(0x005b1160, 0x52)
t_hero_caches::t_hero_caches(t_hero_caches const& arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:A; align-band; retn,stable,vptr; map:19775
VA_CHT_1(0x005af310, 0x33)
t_combat_actor_model_cache::t_combat_actor_model_cache(t_combat_actor_model_cache const& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:19776
VA_CHT_1(0x005b1350, 0x19)
t_abstract_cache<t_combat_actor_model>::t_abstract_cache<t_combat_actor_model>(
    t_abstract_cache<t_combat_actor_model> const& arg_0
)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:19777
VA_CHT_1_COMPGEN(0x005ad760, 0x1e, VECTOR_DELETING_DTOR, "t_abstract_cache<t_combat_actor_model>")

// name:A; map symbol; map:19778
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_abstract_cache<t_combat_actor_model>")

// name:A; map symbol; map:19895
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_cache_data<t_combat_actor_model>>::t_counted_ptr<t_abstract_cache_data<t_combat_actor_model>>(
    t_counted_ptr<t_abstract_cache_data<t_combat_actor_model>> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:19896
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_cache_data<t_combat_actor_model>>& t_counted_ptr<t_abstract_cache_data<t_combat_actor_model>>::operator=(
    t_counted_ptr<t_abstract_cache_data<t_combat_actor_model>> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:19897
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_cache<t_combat_actor_model>::t_abstract_cache<t_combat_actor_model>(
    t_abstract_cache_data<t_combat_actor_model>* arg_0
)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,vptr; map:19898
VA_CHT_1(0x005ad780, 0x1d)
t_abstract_cache<t_combat_actor_model>::~t_abstract_cache<t_combat_actor_model>()
{
    // Body unavailable.
}

// name:A; map symbol; map:19899
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_cache_data<t_combat_actor_model>>::~t_counted_ptr<t_abstract_cache_data<t_combat_actor_model>>(

)
{
    // Body unavailable.
}

// confidence:C; align-band; retn; map:19900
VA_CHT_1(0x005b1370, 0x195)
t_cached_ptr<t_combat_actor_model> t_abstract_cache<t_combat_actor_model>::get(
    t_progress_handler* arg_0
) const
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:19901
VA_CHT_1(0x005adc70, 0x4c)
t_abstract_cache_data<t_combat_actor_model>::~t_abstract_cache_data<t_combat_actor_model>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:19902
VA_CHT_1(0x005ad9c0, 0x8f)
t_abstract_cache<t_combat_actor_model_definition>::~t_abstract_cache<t_combat_actor_model_definition>()
{
    // Body unavailable.
}

// confidence:C; align-band; retn; map:19903
VA_CHT_1(0x005b1560, 0x195)
t_cached_ptr<t_combat_actor_model_definition> t_abstract_cache<t_combat_actor_model_definition>::get(
    t_progress_handler* arg_0
) const
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:19904
VA_CHT_1(0x005b1700, 0xa8)
t_pointer_cache<t_combat_actor_model_definition>::t_pointer_cache<t_combat_actor_model_definition>(
    std::string const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:19905
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_ptr<t_combat_actor_model>::t_owned_ptr<t_combat_actor_model>(t_combat_actor_model* arg_0)
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:19906
VA_CHT_1(0x005b12b0, 0x43)
t_owned_ptr<t_combat_actor_model>::~t_owned_ptr<t_combat_actor_model>()
{
    // Body unavailable.
}

// name:A; map symbol; map:19907
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_actor_model* t_owned_ptr<t_combat_actor_model>::get() const
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:19908
VA_CHT_1(0x005b18c0, 0x6d)
void t_owned_ptr<t_combat_actor_model>::reset(t_combat_actor_model* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:19909
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_cached_ptr<t_combat_actor_model>::operator==(t_combat_actor_model const* arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:19910
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_hero_combat_model_type enum_incr(t_hero_combat_model_type& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:19911
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_missile_type enum_incr(t_missile_type& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:19928
VA_CHT_1_COMPGEN(0x005b18a0, 0x1e, VECTOR_DELETING_DTOR, "t_abstract_cache<t_combat_actor_model_definition>")

// name:A; map symbol; map:19929
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_abstract_cache<t_combat_actor_model_definition>")

// name:A; map symbol; map:19930
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_cache_data<t_combat_actor_model_definition>>::~t_counted_ptr<t_abstract_cache_data<t_combat_actor_model_definition>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:19931
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_pointer_cache<t_combat_actor_model_definition>")

// name:A; map symbol; map:19932
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_pointer_cache<t_combat_actor_model_definition>")

namespace {

// confidence:C; align-band; retn,stable; map:19933
VA_CHT_1(0x005b1070, 0x56)
t_missile_caches& t_missile_caches::operator=(t_missile_caches const& arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:C; align-band; retn,stable; map:19934
VA_CHT_1_COMPGEN(0x005b1930, 0x1e, SCALAR_DELETING_DTOR, t_missile_caches)

namespace {

// name:A; map symbol; map:19939
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_missile_caches::t_missile_caches(t_missile_caches const& arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:19940
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_cache_data<t_combat_actor_model>>::t_counted_ptr<t_abstract_cache_data<t_combat_actor_model>>(
    t_abstract_cache_data<t_combat_actor_model>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:19941
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_cache_data<t_combat_actor_model>* t_counted_ptr<t_abstract_cache_data<t_combat_actor_model>>::operator t_abstract_cache_data<t_combat_actor_model>*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:19942
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_cache_data<t_combat_actor_model>* t_counted_ptr<t_abstract_cache_data<t_combat_actor_model>>::operator->(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:19943
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cached_ptr<t_combat_actor_model>::t_cached_ptr<t_combat_actor_model>(
    t_combat_actor_model* arg_0,
    t_abstract_cache_base* arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:19944
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cached_ptr<t_combat_actor_model_definition>::t_cached_ptr<t_combat_actor_model_definition>(
    t_combat_actor_model_definition* arg_0,
    t_abstract_cache_base* arg_1
)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:19945
VA_CHT_1(0x005b1970, 0x19)
t_abstract_cache<t_combat_actor_model_definition>::t_abstract_cache<t_combat_actor_model_definition>(
    t_abstract_cache_data<t_combat_actor_model_definition>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:19946
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_cache_data<t_combat_actor_model_definition>>::t_counted_ptr<t_abstract_cache_data<t_combat_actor_model_definition>>(
    t_abstract_cache_data<t_combat_actor_model_definition>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:19947
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_cache_data<t_combat_actor_model_definition>* t_counted_ptr<t_abstract_cache_data<t_combat_actor_model_definition>>::operator t_abstract_cache_data<t_combat_actor_model_definition>*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:19948
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_cache_data<t_combat_actor_model_definition>* t_counted_ptr<t_abstract_cache_data<t_combat_actor_model_definition>>::operator->(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:19949
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_ptr_cache_data<t_combat_actor_model_definition>::t_ptr_cache_data<t_combat_actor_model_definition>(
    std::string const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:19950
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_abstract_resource_cache_data<t_combat_actor_model_definition>::get_load_cost()
{
    // Body unavailable.
}

// name:A; map symbol; map:19951
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_abstract_resource_cache_data<t_combat_actor_model_definition>::add_reference()
{
    // Body unavailable.
}

// name:A; map symbol; map:19952
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_actor_model_definition* t_abstract_resource_cache_data<t_combat_actor_model_definition>::do_get(
    t_progress_handler* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:19953
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_abstract_resource_cache_data<t_combat_actor_model_definition>::release_memory()
{
    // Body unavailable.
}

// name:A; map symbol; map:19954
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_abstract_resource_cache_data<t_combat_actor_model_definition>::remove_reference()
{
    // Body unavailable.
}

// name:A; map symbol; map:19955
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_abstract_resource_cache_data<t_combat_actor_model_definition>::read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_progress_handler* arg_1
)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:19956
VA_CHT_1(0x005b1a10, 0x6)
char const* t_ptr_cache_data<t_combat_actor_model_definition>::get_prefix() const
{
    // Body unavailable.
}

// confidence:A; align-band; retn,vslot; map:19957
VA_CHT_1(0x005b1a20, 0xf6)
t_combat_actor_model_definition* t_ptr_cache_data<t_combat_actor_model_definition>::do_read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_progress_handler* arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:19958
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_actor_model_definition::t_combat_actor_model_definition()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:19959
VA_CHT_1_COMPGEN(0x005b1b20, 0x1e, VECTOR_DELETING_DTOR, t_combat_actor_model_definition)

// name:A; map symbol; map:19960
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_combat_actor_model_definition)

// name:A; map symbol; map:19961
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_actor_model_definition::~t_combat_actor_model_definition()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:19962
VA_CHT_1(0x005b1b40, 0x9b)
t_actor_model_definition<t_combat_actor_model_definition_traits>::t_actor_model_definition<t_combat_actor_model_definition_traits>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:19963
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_actor_model_definition<t_combat_actor_model_definition_traits>::~t_actor_model_definition<t_combat_actor_model_definition_traits>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:19964
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_actor_model_definition<t_combat_actor_model_definition_traits>")

// name:A; map symbol; map:19965
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_actor_model_definition<t_combat_actor_model_definition_traits>")

// confidence:C; align-band; retn,stable; map:19966
VA_CHT_1(0x005adff0, 0xf3)
t_static_vector<t_actor_action_definition, 14>::t_static_vector<t_actor_action_definition, 14>()
{
    // Body unavailable.
}

// name:A; map symbol; map:19967
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_static_vector<t_actor_action_definition, 14>::~t_static_vector<t_actor_action_definition, 14>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:19969
VA_CHT_1_COMPGEN(0x005b1d50, 0x1e, SCALAR_DELETING_DTOR, "t_ptr_cache_data<t_combat_actor_model_definition>")

// name:A; map symbol; map:19970
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_ptr_cache_data<t_combat_actor_model_definition>")

// name:A; map symbol; map:19971
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_ptr_cache_data<t_combat_actor_model_definition>::~t_ptr_cache_data<t_combat_actor_model_definition>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:19972
VA_CHT_1(0x005b1d70, 0xcb)
t_abstract_resource_cache_data<t_combat_actor_model_definition>::~t_abstract_resource_cache_data<t_combat_actor_model_definition>(

)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:19973
VA_CHT_1(0x005b1990, 0x49)
t_abstract_cache_data<t_combat_actor_model_definition>::~t_abstract_cache_data<t_combat_actor_model_definition>(

)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:19974
VA_CHT_1_COMPGEN(0x005b1d30, 0x1e, VECTOR_DELETING_DTOR, "t_abstract_cache_data<t_combat_actor_model_definition>")

// name:A; map symbol; map:19975
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_abstract_cache_data<t_combat_actor_model_definition>")

// confidence:A; align-band; retn,stable,vslot; map:19976
VA_CHT_1_COMPGEN(0x005b1e40, 0x1e, VECTOR_DELETING_DTOR, "t_abstract_resource_cache_data<t_combat_actor_model_definition>")

// name:A; map symbol; map:19977
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_abstract_resource_cache_data<t_combat_actor_model_definition>")

// name:A; map symbol; map:19978
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_actor_action_definition* t_static_vector<t_actor_action_definition, 14>::begin()
{
    // Body unavailable.
}

// name:A; map symbol; map:19979
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_actor_action_definition* t_static_vector<t_actor_action_definition, 14>::end()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:19980
VA_CHT_1(0x005b1f30, 0x80)
t_abstract_resource_cache_data<t_combat_actor_model_definition>::t_abstract_resource_cache_data<t_combat_actor_model_definition>(
    std::string const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:19981
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_ptr<t_combat_actor_model_definition>::t_owned_ptr<t_combat_actor_model_definition>(
    t_combat_actor_model_definition* arg_0
)
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:19982
VA_CHT_1(0x005b1300, 0x43)
t_owned_ptr<t_combat_actor_model_definition>::~t_owned_ptr<t_combat_actor_model_definition>()
{
    // Body unavailable.
}

// name:A; map symbol; map:19983
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_actor_model_definition* t_owned_ptr<t_combat_actor_model_definition>::release()
{
    // Body unavailable.
}

// name:A; map symbol; map:19984
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_owned_ptr<t_combat_actor_model_definition>::reset(t_combat_actor_model_definition* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:19985
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_actor_model_definition& t_owned_ptr<t_combat_actor_model_definition>::operator*() const
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:19986
VA_CHT_1(0x005b1e60, 0xcb)
t_abstract_cache_data<t_combat_actor_model_definition>::t_abstract_cache_data<t_combat_actor_model_definition>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:19988
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_combat_actor_model_cache_data)

// confidence:C; align-order; stable; map:19989
VA_CHT_1_COMPGEN(0x005b1fc0, 0x8, VECTOR_DELETING_DTOR, "t_ptr_cache_data<t_combat_actor_model_definition>")

// confidence:C; align-order; stable; map:19990
VA_CHT_1_COMPGEN(0x005b1fd0, 0x8, VECTOR_DELETING_DTOR, "t_abstract_resource_cache_data<t_combat_actor_model_definition>")

// === .rdata (14 symbols) ===

// confidence:A; rtti-name; map:43882
DATA_CHT_1_COMPGEN(0x008dbf64, "const t_combat_actor_model_cache::`vftable'")

// confidence:A; rtti-name; map:43883
DATA_CHT_1_COMPGEN(0x008dbf8c, "const t_combat_actor_model_cache_data::`vftable'{for `t_cache_base'}")

// confidence:B; rtti-order; map:43884
DATA_CHT_1_COMPGEN(0x008dbf74, "const t_combat_actor_model_cache_data::`vftable'{for `t_abstract_cache_data<t_combat_actor_model>'}")

// confidence:A; rtti-name; map:43885
DATA_CHT_1_COMPGEN(0x008dbfd8, "const t_abstract_cache_data<t_combat_actor_model>::`vftable'")

// confidence:A; rtti-name; map:43886
DATA_CHT_1_COMPGEN(0x008dbf6c, "const t_abstract_cache<t_combat_actor_model>::`vftable'")

// confidence:A; rtti-name; map:43887
DATA_CHT_1_COMPGEN(0x008dc008, "const t_abstract_cache<t_combat_actor_model_definition>::`vftable'")

// confidence:A; rtti-name; map:43888
DATA_CHT_1_COMPGEN(0x008dbf9c, "const t_pointer_cache<t_combat_actor_model_definition>::`vftable'")

// confidence:A; rtti-name; map:43889
DATA_CHT_1_COMPGEN(0x008dbfa4, "const t_ptr_cache_data<t_combat_actor_model_definition>::`vftable'{for `t_abstract_resource_cache_base'}")

// confidence:B; rtti-order; map:43890
DATA_CHT_1_COMPGEN(0x008dbfbc, "const t_ptr_cache_data<t_combat_actor_model_definition>::`vftable'{for `t_abstract_cache_data<t_combat_actor_model_definition>'}")

// confidence:A; rtti-name; map:43891
DATA_CHT_1_COMPGEN(0x008dc010, "const t_combat_actor_model_definition::`vftable'")

// confidence:A; rtti-name; map:43892
DATA_CHT_1_COMPGEN(0x008dc018, "const t_actor_model_definition<t_combat_actor_model_definition_traits>::`vftable'")

// confidence:A; rtti-name; map:43893
DATA_CHT_1_COMPGEN(0x008dc020, "const t_abstract_resource_cache_data<t_combat_actor_model_definition>::`vftable'{for `t_abstract_resource_cache_base'}")

// confidence:B; rtti-order; map:43894
DATA_CHT_1_COMPGEN(0x008dc038, "const t_abstract_resource_cache_data<t_combat_actor_model_definition>::`vftable'{for `t_abstract_cache_data<t_combat_actor_model_definition>'}")

// confidence:A; rtti-name; map:43895
DATA_CHT_1_COMPGEN(0x008dbff0, "const t_abstract_cache_data<t_combat_actor_model_definition>::`vftable'")

// === .rdata$r (47 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_cache@Vt_combat_actor_model@@@@;bcd=503450;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50631
DATA_CHT_1_COMPGEN(0x00903450, "t_abstract_cache<t_combat_actor_model>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_combat_actor_model_cache@@;bcd=503468;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50632
DATA_CHT_1_COMPGEN(0x00903468, "t_combat_actor_model_cache::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_combat_actor_model_cache@@;vft=4dbf64;col=50349c;td=598848;chd=50348c;offset=0;cdOffset=0;validated-hierarchy; map:50633
DATA_CHT_1_COMPGEN(0x00903480, "t_combat_actor_model_cache::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_combat_actor_model_cache@@;vft=4dbf64;col=50349c;td=598848;chd=50348c;offset=0;cdOffset=0;validated-hierarchy; map:50634
DATA_CHT_1_COMPGEN(0x0090348c, "t_combat_actor_model_cache::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_combat_actor_model_cache@@;vft=4dbf64;col=50349c;td=598848;chd=50348c;offset=0;cdOffset=0;validated-hierarchy; map:50635
DATA_CHT_1_COMPGEN(0x0090349c, "const t_combat_actor_model_cache::`RTTI Complete Object Locator'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_combat_actor_model_cache_data@?%C:\Work\game\combat_actor_model_cache.cpp7877456@@;vft=4dbf8c;col=50361c;td=598a38;chd=503680;offset=16;cdOffset=0;validated-hierarchy; map:50636
DATA_CHT_1_COMPGEN(0x0090361c, "const t_combat_actor_model_cache_data::`RTTI Complete Object Locator'{for `t_cache_base'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_cache_data@Vt_combat_actor_model@@@@;bcd=503630;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50637
DATA_CHT_1_COMPGEN(0x00903630, "t_abstract_cache_data<t_combat_actor_model>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_combat_actor_model_cache_data@?%C:\Work\game\combat_actor_model_cache.cpp7877456@@;bcd=503648;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50638
DATA_CHT_1_COMPGEN(0x00903648, "t_combat_actor_model_cache_data::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_combat_actor_model_cache_data@?%C:\Work\game\combat_actor_model_cache.cpp7877456@@;vft=4dbf8c;col=50361c;td=598a38;chd=503680;offset=16;cdOffset=0;validated-hierarchy; map:50639
DATA_CHT_1_COMPGEN(0x00903660, "t_combat_actor_model_cache_data::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_combat_actor_model_cache_data@?%C:\Work\game\combat_actor_model_cache.cpp7877456@@;vft=4dbf8c;col=50361c;td=598a38;chd=503680;offset=16;cdOffset=0;validated-hierarchy; map:50640
DATA_CHT_1_COMPGEN(0x00903680, "t_combat_actor_model_cache_data::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:50641
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_combat_actor_model_cache_data::`RTTI Complete Object Locator'{for `t_abstract_cache_data<t_combat_actor_model>'}")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_cache_data@Vt_combat_actor_model@@@@;vft=4dbfd8;col=503500;td=5989f4;chd=5034f0;offset=0;cdOffset=0;validated-hierarchy; map:50642
DATA_CHT_1_COMPGEN(0x009034dc, "t_abstract_cache_data<t_combat_actor_model>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_cache_data@Vt_combat_actor_model@@@@;vft=4dbfd8;col=503500;td=5989f4;chd=5034f0;offset=0;cdOffset=0;validated-hierarchy; map:50643
DATA_CHT_1_COMPGEN(0x009034f0, "t_abstract_cache_data<t_combat_actor_model>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_cache_data@Vt_combat_actor_model@@@@;vft=4dbfd8;col=503500;td=5989f4;chd=5034f0;offset=0;cdOffset=0;validated-hierarchy; map:50644
DATA_CHT_1_COMPGEN(0x00903500, "const t_abstract_cache_data<t_combat_actor_model>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_cache@Vt_combat_actor_model@@@@;vft=4dbf6c;col=5034c8;td=59880c;chd=5034b8;offset=0;cdOffset=0;validated-hierarchy; map:50645
DATA_CHT_1_COMPGEN(0x009034b0, "t_abstract_cache<t_combat_actor_model>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_cache@Vt_combat_actor_model@@@@;vft=4dbf6c;col=5034c8;td=59880c;chd=5034b8;offset=0;cdOffset=0;validated-hierarchy; map:50646
DATA_CHT_1_COMPGEN(0x009034b8, "t_abstract_cache<t_combat_actor_model>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_cache@Vt_combat_actor_model@@@@;vft=4dbf6c;col=5034c8;td=59880c;chd=5034b8;offset=0;cdOffset=0;validated-hierarchy; map:50647
DATA_CHT_1_COMPGEN(0x009034c8, "const t_abstract_cache<t_combat_actor_model>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_cache@Vt_combat_actor_model_definition@@@@;bcd=5035bc;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50648
DATA_CHT_1_COMPGEN(0x009035bc, "t_abstract_cache<t_combat_actor_model_definition>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_cache@Vt_combat_actor_model_definition@@@@;vft=4dc008;col=5036f4;td=598968;chd=5036e4;offset=0;cdOffset=0;validated-hierarchy; map:50649
DATA_CHT_1_COMPGEN(0x009036dc, "t_abstract_cache<t_combat_actor_model_definition>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_cache@Vt_combat_actor_model_definition@@@@;vft=4dc008;col=5036f4;td=598968;chd=5036e4;offset=0;cdOffset=0;validated-hierarchy; map:50650
DATA_CHT_1_COMPGEN(0x009036e4, "t_abstract_cache<t_combat_actor_model_definition>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_cache@Vt_combat_actor_model_definition@@@@;vft=4dc008;col=5036f4;td=598968;chd=5036e4;offset=0;cdOffset=0;validated-hierarchy; map:50651
DATA_CHT_1_COMPGEN(0x009036f4, "const t_abstract_cache<t_combat_actor_model_definition>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_pointer_cache@Vt_combat_actor_model_definition@@@@;bcd=5035d4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50652
DATA_CHT_1_COMPGEN(0x009035d4, "t_pointer_cache<t_combat_actor_model_definition>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_pointer_cache@Vt_combat_actor_model_definition@@@@;vft=4dbf9c;col=503608;td=5989b0;chd=5035f8;offset=0;cdOffset=0;validated-hierarchy; map:50653
DATA_CHT_1_COMPGEN(0x009035ec, "t_pointer_cache<t_combat_actor_model_definition>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_pointer_cache@Vt_combat_actor_model_definition@@@@;vft=4dbf9c;col=503608;td=5989b0;chd=5035f8;offset=0;cdOffset=0;validated-hierarchy; map:50654
DATA_CHT_1_COMPGEN(0x009035f8, "t_pointer_cache<t_combat_actor_model_definition>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_pointer_cache@Vt_combat_actor_model_definition@@@@;vft=4dbf9c;col=503608;td=5989b0;chd=5035f8;offset=0;cdOffset=0;validated-hierarchy; map:50655
DATA_CHT_1_COMPGEN(0x00903608, "const t_pointer_cache<t_combat_actor_model_definition>::`RTTI Complete Object Locator'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_ptr_cache_data@Vt_combat_actor_model_definition@@@@;vft=4dbfa4;col=5035a8;td=598920;chd=503598;offset=16;cdOffset=0;validated-hierarchy; map:50656
DATA_CHT_1_COMPGEN(0x009035a8, "const t_ptr_cache_data<t_combat_actor_model_definition>::`RTTI Complete Object Locator'{for `t_abstract_resource_cache_base'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_cache_data@Vt_combat_actor_model_definition@@@@;bcd=503528;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50657
DATA_CHT_1_COMPGEN(0x00903528, "t_abstract_cache_data<t_combat_actor_model_definition>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_resource_cache_data@Vt_combat_actor_model_definition@@@@;bcd=503540;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50658
DATA_CHT_1_COMPGEN(0x00903540, "t_abstract_resource_cache_data<t_combat_actor_model_definition>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_ptr_cache_data@Vt_combat_actor_model_definition@@@@;bcd=503558;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50659
DATA_CHT_1_COMPGEN(0x00903558, "t_ptr_cache_data<t_combat_actor_model_definition>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_ptr_cache_data@Vt_combat_actor_model_definition@@@@;vft=4dbfa4;col=5035a8;td=598920;chd=503598;offset=16;cdOffset=0;validated-hierarchy; map:50660
DATA_CHT_1_COMPGEN(0x00903570, "t_ptr_cache_data<t_combat_actor_model_definition>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_ptr_cache_data@Vt_combat_actor_model_definition@@@@;vft=4dbfa4;col=5035a8;td=598920;chd=503598;offset=16;cdOffset=0;validated-hierarchy; map:50661
DATA_CHT_1_COMPGEN(0x00903598, "t_ptr_cache_data<t_combat_actor_model_definition>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:50662
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_ptr_cache_data<t_combat_actor_model_definition>::`RTTI Complete Object Locator'{for `t_abstract_cache_data<t_combat_actor_model_definition>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_actor_model_definition@Ut_combat_actor_model_definition_traits@@@@;bcd=503738;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50663
DATA_CHT_1_COMPGEN(0x00903738, "t_actor_model_definition<t_combat_actor_model_definition_traits>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_combat_actor_model_definition@@;bcd=503750;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50664
DATA_CHT_1_COMPGEN(0x00903750, "t_combat_actor_model_definition::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_combat_actor_model_definition@@;vft=4dc010;col=503788;td=598b24;chd=503778;offset=0;cdOffset=0;validated-hierarchy; map:50665
DATA_CHT_1_COMPGEN(0x00903768, "t_combat_actor_model_definition::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_combat_actor_model_definition@@;vft=4dc010;col=503788;td=598b24;chd=503778;offset=0;cdOffset=0;validated-hierarchy; map:50666
DATA_CHT_1_COMPGEN(0x00903778, "t_combat_actor_model_definition::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_combat_actor_model_definition@@;vft=4dc010;col=503788;td=598b24;chd=503778;offset=0;cdOffset=0;validated-hierarchy; map:50667
DATA_CHT_1_COMPGEN(0x00903788, "const t_combat_actor_model_definition::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_actor_model_definition@Ut_combat_actor_model_definition_traits@@@@;vft=4dc018;col=503724;td=598ad0;chd=503714;offset=0;cdOffset=0;validated-hierarchy; map:50668
DATA_CHT_1_COMPGEN(0x00903708, "t_actor_model_definition<t_combat_actor_model_definition_traits>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_actor_model_definition@Ut_combat_actor_model_definition_traits@@@@;vft=4dc018;col=503724;td=598ad0;chd=503714;offset=0;cdOffset=0;validated-hierarchy; map:50669
DATA_CHT_1_COMPGEN(0x00903714, "t_actor_model_definition<t_combat_actor_model_definition_traits>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_actor_model_definition@Ut_combat_actor_model_definition_traits@@@@;vft=4dc018;col=503724;td=598ad0;chd=503714;offset=0;cdOffset=0;validated-hierarchy; map:50670
DATA_CHT_1_COMPGEN(0x00903724, "const t_actor_model_definition<t_combat_actor_model_definition_traits>::`RTTI Complete Object Locator'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_resource_cache_data@Vt_combat_actor_model_definition@@@@;vft=4dc020;col=5037e4;td=5988c8;chd=5037d4;offset=16;cdOffset=0;validated-hierarchy; map:50671
DATA_CHT_1_COMPGEN(0x009037e4, "const t_abstract_resource_cache_data<t_combat_actor_model_definition>::`RTTI Complete Object Locator'{for `t_abstract_resource_cache_base'}")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_resource_cache_data@Vt_combat_actor_model_definition@@@@;vft=4dc020;col=5037e4;td=5988c8;chd=5037d4;offset=16;cdOffset=0;validated-hierarchy; map:50672
DATA_CHT_1_COMPGEN(0x009037b0, "t_abstract_resource_cache_data<t_combat_actor_model_definition>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_resource_cache_data@Vt_combat_actor_model_definition@@@@;vft=4dc020;col=5037e4;td=5988c8;chd=5037d4;offset=16;cdOffset=0;validated-hierarchy; map:50673
DATA_CHT_1_COMPGEN(0x009037d4, "t_abstract_resource_cache_data<t_combat_actor_model_definition>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:50674
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_abstract_resource_cache_data<t_combat_actor_model_definition>::`RTTI Complete Object Locator'{for `t_abstract_cache_data<t_combat_actor_model_definition>'}")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_cache_data@Vt_combat_actor_model_definition@@@@;vft=4dbff0;col=5036c8;td=598878;chd=5036b8;offset=0;cdOffset=0;validated-hierarchy; map:50675
DATA_CHT_1_COMPGEN(0x009036a4, "t_abstract_cache_data<t_combat_actor_model_definition>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_cache_data@Vt_combat_actor_model_definition@@@@;vft=4dbff0;col=5036c8;td=598878;chd=5036b8;offset=0;cdOffset=0;validated-hierarchy; map:50676
DATA_CHT_1_COMPGEN(0x009036b8, "t_abstract_cache_data<t_combat_actor_model_definition>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_cache_data@Vt_combat_actor_model_definition@@@@;vft=4dbff0;col=5036c8;td=598878;chd=5036b8;offset=0;cdOffset=0;validated-hierarchy; map:50677
DATA_CHT_1_COMPGEN(0x009036c8, "const t_abstract_cache_data<t_combat_actor_model_definition>::`RTTI Complete Object Locator'")

// === .data (11 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_cache@Vt_combat_actor_model@@@@;td=59880c;validated-header; map:58173
DATA_CHT_1_COMPGEN(0x0099880c, "t_abstract_cache<t_combat_actor_model> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_combat_actor_model_cache@@;td=598848;validated-header; map:58174
DATA_CHT_1_COMPGEN(0x00998848, "t_combat_actor_model_cache `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_cache_data@Vt_combat_actor_model@@@@;td=5989f4;validated-header; map:58175
DATA_CHT_1_COMPGEN(0x009989f4, "t_abstract_cache_data<t_combat_actor_model> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_combat_actor_model_cache_data@?%C:\Work\game\combat_actor_model_cache.cpp7877456@@;td=598a38;validated-header; map:58176
DATA_CHT_1_COMPGEN(0x00998a38, "t_combat_actor_model_cache_data `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_cache@Vt_combat_actor_model_definition@@@@;td=598968;validated-header; map:58177
DATA_CHT_1_COMPGEN(0x00998968, "t_abstract_cache<t_combat_actor_model_definition> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_pointer_cache@Vt_combat_actor_model_definition@@@@;td=5989b0;validated-header; map:58178
DATA_CHT_1_COMPGEN(0x009989b0, "t_pointer_cache<t_combat_actor_model_definition> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_cache_data@Vt_combat_actor_model_definition@@@@;td=598878;validated-header; map:58179
DATA_CHT_1_COMPGEN(0x00998878, "t_abstract_cache_data<t_combat_actor_model_definition> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_resource_cache_data@Vt_combat_actor_model_definition@@@@;td=5988c8;validated-header; map:58180
DATA_CHT_1_COMPGEN(0x009988c8, "t_abstract_resource_cache_data<t_combat_actor_model_definition> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_ptr_cache_data@Vt_combat_actor_model_definition@@@@;td=598920;validated-header; map:58181
DATA_CHT_1_COMPGEN(0x00998920, "t_ptr_cache_data<t_combat_actor_model_definition> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_actor_model_definition@Ut_combat_actor_model_definition_traits@@@@;td=598ad0;validated-header; map:58182
DATA_CHT_1_COMPGEN(0x00998ad0, "t_actor_model_definition<t_combat_actor_model_definition_traits> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_combat_actor_model_definition@@;td=598b24;validated-header; map:58183
DATA_CHT_1_COMPGEN(0x00998b24, "t_combat_actor_model_definition `RTTI Type Descriptor'")

// === .bss (2 symbols) ===

// name:A; map symbol; map:60101
DATA_CHT_1(UNACCOUNTED)
std::_Tree<double, std::pair<double const, t_creature_caches>, std::map<double, t_creature_caches, std::less<double>, std::allocator<t_creature_caches>>::_Kfn, std::less<double>, std::allocator<t_creature_caches>>::_Node*std::_Tree<double, std::pair<double const, t_creature_caches>, std::map<double, t_creature_caches, std::less<double>, std::allocator<t_creature_caches>>::_Kfn, std::less<double>, std::allocator<t_creature_caches>>::_Nil; // Initial value unavailable.

// name:A; map symbol; map:60103
DATA_CHT_1(UNACCOUNTED)
std::_Tree<double, std::pair<double const, t_hero_caches>, std::map<double, t_hero_caches, std::less<double>, std::allocator<t_hero_caches>>::_Kfn, std::less<double>, std::allocator<t_hero_caches>>::_Node*std::_Tree<double, std::pair<double const, t_hero_caches>, std::map<double, t_hero_caches, std::less<double>, std::allocator<t_hero_caches>>::_Kfn, std::less<double>, std::allocator<t_hero_caches>>::_Nil; // Initial value unavailable.
