// adv_object_model.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\adv_object_model.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 52/134 (A:19 B:0 C:0); unaccounted 82; skipped std 36.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (89 symbols) ===

// name:C; dyninit; see ledger; map:70967
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_INIT_DISPATCH, "adv_object_model#1")

// name:C; dyninit; see ledger; map:70968
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adv_object_model#1")

// name:C; dyninit; see ledger; map:70969
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "adv_object_model#1")

// name:C; dyninit; see ledger; map:70970
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "adv_object_model#1")

// name:C; dyninit; see ledger; map:70971
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_INIT_DISPATCH, "adv_object_model#2")

// name:C; dyninit; see ledger; map:70972
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adv_object_model#2")

// name:C; dyninit; see ledger; map:70973
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "adv_object_model#2")

// name:C; dyninit; see ledger; map:70974
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "adv_object_model#2")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:70975; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00446170, 0x15, STATIC_INIT_DISPATCH, "adv_object_model#3")

// name:C; dyninit; see ledger; map:70976
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adv_object_model#3")

namespace {

// name:A; map symbol; map:5060
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adv_object_image_writer::operator()(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_adv_object_image_24 const& arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:5061
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adv_object_image_writer::visit(t_underlay_adv_object_image_24 const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:5062
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adv_object_image_writer::visit(t_overlay_adv_object_image_24 const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:5063
VA_CHT_1(0x00446190, 0x1ee)
std::auto_ptr<t_adv_object_image_24> reconstruct_adv_object_image(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:5064
VA_CHT_1(0x00446380, 0x32)
bool t_adv_object_model_base_base::are_any_cells_flat() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:5065
VA_CHT_1(0x004463c0, 0x1e)
bool t_adv_object_model_base_base::are_any_cells_impassable() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:5066
VA_CHT_1(0x004463e0, 0x12)
t_map_point_2d t_adv_object_model_base_base::get_size() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:5067
VA_CHT_1(0x00446400, 0x32)
bool t_adv_object_model_base_base::is_cell_flat(t_map_point_2d const& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:5068
VA_CHT_1(0x00446440, 0x1a)
bool t_adv_object_model_base_base::is_cell_impassable(t_map_point_2d const& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:5069
VA_CHT_1(0x00446460, 0x1a)
bool t_adv_object_model_base_base::is_left_edge_trigger(t_map_point_2d const& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:5070
VA_CHT_1(0x00446480, 0x1a)
bool t_adv_object_model_base_base::is_right_edge_trigger(t_map_point_2d const& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:5071
VA_CHT_1(0x004464a0, 0xc4)
bool t_adv_object_model_base_base::is_trigger_cell(t_map_point_2d const& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:5072
VA_CHT_1(0x00446570, 0x733)
bool t_adv_object_model_base_base::read(std::basic_streambuf<char, std::char_traits<char>>& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:70977
VA_CHT_1(0x00446cb0, 0x80)
static bool read_bool_array(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    std::vector<bool, std::allocator<bool>>& arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:5073
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adv_object_model_base_base::resize(t_map_point_2d const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:5074
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adv_object_model_base_base::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:5075
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adv_object_model_base_base::write_footprint(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0
) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:70978
VA_CHT_1(0x00446d30, 0x107)
static bool write_bool_array(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    std::vector<bool, std::allocator<bool>> const& arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:5076
VA_CHT_1(0x00446e40, 0x27)
bool t_adv_object_model_base_base::is_left_edge_blocked(t_map_point_2d const& arg_0, bool arg_1) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:5077
VA_CHT_1(0x00446e70, 0x27)
bool t_adv_object_model_base_base::is_right_edge_blocked(t_map_point_2d const& arg_0, bool arg_1) const
{
    // Body unavailable.
}

// name:A; map symbol; map:5078
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adv_object_model_base_base::set_left_edge_blocked(t_map_point_2d const& arg_0, bool arg_1, bool arg_2)
{
    // Body unavailable.
}

// name:A; map symbol; map:5079
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adv_object_model_base_base::set_right_edge_blocked(t_map_point_2d const& arg_0, bool arg_1, bool arg_2)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:5080
VA_CHT_1(0x00446ea0, 0x22)
int t_adv_object_model_base_base::get_vertex_height(t_map_point_2d const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:5081
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adv_object_model_base_base::set_vertex_height(t_map_point_2d const& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:5082
VA_CHT_1(0x00446ed0, 0x158)
bool t_adv_object_model_24::read(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:5083
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adv_object_model_24::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:5084
VA_CHT_1(0x00447030, 0x192)
t_adv_object_model::t_adv_object_model(t_adv_object_model_24 const& arg_0)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:70979; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00447660, 0x20, STATIC_INIT_DISPATCH, adv_object_model)

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:5085
VA_CHT_1(0x004488f0, 0x51)
bool t_adv_object_model_base_base::are_any_cells_impassable_impl() const
{
    // Body unavailable.
}

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:5086
VA_CHT_1(0x00448830, 0x52)
bool t_adv_object_model_base_base::is_cell_impassable_impl(t_map_point_2d const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:5087
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adv_object_model_base_base::is_left_edge_trigger_impl(t_map_point_2d const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:5088
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adv_object_model_base_base::is_right_edge_trigger_impl(t_map_point_2d const& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:5089
VA_CHT_1(0x00448070, 0x83)
int t_adv_object_model_base_base::get_blocked_left_edge_index(t_map_point_2d const& arg_0, bool arg_1) const
{
    // Body unavailable.
}

// name:A; map symbol; map:5090
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_adv_object_model_base_base::get_blocked_right_edge_index(t_map_point_2d const& arg_0, bool arg_1) const
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:5091
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_object_image_writer::t_adv_object_image_writer()
{
    // Body unavailable.
}

// name:A; map symbol; map:5092
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_object_image_writer::~t_adv_object_image_writer()
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:5093
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_adv_object_image_writer)

// name:A; map symbol; map:5094
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_adv_object_image_writer)

// name:A; map symbol; map:5095
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_object_image_visitor_24::t_adv_object_image_visitor_24()
{
    // Body unavailable.
}

// name:A; map symbol; map:5096
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_object_image_visitor_24::~t_adv_object_image_visitor_24()
{
    // Body unavailable.
}

// name:A; map symbol; map:5097
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_adv_object_image_visitor_24)

// name:A; map symbol; map:5098
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_adv_object_image_visitor_24)

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:5099
VA_CHT_1(0x00447560, 0x13)
t_adv_object_image_visitor_base<t_overlay_adv_object_image_24, t_underlay_adv_object_image_24>::t_adv_object_image_visitor_base<t_overlay_adv_object_image_24, t_underlay_adv_object_image_24>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:5100
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_adv_object_image_visitor_base<t_overlay_adv_object_image_24, t_underlay_adv_object_image_24>")

// name:A; map symbol; map:5101
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_adv_object_image_visitor_base<t_overlay_adv_object_image_24, t_underlay_adv_object_image_24>")

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:5102
VA_CHT_1_COMPGEN(0x00447280, 0x1e, SCALAR_DELETING_DTOR, t_adv_object_model)

// name:A; map symbol; map:5103
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_adv_object_model)

// name:A; map symbol; map:5104
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_object_model_base<t_adv_object_image>::~t_adv_object_model_base<t_adv_object_image>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:5105
VA_CHT_1(0x004472a0, 0x114)
t_adv_object_model_base_base::~t_adv_object_model_base_base()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:5106
VA_CHT_1_COMPGEN(0x004471d0, 0x1e, SCALAR_DELETING_DTOR, t_adv_object_model_base_base)

// name:A; map symbol; map:5107
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_adv_object_model_base_base)

// name:A; map symbol; map:5108
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_object_model::~t_adv_object_model()
{
    // Body unavailable.
}

// name:A; map symbol; map:5136
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_shared_ptr<t_adv_object_image_24>::t_shared_ptr<t_adv_object_image_24>(
    std::auto_ptr<t_adv_object_image_24> arg_0
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:5137
VA_CHT_1(0x00447bb0, 0x44)
t_adv_object_image_24 const& t_adv_object_model_base<t_adv_object_image_24>::get_image() const
{
    // Body unavailable.
}

// name:A; map symbol; map:5138
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adv_object_model_base<t_adv_object_image_24>::set_image(t_shared_ptr<t_adv_object_image_24> arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:5139
VA_CHT_1(0x00447cd0, 0x7e)
t_shared_ptr<t_adv_object_image_24>::~t_shared_ptr<t_adv_object_image_24>()
{
    // Body unavailable.
}

// name:A; map symbol; map:5140
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_shared_ptr<t_adv_object_image>::t_shared_ptr<t_adv_object_image>(
    t_shared_ptr<t_adv_object_image> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:5141
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_shared_ptr<t_adv_object_image>::t_shared_ptr<t_adv_object_image>(std::auto_ptr<t_adv_object_image> arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:5143
VA_CHT_1(0x00447690, 0xf3)
t_shared_ptr<t_adv_object_image>::~t_shared_ptr<t_adv_object_image>()
{
    // Body unavailable.
}

// name:A; map symbol; map:5144
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_object_model_base<t_adv_object_image>::t_adv_object_model_base<t_adv_object_image>(
    t_shared_ptr<t_adv_object_image> arg_0,
    t_adv_object_model_base_base const& arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:5145
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_object_image_visitor_base<t_overlay_adv_object_image_24, t_underlay_adv_object_image_24>::~t_adv_object_image_visitor_base<t_overlay_adv_object_image_24, t_underlay_adv_object_image_24>(

)
{
    // Body unavailable.
}

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:5146
VA_CHT_1(0x00447540, 0x16)
void t_adv_object_image_visitor_base<t_overlay_adv_object_image_24, t_underlay_adv_object_image_24>::visit(
    t_underlay_adv_object_image_24 const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:5147
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adv_object_image_visitor_base<t_overlay_adv_object_image_24, t_underlay_adv_object_image_24>::visit(
    t_underlay_adv_object_image_24& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:5148
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adv_object_image_visitor_base<t_overlay_adv_object_image_24, t_underlay_adv_object_image_24>::visit(
    t_overlay_adv_object_image_24 const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:5149
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adv_object_image_visitor_base<t_overlay_adv_object_image_24, t_underlay_adv_object_image_24>::visit(
    t_overlay_adv_object_image_24& arg_0
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:5154
VA_CHT_1_COMPGEN(0x004475e0, 0x1e, SCALAR_DELETING_DTOR, "t_adv_object_model_base<t_adv_object_image>")

// name:A; map symbol; map:5155
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_adv_object_model_base<t_adv_object_image>")

// confidence:D; align-band; vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:5156
VA_CHT_1(0x004471f0, 0x90)
t_adv_object_model_base_base::t_adv_object_model_base_base(t_adv_object_model_base_base const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:5157
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_footprint::t_footprint(t_footprint const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:5161
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_object_image_24* t_shared_ptr<t_adv_object_image_24>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:5162
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_shared_ptr<t_adv_object_image_24>& t_shared_ptr<t_adv_object_image_24>::operator=(
    t_shared_ptr<t_adv_object_image_24> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:5163
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_object_image_24& t_shared_ptr<t_adv_object_image_24>::operator*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:5164
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_shared_ptr<t_adv_object_image_24>::set(t_adv_object_image_24* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:5165
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_shared_ptr<t_adv_object_image_24>::construct(t_adv_object_image_24* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:5166
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_shared_ptr<t_adv_object_image>::set(t_adv_object_image* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:5167
VA_CHT_1(0x00448570, 0x43)
void t_shared_ptr<t_adv_object_image>::add_link(t_shared_ptr_base const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:5168
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_shared_ptr<t_adv_object_image>::construct(t_adv_object_image* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:5169
VA_CHT_1(0x00447d80, 0xa8)
void t_shared_ptr<t_adv_object_image_24>::assign(t_adv_object_image_24* arg_0, t_shared_ptr_base const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:5170
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_shared_ptr<t_adv_object_image_24>::add_link(t_shared_ptr_base const& arg_0) const
{
    // Body unavailable.
}

// === .rdata (8 symbols) ===

// name:A; map symbol; map:42937
DATA_CHT_1(UNACCOUNTED)
char const* const t_resource_traits<t_adv_object_model_24>::prefix; // Initial value unavailable.

// name:A; map symbol; map:42938
DATA_CHT_1(UNACCOUNTED)
char const* const t_resource_traits<t_adv_object_model_24>::extension; // Initial value unavailable.

// name:A; map symbol; map:42939
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_object_image_writer::`vftable'")

// name:A; map symbol; map:42940
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_object_image_visitor_24::`vftable'")

// name:A; map symbol; map:42941
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_object_image_visitor_base<t_overlay_adv_object_image_24, t_underlay_adv_object_image_24>::`vftable'")

// confidence:A; rtti-name; map:42942
DATA_CHT_1_COMPGEN(0x008d0f6c, "const t_adv_object_model::`vftable'")

// confidence:A; rtti-name; map:42943
DATA_CHT_1_COMPGEN(0x008d0fd4, "const t_adv_object_model_base_base::`vftable'")

// confidence:A; rtti-name; map:42944
DATA_CHT_1_COMPGEN(0x008d0fa0, "const t_adv_object_model_base<t_adv_object_image>::`vftable'")

// === .rdata$r (26 symbols) ===

// name:A; map symbol; map:48182
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_adv_object_image_visitor_base<t_overlay_adv_object_image_24, t_underlay_adv_object_image_24>::`RTTI Base Class Descriptor at (0, -1, 0, 9)'")

// name:A; map symbol; map:48183
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_adv_object_image_visitor_24::`RTTI Base Class Descriptor at (0, -1, 0, 9)'")

// name:A; map symbol; map:48184
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_adv_object_image_writer::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// name:A; map symbol; map:48185
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_adv_object_image_writer::`RTTI Base Class Array'")

// name:A; map symbol; map:48186
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_adv_object_image_writer::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:48187
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_object_image_writer::`RTTI Complete Object Locator'")

// name:A; map symbol; map:48188
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_adv_object_image_visitor_base<t_overlay_adv_object_image_24, t_underlay_adv_object_image_24>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// name:A; map symbol; map:48189
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_adv_object_image_visitor_24::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// name:A; map symbol; map:48190
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_adv_object_image_visitor_24::`RTTI Base Class Array'")

// name:A; map symbol; map:48191
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_adv_object_image_visitor_24::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:48192
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_object_image_visitor_24::`RTTI Complete Object Locator'")

// name:A; map symbol; map:48193
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_adv_object_image_visitor_base<t_overlay_adv_object_image_24, t_underlay_adv_object_image_24>::`RTTI Base Class Array'")

// name:A; map symbol; map:48194
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_adv_object_image_visitor_base<t_overlay_adv_object_image_24, t_underlay_adv_object_image_24>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:48195
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_object_image_visitor_base<t_overlay_adv_object_image_24, t_underlay_adv_object_image_24>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adv_object_model_base_base@@;bcd=4f8168;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48196
DATA_CHT_1_COMPGEN(0x008f8168, "t_adv_object_model_base_base::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_adv_object_model_base@Vt_adv_object_image@@@@;bcd=4f8180;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48197
DATA_CHT_1_COMPGEN(0x008f8180, "t_adv_object_model_base<t_adv_object_image>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adv_object_model@@;bcd=4f8198;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48198
DATA_CHT_1_COMPGEN(0x008f8198, "t_adv_object_model::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adv_object_model@@;vft=4d0f6c;col=4f81d4;td=588fc8;chd=4f81c4;offset=0;cdOffset=0;validated-hierarchy; map:48199
DATA_CHT_1_COMPGEN(0x008f81b0, "t_adv_object_model::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adv_object_model@@;vft=4d0f6c;col=4f81d4;td=588fc8;chd=4f81c4;offset=0;cdOffset=0;validated-hierarchy; map:48200
DATA_CHT_1_COMPGEN(0x008f81c4, "t_adv_object_model::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_adv_object_model@@;vft=4d0f6c;col=4f81d4;td=588fc8;chd=4f81c4;offset=0;cdOffset=0;validated-hierarchy; map:48201
DATA_CHT_1_COMPGEN(0x008f81d4, "const t_adv_object_model::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adv_object_model_base_base@@;vft=4d0fd4;col=4f8120;td=588f5c;chd=4f8110;offset=0;cdOffset=0;validated-hierarchy; map:48202
DATA_CHT_1_COMPGEN(0x008f8104, "t_adv_object_model_base_base::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adv_object_model_base_base@@;vft=4d0fd4;col=4f8120;td=588f5c;chd=4f8110;offset=0;cdOffset=0;validated-hierarchy; map:48203
DATA_CHT_1_COMPGEN(0x008f8110, "t_adv_object_model_base_base::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_adv_object_model_base_base@@;vft=4d0fd4;col=4f8120;td=588f5c;chd=4f8110;offset=0;cdOffset=0;validated-hierarchy; map:48204
DATA_CHT_1_COMPGEN(0x008f8120, "const t_adv_object_model_base_base::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_adv_object_model_base@Vt_adv_object_image@@@@;vft=4d0fa0;col=4f8154;td=588f88;chd=4f8144;offset=0;cdOffset=0;validated-hierarchy; map:48205
DATA_CHT_1_COMPGEN(0x008f8134, "t_adv_object_model_base<t_adv_object_image>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_adv_object_model_base@Vt_adv_object_image@@@@;vft=4d0fa0;col=4f8154;td=588f88;chd=4f8144;offset=0;cdOffset=0;validated-hierarchy; map:48206
DATA_CHT_1_COMPGEN(0x008f8144, "t_adv_object_model_base<t_adv_object_image>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_adv_object_model_base@Vt_adv_object_image@@@@;vft=4d0fa0;col=4f8154;td=588f88;chd=4f8144;offset=0;cdOffset=0;validated-hierarchy; map:48207
DATA_CHT_1_COMPGEN(0x008f8154, "const t_adv_object_model_base<t_adv_object_image>::`RTTI Complete Object Locator'")

// === .data (11 symbols) ===

// name:A; map symbol; map:57516
DATA_CHT_1_COMPGEN(UNACCOUNTED, "point.column >= 0&& point.colum...")

// name:A; map symbol; map:57517
DATA_CHT_1_COMPGEN(UNACCOUNTED, "point.row >= 0&& point.row < m_...")

// name:A; map symbol; map:57518
DATA_CHT_1_COMPGEN(UNACCOUNTED, "point.column >= 0&& point.colum...")

// name:A; map symbol; map:57519
DATA_CHT_1_COMPGEN(UNACCOUNTED, "point.row >= 0&& point.row <= m...")

// name:A; map symbol; map:57520
DATA_CHT_1_COMPGEN(UNACCOUNTED, "C:\\\\work\\\\game\\\\adv_object_model.cp...")

// name:A; map symbol; map:57521
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_adv_object_image_visitor_base<t_overlay_adv_object_image_24, t_underlay_adv_object_image_24> `RTTI Type Descriptor'")

// name:A; map symbol; map:57522
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_adv_object_image_visitor_24 `RTTI Type Descriptor'")

// name:A; map symbol; map:57523
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_adv_object_image_writer `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_adv_object_model_base_base@@;td=588f5c;validated-header; map:57524
DATA_CHT_1_COMPGEN(0x00988f5c, "t_adv_object_model_base_base `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_adv_object_model_base@Vt_adv_object_image@@@@;td=588f88;validated-header; map:57525
DATA_CHT_1_COMPGEN(0x00988f88, "t_adv_object_model_base<t_adv_object_image> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_adv_object_model@@;td=588fc8;validated-header; map:57526
DATA_CHT_1_COMPGEN(0x00988fc8, "t_adv_object_model `RTTI Type Descriptor'")
