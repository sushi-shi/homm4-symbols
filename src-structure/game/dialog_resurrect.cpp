// dialog_resurrect.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 7/52 (A:0 B:0 C:0); unaccounted 45; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (30 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65816; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00682e90, 0x11, STATIC_INIT_DISPATCH, "dialog_resurrect#1")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65817; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00682eb0, 0xd7, STATIC_CTOR, "dialog_resurrect#1")

// name:C; dyninit; see ledger; map:65818
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "dialog_resurrect#1")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65819; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00682f90, 0xa, STATIC_DTOR, "dialog_resurrect#1")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65820; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00682fa0, 0x11, STATIC_INIT_DISPATCH, "dialog_resurrect#2")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65821; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00682fc0, 0xd1, STATIC_CTOR, "dialog_resurrect#2")

// name:C; dyninit; see ledger; map:65822
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "dialog_resurrect#2")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65823; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006830a0, 0xa, STATIC_DTOR, "dialog_resurrect#2")

// name:A; map symbol; map:25232
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_dialog_resurrect::t_dialog_resurrect(
    t_window* arg_0,
    std::vector<t_hero*, std::allocator<t_hero*>>& arg_1,
    t_player* arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:25233
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_dialog_resurrect::buy_clicked(t_button* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:25234
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_dialog_resurrect::close_clicked(t_button* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:25235
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_dialog_resurrect::selection_change(t_creature_select_window* arg_0, t_creature_stack* arg_1)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:65824; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006830b0, 0x20, STATIC_INIT_DISPATCH, dialog_resurrect)

// name:A; map symbol; map:25236
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_dialog_resurrect)

// name:A; map symbol; map:25237
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_dialog_resurrect)

// name:A; map symbol; map:25238
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_dialog_resurrect::~t_dialog_resurrect()
{
    // Body unavailable.
}

// name:A; map symbol; map:25239
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<t_button*> bound_handler(t_dialog_resurrect& arg_0, void (t_dialog_resurrect::*)(t_button*))
{
    // Body unavailable.
}

// name:A; map symbol; map:25240
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_creature_select_window*, t_creature_stack*> bound_handler(
    t_dialog_resurrect& arg_0,
    void (t_dialog_resurrect::*)(t_creature_select_window*, t_creature_stack*)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:25241
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_1<t_dialog_resurrect, t_button*>::t_bound_handler_1<t_dialog_resurrect, t_button*>(
    t_dialog_resurrect& arg_0,
    void (t_dialog_resurrect::*)(t_button*)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:25242
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_1<t_dialog_resurrect, t_button*>::operator()(t_button* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:25243
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_2<t_dialog_resurrect, t_creature_select_window*, t_creature_stack*>::t_bound_handler_2<t_dialog_resurrect, t_creature_select_window*, t_creature_stack*>(
    t_dialog_resurrect& arg_0,
    void (t_dialog_resurrect::*)(t_creature_select_window*, t_creature_stack*)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:25244
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_2<t_dialog_resurrect, t_creature_select_window*, t_creature_stack*>::operator()(
    t_creature_select_window* arg_0,
    t_creature_stack* arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:25245
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_1<t_dialog_resurrect, t_button*>")

// name:A; map symbol; map:25246
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_1<t_dialog_resurrect, t_button*>")

// name:A; map symbol; map:25247
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_dialog_resurrect, t_creature_select_window*, t_creature_stack*>")

// name:A; map symbol; map:25248
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_2<t_dialog_resurrect, t_creature_select_window*, t_creature_stack*>")

// name:A; map symbol; map:25249
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_1<t_dialog_resurrect, t_button*>::~t_bound_handler_1<t_dialog_resurrect, t_button*>()
{
    // Body unavailable.
}

// name:A; map symbol; map:25250
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_2<t_dialog_resurrect, t_creature_select_window*, t_creature_stack*>::~t_bound_handler_2<t_dialog_resurrect, t_creature_select_window*, t_creature_stack*>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:25251
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_1<t_dialog_resurrect, t_button*>")

// name:A; map symbol; map:25252
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_dialog_resurrect, t_creature_select_window*, t_creature_stack*>")

// === .rdata (5 symbols) ===

// name:A; map symbol; map:44392
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_dialog_resurrect::`vftable'")

// name:A; map symbol; map:44393
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_1<t_dialog_resurrect, t_button*>::`vftable'{for `t_abstract_function_1<void, t_button*>'}")

// name:A; map symbol; map:44394
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_1<t_dialog_resurrect, t_button*>::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:44395
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_2<t_dialog_resurrect, t_creature_select_window*, t_creature_stack*>::`vftable'{for `t_abstract_function_2<void, t_creature_select_window*, t_creature_stack*>'}")

// name:A; map symbol; map:44396
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_2<t_dialog_resurrect, t_creature_select_window*, t_creature_stack*>::`vftable'{for `t_counted_object'}")

// === .rdata$r (14 symbols) ===

// name:A; map symbol; map:52171
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_dialog_resurrect::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// name:A; map symbol; map:52172
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_dialog_resurrect::`RTTI Base Class Array'")

// name:A; map symbol; map:52173
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_dialog_resurrect::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:52174
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_dialog_resurrect::`RTTI Complete Object Locator'")

// name:A; map symbol; map:52175
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_1<t_dialog_resurrect, t_button*>::`RTTI Complete Object Locator'{for `t_abstract_function_1<void, t_button*>'}")

// name:A; map symbol; map:52176
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_bound_handler_1<t_dialog_resurrect, t_button*>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// name:A; map symbol; map:52177
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_bound_handler_1<t_dialog_resurrect, t_button*>::`RTTI Base Class Array'")

// name:A; map symbol; map:52178
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_bound_handler_1<t_dialog_resurrect, t_button*>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:52179
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_1<t_dialog_resurrect, t_button*>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// name:A; map symbol; map:52180
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_2<t_dialog_resurrect, t_creature_select_window*, t_creature_stack*>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_creature_select_window*, t_creature_stack*>'}")

// name:A; map symbol; map:52181
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_bound_handler_2<t_dialog_resurrect, t_creature_select_window*, t_creature_stack*>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// name:A; map symbol; map:52182
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_bound_handler_2<t_dialog_resurrect, t_creature_select_window*, t_creature_stack*>::`RTTI Base Class Array'")

// name:A; map symbol; map:52183
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_bound_handler_2<t_dialog_resurrect, t_creature_select_window*, t_creature_stack*>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:52184
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_2<t_dialog_resurrect, t_creature_select_window*, t_creature_stack*>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// === .data (3 symbols) ===

// name:A; map symbol; map:58529
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_dialog_resurrect `RTTI Type Descriptor'")

// name:A; map symbol; map:58530
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_bound_handler_1<t_dialog_resurrect, t_button*> `RTTI Type Descriptor'")

// name:A; map symbol; map:58531
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_bound_handler_2<t_dialog_resurrect, t_creature_select_window*, t_creature_stack*> `RTTI Type Descriptor'")
