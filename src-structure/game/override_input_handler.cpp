// override_input_handler.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 75/138 (A:45 B:3 C:0); unaccounted 63; skipped std 3.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (69 symbols) ===

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:31464
VA_CHT_1(0x00752600, 0x42)
t_override_input::t_override_input()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:31465
VA_CHT_1(0x00752650, 0x8c)
t_override_input::t_override_input(std::vector<bool, std::allocator<bool>> const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:31466
VA_CHT_1(0x007526e0, 0x250)
void t_override_input::common_constructor()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:31467
VA_CHT_1(0x00752930, 0xe4)
t_override_input::~t_override_input()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:31468
VA_CHT_1(0x00752a20, 0x34)
void t_override_input::char_event(char* arg_0, bool* arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:31469
VA_CHT_1(0x00752a60, 0x34)
void t_override_input::key_event(t_key_code* arg_0, bool* arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:31470
VA_CHT_1(0x00752aa0, 0x34)
void t_override_input::mouse_event(t_mouse_event* arg_0, bool* arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:31471
VA_CHT_1(0x00752ae0, 0xa)
void t_override_input::non_handled_mouse_event(t_mouse_event* arg_0, bool* arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:31472
VA_CHT_1(0x00752af0, 0x2b)
t_key_event::t_key_event(char arg_0, unsigned int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:31473
VA_CHT_1(0x00752b20, 0x2a)
t_key_event::t_key_event(t_key_code arg_0, unsigned int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:31474
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_key_event::~t_key_event()
{
    // Body unavailable.
}

// name:A; map symbol; map:31475
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_key_event::check_key_event(t_key_event const& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:31476
VA_CHT_1(0x00752b50, 0x40)
bool t_key_event::check_key_event(char arg_0, unsigned int arg_1) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:31477
VA_CHT_1(0x00752b90, 0x3f)
bool t_key_event::check_key_event(t_key_code arg_0, unsigned int arg_1) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:31478
VA_CHT_1(0x00752bd0, 0x35)
unsigned int build_extended_key_flags()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:31479
VA_CHT_1(0x00752ea0, 0x21)
bool check_hotkeys(
    std::vector<t_key_event, std::allocator<t_key_event>> const& arg_0,
    t_key_event const& arg_1
)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:63833; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00752ed0, 0x20, STATIC_INIT_DISPATCH, override_input_handler)

// name:A; map symbol; map:31480
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_mouse_event*, bool*>& t_handler_2<t_mouse_event*, bool*>::operator=(
    t_handler_2<t_mouse_event*, bool*> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:31481
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_mouse_event*, bool*>::t_handler_2<t_mouse_event*, bool*>(
    t_handler_2<t_mouse_event*, bool*> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:31484
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_2<t_mouse_event*, bool*>>::t_counted_ptr<t_handler_base_2<t_mouse_event*, bool*>>(
    t_counted_ptr<t_handler_base_2<t_mouse_event*, bool*>> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:31485
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_2<t_mouse_event*, bool*>>& t_counted_ptr<t_handler_base_2<t_mouse_event*, bool*>>::operator=(
    t_counted_ptr<t_handler_base_2<t_mouse_event*, bool*>> const& arg_0
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:31486
VA_CHT_1(0x00752c60, 0x57)
t_handler_2<t_mouse_event*, bool*> bound_handler(
    t_override_input& arg_0,
    void (t_override_input::*)(t_mouse_event*, bool*)
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:31487
VA_CHT_1(0x00752cc0, 0x57)
t_handler_2<t_key_code*, bool*> bound_handler(
    t_override_input& arg_0,
    void (t_override_input::*)(t_key_code*, bool*)
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:31488
VA_CHT_1(0x00752d20, 0x57)
t_handler_2<char*, bool*> bound_handler(t_override_input& arg_0, void (t_override_input::*)(char*, bool*))
{
    // Body unavailable.
}

// name:A; map symbol; map:31489
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_2<t_override_input, t_mouse_event*, bool*>::t_bound_handler_2<t_override_input, t_mouse_event*, bool*>(
    t_override_input& arg_0,
    void (t_override_input::*)(t_mouse_event*, bool*)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:31490
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_2<t_override_input, t_mouse_event*, bool*>::operator()(t_mouse_event* arg_0, bool* arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:31491
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_2<t_override_input, t_key_code*, bool*>::t_bound_handler_2<t_override_input, t_key_code*, bool*>(
    t_override_input& arg_0,
    void (t_override_input::*)(t_key_code*, bool*)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:31492
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_2<t_override_input, t_key_code*, bool*>::operator()(t_key_code* arg_0, bool* arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:31493
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_2<t_override_input, char*, bool*>::t_bound_handler_2<t_override_input, char*, bool*>(
    t_override_input& arg_0,
    void (t_override_input::*)(char*, bool*)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:31494
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_2<t_override_input, char*, bool*>::operator()(char* arg_0, bool* arg_1)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:31495
VA_CHT_1_COMPGEN(0x00752de0, 0x1e, SCALAR_DELETING_DTOR, "t_bound_handler_2<t_override_input, t_mouse_event*, bool*>")

// name:A; map symbol; map:31496
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_override_input, t_mouse_event*, bool*>")

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:31497
VA_CHT_1(0x00752c10, 0x44)
t_handler_base_2<t_mouse_event*, bool*>::t_handler_base_2<t_mouse_event*, bool*>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:31498
VA_CHT_1_COMPGEN(0x00752e00, 0x1e, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_override_input, t_key_code*, bool*>")

// name:A; map symbol; map:31499
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_2<t_override_input, t_key_code*, bool*>")

// name:A; map symbol; map:31500
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_key_code*, bool*>::t_handler_base_2<t_key_code*, bool*>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:31501
VA_CHT_1_COMPGEN(0x00752e20, 0x1e, SCALAR_DELETING_DTOR, "t_bound_handler_2<t_override_input, char*, bool*>")

// name:A; map symbol; map:31502
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_override_input, char*, bool*>")

// name:A; map symbol; map:31503
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<char*, bool*>::t_handler_base_2<char*, bool*>()
{
    // Body unavailable.
}

// name:A; map symbol; map:31504
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_2<t_override_input, t_mouse_event*, bool*>::~t_bound_handler_2<t_override_input, t_mouse_event*, bool*>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:31505
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_mouse_event*, bool*>::~t_handler_base_2<t_mouse_event*, bool*>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:31506
VA_CHT_1(0x00752e40, 0x21)
t_abstract_function_2<void, t_mouse_event*, bool*>::~t_abstract_function_2<void, t_mouse_event*, bool*>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:31507
VA_CHT_1_COMPGEN(0x00752d80, 0x20, VECTOR_DELETING_DTOR, "t_abstract_function_2<void, t_mouse_event*, bool*>")

// name:A; map symbol; map:31508
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_abstract_function_2<void, t_mouse_event*, bool*>")

// name:A; map symbol; map:31509
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_handler_base_2<t_mouse_event*, bool*>")

// name:A; map symbol; map:31510
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_handler_base_2<t_mouse_event*, bool*>")

// name:A; map symbol; map:31511
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_function_2<void, t_mouse_event*, bool*>::t_abstract_function_2<void, t_mouse_event*, bool*>()
{
    // Body unavailable.
}

// name:A; map symbol; map:31512
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_2<t_override_input, t_key_code*, bool*>::~t_bound_handler_2<t_override_input, t_key_code*, bool*>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:31513
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_key_code*, bool*>::~t_handler_base_2<t_key_code*, bool*>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:31514
VA_CHT_1(0x00752e70, 0x21)
t_abstract_function_2<void, t_key_code*, bool*>::~t_abstract_function_2<void, t_key_code*, bool*>()
{
    // Body unavailable.
}

// name:A; map symbol; map:31515
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_abstract_function_2<void, t_key_code*, bool*>")

// name:A; map symbol; map:31516
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_abstract_function_2<void, t_key_code*, bool*>")

// name:A; map symbol; map:31517
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_handler_base_2<t_key_code*, bool*>")

// name:A; map symbol; map:31518
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_handler_base_2<t_key_code*, bool*>")

// name:A; map symbol; map:31519
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_function_2<void, t_key_code*, bool*>::t_abstract_function_2<void, t_key_code*, bool*>()
{
    // Body unavailable.
}

// name:A; map symbol; map:31520
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_2<t_override_input, char*, bool*>::~t_bound_handler_2<t_override_input, char*, bool*>()
{
    // Body unavailable.
}

// name:A; map symbol; map:31521
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<char*, bool*>::~t_handler_base_2<char*, bool*>()
{
    // Body unavailable.
}

// name:A; map symbol; map:31522
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_function_2<void, char*, bool*>::~t_abstract_function_2<void, char*, bool*>()
{
    // Body unavailable.
}

// name:A; map symbol; map:31523
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_abstract_function_2<void, char*, bool*>")

// name:A; map symbol; map:31524
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_abstract_function_2<void, char*, bool*>")

// name:A; map symbol; map:31525
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_handler_base_2<char*, bool*>")

// name:A; map symbol; map:31526
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_handler_base_2<char*, bool*>")

// name:A; map symbol; map:31527
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_function_2<void, char*, bool*>::t_abstract_function_2<void, char*, bool*>()
{
    // Body unavailable.
}

// name:A; map symbol; map:31528
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_override_input, char*, bool*>")

// name:A; map symbol; map:31529
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_handler_base_2<char*, bool*>")

// name:A; map symbol; map:31530
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_override_input, t_mouse_event*, bool*>")

// name:A; map symbol; map:31531
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_handler_base_2<t_key_code*, bool*>")

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:31532
VA_CHT_1_COMPGEN(0x00752f00, 0x8, VECTOR_DELETING_DTOR, "t_handler_base_2<t_mouse_event*, bool*>")

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:31533
VA_CHT_1_COMPGEN(0x00752f10, 0x8, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_override_input, t_key_code*, bool*>")

// === .rdata (15 symbols) ===

// confidence:A; rtti-name; map:44975
DATA_CHT_1_COMPGEN(0x008e6f5c, "const t_bound_handler_2<t_override_input, t_mouse_event*, bool*>::`vftable'{for `t_abstract_function_2<void, t_mouse_event*, bool*>'}")

// confidence:B; rtti-order; map:44976
DATA_CHT_1_COMPGEN(0x008e6f68, "const t_bound_handler_2<t_override_input, t_mouse_event*, bool*>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:44977
DATA_CHT_1_COMPGEN(0x008e6f7c, "const t_bound_handler_2<t_override_input, t_key_code*, bool*>::`vftable'{for `t_abstract_function_2<void, t_key_code*, bool*>'}")

// confidence:B; rtti-order; map:44978
DATA_CHT_1_COMPGEN(0x008e6f88, "const t_bound_handler_2<t_override_input, t_key_code*, bool*>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:44979
DATA_CHT_1_COMPGEN(0x008e6f9c, "const t_bound_handler_2<t_override_input, char*, bool*>::`vftable'{for `t_abstract_function_2<void, char*, bool*>'}")

// confidence:B; rtti-order; map:44980
DATA_CHT_1_COMPGEN(0x008e6fa8, "const t_bound_handler_2<t_override_input, char*, bool*>::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:44981
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_2<t_mouse_event*, bool*>::`vftable'{for `t_abstract_function_2<void, t_mouse_event*, bool*>'}")

// name:A; map symbol; map:44982
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_2<t_mouse_event*, bool*>::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:44983
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_2<t_key_code*, bool*>::`vftable'{for `t_abstract_function_2<void, t_key_code*, bool*>'}")

// name:A; map symbol; map:44984
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_2<t_key_code*, bool*>::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:44985
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_2<char*, bool*>::`vftable'{for `t_abstract_function_2<void, char*, bool*>'}")

// name:A; map symbol; map:44986
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_2<char*, bool*>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:44987
DATA_CHT_1_COMPGEN(0x008e6f70, "const t_abstract_function_2<void, t_mouse_event*, bool*>::`vftable'")

// confidence:A; rtti-name; map:44988
DATA_CHT_1_COMPGEN(0x008e6f90, "const t_abstract_function_2<void, t_key_code*, bool*>::`vftable'")

// confidence:A; rtti-name; map:44989
DATA_CHT_1_COMPGEN(0x008e6fb0, "const t_abstract_function_2<void, char*, bool*>::`vftable'")

// === .rdata$r (45 symbols) ===

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_2@Vt_override_input@@PAUt_mouse_event@@PA_N@@;vft=4e6f5c;col=511bec;td=5af458;chd=511bdc;offset=8;cdOffset=0;validated-hierarchy; map:53788
DATA_CHT_1_COMPGEN(0x00911bec, "const t_bound_handler_2<t_override_input, t_mouse_event*, bool*>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_mouse_event*, bool*>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_2@XPAUt_mouse_event@@PA_N@@;bcd=511b80;pmd=8,-1,0;attributes=0;validated-hierarchy-link; map:53789
DATA_CHT_1_COMPGEN(0x00911b80, "t_abstract_function_2<void, t_mouse_event*, bool*>::`RTTI Base Class Descriptor at (8, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_handler_base_2@PAUt_mouse_event@@PA_N@@;bcd=511b98;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53790
DATA_CHT_1_COMPGEN(0x00911b98, "t_handler_base_2<t_mouse_event*, bool*>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_2@Vt_override_input@@PAUt_mouse_event@@PA_N@@;bcd=511bb0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53791
DATA_CHT_1_COMPGEN(0x00911bb0, "t_bound_handler_2<t_override_input, t_mouse_event*, bool*>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_2@Vt_override_input@@PAUt_mouse_event@@PA_N@@;vft=4e6f5c;col=511bec;td=5af458;chd=511bdc;offset=8;cdOffset=0;validated-hierarchy; map:53792
DATA_CHT_1_COMPGEN(0x00911bc8, "t_bound_handler_2<t_override_input, t_mouse_event*, bool*>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_2@Vt_override_input@@PAUt_mouse_event@@PA_N@@;vft=4e6f5c;col=511bec;td=5af458;chd=511bdc;offset=8;cdOffset=0;validated-hierarchy; map:53793
DATA_CHT_1_COMPGEN(0x00911bdc, "t_bound_handler_2<t_override_input, t_mouse_event*, bool*>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:53794
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_2<t_override_input, t_mouse_event*, bool*>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_2@Vt_override_input@@PAW4t_key_code@@PA_N@@;vft=4e6f7c;col=511cc4;td=5af518;chd=511cb4;offset=8;cdOffset=0;validated-hierarchy; map:53795
DATA_CHT_1_COMPGEN(0x00911cc4, "const t_bound_handler_2<t_override_input, t_key_code*, bool*>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_key_code*, bool*>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_2@XPAW4t_key_code@@PA_N@@;bcd=511c58;pmd=8,-1,0;attributes=0;validated-hierarchy-link; map:53796
DATA_CHT_1_COMPGEN(0x00911c58, "t_abstract_function_2<void, t_key_code*, bool*>::`RTTI Base Class Descriptor at (8, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_handler_base_2@PAW4t_key_code@@PA_N@@;bcd=511c70;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53797
DATA_CHT_1_COMPGEN(0x00911c70, "t_handler_base_2<t_key_code*, bool*>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_2@Vt_override_input@@PAW4t_key_code@@PA_N@@;bcd=511c88;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53798
DATA_CHT_1_COMPGEN(0x00911c88, "t_bound_handler_2<t_override_input, t_key_code*, bool*>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_2@Vt_override_input@@PAW4t_key_code@@PA_N@@;vft=4e6f7c;col=511cc4;td=5af518;chd=511cb4;offset=8;cdOffset=0;validated-hierarchy; map:53799
DATA_CHT_1_COMPGEN(0x00911ca0, "t_bound_handler_2<t_override_input, t_key_code*, bool*>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_2@Vt_override_input@@PAW4t_key_code@@PA_N@@;vft=4e6f7c;col=511cc4;td=5af518;chd=511cb4;offset=8;cdOffset=0;validated-hierarchy; map:53800
DATA_CHT_1_COMPGEN(0x00911cb4, "t_bound_handler_2<t_override_input, t_key_code*, bool*>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:53801
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_2<t_override_input, t_key_code*, bool*>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_2@Vt_override_input@@PADPA_N@@;vft=4e6f9c;col=511d9c;td=5af5c0;chd=511d8c;offset=8;cdOffset=0;validated-hierarchy; map:53802
DATA_CHT_1_COMPGEN(0x00911d9c, "const t_bound_handler_2<t_override_input, char*, bool*>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, char*, bool*>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_2@XPADPA_N@@;bcd=511d30;pmd=8,-1,0;attributes=0;validated-hierarchy-link; map:53803
DATA_CHT_1_COMPGEN(0x00911d30, "t_abstract_function_2<void, char*, bool*>::`RTTI Base Class Descriptor at (8, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_handler_base_2@PADPA_N@@;bcd=511d48;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53804
DATA_CHT_1_COMPGEN(0x00911d48, "t_handler_base_2<char*, bool*>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_2@Vt_override_input@@PADPA_N@@;bcd=511d60;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53805
DATA_CHT_1_COMPGEN(0x00911d60, "t_bound_handler_2<t_override_input, char*, bool*>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_2@Vt_override_input@@PADPA_N@@;vft=4e6f9c;col=511d9c;td=5af5c0;chd=511d8c;offset=8;cdOffset=0;validated-hierarchy; map:53806
DATA_CHT_1_COMPGEN(0x00911d78, "t_bound_handler_2<t_override_input, char*, bool*>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_2@Vt_override_input@@PADPA_N@@;vft=4e6f9c;col=511d9c;td=5af5c0;chd=511d8c;offset=8;cdOffset=0;validated-hierarchy; map:53807
DATA_CHT_1_COMPGEN(0x00911d8c, "t_bound_handler_2<t_override_input, char*, bool*>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:53808
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_2<t_override_input, char*, bool*>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// name:A; map symbol; map:53809
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_2<t_mouse_event*, bool*>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_mouse_event*, bool*>'}")

// name:A; map symbol; map:53810
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_handler_base_2<t_mouse_event*, bool*>::`RTTI Base Class Array'")

// name:A; map symbol; map:53811
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_handler_base_2<t_mouse_event*, bool*>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:53812
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_2<t_mouse_event*, bool*>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// name:A; map symbol; map:53813
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_2<t_key_code*, bool*>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_key_code*, bool*>'}")

// name:A; map symbol; map:53814
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_handler_base_2<t_key_code*, bool*>::`RTTI Base Class Array'")

// name:A; map symbol; map:53815
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_handler_base_2<t_key_code*, bool*>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:53816
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_2<t_key_code*, bool*>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// name:A; map symbol; map:53817
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_2<char*, bool*>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, char*, bool*>'}")

// name:A; map symbol; map:53818
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_handler_base_2<char*, bool*>::`RTTI Base Class Array'")

// name:A; map symbol; map:53819
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_handler_base_2<char*, bool*>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:53820
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_2<char*, bool*>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_2@XPAUt_mouse_event@@PA_N@@;bcd=511b28;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53821
DATA_CHT_1_COMPGEN(0x00911b28, "t_abstract_function_2<void, t_mouse_event*, bool*>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_function_2@XPAUt_mouse_event@@PA_N@@;vft=4e6f70;col=511b58;td=5af3e0;chd=511b48;offset=0;cdOffset=0;validated-hierarchy; map:53822
DATA_CHT_1_COMPGEN(0x00911b40, "t_abstract_function_2<void, t_mouse_event*, bool*>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_function_2@XPAUt_mouse_event@@PA_N@@;vft=4e6f70;col=511b58;td=5af3e0;chd=511b48;offset=0;cdOffset=0;validated-hierarchy; map:53823
DATA_CHT_1_COMPGEN(0x00911b48, "t_abstract_function_2<void, t_mouse_event*, bool*>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_function_2@XPAUt_mouse_event@@PA_N@@;vft=4e6f70;col=511b58;td=5af3e0;chd=511b48;offset=0;cdOffset=0;validated-hierarchy; map:53824
DATA_CHT_1_COMPGEN(0x00911b58, "const t_abstract_function_2<void, t_mouse_event*, bool*>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_2@XPAW4t_key_code@@PA_N@@;bcd=511c00;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53825
DATA_CHT_1_COMPGEN(0x00911c00, "t_abstract_function_2<void, t_key_code*, bool*>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_function_2@XPAW4t_key_code@@PA_N@@;vft=4e6f90;col=511c30;td=5af4a4;chd=511c20;offset=0;cdOffset=0;validated-hierarchy; map:53826
DATA_CHT_1_COMPGEN(0x00911c18, "t_abstract_function_2<void, t_key_code*, bool*>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_function_2@XPAW4t_key_code@@PA_N@@;vft=4e6f90;col=511c30;td=5af4a4;chd=511c20;offset=0;cdOffset=0;validated-hierarchy; map:53827
DATA_CHT_1_COMPGEN(0x00911c20, "t_abstract_function_2<void, t_key_code*, bool*>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_function_2@XPAW4t_key_code@@PA_N@@;vft=4e6f90;col=511c30;td=5af4a4;chd=511c20;offset=0;cdOffset=0;validated-hierarchy; map:53828
DATA_CHT_1_COMPGEN(0x00911c30, "const t_abstract_function_2<void, t_key_code*, bool*>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_2@XPADPA_N@@;bcd=511cd8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53829
DATA_CHT_1_COMPGEN(0x00911cd8, "t_abstract_function_2<void, char*, bool*>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_function_2@XPADPA_N@@;vft=4e6fb0;col=511d08;td=5af564;chd=511cf8;offset=0;cdOffset=0;validated-hierarchy; map:53830
DATA_CHT_1_COMPGEN(0x00911cf0, "t_abstract_function_2<void, char*, bool*>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_function_2@XPADPA_N@@;vft=4e6fb0;col=511d08;td=5af564;chd=511cf8;offset=0;cdOffset=0;validated-hierarchy; map:53831
DATA_CHT_1_COMPGEN(0x00911cf8, "t_abstract_function_2<void, char*, bool*>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_function_2@XPADPA_N@@;vft=4e6fb0;col=511d08;td=5af564;chd=511cf8;offset=0;cdOffset=0;validated-hierarchy; map:53832
DATA_CHT_1_COMPGEN(0x00911d08, "const t_abstract_function_2<void, char*, bool*>::`RTTI Complete Object Locator'")

// === .data (9 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_function_2@XPAUt_mouse_event@@PA_N@@;td=5af3e0;validated-header; map:58935
DATA_CHT_1_COMPGEN(0x009af3e0, "t_abstract_function_2<void, t_mouse_event*, bool*> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_handler_base_2@PAUt_mouse_event@@PA_N@@;td=5af420;validated-header; map:58936
DATA_CHT_1_COMPGEN(0x009af420, "t_handler_base_2<t_mouse_event*, bool*> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_2@Vt_override_input@@PAUt_mouse_event@@PA_N@@;td=5af458;validated-header; map:58937
DATA_CHT_1_COMPGEN(0x009af458, "t_bound_handler_2<t_override_input, t_mouse_event*, bool*> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_function_2@XPAW4t_key_code@@PA_N@@;td=5af4a4;validated-header; map:58938
DATA_CHT_1_COMPGEN(0x009af4a4, "t_abstract_function_2<void, t_key_code*, bool*> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_handler_base_2@PAW4t_key_code@@PA_N@@;td=5af4e0;validated-header; map:58939
DATA_CHT_1_COMPGEN(0x009af4e0, "t_handler_base_2<t_key_code*, bool*> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_2@Vt_override_input@@PAW4t_key_code@@PA_N@@;td=5af518;validated-header; map:58940
DATA_CHT_1_COMPGEN(0x009af518, "t_bound_handler_2<t_override_input, t_key_code*, bool*> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_function_2@XPADPA_N@@;td=5af564;validated-header; map:58941
DATA_CHT_1_COMPGEN(0x009af564, "t_abstract_function_2<void, char*, bool*> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_handler_base_2@PADPA_N@@;td=5af594;validated-header; map:58942
DATA_CHT_1_COMPGEN(0x009af594, "t_handler_base_2<char*, bool*> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_2@Vt_override_input@@PADPA_N@@;td=5af5c0;validated-header; map:58943
DATA_CHT_1_COMPGEN(0x009af5c0, "t_bound_handler_2<t_override_input, char*, bool*> `RTTI Type Descriptor'")
