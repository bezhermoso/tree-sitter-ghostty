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
#define STATE_COUNT 74
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 73
#define ALIAS_COUNT 1
#define TOKEN_COUNT 46
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 9

enum ts_symbol_identifiers {
  aux_sym_document_token1 = 1,
  sym_comment = 2,
  anon_sym_EQ = 3,
  sym__kebab_case_identifier = 4,
  sym__snake_case_identifier = 5,
  aux_sym_value_token1 = 6,
  anon_sym_true = 7,
  anon_sym_false = 8,
  sym_number = 9,
  anon_sym_DQUOTE = 10,
  aux_sym_string_token1 = 11,
  anon_sym_SQUOTE = 12,
  aux_sym_string_token2 = 13,
  aux_sym_string_token3 = 14,
  anon_sym_POUND = 15,
  aux_sym_color_token1 = 16,
  sym_percent_adjustment = 17,
  sym_numeric_adjustment = 18,
  aux_sym__raw_value_token1 = 19,
  anon_sym_palette = 20,
  aux_sym_palette_value_token1 = 21,
  anon_sym_EQ2 = 22,
  aux_sym_palette_value_token2 = 23,
  anon_sym_config_DASHfile = 24,
  anon_sym_keybind = 25,
  aux_sym_keybind_directive_token1 = 26,
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
  sym_document = 46,
  sym_directive = 47,
  sym_basic_directive = 48,
  sym_property = 49,
  sym_value = 50,
  sym_boolean = 51,
  sym_adjustment = 52,
  sym_string = 53,
  sym_color = 54,
  sym__raw_value = 55,
  sym_palette_directive = 56,
  sym_palette_value = 57,
  sym_config_file_directive = 58,
  sym_path_value = 59,
  sym_keybind_directive = 60,
  sym_keybind_value = 61,
  sym_keybind_modifier = 62,
  sym_key_qualifier = 63,
  sym_keybind_trigger = 64,
  sym_chord = 65,
  sym_modifier_key = 66,
  sym_key = 67,
  sym_keybind_action = 68,
  aux_sym_document_repeat1 = 69,
  aux_sym_keybind_value_repeat1 = 70,
  aux_sym_keybind_trigger_repeat1 = 71,
  aux_sym_chord_repeat1 = 72,
  alias_sym_action_argument = 73,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_document_token1] = "document_token1",
  [sym_comment] = "comment",
  [anon_sym_EQ] = "=",
  [sym__kebab_case_identifier] = "_kebab_case_identifier",
  [sym__snake_case_identifier] = "action_name",
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
  [aux_sym_palette_value_token2] = "color",
  [anon_sym_config_DASHfile] = "property",
  [anon_sym_keybind] = "property",
  [aux_sym_keybind_directive_token1] = "keybind_directive_token1",
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
  [sym__kebab_case_identifier] = sym__kebab_case_identifier,
  [sym__snake_case_identifier] = sym__snake_case_identifier,
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
  [aux_sym_palette_value_token2] = sym_color,
  [anon_sym_config_DASHfile] = sym_property,
  [anon_sym_keybind] = sym_property,
  [aux_sym_keybind_directive_token1] = aux_sym_keybind_directive_token1,
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
  [sym__kebab_case_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym__snake_case_identifier] = {
    .visible = true,
    .named = true,
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
  [aux_sym_palette_value_token2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_config_DASHfile] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_keybind] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_keybind_directive_token1] = {
    .visible = false,
    .named = false,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(43);
      ADVANCE_MAP(
        '"', 180,
        '#', 194,
        '\'', 183,
        '+', 230,
        ':', 226,
        '=', 210,
        '>', 229,
        '_', 156,
        'a', 81,
        'c', 91,
        'f', 48,
        'g', 93,
        'k', 65,
        'l', 103,
        'o', 108,
        'p', 49,
        's', 76,
        't', 110,
        'u', 100,
        'b', 130,
        'd', 130,
        'e', 130,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(42);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (('h' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == 'c') ADVANCE(148);
      if (lookahead == 'k') ADVANCE(136);
      if (lookahead == 'p') ADVANCE(132);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(46);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(46);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '\n', 45,
        '\r', 161,
        '"', 180,
        '#', 194,
        '\'', 183,
        'f', 189,
        't', 191,
        '+', 192,
        '-', 192,
        '\t', 161,
        0x0b, 161,
        '\f', 161,
        ' ', 161,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(193);
      if (lookahead != 0) ADVANCE(186);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(180);
      if (lookahead == '#') ADVANCE(194);
      if (lookahead == '\'') ADVANCE(183);
      if (lookahead == 'f') ADVANCE(189);
      if (lookahead == 't') ADVANCE(191);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(192);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(193);
      if (lookahead != 0) ADVANCE(186);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '"', 180,
        '#', 249,
        '\'', 183,
        'a', 270,
        'c', 271,
        'g', 278,
        'l', 288,
        'o', 293,
        'p', 266,
        's', 267,
        'u', 286,
        ':', 186,
        '=', 186,
        '>', 186,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      if (lookahead != 0) ADVANCE(249);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(180);
      if (lookahead == '\'') ADVANCE(183);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(186);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '=') ADVANCE(47);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      END_STATE();
    case 9:
      if (lookahead == '+') ADVANCE(230);
      if (lookahead == '=') ADVANCE(210);
      if (lookahead == '>') ADVANCE(229);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 10:
      if (lookahead == '+') ADVANCE(230);
      if (lookahead == '>') ADVANCE(229);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(47);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(215);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        'a', 270,
        'c', 280,
        'g', 278,
        'l', 288,
        'o', 293,
        'p', 266,
        's', 267,
        'u', 286,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      if (lookahead != 0 &&
          (lookahead < '0' || ':' < lookahead) &&
          lookahead != '=' &&
          lookahead != '>') ADVANCE(249);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(279);
      if (lookahead == 'c') ADVANCE(280);
      if (lookahead == 'o') ADVANCE(293);
      if (lookahead == 'p') ADVANCE(266);
      if (lookahead == 's') ADVANCE(267);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      if (lookahead != 0 &&
          (lookahead < '0' || ':' < lookahead) &&
          lookahead != '=' &&
          lookahead != '>') ADVANCE(249);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 17:
      if (lookahead == 'f') ADVANCE(141);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(30);
      END_STATE();
    case 20:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 21:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 22:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(22);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(203);
      if (lookahead != 0) ADVANCE(204);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(195);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(211);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(28);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(30);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(32);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      END_STATE();
    case 37:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      if (lookahead != 0 &&
          (lookahead < '0' || ':' < lookahead) &&
          lookahead != '=' &&
          lookahead != '>') ADVANCE(249);
      END_STATE();
    case 40:
      if (eof) ADVANCE(43);
      ADVANCE_MAP(
        '\n', 44,
        '\r', 1,
        '#', 3,
        ':', 226,
        '=', 210,
        'c', 148,
        'k', 136,
        'p', 132,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 41:
      if (eof) ADVANCE(43);
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == 'c') ADVANCE(148);
      if (lookahead == 'k') ADVANCE(136);
      if (lookahead == 'p') ADVANCE(132);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 42:
      if (eof) ADVANCE(43);
      ADVANCE_MAP(
        '"', 180,
        '#', 194,
        '\'', 183,
        '+', 230,
        '=', 47,
        '>', 229,
        '_', 156,
        'a', 82,
        'c', 92,
        'f', 52,
        'g', 93,
        'k', 65,
        'l', 103,
        'o', 108,
        'p', 49,
        's', 76,
        't', 110,
        'u', 100,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n') ADVANCE(45);
      if (lookahead == '\r') ADVANCE(161);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(192);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'a') ADVANCE(84);
      if (('b' <= lookahead && lookahead <= 'f')) ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'a') ADVANCE(94);
      if (lookahead == 'h') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'a') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'a') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'a') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'a') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'a') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'a') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'b') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'b') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'c') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'c') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'c') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'd') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'd') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'd') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'd') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'e') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'e') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'e') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'e') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'e') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'e') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'e') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'e') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'f') ADVANCE(78);
      if (lookahead == 't') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'f') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'g') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'h') ADVANCE(77);
      if (lookahead == 'u') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'i') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'i') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'i') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'i') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'l') ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(32);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'l') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'l') ADVANCE(218);
      if (lookahead == 't') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'l') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(30);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'l') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'l') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'l') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'l') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'l') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'l') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'l') ADVANCE(70);
      if (lookahead == 'm') ADVANCE(61);
      if (lookahead == 'o') ADVANCE(95);
      if (lookahead == 't') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(32);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'l') ADVANCE(70);
      if (lookahead == 'm') ADVANCE(61);
      if (lookahead == 'o') ADVANCE(95);
      if (lookahead == 't') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'l') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'l') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'm') ADVANCE(96);
      if (lookahead == 'n') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'm') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'm') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'n') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'n') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'n') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'n') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'n') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'o') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'o') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'o') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'o') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'o') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'p') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'p') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'r') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'r') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'r') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'r') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'r') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 's') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 's') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 's') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 't') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 't') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 't') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 't') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'u') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'u') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'y') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'y') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(195);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(26);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(28);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(30);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(32);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == 'a') ADVANCE(145);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == 'b') ADVANCE(143);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == 'd') ADVANCE(214);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == 'e') ADVANCE(212);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == 'e') ADVANCE(151);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == 'e') ADVANCE(149);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == 'e') ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == 'f') ADVANCE(142);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == 'g') ADVANCE(154);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == 'i') ADVANCE(144);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == 'i') ADVANCE(140);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == 'i') ADVANCE(147);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == 'l') ADVANCE(135);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == 'l') ADVANCE(137);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == 'n') ADVANCE(139);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == 'n') ADVANCE(134);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == 'o') ADVANCE(146);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == 't') ADVANCE(150);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == 't') ADVANCE(138);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == 'y') ADVANCE(133);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '_') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(17);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(195);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(28);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(30);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == '\n') ADVANCE(45);
      if (lookahead == '\r') ADVANCE(161);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(192);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(200);
      if (lookahead == '.') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(200);
      if (lookahead == '.') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(195);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(200);
      if (lookahead == '.') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(28);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(200);
      if (lookahead == '.') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(200);
      if (lookahead == '.') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(30);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(200);
      if (lookahead == '.') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(32);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(195);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(28);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(30);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(32);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(182);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(185);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(185);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_string_token3);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '"') ADVANCE(180);
      if (lookahead == '\'') ADVANCE(183);
      if (lookahead == 'f') ADVANCE(190);
      if (lookahead == 't') ADVANCE(191);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(192);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(186);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '"') ADVANCE(180);
      if (lookahead == '\'') ADVANCE(183);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(186);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'a') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(32);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(32);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_color_token1);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (lookahead == '%') ADVANCE(200);
      if (lookahead == '.') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (lookahead == '.') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_percent_adjustment);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_numeric_adjustment);
      if (lookahead == '%') ADVANCE(200);
      if (lookahead == '.') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_numeric_adjustment);
      if (lookahead == '%') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(203);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(204);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_palette);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_palette);
      if (lookahead == '-') ADVANCE(37);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_palette_value_token1);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_palette_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_palette_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_palette_value_token2);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_config_DASHfile);
      if (lookahead == '-') ADVANCE(37);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_keybind);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_keybind);
      if (lookahead == '-') ADVANCE(37);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_keybind_directive_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(215);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_clear);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_clear);
      if (lookahead == '_') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_all);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_all);
      if (lookahead == '_') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_global);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_global);
      if (lookahead == '_') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_local);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_local);
      if (lookahead == '_') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_unconsumed);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_unconsumed);
      if (lookahead == '_') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_physical);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_physical);
      if (lookahead == '_') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_shift);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_shift);
      if (lookahead == '_') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_ctrl);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_ctrl);
      if (lookahead == '_') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_control);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_control);
      if (lookahead == '_') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_alt);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_alt);
      if (lookahead == '_') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_option);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_option);
      if (lookahead == '_') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_opt);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'i') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_opt);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'i') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_super);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_super);
      if (lookahead == '_') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_cmd);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_cmd);
      if (lookahead == '_') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_command);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '_') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_command);
      if (lookahead == '_') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_key_token1);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'a') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'a') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'a') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'a') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'a') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'b') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'c') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'c') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'c') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'd') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'd') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'd') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'e') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'e') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'e') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'f') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'h') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'h') ADVANCE(268);
      if (lookahead == 'u') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'i') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'i') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'l') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'l') ADVANCE(262);
      if (lookahead == 'm') ADVANCE(259);
      if (lookahead == 'o') ADVANCE(281);
      if (lookahead == 't') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'l') ADVANCE(219);
      if (lookahead == 't') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'l') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'l') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'l') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'l') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'l') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'l') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'l') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'm') ADVANCE(259);
      if (lookahead == 'o') ADVANCE(281);
      if (lookahead == 't') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'm') ADVANCE(283);
      if (lookahead == 'n') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'm') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'm') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'n') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'n') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'n') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'n') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'o') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'o') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'o') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'o') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'o') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'p') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'p') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'r') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'r') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'r') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'r') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 's') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 's') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 't') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 't') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 't') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 't') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'u') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'y') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 40},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 13},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 13},
  [6] = {.lex_state = 14},
  [7] = {.lex_state = 13},
  [8] = {.lex_state = 40},
  [9] = {.lex_state = 40},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 14},
  [12] = {.lex_state = 40},
  [13] = {.lex_state = 40},
  [14] = {.lex_state = 40},
  [15] = {.lex_state = 40},
  [16] = {.lex_state = 40},
  [17] = {.lex_state = 40},
  [18] = {.lex_state = 40},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 9},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 9},
  [25] = {.lex_state = 40},
  [26] = {.lex_state = 9},
  [27] = {.lex_state = 9},
  [28] = {.lex_state = 9},
  [29] = {.lex_state = 9},
  [30] = {.lex_state = 9},
  [31] = {.lex_state = 9},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 22},
  [34] = {.lex_state = 9},
  [35] = {.lex_state = 40},
  [36] = {.lex_state = 40},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 40},
  [39] = {.lex_state = 40},
  [40] = {.lex_state = 40},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 40},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 40},
  [46] = {.lex_state = 181},
  [47] = {.lex_state = 184},
  [48] = {.lex_state = 39},
  [49] = {.lex_state = 8},
  [50] = {.lex_state = 40},
  [51] = {.lex_state = 40},
  [52] = {.lex_state = 8},
  [53] = {.lex_state = 40},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 40},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 40},
  [59] = {.lex_state = 40},
  [60] = {.lex_state = 12},
  [61] = {.lex_state = 40},
  [62] = {.lex_state = 40},
  [63] = {.lex_state = 40},
  [64] = {.lex_state = 40},
  [65] = {.lex_state = 40},
  [66] = {.lex_state = 8},
  [67] = {.lex_state = 39},
  [68] = {.lex_state = 40},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 22},
  [71] = {.lex_state = 40},
  [72] = {.lex_state = 40},
  [73] = {.lex_state = 40},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym__kebab_case_identifier] = ACTIONS(1),
    [sym__snake_case_identifier] = ACTIONS(1),
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
  },
  [1] = {
    [sym_document] = STATE(69),
    [sym_directive] = STATE(9),
    [sym_basic_directive] = STATE(12),
    [sym_property] = STATE(52),
    [sym_palette_directive] = STATE(12),
    [sym_config_file_directive] = STATE(12),
    [sym_keybind_directive] = STATE(12),
    [aux_sym_document_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_document_token1] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [sym__kebab_case_identifier] = ACTIONS(9),
    [anon_sym_palette] = ACTIONS(11),
    [anon_sym_config_DASHfile] = ACTIONS(13),
    [anon_sym_keybind] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      aux_sym_string_token3,
    ACTIONS(23), 1,
      anon_sym_clear,
    ACTIONS(27), 1,
      anon_sym_physical,
    ACTIONS(31), 1,
      aux_sym_key_token1,
    STATE(26), 1,
      sym_chord,
    STATE(36), 1,
      sym_keybind_value,
    STATE(53), 1,
      sym_string,
    STATE(67), 1,
      sym_key_qualifier,
    STATE(68), 1,
      sym_keybind_trigger,
    STATE(3), 2,
      sym_keybind_modifier,
      aux_sym_keybind_value_repeat1,
    STATE(20), 2,
      sym_modifier_key,
      sym_key,
    ACTIONS(25), 4,
      anon_sym_all,
      anon_sym_global,
      anon_sym_local,
      anon_sym_unconsumed,
    ACTIONS(29), 9,
      anon_sym_shift,
      anon_sym_ctrl,
      anon_sym_control,
      anon_sym_alt,
      anon_sym_option,
      anon_sym_opt,
      anon_sym_super,
      anon_sym_cmd,
      anon_sym_command,
  [59] = 9,
    ACTIONS(27), 1,
      anon_sym_physical,
    ACTIONS(31), 1,
      aux_sym_key_token1,
    STATE(26), 1,
      sym_chord,
    STATE(56), 1,
      sym_keybind_trigger,
    STATE(67), 1,
      sym_key_qualifier,
    STATE(5), 2,
      sym_keybind_modifier,
      aux_sym_keybind_value_repeat1,
    STATE(20), 2,
      sym_modifier_key,
      sym_key,
    ACTIONS(25), 4,
      anon_sym_all,
      anon_sym_global,
      anon_sym_local,
      anon_sym_unconsumed,
    ACTIONS(29), 9,
      anon_sym_shift,
      anon_sym_ctrl,
      anon_sym_control,
      anon_sym_alt,
      anon_sym_option,
      anon_sym_opt,
      anon_sym_super,
      anon_sym_cmd,
      anon_sym_command,
  [100] = 12,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      aux_sym_string_token3,
    ACTIONS(33), 1,
      aux_sym_document_token1,
    ACTIONS(35), 1,
      aux_sym_value_token1,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(41), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      aux_sym_color_token1,
    STATE(40), 1,
      sym_value,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      sym_percent_adjustment,
      sym_numeric_adjustment,
    STATE(65), 4,
      sym_boolean,
      sym_adjustment,
      sym_string,
      sym_color,
  [142] = 3,
    STATE(5), 2,
      sym_keybind_modifier,
      aux_sym_keybind_value_repeat1,
    ACTIONS(47), 4,
      anon_sym_all,
      anon_sym_global,
      anon_sym_local,
      anon_sym_unconsumed,
    ACTIONS(50), 11,
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
  [166] = 6,
    ACTIONS(27), 1,
      anon_sym_physical,
    ACTIONS(31), 1,
      aux_sym_key_token1,
    STATE(32), 1,
      sym_chord,
    STATE(67), 1,
      sym_key_qualifier,
    STATE(20), 2,
      sym_modifier_key,
      sym_key,
    ACTIONS(29), 9,
      anon_sym_shift,
      anon_sym_ctrl,
      anon_sym_control,
      anon_sym_alt,
      anon_sym_option,
      anon_sym_opt,
      anon_sym_super,
      anon_sym_cmd,
      anon_sym_command,
  [194] = 1,
    ACTIONS(52), 15,
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
  [212] = 10,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    ACTIONS(56), 1,
      aux_sym_document_token1,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(62), 1,
      sym__kebab_case_identifier,
    ACTIONS(65), 1,
      anon_sym_palette,
    ACTIONS(68), 1,
      anon_sym_config_DASHfile,
    ACTIONS(71), 1,
      anon_sym_keybind,
    STATE(52), 1,
      sym_property,
    STATE(8), 2,
      sym_directive,
      aux_sym_document_repeat1,
    STATE(12), 4,
      sym_basic_directive,
      sym_palette_directive,
      sym_config_file_directive,
      sym_keybind_directive,
  [247] = 10,
    ACTIONS(9), 1,
      sym__kebab_case_identifier,
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
    STATE(52), 1,
      sym_property,
    STATE(8), 2,
      sym_directive,
      aux_sym_document_repeat1,
    STATE(12), 4,
      sym_basic_directive,
      sym_palette_directive,
      sym_config_file_directive,
      sym_keybind_directive,
  [282] = 9,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      aux_sym_string_token3,
    ACTIONS(41), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      aux_sym_color_token1,
    ACTIONS(80), 1,
      sym_number,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      sym_percent_adjustment,
      sym_numeric_adjustment,
    STATE(58), 4,
      sym_boolean,
      sym_adjustment,
      sym_string,
      sym_color,
  [315] = 5,
    ACTIONS(27), 1,
      anon_sym_physical,
    ACTIONS(31), 1,
      aux_sym_key_token1,
    STATE(67), 1,
      sym_key_qualifier,
    STATE(30), 2,
      sym_modifier_key,
      sym_key,
    ACTIONS(29), 9,
      anon_sym_shift,
      anon_sym_ctrl,
      anon_sym_control,
      anon_sym_alt,
      anon_sym_option,
      anon_sym_opt,
      anon_sym_super,
      anon_sym_cmd,
      anon_sym_command,
  [340] = 2,
    ACTIONS(82), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(84), 5,
      sym_comment,
      sym__kebab_case_identifier,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_keybind,
  [352] = 2,
    ACTIONS(86), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(88), 5,
      sym_comment,
      sym__kebab_case_identifier,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_keybind,
  [364] = 2,
    ACTIONS(90), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(92), 5,
      sym_comment,
      sym__kebab_case_identifier,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_keybind,
  [376] = 2,
    ACTIONS(94), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(96), 5,
      sym_comment,
      sym__kebab_case_identifier,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_keybind,
  [388] = 2,
    ACTIONS(98), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(100), 5,
      sym_comment,
      sym__kebab_case_identifier,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_keybind,
  [400] = 2,
    ACTIONS(102), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(104), 5,
      sym_comment,
      sym__kebab_case_identifier,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_keybind,
  [412] = 2,
    ACTIONS(106), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(108), 5,
      sym_comment,
      sym__kebab_case_identifier,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_keybind,
  [424] = 5,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      aux_sym_string_token3,
    STATE(50), 1,
      sym_string,
    STATE(73), 1,
      sym_path_value,
  [440] = 3,
    ACTIONS(112), 1,
      anon_sym_PLUS,
    STATE(21), 1,
      aux_sym_chord_repeat1,
    ACTIONS(110), 2,
      anon_sym_EQ2,
      anon_sym_GT,
  [451] = 3,
    ACTIONS(112), 1,
      anon_sym_PLUS,
    STATE(22), 1,
      aux_sym_chord_repeat1,
    ACTIONS(114), 2,
      anon_sym_EQ2,
      anon_sym_GT,
  [462] = 3,
    ACTIONS(118), 1,
      anon_sym_PLUS,
    STATE(22), 1,
      aux_sym_chord_repeat1,
    ACTIONS(116), 2,
      anon_sym_EQ2,
      anon_sym_GT,
  [473] = 1,
    ACTIONS(121), 3,
      anon_sym_EQ2,
      anon_sym_GT,
      anon_sym_PLUS,
  [479] = 1,
    ACTIONS(123), 3,
      anon_sym_EQ2,
      anon_sym_GT,
      anon_sym_PLUS,
  [485] = 3,
    ACTIONS(125), 1,
      aux_sym_document_token1,
    ACTIONS(127), 1,
      aux_sym_palette_value_token1,
    STATE(42), 1,
      sym_palette_value,
  [495] = 3,
    ACTIONS(129), 1,
      anon_sym_EQ2,
    ACTIONS(131), 1,
      anon_sym_GT,
    STATE(27), 1,
      aux_sym_keybind_trigger_repeat1,
  [505] = 3,
    ACTIONS(131), 1,
      anon_sym_GT,
    ACTIONS(133), 1,
      anon_sym_EQ2,
    STATE(29), 1,
      aux_sym_keybind_trigger_repeat1,
  [515] = 1,
    ACTIONS(135), 3,
      anon_sym_EQ2,
      anon_sym_GT,
      anon_sym_PLUS,
  [521] = 3,
    ACTIONS(137), 1,
      anon_sym_EQ2,
    ACTIONS(139), 1,
      anon_sym_GT,
    STATE(29), 1,
      aux_sym_keybind_trigger_repeat1,
  [531] = 1,
    ACTIONS(116), 3,
      anon_sym_EQ2,
      anon_sym_GT,
      anon_sym_PLUS,
  [537] = 2,
    ACTIONS(142), 1,
      sym__snake_case_identifier,
    STATE(71), 1,
      sym_keybind_action,
  [544] = 1,
    ACTIONS(137), 2,
      anon_sym_EQ2,
      anon_sym_GT,
  [549] = 2,
    ACTIONS(144), 1,
      aux_sym__raw_value_token1,
    STATE(45), 1,
      sym__raw_value,
  [556] = 2,
    ACTIONS(142), 1,
      sym__snake_case_identifier,
    STATE(64), 1,
      sym_keybind_action,
  [563] = 2,
    ACTIONS(146), 1,
      aux_sym_document_token1,
    ACTIONS(148), 1,
      anon_sym_COLON,
  [570] = 1,
    ACTIONS(150), 1,
      aux_sym_document_token1,
  [574] = 1,
    ACTIONS(152), 1,
      aux_sym_color_token1,
  [578] = 1,
    ACTIONS(154), 1,
      aux_sym_document_token1,
  [582] = 1,
    ACTIONS(156), 1,
      aux_sym_document_token1,
  [586] = 1,
    ACTIONS(158), 1,
      aux_sym_document_token1,
  [590] = 1,
    ACTIONS(160), 1,
      aux_sym_palette_value_token2,
  [594] = 1,
    ACTIONS(162), 1,
      aux_sym_document_token1,
  [598] = 1,
    ACTIONS(164), 1,
      anon_sym_DQUOTE,
  [602] = 1,
    ACTIONS(164), 1,
      anon_sym_SQUOTE,
  [606] = 1,
    ACTIONS(166), 1,
      aux_sym_document_token1,
  [610] = 1,
    ACTIONS(168), 1,
      aux_sym_string_token1,
  [614] = 1,
    ACTIONS(170), 1,
      aux_sym_string_token2,
  [618] = 1,
    ACTIONS(172), 1,
      aux_sym_key_token1,
  [622] = 1,
    ACTIONS(174), 1,
      anon_sym_EQ,
  [626] = 1,
    ACTIONS(176), 1,
      aux_sym_document_token1,
  [630] = 1,
    ACTIONS(178), 1,
      anon_sym_EQ2,
  [634] = 1,
    ACTIONS(180), 1,
      anon_sym_EQ,
  [638] = 1,
    ACTIONS(182), 1,
      aux_sym_document_token1,
  [642] = 1,
    ACTIONS(184), 1,
      anon_sym_COLON,
  [646] = 1,
    ACTIONS(186), 1,
      anon_sym_COLON,
  [650] = 1,
    ACTIONS(188), 1,
      anon_sym_EQ2,
  [654] = 1,
    ACTIONS(190), 1,
      anon_sym_EQ,
  [658] = 1,
    ACTIONS(192), 1,
      aux_sym_document_token1,
  [662] = 1,
    ACTIONS(194), 1,
      aux_sym_document_token1,
  [666] = 1,
    ACTIONS(196), 1,
      aux_sym_keybind_directive_token1,
  [670] = 1,
    ACTIONS(198), 1,
      aux_sym_document_token1,
  [674] = 1,
    ACTIONS(200), 1,
      aux_sym_document_token1,
  [678] = 1,
    ACTIONS(202), 1,
      aux_sym_document_token1,
  [682] = 1,
    ACTIONS(204), 1,
      aux_sym_document_token1,
  [686] = 1,
    ACTIONS(206), 1,
      aux_sym_document_token1,
  [690] = 1,
    ACTIONS(208), 1,
      anon_sym_EQ,
  [694] = 1,
    ACTIONS(210), 1,
      aux_sym_key_token1,
  [698] = 1,
    ACTIONS(212), 1,
      anon_sym_EQ2,
  [702] = 1,
    ACTIONS(214), 1,
      ts_builtin_sym_end,
  [706] = 1,
    ACTIONS(216), 1,
      aux_sym__raw_value_token1,
  [710] = 1,
    ACTIONS(218), 1,
      aux_sym_document_token1,
  [714] = 1,
    ACTIONS(220), 1,
      aux_sym_document_token1,
  [718] = 1,
    ACTIONS(222), 1,
      aux_sym_document_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 59,
  [SMALL_STATE(4)] = 100,
  [SMALL_STATE(5)] = 142,
  [SMALL_STATE(6)] = 166,
  [SMALL_STATE(7)] = 194,
  [SMALL_STATE(8)] = 212,
  [SMALL_STATE(9)] = 247,
  [SMALL_STATE(10)] = 282,
  [SMALL_STATE(11)] = 315,
  [SMALL_STATE(12)] = 340,
  [SMALL_STATE(13)] = 352,
  [SMALL_STATE(14)] = 364,
  [SMALL_STATE(15)] = 376,
  [SMALL_STATE(16)] = 388,
  [SMALL_STATE(17)] = 400,
  [SMALL_STATE(18)] = 412,
  [SMALL_STATE(19)] = 424,
  [SMALL_STATE(20)] = 440,
  [SMALL_STATE(21)] = 451,
  [SMALL_STATE(22)] = 462,
  [SMALL_STATE(23)] = 473,
  [SMALL_STATE(24)] = 479,
  [SMALL_STATE(25)] = 485,
  [SMALL_STATE(26)] = 495,
  [SMALL_STATE(27)] = 505,
  [SMALL_STATE(28)] = 515,
  [SMALL_STATE(29)] = 521,
  [SMALL_STATE(30)] = 531,
  [SMALL_STATE(31)] = 537,
  [SMALL_STATE(32)] = 544,
  [SMALL_STATE(33)] = 549,
  [SMALL_STATE(34)] = 556,
  [SMALL_STATE(35)] = 563,
  [SMALL_STATE(36)] = 570,
  [SMALL_STATE(37)] = 574,
  [SMALL_STATE(38)] = 578,
  [SMALL_STATE(39)] = 582,
  [SMALL_STATE(40)] = 586,
  [SMALL_STATE(41)] = 590,
  [SMALL_STATE(42)] = 594,
  [SMALL_STATE(43)] = 598,
  [SMALL_STATE(44)] = 602,
  [SMALL_STATE(45)] = 606,
  [SMALL_STATE(46)] = 610,
  [SMALL_STATE(47)] = 614,
  [SMALL_STATE(48)] = 618,
  [SMALL_STATE(49)] = 622,
  [SMALL_STATE(50)] = 626,
  [SMALL_STATE(51)] = 630,
  [SMALL_STATE(52)] = 634,
  [SMALL_STATE(53)] = 638,
  [SMALL_STATE(54)] = 642,
  [SMALL_STATE(55)] = 646,
  [SMALL_STATE(56)] = 650,
  [SMALL_STATE(57)] = 654,
  [SMALL_STATE(58)] = 658,
  [SMALL_STATE(59)] = 662,
  [SMALL_STATE(60)] = 666,
  [SMALL_STATE(61)] = 670,
  [SMALL_STATE(62)] = 674,
  [SMALL_STATE(63)] = 678,
  [SMALL_STATE(64)] = 682,
  [SMALL_STATE(65)] = 686,
  [SMALL_STATE(66)] = 690,
  [SMALL_STATE(67)] = 694,
  [SMALL_STATE(68)] = 698,
  [SMALL_STATE(69)] = 702,
  [SMALL_STATE(70)] = 706,
  [SMALL_STATE(71)] = 710,
  [SMALL_STATE(72)] = 714,
  [SMALL_STATE(73)] = 718,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keybind_value_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keybind_value_repeat1, 2, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keybind_modifier, 2, 0, 3),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_palette_directive, 3, 0, 1),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_palette_directive, 3, 0, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_directive, 3, 0, 1),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_directive, 3, 0, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_directive, 4, 0, 2),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_directive, 4, 0, 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file_directive, 4, 0, 2),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_config_file_directive, 4, 0, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_directive, 4, 0, 2),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keybind_directive, 4, 0, 2),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_palette_directive, 4, 0, 2),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_palette_directive, 4, 0, 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord, 1, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord, 2, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_chord_repeat1, 2, 0, 0),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chord_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier_key, 1, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_trigger, 1, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_trigger, 2, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 2, 0, 4),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keybind_trigger_repeat1, 2, 0, 0),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keybind_trigger_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_action, 1, 0, 5),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 1, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adjustment, 1, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_qualifier, 2, 0, 4),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_value, 1, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_value, 1, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 2, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_palette_value, 3, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_value, 3, 0, 6),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 1, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [214] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_value, 4, 0, 7),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_action, 3, 0, 8),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
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
