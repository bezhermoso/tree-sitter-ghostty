#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 60
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 63
#define ALIAS_COUNT 1
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 8

enum ts_symbol_identifiers {
  aux_sym_source_file_token1 = 1,
  sym_comment = 2,
  anon_sym_EQ = 3,
  sym_property = 4,
  anon_sym_true = 5,
  anon_sym_false = 6,
  sym_number_literal = 7,
  sym_color_value = 8,
  sym_percent_adjustment = 9,
  sym_numeric_adjustment = 10,
  anon_sym_DQUOTE = 11,
  aux_sym_string_literal_token1 = 12,
  anon_sym_SQUOTE = 13,
  aux_sym_string_literal_token2 = 14,
  aux_sym_raw_value_token1 = 15,
  anon_sym_palette = 16,
  aux_sym_palette_value_token1 = 17,
  anon_sym_EQ2 = 18,
  aux_sym_palette_value_token2 = 19,
  anon_sym_config_DASHfile = 20,
  anon_sym_keybind = 21,
  anon_sym_all = 22,
  anon_sym_global = 23,
  anon_sym_local = 24,
  anon_sym_unconsumed = 25,
  anon_sym_COLON = 26,
  anon_sym_GT = 27,
  anon_sym_PLUS = 28,
  anon_sym_shift = 29,
  anon_sym_ctrl = 30,
  anon_sym_control = 31,
  anon_sym_alt = 32,
  anon_sym_option = 33,
  anon_sym_opt = 34,
  anon_sym_super = 35,
  anon_sym_cmd = 36,
  anon_sym_command = 37,
  sym_key = 38,
  aux_sym_keybind_action_token1 = 39,
  sym_source_file = 40,
  sym_directive = 41,
  sym_basic_directive = 42,
  sym_value = 43,
  sym_boolean_literal = 44,
  sym_adjustment = 45,
  sym_string_literal = 46,
  sym_raw_value = 47,
  sym_palette_directive = 48,
  sym_palette_value = 49,
  sym_config_file_directive = 50,
  sym_keybind_directive = 51,
  sym__keybind_value = 52,
  sym_keybind_value = 53,
  sym_keybind_modifier = 54,
  sym_keybind_trigger = 55,
  sym_chord = 56,
  sym_key_modifier = 57,
  sym_keybind_action = 58,
  aux_sym_source_file_repeat1 = 59,
  aux_sym_keybind_value_repeat1 = 60,
  aux_sym_keybind_trigger_repeat1 = 61,
  aux_sym_chord_repeat1 = 62,
  alias_sym_action_argument = 63,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_file_token1] = "source_file_token1",
  [sym_comment] = "comment",
  [anon_sym_EQ] = "=",
  [sym_property] = "property",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_number_literal] = "number_literal",
  [sym_color_value] = "color_value",
  [sym_percent_adjustment] = "percent_adjustment",
  [sym_numeric_adjustment] = "numeric_adjustment",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_literal_token2] = "string_literal_token2",
  [aux_sym_raw_value_token1] = "raw_value_token1",
  [anon_sym_palette] = "property",
  [aux_sym_palette_value_token1] = "palette_index",
  [anon_sym_EQ2] = "=",
  [aux_sym_palette_value_token2] = "color_value",
  [anon_sym_config_DASHfile] = "property",
  [anon_sym_keybind] = "property",
  [anon_sym_all] = "all",
  [anon_sym_global] = "global",
  [anon_sym_local] = "local",
  [anon_sym_unconsumed] = "unconsumed",
  [anon_sym_COLON] = ":",
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
  [sym_key] = "key",
  [aux_sym_keybind_action_token1] = "action_name",
  [sym_source_file] = "source_file",
  [sym_directive] = "directive",
  [sym_basic_directive] = "basic_directive",
  [sym_value] = "value",
  [sym_boolean_literal] = "boolean_literal",
  [sym_adjustment] = "adjustment",
  [sym_string_literal] = "string_literal",
  [sym_raw_value] = "raw_value",
  [sym_palette_directive] = "palette_directive",
  [sym_palette_value] = "palette_value",
  [sym_config_file_directive] = "config_file_directive",
  [sym_keybind_directive] = "keybind_directive",
  [sym__keybind_value] = "_keybind_value",
  [sym_keybind_value] = "keybind_value",
  [sym_keybind_modifier] = "keybind_modifier",
  [sym_keybind_trigger] = "keybind_trigger",
  [sym_chord] = "chord",
  [sym_key_modifier] = "key_modifier",
  [sym_keybind_action] = "keybind_action",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_keybind_value_repeat1] = "keybind_value_repeat1",
  [aux_sym_keybind_trigger_repeat1] = "keybind_trigger_repeat1",
  [aux_sym_chord_repeat1] = "chord_repeat1",
  [alias_sym_action_argument] = "action_argument",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_source_file_token1] = aux_sym_source_file_token1,
  [sym_comment] = sym_comment,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_property] = sym_property,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_number_literal] = sym_number_literal,
  [sym_color_value] = sym_color_value,
  [sym_percent_adjustment] = sym_percent_adjustment,
  [sym_numeric_adjustment] = sym_numeric_adjustment,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_literal_token2] = aux_sym_string_literal_token2,
  [aux_sym_raw_value_token1] = aux_sym_raw_value_token1,
  [anon_sym_palette] = sym_property,
  [aux_sym_palette_value_token1] = aux_sym_palette_value_token1,
  [anon_sym_EQ2] = anon_sym_EQ,
  [aux_sym_palette_value_token2] = sym_color_value,
  [anon_sym_config_DASHfile] = sym_property,
  [anon_sym_keybind] = sym_property,
  [anon_sym_all] = anon_sym_all,
  [anon_sym_global] = anon_sym_global,
  [anon_sym_local] = anon_sym_local,
  [anon_sym_unconsumed] = anon_sym_unconsumed,
  [anon_sym_COLON] = anon_sym_COLON,
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
  [sym_key] = sym_key,
  [aux_sym_keybind_action_token1] = aux_sym_keybind_action_token1,
  [sym_source_file] = sym_source_file,
  [sym_directive] = sym_directive,
  [sym_basic_directive] = sym_basic_directive,
  [sym_value] = sym_value,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym_adjustment] = sym_adjustment,
  [sym_string_literal] = sym_string_literal,
  [sym_raw_value] = sym_raw_value,
  [sym_palette_directive] = sym_palette_directive,
  [sym_palette_value] = sym_palette_value,
  [sym_config_file_directive] = sym_config_file_directive,
  [sym_keybind_directive] = sym_keybind_directive,
  [sym__keybind_value] = sym__keybind_value,
  [sym_keybind_value] = sym_keybind_value,
  [sym_keybind_modifier] = sym_keybind_modifier,
  [sym_keybind_trigger] = sym_keybind_trigger,
  [sym_chord] = sym_chord,
  [sym_key_modifier] = sym_key_modifier,
  [sym_keybind_action] = sym_keybind_action,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
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
  [aux_sym_source_file_token1] = {
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
  [sym_property] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_number_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_color_value] = {
    .visible = true,
    .named = true,
  },
  [sym_percent_adjustment] = {
    .visible = true,
    .named = true,
  },
  [sym_numeric_adjustment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_raw_value_token1] = {
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
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_keybind_action_token1] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
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
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_adjustment] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_raw_value] = {
    .visible = true,
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
  [sym_keybind_directive] = {
    .visible = true,
    .named = true,
  },
  [sym__keybind_value] = {
    .visible = false,
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
  [sym_keybind_trigger] = {
    .visible = true,
    .named = true,
  },
  [sym_chord] = {
    .visible = true,
    .named = true,
  },
  [sym_key_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_keybind_action] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
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
  field_trigger = 6,
  field_value = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_action] = "action",
  [field_action_name] = "action_name",
  [field_argument] = "argument",
  [field_modifier] = "modifier",
  [field_property] = "property",
  [field_trigger] = "trigger",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 2},
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
    {field_action_name, 0},
  [5] =
    {field_action, 2},
    {field_trigger, 0},
  [7] =
    {field_action, 3},
    {field_trigger, 1},
  [9] =
    {field_action_name, 0},
    {field_argument, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [7] = {
    [2] = alias_sym_action_argument,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_raw_value, 2,
    sym_raw_value,
    alias_sym_action_argument,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(66);
      ADVANCE_MAP(
        '"', 202,
        '#', 60,
        '\'', 206,
        '+', 251,
        ':', 249,
        '=', 234,
        '>', 250,
        '_', 279,
        'a', 99,
        'c', 110,
        'f', 71,
        'g', 109,
        'k', 85,
        'l', 120,
        'o', 125,
        'p', 72,
        's', 95,
        't', 127,
        'u', 117,
        'b', 148,
        'd', 148,
        'e', 148,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(65);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      if (('h' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(67);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == 'c') ADVANCE(167);
      if (lookahead == 'k') ADVANCE(155);
      if (lookahead == 'p') ADVANCE(151);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(233);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(69);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '\n', 68,
        '\r', 4,
        '"', 203,
        '#', 227,
        '\'', 207,
        'f', 211,
        't', 215,
        '+', 219,
        '-', 219,
        '\t', 210,
        0x0b, 210,
        '\f', 210,
        ' ', 210,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(226);
      if (lookahead != 0) ADVANCE(228);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(60);
      if (lookahead == '=') ADVANCE(70);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
      END_STATE();
    case 6:
      if (lookahead == '+') ADVANCE(251);
      if (lookahead == '=') ADVANCE(234);
      if (lookahead == '>') ADVANCE(250);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 7:
      if (lookahead == '+') ADVANCE(251);
      if (lookahead == '>') ADVANCE(250);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(70);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(273);
      if (lookahead == 'c') ADVANCE(275);
      if (lookahead == 'g') ADVANCE(274);
      if (lookahead == 'l') ADVANCE(277);
      if (lookahead == 'o') ADVANCE(278);
      if (lookahead == 's') ADVANCE(272);
      if (lookahead == 'u') ADVANCE(276);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '=' &&
          lookahead != '>') ADVANCE(270);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 13:
      if (lookahead == 'b') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(10);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(36);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(266);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(268);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(247);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 21:
      if (lookahead == 'f') ADVANCE(160);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 22:
      if (lookahead == 'f') ADVANCE(45);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(241);
      if (lookahead == 't') ADVANCE(258);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(254);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(245);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(243);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(256);
      END_STATE();
    case 29:
      if (lookahead == 'm') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 30:
      if (lookahead == 'm') ADVANCE(11);
      END_STATE();
    case 31:
      if (lookahead == 'm') ADVANCE(19);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(260);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 35:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 36:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 37:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 39:
      if (lookahead == 'p') ADVANCE(20);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(264);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 43:
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(263);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(252);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 47:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 48:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(48);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(218);
      if (lookahead != 0) ADVANCE(228);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(235);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(197);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 62:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 63:
      if (eof) ADVANCE(66);
      ADVANCE_MAP(
        '\n', 67,
        '\r', 1,
        '#', 3,
        ':', 249,
        '=', 234,
        'c', 167,
        'k', 155,
        'p', 151,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(233);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 64:
      if (eof) ADVANCE(66);
      if (lookahead == '\n') ADVANCE(67);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == 'c') ADVANCE(167);
      if (lookahead == 'k') ADVANCE(155);
      if (lookahead == 'p') ADVANCE(151);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(233);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 65:
      if (eof) ADVANCE(66);
      ADVANCE_MAP(
        '"', 202,
        '#', 61,
        '\'', 206,
        '+', 251,
        '=', 70,
        '>', 250,
        '_', 279,
        'a', 100,
        'c', 111,
        'f', 76,
        'g', 109,
        'k', 85,
        'l', 120,
        'o', 125,
        'p', 72,
        's', 95,
        't', 127,
        'u', 117,
        'b', 149,
        'd', 149,
        'e', 149,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(65);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      if (('h' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\n') ADVANCE(67);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead == '\r') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(210);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'a') ADVANCE(102);
      if (('b' <= lookahead && lookahead <= 'f')) ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(56);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'a') ADVANCE(108);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'a') ADVANCE(116);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'a') ADVANCE(105);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'a') ADVANCE(106);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'a') ADVANCE(103);
      if (('b' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(57);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'b') ADVANCE(98);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'b') ADVANCE(75);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'c') ADVANCE(122);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'c') ADVANCE(74);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'd') ADVANCE(267);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'd') ADVANCE(269);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'd') ADVANCE(239);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'd') ADVANCE(248);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(139);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(174);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(176);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(229);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(135);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(128);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(84);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'f') ADVANCE(97);
      if (lookahead == 't') ADVANCE(130);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'f') ADVANCE(134);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'g') ADVANCE(172);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'h') ADVANCE(96);
      if (lookahead == 'u') ADVANCE(126);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'i') ADVANCE(93);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'i') ADVANCE(94);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'i') ADVANCE(119);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'l') ADVANCE(101);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(56);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'l') ADVANCE(101);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(57);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'l') ADVANCE(242);
      if (lookahead == 't') ADVANCE(259);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'l') ADVANCE(132);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(54);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'l') ADVANCE(132);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(55);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'l') ADVANCE(255);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'l') ADVANCE(246);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'l') ADVANCE(244);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'l') ADVANCE(257);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'l') ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'l') ADVANCE(121);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'm') ADVANCE(81);
      if (lookahead == 'o') ADVANCE(112);
      if (lookahead == 't') ADVANCE(129);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(56);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'm') ADVANCE(81);
      if (lookahead == 'o') ADVANCE(112);
      if (lookahead == 't') ADVANCE(129);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(57);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'm') ADVANCE(113);
      if (lookahead == 'n') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'm') ADVANCE(73);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'm') ADVANCE(91);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'n') ADVANCE(261);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'n') ADVANCE(82);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'n') ADVANCE(79);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'n') ADVANCE(131);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'n') ADVANCE(83);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'o') ADVANCE(80);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'o') ADVANCE(78);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'o') ADVANCE(118);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'o') ADVANCE(115);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'o') ADVANCE(107);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'p') ADVANCE(133);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'p') ADVANCE(90);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'r') ADVANCE(138);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'r') ADVANCE(265);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'r') ADVANCE(104);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'r') ADVANCE(124);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 's') ADVANCE(137);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 's') ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 't') ADVANCE(262);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 't') ADVANCE(253);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 't') ADVANCE(136);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 't') ADVANCE(88);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'u') ADVANCE(114);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'u') ADVANCE(86);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'y') ADVANCE(77);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(197);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(235);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(52);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(50);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(53);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(51);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(54);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(55);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(56);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(57);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == 'a') ADVANCE(164);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == 'b') ADVANCE(162);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == 'd') ADVANCE(240);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == 'e') ADVANCE(238);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == 'e') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == 'e') ADVANCE(168);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == 'e') ADVANCE(230);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == 'f') ADVANCE(161);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == 'g') ADVANCE(173);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == 'i') ADVANCE(163);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == 'i') ADVANCE(159);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == 'i') ADVANCE(166);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == 'l') ADVANCE(154);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == 'l') ADVANCE(156);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == 'n') ADVANCE(158);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == 'n') ADVANCE(153);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == 'o') ADVANCE(165);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == 't') ADVANCE(169);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == 't') ADVANCE(157);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == 'y') ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(62);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '_') ADVANCE(279);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == '-') ADVANCE(21);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(228);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(228);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '%') ADVANCE(199);
      if (lookahead == '.') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(228);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '%') ADVANCE(199);
      if (lookahead == '.') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(228);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '%') ADVANCE(199);
      if (lookahead == '.') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(228);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '%') ADVANCE(199);
      if (lookahead == '.') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(228);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '%') ADVANCE(199);
      if (lookahead == '.') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(228);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '%') ADVANCE(199);
      if (lookahead == '.') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(228);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '%') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(228);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(235);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(197);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_color_value);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_color_value);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(228);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_percent_adjustment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(228);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_numeric_adjustment);
      if (lookahead == '%') ADVANCE(199);
      if (lookahead == '.') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(228);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_numeric_adjustment);
      if (lookahead == '%') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(228);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(228);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(205);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(228);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(209);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_raw_value_token1);
      ADVANCE_MAP(
        '\n', 68,
        '\r', 4,
        '"', 203,
        '#', 227,
        '\'', 207,
        'f', 211,
        't', 215,
        '+', 219,
        '-', 219,
        '\t', 210,
        0x0b, 210,
        '\f', 210,
        ' ', 210,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(226);
      if (lookahead != 0) ADVANCE(228);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_raw_value_token1);
      if (lookahead == 'a') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(228);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_raw_value_token1);
      if (lookahead == 'e') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(228);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_raw_value_token1);
      if (lookahead == 'e') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(228);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_raw_value_token1);
      if (lookahead == 'l') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(228);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_raw_value_token1);
      if (lookahead == 'r') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(228);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_raw_value_token1);
      if (lookahead == 's') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(228);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_raw_value_token1);
      if (lookahead == 'u') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(228);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_raw_value_token1);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(218);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(228);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_raw_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(228);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_raw_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(228);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_raw_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(228);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_raw_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(228);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_raw_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(228);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_raw_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(228);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_raw_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(228);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_raw_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(228);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_raw_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(228);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_raw_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_palette);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_palette);
      if (lookahead == '-') ADVANCE(62);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_palette_value_token1);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_palette_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_palette_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(232);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_palette_value_token2);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_palette_value_token2);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_palette_value_token2);
      if (lookahead == '.') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_config_DASHfile);
      if (lookahead == '-') ADVANCE(62);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_keybind);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_keybind);
      if (lookahead == '-') ADVANCE(62);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_all);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_all);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_global);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_global);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_local);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_local);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_unconsumed);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_unconsumed);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_shift);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_shift);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_ctrl);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_ctrl);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_control);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_control);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_alt);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_alt);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_option);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_option);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_opt);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'i') ADVANCE(123);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_opt);
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_super);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_super);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_cmd);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_cmd);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_command);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_command);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '_') ADVANCE(279);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_key);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'a') ADVANCE(273);
      if (lookahead == 'c') ADVANCE(275);
      if (lookahead == 'g') ADVANCE(274);
      if (lookahead == 'l') ADVANCE(277);
      if (lookahead == 'o') ADVANCE(278);
      if (lookahead == 's') ADVANCE(272);
      if (lookahead == 'u') ADVANCE(276);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '=' &&
          lookahead != '>') ADVANCE(270);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'h') ADVANCE(23);
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'm') ADVANCE(16);
      if (lookahead == 'o') ADVANCE(29);
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'p') ADVANCE(44);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_keybind_action_token1);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 63},
  [2] = {.lex_state = 9},
  [3] = {.lex_state = 9},
  [4] = {.lex_state = 9},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 9},
  [7] = {.lex_state = 63},
  [8] = {.lex_state = 63},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 63},
  [12] = {.lex_state = 63},
  [13] = {.lex_state = 63},
  [14] = {.lex_state = 63},
  [15] = {.lex_state = 63},
  [16] = {.lex_state = 63},
  [17] = {.lex_state = 63},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 63},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 48},
  [29] = {.lex_state = 63},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 48},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 63},
  [35] = {.lex_state = 63},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 208},
  [40] = {.lex_state = 63},
  [41] = {.lex_state = 63},
  [42] = {.lex_state = 63},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 63},
  [45] = {.lex_state = 63},
  [46] = {.lex_state = 63},
  [47] = {.lex_state = 204},
  [48] = {.lex_state = 63},
  [49] = {.lex_state = 63},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 63},
  [52] = {.lex_state = 63},
  [53] = {.lex_state = 63},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 63},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 63},
  [59] = {.lex_state = 63},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_property] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
    [sym_color_value] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_palette] = ACTIONS(1),
    [aux_sym_palette_value_token1] = ACTIONS(1),
    [anon_sym_EQ2] = ACTIONS(1),
    [aux_sym_palette_value_token2] = ACTIONS(1),
    [anon_sym_config_DASHfile] = ACTIONS(1),
    [anon_sym_keybind] = ACTIONS(1),
    [anon_sym_all] = ACTIONS(1),
    [anon_sym_global] = ACTIONS(1),
    [anon_sym_local] = ACTIONS(1),
    [anon_sym_unconsumed] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
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
    [aux_sym_keybind_action_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(38),
    [sym_directive] = STATE(7),
    [sym_basic_directive] = STATE(11),
    [sym_palette_directive] = STATE(11),
    [sym_config_file_directive] = STATE(11),
    [sym_keybind_directive] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_source_file_token1] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [sym_property] = ACTIONS(9),
    [anon_sym_palette] = ACTIONS(11),
    [anon_sym_config_DASHfile] = ACTIONS(13),
    [anon_sym_keybind] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(21), 1,
      sym_key,
    STATE(18), 1,
      sym_key_modifier,
    STATE(25), 1,
      sym_chord,
    STATE(52), 1,
      sym_keybind_trigger,
    STATE(3), 2,
      sym_keybind_modifier,
      aux_sym_keybind_value_repeat1,
    STATE(51), 2,
      sym__keybind_value,
      sym_keybind_value,
    ACTIONS(17), 4,
      anon_sym_all,
      anon_sym_global,
      anon_sym_local,
      anon_sym_unconsumed,
    ACTIONS(19), 9,
      anon_sym_shift,
      anon_sym_ctrl,
      anon_sym_control,
      anon_sym_alt,
      anon_sym_option,
      anon_sym_opt,
      anon_sym_super,
      anon_sym_cmd,
      anon_sym_command,
  [38] = 7,
    ACTIONS(21), 1,
      sym_key,
    STATE(18), 1,
      sym_key_modifier,
    STATE(25), 1,
      sym_chord,
    STATE(46), 1,
      sym_keybind_trigger,
    STATE(4), 2,
      sym_keybind_modifier,
      aux_sym_keybind_value_repeat1,
    ACTIONS(17), 4,
      anon_sym_all,
      anon_sym_global,
      anon_sym_local,
      anon_sym_unconsumed,
    ACTIONS(19), 9,
      anon_sym_shift,
      anon_sym_ctrl,
      anon_sym_control,
      anon_sym_alt,
      anon_sym_option,
      anon_sym_opt,
      anon_sym_super,
      anon_sym_cmd,
      anon_sym_command,
  [72] = 3,
    STATE(4), 2,
      sym_keybind_modifier,
      aux_sym_keybind_value_repeat1,
    ACTIONS(23), 4,
      anon_sym_all,
      anon_sym_global,
      anon_sym_local,
      anon_sym_unconsumed,
    ACTIONS(26), 10,
      anon_sym_shift,
      anon_sym_ctrl,
      anon_sym_control,
      anon_sym_alt,
      anon_sym_option,
      anon_sym_opt,
      anon_sym_super,
      anon_sym_cmd,
      anon_sym_command,
      sym_key,
  [95] = 9,
    ACTIONS(28), 1,
      aux_sym_source_file_token1,
    ACTIONS(36), 1,
      anon_sym_DQUOTE,
    ACTIONS(38), 1,
      anon_sym_SQUOTE,
    ACTIONS(40), 1,
      aux_sym_raw_value_token1,
    STATE(45), 1,
      sym_value,
    ACTIONS(30), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(32), 2,
      sym_number_literal,
      sym_color_value,
    ACTIONS(34), 2,
      sym_percent_adjustment,
      sym_numeric_adjustment,
    STATE(42), 4,
      sym_boolean_literal,
      sym_adjustment,
      sym_string_literal,
      sym_raw_value,
  [129] = 1,
    ACTIONS(42), 14,
      anon_sym_all,
      anon_sym_global,
      anon_sym_local,
      anon_sym_unconsumed,
      anon_sym_shift,
      anon_sym_ctrl,
      anon_sym_control,
      anon_sym_alt,
      anon_sym_option,
      anon_sym_opt,
      anon_sym_super,
      anon_sym_cmd,
      anon_sym_command,
      sym_key,
  [146] = 9,
    ACTIONS(9), 1,
      sym_property,
    ACTIONS(11), 1,
      anon_sym_palette,
    ACTIONS(13), 1,
      anon_sym_config_DASHfile,
    ACTIONS(15), 1,
      anon_sym_keybind,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    ACTIONS(46), 1,
      aux_sym_source_file_token1,
    ACTIONS(48), 1,
      sym_comment,
    STATE(8), 2,
      sym_directive,
      aux_sym_source_file_repeat1,
    STATE(11), 4,
      sym_basic_directive,
      sym_palette_directive,
      sym_config_file_directive,
      sym_keybind_directive,
  [178] = 9,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    ACTIONS(52), 1,
      aux_sym_source_file_token1,
    ACTIONS(55), 1,
      sym_comment,
    ACTIONS(58), 1,
      sym_property,
    ACTIONS(61), 1,
      anon_sym_palette,
    ACTIONS(64), 1,
      anon_sym_config_DASHfile,
    ACTIONS(67), 1,
      anon_sym_keybind,
    STATE(8), 2,
      sym_directive,
      aux_sym_source_file_repeat1,
    STATE(11), 4,
      sym_basic_directive,
      sym_palette_directive,
      sym_config_file_directive,
      sym_keybind_directive,
  [210] = 4,
    ACTIONS(21), 1,
      sym_key,
    STATE(18), 1,
      sym_key_modifier,
    STATE(30), 1,
      sym_chord,
    ACTIONS(19), 9,
      anon_sym_shift,
      anon_sym_ctrl,
      anon_sym_control,
      anon_sym_alt,
      anon_sym_option,
      anon_sym_opt,
      anon_sym_super,
      anon_sym_cmd,
      anon_sym_command,
  [231] = 3,
    ACTIONS(70), 1,
      sym_key,
    STATE(23), 1,
      sym_key_modifier,
    ACTIONS(19), 9,
      anon_sym_shift,
      anon_sym_ctrl,
      anon_sym_control,
      anon_sym_alt,
      anon_sym_option,
      anon_sym_opt,
      anon_sym_super,
      anon_sym_cmd,
      anon_sym_command,
  [249] = 2,
    ACTIONS(72), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(74), 5,
      sym_comment,
      sym_property,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_keybind,
  [261] = 2,
    ACTIONS(76), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(78), 5,
      sym_comment,
      sym_property,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_keybind,
  [273] = 2,
    ACTIONS(80), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(82), 5,
      sym_comment,
      sym_property,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_keybind,
  [285] = 2,
    ACTIONS(84), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(86), 5,
      sym_comment,
      sym_property,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_keybind,
  [297] = 2,
    ACTIONS(88), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(90), 5,
      sym_comment,
      sym_property,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_keybind,
  [309] = 2,
    ACTIONS(92), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(94), 5,
      sym_comment,
      sym_property,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_keybind,
  [321] = 2,
    ACTIONS(96), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(98), 5,
      sym_comment,
      sym_property,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_keybind,
  [333] = 3,
    ACTIONS(102), 1,
      anon_sym_PLUS,
    STATE(19), 1,
      aux_sym_chord_repeat1,
    ACTIONS(100), 2,
      anon_sym_EQ2,
      anon_sym_GT,
  [344] = 3,
    ACTIONS(102), 1,
      anon_sym_PLUS,
    STATE(20), 1,
      aux_sym_chord_repeat1,
    ACTIONS(104), 2,
      anon_sym_EQ2,
      anon_sym_GT,
  [355] = 3,
    ACTIONS(108), 1,
      anon_sym_PLUS,
    STATE(20), 1,
      aux_sym_chord_repeat1,
    ACTIONS(106), 2,
      anon_sym_EQ2,
      anon_sym_GT,
  [366] = 1,
    ACTIONS(111), 3,
      anon_sym_EQ2,
      anon_sym_GT,
      anon_sym_PLUS,
  [372] = 3,
    ACTIONS(113), 1,
      aux_sym_source_file_token1,
    ACTIONS(115), 1,
      aux_sym_palette_value_token1,
    STATE(35), 1,
      sym_palette_value,
  [382] = 1,
    ACTIONS(106), 3,
      anon_sym_EQ2,
      anon_sym_GT,
      anon_sym_PLUS,
  [388] = 3,
    ACTIONS(117), 1,
      anon_sym_EQ2,
    ACTIONS(119), 1,
      anon_sym_GT,
    STATE(24), 1,
      aux_sym_keybind_trigger_repeat1,
  [398] = 3,
    ACTIONS(122), 1,
      anon_sym_EQ2,
    ACTIONS(124), 1,
      anon_sym_GT,
    STATE(26), 1,
      aux_sym_keybind_trigger_repeat1,
  [408] = 3,
    ACTIONS(124), 1,
      anon_sym_GT,
    ACTIONS(126), 1,
      anon_sym_EQ2,
    STATE(24), 1,
      aux_sym_keybind_trigger_repeat1,
  [418] = 2,
    ACTIONS(128), 1,
      aux_sym_keybind_action_token1,
    STATE(53), 1,
      sym_keybind_action,
  [425] = 2,
    ACTIONS(130), 1,
      aux_sym_raw_value_token1,
    STATE(41), 1,
      sym_raw_value,
  [432] = 2,
    ACTIONS(132), 1,
      aux_sym_source_file_token1,
    ACTIONS(134), 1,
      anon_sym_COLON,
  [439] = 1,
    ACTIONS(117), 2,
      anon_sym_EQ2,
      anon_sym_GT,
  [444] = 2,
    ACTIONS(130), 1,
      aux_sym_raw_value_token1,
    STATE(59), 1,
      sym_raw_value,
  [451] = 2,
    ACTIONS(128), 1,
      aux_sym_keybind_action_token1,
    STATE(58), 1,
      sym_keybind_action,
  [458] = 1,
    ACTIONS(136), 1,
      anon_sym_EQ,
  [462] = 1,
    ACTIONS(138), 1,
      aux_sym_source_file_token1,
  [466] = 1,
    ACTIONS(140), 1,
      aux_sym_source_file_token1,
  [470] = 1,
    ACTIONS(142), 1,
      aux_sym_palette_value_token2,
  [474] = 1,
    ACTIONS(144), 1,
      anon_sym_EQ,
  [478] = 1,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
  [482] = 1,
    ACTIONS(148), 1,
      aux_sym_string_literal_token2,
  [486] = 1,
    ACTIONS(150), 1,
      aux_sym_source_file_token1,
  [490] = 1,
    ACTIONS(152), 1,
      aux_sym_source_file_token1,
  [494] = 1,
    ACTIONS(154), 1,
      aux_sym_source_file_token1,
  [498] = 1,
    ACTIONS(156), 1,
      anon_sym_COLON,
  [502] = 1,
    ACTIONS(158), 1,
      aux_sym_source_file_token1,
  [506] = 1,
    ACTIONS(160), 1,
      aux_sym_source_file_token1,
  [510] = 1,
    ACTIONS(162), 1,
      anon_sym_EQ2,
  [514] = 1,
    ACTIONS(164), 1,
      aux_sym_string_literal_token1,
  [518] = 1,
    ACTIONS(166), 1,
      aux_sym_source_file_token1,
  [522] = 1,
    ACTIONS(168), 1,
      aux_sym_source_file_token1,
  [526] = 1,
    ACTIONS(170), 1,
      anon_sym_EQ,
  [530] = 1,
    ACTIONS(172), 1,
      aux_sym_source_file_token1,
  [534] = 1,
    ACTIONS(174), 1,
      anon_sym_EQ2,
  [538] = 1,
    ACTIONS(176), 1,
      aux_sym_source_file_token1,
  [542] = 1,
    ACTIONS(178), 1,
      anon_sym_EQ,
  [546] = 1,
    ACTIONS(180), 1,
      anon_sym_EQ2,
  [550] = 1,
    ACTIONS(182), 1,
      anon_sym_DQUOTE,
  [554] = 1,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
  [558] = 1,
    ACTIONS(184), 1,
      aux_sym_source_file_token1,
  [562] = 1,
    ACTIONS(186), 1,
      aux_sym_source_file_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 38,
  [SMALL_STATE(4)] = 72,
  [SMALL_STATE(5)] = 95,
  [SMALL_STATE(6)] = 129,
  [SMALL_STATE(7)] = 146,
  [SMALL_STATE(8)] = 178,
  [SMALL_STATE(9)] = 210,
  [SMALL_STATE(10)] = 231,
  [SMALL_STATE(11)] = 249,
  [SMALL_STATE(12)] = 261,
  [SMALL_STATE(13)] = 273,
  [SMALL_STATE(14)] = 285,
  [SMALL_STATE(15)] = 297,
  [SMALL_STATE(16)] = 309,
  [SMALL_STATE(17)] = 321,
  [SMALL_STATE(18)] = 333,
  [SMALL_STATE(19)] = 344,
  [SMALL_STATE(20)] = 355,
  [SMALL_STATE(21)] = 366,
  [SMALL_STATE(22)] = 372,
  [SMALL_STATE(23)] = 382,
  [SMALL_STATE(24)] = 388,
  [SMALL_STATE(25)] = 398,
  [SMALL_STATE(26)] = 408,
  [SMALL_STATE(27)] = 418,
  [SMALL_STATE(28)] = 425,
  [SMALL_STATE(29)] = 432,
  [SMALL_STATE(30)] = 439,
  [SMALL_STATE(31)] = 444,
  [SMALL_STATE(32)] = 451,
  [SMALL_STATE(33)] = 458,
  [SMALL_STATE(34)] = 462,
  [SMALL_STATE(35)] = 466,
  [SMALL_STATE(36)] = 470,
  [SMALL_STATE(37)] = 474,
  [SMALL_STATE(38)] = 478,
  [SMALL_STATE(39)] = 482,
  [SMALL_STATE(40)] = 486,
  [SMALL_STATE(41)] = 490,
  [SMALL_STATE(42)] = 494,
  [SMALL_STATE(43)] = 498,
  [SMALL_STATE(44)] = 502,
  [SMALL_STATE(45)] = 506,
  [SMALL_STATE(46)] = 510,
  [SMALL_STATE(47)] = 514,
  [SMALL_STATE(48)] = 518,
  [SMALL_STATE(49)] = 522,
  [SMALL_STATE(50)] = 526,
  [SMALL_STATE(51)] = 530,
  [SMALL_STATE(52)] = 534,
  [SMALL_STATE(53)] = 538,
  [SMALL_STATE(54)] = 542,
  [SMALL_STATE(55)] = 546,
  [SMALL_STATE(56)] = 550,
  [SMALL_STATE(57)] = 554,
  [SMALL_STATE(58)] = 558,
  [SMALL_STATE(59)] = 562,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keybind_value_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keybind_value_repeat1, 2, 0, 0),
  [28] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keybind_modifier, 2, 0, 3),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_directive, 3, 0, 1),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_directive, 3, 0, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_palette_directive, 3, 0, 1),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_palette_directive, 3, 0, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_palette_directive, 4, 0, 2),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_palette_directive, 4, 0, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_directive, 4, 0, 2),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keybind_directive, 4, 0, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_directive, 4, 0, 2),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_directive, 4, 0, 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file_directive, 4, 0, 2),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_config_file_directive, 4, 0, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord, 1, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord, 2, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_chord_repeat1, 2, 0, 0),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chord_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_modifier, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keybind_trigger_repeat1, 2, 0, 0),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keybind_trigger_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_trigger, 1, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_trigger, 2, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_action, 1, 0, 4),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_value, 1, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [146] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adjustment, 1, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_palette_value, 3, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_value, 3, 0, 5),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_value, 4, 0, 6),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_action, 3, 0, 7),
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
