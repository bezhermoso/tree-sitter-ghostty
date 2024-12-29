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
#define STATE_COUNT 68
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 69
#define ALIAS_COUNT 2
#define TOKEN_COUNT 42
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 12

enum ts_symbol_identifiers {
  aux_sym_source_file_token1 = 1,
  sym_comment = 2,
  anon_sym_EQ = 3,
  sym__kebab_case_identifier = 4,
  sym__snake_case_identifier = 5,
  anon_sym_true = 6,
  anon_sym_false = 7,
  sym_number_literal = 8,
  anon_sym_DQUOTE = 9,
  aux_sym_string_literal_token1 = 10,
  anon_sym_SQUOTE = 11,
  aux_sym_string_literal_token2 = 12,
  sym_color_value = 13,
  sym_percent_adjustment = 14,
  sym_numeric_adjustment = 15,
  aux_sym_raw_value_token1 = 16,
  anon_sym_palette = 17,
  aux_sym_palette_value_token1 = 18,
  anon_sym_EQ2 = 19,
  aux_sym_palette_value_token2 = 20,
  anon_sym_config_DASHfile = 21,
  anon_sym_keybind = 22,
  anon_sym_clear = 23,
  anon_sym_all = 24,
  anon_sym_global = 25,
  anon_sym_local = 26,
  anon_sym_unconsumed = 27,
  anon_sym_COLON = 28,
  anon_sym_physical = 29,
  anon_sym_GT = 30,
  anon_sym_PLUS = 31,
  anon_sym_shift = 32,
  anon_sym_ctrl = 33,
  anon_sym_control = 34,
  anon_sym_alt = 35,
  anon_sym_option = 36,
  anon_sym_opt = 37,
  anon_sym_super = 38,
  anon_sym_cmd = 39,
  anon_sym_command = 40,
  aux_sym_key_token1 = 41,
  sym_source_file = 42,
  sym_directive = 43,
  sym_basic_directive = 44,
  sym_property = 45,
  sym_value = 46,
  sym_boolean_literal = 47,
  sym_adjustment = 48,
  sym_string_literal = 49,
  sym_raw_value = 50,
  sym_palette_directive = 51,
  sym_palette_value = 52,
  sym_config_file_directive = 53,
  sym_path_value = 54,
  sym_keybind_directive = 55,
  sym__keybind_value = 56,
  sym_keybind_value = 57,
  sym_keybind_modifier = 58,
  sym_key_prefix = 59,
  sym_keybind_trigger = 60,
  sym_chord = 61,
  sym_key_modifier = 62,
  sym_key = 63,
  sym_keybind_action = 64,
  aux_sym_source_file_repeat1 = 65,
  aux_sym_keybind_value_repeat1 = 66,
  aux_sym_keybind_trigger_repeat1 = 67,
  aux_sym_chord_repeat1 = 68,
  alias_sym_action_argument = 69,
  alias_sym_action_name = 70,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_file_token1] = "source_file_token1",
  [sym_comment] = "comment",
  [anon_sym_EQ] = "=",
  [sym__kebab_case_identifier] = "_kebab_case_identifier",
  [sym__snake_case_identifier] = "_snake_case_identifier",
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
  [anon_sym_clear] = "value",
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
  [sym__keybind_value] = "_keybind_value",
  [sym_keybind_value] = "keybind_value",
  [sym_keybind_modifier] = "keybind_modifier",
  [sym_key_prefix] = "key_prefix",
  [sym_keybind_trigger] = "keybind_trigger",
  [sym_chord] = "chord",
  [sym_key_modifier] = "key_modifier",
  [sym_key] = "key",
  [sym_keybind_action] = "keybind_action",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_keybind_value_repeat1] = "keybind_value_repeat1",
  [aux_sym_keybind_trigger_repeat1] = "keybind_trigger_repeat1",
  [aux_sym_chord_repeat1] = "chord_repeat1",
  [alias_sym_action_argument] = "action_argument",
  [alias_sym_action_name] = "action_name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_source_file_token1] = aux_sym_source_file_token1,
  [sym_comment] = sym_comment,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym__kebab_case_identifier] = sym__kebab_case_identifier,
  [sym__snake_case_identifier] = sym__snake_case_identifier,
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
  [anon_sym_clear] = sym_value,
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
  [sym__keybind_value] = sym__keybind_value,
  [sym_keybind_value] = sym_keybind_value,
  [sym_keybind_modifier] = sym_keybind_modifier,
  [sym_key_prefix] = sym_key_prefix,
  [sym_keybind_trigger] = sym_keybind_trigger,
  [sym_chord] = sym_chord,
  [sym_key_modifier] = sym_key_modifier,
  [sym_key] = sym_key,
  [sym_keybind_action] = sym_keybind_action,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_keybind_value_repeat1] = aux_sym_keybind_value_repeat1,
  [aux_sym_keybind_trigger_repeat1] = aux_sym_keybind_trigger_repeat1,
  [aux_sym_chord_repeat1] = aux_sym_chord_repeat1,
  [alias_sym_action_argument] = alias_sym_action_argument,
  [alias_sym_action_name] = alias_sym_action_name,
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
    .visible = false,
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
  [anon_sym_clear] = {
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
  [sym_key_prefix] = {
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
  [alias_sym_action_name] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_action = 1,
  field_action_name = 2,
  field_argument = 3,
  field_bind = 4,
  field_modifier = 5,
  field_prefix_name = 6,
  field_property = 7,
  field_trigger = 8,
  field_value = 9,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_action] = "action",
  [field_action_name] = "action_name",
  [field_argument] = "argument",
  [field_bind] = "bind",
  [field_modifier] = "modifier",
  [field_prefix_name] = "prefix_name",
  [field_property] = "property",
  [field_trigger] = "trigger",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [4] = {.index = 2, .length = 2},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 1},
  [7] = {.index = 6, .length = 1},
  [8] = {.index = 7, .length = 1},
  [9] = {.index = 8, .length = 2},
  [10] = {.index = 10, .length = 2},
  [11] = {.index = 12, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_property, 0},
  [1] =
    {field_bind, 0},
  [2] =
    {field_property, 0},
    {field_value, 2},
  [4] =
    {field_modifier, 0},
  [5] =
    {field_prefix_name, 0},
  [6] =
    {field_bind, 1},
  [7] =
    {field_action_name, 0},
  [8] =
    {field_action, 2},
    {field_trigger, 0},
  [10] =
    {field_action, 3},
    {field_trigger, 1},
  [12] =
    {field_action_name, 0},
    {field_argument, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [3] = {
    [0] = sym_value,
  },
  [8] = {
    [0] = alias_sym_action_name,
  },
  [11] = {
    [0] = alias_sym_action_name,
    [2] = alias_sym_action_argument,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_string_literal, 2,
    sym_string_literal,
    sym_value,
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
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(32);
      ADVANCE_MAP(
        '"', 239,
        '#', 26,
        '\'', 243,
        '+', 298,
        ':', 294,
        '=', 276,
        '>', 297,
        '_', 208,
        'a', 70,
        'c', 80,
        'f', 37,
        'g', 82,
        'k', 54,
        'l', 92,
        'o', 97,
        'p', 38,
        's', 65,
        't', 99,
        'u', 89,
        'b', 123,
        'd', 123,
        'e', 123,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      if (('h' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == 'c') ADVANCE(142);
      if (lookahead == 'k') ADVANCE(130);
      if (lookahead == 'p') ADVANCE(126);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(35);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '\n', 34,
        '\r', 4,
        '"', 240,
        '#', 269,
        '\'', 244,
        'f', 253,
        't', 257,
        '+', 261,
        '-', 261,
        '\t', 252,
        0x0b, 252,
        '\f', 252,
        ' ', 252,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(268);
      if (lookahead != 0) ADVANCE(270);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '"', 239,
        '\'', 243,
        'a', 169,
        'c', 170,
        'g', 177,
        'l', 187,
        'o', 192,
        'p', 165,
        's', 166,
        'u', 185,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(318);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '=' &&
          lookahead != '>') ADVANCE(317);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == '=') ADVANCE(36);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 7:
      if (lookahead == '+') ADVANCE(298);
      if (lookahead == '=') ADVANCE(276);
      if (lookahead == '>') ADVANCE(297);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 8:
      if (lookahead == '+') ADVANCE(298);
      if (lookahead == '>') ADVANCE(297);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(36);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        'a', 169,
        'c', 179,
        'g', 177,
        'l', 187,
        'o', 192,
        'p', 165,
        's', 166,
        'u', 185,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(319);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '=' &&
          lookahead != '>') ADVANCE(317);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(178);
      if (lookahead == 'c') ADVANCE(179);
      if (lookahead == 'o') ADVANCE(192);
      if (lookahead == 'p') ADVANCE(165);
      if (lookahead == 's') ADVANCE(166);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(320);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '=' &&
          lookahead != '>') ADVANCE(317);
      END_STATE();
    case 12:
      if (lookahead == 'f') ADVANCE(135);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 13:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(13);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(260);
      if (lookahead != 0) ADVANCE(270);
      END_STATE();
    case 14:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(321);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '=' &&
          lookahead != '>') ADVANCE(317);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(277);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(247);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
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
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 29:
      if (eof) ADVANCE(32);
      ADVANCE_MAP(
        '\n', 33,
        '\r', 1,
        '#', 3,
        ':', 294,
        '=', 276,
        'c', 142,
        'k', 130,
        'p', 126,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 30:
      if (eof) ADVANCE(32);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == 'c') ADVANCE(142);
      if (lookahead == 'k') ADVANCE(130);
      if (lookahead == 'p') ADVANCE(126);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 31:
      if (eof) ADVANCE(32);
      ADVANCE_MAP(
        '"', 239,
        '#', 27,
        '\'', 243,
        '+', 298,
        '=', 36,
        '>', 297,
        '_', 208,
        'a', 71,
        'c', 81,
        'f', 44,
        'g', 82,
        'k', 54,
        'l', 92,
        'o', 97,
        'p', 38,
        's', 65,
        't', 99,
        'u', 89,
        'b', 124,
        'd', 124,
        'e', 124,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if (('h' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '\r') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(252);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'a') ADVANCE(73);
      if (('b' <= lookahead && lookahead <= 'f')) ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(214);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'a') ADVANCE(83);
      if (lookahead == 'h') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'a') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'a') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'a') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'a') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'a') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'a') ADVANCE(74);
      if (('b' <= lookahead && lookahead <= 'f')) ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'b') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'b') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'c') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'c') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'c') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'd') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'd') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'd') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'd') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'e') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'e') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'e') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'e') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'e') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'e') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'e') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'e') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'f') ADVANCE(67);
      if (lookahead == 't') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'f') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'g') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'h') ADVANCE(66);
      if (lookahead == 'u') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'i') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'i') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'i') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'i') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'l') ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(22);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(214);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'l') ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(23);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'l') ADVANCE(286);
      if (lookahead == 't') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'l') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(20);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(210);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'l') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(21);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'l') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'l') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'l') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'l') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'l') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'l') ADVANCE(55);
      if (lookahead == 'm') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(84);
      if (lookahead == 't') ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(22);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(214);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'l') ADVANCE(55);
      if (lookahead == 'm') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(84);
      if (lookahead == 't') ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(23);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'l') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'l') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'm') ADVANCE(85);
      if (lookahead == 'n') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'm') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'm') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'n') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'n') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'n') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'n') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'n') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'o') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'o') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'o') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'o') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'o') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'p') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'p') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'r') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'r') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'r') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'r') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'r') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 's') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 's') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 's') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 't') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 't') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 't') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 't') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'u') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'u') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'y') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'y') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(277);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(247);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(16);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(17);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(211);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(19);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(20);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(210);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(21);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(22);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(214);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(23);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(139);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'b') ADVANCE(137);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'd') ADVANCE(283);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(281);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(145);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(143);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(272);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(136);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'g') ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(138);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(134);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(141);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(129);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(131);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(133);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(128);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(140);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 't') ADVANCE(144);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 't') ADVANCE(132);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'y') ADVANCE(127);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '_') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(12);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (lookahead == 'a') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (lookahead == 'a') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (lookahead == 'a') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (lookahead == 'a') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (lookahead == 'a') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (lookahead == 'b') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (lookahead == 'c') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (lookahead == 'c') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (lookahead == 'c') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (lookahead == 'd') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (lookahead == 'd') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (lookahead == 'd') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (lookahead == 'e') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (lookahead == 'e') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (lookahead == 'e') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (lookahead == 'f') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (lookahead == 'h') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (lookahead == 'h') ADVANCE(167);
      if (lookahead == 'u') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (lookahead == 'i') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (lookahead == 'i') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (lookahead == 'l') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (lookahead == 'l') ADVANCE(161);
      if (lookahead == 'm') ADVANCE(158);
      if (lookahead == 'o') ADVANCE(180);
      if (lookahead == 't') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (lookahead == 'l') ADVANCE(287);
      if (lookahead == 't') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (lookahead == 'l') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (lookahead == 'l') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (lookahead == 'l') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (lookahead == 'l') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (lookahead == 'l') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (lookahead == 'l') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (lookahead == 'l') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (lookahead == 'm') ADVANCE(158);
      if (lookahead == 'o') ADVANCE(180);
      if (lookahead == 't') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (lookahead == 'm') ADVANCE(182);
      if (lookahead == 'n') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (lookahead == 'm') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (lookahead == 'm') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (lookahead == 'n') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (lookahead == 'n') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (lookahead == 'n') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (lookahead == 'n') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (lookahead == 'o') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (lookahead == 'o') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (lookahead == 'o') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (lookahead == 'o') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (lookahead == 'o') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (lookahead == 'p') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (lookahead == 'p') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (lookahead == 'r') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (lookahead == 'r') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (lookahead == 'r') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (lookahead == 'r') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (lookahead == 's') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (lookahead == 's') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (lookahead == 't') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (lookahead == 't') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (lookahead == 't') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (lookahead == 't') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (lookahead == 'u') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (lookahead == 'y') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(247);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(277);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(210);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(270);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(270);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '%') ADVANCE(249);
      if (lookahead == '.') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(270);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '%') ADVANCE(249);
      if (lookahead == '.') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(270);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '%') ADVANCE(249);
      if (lookahead == '.') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(223);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(270);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '%') ADVANCE(249);
      if (lookahead == '.') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(270);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '%') ADVANCE(249);
      if (lookahead == '.') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(270);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '%') ADVANCE(249);
      if (lookahead == '.') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(270);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '%') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(270);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(277);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(247);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(235);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(270);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(242);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(242);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(270);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(246);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_color_value);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_color_value);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(270);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_percent_adjustment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(270);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_numeric_adjustment);
      if (lookahead == '%') ADVANCE(249);
      if (lookahead == '.') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(270);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_numeric_adjustment);
      if (lookahead == '%') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(270);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_raw_value_token1);
      ADVANCE_MAP(
        '\n', 34,
        '\r', 4,
        '"', 240,
        '#', 269,
        '\'', 244,
        'f', 253,
        't', 257,
        '+', 261,
        '-', 261,
        '\t', 252,
        0x0b, 252,
        '\f', 252,
        ' ', 252,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(268);
      if (lookahead != 0) ADVANCE(270);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_raw_value_token1);
      if (lookahead == 'a') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(270);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_raw_value_token1);
      if (lookahead == 'e') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(270);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_raw_value_token1);
      if (lookahead == 'e') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(270);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_raw_value_token1);
      if (lookahead == 'l') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(270);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_raw_value_token1);
      if (lookahead == 'r') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(270);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_raw_value_token1);
      if (lookahead == 's') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(270);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_raw_value_token1);
      if (lookahead == 'u') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(270);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_raw_value_token1);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(260);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(270);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_raw_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(270);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_raw_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(270);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_raw_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(270);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_raw_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(270);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_raw_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(270);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_raw_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(270);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_raw_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(270);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_raw_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(270);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_raw_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(270);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_raw_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_palette);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_palette);
      if (lookahead == '-') ADVANCE(28);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_palette_value_token1);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_palette_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_palette_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_palette_value_token2);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_palette_value_token2);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_palette_value_token2);
      if (lookahead == '.') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_palette_value_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_config_DASHfile);
      if (lookahead == '-') ADVANCE(28);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_keybind);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_keybind);
      if (lookahead == '-') ADVANCE(28);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_clear);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_clear);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_all);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_all);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_global);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_global);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_local);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_local);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_unconsumed);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_unconsumed);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_physical);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_physical);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_shift);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_shift);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_ctrl);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_ctrl);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_control);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_control);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_alt);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_alt);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_option);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_option);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_opt);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'i') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_opt);
      if (lookahead == 'i') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_super);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_super);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_cmd);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_cmd);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_command);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_command);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_key_token1);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_key_token1);
      ADVANCE_MAP(
        '"', 239,
        '\'', 243,
        'a', 169,
        'c', 170,
        'g', 177,
        'l', 187,
        'o', 192,
        'p', 165,
        's', 166,
        'u', 185,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(318);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '=' &&
          lookahead != '>') ADVANCE(317);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_key_token1);
      ADVANCE_MAP(
        'a', 169,
        'c', 179,
        'g', 177,
        'l', 187,
        'o', 192,
        'p', 165,
        's', 166,
        'u', 185,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(319);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '=' &&
          lookahead != '>') ADVANCE(317);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == 'a') ADVANCE(178);
      if (lookahead == 'c') ADVANCE(179);
      if (lookahead == 'o') ADVANCE(192);
      if (lookahead == 'p') ADVANCE(165);
      if (lookahead == 's') ADVANCE(166);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(320);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '=' &&
          lookahead != '>') ADVANCE(317);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(321);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '=' &&
          lookahead != '>') ADVANCE(317);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 29},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 11},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 11},
  [9] = {.lex_state = 29},
  [10] = {.lex_state = 29},
  [11] = {.lex_state = 29},
  [12] = {.lex_state = 29},
  [13] = {.lex_state = 29},
  [14] = {.lex_state = 29},
  [15] = {.lex_state = 29},
  [16] = {.lex_state = 29},
  [17] = {.lex_state = 29},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 29},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 13},
  [31] = {.lex_state = 14},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 29},
  [34] = {.lex_state = 14},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 13},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 29},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 29},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 29},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 29},
  [47] = {.lex_state = 29},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 241},
  [51] = {.lex_state = 245},
  [52] = {.lex_state = 29},
  [53] = {.lex_state = 29},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 29},
  [57] = {.lex_state = 29},
  [58] = {.lex_state = 29},
  [59] = {.lex_state = 29},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 29},
  [62] = {.lex_state = 29},
  [63] = {.lex_state = 29},
  [64] = {.lex_state = 29},
  [65] = {.lex_state = 29},
  [66] = {.lex_state = 29},
  [67] = {.lex_state = 29},
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
    [sym_source_file] = STATE(45),
    [sym_directive] = STATE(10),
    [sym_basic_directive] = STATE(11),
    [sym_property] = STATE(40),
    [sym_palette_directive] = STATE(11),
    [sym_config_file_directive] = STATE(11),
    [sym_keybind_directive] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(10),
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
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_clear,
    ACTIONS(27), 1,
      anon_sym_physical,
    STATE(24), 1,
      sym_chord,
    STATE(34), 1,
      sym_key_prefix,
    STATE(52), 1,
      sym_string_literal,
    STATE(63), 1,
      sym_keybind_trigger,
    ACTIONS(17), 2,
      sym__snake_case_identifier,
      aux_sym_key_token1,
    STATE(3), 2,
      sym_keybind_modifier,
      aux_sym_keybind_value_repeat1,
    STATE(18), 2,
      sym_key_modifier,
      sym_key,
    STATE(61), 2,
      sym__keybind_value,
      sym_keybind_value,
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
  [58] = 9,
    ACTIONS(27), 1,
      anon_sym_physical,
    STATE(24), 1,
      sym_chord,
    STATE(34), 1,
      sym_key_prefix,
    STATE(53), 1,
      sym_keybind_trigger,
    ACTIONS(17), 2,
      sym__snake_case_identifier,
      aux_sym_key_token1,
    STATE(4), 2,
      sym_keybind_modifier,
      aux_sym_keybind_value_repeat1,
    STATE(18), 2,
      sym_key_modifier,
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
  [100] = 3,
    STATE(4), 2,
      sym_keybind_modifier,
      aux_sym_keybind_value_repeat1,
    ACTIONS(33), 4,
      anon_sym_all,
      anon_sym_global,
      anon_sym_local,
      anon_sym_unconsumed,
    ACTIONS(31), 12,
      sym__snake_case_identifier,
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
  [125] = 6,
    ACTIONS(27), 1,
      anon_sym_physical,
    STATE(29), 1,
      sym_chord,
    STATE(34), 1,
      sym_key_prefix,
    ACTIONS(17), 2,
      sym__snake_case_identifier,
      aux_sym_key_token1,
    STATE(18), 2,
      sym_key_modifier,
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
  [154] = 1,
    ACTIONS(36), 16,
      sym__snake_case_identifier,
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
  [173] = 9,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(38), 1,
      aux_sym_source_file_token1,
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
    STATE(62), 4,
      sym_boolean_literal,
      sym_adjustment,
      sym_string_literal,
      sym_raw_value,
  [207] = 5,
    ACTIONS(27), 1,
      anon_sym_physical,
    STATE(34), 1,
      sym_key_prefix,
    ACTIONS(17), 2,
      sym__snake_case_identifier,
      aux_sym_key_token1,
    STATE(28), 2,
      sym_key_modifier,
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
  [233] = 10,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
    ACTIONS(50), 1,
      aux_sym_source_file_token1,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(56), 1,
      sym__kebab_case_identifier,
    ACTIONS(59), 1,
      anon_sym_palette,
    ACTIONS(62), 1,
      anon_sym_config_DASHfile,
    ACTIONS(65), 1,
      anon_sym_keybind,
    STATE(40), 1,
      sym_property,
    STATE(9), 2,
      sym_directive,
      aux_sym_source_file_repeat1,
    STATE(11), 4,
      sym_basic_directive,
      sym_palette_directive,
      sym_config_file_directive,
      sym_keybind_directive,
  [268] = 10,
    ACTIONS(9), 1,
      sym__kebab_case_identifier,
    ACTIONS(11), 1,
      anon_sym_palette,
    ACTIONS(13), 1,
      anon_sym_config_DASHfile,
    ACTIONS(15), 1,
      anon_sym_keybind,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
    ACTIONS(70), 1,
      aux_sym_source_file_token1,
    ACTIONS(72), 1,
      sym_comment,
    STATE(40), 1,
      sym_property,
    STATE(9), 2,
      sym_directive,
      aux_sym_source_file_repeat1,
    STATE(11), 4,
      sym_basic_directive,
      sym_palette_directive,
      sym_config_file_directive,
      sym_keybind_directive,
  [303] = 2,
    ACTIONS(74), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(76), 5,
      sym_comment,
      sym__kebab_case_identifier,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_keybind,
  [315] = 2,
    ACTIONS(78), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(80), 5,
      sym_comment,
      sym__kebab_case_identifier,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_keybind,
  [327] = 2,
    ACTIONS(82), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(84), 5,
      sym_comment,
      sym__kebab_case_identifier,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_keybind,
  [339] = 2,
    ACTIONS(86), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(88), 5,
      sym_comment,
      sym__kebab_case_identifier,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_keybind,
  [351] = 2,
    ACTIONS(90), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(92), 5,
      sym_comment,
      sym__kebab_case_identifier,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_keybind,
  [363] = 2,
    ACTIONS(94), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(96), 5,
      sym_comment,
      sym__kebab_case_identifier,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_keybind,
  [375] = 2,
    ACTIONS(98), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(100), 5,
      sym_comment,
      sym__kebab_case_identifier,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_keybind,
  [387] = 3,
    ACTIONS(104), 1,
      anon_sym_PLUS,
    STATE(19), 1,
      aux_sym_chord_repeat1,
    ACTIONS(102), 2,
      anon_sym_EQ2,
      anon_sym_GT,
  [398] = 3,
    ACTIONS(104), 1,
      anon_sym_PLUS,
    STATE(20), 1,
      aux_sym_chord_repeat1,
    ACTIONS(106), 2,
      anon_sym_EQ2,
      anon_sym_GT,
  [409] = 3,
    ACTIONS(110), 1,
      anon_sym_PLUS,
    STATE(20), 1,
      aux_sym_chord_repeat1,
    ACTIONS(108), 2,
      anon_sym_EQ2,
      anon_sym_GT,
  [420] = 3,
    ACTIONS(113), 1,
      aux_sym_source_file_token1,
    ACTIONS(115), 1,
      aux_sym_palette_value_token1,
    STATE(44), 1,
      sym_palette_value,
  [430] = 1,
    ACTIONS(117), 3,
      anon_sym_EQ2,
      anon_sym_GT,
      anon_sym_PLUS,
  [436] = 1,
    ACTIONS(119), 3,
      anon_sym_EQ2,
      anon_sym_GT,
      anon_sym_PLUS,
  [442] = 3,
    ACTIONS(121), 1,
      anon_sym_EQ2,
    ACTIONS(123), 1,
      anon_sym_GT,
    STATE(25), 1,
      aux_sym_keybind_trigger_repeat1,
  [452] = 3,
    ACTIONS(123), 1,
      anon_sym_GT,
    ACTIONS(125), 1,
      anon_sym_EQ2,
    STATE(27), 1,
      aux_sym_keybind_trigger_repeat1,
  [462] = 1,
    ACTIONS(127), 3,
      anon_sym_EQ2,
      anon_sym_GT,
      anon_sym_PLUS,
  [468] = 3,
    ACTIONS(129), 1,
      anon_sym_EQ2,
    ACTIONS(131), 1,
      anon_sym_GT,
    STATE(27), 1,
      aux_sym_keybind_trigger_repeat1,
  [478] = 1,
    ACTIONS(108), 3,
      anon_sym_EQ2,
      anon_sym_GT,
      anon_sym_PLUS,
  [484] = 1,
    ACTIONS(129), 2,
      anon_sym_EQ2,
      anon_sym_GT,
  [489] = 2,
    ACTIONS(134), 1,
      aux_sym_raw_value_token1,
    STATE(67), 1,
      sym_raw_value,
  [496] = 1,
    ACTIONS(136), 2,
      sym__snake_case_identifier,
      aux_sym_key_token1,
  [501] = 2,
    ACTIONS(138), 1,
      sym__snake_case_identifier,
    STATE(59), 1,
      sym_keybind_action,
  [508] = 2,
    ACTIONS(140), 1,
      aux_sym_source_file_token1,
    ACTIONS(142), 1,
      anon_sym_COLON,
  [515] = 1,
    ACTIONS(144), 2,
      sym__snake_case_identifier,
      aux_sym_key_token1,
  [520] = 2,
    ACTIONS(138), 1,
      sym__snake_case_identifier,
    STATE(66), 1,
      sym_keybind_action,
  [527] = 2,
    ACTIONS(146), 1,
      aux_sym_raw_value_token1,
    STATE(47), 1,
      sym_path_value,
  [534] = 1,
    ACTIONS(148), 1,
      anon_sym_EQ,
  [538] = 1,
    ACTIONS(150), 1,
      aux_sym_source_file_token1,
  [542] = 1,
    ACTIONS(152), 1,
      aux_sym_palette_value_token2,
  [546] = 1,
    ACTIONS(154), 1,
      anon_sym_EQ,
  [550] = 1,
    ACTIONS(156), 1,
      anon_sym_EQ2,
  [554] = 1,
    ACTIONS(158), 1,
      anon_sym_DQUOTE,
  [558] = 1,
    ACTIONS(158), 1,
      anon_sym_SQUOTE,
  [562] = 1,
    ACTIONS(160), 1,
      aux_sym_source_file_token1,
  [566] = 1,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
  [570] = 1,
    ACTIONS(164), 1,
      aux_sym_source_file_token1,
  [574] = 1,
    ACTIONS(166), 1,
      aux_sym_source_file_token1,
  [578] = 1,
    ACTIONS(168), 1,
      anon_sym_EQ,
  [582] = 1,
    ACTIONS(170), 1,
      anon_sym_EQ,
  [586] = 1,
    ACTIONS(172), 1,
      aux_sym_string_literal_token1,
  [590] = 1,
    ACTIONS(174), 1,
      aux_sym_string_literal_token2,
  [594] = 1,
    ACTIONS(176), 1,
      aux_sym_source_file_token1,
  [598] = 1,
    ACTIONS(178), 1,
      anon_sym_EQ2,
  [602] = 1,
    ACTIONS(180), 1,
      anon_sym_COLON,
  [606] = 1,
    ACTIONS(182), 1,
      anon_sym_COLON,
  [610] = 1,
    ACTIONS(184), 1,
      aux_sym_source_file_token1,
  [614] = 1,
    ACTIONS(186), 1,
      aux_sym_source_file_token1,
  [618] = 1,
    ACTIONS(188), 1,
      aux_sym_source_file_token1,
  [622] = 1,
    ACTIONS(190), 1,
      aux_sym_source_file_token1,
  [626] = 1,
    ACTIONS(192), 1,
      anon_sym_EQ,
  [630] = 1,
    ACTIONS(194), 1,
      aux_sym_source_file_token1,
  [634] = 1,
    ACTIONS(196), 1,
      aux_sym_source_file_token1,
  [638] = 1,
    ACTIONS(198), 1,
      anon_sym_EQ2,
  [642] = 1,
    ACTIONS(200), 1,
      aux_sym_source_file_token1,
  [646] = 1,
    ACTIONS(202), 1,
      aux_sym_source_file_token1,
  [650] = 1,
    ACTIONS(204), 1,
      aux_sym_source_file_token1,
  [654] = 1,
    ACTIONS(206), 1,
      aux_sym_source_file_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 58,
  [SMALL_STATE(4)] = 100,
  [SMALL_STATE(5)] = 125,
  [SMALL_STATE(6)] = 154,
  [SMALL_STATE(7)] = 173,
  [SMALL_STATE(8)] = 207,
  [SMALL_STATE(9)] = 233,
  [SMALL_STATE(10)] = 268,
  [SMALL_STATE(11)] = 303,
  [SMALL_STATE(12)] = 315,
  [SMALL_STATE(13)] = 327,
  [SMALL_STATE(14)] = 339,
  [SMALL_STATE(15)] = 351,
  [SMALL_STATE(16)] = 363,
  [SMALL_STATE(17)] = 375,
  [SMALL_STATE(18)] = 387,
  [SMALL_STATE(19)] = 398,
  [SMALL_STATE(20)] = 409,
  [SMALL_STATE(21)] = 420,
  [SMALL_STATE(22)] = 430,
  [SMALL_STATE(23)] = 436,
  [SMALL_STATE(24)] = 442,
  [SMALL_STATE(25)] = 452,
  [SMALL_STATE(26)] = 462,
  [SMALL_STATE(27)] = 468,
  [SMALL_STATE(28)] = 478,
  [SMALL_STATE(29)] = 484,
  [SMALL_STATE(30)] = 489,
  [SMALL_STATE(31)] = 496,
  [SMALL_STATE(32)] = 501,
  [SMALL_STATE(33)] = 508,
  [SMALL_STATE(34)] = 515,
  [SMALL_STATE(35)] = 520,
  [SMALL_STATE(36)] = 527,
  [SMALL_STATE(37)] = 534,
  [SMALL_STATE(38)] = 538,
  [SMALL_STATE(39)] = 542,
  [SMALL_STATE(40)] = 546,
  [SMALL_STATE(41)] = 550,
  [SMALL_STATE(42)] = 554,
  [SMALL_STATE(43)] = 558,
  [SMALL_STATE(44)] = 562,
  [SMALL_STATE(45)] = 566,
  [SMALL_STATE(46)] = 570,
  [SMALL_STATE(47)] = 574,
  [SMALL_STATE(48)] = 578,
  [SMALL_STATE(49)] = 582,
  [SMALL_STATE(50)] = 586,
  [SMALL_STATE(51)] = 590,
  [SMALL_STATE(52)] = 594,
  [SMALL_STATE(53)] = 598,
  [SMALL_STATE(54)] = 602,
  [SMALL_STATE(55)] = 606,
  [SMALL_STATE(56)] = 610,
  [SMALL_STATE(57)] = 614,
  [SMALL_STATE(58)] = 618,
  [SMALL_STATE(59)] = 622,
  [SMALL_STATE(60)] = 626,
  [SMALL_STATE(61)] = 630,
  [SMALL_STATE(62)] = 634,
  [SMALL_STATE(63)] = 638,
  [SMALL_STATE(64)] = 642,
  [SMALL_STATE(65)] = 646,
  [SMALL_STATE(66)] = 650,
  [SMALL_STATE(67)] = 654,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keybind_value_repeat1, 2, 0, 0),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keybind_value_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keybind_modifier, 2, 0, 5),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_palette_directive, 3, 0, 1),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_palette_directive, 3, 0, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_directive, 3, 0, 1),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_directive, 3, 0, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file_directive, 4, 0, 4),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_config_file_directive, 4, 0, 4),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_directive, 4, 0, 4),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keybind_directive, 4, 0, 4),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_palette_directive, 4, 0, 4),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_palette_directive, 4, 0, 4),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_directive, 4, 0, 4),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_directive, 4, 0, 4),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord, 1, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord, 2, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_chord_repeat1, 2, 0, 0),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chord_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_modifier, 1, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1, 0, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_trigger, 1, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_trigger, 2, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 2, 0, 7),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keybind_trigger_repeat1, 2, 0, 0),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keybind_trigger_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_prefix, 2, 0, 6),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_action, 1, 0, 8),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [162] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_value, 1, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 1, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__keybind_value, 1, 0, 3),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_palette_value, 3, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_value, 3, 0, 9),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adjustment, 1, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_value, 1, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_value, 4, 0, 10),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_action, 3, 0, 11),
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
