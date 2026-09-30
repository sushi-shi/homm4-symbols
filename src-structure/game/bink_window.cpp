// bink_window.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 18/28 (A:15 B:1 C:2); unaccounted 10; skipped std 3.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (18 symbols) ===

// confidence:C; align-order; stable; map:17953
VA_CHT_1(0x0056efe0, 0x168)
std::string get_bink_resource_name(std::string arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; stable,vptr; map:17954
VA_CHT_1(0x0056f150, 0x418)
t_bink_window::t_bink_window(
    t_screen_point arg_0,
    std::string arg_1,
    std::string arg_2,
    t_window* arg_3,
    int arg_4,
    bool arg_5,
    bool arg_6,
    int arg_7
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:17955
VA_CHT_1(0x0056f590, 0x10f)
t_bink_window::~t_bink_window()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:17956
VA_CHT_1(0x0056f6a0, 0x1f)
void t_bink_window::on_animation_end()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:17957
VA_CHT_1(0x0056f6c0, 0x247)
void t_bink_window::on_idle()
{
    // Body unavailable.
}

// name:A; map symbol; map:17958
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bink_window::cleanup()
{
    // Body unavailable.
}

// name:A; map symbol; map:17959
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bink_window::on_close()
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:17960
VA_CHT_1(0x0056f920, 0x126)
bool t_bink_window::open(
    std::string arg_0,
    t_screen_point const& arg_1,
    int arg_2,
    bool arg_3,
    bool arg_4,
    int arg_5
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:17961
VA_CHT_1(0x0056fa50, 0x92)
void t_bink_window::paint(t_paint_surface& arg_0)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:68978; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0056faf0, 0x20, STATIC_INIT_DISPATCH, bink_window)

// confidence:A; align-band; retn,stable,vslot; map:17962
VA_CHT_1_COMPGEN(0x0056f570, 0x1e, SCALAR_DELETING_DTOR, t_bink_window)

// name:A; map symbol; map:17963
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_bink_window)

// name:A; map symbol; map:17964
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_bink_wrapper::is_bink_open()
{
    // Body unavailable.
}

// name:A; map symbol; map:17965
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_bink_wrapper::is_new_frame()
{
    // Body unavailable.
}

// name:A; map symbol; map:17966
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_bink_wrapper::is_finished_playing()
{
    // Body unavailable.
}

// name:A; map symbol; map:17967
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_ptr<t_memory_bitmap<unsigned short>> const& t_bink_wrapper::get_bink_bitmap() const
{
    // Body unavailable.
}

// name:A; map symbol; map:17970
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_memory_bitmap<unsigned short>* t_owned_ptr<t_memory_bitmap<unsigned short>>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:17971
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_bink_window)

// === .rdata (2 symbols) ===

// confidence:A; rtti-name; map:43733
DATA_CHT_1_COMPGEN(0x008d7914, "const t_bink_window::`vftable'{for `t_window'}")

// confidence:B; rtti-order; map:43734
DATA_CHT_1_COMPGEN(0x008d7980, "const t_bink_window::`vftable'{for `t_idle_processor'}")

// === .rdata$r (7 symbols) ===

// confidence:A; rtti-col-pointer; type-name=.?AVt_bink_window@@;vft=4d7914;col=50168c;td=595568;chd=50167c;offset=28;cdOffset=0;validated-hierarchy; map:50217
DATA_CHT_1_COMPGEN(0x0090168c, "const t_bink_window::`RTTI Complete Object Locator'{for `t_window'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_uncopyable@@;bcd=50161c;pmd=36,-1,0;attributes=9;validated-hierarchy-link; map:50218
DATA_CHT_1_COMPGEN(0x0090161c, "t_uncopyable::`RTTI Base Class Descriptor at (36, -1, 0, 9)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_window@@;bcd=501634;pmd=28,-1,0;attributes=0;validated-hierarchy-link; map:50219
DATA_CHT_1_COMPGEN(0x00901634, "t_window::`RTTI Base Class Descriptor at (28, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_bink_window@@;bcd=50164c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50220
DATA_CHT_1_COMPGEN(0x0090164c, "t_bink_window::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_bink_window@@;vft=4d7914;col=50168c;td=595568;chd=50167c;offset=28;cdOffset=0;validated-hierarchy; map:50221
DATA_CHT_1_COMPGEN(0x00901664, "t_bink_window::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_bink_window@@;vft=4d7914;col=50168c;td=595568;chd=50167c;offset=28;cdOffset=0;validated-hierarchy; map:50222
DATA_CHT_1_COMPGEN(0x0090167c, "t_bink_window::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:50223
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bink_window::`RTTI Complete Object Locator'{for `t_idle_processor'}")

// === .data (1 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_bink_window@@;td=595568;validated-header; map:58069
DATA_CHT_1_COMPGEN(0x00995568, "t_bink_window `RTTI Type Descriptor'")
