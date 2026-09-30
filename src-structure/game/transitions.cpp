// transitions.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\transitions.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 60/105 (A:30 B:2 C:0); unaccounted 45; skipped std 4.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (68 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:61319; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0082eb90, 0x15, STATIC_INIT_DISPATCH, "transitions#1")

// name:C; dyninit; see ledger; map:61320
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "transitions#1")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:61321; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0082ebb0, 0x24, STATIC_INIT_DISPATCH, "transitions#2")

// name:C; dyninit; see ledger; map:61322
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "transitions#2")

// name:C; dyninit; see ledger; map:61323
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "transitions#2")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:61324; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0082ebe0, 0x14, STATIC_DTOR, "transitions#2")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:61325; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0082ec30, 0x8, STATIC_INIT_DISPATCH, "transitions#3")

// name:C; dyninit; see ledger; map:61326
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "transitions#3")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:61327; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0082ec40, 0x11, STATIC_INIT_DISPATCH, "transitions#4")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:61328; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0082ec60, 0x121, STATIC_CTOR, "transitions#4")

// name:C; dyninit; see ledger; map:61329
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "transitions#4")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:61330; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0082ed90, 0xa, STATIC_DTOR, "transitions#4")

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40359
VA_CHT_1(0x0082eda0, 0x1d)
t_transition_set_group::t_transition_set_group()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40360
VA_CHT_1(0x0082edc0, 0x182)
void t_transition_set_group::initialize() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40361
VA_CHT_1(0x0082f080, 0x1d)
t_transition_set const& t_transition_set_group::operator[](int arg_0) const
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:61331; name:B (dyninit; see ledger)
VA_CHT_1(0x0082f440, 0x20)
// transitions$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:61333; name:B (dyninit; see ledger)
VA_CHT_1(0x0082f7f0, 0x20)
// transitions$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:61334
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// transitions$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:40362
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_pointer_cache<t_transition_set_array>::~t_pointer_cache<t_transition_set_array>()
{
    // Body unavailable.
}

// name:A; map symbol; map:40363
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::string t_transition_set::get_name() const
{
    // Body unavailable.
}

// name:A; map symbol; map:40364
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_cache<t_transition_set_array>::~t_abstract_cache<t_transition_set_array>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40365
VA_CHT_1(0x0082f0a0, 0x195)
t_cached_ptr<t_transition_set_array> t_abstract_cache<t_transition_set_array>::get(
    t_progress_handler* arg_0
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:40366
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_pointer_cache<t_transition_set_array>::t_pointer_cache<t_transition_set_array>(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40367
VA_CHT_1(0x0082f240, 0x74)
t_cached_ptr<t_transition_set_array>::~t_cached_ptr<t_transition_set_array>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40368
VA_CHT_1(0x0082f7d0, 0x19)
t_transition_set_array* t_cached_ptr<t_transition_set_array>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:40369
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_transition_set_array& t_cached_ptr<t_transition_set_array>::operator*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:40370
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_abstract_cache<t_transition_set_array>")

// name:A; map symbol; map:40371
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_abstract_cache<t_transition_set_array>")

// name:A; map symbol; map:40372
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_cache_data<t_transition_set_array>>::~t_counted_ptr<t_abstract_cache_data<t_transition_set_array>>(

)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:40373
VA_CHT_1_COMPGEN(0x0082f2c0, 0x1e, VECTOR_DELETING_DTOR, "t_pointer_cache<t_transition_set_array>")

// name:A; map symbol; map:40374
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_pointer_cache<t_transition_set_array>")

// name:A; map symbol; map:40375
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cached_ptr<t_transition_set_array>::t_cached_ptr<t_transition_set_array>(
    t_cached_ptr<t_transition_set_array> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:40376
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_cache<t_transition_set_array>::t_abstract_cache<t_transition_set_array>(
    t_abstract_cache_data<t_transition_set_array>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:40377
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_cache_data<t_transition_set_array>>::t_counted_ptr<t_abstract_cache_data<t_transition_set_array>>(
    t_abstract_cache_data<t_transition_set_array>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:40378
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_cache_data<t_transition_set_array>* t_counted_ptr<t_abstract_cache_data<t_transition_set_array>>::operator t_abstract_cache_data<t_transition_set_array>*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:40379
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_cache_data<t_transition_set_array>* t_counted_ptr<t_abstract_cache_data<t_transition_set_array>>::operator->(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:40380
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cached_ptr<t_transition_set_array>::t_cached_ptr<t_transition_set_array>(
    t_transition_set_array* arg_0,
    t_abstract_cache_base* arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:40381
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_transition_set_array* t_cached_ptr<t_transition_set_array>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:40382
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_ptr_cache_data<t_transition_set_array>::t_ptr_cache_data<t_transition_set_array>(std::string const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:40383
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_abstract_resource_cache_data<t_transition_set_array>::get_load_cost()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:40384
VA_CHT_1(0x0082f330, 0x25)
void t_abstract_resource_cache_data<t_transition_set_array>::add_reference()
{
    // Body unavailable.
}

// name:A; map symbol; map:40385
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_transition_set_array* t_abstract_resource_cache_data<t_transition_set_array>::do_get(
    t_progress_handler* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:40386
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_abstract_resource_cache_data<t_transition_set_array>::release_memory()
{
    // Body unavailable.
}

// name:A; map symbol; map:40387
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_abstract_resource_cache_data<t_transition_set_array>::remove_reference()
{
    // Body unavailable.
}

// name:A; map symbol; map:40388
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_abstract_resource_cache_data<t_transition_set_array>::read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_progress_handler* arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:40389
VA_CHT_1(0x0082f360, 0x6)
char const* t_ptr_cache_data<t_transition_set_array>::get_prefix() const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:40390
VA_CHT_1(0x0082f370, 0xc2)
t_transition_set_array* t_ptr_cache_data<t_transition_set_array>::do_read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_progress_handler* arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40391
VA_CHT_1_COMPGEN(0x0082f860, 0x1e, SCALAR_DELETING_DTOR, t_transition_set_array)

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:40392
VA_CHT_1_COMPGEN(0x0082f480, 0x1e, SCALAR_DELETING_DTOR, "t_ptr_cache_data<t_transition_set_array>")

// name:A; map symbol; map:40393
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_ptr_cache_data<t_transition_set_array>")

// name:A; map symbol; map:40394
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_transition_set_array::t_transition_set_array()
{
    // Body unavailable.
}

// name:A; map symbol; map:40395
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_transition_set_array::~t_transition_set_array()
{
    // Body unavailable.
}

// name:A; map symbol; map:40396
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_ptr_cache_data<t_transition_set_array>::~t_ptr_cache_data<t_transition_set_array>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:40397
VA_CHT_1(0x0082f5c0, 0xdd)
t_abstract_resource_cache_data<t_transition_set_array>::~t_abstract_resource_cache_data<t_transition_set_array>(

)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:40398
VA_CHT_1(0x0082f2e0, 0x49)
t_abstract_cache_data<t_transition_set_array>::~t_abstract_cache_data<t_transition_set_array>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:40399
VA_CHT_1_COMPGEN(0x0082f460, 0x1e, SCALAR_DELETING_DTOR, "t_abstract_cache_data<t_transition_set_array>")

// name:A; map symbol; map:40400
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_abstract_cache_data<t_transition_set_array>")

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:40401
VA_CHT_1_COMPGEN(0x0082f6a0, 0x1e, SCALAR_DELETING_DTOR, "t_abstract_resource_cache_data<t_transition_set_array>")

// name:A; map symbol; map:40402
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_abstract_resource_cache_data<t_transition_set_array>")

// name:A; map symbol; map:40405
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_resource_cache_data<t_transition_set_array>::t_abstract_resource_cache_data<t_transition_set_array>(
    std::string const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:40406
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_ptr<t_transition_set_array>::t_owned_ptr<t_transition_set_array>(t_transition_set_array* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:40407
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_ptr<t_transition_set_array>::~t_owned_ptr<t_transition_set_array>()
{
    // Body unavailable.
}

// name:A; map symbol; map:40408
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_transition_set_array* t_owned_ptr<t_transition_set_array>::release()
{
    // Body unavailable.
}

// name:A; map symbol; map:40409
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_owned_ptr<t_transition_set_array>::reset(t_transition_set_array* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:40410
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_transition_set_array& t_owned_ptr<t_transition_set_array>::operator*() const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:40411
VA_CHT_1(0x0082f810, 0x4c)
t_abstract_cache_data<t_transition_set_array>::t_abstract_cache_data<t_transition_set_array>()
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40413
VA_CHT_1_COMPGEN(0x0082f880, 0x8, VECTOR_DELETING_DTOR, "t_ptr_cache_data<t_transition_set_array>")

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:40414
VA_CHT_1_COMPGEN(0x0082f890, 0x8, VECTOR_DELETING_DTOR, "t_abstract_resource_cache_data<t_transition_set_array>")

// === .rdata (7 symbols) ===

// confidence:A; rtti-name; map:45995
DATA_CHT_1_COMPGEN(0x008f0760, "const t_abstract_cache<t_transition_set_array>::`vftable'")

// confidence:A; rtti-name; map:45996
DATA_CHT_1_COMPGEN(0x008f0724, "const t_pointer_cache<t_transition_set_array>::`vftable'")

// confidence:A; rtti-name; map:45997
DATA_CHT_1_COMPGEN(0x008f072c, "const t_ptr_cache_data<t_transition_set_array>::`vftable'{for `t_abstract_resource_cache_base'}")

// confidence:B; rtti-order; map:45998
DATA_CHT_1_COMPGEN(0x008f0744, "const t_ptr_cache_data<t_transition_set_array>::`vftable'{for `t_abstract_cache_data<t_transition_set_array>'}")

// confidence:A; rtti-name; map:45999
DATA_CHT_1_COMPGEN(0x008f0780, "const t_abstract_resource_cache_data<t_transition_set_array>::`vftable'{for `t_abstract_resource_cache_base'}")

// confidence:B; rtti-order; map:46000
DATA_CHT_1_COMPGEN(0x008f0798, "const t_abstract_resource_cache_data<t_transition_set_array>::`vftable'{for `t_abstract_cache_data<t_transition_set_array>'}")

// confidence:A; rtti-name; map:46001
DATA_CHT_1_COMPGEN(0x008f0768, "const t_abstract_cache_data<t_transition_set_array>::`vftable'")

// === .rdata$r (22 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_cache@Vt_transition_set_array@@@@;bcd=51df18;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56886
DATA_CHT_1_COMPGEN(0x0091df18, "t_abstract_cache<t_transition_set_array>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_cache@Vt_transition_set_array@@@@;vft=4f0760;col=51df90;td=5bf550;chd=51df80;offset=0;cdOffset=0;validated-hierarchy; map:56887
DATA_CHT_1_COMPGEN(0x0091df78, "t_abstract_cache<t_transition_set_array>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_cache@Vt_transition_set_array@@@@;vft=4f0760;col=51df90;td=5bf550;chd=51df80;offset=0;cdOffset=0;validated-hierarchy; map:56888
DATA_CHT_1_COMPGEN(0x0091df80, "t_abstract_cache<t_transition_set_array>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_cache@Vt_transition_set_array@@@@;vft=4f0760;col=51df90;td=5bf550;chd=51df80;offset=0;cdOffset=0;validated-hierarchy; map:56889
DATA_CHT_1_COMPGEN(0x0091df90, "const t_abstract_cache<t_transition_set_array>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_pointer_cache@Vt_transition_set_array@@@@;bcd=51df30;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56890
DATA_CHT_1_COMPGEN(0x0091df30, "t_pointer_cache<t_transition_set_array>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_pointer_cache@Vt_transition_set_array@@@@;vft=4f0724;col=51df64;td=5bf58c;chd=51df54;offset=0;cdOffset=0;validated-hierarchy; map:56891
DATA_CHT_1_COMPGEN(0x0091df48, "t_pointer_cache<t_transition_set_array>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_pointer_cache@Vt_transition_set_array@@@@;vft=4f0724;col=51df64;td=5bf58c;chd=51df54;offset=0;cdOffset=0;validated-hierarchy; map:56892
DATA_CHT_1_COMPGEN(0x0091df54, "t_pointer_cache<t_transition_set_array>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_pointer_cache@Vt_transition_set_array@@@@;vft=4f0724;col=51df64;td=5bf58c;chd=51df54;offset=0;cdOffset=0;validated-hierarchy; map:56893
DATA_CHT_1_COMPGEN(0x0091df64, "const t_pointer_cache<t_transition_set_array>::`RTTI Complete Object Locator'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_ptr_cache_data@Vt_transition_set_array@@@@;vft=4f072c;col=51df04;td=5bf514;chd=51def4;offset=16;cdOffset=0;validated-hierarchy; map:56894
DATA_CHT_1_COMPGEN(0x0091df04, "const t_ptr_cache_data<t_transition_set_array>::`RTTI Complete Object Locator'{for `t_abstract_resource_cache_base'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_cache_data@Vt_transition_set_array@@@@;bcd=51de84;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56895
DATA_CHT_1_COMPGEN(0x0091de84, "t_abstract_cache_data<t_transition_set_array>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_resource_cache_data@Vt_transition_set_array@@@@;bcd=51de9c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56896
DATA_CHT_1_COMPGEN(0x0091de9c, "t_abstract_resource_cache_data<t_transition_set_array>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_ptr_cache_data@Vt_transition_set_array@@@@;bcd=51deb4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56897
DATA_CHT_1_COMPGEN(0x0091deb4, "t_ptr_cache_data<t_transition_set_array>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_ptr_cache_data@Vt_transition_set_array@@@@;vft=4f072c;col=51df04;td=5bf514;chd=51def4;offset=16;cdOffset=0;validated-hierarchy; map:56898
DATA_CHT_1_COMPGEN(0x0091decc, "t_ptr_cache_data<t_transition_set_array>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_ptr_cache_data@Vt_transition_set_array@@@@;vft=4f072c;col=51df04;td=5bf514;chd=51def4;offset=16;cdOffset=0;validated-hierarchy; map:56899
DATA_CHT_1_COMPGEN(0x0091def4, "t_ptr_cache_data<t_transition_set_array>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:56900
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_ptr_cache_data<t_transition_set_array>::`RTTI Complete Object Locator'{for `t_abstract_cache_data<t_transition_set_array>'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_resource_cache_data@Vt_transition_set_array@@@@;vft=4f0780;col=51e024;td=5bf4c8;chd=51e014;offset=16;cdOffset=0;validated-hierarchy; map:56901
DATA_CHT_1_COMPGEN(0x0091e024, "const t_abstract_resource_cache_data<t_transition_set_array>::`RTTI Complete Object Locator'{for `t_abstract_resource_cache_base'}")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_resource_cache_data@Vt_transition_set_array@@@@;vft=4f0780;col=51e024;td=5bf4c8;chd=51e014;offset=16;cdOffset=0;validated-hierarchy; map:56902
DATA_CHT_1_COMPGEN(0x0091dff0, "t_abstract_resource_cache_data<t_transition_set_array>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_resource_cache_data@Vt_transition_set_array@@@@;vft=4f0780;col=51e024;td=5bf4c8;chd=51e014;offset=16;cdOffset=0;validated-hierarchy; map:56903
DATA_CHT_1_COMPGEN(0x0091e014, "t_abstract_resource_cache_data<t_transition_set_array>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:56904
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_abstract_resource_cache_data<t_transition_set_array>::`RTTI Complete Object Locator'{for `t_abstract_cache_data<t_transition_set_array>'}")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_cache_data@Vt_transition_set_array@@@@;vft=4f0768;col=51dfc8;td=5bf488;chd=51dfb8;offset=0;cdOffset=0;validated-hierarchy; map:56905
DATA_CHT_1_COMPGEN(0x0091dfa4, "t_abstract_cache_data<t_transition_set_array>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_cache_data@Vt_transition_set_array@@@@;vft=4f0768;col=51dfc8;td=5bf488;chd=51dfb8;offset=0;cdOffset=0;validated-hierarchy; map:56906
DATA_CHT_1_COMPGEN(0x0091dfb8, "t_abstract_cache_data<t_transition_set_array>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_cache_data@Vt_transition_set_array@@@@;vft=4f0768;col=51dfc8;td=5bf488;chd=51dfb8;offset=0;cdOffset=0;validated-hierarchy; map:56907
DATA_CHT_1_COMPGEN(0x0091dfc8, "const t_abstract_cache_data<t_transition_set_array>::`RTTI Complete Object Locator'")

// === .data (5 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_cache@Vt_transition_set_array@@@@;td=5bf550;validated-header; map:59692
DATA_CHT_1_COMPGEN(0x009bf550, "t_abstract_cache<t_transition_set_array> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_pointer_cache@Vt_transition_set_array@@@@;td=5bf58c;validated-header; map:59693
DATA_CHT_1_COMPGEN(0x009bf58c, "t_pointer_cache<t_transition_set_array> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_cache_data@Vt_transition_set_array@@@@;td=5bf488;validated-header; map:59694
DATA_CHT_1_COMPGEN(0x009bf488, "t_abstract_cache_data<t_transition_set_array> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_resource_cache_data@Vt_transition_set_array@@@@;td=5bf4c8;validated-header; map:59695
DATA_CHT_1_COMPGEN(0x009bf4c8, "t_abstract_resource_cache_data<t_transition_set_array> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_ptr_cache_data@Vt_transition_set_array@@@@;td=5bf514;validated-header; map:59696
DATA_CHT_1_COMPGEN(0x009bf514, "t_ptr_cache_data<t_transition_set_array> `RTTI Type Descriptor'")

// === .bss (3 symbols) ===

// name:A; map symbol; map:60434
DATA_CHT_1(UNACCOUNTED)
// t_transition_set*transition_masks

// name:A; map symbol; map:60435
DATA_CHT_1(UNACCOUNTED)
t_transition_set_group g_transition_masks; // Initial value unavailable.

namespace {

// name:A; map symbol; map:60436
DATA_CHT_1(UNACCOUNTED)
bool g_initialized; // Initial value unavailable.

} // anonymous namespace
