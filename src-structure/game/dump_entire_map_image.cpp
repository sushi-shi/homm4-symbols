// dump_entire_map_image.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\dump_entire_map_image.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 24/38 (A:13 B:0 C:0); unaccounted 14; skipped std 8.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (25 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65509; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006a4d70, 0x15, STATIC_INIT_DISPATCH, "dump_entire_map_image#1")

// name:C; dyninit; see ledger; map:65510
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "dump_entire_map_image#1")

namespace {

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:25869
VA_CHT_1(0x006a4d90, 0x11f)
std::auto_ptr<t_abstract_bitmap<unsigned short>> t_entire_map_bitmap_creater::operator()(
    t_abstract_adventure_map const& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:25870
VA_CHT_1(0x006a4eb0, 0xf7)
t_shared_ptr<t_abstract_bitmap<unsigned short>> t_entire_map_bitmap_creater::create_back_buffer(
    t_screen_point const& arg_0
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:25871
VA_CHT_1(0x006a4fb0, 0x29)
void t_entire_map_bitmap_creater::on_rects_dirtied(
    std::vector<t_screen_rect, std::allocator<t_screen_rect>> const& arg_0
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:25872
VA_CHT_1(0x006a4fe0, 0x148)
void write_bitmap(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_abstract_bitmap<unsigned short> const& arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:25873
VA_CHT_1(0x006a5130, 0x181)
void write_bitmap(t_abstract_bitmap<unsigned short> const& arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:25874
VA_CHT_1(0x006a52d0, 0x72)
void dump_entire_map_image(t_abstract_adventure_map const& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:65511; name:B (dyninit; see ledger)
VA_CHT_1(0x006a53a0, 0x3f)
// dump_entire_map_image$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:65514; name:B (dyninit; see ledger)
VA_CHT_1(0x006a53e0, 0x20)
// dump_entire_map_image$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:65515
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// dump_entire_map_image$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:25875
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_pixel_24 convert_to_24_bit(unsigned short arg_0)
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:25876
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_entire_map_bitmap_creater::t_entire_map_bitmap_creater()
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:25877
VA_CHT_1(0x006a52c0, 0x7)
t_map_renderer_client::~t_map_renderer_client()
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:25878
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_entire_map_bitmap_creater::~t_entire_map_bitmap_creater()
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:25879
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_renderer_client::t_map_renderer_client()
{
    // Body unavailable.
}

// name:A; map symbol; map:25884
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_shared_ptr<t_memory_bitmap<unsigned short>>::t_shared_ptr<t_memory_bitmap<unsigned short>>()
{
    // Body unavailable.
}

// name:A; map symbol; map:25885
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_shared_ptr<t_memory_bitmap<unsigned short>>::~t_shared_ptr<t_memory_bitmap<unsigned short>>()
{
    // Body unavailable.
}

// name:A; map symbol; map:25886
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_memory_bitmap<unsigned short>* t_shared_ptr<t_memory_bitmap<unsigned short>>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:25887
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::auto_ptr<t_memory_bitmap<unsigned short>> t_shared_ptr<t_memory_bitmap<unsigned short>>::release()
{
    // Body unavailable.
}

// name:A; map symbol; map:25888
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_shared_ptr<t_memory_bitmap<unsigned short>>::unique() const
{
    // Body unavailable.
}

// name:A; map symbol; map:25889
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_shared_ptr<t_memory_bitmap<unsigned short>>& t_shared_ptr<t_memory_bitmap<unsigned short>>::operator=(
    t_memory_bitmap<unsigned short>* arg_0
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:25890
VA_CHT_1(0x006a5350, 0x4c)
t_shared_ptr<t_abstract_bitmap<unsigned short>>::t_shared_ptr<t_abstract_bitmap<unsigned short>>(
    t_shared_ptr<t_memory_bitmap<unsigned short>> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:25893
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_shared_ptr<t_memory_bitmap<unsigned short>>::set(t_memory_bitmap<unsigned short>* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:25894
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_shared_ptr<t_memory_bitmap<unsigned short>>::construct(t_memory_bitmap<unsigned short>* arg_0)
{
    // Body unavailable.
}

// === .rdata (2 symbols) ===

// confidence:A; rtti-name; map:44473
DATA_CHT_1_COMPGEN(0x008e1484, "const t_entire_map_bitmap_creater::`vftable'")

// confidence:A; rtti-name; map:44474
DATA_CHT_1_COMPGEN(0x008e1494, "const t_map_renderer_client::`vftable'")

// === .rdata$r (9 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_map_renderer_client@@;bcd=50b84c;pmd=0,-1,0;attributes=9;validated-hierarchy-link; map:52414
DATA_CHT_1_COMPGEN(0x0090b84c, "t_map_renderer_client::`RTTI Base Class Descriptor at (0, -1, 0, 9)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_entire_map_bitmap_creater@?%C:\Work\game\dump_entire_map_image.cpp2524922861@@;bcd=50b864;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52415
DATA_CHT_1_COMPGEN(0x0090b864, "t_entire_map_bitmap_creater::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_entire_map_bitmap_creater@?%C:\Work\game\dump_entire_map_image.cpp2524922861@@;vft=4e1484;col=50b898;td=5a4498;chd=50b888;offset=0;cdOffset=0;validated-hierarchy; map:52416
DATA_CHT_1_COMPGEN(0x0090b87c, "t_entire_map_bitmap_creater::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_entire_map_bitmap_creater@?%C:\Work\game\dump_entire_map_image.cpp2524922861@@;vft=4e1484;col=50b898;td=5a4498;chd=50b888;offset=0;cdOffset=0;validated-hierarchy; map:52417
DATA_CHT_1_COMPGEN(0x0090b888, "t_entire_map_bitmap_creater::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_entire_map_bitmap_creater@?%C:\Work\game\dump_entire_map_image.cpp2524922861@@;vft=4e1484;col=50b898;td=5a4498;chd=50b888;offset=0;cdOffset=0;validated-hierarchy; map:52418
DATA_CHT_1_COMPGEN(0x0090b898, "const t_entire_map_bitmap_creater::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_map_renderer_client@@;bcd=50b8ac;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52419
DATA_CHT_1_COMPGEN(0x0090b8ac, "t_map_renderer_client::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_map_renderer_client@@;vft=4e1494;col=50b8dc;td=5a4474;chd=50b8cc;offset=0;cdOffset=0;validated-hierarchy; map:52420
DATA_CHT_1_COMPGEN(0x0090b8c4, "t_map_renderer_client::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_map_renderer_client@@;vft=4e1494;col=50b8dc;td=5a4474;chd=50b8cc;offset=0;cdOffset=0;validated-hierarchy; map:52421
DATA_CHT_1_COMPGEN(0x0090b8cc, "t_map_renderer_client::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_map_renderer_client@@;vft=4e1494;col=50b8dc;td=5a4474;chd=50b8cc;offset=0;cdOffset=0;validated-hierarchy; map:52422
DATA_CHT_1_COMPGEN(0x0090b8dc, "const t_map_renderer_client::`RTTI Complete Object Locator'")

// === .data (2 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_map_renderer_client@@;td=5a4474;validated-header; map:58594
DATA_CHT_1_COMPGEN(0x009a4474, "t_map_renderer_client `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_entire_map_bitmap_creater@?%C:\Work\game\dump_entire_map_image.cpp2524922861@@;td=5a4498;validated-header; map:58595
DATA_CHT_1_COMPGEN(0x009a4498, "t_entire_map_bitmap_creater `RTTI Type Descriptor'")
