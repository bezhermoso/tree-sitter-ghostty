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
#define STATE_COUNT 70
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 70
#define ALIAS_COUNT 1
#define TOKEN_COUNT 44
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 9

enum ts_symbol_identifiers {
  aux_sym_source_file_token1 = 1,
  sym_comment = 2,
  anon_sym_EQ = 3,
  sym__kebab_case_identifier = 4,
  sym__snake_case_identifier = 5,
  aux_sym_value_token1 = 6,
  anon_sym_true = 7,
  anon_sym_false = 8,
  sym_number_literal = 9,
  anon_sym_DQUOTE = 10,
  aux_sym_string_literal_token1 = 11,
  anon_sym_SQUOTE = 12,
  aux_sym_string_literal_token2 = 13,
  sym_color_value = 14,
  sym_percent_adjustment = 15,
  sym_numeric_adjustment = 16,
  aux_sym_raw_value_token1 = 17,
  anon_sym_palette = 18,
  aux_sym_palette_value_token1 = 19,
  anon_sym_EQ2 = 20,
  aux_sym_palette_value_token2 = 21,
  anon_sym_config_DASHfile = 22,
  anon_sym_keybind = 23,
  aux_sym_keybind_directive_token1 = 24,
  anon_sym_clear = 25,
  anon_sym_all = 26,
  anon_sym_global = 27,
  anon_sym_local = 28,
  anon_sym_unconsumed = 29,
  anon_sym_COLON = 30,
  anon_sym_physical = 31,
  anon_sym_GT = 32,
  anon_sym_PLUS = 33,
  anon_sym_shift = 34,
  anon_sym_ctrl = 35,
  anon_sym_control = 36,
  anon_sym_alt = 37,
  anon_sym_option = 38,
  anon_sym_opt = 39,
  anon_sym_super = 40,
  anon_sym_cmd = 41,
  anon_sym_command = 42,
  aux_sym_key_token1 = 43,
  sym_source_file = 44,
  sym_directive = 45,
  sym_basic_directive = 46,
  sym_property = 47,
  sym_value = 48,
  sym_boolean_literal = 49,
  sym_adjustment = 50,
  sym_string_literal = 51,
  sym_raw_value = 52,
  sym_palette_directive = 53,
  sym_palette_value = 54,
  sym_config_file_directive = 55,
  sym_path_value = 56,
  sym_keybind_directive = 57,
  sym_keybind_value = 58,
  sym_keybind_modifier = 59,
  sym_key_qualifier = 60,
  sym_keybind_trigger = 61,
  sym_chord = 62,
  sym_modifier_key = 63,
  sym_key = 64,
  sym_keybind_action = 65,
  aux_sym_source_file_repeat1 = 66,
  aux_sym_keybind_value_repeat1 = 67,
  aux_sym_keybind_trigger_repeat1 = 68,
  aux_sym_chord_repeat1 = 69,
  alias_sym_action_argument = 70,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_file_token1] = "source_file_token1",
  [sym_comment] = "comment",
  [anon_sym_EQ] = "=",
  [sym__kebab_case_identifier] = "_kebab_case_identifier",
  [sym__snake_case_identifier] = "action_name",
  [aux_sym_value_token1] = "value_token1",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_number_literal] = "number_literal",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_literal_token2] = "string_literal_token2",
  [sym_color_value] = "color_value",
  [sym_percent_adjustment] = "percent_adjustment",
  [sym_numeric_adjustment] = "numeric_adjustment",
  [aux_sym_raw_value_token1] = "raw_value_token1",
  [anon_sym_palette] = "property",
  [aux_sym_palette_value_token1] = "palette_index",
  [anon_sym_EQ2] = "=",
  [aux_sym_palette_value_token2] = "color_value",
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
  [sym_source_file] = "source_file",
  [sym_directive] = "directive",
  [sym_basic_directive] = "basic_directive",
  [sym_property] = "property",
  [sym_value] = "value",
  [sym_boolean_literal] = "boolean_literal",
  [sym_adjustment] = "adjustment",
  [sym_string_literal] = "string_literal",
  [sym_raw_value] = "raw_value",
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
  [sym__kebab_case_identifier] = sym__kebab_case_identifier,
  [sym__snake_case_identifier] = sym__snake_case_identifier,
  [aux_sym_value_token1] = aux_sym_value_token1,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_number_literal] = sym_number_literal,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_literal_token2] = aux_sym_string_literal_token2,
  [sym_color_value] = sym_color_value,
  [sym_percent_adjustment] = sym_percent_adjustment,
  [sym_numeric_adjustment] = sym_numeric_adjustment,
  [aux_sym_raw_value_token1] = aux_sym_raw_value_token1,
  [anon_sym_palette] = sym_property,
  [aux_sym_palette_value_token1] = aux_sym_palette_value_token1,
  [anon_sym_EQ2] = anon_sym_EQ,
  [aux_sym_palette_value_token2] = sym_color_value,
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
  [sym_source_file] = sym_source_file,
  [sym_directive] = sym_directive,
  [sym_basic_directive] = sym_basic_directive,
  [sym_property] = sym_property,
  [sym_value] = sym_value,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym_adjustment] = sym_adjustment,
  [sym_string_literal] = sym_string_literal,
  [sym_raw_value] = sym_raw_value,
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
  [sym_number_literal] = {
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
  [sym_property] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(35);
      ADVANCE_MAP(
        '"', 186,
        '#', 27,
        '\'', 190,
        '+', 246,
        ':', 242,
        '=', 223,
        '>', 245,
        '_', 154,
        'a', 73,
        'c', 83,
        'f', 40,
        'g', 85,
        'k', 57,
        'l', 95,
        'o', 100,
        'p', 41,
        's', 68,
        't', 102,
        'u', 92,
        'b', 126,
        'd', 126,
        'e', 126,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(34);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (('h' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == 'c') ADVANCE(145);
      if (lookahead == 'k') ADVANCE(133);
      if (lookahead == 'p') ADVANCE(129);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(38);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '\n', 37,
        '\r', 162,
        '"', 187,
        '#', 216,
        '\'', 191,
        'f', 200,
        't', 204,
        '+', 208,
        '-', 208,
        '\t', 162,
        0x0b, 162,
        '\f', 162,
        ' ', 162,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(215);
      if (lookahead != 0) ADVANCE(217);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '"', 186,
        '\'', 190,
        'a', 286,
        'c', 287,
        'g', 294,
        'l', 304,
        'o', 309,
        'p', 282,
        's', 283,
        'u', 302,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      if (lookahead != 0 &&
          (lookahead < '0' || ':' < lookahead) &&
          lookahead != '=' &&
          lookahead != '>') ADVANCE(265);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(187);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '\'') ADVANCE(191);
      if (lookahead == 'f') ADVANCE(200);
      if (lookahead == 't') ADVANCE(204);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(6);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(208);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(215);
      if (lookahead != 0) ADVANCE(217);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '=') ADVANCE(231);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 8:
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '=') ADVANCE(223);
      if (lookahead == '>') ADVANCE(245);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 9:
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '>') ADVANCE(245);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(39);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(231);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        'a', 286,
        'c', 296,
        'g', 294,
        'l', 304,
        'o', 309,
        'p', 282,
        's', 283,
        'u', 302,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      if (lookahead != 0 &&
          (lookahead < '0' || ':' < lookahead) &&
          lookahead != '=' &&
          lookahead != '>') ADVANCE(265);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(295);
      if (lookahead == 'c') ADVANCE(296);
      if (lookahead == 'o') ADVANCE(309);
      if (lookahead == 'p') ADVANCE(282);
      if (lookahead == 's') ADVANCE(283);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      if (lookahead != 0 &&
          (lookahead < '0' || ':' < lookahead) &&
          lookahead != '=' &&
          lookahead != '>') ADVANCE(265);
      END_STATE();
    case 14:
      if (lookahead == 'f') ADVANCE(138);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 15:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(15);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(207);
      if (lookahead != 0) ADVANCE(217);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(224);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(194);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 29:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      if (lookahead != 0 &&
          (lookahead < '0' || ':' < lookahead) &&
          lookahead != '=' &&
          lookahead != '>') ADVANCE(265);
      END_STATE();
    case 32:
      if (eof) ADVANCE(35);
      ADVANCE_MAP(
        '\n', 36,
        '\r', 1,
        '#', 3,
        ':', 242,
        '=', 223,
        'c', 145,
        'k', 133,
        'p', 129,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 33:
      if (eof) ADVANCE(35);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == 'c') ADVANCE(145);
      if (lookahead == 'k') ADVANCE(133);
      if (lookahead == 'p') ADVANCE(129);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 34:
      if (eof) ADVANCE(35);
      ADVANCE_MAP(
        '"', 186,
        '#', 28,
        '\'', 190,
        '+', 246,
        '=', 39,
        '>', 245,
        '_', 154,
        'a', 74,
        'c', 84,
        'f', 47,
        'g', 85,
        'k', 57,
        'l', 95,
        'o', 100,
        'p', 41,
        's', 68,
        't', 102,
        'u', 92,
        'b', 127,
        'd', 127,
        'e', 127,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(34);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      if (('h' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '\r') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(208);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'a') ADVANCE(76);
      if (('b' <= lookahead && lookahead <= 'f')) ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'a') ADVANCE(86);
      if (lookahead == 'h') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'a') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'a') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'a') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'a') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'a') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'a') ADVANCE(77);
      if (('b' <= lookahead && lookahead <= 'f')) ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'b') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'b') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'c') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'c') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'c') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'd') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'd') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'd') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'd') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'e') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'e') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'e') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'e') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'e') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'e') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'e') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'e') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'f') ADVANCE(70);
      if (lookahead == 't') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'f') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'g') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'h') ADVANCE(69);
      if (lookahead == 'u') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'i') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'i') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'i') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'i') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'l') ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(23);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'l') ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(24);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'l') ADVANCE(234);
      if (lookahead == 't') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'l') ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(21);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'l') ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(22);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'l') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'l') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'l') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'l') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'l') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'l') ADVANCE(58);
      if (lookahead == 'm') ADVANCE(53);
      if (lookahead == 'o') ADVANCE(87);
      if (lookahead == 't') ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(23);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'l') ADVANCE(58);
      if (lookahead == 'm') ADVANCE(53);
      if (lookahead == 'o') ADVANCE(87);
      if (lookahead == 't') ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(24);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'l') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'l') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'm') ADVANCE(88);
      if (lookahead == 'n') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'm') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'm') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'n') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'n') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'n') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'n') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'n') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'o') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'o') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'o') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'o') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'o') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'p') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'p') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'r') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'r') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'r') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'r') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'r') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 's') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 's') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 's') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 't') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 't') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 't') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 't') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'u') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'u') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'y') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'y') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(224);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(194);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(17);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(19);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(20);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(21);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(22);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(23);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(24);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(142);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == 'b') ADVANCE(140);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == 'd') ADVANCE(230);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(228);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(146);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == 'f') ADVANCE(139);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == 'g') ADVANCE(151);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(141);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(137);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(144);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(132);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(134);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(136);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(131);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(143);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == 't') ADVANCE(147);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == 't') ADVANCE(135);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == 'y') ADVANCE(130);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(29);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '_') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(14);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(194);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(224);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '\r') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(208);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(217);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(217);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '%') ADVANCE(196);
      if (lookahead == '.') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(217);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '%') ADVANCE(196);
      if (lookahead == '.') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(217);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '%') ADVANCE(196);
      if (lookahead == '.') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(217);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '%') ADVANCE(196);
      if (lookahead == '.') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(217);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '%') ADVANCE(196);
      if (lookahead == '.') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(217);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '%') ADVANCE(196);
      if (lookahead == '.') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(217);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '%') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(217);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(226);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(224);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(194);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(217);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(189);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(217);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(193);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_color_value);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_color_value);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(217);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_percent_adjustment);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_numeric_adjustment);
      if (lookahead == '%') ADVANCE(196);
      if (lookahead == '.') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_numeric_adjustment);
      if (lookahead == '%') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_raw_value_token1);
      ADVANCE_MAP(
        '"', 187,
        '#', 216,
        '\'', 191,
        'f', 200,
        't', 204,
        '+', 208,
        '-', 208,
        '\t', 199,
        0x0b, 199,
        '\f', 199,
        ' ', 199,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(215);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(217);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_raw_value_token1);
      if (lookahead == 'a') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(217);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_raw_value_token1);
      if (lookahead == 'e') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(217);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_raw_value_token1);
      if (lookahead == 'e') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(217);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_raw_value_token1);
      if (lookahead == 'l') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(217);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_raw_value_token1);
      if (lookahead == 'r') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(217);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_raw_value_token1);
      if (lookahead == 's') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(217);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_raw_value_token1);
      if (lookahead == 'u') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(217);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_raw_value_token1);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(207);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(217);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_raw_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(217);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_raw_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(217);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_raw_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(217);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_raw_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(217);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_raw_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(217);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_raw_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(217);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_raw_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(217);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_raw_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(217);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_raw_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(217);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_raw_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_palette);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_palette);
      if (lookahead == '-') ADVANCE(29);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_palette_value_token1);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_palette_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_palette_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_palette_value_token2);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_palette_value_token2);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_palette_value_token2);
      if (lookahead == '.') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_palette_value_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_config_DASHfile);
      if (lookahead == '-') ADVANCE(29);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_keybind);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_keybind);
      if (lookahead == '-') ADVANCE(29);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_keybind_directive_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_clear);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_clear);
      if (lookahead == '_') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_all);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_all);
      if (lookahead == '_') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_global);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_global);
      if (lookahead == '_') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_local);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_local);
      if (lookahead == '_') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_unconsumed);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_unconsumed);
      if (lookahead == '_') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_physical);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_physical);
      if (lookahead == '_') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_shift);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_shift);
      if (lookahead == '_') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_ctrl);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_ctrl);
      if (lookahead == '_') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_control);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_control);
      if (lookahead == '_') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_alt);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_alt);
      if (lookahead == '_') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_option);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_option);
      if (lookahead == '_') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_opt);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'i') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_opt);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_super);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_super);
      if (lookahead == '_') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_cmd);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_cmd);
      if (lookahead == '_') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_command);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_command);
      if (lookahead == '_') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_key_token1);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'a') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'a') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'a') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'a') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'a') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'b') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'c') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'c') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'c') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'd') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'd') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'd') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'f') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'h') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'h') ADVANCE(284);
      if (lookahead == 'u') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'l') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'l') ADVANCE(278);
      if (lookahead == 'm') ADVANCE(275);
      if (lookahead == 'o') ADVANCE(297);
      if (lookahead == 't') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'l') ADVANCE(235);
      if (lookahead == 't') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'l') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'l') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'l') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'l') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'l') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'l') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'l') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'm') ADVANCE(275);
      if (lookahead == 'o') ADVANCE(297);
      if (lookahead == 't') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'm') ADVANCE(299);
      if (lookahead == 'n') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'm') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'm') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'p') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'p') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 's') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 's') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 't') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 't') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 't') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 't') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'u') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'y') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 32},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 12},
  [4] = {.lex_state = 12},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 13},
  [7] = {.lex_state = 12},
  [8] = {.lex_state = 32},
  [9] = {.lex_state = 32},
  [10] = {.lex_state = 13},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 32},
  [13] = {.lex_state = 32},
  [14] = {.lex_state = 32},
  [15] = {.lex_state = 32},
  [16] = {.lex_state = 32},
  [17] = {.lex_state = 32},
  [18] = {.lex_state = 32},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 32},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 32},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 15},
  [35] = {.lex_state = 32},
  [36] = {.lex_state = 32},
  [37] = {.lex_state = 32},
  [38] = {.lex_state = 32},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 32},
  [41] = {.lex_state = 32},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 32},
  [45] = {.lex_state = 31},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 188},
  [48] = {.lex_state = 10},
  [49] = {.lex_state = 192},
  [50] = {.lex_state = 32},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 32},
  [54] = {.lex_state = 10},
  [55] = {.lex_state = 32},
  [56] = {.lex_state = 10},
  [57] = {.lex_state = 32},
  [58] = {.lex_state = 32},
  [59] = {.lex_state = 32},
  [60] = {.lex_state = 32},
  [61] = {.lex_state = 10},
  [62] = {.lex_state = 31},
  [63] = {.lex_state = 32},
  [64] = {.lex_state = 32},
  [65] = {.lex_state = 32},
  [66] = {.lex_state = 15},
  [67] = {.lex_state = 32},
  [68] = {.lex_state = 32},
  [69] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym__kebab_case_identifier] = ACTIONS(1),
    [sym__snake_case_identifier] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_color_value] = ACTIONS(1),
    [anon_sym_palette] = ACTIONS(1),
    [aux_sym_palette_value_token1] = ACTIONS(1),
    [anon_sym_EQ2] = ACTIONS(1),
    [aux_sym_palette_value_token2] = ACTIONS(1),
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
    [sym_source_file] = STATE(51),
    [sym_directive] = STATE(9),
    [sym_basic_directive] = STATE(12),
    [sym_property] = STATE(61),
    [sym_palette_directive] = STATE(12),
    [sym_config_file_directive] = STATE(12),
    [sym_keybind_directive] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_source_file_token1] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [sym__kebab_case_identifier] = ACTIONS(9),
    [anon_sym_palette] = ACTIONS(11),
    [anon_sym_config_DASHfile] = ACTIONS(13),
    [anon_sym_keybind] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_clear,
    ACTIONS(25), 1,
      anon_sym_physical,
    ACTIONS(29), 1,
      aux_sym_key_token1,
    STATE(25), 1,
      sym_chord,
    STATE(50), 1,
      sym_string_literal,
    STATE(59), 1,
      sym_keybind_value,
    STATE(62), 1,
      sym_key_qualifier,
    STATE(63), 1,
      sym_keybind_trigger,
    STATE(3), 2,
      sym_keybind_modifier,
      aux_sym_keybind_value_repeat1,
    STATE(19), 2,
      sym_modifier_key,
      sym_key,
    ACTIONS(23), 4,
      anon_sym_all,
      anon_sym_global,
      anon_sym_local,
      anon_sym_unconsumed,
    ACTIONS(27), 9,
      anon_sym_shift,
      anon_sym_ctrl,
      anon_sym_control,
      anon_sym_alt,
      anon_sym_option,
      anon_sym_opt,
      anon_sym_super,
      anon_sym_cmd,
      anon_sym_command,
  [56] = 9,
    ACTIONS(25), 1,
      anon_sym_physical,
    ACTIONS(29), 1,
      aux_sym_key_token1,
    STATE(25), 1,
      sym_chord,
    STATE(53), 1,
      sym_keybind_trigger,
    STATE(62), 1,
      sym_key_qualifier,
    STATE(4), 2,
      sym_keybind_modifier,
      aux_sym_keybind_value_repeat1,
    STATE(19), 2,
      sym_modifier_key,
      sym_key,
    ACTIONS(23), 4,
      anon_sym_all,
      anon_sym_global,
      anon_sym_local,
      anon_sym_unconsumed,
    ACTIONS(27), 9,
      anon_sym_shift,
      anon_sym_ctrl,
      anon_sym_control,
      anon_sym_alt,
      anon_sym_option,
      anon_sym_opt,
      anon_sym_super,
      anon_sym_cmd,
      anon_sym_command,
  [97] = 3,
    STATE(4), 2,
      sym_keybind_modifier,
      aux_sym_keybind_value_repeat1,
    ACTIONS(31), 4,
      anon_sym_all,
      anon_sym_global,
      anon_sym_local,
      anon_sym_unconsumed,
    ACTIONS(34), 11,
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
  [121] = 10,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(36), 1,
      aux_sym_source_file_token1,
    ACTIONS(38), 1,
      aux_sym_value_token1,
    ACTIONS(46), 1,
      aux_sym_raw_value_token1,
    STATE(38), 1,
      sym_value,
    ACTIONS(40), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(42), 2,
      sym_number_literal,
      sym_color_value,
    ACTIONS(44), 2,
      sym_percent_adjustment,
      sym_numeric_adjustment,
    STATE(65), 4,
      sym_boolean_literal,
      sym_adjustment,
      sym_string_literal,
      sym_raw_value,
  [158] = 6,
    ACTIONS(25), 1,
      anon_sym_physical,
    ACTIONS(29), 1,
      aux_sym_key_token1,
    STATE(33), 1,
      sym_chord,
    STATE(62), 1,
      sym_key_qualifier,
    STATE(19), 2,
      sym_modifier_key,
      sym_key,
    ACTIONS(27), 9,
      anon_sym_shift,
      anon_sym_ctrl,
      anon_sym_control,
      anon_sym_alt,
      anon_sym_option,
      anon_sym_opt,
      anon_sym_super,
      anon_sym_cmd,
      anon_sym_command,
  [186] = 1,
    ACTIONS(48), 15,
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
  [204] = 10,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    ACTIONS(52), 1,
      aux_sym_source_file_token1,
    ACTIONS(55), 1,
      sym_comment,
    ACTIONS(58), 1,
      sym__kebab_case_identifier,
    ACTIONS(61), 1,
      anon_sym_palette,
    ACTIONS(64), 1,
      anon_sym_config_DASHfile,
    ACTIONS(67), 1,
      anon_sym_keybind,
    STATE(61), 1,
      sym_property,
    STATE(8), 2,
      sym_directive,
      aux_sym_source_file_repeat1,
    STATE(12), 4,
      sym_basic_directive,
      sym_palette_directive,
      sym_config_file_directive,
      sym_keybind_directive,
  [239] = 10,
    ACTIONS(9), 1,
      sym__kebab_case_identifier,
    ACTIONS(11), 1,
      anon_sym_palette,
    ACTIONS(13), 1,
      anon_sym_config_DASHfile,
    ACTIONS(15), 1,
      anon_sym_keybind,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
    ACTIONS(72), 1,
      aux_sym_source_file_token1,
    ACTIONS(74), 1,
      sym_comment,
    STATE(61), 1,
      sym_property,
    STATE(8), 2,
      sym_directive,
      aux_sym_source_file_repeat1,
    STATE(12), 4,
      sym_basic_directive,
      sym_palette_directive,
      sym_config_file_directive,
      sym_keybind_directive,
  [274] = 5,
    ACTIONS(25), 1,
      anon_sym_physical,
    ACTIONS(29), 1,
      aux_sym_key_token1,
    STATE(62), 1,
      sym_key_qualifier,
    STATE(29), 2,
      sym_modifier_key,
      sym_key,
    ACTIONS(27), 9,
      anon_sym_shift,
      anon_sym_ctrl,
      anon_sym_control,
      anon_sym_alt,
      anon_sym_option,
      anon_sym_opt,
      anon_sym_super,
      anon_sym_cmd,
      anon_sym_command,
  [299] = 7,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(46), 1,
      aux_sym_raw_value_token1,
    ACTIONS(40), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(44), 2,
      sym_percent_adjustment,
      sym_numeric_adjustment,
    ACTIONS(76), 2,
      sym_number_literal,
      sym_color_value,
    STATE(55), 4,
      sym_boolean_literal,
      sym_adjustment,
      sym_string_literal,
      sym_raw_value,
  [327] = 2,
    ACTIONS(78), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(80), 5,
      sym_comment,
      sym__kebab_case_identifier,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_keybind,
  [339] = 2,
    ACTIONS(82), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(84), 5,
      sym_comment,
      sym__kebab_case_identifier,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_keybind,
  [351] = 2,
    ACTIONS(86), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(88), 5,
      sym_comment,
      sym__kebab_case_identifier,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_keybind,
  [363] = 2,
    ACTIONS(90), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(92), 5,
      sym_comment,
      sym__kebab_case_identifier,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_keybind,
  [375] = 2,
    ACTIONS(94), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(96), 5,
      sym_comment,
      sym__kebab_case_identifier,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_keybind,
  [387] = 2,
    ACTIONS(98), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(100), 5,
      sym_comment,
      sym__kebab_case_identifier,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_keybind,
  [399] = 2,
    ACTIONS(102), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(104), 5,
      sym_comment,
      sym__kebab_case_identifier,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_keybind,
  [411] = 3,
    ACTIONS(108), 1,
      anon_sym_PLUS,
    STATE(20), 1,
      aux_sym_chord_repeat1,
    ACTIONS(106), 2,
      anon_sym_EQ2,
      anon_sym_GT,
  [422] = 3,
    ACTIONS(108), 1,
      anon_sym_PLUS,
    STATE(21), 1,
      aux_sym_chord_repeat1,
    ACTIONS(110), 2,
      anon_sym_EQ2,
      anon_sym_GT,
  [433] = 3,
    ACTIONS(114), 1,
      anon_sym_PLUS,
    STATE(21), 1,
      aux_sym_chord_repeat1,
    ACTIONS(112), 2,
      anon_sym_EQ2,
      anon_sym_GT,
  [444] = 3,
    ACTIONS(117), 1,
      aux_sym_source_file_token1,
    ACTIONS(119), 1,
      aux_sym_palette_value_token1,
    STATE(41), 1,
      sym_palette_value,
  [454] = 1,
    ACTIONS(121), 3,
      anon_sym_EQ2,
      anon_sym_GT,
      anon_sym_PLUS,
  [460] = 1,
    ACTIONS(123), 3,
      anon_sym_EQ2,
      anon_sym_GT,
      anon_sym_PLUS,
  [466] = 3,
    ACTIONS(125), 1,
      anon_sym_EQ2,
    ACTIONS(127), 1,
      anon_sym_GT,
    STATE(26), 1,
      aux_sym_keybind_trigger_repeat1,
  [476] = 3,
    ACTIONS(127), 1,
      anon_sym_GT,
    ACTIONS(129), 1,
      anon_sym_EQ2,
    STATE(28), 1,
      aux_sym_keybind_trigger_repeat1,
  [486] = 1,
    ACTIONS(131), 3,
      anon_sym_EQ2,
      anon_sym_GT,
      anon_sym_PLUS,
  [492] = 3,
    ACTIONS(133), 1,
      anon_sym_EQ2,
    ACTIONS(135), 1,
      anon_sym_GT,
    STATE(28), 1,
      aux_sym_keybind_trigger_repeat1,
  [502] = 1,
    ACTIONS(112), 3,
      anon_sym_EQ2,
      anon_sym_GT,
      anon_sym_PLUS,
  [508] = 2,
    ACTIONS(138), 1,
      aux_sym_source_file_token1,
    ACTIONS(140), 1,
      anon_sym_COLON,
  [515] = 2,
    ACTIONS(142), 1,
      sym__snake_case_identifier,
    STATE(67), 1,
      sym_keybind_action,
  [522] = 2,
    ACTIONS(142), 1,
      sym__snake_case_identifier,
    STATE(60), 1,
      sym_keybind_action,
  [529] = 1,
    ACTIONS(133), 2,
      anon_sym_EQ2,
      anon_sym_GT,
  [534] = 2,
    ACTIONS(144), 1,
      aux_sym_raw_value_token1,
    STATE(35), 1,
      sym_path_value,
  [541] = 1,
    ACTIONS(146), 1,
      aux_sym_source_file_token1,
  [545] = 1,
    ACTIONS(148), 1,
      aux_sym_source_file_token1,
  [549] = 1,
    ACTIONS(150), 1,
      aux_sym_source_file_token1,
  [553] = 1,
    ACTIONS(152), 1,
      aux_sym_source_file_token1,
  [557] = 1,
    ACTIONS(154), 1,
      aux_sym_palette_value_token2,
  [561] = 1,
    ACTIONS(156), 1,
      anon_sym_EQ2,
  [565] = 1,
    ACTIONS(158), 1,
      aux_sym_source_file_token1,
  [569] = 1,
    ACTIONS(160), 1,
      anon_sym_DQUOTE,
  [573] = 1,
    ACTIONS(160), 1,
      anon_sym_SQUOTE,
  [577] = 1,
    ACTIONS(162), 1,
      aux_sym_source_file_token1,
  [581] = 1,
    ACTIONS(164), 1,
      aux_sym_key_token1,
  [585] = 1,
    ACTIONS(166), 1,
      aux_sym_keybind_directive_token1,
  [589] = 1,
    ACTIONS(168), 1,
      aux_sym_string_literal_token1,
  [593] = 1,
    ACTIONS(170), 1,
      anon_sym_EQ,
  [597] = 1,
    ACTIONS(172), 1,
      aux_sym_string_literal_token2,
  [601] = 1,
    ACTIONS(174), 1,
      aux_sym_source_file_token1,
  [605] = 1,
    ACTIONS(176), 1,
      ts_builtin_sym_end,
  [609] = 1,
    ACTIONS(178), 1,
      anon_sym_COLON,
  [613] = 1,
    ACTIONS(180), 1,
      anon_sym_EQ2,
  [617] = 1,
    ACTIONS(182), 1,
      anon_sym_EQ,
  [621] = 1,
    ACTIONS(184), 1,
      aux_sym_source_file_token1,
  [625] = 1,
    ACTIONS(186), 1,
      anon_sym_EQ,
  [629] = 1,
    ACTIONS(188), 1,
      aux_sym_source_file_token1,
  [633] = 1,
    ACTIONS(190), 1,
      aux_sym_source_file_token1,
  [637] = 1,
    ACTIONS(192), 1,
      aux_sym_source_file_token1,
  [641] = 1,
    ACTIONS(194), 1,
      aux_sym_source_file_token1,
  [645] = 1,
    ACTIONS(196), 1,
      anon_sym_EQ,
  [649] = 1,
    ACTIONS(198), 1,
      aux_sym_key_token1,
  [653] = 1,
    ACTIONS(200), 1,
      anon_sym_EQ2,
  [657] = 1,
    ACTIONS(202), 1,
      aux_sym_source_file_token1,
  [661] = 1,
    ACTIONS(204), 1,
      aux_sym_source_file_token1,
  [665] = 1,
    ACTIONS(206), 1,
      aux_sym_raw_value_token1,
  [669] = 1,
    ACTIONS(208), 1,
      aux_sym_source_file_token1,
  [673] = 1,
    ACTIONS(210), 1,
      aux_sym_source_file_token1,
  [677] = 1,
    ACTIONS(212), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 56,
  [SMALL_STATE(4)] = 97,
  [SMALL_STATE(5)] = 121,
  [SMALL_STATE(6)] = 158,
  [SMALL_STATE(7)] = 186,
  [SMALL_STATE(8)] = 204,
  [SMALL_STATE(9)] = 239,
  [SMALL_STATE(10)] = 274,
  [SMALL_STATE(11)] = 299,
  [SMALL_STATE(12)] = 327,
  [SMALL_STATE(13)] = 339,
  [SMALL_STATE(14)] = 351,
  [SMALL_STATE(15)] = 363,
  [SMALL_STATE(16)] = 375,
  [SMALL_STATE(17)] = 387,
  [SMALL_STATE(18)] = 399,
  [SMALL_STATE(19)] = 411,
  [SMALL_STATE(20)] = 422,
  [SMALL_STATE(21)] = 433,
  [SMALL_STATE(22)] = 444,
  [SMALL_STATE(23)] = 454,
  [SMALL_STATE(24)] = 460,
  [SMALL_STATE(25)] = 466,
  [SMALL_STATE(26)] = 476,
  [SMALL_STATE(27)] = 486,
  [SMALL_STATE(28)] = 492,
  [SMALL_STATE(29)] = 502,
  [SMALL_STATE(30)] = 508,
  [SMALL_STATE(31)] = 515,
  [SMALL_STATE(32)] = 522,
  [SMALL_STATE(33)] = 529,
  [SMALL_STATE(34)] = 534,
  [SMALL_STATE(35)] = 541,
  [SMALL_STATE(36)] = 545,
  [SMALL_STATE(37)] = 549,
  [SMALL_STATE(38)] = 553,
  [SMALL_STATE(39)] = 557,
  [SMALL_STATE(40)] = 561,
  [SMALL_STATE(41)] = 565,
  [SMALL_STATE(42)] = 569,
  [SMALL_STATE(43)] = 573,
  [SMALL_STATE(44)] = 577,
  [SMALL_STATE(45)] = 581,
  [SMALL_STATE(46)] = 585,
  [SMALL_STATE(47)] = 589,
  [SMALL_STATE(48)] = 593,
  [SMALL_STATE(49)] = 597,
  [SMALL_STATE(50)] = 601,
  [SMALL_STATE(51)] = 605,
  [SMALL_STATE(52)] = 609,
  [SMALL_STATE(53)] = 613,
  [SMALL_STATE(54)] = 617,
  [SMALL_STATE(55)] = 621,
  [SMALL_STATE(56)] = 625,
  [SMALL_STATE(57)] = 629,
  [SMALL_STATE(58)] = 633,
  [SMALL_STATE(59)] = 637,
  [SMALL_STATE(60)] = 641,
  [SMALL_STATE(61)] = 645,
  [SMALL_STATE(62)] = 649,
  [SMALL_STATE(63)] = 653,
  [SMALL_STATE(64)] = 657,
  [SMALL_STATE(65)] = 661,
  [SMALL_STATE(66)] = 665,
  [SMALL_STATE(67)] = 669,
  [SMALL_STATE(68)] = 673,
  [SMALL_STATE(69)] = 677,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keybind_value_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keybind_value_repeat1, 2, 0, 0),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keybind_modifier, 2, 0, 3),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_palette_directive, 3, 0, 1),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_palette_directive, 3, 0, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_directive, 3, 0, 1),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_directive, 3, 0, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file_directive, 4, 0, 2),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_config_file_directive, 4, 0, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_directive, 4, 0, 2),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keybind_directive, 4, 0, 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_palette_directive, 4, 0, 2),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_palette_directive, 4, 0, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_directive, 4, 0, 2),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_directive, 4, 0, 2),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord, 1, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord, 2, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_chord_repeat1, 2, 0, 0),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chord_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier_key, 1, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_trigger, 1, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_trigger, 2, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 2, 0, 4),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keybind_trigger_repeat1, 2, 0, 0),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keybind_trigger_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_action, 1, 0, 5),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adjustment, 1, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_value, 1, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_value, 1, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_qualifier, 2, 0, 4),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 1, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_value, 1, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_palette_value, 3, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_value, 3, 0, 6),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_value, 4, 0, 7),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_action, 3, 0, 8),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
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
