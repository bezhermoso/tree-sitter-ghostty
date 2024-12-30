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
#define STATE_COUNT 86
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 76
#define ALIAS_COUNT 1
#define TOKEN_COUNT 45
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
  anon_sym__ = 6,
  aux_sym_value_token1 = 7,
  anon_sym_true = 8,
  anon_sym_false = 9,
  sym_number = 10,
  anon_sym_DQUOTE = 11,
  aux_sym_string_token1 = 12,
  anon_sym_SQUOTE = 13,
  aux_sym_string_token2 = 14,
  aux_sym_string_token3 = 15,
  anon_sym_POUND = 16,
  aux_sym_color_token1 = 17,
  sym_percent_adjustment = 18,
  sym_numeric_adjustment = 19,
  aux_sym__raw_value_token1 = 20,
  anon_sym_palette = 21,
  aux_sym_palette_value_token1 = 22,
  anon_sym_EQ2 = 23,
  anon_sym_config_DASHfile = 24,
  anon_sym_keybind = 25,
  anon_sym_clear = 26,
  anon_sym_all = 27,
  anon_sym_global = 28,
  anon_sym_local = 29,
  anon_sym_unconsumed = 30,
  anon_sym_COLON = 31,
  anon_sym_physical = 32,
  anon_sym_GT = 33,
  anon_sym_PLUS = 34,
  anon_sym_shift = 35,
  anon_sym_ctrl = 36,
  anon_sym_control = 37,
  anon_sym_alt = 38,
  anon_sym_option = 39,
  anon_sym_opt = 40,
  anon_sym_super = 41,
  anon_sym_cmd = 42,
  anon_sym_command = 43,
  aux_sym_key_token1 = 44,
  sym_document = 45,
  sym_directive = 46,
  sym_basic_directive = 47,
  sym__kebab_case_identifier = 48,
  sym__snake_case_identifier = 49,
  sym_property = 50,
  sym_value = 51,
  sym_boolean = 52,
  sym_adjustment = 53,
  sym_string = 54,
  sym_color = 55,
  sym__raw_value = 56,
  sym_palette_directive = 57,
  sym_palette_value = 58,
  sym_config_file_directive = 59,
  sym_path_value = 60,
  sym_keybind_directive = 61,
  sym_keybind_value = 62,
  sym_keybind_modifier = 63,
  sym_key_qualifier = 64,
  sym_keybind_trigger = 65,
  sym_chord = 66,
  sym_modifier_key = 67,
  sym_key = 68,
  sym_keybind_action = 69,
  aux_sym_document_repeat1 = 70,
  aux_sym__kebab_case_identifier_repeat1 = 71,
  aux_sym__snake_case_identifier_repeat1 = 72,
  aux_sym_keybind_value_repeat1 = 73,
  aux_sym_keybind_trigger_repeat1 = 74,
  aux_sym_chord_repeat1 = 75,
  alias_sym_action_argument = 76,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_document_token1] = "document_token1",
  [sym_comment] = "comment",
  [anon_sym_EQ] = "=",
  [aux_sym__kebab_case_identifier_token1] = "_kebab_case_identifier_token1",
  [anon_sym_DASH] = "-",
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
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym__kebab_case_identifier_repeat1] = "_kebab_case_identifier_repeat1",
  [aux_sym__snake_case_identifier_repeat1] = "_snake_case_identifier_repeat1",
  [aux_sym_keybind_value_repeat1] = "keybind_value_repeat1",
  [aux_sym_keybind_trigger_repeat1] = "keybind_trigger_repeat1",
  [aux_sym_chord_repeat1] = "chord_repeat1",
  [alias_sym_action_argument] = "action_argument",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_document_token1] = aux_sym_document_token1,
  [sym_comment] = sym_comment,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym__kebab_case_identifier_token1] = aux_sym__kebab_case_identifier_token1,
  [anon_sym_DASH] = anon_sym_DASH,
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
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym__kebab_case_identifier_repeat1] = aux_sym__kebab_case_identifier_repeat1,
  [aux_sym__snake_case_identifier_repeat1] = aux_sym__snake_case_identifier_repeat1,
  [aux_sym_keybind_value_repeat1] = aux_sym_keybind_value_repeat1,
  [aux_sym_keybind_trigger_repeat1] = aux_sym_keybind_trigger_repeat1,
  [aux_sym_chord_repeat1] = aux_sym_chord_repeat1,
  [alias_sym_action_argument] = alias_sym_action_argument,
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
  [alias_sym_action_argument] = {
    .visible = true,
    .named = true,
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
  [8] = {
    [2] = alias_sym_action_argument,
  },
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(96);
      ADVANCE_MAP(
        '"', 202,
        '#', 225,
        '\'', 205,
        '+', 264,
        '-', 185,
        ':', 259,
        '=', 240,
        '>', 263,
        '_', 186,
        'a', 333,
        'c', 342,
        'f', 300,
        'g', 344,
        'k', 316,
        'l', 357,
        'o', 362,
        'p', 301,
        's', 327,
        't', 364,
        'u', 354,
        'b', 382,
        'd', 382,
        'e', 382,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(95);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      if (('h' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      if (lookahead != 0) ADVANCE(292);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(97);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == '_') ADVANCE(186);
      if (lookahead == 'c') ADVANCE(164);
      if (lookahead == 'k') ADVANCE(123);
      if (lookahead == 'p') ADVANCE(110);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(102);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(102);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '\n', 98,
        '\r', 209,
        '"', 202,
        '#', 292,
        '\'', 205,
        'a', 334,
        'c', 343,
        'g', 344,
        'l', 357,
        'o', 362,
        'p', 328,
        's', 327,
        'u', 354,
        ':', 208,
        '=', 208,
        '>', 208,
        '\t', 209,
        0x0b, 209,
        '\f', 209,
        ' ', 209,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      if (lookahead != 0) ADVANCE(292);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '\n', 99,
        '\r', 187,
        '"', 202,
        '#', 225,
        '\'', 205,
        'f', 212,
        't', 222,
        '+', 223,
        '-', 223,
        '\t', 187,
        0x0b, 187,
        '\f', 187,
        ' ', 187,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(224);
      if (lookahead != 0) ADVANCE(208);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(100);
      if (lookahead == '\r') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(101);
      if (lookahead == '\r') ADVANCE(210);
      if (lookahead == '"') ADVANCE(202);
      if (lookahead == '\'') ADVANCE(205);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(208);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(202);
      if (lookahead == '#') ADVANCE(225);
      if (lookahead == '\'') ADVANCE(205);
      if (lookahead == 'f') ADVANCE(212);
      if (lookahead == 't') ADVANCE(222);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(223);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(224);
      if (lookahead != 0) ADVANCE(208);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(225);
      if (lookahead == '+') ADVANCE(264);
      if (lookahead == '=') ADVANCE(240);
      if (lookahead == '>') ADVANCE(263);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(225);
      if (lookahead == '+') ADVANCE(264);
      if (lookahead == '>') ADVANCE(263);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(185);
      if (lookahead == '=') ADVANCE(103);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '=', 240,
        '>', 263,
        'a', 334,
        'c', 347,
        'g', 344,
        'l', 357,
        'o', 362,
        'p', 328,
        's', 327,
        'u', 354,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      if (lookahead != 0 &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(292);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(103);
      if (lookahead == 'a') ADVANCE(346);
      if (lookahead == 'c') ADVANCE(347);
      if (lookahead == 'o') ADVANCE(362);
      if (lookahead == 'p') ADVANCE(328);
      if (lookahead == 's') ADVANCE(327);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      if (lookahead != 0 &&
          (lookahead < '0' || ':' < lookahead) &&
          lookahead != '=' &&
          lookahead != '>') ADVANCE(292);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(103);
      if (lookahead == 'a') ADVANCE(52);
      if (lookahead == 'c') ADVANCE(53);
      if (lookahead == 'o') ADVANCE(66);
      if (lookahead == 'p') ADVANCE(36);
      if (lookahead == 's') ADVANCE(37);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      END_STATE();
    case 15:
      ADVANCE_MAP(
        '>', 263,
        'a', 42,
        'c', 53,
        'g', 43,
        'l', 61,
        'o', 66,
        'p', 36,
        's', 37,
        'u', 59,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 21:
      if (lookahead == 'b') ADVANCE(19);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(63);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(18);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(20);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(286);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(289);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(256);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(241);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 34:
      if (lookahead == 'f') ADVANCE(38);
      END_STATE();
    case 35:
      if (lookahead == 'f') ADVANCE(77);
      END_STATE();
    case 36:
      if (lookahead == 'h') ADVANCE(81);
      END_STATE();
    case 37:
      if (lookahead == 'h') ADVANCE(39);
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(247);
      if (lookahead == 't') ADVANCE(274);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(268);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(253);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(250);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(271);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(260);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 53:
      if (lookahead == 'm') ADVANCE(25);
      if (lookahead == 'o') ADVANCE(54);
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 54:
      if (lookahead == 'm') ADVANCE(55);
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 55:
      if (lookahead == 'm') ADVANCE(17);
      END_STATE();
    case 56:
      if (lookahead == 'm') ADVANCE(32);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(277);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 61:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 62:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 63:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 64:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 66:
      if (lookahead == 'p') ADVANCE(76);
      END_STATE();
    case 67:
      if (lookahead == 'p') ADVANCE(33);
      END_STATE();
    case 68:
      if (lookahead == 'r') ADVANCE(244);
      END_STATE();
    case 69:
      if (lookahead == 'r') ADVANCE(283);
      END_STATE();
    case 70:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 71:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 72:
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 73:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 74:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(274);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(281);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(265);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 79:
      if (lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 80:
      if (lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 81:
      if (lookahead == 'y') ADVANCE(73);
      END_STATE();
    case 82:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(82);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(233);
      if (lookahead != 0) ADVANCE(234);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      END_STATE();
    case 84:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      END_STATE();
    case 85:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(232);
      END_STATE();
    case 86:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 87:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(226);
      END_STATE();
    case 88:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      END_STATE();
    case 89:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      END_STATE();
    case 90:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      END_STATE();
    case 91:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 92:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '0' || ':' < lookahead) &&
          lookahead != '=' &&
          lookahead != '>') ADVANCE(292);
      END_STATE();
    case 93:
      if (eof) ADVANCE(96);
      ADVANCE_MAP(
        '\n', 97,
        '\r', 1,
        '#', 3,
        ':', 259,
        '=', 240,
        '_', 186,
        'c', 164,
        'k', 123,
        'p', 110,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 94:
      if (eof) ADVANCE(96);
      if (lookahead == '\n') ADVANCE(97);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == '_') ADVANCE(186);
      if (lookahead == 'c') ADVANCE(164);
      if (lookahead == 'k') ADVANCE(123);
      if (lookahead == 'p') ADVANCE(110);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 95:
      if (eof) ADVANCE(96);
      ADVANCE_MAP(
        '"', 202,
        '#', 225,
        '\'', 205,
        '+', 264,
        '-', 185,
        '=', 103,
        '>', 263,
        '_', 186,
        'a', 140,
        'c', 148,
        'f', 106,
        'g', 149,
        'k', 123,
        'l', 160,
        'o', 166,
        'p', 109,
        's', 135,
        't', 168,
        'u', 156,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n') ADVANCE(97);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n') ADVANCE(98);
      if (lookahead == '\r') ADVANCE(209);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(209);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == '\r') ADVANCE(187);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(223);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n') ADVANCE(100);
      if (lookahead == '\r') ADVANCE(6);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n') ADVANCE(101);
      if (lookahead == '\r') ADVANCE(210);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(210);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == '-') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == '.') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(150);
      if (lookahead == 'h') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'b') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'b') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'c') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'c') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'c') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'd') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'd') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'd') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'd') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'f') ADVANCE(137);
      if (lookahead == 't') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'f') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'f') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'g') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'h') ADVANCE(136);
      if (lookahead == 'u') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'i') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'i') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'i') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'i') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(249);
      if (lookahead == 't') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(127);
      if (lookahead == 'm') ADVANCE(119);
      if (lookahead == 'o') ADVANCE(151);
      if (lookahead == 't') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'm') ADVANCE(152);
      if (lookahead == 'n') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'm') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'm') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'p') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'p') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 's') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 's') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 's') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 't') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 't') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 't') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 't') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'u') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'u') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'y') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'y') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == '\r') ADVANCE(187);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(223);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '_') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '_') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(230);
      if (lookahead == '.') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(230);
      if (lookahead == '.') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(226);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(230);
      if (lookahead == '.') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(230);
      if (lookahead == '.') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(230);
      if (lookahead == '.') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(230);
      if (lookahead == '.') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(204);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(207);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_string_token3);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_string_token3);
      ADVANCE_MAP(
        '\n', 98,
        '\r', 209,
        '"', 202,
        '\'', 205,
        'a', 216,
        'c', 218,
        'g', 217,
        'l', 220,
        'o', 221,
        'p', 214,
        's', 215,
        'u', 219,
        '\t', 209,
        0x0b, 209,
        '\f', 209,
        ' ', 209,
      );
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(208);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '\n') ADVANCE(101);
      if (lookahead == '\r') ADVANCE(210);
      if (lookahead == '"') ADVANCE(202);
      if (lookahead == '\'') ADVANCE(205);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(208);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '"') ADVANCE(202);
      if (lookahead == '\'') ADVANCE(205);
      if (lookahead == 'f') ADVANCE(213);
      if (lookahead == 't') ADVANCE(222);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(223);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(208);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'a') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'h') ADVANCE(81);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'h') ADVANCE(39);
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'l') ADVANCE(29);
      if (lookahead == 'm') ADVANCE(25);
      if (lookahead == 'o') ADVANCE(54);
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'p') ADVANCE(76);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_color_token1);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (lookahead == '%') ADVANCE(230);
      if (lookahead == '.') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == '_') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(299);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (lookahead == '_') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_percent_adjustment);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_numeric_adjustment);
      if (lookahead == '%') ADVANCE(230);
      if (lookahead == '.') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_numeric_adjustment);
      if (lookahead == '%') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(234);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_palette);
      if (lookahead == '_') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_palette);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_palette_value_token1);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_palette_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_palette_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_config_DASHfile);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_keybind);
      if (lookahead == '_') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_keybind);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_clear);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_clear);
      if (lookahead == '_') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_clear);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_all);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_all);
      if (lookahead == '_') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_all);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_global);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_global);
      if (lookahead == '_') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_global);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_local);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_local);
      if (lookahead == '_') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_local);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_unconsumed);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_unconsumed);
      if (lookahead == '_') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_unconsumed);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_physical);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_physical);
      if (lookahead == '_') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_physical);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_shift);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_shift);
      if (lookahead == '_') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_shift);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_ctrl);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_ctrl);
      if (lookahead == '_') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_ctrl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_control);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_control);
      if (lookahead == '_') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_control);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_alt);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_alt);
      if (lookahead == '_') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_alt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_option);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_option);
      if (lookahead == '_') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_option);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_opt);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_opt);
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_opt);
      if (lookahead == 'i') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_super);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_super);
      if (lookahead == '_') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_super);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_cmd);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_cmd);
      if (lookahead == '_') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_cmd);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_command);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_command);
      if (lookahead == '_') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_command);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_key_token1);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '_') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == '_') ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(90);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(298);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == '_') ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(226);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == '_') ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == '_') ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(88);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == '_') ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(297);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == '_') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(299);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'a') ADVANCE(336);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(386);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'a') ADVANCE(345);
      if (lookahead == 'h') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'a') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'a') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'a') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'a') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'a') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'b') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'b') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'c') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'c') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'c') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'd') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'd') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'd') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'd') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'e') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'e') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'e') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'e') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'e') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'e') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'e') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'e') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'f') ADVANCE(330);
      if (lookahead == 't') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'f') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'g') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'h') ADVANCE(329);
      if (lookahead == 'u') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'h') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'l') ADVANCE(335);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(386);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'l') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'l') ADVANCE(248);
      if (lookahead == 't') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'l') ADVANCE(371);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(385);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'l') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'l') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'l') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'l') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'l') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'l') ADVANCE(317);
      if (lookahead == 'm') ADVANCE(312);
      if (lookahead == 'o') ADVANCE(348);
      if (lookahead == 't') ADVANCE(367);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(90);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(386);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'l') ADVANCE(317);
      if (lookahead == 'm') ADVANCE(312);
      if (lookahead == 'o') ADVANCE(349);
      if (lookahead == 't') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'l') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'l') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'l') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'm') ADVANCE(312);
      if (lookahead == 'o') ADVANCE(349);
      if (lookahead == 't') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'm') ADVANCE(350);
      if (lookahead == 'n') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'm') ADVANCE(350);
      if (lookahead == 'n') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'm') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'm') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'n') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'n') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'n') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'n') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'n') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'p') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'p') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'r') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'r') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'r') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'r') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'r') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 's') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 's') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 's') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 't') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 't') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 't') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 't') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 't') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 't') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'u') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'u') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'y') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'y') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(386);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(229);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(383);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(384);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(385);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 93},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 12},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 12},
  [6] = {.lex_state = 93},
  [7] = {.lex_state = 93},
  [8] = {.lex_state = 12},
  [9] = {.lex_state = 13},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 13},
  [12] = {.lex_state = 93},
  [13] = {.lex_state = 93},
  [14] = {.lex_state = 93},
  [15] = {.lex_state = 93},
  [16] = {.lex_state = 93},
  [17] = {.lex_state = 93},
  [18] = {.lex_state = 93},
  [19] = {.lex_state = 93},
  [20] = {.lex_state = 93},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 93},
  [24] = {.lex_state = 9},
  [25] = {.lex_state = 9},
  [26] = {.lex_state = 93},
  [27] = {.lex_state = 93},
  [28] = {.lex_state = 9},
  [29] = {.lex_state = 12},
  [30] = {.lex_state = 9},
  [31] = {.lex_state = 9},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 12},
  [34] = {.lex_state = 11},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 12},
  [37] = {.lex_state = 11},
  [38] = {.lex_state = 9},
  [39] = {.lex_state = 11},
  [40] = {.lex_state = 11},
  [41] = {.lex_state = 93},
  [42] = {.lex_state = 11},
  [43] = {.lex_state = 12},
  [44] = {.lex_state = 11},
  [45] = {.lex_state = 82},
  [46] = {.lex_state = 93},
  [47] = {.lex_state = 93},
  [48] = {.lex_state = 93},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 93},
  [53] = {.lex_state = 203},
  [54] = {.lex_state = 206},
  [55] = {.lex_state = 92},
  [56] = {.lex_state = 93},
  [57] = {.lex_state = 93},
  [58] = {.lex_state = 93},
  [59] = {.lex_state = 13},
  [60] = {.lex_state = 93},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 13},
  [65] = {.lex_state = 93},
  [66] = {.lex_state = 93},
  [67] = {.lex_state = 13},
  [68] = {.lex_state = 93},
  [69] = {.lex_state = 93},
  [70] = {.lex_state = 93},
  [71] = {.lex_state = 93},
  [72] = {.lex_state = 93},
  [73] = {.lex_state = 92},
  [74] = {.lex_state = 93},
  [75] = {.lex_state = 13},
  [76] = {.lex_state = 93},
  [77] = {.lex_state = 11},
  [78] = {.lex_state = 11},
  [79] = {.lex_state = 13},
  [80] = {.lex_state = 82},
  [81] = {.lex_state = 93},
  [82] = {.lex_state = 93},
  [83] = {.lex_state = 93},
  [84] = {.lex_state = 93},
  [85] = {.lex_state = 93},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym__kebab_case_identifier_token1] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [aux_sym_color_token1] = ACTIONS(1),
    [anon_sym_palette] = ACTIONS(1),
    [aux_sym_palette_value_token1] = ACTIONS(1),
    [anon_sym_EQ2] = ACTIONS(1),
    [anon_sym_config_DASHfile] = ACTIONS(1),
    [anon_sym_keybind] = ACTIONS(1),
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
    [aux_sym_key_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(49),
    [sym_directive] = STATE(6),
    [sym_basic_directive] = STATE(18),
    [sym__kebab_case_identifier] = STATE(64),
    [sym_property] = STATE(67),
    [sym_palette_directive] = STATE(18),
    [sym_config_file_directive] = STATE(18),
    [sym_keybind_directive] = STATE(18),
    [aux_sym_document_repeat1] = STATE(6),
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
    STATE(33), 1,
      sym_chord,
    STATE(60), 1,
      sym_string,
    STATE(70), 1,
      sym_keybind_value,
    STATE(73), 1,
      sym_key_qualifier,
    STATE(74), 1,
      sym_keybind_trigger,
    STATE(3), 2,
      sym_keybind_modifier,
      aux_sym_keybind_value_repeat1,
    STATE(22), 2,
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
    STATE(33), 1,
      sym_chord,
    STATE(47), 1,
      sym_keybind_trigger,
    STATE(73), 1,
      sym_key_qualifier,
    STATE(5), 2,
      sym_keybind_modifier,
      aux_sym_keybind_value_repeat1,
    STATE(22), 2,
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
    STATE(76), 1,
      sym_value,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(47), 2,
      sym_percent_adjustment,
      sym_numeric_adjustment,
    STATE(85), 4,
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
    ACTIONS(9), 1,
      aux_sym__kebab_case_identifier_token1,
    ACTIONS(11), 1,
      anon_sym_palette,
    ACTIONS(13), 1,
      anon_sym_config_DASHfile,
    ACTIONS(15), 1,
      anon_sym_keybind,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    ACTIONS(56), 1,
      aux_sym_document_token1,
    ACTIONS(58), 1,
      sym_comment,
    STATE(64), 1,
      sym__kebab_case_identifier,
    STATE(67), 1,
      sym_property,
    STATE(7), 2,
      sym_directive,
      aux_sym_document_repeat1,
    STATE(18), 4,
      sym_basic_directive,
      sym_palette_directive,
      sym_config_file_directive,
      sym_keybind_directive,
  [207] = 11,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    ACTIONS(62), 1,
      aux_sym_document_token1,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(68), 1,
      aux_sym__kebab_case_identifier_token1,
    ACTIONS(71), 1,
      anon_sym_palette,
    ACTIONS(74), 1,
      anon_sym_config_DASHfile,
    ACTIONS(77), 1,
      anon_sym_keybind,
    STATE(64), 1,
      sym__kebab_case_identifier,
    STATE(67), 1,
      sym_property,
    STATE(7), 2,
      sym_directive,
      aux_sym_document_repeat1,
    STATE(18), 4,
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
    STATE(43), 1,
      sym_chord,
    STATE(73), 1,
      sym_key_qualifier,
    STATE(22), 2,
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
  [291] = 9,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      aux_sym_string_token3,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(45), 1,
      aux_sym_color_token1,
    ACTIONS(82), 1,
      sym_number,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(47), 2,
      sym_percent_adjustment,
      sym_numeric_adjustment,
    STATE(65), 4,
      sym_boolean,
      sym_adjustment,
      sym_string,
      sym_color,
  [324] = 5,
    ACTIONS(29), 1,
      anon_sym_physical,
    ACTIONS(33), 1,
      aux_sym_key_token1,
    STATE(73), 1,
      sym_key_qualifier,
    STATE(28), 2,
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
  [349] = 2,
    ACTIONS(84), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(86), 5,
      sym_comment,
      aux_sym__kebab_case_identifier_token1,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_keybind,
  [361] = 2,
    ACTIONS(88), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(90), 5,
      sym_comment,
      aux_sym__kebab_case_identifier_token1,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_keybind,
  [373] = 2,
    ACTIONS(92), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(94), 5,
      sym_comment,
      aux_sym__kebab_case_identifier_token1,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_keybind,
  [385] = 2,
    ACTIONS(96), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(98), 5,
      sym_comment,
      aux_sym__kebab_case_identifier_token1,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_keybind,
  [397] = 2,
    ACTIONS(100), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(102), 5,
      sym_comment,
      aux_sym__kebab_case_identifier_token1,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_keybind,
  [409] = 2,
    ACTIONS(104), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(106), 5,
      sym_comment,
      aux_sym__kebab_case_identifier_token1,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_keybind,
  [421] = 2,
    ACTIONS(108), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(110), 5,
      sym_comment,
      aux_sym__kebab_case_identifier_token1,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_keybind,
  [433] = 2,
    ACTIONS(112), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(114), 5,
      sym_comment,
      aux_sym__kebab_case_identifier_token1,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_keybind,
  [445] = 2,
    ACTIONS(116), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(118), 5,
      sym_comment,
      aux_sym__kebab_case_identifier_token1,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_keybind,
  [457] = 6,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      aux_sym_string_token3,
    ACTIONS(120), 1,
      aux_sym_document_token1,
    STATE(57), 1,
      sym_string,
    STATE(58), 1,
      sym_path_value,
  [476] = 3,
    ACTIONS(124), 1,
      anon_sym_PLUS,
    STATE(24), 1,
      aux_sym_chord_repeat1,
    ACTIONS(122), 2,
      anon_sym_EQ2,
      anon_sym_GT,
  [487] = 3,
    ACTIONS(128), 1,
      anon_sym__,
    STATE(26), 1,
      aux_sym__snake_case_identifier_repeat1,
    ACTIONS(126), 2,
      aux_sym_document_token1,
      anon_sym_COLON,
  [498] = 3,
    ACTIONS(124), 1,
      anon_sym_PLUS,
    STATE(25), 1,
      aux_sym_chord_repeat1,
    ACTIONS(130), 2,
      anon_sym_EQ2,
      anon_sym_GT,
  [509] = 3,
    ACTIONS(134), 1,
      anon_sym_PLUS,
    STATE(25), 1,
      aux_sym_chord_repeat1,
    ACTIONS(132), 2,
      anon_sym_EQ2,
      anon_sym_GT,
  [520] = 3,
    ACTIONS(128), 1,
      anon_sym__,
    STATE(27), 1,
      aux_sym__snake_case_identifier_repeat1,
    ACTIONS(137), 2,
      aux_sym_document_token1,
      anon_sym_COLON,
  [531] = 3,
    ACTIONS(141), 1,
      anon_sym__,
    STATE(27), 1,
      aux_sym__snake_case_identifier_repeat1,
    ACTIONS(139), 2,
      aux_sym_document_token1,
      anon_sym_COLON,
  [542] = 1,
    ACTIONS(132), 3,
      anon_sym_EQ2,
      anon_sym_GT,
      anon_sym_PLUS,
  [548] = 3,
    ACTIONS(144), 1,
      anon_sym_EQ2,
    ACTIONS(146), 1,
      anon_sym_GT,
    STATE(36), 1,
      aux_sym_keybind_trigger_repeat1,
  [558] = 1,
    ACTIONS(148), 3,
      anon_sym_EQ2,
      anon_sym_GT,
      anon_sym_PLUS,
  [564] = 3,
    ACTIONS(150), 1,
      anon_sym_POUND,
    ACTIONS(152), 1,
      aux_sym_color_token1,
    STATE(68), 1,
      sym_color,
  [574] = 1,
    ACTIONS(154), 3,
      anon_sym_EQ2,
      anon_sym_GT,
      anon_sym_PLUS,
  [580] = 3,
    ACTIONS(146), 1,
      anon_sym_GT,
    ACTIONS(156), 1,
      anon_sym_EQ2,
    STATE(29), 1,
      aux_sym_keybind_trigger_repeat1,
  [590] = 3,
    ACTIONS(158), 1,
      anon_sym_EQ,
    ACTIONS(160), 1,
      anon_sym_DASH,
    STATE(42), 1,
      aux_sym__kebab_case_identifier_repeat1,
  [600] = 3,
    ACTIONS(162), 1,
      aux_sym_document_token1,
    ACTIONS(164), 1,
      aux_sym_palette_value_token1,
    STATE(48), 1,
      sym_palette_value,
  [610] = 3,
    ACTIONS(166), 1,
      anon_sym_EQ2,
    ACTIONS(168), 1,
      anon_sym_GT,
    STATE(36), 1,
      aux_sym_keybind_trigger_repeat1,
  [620] = 3,
    ACTIONS(160), 1,
      anon_sym_DASH,
    ACTIONS(171), 1,
      anon_sym_EQ,
    STATE(34), 1,
      aux_sym__kebab_case_identifier_repeat1,
  [630] = 1,
    ACTIONS(173), 3,
      anon_sym_EQ2,
      anon_sym_GT,
      anon_sym_PLUS,
  [636] = 3,
    ACTIONS(175), 1,
      aux_sym__kebab_case_identifier_token1,
    STATE(46), 1,
      sym__snake_case_identifier,
    STATE(81), 1,
      sym_keybind_action,
  [646] = 3,
    ACTIONS(175), 1,
      aux_sym__kebab_case_identifier_token1,
    STATE(46), 1,
      sym__snake_case_identifier,
    STATE(72), 1,
      sym_keybind_action,
  [656] = 2,
    ACTIONS(177), 1,
      anon_sym__,
    ACTIONS(139), 2,
      aux_sym_document_token1,
      anon_sym_COLON,
  [664] = 3,
    ACTIONS(179), 1,
      anon_sym_EQ,
    ACTIONS(181), 1,
      anon_sym_DASH,
    STATE(42), 1,
      aux_sym__kebab_case_identifier_repeat1,
  [674] = 1,
    ACTIONS(166), 2,
      anon_sym_EQ2,
      anon_sym_GT,
  [679] = 1,
    ACTIONS(179), 2,
      anon_sym_EQ,
      anon_sym_DASH,
  [684] = 2,
    ACTIONS(184), 1,
      aux_sym__raw_value_token1,
    STATE(52), 1,
      sym__raw_value,
  [691] = 2,
    ACTIONS(186), 1,
      aux_sym_document_token1,
    ACTIONS(188), 1,
      anon_sym_COLON,
  [698] = 1,
    ACTIONS(190), 1,
      anon_sym_EQ2,
  [702] = 1,
    ACTIONS(192), 1,
      aux_sym_document_token1,
  [706] = 1,
    ACTIONS(194), 1,
      ts_builtin_sym_end,
  [710] = 1,
    ACTIONS(196), 1,
      anon_sym_DQUOTE,
  [714] = 1,
    ACTIONS(196), 1,
      anon_sym_SQUOTE,
  [718] = 1,
    ACTIONS(198), 1,
      aux_sym_document_token1,
  [722] = 1,
    ACTIONS(200), 1,
      aux_sym_string_token1,
  [726] = 1,
    ACTIONS(202), 1,
      aux_sym_string_token2,
  [730] = 1,
    ACTIONS(204), 1,
      aux_sym_key_token1,
  [734] = 1,
    ACTIONS(206), 1,
      aux_sym_document_token1,
  [738] = 1,
    ACTIONS(208), 1,
      aux_sym_document_token1,
  [742] = 1,
    ACTIONS(210), 1,
      aux_sym_document_token1,
  [746] = 1,
    ACTIONS(212), 1,
      anon_sym_EQ,
  [750] = 1,
    ACTIONS(214), 1,
      aux_sym_document_token1,
  [754] = 1,
    ACTIONS(216), 1,
      anon_sym_COLON,
  [758] = 1,
    ACTIONS(218), 1,
      anon_sym_COLON,
  [762] = 1,
    ACTIONS(220), 1,
      aux_sym_color_token1,
  [766] = 1,
    ACTIONS(222), 1,
      anon_sym_EQ,
  [770] = 1,
    ACTIONS(224), 1,
      aux_sym_document_token1,
  [774] = 1,
    ACTIONS(226), 1,
      aux_sym_document_token1,
  [778] = 1,
    ACTIONS(228), 1,
      anon_sym_EQ,
  [782] = 1,
    ACTIONS(230), 1,
      aux_sym_document_token1,
  [786] = 1,
    ACTIONS(232), 1,
      aux_sym_document_token1,
  [790] = 1,
    ACTIONS(234), 1,
      aux_sym_document_token1,
  [794] = 1,
    ACTIONS(236), 1,
      aux_sym_document_token1,
  [798] = 1,
    ACTIONS(238), 1,
      aux_sym_document_token1,
  [802] = 1,
    ACTIONS(240), 1,
      aux_sym_key_token1,
  [806] = 1,
    ACTIONS(242), 1,
      anon_sym_EQ2,
  [810] = 1,
    ACTIONS(244), 1,
      anon_sym_EQ,
  [814] = 1,
    ACTIONS(246), 1,
      aux_sym_document_token1,
  [818] = 1,
    ACTIONS(248), 1,
      aux_sym__kebab_case_identifier_token1,
  [822] = 1,
    ACTIONS(250), 1,
      aux_sym__kebab_case_identifier_token1,
  [826] = 1,
    ACTIONS(252), 1,
      anon_sym_EQ,
  [830] = 1,
    ACTIONS(254), 1,
      aux_sym__raw_value_token1,
  [834] = 1,
    ACTIONS(256), 1,
      aux_sym_document_token1,
  [838] = 1,
    ACTIONS(258), 1,
      anon_sym_EQ2,
  [842] = 1,
    ACTIONS(260), 1,
      aux_sym_document_token1,
  [846] = 1,
    ACTIONS(262), 1,
      aux_sym_document_token1,
  [850] = 1,
    ACTIONS(264), 1,
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
  [SMALL_STATE(11)] = 324,
  [SMALL_STATE(12)] = 349,
  [SMALL_STATE(13)] = 361,
  [SMALL_STATE(14)] = 373,
  [SMALL_STATE(15)] = 385,
  [SMALL_STATE(16)] = 397,
  [SMALL_STATE(17)] = 409,
  [SMALL_STATE(18)] = 421,
  [SMALL_STATE(19)] = 433,
  [SMALL_STATE(20)] = 445,
  [SMALL_STATE(21)] = 457,
  [SMALL_STATE(22)] = 476,
  [SMALL_STATE(23)] = 487,
  [SMALL_STATE(24)] = 498,
  [SMALL_STATE(25)] = 509,
  [SMALL_STATE(26)] = 520,
  [SMALL_STATE(27)] = 531,
  [SMALL_STATE(28)] = 542,
  [SMALL_STATE(29)] = 548,
  [SMALL_STATE(30)] = 558,
  [SMALL_STATE(31)] = 564,
  [SMALL_STATE(32)] = 574,
  [SMALL_STATE(33)] = 580,
  [SMALL_STATE(34)] = 590,
  [SMALL_STATE(35)] = 600,
  [SMALL_STATE(36)] = 610,
  [SMALL_STATE(37)] = 620,
  [SMALL_STATE(38)] = 630,
  [SMALL_STATE(39)] = 636,
  [SMALL_STATE(40)] = 646,
  [SMALL_STATE(41)] = 656,
  [SMALL_STATE(42)] = 664,
  [SMALL_STATE(43)] = 674,
  [SMALL_STATE(44)] = 679,
  [SMALL_STATE(45)] = 684,
  [SMALL_STATE(46)] = 691,
  [SMALL_STATE(47)] = 698,
  [SMALL_STATE(48)] = 702,
  [SMALL_STATE(49)] = 706,
  [SMALL_STATE(50)] = 710,
  [SMALL_STATE(51)] = 714,
  [SMALL_STATE(52)] = 718,
  [SMALL_STATE(53)] = 722,
  [SMALL_STATE(54)] = 726,
  [SMALL_STATE(55)] = 730,
  [SMALL_STATE(56)] = 734,
  [SMALL_STATE(57)] = 738,
  [SMALL_STATE(58)] = 742,
  [SMALL_STATE(59)] = 746,
  [SMALL_STATE(60)] = 750,
  [SMALL_STATE(61)] = 754,
  [SMALL_STATE(62)] = 758,
  [SMALL_STATE(63)] = 762,
  [SMALL_STATE(64)] = 766,
  [SMALL_STATE(65)] = 770,
  [SMALL_STATE(66)] = 774,
  [SMALL_STATE(67)] = 778,
  [SMALL_STATE(68)] = 782,
  [SMALL_STATE(69)] = 786,
  [SMALL_STATE(70)] = 790,
  [SMALL_STATE(71)] = 794,
  [SMALL_STATE(72)] = 798,
  [SMALL_STATE(73)] = 802,
  [SMALL_STATE(74)] = 806,
  [SMALL_STATE(75)] = 810,
  [SMALL_STATE(76)] = 814,
  [SMALL_STATE(77)] = 818,
  [SMALL_STATE(78)] = 822,
  [SMALL_STATE(79)] = 826,
  [SMALL_STATE(80)] = 830,
  [SMALL_STATE(81)] = 834,
  [SMALL_STATE(82)] = 838,
  [SMALL_STATE(83)] = 842,
  [SMALL_STATE(84)] = 846,
  [SMALL_STATE(85)] = 850,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keybind_value_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keybind_value_repeat1, 2, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(79),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keybind_modifier, 2, 0, 3),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file_directive, 3, 0, 1),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_config_file_directive, 3, 0, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_directive, 3, 0, 1),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_directive, 3, 0, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_palette_directive, 3, 0, 1),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_palette_directive, 3, 0, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_directive, 3, 0, 1),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keybind_directive, 3, 0, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_palette_directive, 4, 0, 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_palette_directive, 4, 0, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file_directive, 4, 0, 2),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_config_file_directive, 4, 0, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_directive, 4, 0, 2),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keybind_directive, 4, 0, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_directive, 4, 0, 2),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_directive, 4, 0, 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord, 1, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__snake_case_identifier, 1, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord, 2, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_chord_repeat1, 2, 0, 0),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chord_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__snake_case_identifier, 2, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__snake_case_identifier_repeat1, 2, 0, 0),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__snake_case_identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_trigger, 2, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier_key, 1, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_trigger, 1, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__kebab_case_identifier, 2, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keybind_trigger_repeat1, 2, 0, 0),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keybind_trigger_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__kebab_case_identifier, 1, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 2, 0, 4),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__snake_case_identifier_repeat1, 2, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__kebab_case_identifier_repeat1, 2, 0, 0),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__kebab_case_identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_action, 1, 0, 5),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [194] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_qualifier, 2, 0, 4),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 1, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_value, 1, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_value, 1, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 1, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 2, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_palette_value, 3, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adjustment, 1, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_value, 3, 0, 6),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_value, 4, 0, 7),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_action, 3, 0, 8),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
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
