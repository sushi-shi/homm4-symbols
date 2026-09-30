// configuration.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\configuration.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 6/23 (A:0 B:0 C:0); unaccounted 17; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (23 symbols) ===

namespace {

// name:A; map symbol; map:22730
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_registry_key::t_registry_key(bool arg_0, char const* arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:22731
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_registry_key::t_registry_key(HKEY__* arg_0, char const* arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:22732
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_registry_key::t_registry_key(t_registry_key const& arg_0, char const* arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:22733
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_registry_key::~t_registry_key()
{
    // Body unavailable.
}

// name:A; map symbol; map:22734
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_registry_key::get_int(char const* arg_0, int& arg_1) const
{
    // Body unavailable.
}

// name:A; map symbol; map:22735
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_registry_key::get_string(char const* arg_0, std::string& arg_1) const
{
    // Body unavailable.
}

// name:A; map symbol; map:22736
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_registry_key::set_value(char const* arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:22737
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_registry_key::set_value(char const* arg_0, char const* arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:22738
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_registry_key::open(HKEY__* arg_0, char const* arg_1)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67070; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006041f0, 0x29, STATIC_INIT_DISPATCH, "configuration#1")

// name:C; dyninit; see ledger; map:67071
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "configuration#1")

// name:C; dyninit; see ledger; map:67072
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "configuration#1")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67073; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00604220, 0x44, STATIC_DTOR, "configuration#1")

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:22739
VA_CHT_1(0x00604270, 0x16b)
void set_default_configuration_key_name(std::string const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:22740
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool get_config_value(char const* arg_0, char const* arg_1, int& arg_2, bool arg_3)
{
    // Body unavailable.
}

// name:A; map symbol; map:22741
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool get_config_value(char const* arg_0, int& arg_1, bool arg_2)
{
    // Body unavailable.
}

// name:A; map symbol; map:22742
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool get_config_value(char const* arg_0, char const* arg_1, std::string& arg_2, bool arg_3)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:22743
VA_CHT_1(0x006043e0, 0xab)
bool get_config_value(char const* arg_0, std::string& arg_1, bool arg_2)
{
    // Body unavailable.
}

// name:A; map symbol; map:22744
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void set_config_value(char const* arg_0, char const* arg_1, int arg_2, bool arg_3)
{
    // Body unavailable.
}

// name:A; map symbol; map:22745
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void set_config_value(char const* arg_0, int arg_1, bool arg_2)
{
    // Body unavailable.
}

// name:A; map symbol; map:22746
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void set_config_value(char const* arg_0, char const* arg_1, std::string const& arg_2, bool arg_3)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:22747
VA_CHT_1(0x00604490, 0x91)
void set_config_value(char const* arg_0, std::string const& arg_1, bool arg_2)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:67074; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00604530, 0x20, STATIC_INIT_DISPATCH, configuration)
