#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 93
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 80
#define ALIAS_COUNT 0
#define TOKEN_COUNT 47
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 9

enum ts_symbol_identifiers {
  aux_sym_document_token1 = 1,
  sym_comment = 2,
  anon_sym_EQ = 3,
  aux_sym__kebab_case_identifier_token1 = 4,
  anon_sym_DASH = 5,
  aux_sym__snake_case_identifier_token1 = 6,
  anon_sym__ = 7,
  aux_sym_value_token1 = 8,
  anon_sym_true = 9,
  anon_sym_false = 10,
  sym_number = 11,
  anon_sym_DQUOTE = 12,
  aux_sym_string_token1 = 13,
  anon_sym_SQUOTE = 14,
  aux_sym_string_token2 = 15,
  aux_sym_string_token3 = 16,
  anon_sym_POUND = 17,
  aux_sym_color_token1 = 18,
  sym_percent_adjustment = 19,
  sym_numeric_adjustment = 20,
  aux_sym__raw_value_token1 = 21,
  anon_sym_palette = 22,
  aux_sym_palette_value_token1 = 23,
  anon_sym_EQ2 = 24,
  anon_sym_config_DASHfile = 25,
  anon_sym_keybind = 26,
  anon_sym_clear = 27,
  anon_sym_all = 28,
  anon_sym_global = 29,
  anon_sym_local = 30,
  anon_sym_unconsumed = 31,
  anon_sym_COLON = 32,
  anon_sym_physical = 33,
  anon_sym_GT = 34,
  anon_sym_PLUS = 35,
  anon_sym_shift = 36,
  anon_sym_ctrl = 37,
  anon_sym_control = 38,
  anon_sym_alt = 39,
  anon_sym_option = 40,
  anon_sym_opt = 41,
  anon_sym_super = 42,
  anon_sym_cmd = 43,
  anon_sym_command = 44,
  aux_sym_key_token1 = 45,
  aux_sym__action_arg_value_token1 = 46,
  sym_document = 47,
  sym_directive = 48,
  sym_basic_directive = 49,
  sym__kebab_case_identifier = 50,
  sym__snake_case_identifier = 51,
  sym_property = 52,
  sym_value = 53,
  sym_boolean = 54,
  sym_adjustment = 55,
  sym_string = 56,
  sym__loose_string = 57,
  sym_color = 58,
  sym__raw_value = 59,
  sym_palette_directive = 60,
  sym_palette_value = 61,
  sym_config_file_directive = 62,
  sym_path_value = 63,
  sym_keybind_directive = 64,
  sym_keybind_value = 65,
  sym_keybind_modifier = 66,
  sym_key_qualifier = 67,
  sym_keybind_trigger = 68,
  sym_chord = 69,
  sym_modifier_key = 70,
  sym_key = 71,
  sym_keybind_action = 72,
  sym__action_arg_value = 73,
  aux_sym_document_repeat1 = 74,
  aux_sym__kebab_case_identifier_repeat1 = 75,
  aux_sym__snake_case_identifier_repeat1 = 76,
  aux_sym_keybind_value_repeat1 = 77,
  aux_sym_keybind_trigger_repeat1 = 78,
  aux_sym_chord_repeat1 = 79,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_document_token1] = "document_token1",
  [sym_comment] = "comment",
  [anon_sym_EQ] = "=",
  [aux_sym__kebab_case_identifier_token1] = "_kebab_case_identifier_token1",
  [anon_sym_DASH] = "-",
  [aux_sym__snake_case_identifier_token1] = "_snake_case_identifier_token1",
  [anon_sym__] = "_",
  [aux_sym_value_token1] = "value_token1",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_number] = "number",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token2] = "string_token2",
  [aux_sym_string_token3] = "string_token3",
  [anon_sym_POUND] = "#",
  [aux_sym_color_token1] = "color_token1",
  [sym_percent_adjustment] = "percent_adjustment",
  [sym_numeric_adjustment] = "numeric_adjustment",
  [aux_sym__raw_value_token1] = "_raw_value_token1",
  [anon_sym_palette] = "property",
  [aux_sym_palette_value_token1] = "palette_index",
  [anon_sym_EQ2] = "=",
  [anon_sym_config_DASHfile] = "property",
  [anon_sym_keybind] = "property",
  [anon_sym_clear] = "clear",
  [anon_sym_all] = "all",
  [anon_sym_global] = "global",
  [anon_sym_local] = "local",
  [anon_sym_unconsumed] = "unconsumed",
  [anon_sym_COLON] = ":",
  [anon_sym_physical] = "physical",
  [anon_sym_GT] = ">",
  [anon_sym_PLUS] = "+",
  [anon_sym_shift] = "shift",
  [anon_sym_ctrl] = "ctrl",
  [anon_sym_control] = "control",
  [anon_sym_alt] = "alt",
  [anon_sym_option] = "option",
  [anon_sym_opt] = "opt",
  [anon_sym_super] = "super",
  [anon_sym_cmd] = "cmd",
  [anon_sym_command] = "command",
  [aux_sym_key_token1] = "key_token1",
  [aux_sym__action_arg_value_token1] = "number",
  [sym_document] = "document",
  [sym_directive] = "directive",
  [sym_basic_directive] = "basic_directive",
  [sym__kebab_case_identifier] = "_kebab_case_identifier",
  [sym__snake_case_identifier] = "action_name",
  [sym_property] = "property",
  [sym_value] = "value",
  [sym_boolean] = "boolean",
  [sym_adjustment] = "adjustment",
  [sym_string] = "string",
  [sym__loose_string] = "string",
  [sym_color] = "color",
  [sym__raw_value] = "_raw_value",
  [sym_palette_directive] = "palette_directive",
  [sym_palette_value] = "palette_value",
  [sym_config_file_directive] = "config_file_directive",
  [sym_path_value] = "path_value",
  [sym_keybind_directive] = "keybind_directive",
  [sym_keybind_value] = "keybind_value",
  [sym_keybind_modifier] = "keybind_modifier",
  [sym_key_qualifier] = "key_qualifier",
  [sym_keybind_trigger] = "keybind_trigger",
  [sym_chord] = "chord",
  [sym_modifier_key] = "modifier_key",
  [sym_key] = "key",
  [sym_keybind_action] = "keybind_action",
  [sym__action_arg_value] = "action_argument",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym__kebab_case_identifier_repeat1] = "_kebab_case_identifier_repeat1",
  [aux_sym__snake_case_identifier_repeat1] = "_snake_case_identifier_repeat1",
  [aux_sym_keybind_value_repeat1] = "keybind_value_repeat1",
  [aux_sym_keybind_trigger_repeat1] = "keybind_trigger_repeat1",
  [aux_sym_chord_repeat1] = "chord_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_document_token1] = aux_sym_document_token1,
  [sym_comment] = sym_comment,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym__kebab_case_identifier_token1] = aux_sym__kebab_case_identifier_token1,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym__snake_case_identifier_token1] = aux_sym__snake_case_identifier_token1,
  [anon_sym__] = anon_sym__,
  [aux_sym_value_token1] = aux_sym_value_token1,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_number] = sym_number,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [aux_sym_string_token3] = aux_sym_string_token3,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_color_token1] = aux_sym_color_token1,
  [sym_percent_adjustment] = sym_percent_adjustment,
  [sym_numeric_adjustment] = sym_numeric_adjustment,
  [aux_sym__raw_value_token1] = aux_sym__raw_value_token1,
  [anon_sym_palette] = sym_property,
  [aux_sym_palette_value_token1] = aux_sym_palette_value_token1,
  [anon_sym_EQ2] = anon_sym_EQ,
  [anon_sym_config_DASHfile] = sym_property,
  [anon_sym_keybind] = sym_property,
  [anon_sym_clear] = anon_sym_clear,
  [anon_sym_all] = anon_sym_all,
  [anon_sym_global] = anon_sym_global,
  [anon_sym_local] = anon_sym_local,
  [anon_sym_unconsumed] = anon_sym_unconsumed,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_physical] = anon_sym_physical,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_shift] = anon_sym_shift,
  [anon_sym_ctrl] = anon_sym_ctrl,
  [anon_sym_control] = anon_sym_control,
  [anon_sym_alt] = anon_sym_alt,
  [anon_sym_option] = anon_sym_option,
  [anon_sym_opt] = anon_sym_opt,
  [anon_sym_super] = anon_sym_super,
  [anon_sym_cmd] = anon_sym_cmd,
  [anon_sym_command] = anon_sym_command,
  [aux_sym_key_token1] = aux_sym_key_token1,
  [aux_sym__action_arg_value_token1] = sym_number,
  [sym_document] = sym_document,
  [sym_directive] = sym_directive,
  [sym_basic_directive] = sym_basic_directive,
  [sym__kebab_case_identifier] = sym__kebab_case_identifier,
  [sym__snake_case_identifier] = sym__snake_case_identifier,
  [sym_property] = sym_property,
  [sym_value] = sym_value,
  [sym_boolean] = sym_boolean,
  [sym_adjustment] = sym_adjustment,
  [sym_string] = sym_string,
  [sym__loose_string] = sym_string,
  [sym_color] = sym_color,
  [sym__raw_value] = sym__raw_value,
  [sym_palette_directive] = sym_palette_directive,
  [sym_palette_value] = sym_palette_value,
  [sym_config_file_directive] = sym_config_file_directive,
  [sym_path_value] = sym_path_value,
  [sym_keybind_directive] = sym_keybind_directive,
  [sym_keybind_value] = sym_keybind_value,
  [sym_keybind_modifier] = sym_keybind_modifier,
  [sym_key_qualifier] = sym_key_qualifier,
  [sym_keybind_trigger] = sym_keybind_trigger,
  [sym_chord] = sym_chord,
  [sym_modifier_key] = sym_modifier_key,
  [sym_key] = sym_key,
  [sym_keybind_action] = sym_keybind_action,
  [sym__action_arg_value] = sym__action_arg_value,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym__kebab_case_identifier_repeat1] = aux_sym__kebab_case_identifier_repeat1,
  [aux_sym__snake_case_identifier_repeat1] = aux_sym__snake_case_identifier_repeat1,
  [aux_sym_keybind_value_repeat1] = aux_sym_keybind_value_repeat1,
  [aux_sym_keybind_trigger_repeat1] = aux_sym_keybind_trigger_repeat1,
  [aux_sym_chord_repeat1] = aux_sym_chord_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_document_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__kebab_case_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__snake_case_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_color_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_percent_adjustment] = {
    .visible = true,
    .named = true,
  },
  [sym_numeric_adjustment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__raw_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_palette] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_palette_value_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_config_DASHfile] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_keybind] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_clear] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_all] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_global] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_local] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unconsumed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_physical] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shift] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ctrl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_control] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_option] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_opt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_super] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_command] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_key_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__action_arg_value_token1] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_basic_directive] = {
    .visible = true,
    .named = true,
  },
  [sym__kebab_case_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym__snake_case_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_property] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_adjustment] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__loose_string] = {
    .visible = true,
    .named = true,
  },
  [sym_color] = {
    .visible = true,
    .named = true,
  },
  [sym__raw_value] = {
    .visible = false,
    .named = true,
  },
  [sym_palette_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_palette_value] = {
    .visible = true,
    .named = true,
  },
  [sym_config_file_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_path_value] = {
    .visible = true,
    .named = true,
  },
  [sym_keybind_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_keybind_value] = {
    .visible = true,
    .named = true,
  },
  [sym_keybind_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_key_qualifier] = {
    .visible = true,
    .named = true,
  },
  [sym_keybind_trigger] = {
    .visible = true,
    .named = true,
  },
  [sym_chord] = {
    .visible = true,
    .named = true,
  },
  [sym_modifier_key] = {
    .visible = true,
    .named = true,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym_keybind_action] = {
    .visible = true,
    .named = true,
  },
  [sym__action_arg_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__kebab_case_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__snake_case_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keybind_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keybind_trigger_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_chord_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_action = 1,
  field_action_name = 2,
  field_argument = 3,
  field_modifier = 4,
  field_property = 5,
  field_qualifier = 6,
  field_trigger = 7,
  field_value = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_action] = "action",
  [field_action_name] = "action_name",
  [field_argument] = "argument",
  [field_modifier] = "modifier",
  [field_property] = "property",
  [field_qualifier] = "qualifier",
  [field_trigger] = "trigger",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 2},
  [7] = {.index = 8, .length = 2},
  [8] = {.index = 10, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_property, 0},
  [1] =
    {field_property, 0},
    {field_value, 2},
  [3] =
    {field_modifier, 0},
  [4] =
    {field_qualifier, 0},
  [5] =
    {field_action_name, 0},
  [6] =
    {field_action, 2},
    {field_trigger, 0},
  [8] =
    {field_action, 3},
    {field_trigger, 1},
  [10] =
    {field_action_name, 0},
    {field_argument, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(117);
      ADVANCE_MAP(
        '"', 298,
        '#', 320,
        '\'', 302,
        '+', 373,
        '-', 216,
        ':', 367,
        '=', 343,
        '>', 372,
        '_', 280,
        'a', 165,
        'c', 166,
        'f', 132,
        'g', 174,
        'l', 185,
        'o', 191,
        'p', 159,
        's', 160,
        't', 193,
        'u', 181,
        'b', 210,
        'd', 210,
        'e', 210,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(116);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      if (('h' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      if (lookahead != 0) ADVANCE(306);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(118);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == 'c') ADVANCE(79);
      if (lookahead == 'k') ADVANCE(36);
      if (lookahead == 'p') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(123);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(123);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '\n', 119,
        '\r', 281,
        '"', 298,
        '#', 320,
        '\'', 302,
        'f', 307,
        't', 317,
        '+', 318,
        '-', 318,
        '\t', 281,
        0x0b, 281,
        '\f', 281,
        ' ', 281,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(319);
      if (lookahead != 0) ADVANCE(306);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '\n', 120,
        '\r', 6,
        '"', 298,
        '#', 410,
        '\'', 302,
        'a', 431,
        'c', 432,
        'g', 439,
        'l', 449,
        'o', 454,
        'p', 427,
        's', 428,
        'u', 447,
        ':', 306,
        '=', 306,
        '>', 306,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      if (lookahead != 0) ADVANCE(410);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '\n', 120,
        '\r', 6,
        '"', 298,
        '\'', 302,
        'a', 311,
        'c', 313,
        'g', 312,
        'l', 315,
        'o', 316,
        'p', 309,
        's', 310,
        'u', 314,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(6);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(306);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(121);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '"') ADVANCE(298);
      if (lookahead == '\'') ADVANCE(302);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(7);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(306);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(122);
      if (lookahead == '\r') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(342);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(298);
      if (lookahead == '#') ADVANCE(320);
      if (lookahead == '\'') ADVANCE(302);
      if (lookahead == 'f') ADVANCE(307);
      if (lookahead == 't') ADVANCE(317);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(318);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(319);
      if (lookahead != 0) ADVANCE(306);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(298);
      if (lookahead == '#') ADVANCE(320);
      if (lookahead == '\'') ADVANCE(302);
      if (lookahead == 'f') ADVANCE(308);
      if (lookahead == 't') ADVANCE(317);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(318);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      if (lookahead != 0) ADVANCE(306);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(299);
      if (lookahead == '\'') ADVANCE(303);
      if (lookahead == 'f') ADVANCE(327);
      if (lookahead == 't') ADVANCE(331);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(11);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(335);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(469);
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 12:
      if (lookahead == '+') ADVANCE(373);
      if (lookahead == '=') ADVANCE(343);
      if (lookahead == '>') ADVANCE(372);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 13:
      if (lookahead == '+') ADVANCE(373);
      if (lookahead == '>') ADVANCE(372);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == '=') ADVANCE(124);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(46);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        '=', 343,
        '>', 372,
        'a', 431,
        'c', 441,
        'g', 439,
        'l', 449,
        'o', 454,
        'p', 427,
        's', 428,
        'u', 447,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      if (lookahead != 0 &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(410);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(124);
      if (lookahead == 'a') ADVANCE(440);
      if (lookahead == 'c') ADVANCE(441);
      if (lookahead == 'o') ADVANCE(454);
      if (lookahead == 'p') ADVANCE(427);
      if (lookahead == 's') ADVANCE(428);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      if (lookahead != 0 &&
          (lookahead < '0' || ':' < lookahead) &&
          lookahead != '=' &&
          lookahead != '>') ADVANCE(410);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(124);
      if (lookahead == 'a') ADVANCE(68);
      if (lookahead == 'c') ADVANCE(70);
      if (lookahead == 'o') ADVANCE(85);
      if (lookahead == 'p') ADVANCE(49);
      if (lookahead == 's') ADVANCE(50);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(124);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      END_STATE();
    case 20:
      ADVANCE_MAP(
        '>', 372,
        'a', 56,
        'c', 70,
        'g', 63,
        'l', 80,
        'o', 85,
        'p', 49,
        's', 50,
        'u', 76,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 27:
      if (lookahead == 'b') ADVANCE(52);
      END_STATE();
    case 28:
      if (lookahead == 'b') ADVANCE(25);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(82);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(23);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(26);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(345);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(402);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(406);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(363);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(338);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(344);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(282);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(286);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 45:
      if (lookahead == 'f') ADVANCE(51);
      END_STATE();
    case 46:
      if (lookahead == 'f') ADVANCE(54);
      END_STATE();
    case 47:
      if (lookahead == 'f') ADVANCE(96);
      END_STATE();
    case 48:
      if (lookahead == 'g') ADVANCE(15);
      END_STATE();
    case 49:
      if (lookahead == 'h') ADVANCE(103);
      END_STATE();
    case 50:
      if (lookahead == 'h') ADVANCE(53);
      if (lookahead == 'u') ADVANCE(86);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(351);
      if (lookahead == 't') ADVANCE(386);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(378);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(359);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(355);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(382);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(368);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 66:
      if (lookahead == 'l') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 69:
      if (lookahead == 'm') ADVANCE(71);
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 70:
      if (lookahead == 'm') ADVANCE(33);
      if (lookahead == 'o') ADVANCE(69);
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 71:
      if (lookahead == 'm') ADVANCE(24);
      END_STATE();
    case 72:
      if (lookahead == 'm') ADVANCE(43);
      END_STATE();
    case 73:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(390);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 79:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 80:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 81:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 82:
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 83:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 84:
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 85:
      if (lookahead == 'p') ADVANCE(95);
      END_STATE();
    case 86:
      if (lookahead == 'p') ADVANCE(44);
      END_STATE();
    case 87:
      if (lookahead == 'r') ADVANCE(347);
      END_STATE();
    case 88:
      if (lookahead == 'r') ADVANCE(398);
      END_STATE();
    case 89:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 90:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 91:
      if (lookahead == 's') ADVANCE(100);
      END_STATE();
    case 92:
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 93:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 94:
      if (lookahead == 't') ADVANCE(386);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(397);
      END_STATE();
    case 96:
      if (lookahead == 't') ADVANCE(374);
      END_STATE();
    case 97:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 98:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 99:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 100:
      if (lookahead == 'u') ADVANCE(72);
      END_STATE();
    case 101:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 102:
      if (lookahead == 'y') ADVANCE(27);
      END_STATE();
    case 103:
      if (lookahead == 'y') ADVANCE(92);
      END_STATE();
    case 104:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(104);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(334);
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 105:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(297);
      END_STATE();
    case 106:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      END_STATE();
    case 107:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      END_STATE();
    case 108:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(321);
      END_STATE();
    case 109:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      END_STATE();
    case 110:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 111:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      END_STATE();
    case 112:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 113:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '0' || ':' < lookahead) &&
          lookahead != '=' &&
          lookahead != '>') ADVANCE(410);
      END_STATE();
    case 114:
      if (eof) ADVANCE(117);
      ADVANCE_MAP(
        '\n', 118,
        '\r', 1,
        '#', 3,
        ':', 367,
        '=', 343,
        '_', 280,
        'c', 190,
        'k', 152,
        'p', 138,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 115:
      if (eof) ADVANCE(117);
      if (lookahead == '\n') ADVANCE(118);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == 'c') ADVANCE(79);
      if (lookahead == 'k') ADVANCE(36);
      if (lookahead == 'p') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(115);
      END_STATE();
    case 116:
      if (eof) ADVANCE(117);
      ADVANCE_MAP(
        '"', 298,
        '#', 320,
        '\'', 302,
        '+', 373,
        '=', 124,
        '>', 372,
        'a', 241,
        'c', 242,
        'f', 218,
        'g', 244,
        'l', 258,
        'o', 263,
        'p', 237,
        's', 238,
        't', 265,
        'u', 255,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      if (lookahead != 0) ADVANCE(306);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n') ADVANCE(118);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n') ADVANCE(119);
      if (lookahead == '\r') ADVANCE(281);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(318);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n') ADVANCE(120);
      if (lookahead == '\r') ADVANCE(6);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n') ADVANCE(121);
      if (lookahead == '\r') ADVANCE(7);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n') ADVANCE(122);
      if (lookahead == '\r') ADVANCE(8);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == '-') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == '.') ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(111);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == '.') ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(321);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == '.') ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(108);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == '.') ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(109);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == '.') ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(110);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == '.') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(214);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'b') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'b') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'c') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'c') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'c') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'd') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'd') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'd') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'd') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'f') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'f') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'g') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'h') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'h') ADVANCE(161);
      if (lookahead == 'u') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'i') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'i') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'i') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'i') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(214);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(148);
      if (lookahead == 'm') ADVANCE(144);
      if (lookahead == 'o') ADVANCE(176);
      if (lookahead == 't') ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(111);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(214);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(353);
      if (lookahead == 't') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(200);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(213);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'm') ADVANCE(177);
      if (lookahead == 'n') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'm') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'm') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'p') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'p') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 's') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 's') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 's') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 't') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 't') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 't') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 't') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 't') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'u') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'u') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'y') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'y') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(214);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(215);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(211);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(212);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(213);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == '.') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'b') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'c') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'c') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'c') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'd') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'd') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'd') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'f') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'h') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'h') ADVANCE(239);
      if (lookahead == 'u') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'i') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'i') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(231);
      if (lookahead == 'm') ADVANCE(228);
      if (lookahead == 'o') ADVANCE(251);
      if (lookahead == 't') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(354);
      if (lookahead == 't') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'm') ADVANCE(252);
      if (lookahead == 'n') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'm') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'm') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'p') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'p') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 's') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 's') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 's') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 't') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 't') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 't') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'u') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'u') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'y') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == '\n') ADVANCE(119);
      if (lookahead == '\r') ADVANCE(281);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(318);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(323);
      if (lookahead == '.') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(323);
      if (lookahead == '.') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(321);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(323);
      if (lookahead == '.') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(293);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(323);
      if (lookahead == '.') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(323);
      if (lookahead == '.') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(323);
      if (lookahead == '.') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(297);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(301);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(301);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(305);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(305);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_string_token3);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'a') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'h') ADVANCE(103);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'h') ADVANCE(53);
      if (lookahead == 'u') ADVANCE(86);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'l') ADVANCE(42);
      if (lookahead == 'm') ADVANCE(33);
      if (lookahead == 'o') ADVANCE(69);
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'p') ADVANCE(95);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_color_token1);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (lookahead == '%') ADVANCE(323);
      if (lookahead == '.') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_percent_adjustment);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_numeric_adjustment);
      if (lookahead == '%') ADVANCE(323);
      if (lookahead == '.') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_numeric_adjustment);
      if (lookahead == '%') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      ADVANCE_MAP(
        '"', 299,
        '\'', 303,
        'f', 327,
        't', 331,
        '+', 335,
        '-', 335,
        '\t', 326,
        0x0b, 326,
        '\f', 326,
        ' ', 326,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(469);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(337);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (lookahead == 'a') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (lookahead == 'e') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (lookahead == 'e') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (lookahead == 'l') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (lookahead == 'r') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (lookahead == 's') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (lookahead == 'u') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(334);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(337);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_palette);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_palette);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_palette_value_token1);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_palette_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_palette_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(341);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_config_DASHfile);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_keybind);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_keybind);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_clear);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_clear);
      if (lookahead == '_') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_clear);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_clear);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_all);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_all);
      if (lookahead == '_') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_all);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_all);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_global);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_global);
      if (lookahead == '_') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_global);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_global);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_local);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_local);
      if (lookahead == '_') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_local);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_local);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_unconsumed);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_unconsumed);
      if (lookahead == '_') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_unconsumed);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_unconsumed);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_physical);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_physical);
      if (lookahead == '_') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_physical);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_physical);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_shift);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_shift);
      if (lookahead == '_') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_shift);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_shift);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_ctrl);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_ctrl);
      if (lookahead == '_') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_ctrl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_ctrl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_control);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_control);
      if (lookahead == '_') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_control);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_control);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_alt);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_alt);
      if (lookahead == '_') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_alt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_alt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_option);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_option);
      if (lookahead == '_') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_option);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_option);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_opt);
      if (lookahead == '_') ADVANCE(112);
      if (lookahead == 'i') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_opt);
      if (lookahead == 'i') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_opt);
      if (lookahead == 'i') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_opt);
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_super);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_super);
      if (lookahead == '_') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_super);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_super);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_cmd);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_cmd);
      if (lookahead == '_') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_cmd);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_cmd);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_command);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_command);
      if (lookahead == '_') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_command);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_command);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_key_token1);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(112);
      if (lookahead == 'a') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(112);
      if (lookahead == 'a') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(112);
      if (lookahead == 'a') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(112);
      if (lookahead == 'a') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(112);
      if (lookahead == 'a') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(112);
      if (lookahead == 'b') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(112);
      if (lookahead == 'c') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(112);
      if (lookahead == 'c') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(112);
      if (lookahead == 'c') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(112);
      if (lookahead == 'd') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(112);
      if (lookahead == 'd') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(112);
      if (lookahead == 'd') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(112);
      if (lookahead == 'e') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(112);
      if (lookahead == 'e') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(112);
      if (lookahead == 'e') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(112);
      if (lookahead == 'f') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(112);
      if (lookahead == 'h') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(112);
      if (lookahead == 'h') ADVANCE(429);
      if (lookahead == 'u') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(112);
      if (lookahead == 'i') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(112);
      if (lookahead == 'i') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(112);
      if (lookahead == 'l') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(112);
      if (lookahead == 'l') ADVANCE(423);
      if (lookahead == 'm') ADVANCE(420);
      if (lookahead == 'o') ADVANCE(442);
      if (lookahead == 't') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(112);
      if (lookahead == 'l') ADVANCE(352);
      if (lookahead == 't') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(112);
      if (lookahead == 'l') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(112);
      if (lookahead == 'l') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(112);
      if (lookahead == 'l') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(112);
      if (lookahead == 'l') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(112);
      if (lookahead == 'l') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(112);
      if (lookahead == 'l') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(112);
      if (lookahead == 'l') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(112);
      if (lookahead == 'm') ADVANCE(420);
      if (lookahead == 'o') ADVANCE(442);
      if (lookahead == 't') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(112);
      if (lookahead == 'm') ADVANCE(444);
      if (lookahead == 'n') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(112);
      if (lookahead == 'm') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(112);
      if (lookahead == 'm') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(112);
      if (lookahead == 'n') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(112);
      if (lookahead == 'n') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(112);
      if (lookahead == 'n') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(112);
      if (lookahead == 'n') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(112);
      if (lookahead == 'o') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(112);
      if (lookahead == 'o') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(112);
      if (lookahead == 'o') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(112);
      if (lookahead == 'o') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(112);
      if (lookahead == 'o') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(112);
      if (lookahead == 'p') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(112);
      if (lookahead == 'p') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(112);
      if (lookahead == 'r') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(112);
      if (lookahead == 'r') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(112);
      if (lookahead == 'r') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(112);
      if (lookahead == 'r') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(112);
      if (lookahead == 's') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(112);
      if (lookahead == 's') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(112);
      if (lookahead == 't') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(112);
      if (lookahead == 't') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(112);
      if (lookahead == 't') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(112);
      if (lookahead == 't') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(112);
      if (lookahead == 'u') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(112);
      if (lookahead == 'y') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym__action_arg_value_token1);
      if (lookahead == '.') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(469);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym__action_arg_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(470);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 114},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 16},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 16},
  [6] = {.lex_state = 114},
  [7] = {.lex_state = 114},
  [8] = {.lex_state = 16},
  [9] = {.lex_state = 17},
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 17},
  [12] = {.lex_state = 11},
  [13] = {.lex_state = 114},
  [14] = {.lex_state = 114},
  [15] = {.lex_state = 114},
  [16] = {.lex_state = 114},
  [17] = {.lex_state = 114},
  [18] = {.lex_state = 114},
  [19] = {.lex_state = 114},
  [20] = {.lex_state = 114},
  [21] = {.lex_state = 114},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 114},
  [24] = {.lex_state = 12},
  [25] = {.lex_state = 12},
  [26] = {.lex_state = 114},
  [27] = {.lex_state = 12},
  [28] = {.lex_state = 114},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 114},
  [31] = {.lex_state = 12},
  [32] = {.lex_state = 16},
  [33] = {.lex_state = 12},
  [34] = {.lex_state = 14},
  [35] = {.lex_state = 9},
  [36] = {.lex_state = 14},
  [37] = {.lex_state = 12},
  [38] = {.lex_state = 12},
  [39] = {.lex_state = 16},
  [40] = {.lex_state = 12},
  [41] = {.lex_state = 14},
  [42] = {.lex_state = 16},
  [43] = {.lex_state = 12},
  [44] = {.lex_state = 104},
  [45] = {.lex_state = 16},
  [46] = {.lex_state = 114},
  [47] = {.lex_state = 14},
  [48] = {.lex_state = 114},
  [49] = {.lex_state = 17},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 114},
  [53] = {.lex_state = 17},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 113},
  [56] = {.lex_state = 114},
  [57] = {.lex_state = 114},
  [58] = {.lex_state = 113},
  [59] = {.lex_state = 114},
  [60] = {.lex_state = 17},
  [61] = {.lex_state = 114},
  [62] = {.lex_state = 14},
  [63] = {.lex_state = 114},
  [64] = {.lex_state = 17},
  [65] = {.lex_state = 114},
  [66] = {.lex_state = 114},
  [67] = {.lex_state = 114},
  [68] = {.lex_state = 304},
  [69] = {.lex_state = 114},
  [70] = {.lex_state = 114},
  [71] = {.lex_state = 114},
  [72] = {.lex_state = 114},
  [73] = {.lex_state = 114},
  [74] = {.lex_state = 114},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 114},
  [77] = {.lex_state = 114},
  [78] = {.lex_state = 14},
  [79] = {.lex_state = 114},
  [80] = {.lex_state = 114},
  [81] = {.lex_state = 114},
  [82] = {.lex_state = 114},
  [83] = {.lex_state = 17},
  [84] = {.lex_state = 300},
  [85] = {.lex_state = 304},
  [86] = {.lex_state = 300},
  [87] = {.lex_state = 114},
  [88] = {.lex_state = 114},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 114},
  [92] = {.lex_state = 114},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym__kebab_case_identifier_token1] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym__snake_case_identifier_token1] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [aux_sym_string_token3] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [aux_sym_color_token1] = ACTIONS(1),
    [anon_sym_EQ2] = ACTIONS(1),
    [anon_sym_clear] = ACTIONS(1),
    [anon_sym_all] = ACTIONS(1),
    [anon_sym_global] = ACTIONS(1),
    [anon_sym_local] = ACTIONS(1),
    [anon_sym_unconsumed] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_physical] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_shift] = ACTIONS(1),
    [anon_sym_ctrl] = ACTIONS(1),
    [anon_sym_control] = ACTIONS(1),
    [anon_sym_alt] = ACTIONS(1),
    [anon_sym_option] = ACTIONS(1),
    [anon_sym_opt] = ACTIONS(1),
    [anon_sym_super] = ACTIONS(1),
    [anon_sym_cmd] = ACTIONS(1),
    [anon_sym_command] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(54),
    [sym_directive] = STATE(7),
    [sym_basic_directive] = STATE(13),
    [sym__kebab_case_identifier] = STATE(64),
    [sym_property] = STATE(83),
    [sym_palette_directive] = STATE(13),
    [sym_config_file_directive] = STATE(13),
    [sym_keybind_directive] = STATE(13),
    [aux_sym_document_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_document_token1] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [aux_sym__kebab_case_identifier_token1] = ACTIONS(9),
    [anon_sym_palette] = ACTIONS(11),
    [anon_sym_config_DASHfile] = ACTIONS(13),
    [anon_sym_keybind] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(17), 1,
      aux_sym_document_token1,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      aux_sym_string_token3,
    ACTIONS(25), 1,
      anon_sym_clear,
    ACTIONS(29), 1,
      anon_sym_physical,
    ACTIONS(33), 1,
      aux_sym_key_token1,
    STATE(32), 1,
      sym_chord,
    STATE(57), 1,
      sym_keybind_value,
    STATE(58), 1,
      sym_key_qualifier,
    STATE(59), 1,
      sym_keybind_trigger,
    STATE(61), 1,
      sym_string,
    STATE(3), 2,
      sym_keybind_modifier,
      aux_sym_keybind_value_repeat1,
    STATE(24), 2,
      sym_modifier_key,
      sym_key,
    ACTIONS(27), 4,
      anon_sym_all,
      anon_sym_global,
      anon_sym_local,
      anon_sym_unconsumed,
    ACTIONS(31), 9,
      anon_sym_shift,
      anon_sym_ctrl,
      anon_sym_control,
      anon_sym_alt,
      anon_sym_option,
      anon_sym_opt,
      anon_sym_super,
      anon_sym_cmd,
      anon_sym_command,
  [62] = 9,
    ACTIONS(29), 1,
      anon_sym_physical,
    ACTIONS(33), 1,
      aux_sym_key_token1,
    STATE(32), 1,
      sym_chord,
    STATE(58), 1,
      sym_key_qualifier,
    STATE(63), 1,
      sym_keybind_trigger,
    STATE(5), 2,
      sym_keybind_modifier,
      aux_sym_keybind_value_repeat1,
    STATE(24), 2,
      sym_modifier_key,
      sym_key,
    ACTIONS(27), 4,
      anon_sym_all,
      anon_sym_global,
      anon_sym_local,
      anon_sym_unconsumed,
    ACTIONS(31), 9,
      anon_sym_shift,
      anon_sym_ctrl,
      anon_sym_control,
      anon_sym_alt,
      anon_sym_option,
      anon_sym_opt,
      anon_sym_super,
      anon_sym_cmd,
      anon_sym_command,
  [103] = 12,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      aux_sym_string_token3,
    ACTIONS(35), 1,
      aux_sym_document_token1,
    ACTIONS(37), 1,
      aux_sym_value_token1,
    ACTIONS(41), 1,
      sym_number,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(45), 1,
      aux_sym_color_token1,
    STATE(79), 1,
      sym_value,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(47), 2,
      sym_percent_adjustment,
      sym_numeric_adjustment,
    STATE(74), 4,
      sym_boolean,
      sym_adjustment,
      sym_string,
      sym_color,
  [145] = 3,
    STATE(5), 2,
      sym_keybind_modifier,
      aux_sym_keybind_value_repeat1,
    ACTIONS(49), 4,
      anon_sym_all,
      anon_sym_global,
      anon_sym_local,
      anon_sym_unconsumed,
    ACTIONS(52), 11,
      anon_sym_physical,
      anon_sym_shift,
      anon_sym_ctrl,
      anon_sym_control,
      anon_sym_alt,
      anon_sym_option,
      anon_sym_opt,
      anon_sym_super,
      anon_sym_cmd,
      anon_sym_command,
      aux_sym_key_token1,
  [169] = 11,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    ACTIONS(56), 1,
      aux_sym_document_token1,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(62), 1,
      aux_sym__kebab_case_identifier_token1,
    ACTIONS(65), 1,
      anon_sym_palette,
    ACTIONS(68), 1,
      anon_sym_config_DASHfile,
    ACTIONS(71), 1,
      anon_sym_keybind,
    STATE(64), 1,
      sym__kebab_case_identifier,
    STATE(83), 1,
      sym_property,
    STATE(6), 2,
      sym_directive,
      aux_sym_document_repeat1,
    STATE(13), 4,
      sym_basic_directive,
      sym_palette_directive,
      sym_config_file_directive,
      sym_keybind_directive,
  [207] = 11,
    ACTIONS(9), 1,
      aux_sym__kebab_case_identifier_token1,
    ACTIONS(11), 1,
      anon_sym_palette,
    ACTIONS(13), 1,
      anon_sym_config_DASHfile,
    ACTIONS(15), 1,
      anon_sym_keybind,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
    ACTIONS(76), 1,
      aux_sym_document_token1,
    ACTIONS(78), 1,
      sym_comment,
    STATE(64), 1,
      sym__kebab_case_identifier,
    STATE(83), 1,
      sym_property,
    STATE(6), 2,
      sym_directive,
      aux_sym_document_repeat1,
    STATE(13), 4,
      sym_basic_directive,
      sym_palette_directive,
      sym_config_file_directive,
      sym_keybind_directive,
  [245] = 1,
    ACTIONS(80), 15,
      anon_sym_all,
      anon_sym_global,
      anon_sym_local,
      anon_sym_unconsumed,
      anon_sym_physical,
      anon_sym_shift,
      anon_sym_ctrl,
      anon_sym_control,
      anon_sym_alt,
      anon_sym_option,
      anon_sym_opt,
      anon_sym_super,
      anon_sym_cmd,
      anon_sym_command,
      aux_sym_key_token1,
  [263] = 6,
    ACTIONS(29), 1,
      anon_sym_physical,
    ACTIONS(33), 1,
      aux_sym_key_token1,
    STATE(45), 1,
      sym_chord,
    STATE(58), 1,
      sym_key_qualifier,
    STATE(24), 2,
      sym_modifier_key,
      sym_key,
    ACTIONS(31), 9,
      anon_sym_shift,
      anon_sym_ctrl,
      anon_sym_control,
      anon_sym_alt,
      anon_sym_option,
      anon_sym_opt,
      anon_sym_super,
      anon_sym_cmd,
      anon_sym_command,
  [291] = 10,
    ACTIONS(23), 1,
      aux_sym_string_token3,
    ACTIONS(45), 1,
      aux_sym_color_token1,
    ACTIONS(47), 1,
      sym_numeric_adjustment,
    ACTIONS(84), 1,
      sym_number,
    ACTIONS(86), 1,
      anon_sym_DQUOTE,
    ACTIONS(88), 1,
      anon_sym_SQUOTE,
    ACTIONS(90), 1,
      anon_sym_POUND,
    ACTIONS(92), 1,
      sym_percent_adjustment,
    ACTIONS(82), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(65), 4,
      sym_boolean,
      sym_adjustment,
      sym_string,
      sym_color,
  [326] = 5,
    ACTIONS(29), 1,
      anon_sym_physical,
    ACTIONS(33), 1,
      aux_sym_key_token1,
    STATE(58), 1,
      sym_key_qualifier,
    STATE(40), 2,
      sym_modifier_key,
      sym_key,
    ACTIONS(31), 9,
      anon_sym_shift,
      anon_sym_ctrl,
      anon_sym_control,
      anon_sym_alt,
      anon_sym_option,
      anon_sym_opt,
      anon_sym_super,
      anon_sym_cmd,
      anon_sym_command,
  [351] = 8,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      anon_sym_SQUOTE,
    ACTIONS(98), 1,
      aux_sym__raw_value_token1,
    ACTIONS(100), 1,
      aux_sym__action_arg_value_token1,
    STATE(87), 1,
      sym__raw_value,
    STATE(88), 1,
      sym__action_arg_value,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(48), 2,
      sym_boolean,
      sym__loose_string,
  [378] = 2,
    ACTIONS(102), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(104), 5,
      sym_comment,
      aux_sym__kebab_case_identifier_token1,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_keybind,
  [390] = 2,
    ACTIONS(106), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(108), 5,
      sym_comment,
      aux_sym__kebab_case_identifier_token1,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_keybind,
  [402] = 2,
    ACTIONS(110), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(112), 5,
      sym_comment,
      aux_sym__kebab_case_identifier_token1,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_keybind,
  [414] = 2,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(116), 5,
      sym_comment,
      aux_sym__kebab_case_identifier_token1,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_keybind,
  [426] = 2,
    ACTIONS(118), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(120), 5,
      sym_comment,
      aux_sym__kebab_case_identifier_token1,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_keybind,
  [438] = 2,
    ACTIONS(122), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(124), 5,
      sym_comment,
      aux_sym__kebab_case_identifier_token1,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_keybind,
  [450] = 2,
    ACTIONS(126), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(128), 5,
      sym_comment,
      aux_sym__kebab_case_identifier_token1,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_keybind,
  [462] = 2,
    ACTIONS(130), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(132), 5,
      sym_comment,
      aux_sym__kebab_case_identifier_token1,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_keybind,
  [474] = 2,
    ACTIONS(134), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(136), 5,
      sym_comment,
      aux_sym__kebab_case_identifier_token1,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_keybind,
  [486] = 6,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      aux_sym_string_token3,
    ACTIONS(138), 1,
      aux_sym_document_token1,
    STATE(56), 1,
      sym_path_value,
    STATE(82), 1,
      sym_string,
  [505] = 3,
    ACTIONS(142), 1,
      anon_sym__,
    STATE(23), 1,
      aux_sym__snake_case_identifier_repeat1,
    ACTIONS(140), 2,
      aux_sym_document_token1,
      anon_sym_COLON,
  [516] = 3,
    ACTIONS(147), 1,
      anon_sym_PLUS,
    STATE(25), 1,
      aux_sym_chord_repeat1,
    ACTIONS(145), 2,
      anon_sym_EQ2,
      anon_sym_GT,
  [527] = 3,
    ACTIONS(147), 1,
      anon_sym_PLUS,
    STATE(27), 1,
      aux_sym_chord_repeat1,
    ACTIONS(149), 2,
      anon_sym_EQ2,
      anon_sym_GT,
  [538] = 3,
    ACTIONS(153), 1,
      anon_sym__,
    STATE(28), 1,
      aux_sym__snake_case_identifier_repeat1,
    ACTIONS(151), 2,
      aux_sym_document_token1,
      anon_sym_COLON,
  [549] = 3,
    ACTIONS(157), 1,
      anon_sym_PLUS,
    STATE(27), 1,
      aux_sym_chord_repeat1,
    ACTIONS(155), 2,
      anon_sym_EQ2,
      anon_sym_GT,
  [560] = 3,
    ACTIONS(153), 1,
      anon_sym__,
    STATE(23), 1,
      aux_sym__snake_case_identifier_repeat1,
    ACTIONS(160), 2,
      aux_sym_document_token1,
      anon_sym_COLON,
  [571] = 3,
    ACTIONS(162), 1,
      aux_sym_document_token1,
    ACTIONS(164), 1,
      aux_sym_palette_value_token1,
    STATE(80), 1,
      sym_palette_value,
  [581] = 1,
    ACTIONS(140), 3,
      aux_sym_document_token1,
      anon_sym__,
      anon_sym_COLON,
  [587] = 1,
    ACTIONS(166), 3,
      anon_sym_EQ2,
      anon_sym_GT,
      anon_sym_PLUS,
  [593] = 3,
    ACTIONS(168), 1,
      anon_sym_EQ2,
    ACTIONS(170), 1,
      anon_sym_GT,
    STATE(39), 1,
      aux_sym_keybind_trigger_repeat1,
  [603] = 1,
    ACTIONS(172), 3,
      anon_sym_EQ2,
      anon_sym_GT,
      anon_sym_PLUS,
  [609] = 3,
    ACTIONS(174), 1,
      anon_sym_EQ,
    ACTIONS(176), 1,
      anon_sym_DASH,
    STATE(41), 1,
      aux_sym__kebab_case_identifier_repeat1,
  [619] = 3,
    ACTIONS(90), 1,
      anon_sym_POUND,
    ACTIONS(178), 1,
      aux_sym_color_token1,
    STATE(92), 1,
      sym_color,
  [629] = 3,
    ACTIONS(176), 1,
      anon_sym_DASH,
    ACTIONS(180), 1,
      anon_sym_EQ,
    STATE(34), 1,
      aux_sym__kebab_case_identifier_repeat1,
  [639] = 1,
    ACTIONS(182), 3,
      anon_sym_EQ2,
      anon_sym_GT,
      anon_sym_PLUS,
  [645] = 3,
    ACTIONS(184), 1,
      aux_sym__snake_case_identifier_token1,
    STATE(46), 1,
      sym__snake_case_identifier,
    STATE(72), 1,
      sym_keybind_action,
  [655] = 3,
    ACTIONS(170), 1,
      anon_sym_GT,
    ACTIONS(186), 1,
      anon_sym_EQ2,
    STATE(42), 1,
      aux_sym_keybind_trigger_repeat1,
  [665] = 1,
    ACTIONS(155), 3,
      anon_sym_EQ2,
      anon_sym_GT,
      anon_sym_PLUS,
  [671] = 3,
    ACTIONS(188), 1,
      anon_sym_EQ,
    ACTIONS(190), 1,
      anon_sym_DASH,
    STATE(41), 1,
      aux_sym__kebab_case_identifier_repeat1,
  [681] = 3,
    ACTIONS(193), 1,
      anon_sym_EQ2,
    ACTIONS(195), 1,
      anon_sym_GT,
    STATE(42), 1,
      aux_sym_keybind_trigger_repeat1,
  [691] = 3,
    ACTIONS(184), 1,
      aux_sym__snake_case_identifier_token1,
    STATE(46), 1,
      sym__snake_case_identifier,
    STATE(81), 1,
      sym_keybind_action,
  [701] = 2,
    ACTIONS(198), 1,
      aux_sym__raw_value_token1,
    STATE(52), 1,
      sym__raw_value,
  [708] = 1,
    ACTIONS(193), 2,
      anon_sym_EQ2,
      anon_sym_GT,
  [713] = 2,
    ACTIONS(200), 1,
      aux_sym_document_token1,
    ACTIONS(202), 1,
      anon_sym_COLON,
  [720] = 1,
    ACTIONS(188), 2,
      anon_sym_EQ,
      anon_sym_DASH,
  [725] = 1,
    ACTIONS(204), 1,
      aux_sym_document_token1,
  [729] = 1,
    ACTIONS(206), 1,
      anon_sym_EQ,
  [733] = 1,
    ACTIONS(208), 1,
      anon_sym_DQUOTE,
  [737] = 1,
    ACTIONS(208), 1,
      anon_sym_SQUOTE,
  [741] = 1,
    ACTIONS(210), 1,
      aux_sym_document_token1,
  [745] = 1,
    ACTIONS(212), 1,
      anon_sym_EQ,
  [749] = 1,
    ACTIONS(214), 1,
      ts_builtin_sym_end,
  [753] = 1,
    ACTIONS(216), 1,
      aux_sym_key_token1,
  [757] = 1,
    ACTIONS(218), 1,
      aux_sym_document_token1,
  [761] = 1,
    ACTIONS(220), 1,
      aux_sym_document_token1,
  [765] = 1,
    ACTIONS(222), 1,
      aux_sym_key_token1,
  [769] = 1,
    ACTIONS(224), 1,
      anon_sym_EQ2,
  [773] = 1,
    ACTIONS(226), 1,
      anon_sym_EQ,
  [777] = 1,
    ACTIONS(228), 1,
      aux_sym_document_token1,
  [781] = 1,
    ACTIONS(230), 1,
      aux_sym__kebab_case_identifier_token1,
  [785] = 1,
    ACTIONS(232), 1,
      anon_sym_EQ2,
  [789] = 1,
    ACTIONS(234), 1,
      anon_sym_EQ,
  [793] = 1,
    ACTIONS(236), 1,
      aux_sym_document_token1,
  [797] = 1,
    ACTIONS(238), 1,
      aux_sym_document_token1,
  [801] = 1,
    ACTIONS(240), 1,
      anon_sym_EQ2,
  [805] = 1,
    ACTIONS(242), 1,
      aux_sym_string_token2,
  [809] = 1,
    ACTIONS(244), 1,
      aux_sym_document_token1,
  [813] = 1,
    ACTIONS(246), 1,
      anon_sym_COLON,
  [817] = 1,
    ACTIONS(248), 1,
      anon_sym_COLON,
  [821] = 1,
    ACTIONS(250), 1,
      aux_sym_document_token1,
  [825] = 1,
    ACTIONS(252), 1,
      aux_sym_document_token1,
  [829] = 1,
    ACTIONS(254), 1,
      aux_sym_document_token1,
  [833] = 1,
    ACTIONS(256), 1,
      aux_sym_color_token1,
  [837] = 1,
    ACTIONS(258), 1,
      aux_sym_document_token1,
  [841] = 1,
    ACTIONS(260), 1,
      aux_sym_document_token1,
  [845] = 1,
    ACTIONS(262), 1,
      aux_sym__kebab_case_identifier_token1,
  [849] = 1,
    ACTIONS(264), 1,
      aux_sym_document_token1,
  [853] = 1,
    ACTIONS(266), 1,
      aux_sym_document_token1,
  [857] = 1,
    ACTIONS(268), 1,
      aux_sym_document_token1,
  [861] = 1,
    ACTIONS(270), 1,
      aux_sym_document_token1,
  [865] = 1,
    ACTIONS(272), 1,
      anon_sym_EQ,
  [869] = 1,
    ACTIONS(274), 1,
      aux_sym_string_token1,
  [873] = 1,
    ACTIONS(276), 1,
      aux_sym_string_token2,
  [877] = 1,
    ACTIONS(278), 1,
      aux_sym_string_token1,
  [881] = 1,
    ACTIONS(280), 1,
      aux_sym_document_token1,
  [885] = 1,
    ACTIONS(282), 1,
      aux_sym_document_token1,
  [889] = 1,
    ACTIONS(284), 1,
      anon_sym_DQUOTE,
  [893] = 1,
    ACTIONS(284), 1,
      anon_sym_SQUOTE,
  [897] = 1,
    ACTIONS(286), 1,
      aux_sym_document_token1,
  [901] = 1,
    ACTIONS(288), 1,
      aux_sym_document_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 62,
  [SMALL_STATE(4)] = 103,
  [SMALL_STATE(5)] = 145,
  [SMALL_STATE(6)] = 169,
  [SMALL_STATE(7)] = 207,
  [SMALL_STATE(8)] = 245,
  [SMALL_STATE(9)] = 263,
  [SMALL_STATE(10)] = 291,
  [SMALL_STATE(11)] = 326,
  [SMALL_STATE(12)] = 351,
  [SMALL_STATE(13)] = 378,
  [SMALL_STATE(14)] = 390,
  [SMALL_STATE(15)] = 402,
  [SMALL_STATE(16)] = 414,
  [SMALL_STATE(17)] = 426,
  [SMALL_STATE(18)] = 438,
  [SMALL_STATE(19)] = 450,
  [SMALL_STATE(20)] = 462,
  [SMALL_STATE(21)] = 474,
  [SMALL_STATE(22)] = 486,
  [SMALL_STATE(23)] = 505,
  [SMALL_STATE(24)] = 516,
  [SMALL_STATE(25)] = 527,
  [SMALL_STATE(26)] = 538,
  [SMALL_STATE(27)] = 549,
  [SMALL_STATE(28)] = 560,
  [SMALL_STATE(29)] = 571,
  [SMALL_STATE(30)] = 581,
  [SMALL_STATE(31)] = 587,
  [SMALL_STATE(32)] = 593,
  [SMALL_STATE(33)] = 603,
  [SMALL_STATE(34)] = 609,
  [SMALL_STATE(35)] = 619,
  [SMALL_STATE(36)] = 629,
  [SMALL_STATE(37)] = 639,
  [SMALL_STATE(38)] = 645,
  [SMALL_STATE(39)] = 655,
  [SMALL_STATE(40)] = 665,
  [SMALL_STATE(41)] = 671,
  [SMALL_STATE(42)] = 681,
  [SMALL_STATE(43)] = 691,
  [SMALL_STATE(44)] = 701,
  [SMALL_STATE(45)] = 708,
  [SMALL_STATE(46)] = 713,
  [SMALL_STATE(47)] = 720,
  [SMALL_STATE(48)] = 725,
  [SMALL_STATE(49)] = 729,
  [SMALL_STATE(50)] = 733,
  [SMALL_STATE(51)] = 737,
  [SMALL_STATE(52)] = 741,
  [SMALL_STATE(53)] = 745,
  [SMALL_STATE(54)] = 749,
  [SMALL_STATE(55)] = 753,
  [SMALL_STATE(56)] = 757,
  [SMALL_STATE(57)] = 761,
  [SMALL_STATE(58)] = 765,
  [SMALL_STATE(59)] = 769,
  [SMALL_STATE(60)] = 773,
  [SMALL_STATE(61)] = 777,
  [SMALL_STATE(62)] = 781,
  [SMALL_STATE(63)] = 785,
  [SMALL_STATE(64)] = 789,
  [SMALL_STATE(65)] = 793,
  [SMALL_STATE(66)] = 797,
  [SMALL_STATE(67)] = 801,
  [SMALL_STATE(68)] = 805,
  [SMALL_STATE(69)] = 809,
  [SMALL_STATE(70)] = 813,
  [SMALL_STATE(71)] = 817,
  [SMALL_STATE(72)] = 821,
  [SMALL_STATE(73)] = 825,
  [SMALL_STATE(74)] = 829,
  [SMALL_STATE(75)] = 833,
  [SMALL_STATE(76)] = 837,
  [SMALL_STATE(77)] = 841,
  [SMALL_STATE(78)] = 845,
  [SMALL_STATE(79)] = 849,
  [SMALL_STATE(80)] = 853,
  [SMALL_STATE(81)] = 857,
  [SMALL_STATE(82)] = 861,
  [SMALL_STATE(83)] = 865,
  [SMALL_STATE(84)] = 869,
  [SMALL_STATE(85)] = 873,
  [SMALL_STATE(86)] = 877,
  [SMALL_STATE(87)] = 881,
  [SMALL_STATE(88)] = 885,
  [SMALL_STATE(89)] = 889,
  [SMALL_STATE(90)] = 893,
  [SMALL_STATE(91)] = 897,
  [SMALL_STATE(92)] = 901,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keybind_value_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keybind_value_repeat1, 2, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keybind_modifier, 2, 0, 3),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file_directive, 3, 0, 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_config_file_directive, 3, 0, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_palette_directive, 3, 0, 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_palette_directive, 3, 0, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_directive, 3, 0, 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keybind_directive, 3, 0, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_palette_directive, 4, 0, 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_palette_directive, 4, 0, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_directive, 4, 0, 2),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keybind_directive, 4, 0, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_directive, 3, 0, 1),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_directive, 3, 0, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file_directive, 4, 0, 2),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_config_file_directive, 4, 0, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_directive, 4, 0, 2),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_directive, 4, 0, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__snake_case_identifier_repeat1, 2, 0, 0),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__snake_case_identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord, 1, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord, 2, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__snake_case_identifier, 1, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_chord_repeat1, 2, 0, 0),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chord_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__snake_case_identifier, 2, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_trigger, 1, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier_key, 1, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__kebab_case_identifier, 2, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__kebab_case_identifier, 1, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 2, 0, 4),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_trigger, 2, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__kebab_case_identifier_repeat1, 2, 0, 0),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__kebab_case_identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keybind_trigger_repeat1, 2, 0, 0),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keybind_trigger_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_action, 1, 0, 5),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__action_arg_value, 1, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [214] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_qualifier, 2, 0, 4),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_value, 1, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 1, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 2, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_value, 3, 0, 6),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 1, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adjustment, 1, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_value, 4, 0, 7),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_value, 1, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__loose_string, 1, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_action, 3, 0, 8),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__loose_string, 3, 0, 0),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_palette_value, 3, 0, 0),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_ghostty(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
