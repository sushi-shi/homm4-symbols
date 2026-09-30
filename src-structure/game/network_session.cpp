// network_session.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 34/48 (A:12 B:0 C:0); unaccounted 14; skipped std 30.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (34 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:64184; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0072bc30, 0x16, STATIC_INIT_DISPATCH, "network_session#1")

// name:C; dyninit; see ledger; map:64185
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "network_session#1")

// name:C; dyninit; see ledger; map:64186
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "network_session#1")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:64187; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0072bc50, 0xa, STATIC_DTOR, "network_session#1")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:64188; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0072bc60, 0x16, STATIC_INIT_DISPATCH, "network_session#2")

// name:C; dyninit; see ledger; map:64189
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "network_session#2")

// name:C; dyninit; see ledger; map:64190
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "network_session#2")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:64191; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0072bc80, 0xa, STATIC_DTOR, "network_session#2")

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:30416
VA_CHT_1(0x0072bc90, 0x123)
t_network_session::t_network_session()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:30417
VA_CHT_1(0x0072be10, 0x10d)
t_network_session::~t_network_session()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:30418
VA_CHT_1(0x0072bf20, 0x17)
bool t_network_session::send(unsigned long arg_0, CommMsgBuffer* arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:30419
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_network_session::session_startup()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:30420
VA_CHT_1(0x0072bf40, 0xd1)
bool t_network_session::start_host(char const* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:30421
VA_CHT_1(0x0072c020, 0xd3)
bool t_network_session::start_join(char const* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:30422
VA_CHT_1(0x0072c100, 0xd)
void t_network_session::terminate()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:30423
VA_CHT_1(0x0072c110, 0x1cf)
void t_network_session::callback_install(bool (* arg_0)(void*, t_network_event*), void* arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:30424
VA_CHT_1(0x0072c2e0, 0x53)
void t_network_session::callback_remove(bool (* arg_0)(void*, t_network_event*), void* arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:30425
VA_CHT_1(0x0072c340, 0x7f)
void t_network_session::connected(void* arg_0, unsigned long arg_1, long arg_2)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:30426
VA_CHT_1(0x0072c3c0, 0x7d)
void t_network_session::disconnected(void* arg_0, long arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:30427
VA_CHT_1(0x0072c440, 0x7f)
void* t_network_session::create_player(void* arg_0, unsigned long arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:30428
VA_CHT_1(0x0072c4c0, 0x8d)
void t_network_session::destroy_player(
    void* arg_0,
    unsigned long arg_1,
    void* arg_2,
    Comm::DestroyPlayerReason arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:30429
VA_CHT_1(0x0072c550, 0xb2)
bool t_network_session::receive(
    void* arg_0,
    unsigned long arg_1,
    void* arg_2,
    unsigned char* arg_3,
    unsigned int arg_4,
    unsigned long arg_5
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:30430
VA_CHT_1(0x0072c610, 0xbc)
void t_network_session::process_and_free(t_network_event* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:30431
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_network_session::default_callback(void* arg_0, t_network_event* arg_1)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:64192; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0072c910, 0x20, STATIC_INIT_DISPATCH, network_session)

// confidence:D; align-band; stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:30432
VA_CHT_1(0x0072bde0, 0xe)
t_counted_thread_safe_object::t_counted_thread_safe_object()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:30433
VA_CHT_1_COMPGEN(0x0072bdc0, 0x1e, VECTOR_DELETING_DTOR, t_counted_thread_safe_object)

// name:A; map symbol; map:30434
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_counted_thread_safe_object)

// name:A; map symbol; map:30435
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_thread_safe_object::~t_counted_thread_safe_object()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:30436
VA_CHT_1_COMPGEN(0x0072bdf0, 0x1e, VECTOR_DELETING_DTOR, t_network_session)

// name:A; map symbol; map:30437
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_network_session)

// name:A; map symbol; map:30438
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
Comm::CallbackTable::CallbackTable()
{
    // Body unavailable.
}

// name:A; map symbol; map:30439
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool CommSession::IsInitialized()
{
    // Body unavailable.
}

// name:A; map symbol; map:30440
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_network_event)

// === .rdata (2 symbols) ===

// confidence:A; rtti-name; map:44887
DATA_CHT_1_COMPGEN(0x008e6348, "const t_network_session::`vftable'")

// confidence:A; rtti-name; map:44888
DATA_CHT_1_COMPGEN(0x008e6350, "const t_counted_thread_safe_object::`vftable'")

// === .rdata$r (8 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_counted_thread_safe_object@@;bcd=5107c8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53518
DATA_CHT_1_COMPGEN(0x009107c8, "t_counted_thread_safe_object::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_network_session@@;bcd=5107e0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53519
DATA_CHT_1_COMPGEN(0x009107e0, "t_network_session::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_network_session@@;vft=4e6348;col=510814;td=5ad894;chd=510804;offset=0;cdOffset=0;validated-hierarchy; map:53520
DATA_CHT_1_COMPGEN(0x009107f8, "t_network_session::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_network_session@@;vft=4e6348;col=510814;td=5ad894;chd=510804;offset=0;cdOffset=0;validated-hierarchy; map:53521
DATA_CHT_1_COMPGEN(0x00910804, "t_network_session::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_network_session@@;vft=4e6348;col=510814;td=5ad894;chd=510804;offset=0;cdOffset=0;validated-hierarchy; map:53522
DATA_CHT_1_COMPGEN(0x00910814, "const t_network_session::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_counted_thread_safe_object@@;vft=4e6350;col=5107b4;td=5ad868;chd=5107a4;offset=0;cdOffset=0;validated-hierarchy; map:53523
DATA_CHT_1_COMPGEN(0x0091079c, "t_counted_thread_safe_object::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_counted_thread_safe_object@@;vft=4e6350;col=5107b4;td=5ad868;chd=5107a4;offset=0;cdOffset=0;validated-hierarchy; map:53524
DATA_CHT_1_COMPGEN(0x009107a4, "t_counted_thread_safe_object::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_counted_thread_safe_object@@;vft=4e6350;col=5107b4;td=5ad868;chd=5107a4;offset=0;cdOffset=0;validated-hierarchy; map:53525
DATA_CHT_1_COMPGEN(0x009107b4, "const t_counted_thread_safe_object::`RTTI Complete Object Locator'")

// === .data (4 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_counted_thread_safe_object@@;td=5ad868;validated-header; map:58869
DATA_CHT_1_COMPGEN(0x009ad868, "t_counted_thread_safe_object `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_network_session@@;td=5ad894;validated-header; map:58870
DATA_CHT_1_COMPGEN(0x009ad894, "t_network_session `RTTI Type Descriptor'")

// name:A; map symbol; map:58871
DATA_CHT_1_COMPGEN(UNACCOUNTED, "m_reference_count == 0")

// name:A; map symbol; map:58872
DATA_CHT_1_COMPGEN(UNACCOUNTED, "C:\\\\work\\\\game\\\\counted_thread_safe...")
