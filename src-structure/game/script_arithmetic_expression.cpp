// script_arithmetic_expression.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 144/360 (A:134 B:10 C:0); unaccounted 216; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (188 symbols) ===

// confidence:B; align-order; retn,stable; map:34206
VA_CHT_1(0x00792c10, 0x44)
int t_script_binary_arithmetic_expression::evaluate(t_expression_context_hero const& arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:34207
VA_CHT_1(0x00792c60, 0x57)
int t_script_binary_arithmetic_expression::evaluate(t_expression_context_town const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:34208
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_script_binary_arithmetic_expression::evaluate(t_expression_context_object const& arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:34209
VA_CHT_1(0x00792ce0, 0x44)
int t_script_binary_arithmetic_expression::evaluate(t_expression_context_army const& arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:34210
VA_CHT_1(0x00792d30, 0x57)
int t_script_binary_arithmetic_expression::evaluate(t_expression_context_global const& arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:34211
VA_CHT_1(0x00792e80, 0xd)
int t_script_expression_plus::do_evaluation(int arg_0, int arg_1) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:34212
VA_CHT_1(0x00792e90, 0xd)
int t_script_expression_minus::do_evaluation(int arg_0, int arg_1) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:34213
VA_CHT_1(0x00792ea0, 0xc)
int t_script_expression_times::do_evaluation(int arg_0, int arg_1) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:34214
VA_CHT_1(0x00792eb0, 0x19)
int t_script_expression_divided_by::do_evaluation(int arg_0, int arg_1) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:34215
VA_CHT_1(0x00792ed0, 0x19)
int t_script_expression_remainder::do_evaluation(int arg_0, int arg_1) const
{
    // Body unavailable.
}

// name:A; map symbol; map:34216
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_script_unary_arithmetic_expression::evaluate(t_expression_context_hero const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:34217
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_script_unary_arithmetic_expression::evaluate(t_expression_context_town const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:34218
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_script_unary_arithmetic_expression::evaluate(t_expression_context_object const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:34219
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_script_unary_arithmetic_expression::evaluate(t_expression_context_army const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:34220
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_script_unary_arithmetic_expression::evaluate(t_expression_context_global const& arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:34221
VA_CHT_1(0x00792f90, 0xe)
int t_script_expression_negate::do_evaluation(int arg_0) const
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:63167; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00792fa0, 0x10c, STATIC_INIT_DISPATCH, script_arithmetic_expression)

// confidence:A; align-order; atexit,stable; map:63169; name:C (dyninit; see ledger)
VA_CHT_1(0x007930b0, 0x1f)
// t_script_numeric_expression_base<10,t_script_expression_negate>::k_factory$atexit
// Function body not reconstructed; signature retained as a comment.

// confidence:A; align-order; atexit,stable; map:63170; name:C (dyninit; see ledger)
VA_CHT_1(0x007930d0, 0x1f)
// t_script_numeric_expression_base<12,t_script_expression_plus>::k_factory$atexit
// Function body not reconstructed; signature retained as a comment.

// confidence:A; align-order; atexit,stable; map:63171; name:C (dyninit; see ledger)
VA_CHT_1(0x007930f0, 0x1f)
// t_script_numeric_expression_base<8,t_script_expression_minus>::k_factory$atexit
// Function body not reconstructed; signature retained as a comment.

// confidence:A; align-order; atexit,stable; map:63172; name:C (dyninit; see ledger)
VA_CHT_1(0x00793110, 0x1f)
// t_script_numeric_expression_base<15,t_script_expression_times>::k_factory$atexit
// Function body not reconstructed; signature retained as a comment.

// confidence:A; align-order; atexit,stable; map:63173; name:C (dyninit; see ledger)
VA_CHT_1(0x00793130, 0x1f)
// t_script_numeric_expression_base<3,t_script_expression_divided_by>::k_factory$atexit
// Function body not reconstructed; signature retained as a comment.

// confidence:A; align-order; atexit,stable; map:63174; name:C (dyninit; see ledger)
VA_CHT_1(0x00793150, 0x1f)
// t_script_numeric_expression_base<14,t_script_expression_remainder>::k_factory$atexit
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:34222
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_script_numeric_expression const& t_script_unary_expression<t_abstract_script_numeric_expression, t_abstract_script_numeric_expression>::get_subexpression(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:34223
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_script_numeric_expression const& t_script_binary_expression<t_abstract_script_numeric_expression, t_abstract_script_numeric_expression>::get_left_subexpression(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:34224
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_script_numeric_expression const& t_script_binary_expression<t_abstract_script_numeric_expression, t_abstract_script_numeric_expression>::get_right_subexpression(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:34225
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_script_numeric_expression* t_counted_ptr<t_abstract_script_numeric_expression>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:34226
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_script_numeric_expression& t_counted_ptr<t_abstract_script_numeric_expression>::operator*() const
{
    // Body unavailable.
}

// name:A; dyninit; see ledger; map:34227
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "t_script_numeric_expression_base<10,t_script_expression_negate>::k_factory")

// name:A; dyninit; see ledger; map:34228
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "t_script_numeric_expression_base<12,t_script_expression_plus>::k_factory")

// name:A; dyninit; see ledger; map:34229
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "t_script_numeric_expression_base<8,t_script_expression_minus>::k_factory")

// name:A; dyninit; see ledger; map:34230
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "t_script_numeric_expression_base<15,t_script_expression_times>::k_factory")

// name:A; dyninit; see ledger; map:34231
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "t_script_numeric_expression_base<3,t_script_expression_divided_by>::k_factory")

// name:A; dyninit; see ledger; map:34232
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "t_script_numeric_expression_base<14,t_script_expression_remainder>::k_factory")

// name:A; dyninit; see ledger; map:34233
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "t_script_numeric_expression_base<14,t_script_expression_remainder>::k_factory")

// name:A; dyninit; see ledger; map:34234
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "t_script_numeric_expression_base<3,t_script_expression_divided_by>::k_factory")

// name:A; dyninit; see ledger; map:34235
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "t_script_numeric_expression_base<15,t_script_expression_times>::k_factory")

// name:A; dyninit; see ledger; map:34236
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "t_script_numeric_expression_base<8,t_script_expression_minus>::k_factory")

// name:A; dyninit; see ledger; map:34237
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "t_script_numeric_expression_base<12,t_script_expression_plus>::k_factory")

// name:A; dyninit; see ledger; map:34238
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "t_script_numeric_expression_base<10,t_script_expression_negate>::k_factory")

// name:A; map symbol; map:34239
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression_factory<10>::~t_script_numeric_expression_factory<10>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34240
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression_factory<12>::~t_script_numeric_expression_factory<12>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34241
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression_factory<8>::~t_script_numeric_expression_factory<8>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34242
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression_factory<15>::~t_script_numeric_expression_factory<15>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34243
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression_factory<3>::~t_script_numeric_expression_factory<3>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34244
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression_factory<14>::~t_script_numeric_expression_factory<14>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34245
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression_factory<10>::t_script_numeric_expression_factory<10>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:34246
VA_CHT_1(0x007931c0, 0x42)
t_counted_ptr<t_abstract_script_numeric_expression> t_script_numeric_expression_factory<10>::create() const
{
    // Body unavailable.
}

// name:A; map symbol; map:34247
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression<10>::t_script_numeric_expression<10>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34248
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_script_unary_expression<t_abstract_script_numeric_expression, t_abstract_script_numeric_expression>::read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:34249
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_script_unary_expression<t_abstract_script_numeric_expression, t_abstract_script_numeric_expression>::read_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:34250
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_script_unary_expression<t_abstract_script_numeric_expression, t_abstract_script_numeric_expression>::write(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:34251
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_numeric_expression> t_script_numeric_expression_base<10, t_script_expression_negate>::clone(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:34252
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression_type t_script_numeric_expression_base<10, t_script_expression_negate>::get_type(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:34253
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression<10>::t_script_numeric_expression<10>(t_script_numeric_expression<10> const& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:34254
VA_CHT_1_COMPGEN(0x00793490, 0x1e, SCALAR_DELETING_DTOR, "t_script_numeric_expression<10>")

// name:A; map symbol; map:34255
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_numeric_expression<10>")

// name:A; map symbol; map:34256
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression_base<10, t_script_expression_negate>::t_script_numeric_expression_base<10, t_script_expression_negate>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:34257
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression_base<10, t_script_expression_negate>::t_script_numeric_expression_base<10, t_script_expression_negate>(
    t_script_numeric_expression_base<10, t_script_expression_negate> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:34258
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression<10>::~t_script_numeric_expression<10>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34259
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression_base<10, t_script_expression_negate>::~t_script_numeric_expression_base<10, t_script_expression_negate>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:34260
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_numeric_expression_base<10, t_script_expression_negate>")

// name:A; map symbol; map:34261
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_numeric_expression_base<10, t_script_expression_negate>")

// name:A; map symbol; map:34262
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_expression_negate::t_script_expression_negate()
{
    // Body unavailable.
}

// name:A; map symbol; map:34263
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_expression_negate::~t_script_expression_negate()
{
    // Body unavailable.
}

// name:A; map symbol; map:34264
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_expression_negate::t_script_expression_negate(t_script_expression_negate const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:34265
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_script_expression_negate)

// name:A; map symbol; map:34266
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_script_expression_negate)

// name:A; map symbol; map:34267
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_unary_arithmetic_expression::t_script_unary_arithmetic_expression()
{
    // Body unavailable.
}

// name:A; map symbol; map:34268
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_unary_arithmetic_expression::~t_script_unary_arithmetic_expression()
{
    // Body unavailable.
}

// name:A; map symbol; map:34269
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_unary_arithmetic_expression::t_script_unary_arithmetic_expression(
    t_script_unary_arithmetic_expression const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:34270
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_script_unary_arithmetic_expression)

// name:A; map symbol; map:34271
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_script_unary_arithmetic_expression)

// name:A; map symbol; map:34272
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_unary_expression<t_abstract_script_numeric_expression, t_abstract_script_numeric_expression>::~t_script_unary_expression<t_abstract_script_numeric_expression, t_abstract_script_numeric_expression>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:34273
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_unary_expression<t_abstract_script_numeric_expression, t_abstract_script_numeric_expression>::t_script_unary_expression<t_abstract_script_numeric_expression, t_abstract_script_numeric_expression>(

)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:34274
VA_CHT_1_COMPGEN(0x00793510, 0x1e, VECTOR_DELETING_DTOR, "t_script_unary_expression<t_abstract_script_numeric_expression, t_abstract_script_numeric_expression>")

// name:A; map symbol; map:34275
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_unary_expression<t_abstract_script_numeric_expression, t_abstract_script_numeric_expression>")

// name:A; map symbol; map:34276
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_unary_expression<t_abstract_script_numeric_expression, t_abstract_script_numeric_expression>::t_script_unary_expression<t_abstract_script_numeric_expression, t_abstract_script_numeric_expression>(
    t_script_unary_expression<t_abstract_script_numeric_expression, t_abstract_script_numeric_expression> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:34277
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_numeric_expression>::t_counted_ptr<t_abstract_script_numeric_expression>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34278
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_numeric_expression>& t_counted_ptr<t_abstract_script_numeric_expression>::operator=(
    t_counted_ptr<t_abstract_script_numeric_expression> const& arg_0
)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:34279
VA_CHT_1(0x007935b0, 0x49)
t_script_numeric_expression_factory<12>::t_script_numeric_expression_factory<12>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34280
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_numeric_expression> t_script_numeric_expression_factory<12>::create() const
{
    // Body unavailable.
}

// name:A; map symbol; map:34281
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression<12>::t_script_numeric_expression<12>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:34282
VA_CHT_1(0x00793670, 0x105)
bool t_script_binary_expression<t_abstract_script_numeric_expression, t_abstract_script_numeric_expression>::read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:34283
VA_CHT_1(0x00793780, 0x105)
bool t_script_binary_expression<t_abstract_script_numeric_expression, t_abstract_script_numeric_expression>::read_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:34284
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_script_binary_expression<t_abstract_script_numeric_expression, t_abstract_script_numeric_expression>::write(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:34285
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_numeric_expression> t_script_numeric_expression_base<12, t_script_expression_plus>::clone(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:34286
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression_type t_script_numeric_expression_base<12, t_script_expression_plus>::get_type(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:34287
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression<12>::t_script_numeric_expression<12>(t_script_numeric_expression<12> const& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:34288
VA_CHT_1_COMPGEN(0x00793a20, 0x1e, VECTOR_DELETING_DTOR, "t_script_numeric_expression<12>")

// name:A; map symbol; map:34289
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_numeric_expression<12>")

// name:A; map symbol; map:34290
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression_base<12, t_script_expression_plus>::t_script_numeric_expression_base<12, t_script_expression_plus>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:34291
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression_base<12, t_script_expression_plus>::t_script_numeric_expression_base<12, t_script_expression_plus>(
    t_script_numeric_expression_base<12, t_script_expression_plus> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:34292
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression<12>::~t_script_numeric_expression<12>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34293
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression_base<12, t_script_expression_plus>::~t_script_numeric_expression_base<12, t_script_expression_plus>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:34294
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_numeric_expression_base<12, t_script_expression_plus>")

// name:A; map symbol; map:34295
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_numeric_expression_base<12, t_script_expression_plus>")

// name:A; map symbol; map:34296
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_expression_plus::t_script_expression_plus()
{
    // Body unavailable.
}

// name:A; map symbol; map:34297
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_expression_plus::~t_script_expression_plus()
{
    // Body unavailable.
}

// name:A; map symbol; map:34298
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_expression_plus::t_script_expression_plus(t_script_expression_plus const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:34299
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_script_expression_plus)

// name:A; map symbol; map:34300
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_script_expression_plus)

// name:A; map symbol; map:34301
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_binary_arithmetic_expression::t_script_binary_arithmetic_expression()
{
    // Body unavailable.
}

// name:A; map symbol; map:34302
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_binary_arithmetic_expression::~t_script_binary_arithmetic_expression()
{
    // Body unavailable.
}

// name:A; map symbol; map:34303
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_binary_arithmetic_expression::t_script_binary_arithmetic_expression(
    t_script_binary_arithmetic_expression const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:34304
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_script_binary_arithmetic_expression)

// name:A; map symbol; map:34305
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_script_binary_arithmetic_expression)

// name:A; map symbol; map:34306
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_binary_expression<t_abstract_script_numeric_expression, t_abstract_script_numeric_expression>::~t_script_binary_expression<t_abstract_script_numeric_expression, t_abstract_script_numeric_expression>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:34307
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_binary_expression<t_abstract_script_numeric_expression, t_abstract_script_numeric_expression>::t_script_binary_expression<t_abstract_script_numeric_expression, t_abstract_script_numeric_expression>(

)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:34308
VA_CHT_1_COMPGEN(0x00793ab0, 0x1e, SCALAR_DELETING_DTOR, "t_script_binary_expression<t_abstract_script_numeric_expression, t_abstract_script_numeric_expression>")

// name:A; map symbol; map:34309
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_binary_expression<t_abstract_script_numeric_expression, t_abstract_script_numeric_expression>")

// name:A; map symbol; map:34310
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_binary_expression<t_abstract_script_numeric_expression, t_abstract_script_numeric_expression>::t_script_binary_expression<t_abstract_script_numeric_expression, t_abstract_script_numeric_expression>(
    t_script_binary_expression<t_abstract_script_numeric_expression, t_abstract_script_numeric_expression> const& arg_0
)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:34311
VA_CHT_1(0x00793b70, 0x49)
t_script_numeric_expression_factory<8>::t_script_numeric_expression_factory<8>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34312
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_numeric_expression> t_script_numeric_expression_factory<8>::create() const
{
    // Body unavailable.
}

// name:A; map symbol; map:34313
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression<8>::t_script_numeric_expression<8>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34314
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_numeric_expression> t_script_numeric_expression_base<8, t_script_expression_minus>::clone(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:34315
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression_type t_script_numeric_expression_base<8, t_script_expression_minus>::get_type(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:34316
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression<8>::t_script_numeric_expression<8>(t_script_numeric_expression<8> const& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:34317
VA_CHT_1_COMPGEN(0x00793d00, 0x1e, VECTOR_DELETING_DTOR, "t_script_numeric_expression<8>")

// name:A; map symbol; map:34318
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_numeric_expression<8>")

// name:A; map symbol; map:34319
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression_base<8, t_script_expression_minus>::t_script_numeric_expression_base<8, t_script_expression_minus>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:34320
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression_base<8, t_script_expression_minus>::t_script_numeric_expression_base<8, t_script_expression_minus>(
    t_script_numeric_expression_base<8, t_script_expression_minus> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:34321
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression<8>::~t_script_numeric_expression<8>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34322
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression_base<8, t_script_expression_minus>::~t_script_numeric_expression_base<8, t_script_expression_minus>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:34323
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_numeric_expression_base<8, t_script_expression_minus>")

// name:A; map symbol; map:34324
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_numeric_expression_base<8, t_script_expression_minus>")

// name:A; map symbol; map:34325
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_expression_minus::t_script_expression_minus()
{
    // Body unavailable.
}

// name:A; map symbol; map:34326
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_expression_minus::~t_script_expression_minus()
{
    // Body unavailable.
}

// name:A; map symbol; map:34327
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_expression_minus::t_script_expression_minus(t_script_expression_minus const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:34328
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_script_expression_minus)

// name:A; map symbol; map:34329
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_script_expression_minus)

// name:A; map symbol; map:34330
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression_factory<15>::t_script_numeric_expression_factory<15>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34331
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_numeric_expression> t_script_numeric_expression_factory<15>::create() const
{
    // Body unavailable.
}

// name:A; map symbol; map:34332
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression<15>::t_script_numeric_expression<15>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34333
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_numeric_expression> t_script_numeric_expression_base<15, t_script_expression_times>::clone(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:34334
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression_type t_script_numeric_expression_base<15, t_script_expression_times>::get_type(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:34335
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression<15>::t_script_numeric_expression<15>(t_script_numeric_expression<15> const& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:34336
VA_CHT_1_COMPGEN(0x00793f20, 0x1e, SCALAR_DELETING_DTOR, "t_script_numeric_expression<15>")

// name:A; map symbol; map:34337
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_numeric_expression<15>")

// name:A; map symbol; map:34338
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression_base<15, t_script_expression_times>::t_script_numeric_expression_base<15, t_script_expression_times>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:34339
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression_base<15, t_script_expression_times>::t_script_numeric_expression_base<15, t_script_expression_times>(
    t_script_numeric_expression_base<15, t_script_expression_times> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:34340
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression<15>::~t_script_numeric_expression<15>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34341
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression_base<15, t_script_expression_times>::~t_script_numeric_expression_base<15, t_script_expression_times>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:34342
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_numeric_expression_base<15, t_script_expression_times>")

// name:A; map symbol; map:34343
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_numeric_expression_base<15, t_script_expression_times>")

// name:A; map symbol; map:34344
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_expression_times::t_script_expression_times()
{
    // Body unavailable.
}

// name:A; map symbol; map:34345
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_expression_times::~t_script_expression_times()
{
    // Body unavailable.
}

// name:A; map symbol; map:34346
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_expression_times::t_script_expression_times(t_script_expression_times const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:34347
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_script_expression_times)

// name:A; map symbol; map:34348
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_script_expression_times)

// confidence:A; align-band; retn,stable,vptr; map:34349
VA_CHT_1(0x00793fb0, 0x49)
t_script_numeric_expression_factory<3>::t_script_numeric_expression_factory<3>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34350
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_numeric_expression> t_script_numeric_expression_factory<3>::create() const
{
    // Body unavailable.
}

// name:A; map symbol; map:34351
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression<3>::t_script_numeric_expression<3>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34352
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_numeric_expression> t_script_numeric_expression_base<3, t_script_expression_divided_by>::clone(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:34353
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression_type t_script_numeric_expression_base<3, t_script_expression_divided_by>::get_type(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:34354
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression<3>::t_script_numeric_expression<3>(t_script_numeric_expression<3> const& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:34355
VA_CHT_1_COMPGEN(0x00794140, 0x1e, VECTOR_DELETING_DTOR, "t_script_numeric_expression<3>")

// name:A; map symbol; map:34356
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_numeric_expression<3>")

// name:A; map symbol; map:34357
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression_base<3, t_script_expression_divided_by>::t_script_numeric_expression_base<3, t_script_expression_divided_by>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:34358
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression_base<3, t_script_expression_divided_by>::t_script_numeric_expression_base<3, t_script_expression_divided_by>(
    t_script_numeric_expression_base<3, t_script_expression_divided_by> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:34359
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression<3>::~t_script_numeric_expression<3>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34360
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression_base<3, t_script_expression_divided_by>::~t_script_numeric_expression_base<3, t_script_expression_divided_by>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:34361
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_numeric_expression_base<3, t_script_expression_divided_by>")

// name:A; map symbol; map:34362
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_numeric_expression_base<3, t_script_expression_divided_by>")

// name:A; map symbol; map:34363
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_expression_divided_by::t_script_expression_divided_by()
{
    // Body unavailable.
}

// name:A; map symbol; map:34364
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_expression_divided_by::~t_script_expression_divided_by()
{
    // Body unavailable.
}

// name:A; map symbol; map:34365
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_expression_divided_by::t_script_expression_divided_by(t_script_expression_divided_by const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:34366
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_script_expression_divided_by)

// name:A; map symbol; map:34367
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_script_expression_divided_by)

// confidence:A; align-band; retn,stable,vptr; map:34368
VA_CHT_1(0x007941d0, 0x49)
t_script_numeric_expression_factory<14>::t_script_numeric_expression_factory<14>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34369
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_numeric_expression> t_script_numeric_expression_factory<14>::create() const
{
    // Body unavailable.
}

// name:A; map symbol; map:34370
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression<14>::t_script_numeric_expression<14>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34371
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_numeric_expression> t_script_numeric_expression_base<14, t_script_expression_remainder>::clone(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:34372
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression_type t_script_numeric_expression_base<14, t_script_expression_remainder>::get_type(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:34373
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression<14>::t_script_numeric_expression<14>(t_script_numeric_expression<14> const& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:34374
VA_CHT_1_COMPGEN(0x00794360, 0x1e, VECTOR_DELETING_DTOR, "t_script_numeric_expression<14>")

// name:A; map symbol; map:34375
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_numeric_expression<14>")

// name:A; map symbol; map:34376
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression_base<14, t_script_expression_remainder>::t_script_numeric_expression_base<14, t_script_expression_remainder>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:34377
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression_base<14, t_script_expression_remainder>::t_script_numeric_expression_base<14, t_script_expression_remainder>(
    t_script_numeric_expression_base<14, t_script_expression_remainder> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:34378
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression<14>::~t_script_numeric_expression<14>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34379
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_numeric_expression_base<14, t_script_expression_remainder>::~t_script_numeric_expression_base<14, t_script_expression_remainder>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:34380
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_numeric_expression_base<14, t_script_expression_remainder>")

// name:A; map symbol; map:34381
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_numeric_expression_base<14, t_script_expression_remainder>")

// name:A; map symbol; map:34382
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_expression_remainder::t_script_expression_remainder()
{
    // Body unavailable.
}

// name:A; map symbol; map:34383
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_expression_remainder::~t_script_expression_remainder()
{
    // Body unavailable.
}

// name:A; map symbol; map:34384
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_expression_remainder::t_script_expression_remainder(t_script_expression_remainder const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:34385
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_script_expression_remainder)

// name:A; map symbol; map:34386
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_script_expression_remainder)

// === .rdata (28 symbols) ===

// confidence:A; rtti-name; map:45348
DATA_CHT_1_COMPGEN(0x008ea744, "const t_script_numeric_expression_factory<10>::`vftable'")

// confidence:A; rtti-name; map:45349
DATA_CHT_1_COMPGEN(0x008ea74c, "const t_script_numeric_expression<10>::`vftable'")

// name:A; map symbol; map:45350
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_numeric_expression_base<10, t_script_expression_negate>::`vftable'")

// name:A; map symbol; map:45351
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_expression_negate::`vftable'")

// name:A; map symbol; map:45352
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_unary_arithmetic_expression::`vftable'")

// confidence:A; rtti-name; map:45353
DATA_CHT_1_COMPGEN(0x008ea780, "const t_script_unary_expression<t_abstract_script_numeric_expression, t_abstract_script_numeric_expression>::`vftable'")

// confidence:A; rtti-name; map:45354
DATA_CHT_1_COMPGEN(0x008ea7e0, "const t_script_numeric_expression_factory<12>::`vftable'")

// confidence:A; rtti-name; map:45355
DATA_CHT_1_COMPGEN(0x008ea7e8, "const t_script_numeric_expression<12>::`vftable'")

// name:A; map symbol; map:45356
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_numeric_expression_base<12, t_script_expression_plus>::`vftable'")

// name:A; map symbol; map:45357
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_expression_plus::`vftable'")

// name:A; map symbol; map:45358
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_binary_arithmetic_expression::`vftable'")

// confidence:A; rtti-name; map:45359
DATA_CHT_1_COMPGEN(0x008ea81c, "const t_script_binary_expression<t_abstract_script_numeric_expression, t_abstract_script_numeric_expression>::`vftable'")

// confidence:A; rtti-name; map:45360
DATA_CHT_1_COMPGEN(0x008ea87c, "const t_script_numeric_expression_factory<8>::`vftable'")

// confidence:A; rtti-name; map:45361
DATA_CHT_1_COMPGEN(0x008ea884, "const t_script_numeric_expression<8>::`vftable'")

// name:A; map symbol; map:45362
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_numeric_expression_base<8, t_script_expression_minus>::`vftable'")

// name:A; map symbol; map:45363
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_expression_minus::`vftable'")

// confidence:A; rtti-name; map:45364
DATA_CHT_1_COMPGEN(0x008ea8b8, "const t_script_numeric_expression_factory<15>::`vftable'")

// confidence:A; rtti-name; map:45365
DATA_CHT_1_COMPGEN(0x008ea8c0, "const t_script_numeric_expression<15>::`vftable'")

// name:A; map symbol; map:45366
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_numeric_expression_base<15, t_script_expression_times>::`vftable'")

// name:A; map symbol; map:45367
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_expression_times::`vftable'")

// confidence:A; rtti-name; map:45368
DATA_CHT_1_COMPGEN(0x008ea8f4, "const t_script_numeric_expression_factory<3>::`vftable'")

// confidence:A; rtti-name; map:45369
DATA_CHT_1_COMPGEN(0x008ea8fc, "const t_script_numeric_expression<3>::`vftable'")

// name:A; map symbol; map:45370
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_numeric_expression_base<3, t_script_expression_divided_by>::`vftable'")

// name:A; map symbol; map:45371
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_expression_divided_by::`vftable'")

// confidence:A; rtti-name; map:45372
DATA_CHT_1_COMPGEN(0x008ea930, "const t_script_numeric_expression_factory<14>::`vftable'")

// confidence:A; rtti-name; map:45373
DATA_CHT_1_COMPGEN(0x008ea938, "const t_script_numeric_expression<14>::`vftable'")

// name:A; map symbol; map:45374
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_numeric_expression_base<14, t_script_expression_remainder>::`vftable'")

// name:A; map symbol; map:45375
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_expression_remainder::`vftable'")

// === .rdata$r (112 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_numeric_expression_factory@$09@@;bcd=515cb0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54770
DATA_CHT_1_COMPGEN(0x00915cb0, "t_script_numeric_expression_factory<10>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_numeric_expression_factory@$09@@;vft=4ea744;col=515ce8;td=5b4264;chd=515cd8;offset=0;cdOffset=0;validated-hierarchy; map:54771
DATA_CHT_1_COMPGEN(0x00915cc8, "t_script_numeric_expression_factory<10>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_numeric_expression_factory@$09@@;vft=4ea744;col=515ce8;td=5b4264;chd=515cd8;offset=0;cdOffset=0;validated-hierarchy; map:54772
DATA_CHT_1_COMPGEN(0x00915cd8, "t_script_numeric_expression_factory<10>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_numeric_expression_factory@$09@@;vft=4ea744;col=515ce8;td=5b4264;chd=515cd8;offset=0;cdOffset=0;validated-hierarchy; map:54773
DATA_CHT_1_COMPGEN(0x00915ce8, "const t_script_numeric_expression_factory<10>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_unary_expression@Vt_abstract_script_numeric_expression@@V1@@@;bcd=515cfc;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54774
DATA_CHT_1_COMPGEN(0x00915cfc, "t_script_unary_expression<t_abstract_script_numeric_expression, t_abstract_script_numeric_expression>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_script_unary_arithmetic_expression@@;bcd=515d14;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54775
DATA_CHT_1_COMPGEN(0x00915d14, "t_script_unary_arithmetic_expression::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_script_expression_negate@@;bcd=515d2c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54776
DATA_CHT_1_COMPGEN(0x00915d2c, "t_script_expression_negate::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_numeric_expression_base@$09Vt_script_expression_negate@@@@;bcd=515d44;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54777
DATA_CHT_1_COMPGEN(0x00915d44, "t_script_numeric_expression_base<10, t_script_expression_negate>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_numeric_expression@$09@@;bcd=515d5c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54778
DATA_CHT_1_COMPGEN(0x00915d5c, "t_script_numeric_expression<10>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_numeric_expression@$09@@;vft=4ea74c;col=515da8;td=5b43ac;chd=515d98;offset=0;cdOffset=0;validated-hierarchy; map:54779
DATA_CHT_1_COMPGEN(0x00915d74, "t_script_numeric_expression<10>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_numeric_expression@$09@@;vft=4ea74c;col=515da8;td=5b43ac;chd=515d98;offset=0;cdOffset=0;validated-hierarchy; map:54780
DATA_CHT_1_COMPGEN(0x00915d98, "t_script_numeric_expression<10>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_numeric_expression@$09@@;vft=4ea74c;col=515da8;td=5b43ac;chd=515d98;offset=0;cdOffset=0;validated-hierarchy; map:54781
DATA_CHT_1_COMPGEN(0x00915da8, "const t_script_numeric_expression<10>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54782
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_numeric_expression_base<10, t_script_expression_negate>::`RTTI Base Class Array'")

// name:A; map symbol; map:54783
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_numeric_expression_base<10, t_script_expression_negate>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54784
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_numeric_expression_base<10, t_script_expression_negate>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54785
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_expression_negate::`RTTI Base Class Array'")

// name:A; map symbol; map:54786
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_expression_negate::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54787
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_expression_negate::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54788
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_unary_arithmetic_expression::`RTTI Base Class Array'")

// name:A; map symbol; map:54789
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_unary_arithmetic_expression::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54790
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_unary_arithmetic_expression::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_unary_expression@Vt_abstract_script_numeric_expression@@V1@@@;vft=4ea780;col=515de0;td=5b42a0;chd=515dd0;offset=0;cdOffset=0;validated-hierarchy; map:54791
DATA_CHT_1_COMPGEN(0x00915dbc, "t_script_unary_expression<t_abstract_script_numeric_expression, t_abstract_script_numeric_expression>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_unary_expression@Vt_abstract_script_numeric_expression@@V1@@@;vft=4ea780;col=515de0;td=5b42a0;chd=515dd0;offset=0;cdOffset=0;validated-hierarchy; map:54792
DATA_CHT_1_COMPGEN(0x00915dd0, "t_script_unary_expression<t_abstract_script_numeric_expression, t_abstract_script_numeric_expression>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_unary_expression@Vt_abstract_script_numeric_expression@@V1@@@;vft=4ea780;col=515de0;td=5b42a0;chd=515dd0;offset=0;cdOffset=0;validated-hierarchy; map:54793
DATA_CHT_1_COMPGEN(0x00915de0, "const t_script_unary_expression<t_abstract_script_numeric_expression, t_abstract_script_numeric_expression>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_numeric_expression_factory@$0M@@@;bcd=515e24;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54794
DATA_CHT_1_COMPGEN(0x00915e24, "t_script_numeric_expression_factory<12>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_numeric_expression_factory@$0M@@@;vft=4ea7e0;col=515e5c;td=5b43dc;chd=515e4c;offset=0;cdOffset=0;validated-hierarchy; map:54795
DATA_CHT_1_COMPGEN(0x00915e3c, "t_script_numeric_expression_factory<12>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_numeric_expression_factory@$0M@@@;vft=4ea7e0;col=515e5c;td=5b43dc;chd=515e4c;offset=0;cdOffset=0;validated-hierarchy; map:54796
DATA_CHT_1_COMPGEN(0x00915e4c, "t_script_numeric_expression_factory<12>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_numeric_expression_factory@$0M@@@;vft=4ea7e0;col=515e5c;td=5b43dc;chd=515e4c;offset=0;cdOffset=0;validated-hierarchy; map:54797
DATA_CHT_1_COMPGEN(0x00915e5c, "const t_script_numeric_expression_factory<12>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_binary_expression@Vt_abstract_script_numeric_expression@@V1@@@;bcd=515e70;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54798
DATA_CHT_1_COMPGEN(0x00915e70, "t_script_binary_expression<t_abstract_script_numeric_expression, t_abstract_script_numeric_expression>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_script_binary_arithmetic_expression@@;bcd=515e88;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54799
DATA_CHT_1_COMPGEN(0x00915e88, "t_script_binary_arithmetic_expression::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_script_expression_plus@@;bcd=515ea0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54800
DATA_CHT_1_COMPGEN(0x00915ea0, "t_script_expression_plus::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_numeric_expression_base@$0M@Vt_script_expression_plus@@@@;bcd=515eb8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54801
DATA_CHT_1_COMPGEN(0x00915eb8, "t_script_numeric_expression_base<12, t_script_expression_plus>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_numeric_expression@$0M@@@;bcd=515ed0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54802
DATA_CHT_1_COMPGEN(0x00915ed0, "t_script_numeric_expression<12>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_numeric_expression@$0M@@@;vft=4ea7e8;col=515f1c;td=5b4524;chd=515f0c;offset=0;cdOffset=0;validated-hierarchy; map:54803
DATA_CHT_1_COMPGEN(0x00915ee8, "t_script_numeric_expression<12>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_numeric_expression@$0M@@@;vft=4ea7e8;col=515f1c;td=5b4524;chd=515f0c;offset=0;cdOffset=0;validated-hierarchy; map:54804
DATA_CHT_1_COMPGEN(0x00915f0c, "t_script_numeric_expression<12>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_numeric_expression@$0M@@@;vft=4ea7e8;col=515f1c;td=5b4524;chd=515f0c;offset=0;cdOffset=0;validated-hierarchy; map:54805
DATA_CHT_1_COMPGEN(0x00915f1c, "const t_script_numeric_expression<12>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54806
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_numeric_expression_base<12, t_script_expression_plus>::`RTTI Base Class Array'")

// name:A; map symbol; map:54807
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_numeric_expression_base<12, t_script_expression_plus>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54808
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_numeric_expression_base<12, t_script_expression_plus>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54809
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_expression_plus::`RTTI Base Class Array'")

// name:A; map symbol; map:54810
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_expression_plus::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54811
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_expression_plus::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54812
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_binary_arithmetic_expression::`RTTI Base Class Array'")

// name:A; map symbol; map:54813
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_binary_arithmetic_expression::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54814
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_binary_arithmetic_expression::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_binary_expression@Vt_abstract_script_numeric_expression@@V1@@@;vft=4ea81c;col=515f54;td=5b4418;chd=515f44;offset=0;cdOffset=0;validated-hierarchy; map:54815
DATA_CHT_1_COMPGEN(0x00915f30, "t_script_binary_expression<t_abstract_script_numeric_expression, t_abstract_script_numeric_expression>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_binary_expression@Vt_abstract_script_numeric_expression@@V1@@@;vft=4ea81c;col=515f54;td=5b4418;chd=515f44;offset=0;cdOffset=0;validated-hierarchy; map:54816
DATA_CHT_1_COMPGEN(0x00915f44, "t_script_binary_expression<t_abstract_script_numeric_expression, t_abstract_script_numeric_expression>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_binary_expression@Vt_abstract_script_numeric_expression@@V1@@@;vft=4ea81c;col=515f54;td=5b4418;chd=515f44;offset=0;cdOffset=0;validated-hierarchy; map:54817
DATA_CHT_1_COMPGEN(0x00915f54, "const t_script_binary_expression<t_abstract_script_numeric_expression, t_abstract_script_numeric_expression>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_numeric_expression_factory@$07@@;bcd=515f9c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54818
DATA_CHT_1_COMPGEN(0x00915f9c, "t_script_numeric_expression_factory<8>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_numeric_expression_factory@$07@@;vft=4ea87c;col=515fd4;td=5b4558;chd=515fc4;offset=0;cdOffset=0;validated-hierarchy; map:54819
DATA_CHT_1_COMPGEN(0x00915fb4, "t_script_numeric_expression_factory<8>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_numeric_expression_factory@$07@@;vft=4ea87c;col=515fd4;td=5b4558;chd=515fc4;offset=0;cdOffset=0;validated-hierarchy; map:54820
DATA_CHT_1_COMPGEN(0x00915fc4, "t_script_numeric_expression_factory<8>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_numeric_expression_factory@$07@@;vft=4ea87c;col=515fd4;td=5b4558;chd=515fc4;offset=0;cdOffset=0;validated-hierarchy; map:54821
DATA_CHT_1_COMPGEN(0x00915fd4, "const t_script_numeric_expression_factory<8>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_script_expression_minus@@;bcd=515fe8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54822
DATA_CHT_1_COMPGEN(0x00915fe8, "t_script_expression_minus::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_numeric_expression_base@$07Vt_script_expression_minus@@@@;bcd=516000;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54823
DATA_CHT_1_COMPGEN(0x00916000, "t_script_numeric_expression_base<8, t_script_expression_minus>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_numeric_expression@$07@@;bcd=516018;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54824
DATA_CHT_1_COMPGEN(0x00916018, "t_script_numeric_expression<8>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_numeric_expression@$07@@;vft=4ea884;col=516064;td=5b460c;chd=516054;offset=0;cdOffset=0;validated-hierarchy; map:54825
DATA_CHT_1_COMPGEN(0x00916030, "t_script_numeric_expression<8>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_numeric_expression@$07@@;vft=4ea884;col=516064;td=5b460c;chd=516054;offset=0;cdOffset=0;validated-hierarchy; map:54826
DATA_CHT_1_COMPGEN(0x00916054, "t_script_numeric_expression<8>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_numeric_expression@$07@@;vft=4ea884;col=516064;td=5b460c;chd=516054;offset=0;cdOffset=0;validated-hierarchy; map:54827
DATA_CHT_1_COMPGEN(0x00916064, "const t_script_numeric_expression<8>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54828
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_numeric_expression_base<8, t_script_expression_minus>::`RTTI Base Class Array'")

// name:A; map symbol; map:54829
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_numeric_expression_base<8, t_script_expression_minus>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54830
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_numeric_expression_base<8, t_script_expression_minus>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54831
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_expression_minus::`RTTI Base Class Array'")

// name:A; map symbol; map:54832
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_expression_minus::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54833
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_expression_minus::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_numeric_expression_factory@$0P@@@;bcd=516078;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54834
DATA_CHT_1_COMPGEN(0x00916078, "t_script_numeric_expression_factory<15>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_numeric_expression_factory@$0P@@@;vft=4ea8b8;col=5160b0;td=5b463c;chd=5160a0;offset=0;cdOffset=0;validated-hierarchy; map:54835
DATA_CHT_1_COMPGEN(0x00916090, "t_script_numeric_expression_factory<15>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_numeric_expression_factory@$0P@@@;vft=4ea8b8;col=5160b0;td=5b463c;chd=5160a0;offset=0;cdOffset=0;validated-hierarchy; map:54836
DATA_CHT_1_COMPGEN(0x009160a0, "t_script_numeric_expression_factory<15>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_numeric_expression_factory@$0P@@@;vft=4ea8b8;col=5160b0;td=5b463c;chd=5160a0;offset=0;cdOffset=0;validated-hierarchy; map:54837
DATA_CHT_1_COMPGEN(0x009160b0, "const t_script_numeric_expression_factory<15>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_script_expression_times@@;bcd=5160c4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54838
DATA_CHT_1_COMPGEN(0x009160c4, "t_script_expression_times::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_numeric_expression_base@$0P@Vt_script_expression_times@@@@;bcd=5160dc;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54839
DATA_CHT_1_COMPGEN(0x009160dc, "t_script_numeric_expression_base<15, t_script_expression_times>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_numeric_expression@$0P@@@;bcd=5160f4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54840
DATA_CHT_1_COMPGEN(0x009160f4, "t_script_numeric_expression<15>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_numeric_expression@$0P@@@;vft=4ea8c0;col=516140;td=5b46f4;chd=516130;offset=0;cdOffset=0;validated-hierarchy; map:54841
DATA_CHT_1_COMPGEN(0x0091610c, "t_script_numeric_expression<15>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_numeric_expression@$0P@@@;vft=4ea8c0;col=516140;td=5b46f4;chd=516130;offset=0;cdOffset=0;validated-hierarchy; map:54842
DATA_CHT_1_COMPGEN(0x00916130, "t_script_numeric_expression<15>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_numeric_expression@$0P@@@;vft=4ea8c0;col=516140;td=5b46f4;chd=516130;offset=0;cdOffset=0;validated-hierarchy; map:54843
DATA_CHT_1_COMPGEN(0x00916140, "const t_script_numeric_expression<15>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54844
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_numeric_expression_base<15, t_script_expression_times>::`RTTI Base Class Array'")

// name:A; map symbol; map:54845
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_numeric_expression_base<15, t_script_expression_times>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54846
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_numeric_expression_base<15, t_script_expression_times>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54847
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_expression_times::`RTTI Base Class Array'")

// name:A; map symbol; map:54848
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_expression_times::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54849
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_expression_times::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_numeric_expression_factory@$02@@;bcd=516154;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54850
DATA_CHT_1_COMPGEN(0x00916154, "t_script_numeric_expression_factory<3>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_numeric_expression_factory@$02@@;vft=4ea8f4;col=51618c;td=5b4728;chd=51617c;offset=0;cdOffset=0;validated-hierarchy; map:54851
DATA_CHT_1_COMPGEN(0x0091616c, "t_script_numeric_expression_factory<3>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_numeric_expression_factory@$02@@;vft=4ea8f4;col=51618c;td=5b4728;chd=51617c;offset=0;cdOffset=0;validated-hierarchy; map:54852
DATA_CHT_1_COMPGEN(0x0091617c, "t_script_numeric_expression_factory<3>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_numeric_expression_factory@$02@@;vft=4ea8f4;col=51618c;td=5b4728;chd=51617c;offset=0;cdOffset=0;validated-hierarchy; map:54853
DATA_CHT_1_COMPGEN(0x0091618c, "const t_script_numeric_expression_factory<3>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_script_expression_divided_by@@;bcd=5161a0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54854
DATA_CHT_1_COMPGEN(0x009161a0, "t_script_expression_divided_by::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_numeric_expression_base@$02Vt_script_expression_divided_by@@@@;bcd=5161b8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54855
DATA_CHT_1_COMPGEN(0x009161b8, "t_script_numeric_expression_base<3, t_script_expression_divided_by>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_numeric_expression@$02@@;bcd=5161d0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54856
DATA_CHT_1_COMPGEN(0x009161d0, "t_script_numeric_expression<3>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_numeric_expression@$02@@;vft=4ea8fc;col=51621c;td=5b47e8;chd=51620c;offset=0;cdOffset=0;validated-hierarchy; map:54857
DATA_CHT_1_COMPGEN(0x009161e8, "t_script_numeric_expression<3>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_numeric_expression@$02@@;vft=4ea8fc;col=51621c;td=5b47e8;chd=51620c;offset=0;cdOffset=0;validated-hierarchy; map:54858
DATA_CHT_1_COMPGEN(0x0091620c, "t_script_numeric_expression<3>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_numeric_expression@$02@@;vft=4ea8fc;col=51621c;td=5b47e8;chd=51620c;offset=0;cdOffset=0;validated-hierarchy; map:54859
DATA_CHT_1_COMPGEN(0x0091621c, "const t_script_numeric_expression<3>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54860
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_numeric_expression_base<3, t_script_expression_divided_by>::`RTTI Base Class Array'")

// name:A; map symbol; map:54861
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_numeric_expression_base<3, t_script_expression_divided_by>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54862
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_numeric_expression_base<3, t_script_expression_divided_by>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54863
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_expression_divided_by::`RTTI Base Class Array'")

// name:A; map symbol; map:54864
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_expression_divided_by::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54865
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_expression_divided_by::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_numeric_expression_factory@$0O@@@;bcd=516230;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54866
DATA_CHT_1_COMPGEN(0x00916230, "t_script_numeric_expression_factory<14>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_numeric_expression_factory@$0O@@@;vft=4ea930;col=516268;td=5b4818;chd=516258;offset=0;cdOffset=0;validated-hierarchy; map:54867
DATA_CHT_1_COMPGEN(0x00916248, "t_script_numeric_expression_factory<14>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_numeric_expression_factory@$0O@@@;vft=4ea930;col=516268;td=5b4818;chd=516258;offset=0;cdOffset=0;validated-hierarchy; map:54868
DATA_CHT_1_COMPGEN(0x00916258, "t_script_numeric_expression_factory<14>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_numeric_expression_factory@$0O@@@;vft=4ea930;col=516268;td=5b4818;chd=516258;offset=0;cdOffset=0;validated-hierarchy; map:54869
DATA_CHT_1_COMPGEN(0x00916268, "const t_script_numeric_expression_factory<14>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_script_expression_remainder@@;bcd=51627c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54870
DATA_CHT_1_COMPGEN(0x0091627c, "t_script_expression_remainder::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_numeric_expression_base@$0O@Vt_script_expression_remainder@@@@;bcd=516294;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54871
DATA_CHT_1_COMPGEN(0x00916294, "t_script_numeric_expression_base<14, t_script_expression_remainder>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_numeric_expression@$0O@@@;bcd=5162ac;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54872
DATA_CHT_1_COMPGEN(0x009162ac, "t_script_numeric_expression<14>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_numeric_expression@$0O@@@;vft=4ea938;col=5162f8;td=5b48d8;chd=5162e8;offset=0;cdOffset=0;validated-hierarchy; map:54873
DATA_CHT_1_COMPGEN(0x009162c4, "t_script_numeric_expression<14>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_numeric_expression@$0O@@@;vft=4ea938;col=5162f8;td=5b48d8;chd=5162e8;offset=0;cdOffset=0;validated-hierarchy; map:54874
DATA_CHT_1_COMPGEN(0x009162e8, "t_script_numeric_expression<14>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_numeric_expression@$0O@@@;vft=4ea938;col=5162f8;td=5b48d8;chd=5162e8;offset=0;cdOffset=0;validated-hierarchy; map:54875
DATA_CHT_1_COMPGEN(0x009162f8, "const t_script_numeric_expression<14>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54876
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_numeric_expression_base<14, t_script_expression_remainder>::`RTTI Base Class Array'")

// name:A; map symbol; map:54877
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_numeric_expression_base<14, t_script_expression_remainder>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54878
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_numeric_expression_base<14, t_script_expression_remainder>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54879
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_expression_remainder::`RTTI Base Class Array'")

// name:A; map symbol; map:54880
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_expression_remainder::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54881
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_expression_remainder::`RTTI Complete Object Locator'")

// === .data (32 symbols) ===

// name:A; map symbol; map:59157
DATA_CHT_1_COMPGEN(UNACCOUNTED, "m_subexpression_ptr.get() != 0")

// name:A; map symbol; map:59158
DATA_CHT_1_COMPGEN(UNACCOUNTED, "C:\\\\work\\\\game\\\\script_compound_exp...")

// name:A; map symbol; map:59159
DATA_CHT_1_COMPGEN(UNACCOUNTED, "m_left_subexpression_ptr.get() !...")

// name:A; map symbol; map:59160
DATA_CHT_1_COMPGEN(UNACCOUNTED, "m_right_subexpression_ptr.get() ...")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_numeric_expression_factory@$09@@;td=5b4264;validated-header; map:59161
DATA_CHT_1_COMPGEN(0x009b4264, "t_script_numeric_expression_factory<10> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_unary_expression@Vt_abstract_script_numeric_expression@@V1@@@;td=5b42a0;validated-header; map:59162
DATA_CHT_1_COMPGEN(0x009b42a0, "t_script_unary_expression<t_abstract_script_numeric_expression, t_abstract_script_numeric_expression> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_script_unary_arithmetic_expression@@;td=5b42f8;validated-header; map:59163
DATA_CHT_1_COMPGEN(0x009b42f8, "t_script_unary_arithmetic_expression `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_script_expression_negate@@;td=5b432c;validated-header; map:59164
DATA_CHT_1_COMPGEN(0x009b432c, "t_script_expression_negate `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_numeric_expression_base@$09Vt_script_expression_negate@@@@;td=5b4358;validated-header; map:59165
DATA_CHT_1_COMPGEN(0x009b4358, "t_script_numeric_expression_base<10, t_script_expression_negate> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_numeric_expression@$09@@;td=5b43ac;validated-header; map:59166
DATA_CHT_1_COMPGEN(0x009b43ac, "t_script_numeric_expression<10> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_numeric_expression_factory@$0M@@@;td=5b43dc;validated-header; map:59167
DATA_CHT_1_COMPGEN(0x009b43dc, "t_script_numeric_expression_factory<12> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_binary_expression@Vt_abstract_script_numeric_expression@@V1@@@;td=5b4418;validated-header; map:59168
DATA_CHT_1_COMPGEN(0x009b4418, "t_script_binary_expression<t_abstract_script_numeric_expression, t_abstract_script_numeric_expression> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_script_binary_arithmetic_expression@@;td=5b4470;validated-header; map:59169
DATA_CHT_1_COMPGEN(0x009b4470, "t_script_binary_arithmetic_expression `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_script_expression_plus@@;td=5b44a4;validated-header; map:59170
DATA_CHT_1_COMPGEN(0x009b44a4, "t_script_expression_plus `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_numeric_expression_base@$0M@Vt_script_expression_plus@@@@;td=5b44d0;validated-header; map:59171
DATA_CHT_1_COMPGEN(0x009b44d0, "t_script_numeric_expression_base<12, t_script_expression_plus> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_numeric_expression@$0M@@@;td=5b4524;validated-header; map:59172
DATA_CHT_1_COMPGEN(0x009b4524, "t_script_numeric_expression<12> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_numeric_expression_factory@$07@@;td=5b4558;validated-header; map:59173
DATA_CHT_1_COMPGEN(0x009b4558, "t_script_numeric_expression_factory<8> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_script_expression_minus@@;td=5b4590;validated-header; map:59174
DATA_CHT_1_COMPGEN(0x009b4590, "t_script_expression_minus `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_numeric_expression_base@$07Vt_script_expression_minus@@@@;td=5b45b8;validated-header; map:59175
DATA_CHT_1_COMPGEN(0x009b45b8, "t_script_numeric_expression_base<8, t_script_expression_minus> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_numeric_expression@$07@@;td=5b460c;validated-header; map:59176
DATA_CHT_1_COMPGEN(0x009b460c, "t_script_numeric_expression<8> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_numeric_expression_factory@$0P@@@;td=5b463c;validated-header; map:59177
DATA_CHT_1_COMPGEN(0x009b463c, "t_script_numeric_expression_factory<15> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_script_expression_times@@;td=5b4678;validated-header; map:59178
DATA_CHT_1_COMPGEN(0x009b4678, "t_script_expression_times `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_numeric_expression_base@$0P@Vt_script_expression_times@@@@;td=5b46a0;validated-header; map:59179
DATA_CHT_1_COMPGEN(0x009b46a0, "t_script_numeric_expression_base<15, t_script_expression_times> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_numeric_expression@$0P@@@;td=5b46f4;validated-header; map:59180
DATA_CHT_1_COMPGEN(0x009b46f4, "t_script_numeric_expression<15> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_numeric_expression_factory@$02@@;td=5b4728;validated-header; map:59181
DATA_CHT_1_COMPGEN(0x009b4728, "t_script_numeric_expression_factory<3> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_script_expression_divided_by@@;td=5b4760;validated-header; map:59182
DATA_CHT_1_COMPGEN(0x009b4760, "t_script_expression_divided_by `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_numeric_expression_base@$02Vt_script_expression_divided_by@@@@;td=5b4790;validated-header; map:59183
DATA_CHT_1_COMPGEN(0x009b4790, "t_script_numeric_expression_base<3, t_script_expression_divided_by> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_numeric_expression@$02@@;td=5b47e8;validated-header; map:59184
DATA_CHT_1_COMPGEN(0x009b47e8, "t_script_numeric_expression<3> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_numeric_expression_factory@$0O@@@;td=5b4818;validated-header; map:59185
DATA_CHT_1_COMPGEN(0x009b4818, "t_script_numeric_expression_factory<14> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_script_expression_remainder@@;td=5b4854;validated-header; map:59186
DATA_CHT_1_COMPGEN(0x009b4854, "t_script_expression_remainder `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_numeric_expression_base@$0O@Vt_script_expression_remainder@@@@;td=5b4880;validated-header; map:59187
DATA_CHT_1_COMPGEN(0x009b4880, "t_script_numeric_expression_base<14, t_script_expression_remainder> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_numeric_expression@$0O@@@;td=5b48d8;validated-header; map:59188
DATA_CHT_1_COMPGEN(0x009b48d8, "t_script_numeric_expression<14> `RTTI Type Descriptor'")
