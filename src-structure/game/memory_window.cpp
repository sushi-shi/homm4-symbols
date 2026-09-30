// memory_window.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\memory_window.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 19/29 (A:7 B:1 C:1); unaccounted 10; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (19 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:64402; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0071bc70, 0x16, STATIC_INIT_DISPATCH, g_memory_window)

// name:C; dyninit; see ledger; map:64403
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, g_memory_window)

// name:C; dyninit; see ledger; map:64404
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, g_memory_window)

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:64405; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0071bc90, 0xa, STATIC_DTOR, g_memory_window)

namespace {

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:29696
VA_CHT_1(0x0071bca0, 0x164)
t_memory_window::t_memory_window()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:29697
VA_CHT_1(0x0071bf80, 0x96)
void t_memory_window::on_idle()
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:29698
VA_CHT_1(0x0071c020, 0x35)
void close_memory_window()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:29699
VA_CHT_1(0x0071c060, 0x10)
void move_memory_window_to_front()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:29700
VA_CHT_1(0x0071c070, 0xad)
void show_memory_window()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:29701
VA_CHT_1(0x0071c120, 0x19)
bool memory_window_is_open()
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:64406; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0071c140, 0x20, STATIC_INIT_DISPATCH, memory_window)

// name:A; map symbol; map:29702
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_memory_window>::~t_counted_ptr<t_memory_window>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:29703
VA_CHT_1_COMPGEN(0x0071be10, 0x1e, VECTOR_DELETING_DTOR, t_memory_window)

// name:A; map symbol; map:29704
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_memory_window)

namespace {

// name:A; map symbol; map:29705
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_memory_window::~t_memory_window()
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:29706
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_memory_window>::t_counted_ptr<t_memory_window>()
{
    // Body unavailable.
}

// name:A; map symbol; map:29707
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_memory_window>& t_counted_ptr<t_memory_window>::operator=(t_memory_window* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:29708
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_memory_window* t_counted_ptr<t_memory_window>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:29709
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_memory_window)

// === .rdata (2 symbols) ===

// confidence:A; rtti-name; map:44839
DATA_CHT_1_COMPGEN(0x008e5918, "const t_memory_window::`vftable'{for `t_idle_processor'}")

// confidence:B; rtti-order; map:44840
DATA_CHT_1_COMPGEN(0x008e58a4, "const t_memory_window::`vftable'{for `t_text_window'}")

// === .rdata$r (6 symbols) ===

// confidence:A; rtti-col-pointer; type-name=.?AVt_memory_window@?%C:\Work\game\memory_window.cpp2535910077@@;vft=4e5918;col=50fde4;td=5ac920;chd=50fe44;offset=288;cdOffset=0;validated-hierarchy; map:53393
DATA_CHT_1_COMPGEN(0x0090fde4, "const t_memory_window::`RTTI Complete Object Locator'{for `t_idle_processor'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_idle_processor@@;bcd=50fdf8;pmd=288,-1,0;attributes=0;validated-hierarchy-link; map:53394
DATA_CHT_1_COMPGEN(0x0090fdf8, "t_idle_processor::`RTTI Base Class Descriptor at (288, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_memory_window@?%C:\Work\game\memory_window.cpp2535910077@@;bcd=50fe10;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53395
DATA_CHT_1_COMPGEN(0x0090fe10, "t_memory_window::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_memory_window@?%C:\Work\game\memory_window.cpp2535910077@@;vft=4e5918;col=50fde4;td=5ac920;chd=50fe44;offset=288;cdOffset=0;validated-hierarchy; map:53396
DATA_CHT_1_COMPGEN(0x0090fe28, "t_memory_window::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_memory_window@?%C:\Work\game\memory_window.cpp2535910077@@;vft=4e5918;col=50fde4;td=5ac920;chd=50fe44;offset=288;cdOffset=0;validated-hierarchy; map:53397
DATA_CHT_1_COMPGEN(0x0090fe44, "t_memory_window::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:53398
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_memory_window::`RTTI Complete Object Locator'{for `t_text_window'}")

// === .data (1 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_memory_window@?%C:\Work\game\memory_window.cpp2535910077@@;td=5ac920;validated-header; map:58834
DATA_CHT_1_COMPGEN(0x009ac920, "t_memory_window `RTTI Type Descriptor'")

// === .bss (1 symbols) ===

namespace {

// confidence:C; dyninit-global; owner-conf-C; map:60285
DATA_CHT_1(0x009f234c)
t_counted_ptr<t_memory_window> g_memory_window; // Initial value unavailable.

} // anonymous namespace
