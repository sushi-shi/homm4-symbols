// clip_list.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 32/53 (A:9 B:14 C:9); unaccounted 21; skipped std 21.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (47 symbols) ===

// name:A; map symbol; map:19413
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_rect_list_cache> get_global_free_rect_list()
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:68208
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// get_global_free_rect_list$sdtor
// Function body not reconstructed; signature retained as a comment.

// confidence:A; align-order; retn,vptr; map:19414
VA_CHT_1(0x005a7960, 0xee)
t_rect_list_cache::t_rect_list_cache()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:19415
VA_CHT_1(0x005a7a80, 0xcb)
t_rect_list_cache::~t_rect_list_cache()
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:19416
VA_CHT_1(0x005a7b50, 0xbe)
t_clip_list::t_clip_list()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:19417
VA_CHT_1(0x005a7c10, 0x19d)
t_clip_list::t_clip_list(t_screen_rect const& arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:19418
VA_CHT_1(0x005a7db0, 0x1df)
t_clip_list::t_clip_list(t_clip_list const& arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:19419
VA_CHT_1(0x005a8010, 0x1c4)
t_clip_list& t_clip_list::operator=(t_clip_list const& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:19420
VA_CHT_1(0x005a81e0, 0xea)
t_clip_list::~t_clip_list()
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:19421
VA_CHT_1(0x005a82d0, 0x8c)
void t_clip_list::clear()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:19422
VA_CHT_1(0x005a8360, 0x249)
bool t_clip_list::contains(t_screen_rect const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:19423
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_clip_list::intersects(t_screen_rect const& arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:19424
VA_CHT_1(0x005a8730, 0x6d)
void t_clip_list::offset(t_screen_point const& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:19425
VA_CHT_1(0x005a87a0, 0x98)
void t_clip_list::update_extent()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:19426
VA_CHT_1(0x005a8840, 0x33d)
bool t_clip_list::remove(t_screen_rect const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:19427
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_clip_list& t_clip_list::operator-=(t_screen_rect const& arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:19428
VA_CHT_1(0x005a8cb0, 0xb6)
bool t_clip_list::remove(t_clip_list const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:19429
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_clip_list& t_clip_list::operator-=(t_clip_list const& arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:19430
VA_CHT_1(0x005a8d70, 0x11f)
bool t_clip_list::operator==(t_clip_list const& arg_0) const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:19431
VA_CHT_1(0x005a8e90, 0x157)
void t_clip_list::merge_rectangles()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:19432
VA_CHT_1(0x005a8ff0, 0x1d0)
t_clip_list& t_clip_list::operator+=(t_screen_rect const& arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:19433
VA_CHT_1(0x005a91c0, 0x2c7)
t_clip_list& t_clip_list::operator+=(t_clip_list const& arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:19434
VA_CHT_1(0x005a9490, 0x38)
void t_clip_list::intersect(t_screen_rect const& arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:19435
VA_CHT_1(0x005a94d0, 0x27c)
void t_clip_list::intersect(t_clip_list const& arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:19436
VA_CHT_1(0x005a9750, 0x378)
t_clip_list intersection(t_clip_list const& arg_0, t_screen_rect const& arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:19437
VA_CHT_1(0x005a9ad0, 0x2f0)
void intersection_cached(t_clip_list& arg_0, t_clip_list& arg_1, t_screen_rect const& arg_2)
{
    // Body unavailable.
}

// name:A; map symbol; map:19438
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_rect_list_cache>::~t_counted_ptr<t_rect_list_cache>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:19439
VA_CHT_1_COMPGEN(0x005a7a60, 0x1e, SCALAR_DELETING_DTOR, t_rect_list_cache)

// name:A; map symbol; map:19440
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_rect_list_cache)

// confidence:C; align-band; retn,stable; map:19441
VA_CHT_1(0x005a8b80, 0x12f)
void t_rect_list_cache::push_back_use_free_list(
    std::list<t_screen_rect, std::allocator<t_screen_rect>>& arg_0,
    t_screen_rect const& arg_1
)
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:19442
VA_CHT_1(0x005a7f90, 0x77)
void t_rect_list_cache::clear_rect_list(std::list<t_screen_rect, std::allocator<t_screen_rect>>& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:19443
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_clip_list::empty() const
{
    // Body unavailable.
}

// name:A; map symbol; map:19444
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool rect_contains(t_screen_rect const& arg_0, t_screen_rect const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:19445
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool rect_overlap(t_screen_rect const& arg_0, t_screen_rect const& arg_1)
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:19446
VA_CHT_1(0x005a85b0, 0x142)
void t_rect_list_cache::push_front_use_free_list(
    std::list<t_screen_rect, std::allocator<t_screen_rect>>& arg_0,
    t_screen_rect const& arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:19447
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_rect_list_cache::add_to_free_list(
    std::list<t_screen_rect, std::allocator<t_screen_rect>>& arg_0,
    std::list<t_screen_rect, std::allocator<t_screen_rect>>::iterator& arg_1
)
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:19448
VA_CHT_1(0x005a9dc0, 0x2a)
std::list<t_screen_rect, std::allocator<t_screen_rect>>::const_iterator t_clip_list::begin() const
{
    // Body unavailable.
}

// name:A; map symbol; map:19449
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::list<t_screen_rect, std::allocator<t_screen_rect>>::const_iterator t_clip_list::end() const
{
    // Body unavailable.
}

// name:A; map symbol; map:19450
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_rect const& t_clip_list::get_extent() const
{
    // Body unavailable.
}

// name:A; map symbol; map:19451
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::list<t_screen_rect, std::allocator<t_screen_rect>>::iterator t_clip_list::begin()
{
    // Body unavailable.
}

// name:A; map symbol; map:19452
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool contains(t_screen_rect const& arg_0, t_clip_list const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:19470
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_rect_list_cache>::t_counted_ptr<t_rect_list_cache>(
    t_counted_ptr<t_rect_list_cache> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:19471
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_rect_list_cache>::t_counted_ptr<t_rect_list_cache>(t_rect_list_cache* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:19472
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_rect_list_cache>::t_counted_ptr<t_rect_list_cache>()
{
    // Body unavailable.
}

// name:A; map symbol; map:19473
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_rect_list_cache>& t_counted_ptr<t_rect_list_cache>::operator=(
    t_counted_ptr<t_rect_list_cache> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:19474
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_rect_list_cache>& t_counted_ptr<t_rect_list_cache>::operator=(t_rect_list_cache* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:19475
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_rect_list_cache* t_counted_ptr<t_rect_list_cache>::operator->() const
{
    // Body unavailable.
}

// === .rdata (1 symbols) ===

// confidence:A; rtti-name; map:43875
DATA_CHT_1_COMPGEN(0x008dbe5c, "const t_rect_list_cache::`vftable'")

// === .rdata$r (4 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_rect_list_cache@@;bcd=5032dc;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50607
DATA_CHT_1_COMPGEN(0x009032dc, "t_rect_list_cache::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_rect_list_cache@@;vft=4dbe5c;col=503310;td=598694;chd=503300;offset=0;cdOffset=0;validated-hierarchy; map:50608
DATA_CHT_1_COMPGEN(0x009032f4, "t_rect_list_cache::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_rect_list_cache@@;vft=4dbe5c;col=503310;td=598694;chd=503300;offset=0;cdOffset=0;validated-hierarchy; map:50609
DATA_CHT_1_COMPGEN(0x00903300, "t_rect_list_cache::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_rect_list_cache@@;vft=4dbe5c;col=503310;td=598694;chd=503300;offset=0;cdOffset=0;validated-hierarchy; map:50610
DATA_CHT_1_COMPGEN(0x00903310, "const t_rect_list_cache::`RTTI Complete Object Locator'")

// === .data (1 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_rect_list_cache@@;td=598694;validated-header; map:58168
DATA_CHT_1_COMPGEN(0x00998694, "t_rect_list_cache `RTTI Type Descriptor'")
