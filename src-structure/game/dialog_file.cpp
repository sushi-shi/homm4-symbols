// dialog_file.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 52/87 (A:31 B:13 C:8); unaccounted 35; skipped std 60.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (56 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:66009; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0066a6a0, 0x15, STATIC_INIT_DISPATCH, "dialog_file#1")

// name:C; dyninit; see ledger; map:66010
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "dialog_file#1")

// confidence:A; dyninit-init; owner-conf-B; map:66011; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0066a6c0, 0x11, STATIC_INIT_DISPATCH, k_text_read_failed)

// confidence:B; dyninit-ctor; owner-conf-B; map:66012; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0066a6e0, 0xd1, STATIC_CTOR, k_text_read_failed)

// name:B; dyninit; see ledger; map:66013
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, k_text_read_failed)

// confidence:B; dyninit-dtor; owner-conf-B; map:66014; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0066a7c0, 0xa, STATIC_DTOR, k_text_read_failed)

// confidence:A; align-order; stable,vptr; map:24809
VA_CHT_1(0x0066a7d0, 0x672)
t_dialog_file::t_dialog_file(t_cached_ptr<t_bitmap_group> arg_0, t_window* arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:24810
VA_CHT_1(0x0066aff0, 0x1f5)
void t_dialog_file::create_title(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:24811
VA_CHT_1(0x0066b1f0, 0x10b9)
void t_dialog_file::create_buttons(t_window* arg_0, t_screen_point arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:24812
VA_CHT_1(0x0066cd0e, 0x1e7)
void t_dialog_file::cancel_click(t_button* arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:24813
VA_CHT_1(0x0066d800, 0x1e1)
void t_dialog_file::file_scroll(t_scrollbar* arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:24814
VA_CHT_1(0x0066dc00, 0x5e)
void t_dialog_file::file_selected(t_button* arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:24815
VA_CHT_1(0x0066dc60, 0x5e)
void t_dialog_file::double_click(t_button* arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:24816
VA_CHT_1(0x0066dcc0, 0x1c0)
void t_dialog_file::read_directory(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:24817
VA_CHT_1(0x0066de80, 0x1cb)
bool read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_saved_game_header& arg_1,
    t_progress_handler* arg_2
)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:24818
VA_CHT_1(0x0066e050, 0x10f)
bool write(std::basic_streambuf<char, std::char_traits<char>>& arg_0, t_saved_game_header const& arg_1)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:66015; name:B (dyninit; see ledger)
VA_CHT_1(0x0066ea90, 0x3f)
// dialog_file$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:A; dyninit-tinit; owner-conf-B; map:66018; name:B (dyninit; see ledger)
VA_CHT_1(0x0066ef30, 0x5c)
// dialog_file$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:66019
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// dialog_file$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:66020
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// dialog_file$tatexit4
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:66021
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// dialog_file$tatexit5
// Function body not reconstructed; signature retained as a comment.

// confidence:A; align-band; retn,stable,vslot; map:24819
VA_CHT_1_COMPGEN(0x0066ae50, 0x1e, VECTOR_DELETING_DTOR, t_dialog_file)

// name:A; map symbol; map:24820
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_dialog_file)

// name:A; map symbol; map:24821
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_dialog_file::~t_dialog_file()
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:24822
VA_CHT_1(0x0066c6b0, 0x65)
t_directory_changer::t_directory_changer(char const* arg_0, bool* arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:24823
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_directory_changer::~t_directory_changer()
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:24824
VA_CHT_1(0x0066e510, 0x49)
t_file_dialog_data::t_file_dialog_data()
{
    // Body unavailable.
}

// name:A; map symbol; map:24825
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_file_dialog_data::~t_file_dialog_data()
{
    // Body unavailable.
}

// name:A; map symbol; map:24862
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_scrollbar*, int> bound_handler(t_dialog_file& arg_0, void (t_dialog_file::*)(t_scrollbar*, int))
{
    // Body unavailable.
}

// name:A; map symbol; map:24863
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<t_button*> bound_handler(t_dialog_file& arg_0, void (t_dialog_file::*)(t_button*))
{
    // Body unavailable.
}

// name:A; map symbol; map:24864
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_button*, int> bound_handler(t_dialog_file& arg_0, void (t_dialog_file::*)(t_button*, int))
{
    // Body unavailable.
}

// name:A; map symbol; map:24877
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_file_dialog_data& t_file_dialog_data::operator=(t_file_dialog_data const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:24878
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_file_dialog_data)

// name:A; map symbol; map:24879
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_file_dialog_data::t_file_dialog_data(t_file_dialog_data const& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:24880
VA_CHT_1(0x0066e740, 0x1c0)
t_saved_game_header::t_saved_game_header(t_saved_game_header const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:24881
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_campaign_file_ref::t_campaign_file_ref(t_campaign_file_ref const& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:24882
VA_CHT_1(0x0066dba0, 0x5e)
t_bound_handler_2<t_dialog_file, t_scrollbar*, int>::t_bound_handler_2<t_dialog_file, t_scrollbar*, int>(
    t_dialog_file& arg_0,
    void (t_dialog_file::*)(t_scrollbar*, int)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:24883
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_2<t_dialog_file, t_scrollbar*, int>::operator()(t_scrollbar* arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:24884
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_1<t_dialog_file, t_button*>::t_bound_handler_1<t_dialog_file, t_button*>(
    t_dialog_file& arg_0,
    void (t_dialog_file::*)(t_button*)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:24885
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_1<t_dialog_file, t_button*>::operator()(t_button* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:24886
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_2<t_dialog_file, t_button*, int>::t_bound_handler_2<t_dialog_file, t_button*, int>(
    t_dialog_file& arg_0,
    void (t_dialog_file::*)(t_button*, int)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:24887
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_2<t_dialog_file, t_button*, int>::operator()(t_button* arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:24888
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_dialog_file, t_scrollbar*, int>")

// name:A; map symbol; map:24889
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_2<t_dialog_file, t_scrollbar*, int>")

// name:A; map symbol; map:24890
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_1<t_dialog_file, t_button*>")

// name:A; map symbol; map:24891
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_1<t_dialog_file, t_button*>")

// name:A; map symbol; map:24892
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_dialog_file, t_button*, int>")

// name:A; map symbol; map:24893
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_2<t_dialog_file, t_button*, int>")

// name:A; map symbol; map:24894
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_2<t_dialog_file, t_scrollbar*, int>::~t_bound_handler_2<t_dialog_file, t_scrollbar*, int>()
{
    // Body unavailable.
}

// name:A; map symbol; map:24895
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_1<t_dialog_file, t_button*>::~t_bound_handler_1<t_dialog_file, t_button*>()
{
    // Body unavailable.
}

// name:A; map symbol; map:24896
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_2<t_dialog_file, t_button*, int>::~t_bound_handler_2<t_dialog_file, t_button*, int>()
{
    // Body unavailable.
}

// name:A; map symbol; map:24897
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_campaign_file_ref_body>::t_counted_ptr<t_campaign_file_ref_body>(
    t_counted_ptr<t_campaign_file_ref_body> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:24903
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool operator<(t_file_dialog_data const& arg_0, t_file_dialog_data const& arg_1)
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:24909
VA_CHT_1_COMPGEN(0x0066f770, 0x8, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_dialog_file, t_scrollbar*, int>")

// confidence:C; align-order; stable; map:24910
VA_CHT_1_COMPGEN(0x0066f780, 0x8, VECTOR_DELETING_DTOR, "t_bound_handler_1<t_dialog_file, t_button*>")

// confidence:C; align-order; stable; map:24911
VA_CHT_1_COMPGEN(0x0066f790, 0x8, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_dialog_file, t_button*, int>")

// === .rdata (7 symbols) ===

// confidence:A; rtti-name; map:44328
DATA_CHT_1_COMPGEN(0x008e023c, "const t_dialog_file::`vftable'")

// confidence:A; rtti-name; map:44329
DATA_CHT_1_COMPGEN(0x008e02b0, "const t_bound_handler_2<t_dialog_file, t_scrollbar*, int>::`vftable'{for `t_abstract_function_2<void, t_scrollbar*, int>'}")

// confidence:B; rtti-order; map:44330
DATA_CHT_1_COMPGEN(0x008e02bc, "const t_bound_handler_2<t_dialog_file, t_scrollbar*, int>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:44331
DATA_CHT_1_COMPGEN(0x008e02c4, "const t_bound_handler_1<t_dialog_file, t_button*>::`vftable'{for `t_abstract_function_1<void, t_button*>'}")

// confidence:B; rtti-order; map:44332
DATA_CHT_1_COMPGEN(0x008e02d0, "const t_bound_handler_1<t_dialog_file, t_button*>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:44333
DATA_CHT_1_COMPGEN(0x008e02d8, "const t_bound_handler_2<t_dialog_file, t_button*, int>::`vftable'{for `t_abstract_function_2<void, t_button*, int>'}")

// confidence:B; rtti-order; map:44334
DATA_CHT_1_COMPGEN(0x008e02e4, "const t_bound_handler_2<t_dialog_file, t_button*, int>::`vftable'{for `t_counted_object'}")

// === .rdata$r (19 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_dialog_file@@;bcd=509ac0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:51993
DATA_CHT_1_COMPGEN(0x00909ac0, "t_dialog_file::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_dialog_file@@;vft=4e023c;col=509afc;td=5a1d90;chd=509aec;offset=0;cdOffset=0;validated-hierarchy; map:51994
DATA_CHT_1_COMPGEN(0x00909ad8, "t_dialog_file::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_dialog_file@@;vft=4e023c;col=509afc;td=5a1d90;chd=509aec;offset=0;cdOffset=0;validated-hierarchy; map:51995
DATA_CHT_1_COMPGEN(0x00909aec, "t_dialog_file::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_dialog_file@@;vft=4e023c;col=509afc;td=5a1d90;chd=509aec;offset=0;cdOffset=0;validated-hierarchy; map:51996
DATA_CHT_1_COMPGEN(0x00909afc, "const t_dialog_file::`RTTI Complete Object Locator'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_2@Vt_dialog_file@@PAVt_scrollbar@@H@@;vft=4e02b0;col=509b60;td=5a1e20;chd=509b50;offset=8;cdOffset=0;validated-hierarchy; map:51997
DATA_CHT_1_COMPGEN(0x00909b60, "const t_bound_handler_2<t_dialog_file, t_scrollbar*, int>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_scrollbar*, int>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_2@Vt_dialog_file@@PAVt_scrollbar@@H@@;bcd=509b24;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:51998
DATA_CHT_1_COMPGEN(0x00909b24, "t_bound_handler_2<t_dialog_file, t_scrollbar*, int>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_2@Vt_dialog_file@@PAVt_scrollbar@@H@@;vft=4e02b0;col=509b60;td=5a1e20;chd=509b50;offset=8;cdOffset=0;validated-hierarchy; map:51999
DATA_CHT_1_COMPGEN(0x00909b3c, "t_bound_handler_2<t_dialog_file, t_scrollbar*, int>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_2@Vt_dialog_file@@PAVt_scrollbar@@H@@;vft=4e02b0;col=509b60;td=5a1e20;chd=509b50;offset=8;cdOffset=0;validated-hierarchy; map:52000
DATA_CHT_1_COMPGEN(0x00909b50, "t_bound_handler_2<t_dialog_file, t_scrollbar*, int>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:52001
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_2<t_dialog_file, t_scrollbar*, int>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_1@Vt_dialog_file@@PAVt_button@@@@;vft=4e02c4;col=509bc4;td=5a1e68;chd=509bb4;offset=8;cdOffset=0;validated-hierarchy; map:52002
DATA_CHT_1_COMPGEN(0x00909bc4, "const t_bound_handler_1<t_dialog_file, t_button*>::`RTTI Complete Object Locator'{for `t_abstract_function_1<void, t_button*>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_1@Vt_dialog_file@@PAVt_button@@@@;bcd=509b88;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52003
DATA_CHT_1_COMPGEN(0x00909b88, "t_bound_handler_1<t_dialog_file, t_button*>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_1@Vt_dialog_file@@PAVt_button@@@@;vft=4e02c4;col=509bc4;td=5a1e68;chd=509bb4;offset=8;cdOffset=0;validated-hierarchy; map:52004
DATA_CHT_1_COMPGEN(0x00909ba0, "t_bound_handler_1<t_dialog_file, t_button*>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_1@Vt_dialog_file@@PAVt_button@@@@;vft=4e02c4;col=509bc4;td=5a1e68;chd=509bb4;offset=8;cdOffset=0;validated-hierarchy; map:52005
DATA_CHT_1_COMPGEN(0x00909bb4, "t_bound_handler_1<t_dialog_file, t_button*>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:52006
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_1<t_dialog_file, t_button*>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_2@Vt_dialog_file@@PAVt_button@@H@@;vft=4e02d8;col=509c28;td=5a1ea8;chd=509c18;offset=8;cdOffset=0;validated-hierarchy; map:52007
DATA_CHT_1_COMPGEN(0x00909c28, "const t_bound_handler_2<t_dialog_file, t_button*, int>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_button*, int>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_2@Vt_dialog_file@@PAVt_button@@H@@;bcd=509bec;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52008
DATA_CHT_1_COMPGEN(0x00909bec, "t_bound_handler_2<t_dialog_file, t_button*, int>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_2@Vt_dialog_file@@PAVt_button@@H@@;vft=4e02d8;col=509c28;td=5a1ea8;chd=509c18;offset=8;cdOffset=0;validated-hierarchy; map:52009
DATA_CHT_1_COMPGEN(0x00909c04, "t_bound_handler_2<t_dialog_file, t_button*, int>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_2@Vt_dialog_file@@PAVt_button@@H@@;vft=4e02d8;col=509c28;td=5a1ea8;chd=509c18;offset=8;cdOffset=0;validated-hierarchy; map:52010
DATA_CHT_1_COMPGEN(0x00909c18, "t_bound_handler_2<t_dialog_file, t_button*, int>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:52011
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_2<t_dialog_file, t_button*, int>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// === .data (4 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_dialog_file@@;td=5a1d90;validated-header; map:58492
DATA_CHT_1_COMPGEN(0x009a1d90, "t_dialog_file `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_2@Vt_dialog_file@@PAVt_scrollbar@@H@@;td=5a1e20;validated-header; map:58493
DATA_CHT_1_COMPGEN(0x009a1e20, "t_bound_handler_2<t_dialog_file, t_scrollbar*, int> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_1@Vt_dialog_file@@PAVt_button@@@@;td=5a1e68;validated-header; map:58494
DATA_CHT_1_COMPGEN(0x009a1e68, "t_bound_handler_1<t_dialog_file, t_button*> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_2@Vt_dialog_file@@PAVt_button@@H@@;td=5a1ea8;validated-header; map:58495
DATA_CHT_1_COMPGEN(0x009a1ea8, "t_bound_handler_2<t_dialog_file, t_button*, int> `RTTI Type Descriptor'")

// === .bss (1 symbols) ===

// confidence:B; dyninit-global; owner-conf-B; map:60206
DATA_CHT_1(0x009edbac)
t_external_string const k_text_read_failed; // Initial value unavailable.
