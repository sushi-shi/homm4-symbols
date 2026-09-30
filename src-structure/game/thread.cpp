// thread.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 15/18 (A:7 B:0 C:8); unaccounted 3; skipped std 0.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (14 symbols) ===

// confidence:C; align-order; retn; map:38784
VA_CHT_1(0x007f6a80, 0xc)
unsigned long __stdcall thread_function(void* arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vptr; map:38785
VA_CHT_1(0x007f6a90, 0x2a)
t_thread::t_thread()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vptr; map:38786
VA_CHT_1(0x007f6ae0, 0x40)
t_thread::~t_thread()
{
    // Body unavailable.
}

// confidence:C; align-order; retn; map:38787
VA_CHT_1(0x007f6b60, 0x26)
unsigned long t_thread::get_exit_code() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn; map:38788
VA_CHT_1(0x007f6df0, 0x2f)
bool t_thread::is_running() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn; map:38789
VA_CHT_1(0x007f6e20, 0x217)
void t_thread::stop(bool arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn; map:38790
VA_CHT_1(0x007f7150, 0x30)
void t_thread::wait_to_end()
{
    // Body unavailable.
}

// confidence:C; align-order; retn; map:38791
VA_CHT_1(0x007f7180, 0x30)
bool t_thread::stop_requested() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn; map:38792
VA_CHT_1(0x007f7da0, 0x51)
void t_thread::start()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,vslot; map:38793
VA_CHT_1_COMPGEN(0x007f6ac0, 0x1e, VECTOR_DELETING_DTOR, t_thread)

// name:A; map symbol; map:38794
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_thread)

// confidence:C; align-band; retn; map:38795
VA_CHT_1(0x007f6b20, 0x24)
t_owned_ptr<t_thread::t_data>::t_owned_ptr<t_thread::t_data>(t_thread::t_data* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:38796
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_ptr<t_thread::t_data>::~t_owned_ptr<t_thread::t_data>()
{
    // Body unavailable.
}

// name:A; map symbol; map:38797
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_thread::t_data* t_owned_ptr<t_thread::t_data>::operator->() const
{
    // Body unavailable.
}

// === .rdata (1 symbols) ===

// confidence:A; rtti-name; map:45908
DATA_CHT_1_COMPGEN(0x008ee76c, "const t_thread::`vftable'")

// === .rdata$r (3 symbols) ===

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_thread@@;vft=4ee76c;col=51d0d0;td=593ddc;chd=51d0c0;offset=0;cdOffset=0;validated-hierarchy; map:56707
DATA_CHT_1_COMPGEN(0x0091d0b8, "t_thread::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_thread@@;vft=4ee76c;col=51d0d0;td=593ddc;chd=51d0c0;offset=0;cdOffset=0;validated-hierarchy; map:56708
DATA_CHT_1_COMPGEN(0x0091d0c0, "t_thread::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_thread@@;vft=4ee76c;col=51d0d0;td=593ddc;chd=51d0c0;offset=0;cdOffset=0;validated-hierarchy; map:56709
DATA_CHT_1_COMPGEN(0x0091d0d0, "const t_thread::`RTTI Complete Object Locator'")
