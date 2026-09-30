// idle_processor.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\idle_processor.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 29/47 (A:21 B:1 C:7); unaccounted 18; skipped std 36.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (31 symbols) ===

namespace {

// confidence:C; align-order; retn,stable; map:27578
VA_CHT_1(0x006d7ff0, 0xba)
t_counted_ptr<t_idle_list> get_active_idle_processor_ptrs()
{
    // Body unavailable.
}

} // anonymous namespace

// name:B; dyninit; see ledger; map:64944
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// get_active_idle_processor_ptrs$sdtor
// Function body not reconstructed; signature retained as a comment.

namespace {

// confidence:C; align-order; retn,stable; map:27579
VA_CHT_1(0x006d8140, 0xba)
t_counted_ptr<t_idle_list> get_running_processors()
{
    // Body unavailable.
}

} // anonymous namespace

// name:B; dyninit; see ledger; map:64945
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// get_running_processors$sdtor
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; retn,stable; map:27580
VA_CHT_1(0x006d8210, 0x188)
unsigned long t_idle_processor::run()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:27581
VA_CHT_1(0x006d83a0, 0x125)
t_idle_processor::t_idle_processor(unsigned long arg_0, unsigned long arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:27582
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_idle_processor::t_idle_processor(t_idle_processor const& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:27583
VA_CHT_1(0x006d84f0, 0x115)
t_idle_processor::~t_idle_processor()
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:27584
VA_CHT_1(0x006d8610, 0x8c)
void t_idle_processor::insert()
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:27585
VA_CHT_1(0x006d86a0, 0x3a)
void t_idle_processor::remove()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:27586
VA_CHT_1(0x006d86e0, 0x4a)
void t_idle_processor::set_next_time(unsigned long arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:27587
VA_CHT_1(0x006d8730, 0x23)
void t_idle_processor::resume_idle_processing()
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:27588
VA_CHT_1(0x006d8760, 0x47)
void t_idle_processor::suspend_idle_processing()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:27589
VA_CHT_1(0x006d87b0, 0x5f)
t_idle_processor_no_delay::t_idle_processor_no_delay(unsigned long arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:27590
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_idle_processor_no_delay::t_idle_processor_no_delay(t_idle_processor const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:27591
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_idle_list::t_idle_list()
{
    // Body unavailable.
}

// name:A; map symbol; map:27592
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_idle_list>::~t_counted_ptr<t_idle_list>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:27593
VA_CHT_1_COMPGEN(0x006d80c0, 0x1e, SCALAR_DELETING_DTOR, t_idle_list)

// name:A; map symbol; map:27594
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_idle_list)

// name:A; map symbol; map:27595
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_idle_list::~t_idle_list()
{
    // Body unavailable.
}

// name:A; map symbol; map:27596
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_idle_processor::set_next_time()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:27597
VA_CHT_1_COMPGEN(0x006d84d0, 0x1e, VECTOR_DELETING_DTOR, t_idle_processor)

// name:A; map symbol; map:27598
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_idle_processor)

// name:A; map symbol; map:27599
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_idle_processor_no_delay)

// name:A; map symbol; map:27600
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_idle_processor_no_delay)

// name:A; map symbol; map:27634
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_idle_list>::t_counted_ptr<t_idle_list>(t_counted_ptr<t_idle_list> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:27635
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_idle_list>::t_counted_ptr<t_idle_list>(t_idle_list* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:27636
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_idle_list>::t_counted_ptr<t_idle_list>()
{
    // Body unavailable.
}

// name:A; map symbol; map:27637
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_idle_list>& t_counted_ptr<t_idle_list>::operator=(t_counted_ptr<t_idle_list> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:27638
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_idle_list* t_counted_ptr<t_idle_list>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:27639
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_idle_list& t_counted_ptr<t_idle_list>::operator*() const
{
    // Body unavailable.
}

// === .rdata (3 symbols) ===

// confidence:A; rtti-name; map:44618
DATA_CHT_1_COMPGEN(0x008e3898, "const t_idle_list::`vftable'")

// confidence:A; rtti-name; map:44619
DATA_CHT_1_COMPGEN(0x008e38a0, "const t_idle_processor::`vftable'")

// confidence:A; rtti-name; map:44620
DATA_CHT_1_COMPGEN(0x008e38ac, "const t_idle_processor_no_delay::`vftable'")

// === .rdata$r (11 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AV?$list@PAVt_idle_processor@@V?$allocator@PAVt_idle_processor@@@std@@@std@@;bcd=50d44c;pmd=8,-1,0;attributes=0;validated-hierarchy-link; map:52824
DATA_CHT_1_COMPGEN(0x0090d44c, "std::list<t_idle_processor*, std::allocator<t_idle_processor*>>::`RTTI Base Class Descriptor at (8, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_idle_list@@;bcd=50d464;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52825
DATA_CHT_1_COMPGEN(0x0090d464, "t_idle_list::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_idle_list@@;vft=4e3898;col=50d49c;td=5a9bb8;chd=50d48c;offset=0;cdOffset=0;validated-hierarchy; map:52826
DATA_CHT_1_COMPGEN(0x0090d47c, "t_idle_list::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_idle_list@@;vft=4e3898;col=50d49c;td=5a9bb8;chd=50d48c;offset=0;cdOffset=0;validated-hierarchy; map:52827
DATA_CHT_1_COMPGEN(0x0090d48c, "t_idle_list::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_idle_list@@;vft=4e3898;col=50d49c;td=5a9bb8;chd=50d48c;offset=0;cdOffset=0;validated-hierarchy; map:52828
DATA_CHT_1_COMPGEN(0x0090d49c, "const t_idle_list::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_idle_processor@@;vft=4e38a0;col=50d4c8;td=58b364;chd=50d4b8;offset=0;cdOffset=0;validated-hierarchy; map:52829
DATA_CHT_1_COMPGEN(0x0090d4b0, "t_idle_processor::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_idle_processor@@;vft=4e38a0;col=50d4c8;td=58b364;chd=50d4b8;offset=0;cdOffset=0;validated-hierarchy; map:52830
DATA_CHT_1_COMPGEN(0x0090d4b8, "t_idle_processor::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_idle_processor@@;vft=4e38a0;col=50d4c8;td=58b364;chd=50d4b8;offset=0;cdOffset=0;validated-hierarchy; map:52831
DATA_CHT_1_COMPGEN(0x0090d4c8, "const t_idle_processor::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_idle_processor_no_delay@@;vft=4e38ac;col=50d4f8;td=58b384;chd=50d4e8;offset=0;cdOffset=0;validated-hierarchy; map:52832
DATA_CHT_1_COMPGEN(0x0090d4dc, "t_idle_processor_no_delay::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_idle_processor_no_delay@@;vft=4e38ac;col=50d4f8;td=58b384;chd=50d4e8;offset=0;cdOffset=0;validated-hierarchy; map:52833
DATA_CHT_1_COMPGEN(0x0090d4e8, "t_idle_processor_no_delay::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_idle_processor_no_delay@@;vft=4e38ac;col=50d4f8;td=58b384;chd=50d4e8;offset=0;cdOffset=0;validated-hierarchy; map:52834
DATA_CHT_1_COMPGEN(0x0090d4f8, "const t_idle_processor_no_delay::`RTTI Complete Object Locator'")

// === .data (2 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AV?$list@PAVt_idle_processor@@V?$allocator@PAVt_idle_processor@@@std@@@std@@;td=5a9b60;validated-header; map:58700
DATA_CHT_1_COMPGEN(0x009a9b60, "std::list<t_idle_processor*, std::allocator<t_idle_processor*>> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_idle_list@@;td=5a9bb8;validated-header; map:58701
DATA_CHT_1_COMPGEN(0x009a9bb8, "t_idle_list `RTTI Type Descriptor'")
