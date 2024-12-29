#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 74
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 72
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
  anon_sym_config_DASHfile = 23,
  anon_sym_keybind = 24,
  aux_sym_keybind_directive_token1 = 25,
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
  sym_property = 48,
  sym_value = 49,
  sym_boolean = 50,
  sym_adjustment = 51,
  sym_string = 52,
  sym_color = 53,
  sym__raw_value = 54,
  sym_palette_directive = 55,
  sym_palette_value = 56,
  sym_config_file_directive = 57,
  sym_path_value = 58,
  sym_keybind_directive = 59,
  sym_keybind_value = 60,
  sym_keybind_modifier = 61,
  sym_key_qualifier = 62,
  sym_keybind_trigger = 63,
  sym_chord = 64,
  sym_modifier_key = 65,
  sym_key = 66,
  sym_keybind_action = 67,
  aux_sym_document_repeat1 = 68,
  aux_sym_keybind_value_repeat1 = 69,
  aux_sym_keybind_trigger_repeat1 = 70,
  aux_sym_chord_repeat1 = 71,
  alias_sym_action_argument = 72,
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
      if (eof) ADVANCE(36);
      ADVANCE_MAP(
        '"', 173,
        '#', 187,
        '\'', 176,
        '+', 222,
        ':', 218,
        '=', 203,
        '>', 221,
        '_', 149,
        'a', 74,
        'c', 84,
        'f', 41,
        'g', 86,
        'k', 58,
        'l', 96,
        'o', 101,
        'p', 42,
        's', 69,
        't', 103,
        'u', 93,
        'b', 123,
        'd', 123,
        'e', 123,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(35);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('h' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == 'c') ADVANCE(141);
      if (lookahead == 'k') ADVANCE(129);
      if (lookahead == 'p') ADVANCE(125);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(39);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '\n', 38,
        '\r', 154,
        '"', 173,
        '#', 187,
        '\'', 176,
        'f', 182,
        't', 184,
        '+', 185,
        '-', 185,
        '\t', 154,
        0x0b, 154,
        '\f', 154,
        ' ', 154,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(186);
      if (lookahead != 0) ADVANCE(179);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(173);
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '\'') ADVANCE(176);
      if (lookahead == 'f') ADVANCE(182);
      if (lookahead == 't') ADVANCE(184);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(185);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(186);
      if (lookahead != 0) ADVANCE(179);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '"', 173,
        '#', 241,
        '\'', 176,
        'a', 262,
        'c', 263,
        'g', 270,
        'l', 280,
        'o', 285,
        'p', 258,
        's', 259,
        'u', 278,
        ':', 179,
        '=', 179,
        '>', 179,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      if (lookahead != 0) ADVANCE(241);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(173);
      if (lookahead == '\'') ADVANCE(176);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(179);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '+') ADVANCE(222);
      if (lookahead == '=') ADVANCE(203);
      if (lookahead == '>') ADVANCE(221);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '+') ADVANCE(222);
      if (lookahead == '>') ADVANCE(221);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(40);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(207);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        'a', 262,
        'c', 272,
        'g', 270,
        'l', 280,
        'o', 285,
        'p', 258,
        's', 259,
        'u', 278,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      if (lookahead != 0 &&
          (lookahead < '0' || ':' < lookahead) &&
          lookahead != '=' &&
          lookahead != '>') ADVANCE(241);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(271);
      if (lookahead == 'c') ADVANCE(272);
      if (lookahead == 'o') ADVANCE(285);
      if (lookahead == 'p') ADVANCE(258);
      if (lookahead == 's') ADVANCE(259);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      if (lookahead != 0 &&
          (lookahead < '0' || ':' < lookahead) &&
          lookahead != '=' &&
          lookahead != '>') ADVANCE(241);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 16:
      if (lookahead == 'f') ADVANCE(134);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 19:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 20:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 21:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(21);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(196);
      if (lookahead != 0) ADVANCE(197);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(188);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(28);
      END_STATE();
    case 30:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      if (lookahead != 0 &&
          (lookahead < '0' || ':' < lookahead) &&
          lookahead != '=' &&
          lookahead != '>') ADVANCE(241);
      END_STATE();
    case 33:
      if (eof) ADVANCE(36);
      ADVANCE_MAP(
        '\n', 37,
        '\r', 1,
        '#', 3,
        ':', 218,
        '=', 203,
        'c', 141,
        'k', 129,
        'p', 125,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 34:
      if (eof) ADVANCE(36);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == 'c') ADVANCE(141);
      if (lookahead == 'k') ADVANCE(129);
      if (lookahead == 'p') ADVANCE(125);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 35:
      if (eof) ADVANCE(36);
      ADVANCE_MAP(
        '"', 173,
        '#', 187,
        '\'', 176,
        '+', 222,
        '=', 40,
        '>', 221,
        '_', 149,
        'a', 75,
        'c', 85,
        'f', 45,
        'g', 86,
        'k', 58,
        'l', 96,
        'o', 101,
        'p', 42,
        's', 69,
        't', 103,
        'u', 93,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '\r') ADVANCE(154);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(185);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'a') ADVANCE(77);
      if (('b' <= lookahead && lookahead <= 'f')) ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'a') ADVANCE(87);
      if (lookahead == 'h') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'a') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'a') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'a') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'a') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'a') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'a') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'b') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'b') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'c') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'c') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'c') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'd') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'd') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'd') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'd') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'e') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'e') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'e') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'e') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'e') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'e') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'e') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'e') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'f') ADVANCE(71);
      if (lookahead == 't') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'f') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'g') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'h') ADVANCE(70);
      if (lookahead == 'u') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'i') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'i') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'i') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'i') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'l') ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(28);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'l') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'l') ADVANCE(210);
      if (lookahead == 't') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'l') ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(27);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'l') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'l') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'l') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'l') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'l') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'l') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'l') ADVANCE(63);
      if (lookahead == 'm') ADVANCE(54);
      if (lookahead == 'o') ADVANCE(88);
      if (lookahead == 't') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(28);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'l') ADVANCE(63);
      if (lookahead == 'm') ADVANCE(54);
      if (lookahead == 'o') ADVANCE(88);
      if (lookahead == 't') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'l') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'l') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'm') ADVANCE(89);
      if (lookahead == 'n') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'm') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'm') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'n') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'n') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'n') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'n') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'n') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'o') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'o') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'o') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'o') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'o') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'p') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'p') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'r') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'r') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'r') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'r') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'r') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 's') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 's') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 's') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 't') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 't') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 't') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 't') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'u') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'u') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'y') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'y') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(188);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(25);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(26);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(27);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(28);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == 'a') ADVANCE(138);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == 'b') ADVANCE(136);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == 'd') ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(204);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(144);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(142);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == 'f') ADVANCE(135);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == 'g') ADVANCE(147);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(137);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(133);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(140);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == 'l') ADVANCE(128);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == 'l') ADVANCE(130);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(132);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(127);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(139);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == 't') ADVANCE(143);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == 't') ADVANCE(131);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == 'y') ADVANCE(126);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(30);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '_') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(16);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(188);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '\r') ADVANCE(154);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(185);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(193);
      if (lookahead == '.') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(193);
      if (lookahead == '.') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(188);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(193);
      if (lookahead == '.') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(193);
      if (lookahead == '.') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(193);
      if (lookahead == '.') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(193);
      if (lookahead == '.') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(28);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(188);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(28);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(175);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(178);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_string_token3);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '"') ADVANCE(173);
      if (lookahead == '\'') ADVANCE(176);
      if (lookahead == 'f') ADVANCE(183);
      if (lookahead == 't') ADVANCE(184);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(185);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(179);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '"') ADVANCE(173);
      if (lookahead == '\'') ADVANCE(176);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(179);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'a') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(28);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(28);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_color_token1);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (lookahead == '%') ADVANCE(193);
      if (lookahead == '.') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (lookahead == '.') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_percent_adjustment);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_numeric_adjustment);
      if (lookahead == '%') ADVANCE(193);
      if (lookahead == '.') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_numeric_adjustment);
      if (lookahead == '%') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(196);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(197);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_palette);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_palette);
      if (lookahead == '-') ADVANCE(30);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_palette_value_token1);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_palette_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_palette_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_config_DASHfile);
      if (lookahead == '-') ADVANCE(30);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_keybind);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_keybind);
      if (lookahead == '-') ADVANCE(30);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_keybind_directive_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_clear);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_clear);
      if (lookahead == '_') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_all);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_all);
      if (lookahead == '_') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_global);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_global);
      if (lookahead == '_') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_local);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_local);
      if (lookahead == '_') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_unconsumed);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_unconsumed);
      if (lookahead == '_') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_physical);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_physical);
      if (lookahead == '_') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_shift);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_shift);
      if (lookahead == '_') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_ctrl);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_ctrl);
      if (lookahead == '_') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_control);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_control);
      if (lookahead == '_') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_alt);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_alt);
      if (lookahead == '_') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_option);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_option);
      if (lookahead == '_') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_opt);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'i') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_opt);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'i') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_super);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_super);
      if (lookahead == '_') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_cmd);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_cmd);
      if (lookahead == '_') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_command);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '_') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_command);
      if (lookahead == '_') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_key_token1);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'a') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'a') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'a') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'a') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'a') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'b') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'c') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'c') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'c') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'd') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'd') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'd') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'e') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'e') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'e') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'f') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'h') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'h') ADVANCE(260);
      if (lookahead == 'u') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'i') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'i') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'l') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'l') ADVANCE(254);
      if (lookahead == 'm') ADVANCE(251);
      if (lookahead == 'o') ADVANCE(273);
      if (lookahead == 't') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'l') ADVANCE(211);
      if (lookahead == 't') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'l') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'l') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'l') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'l') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'l') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'l') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'l') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'm') ADVANCE(251);
      if (lookahead == 'o') ADVANCE(273);
      if (lookahead == 't') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'm') ADVANCE(275);
      if (lookahead == 'n') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'm') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'm') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'n') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'n') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'n') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'n') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'o') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'o') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'o') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'o') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'o') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'p') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'p') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'r') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'r') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'r') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'r') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 's') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 's') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 't') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 't') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 't') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 't') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'u') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'y') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 33},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 12},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 12},
  [6] = {.lex_state = 13},
  [7] = {.lex_state = 12},
  [8] = {.lex_state = 33},
  [9] = {.lex_state = 33},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 13},
  [12] = {.lex_state = 33},
  [13] = {.lex_state = 33},
  [14] = {.lex_state = 33},
  [15] = {.lex_state = 33},
  [16] = {.lex_state = 33},
  [17] = {.lex_state = 33},
  [18] = {.lex_state = 33},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 33},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 10},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 21},
  [35] = {.lex_state = 10},
  [36] = {.lex_state = 33},
  [37] = {.lex_state = 33},
  [38] = {.lex_state = 33},
  [39] = {.lex_state = 33},
  [40] = {.lex_state = 33},
  [41] = {.lex_state = 33},
  [42] = {.lex_state = 174},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 33},
  [46] = {.lex_state = 177},
  [47] = {.lex_state = 33},
  [48] = {.lex_state = 32},
  [49] = {.lex_state = 33},
  [50] = {.lex_state = 33},
  [51] = {.lex_state = 33},
  [52] = {.lex_state = 10},
  [53] = {.lex_state = 10},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 10},
  [56] = {.lex_state = 33},
  [57] = {.lex_state = 11},
  [58] = {.lex_state = 33},
  [59] = {.lex_state = 33},
  [60] = {.lex_state = 33},
  [61] = {.lex_state = 33},
  [62] = {.lex_state = 33},
  [63] = {.lex_state = 33},
  [64] = {.lex_state = 33},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 32},
  [67] = {.lex_state = 33},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 10},
  [70] = {.lex_state = 21},
  [71] = {.lex_state = 33},
  [72] = {.lex_state = 33},
  [73] = {.lex_state = 0},
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
    [sym_document] = STATE(68),
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
    STATE(37), 1,
      sym_string,
    STATE(60), 1,
      sym_keybind_value,
    STATE(66), 1,
      sym_key_qualifier,
    STATE(67), 1,
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
    STATE(66), 1,
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
    STATE(63), 4,
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
    STATE(33), 1,
      sym_chord,
    STATE(66), 1,
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
    STATE(66), 1,
      sym_key_qualifier,
    STATE(31), 2,
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
    STATE(49), 1,
      sym_string,
    STATE(50), 1,
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
    STATE(41), 1,
      sym_palette_value,
  [495] = 3,
    ACTIONS(129), 1,
      anon_sym_EQ2,
    ACTIONS(131), 1,
      anon_sym_GT,
    STATE(28), 1,
      aux_sym_keybind_trigger_repeat1,
  [505] = 3,
    ACTIONS(133), 1,
      anon_sym_POUND,
    ACTIONS(135), 1,
      aux_sym_color_token1,
    STATE(61), 1,
      sym_color,
  [515] = 3,
    ACTIONS(131), 1,
      anon_sym_GT,
    ACTIONS(137), 1,
      anon_sym_EQ2,
    STATE(30), 1,
      aux_sym_keybind_trigger_repeat1,
  [525] = 1,
    ACTIONS(139), 3,
      anon_sym_EQ2,
      anon_sym_GT,
      anon_sym_PLUS,
  [531] = 3,
    ACTIONS(141), 1,
      anon_sym_EQ2,
    ACTIONS(143), 1,
      anon_sym_GT,
    STATE(30), 1,
      aux_sym_keybind_trigger_repeat1,
  [541] = 1,
    ACTIONS(116), 3,
      anon_sym_EQ2,
      anon_sym_GT,
      anon_sym_PLUS,
  [547] = 2,
    ACTIONS(146), 1,
      sym__snake_case_identifier,
    STATE(71), 1,
      sym_keybind_action,
  [554] = 1,
    ACTIONS(141), 2,
      anon_sym_EQ2,
      anon_sym_GT,
  [559] = 2,
    ACTIONS(148), 1,
      aux_sym__raw_value_token1,
    STATE(45), 1,
      sym__raw_value,
  [566] = 2,
    ACTIONS(146), 1,
      sym__snake_case_identifier,
    STATE(64), 1,
      sym_keybind_action,
  [573] = 2,
    ACTIONS(150), 1,
      aux_sym_document_token1,
    ACTIONS(152), 1,
      anon_sym_COLON,
  [580] = 1,
    ACTIONS(154), 1,
      aux_sym_document_token1,
  [584] = 1,
    ACTIONS(156), 1,
      aux_sym_document_token1,
  [588] = 1,
    ACTIONS(158), 1,
      aux_sym_document_token1,
  [592] = 1,
    ACTIONS(160), 1,
      aux_sym_document_token1,
  [596] = 1,
    ACTIONS(162), 1,
      aux_sym_document_token1,
  [600] = 1,
    ACTIONS(164), 1,
      aux_sym_string_token1,
  [604] = 1,
    ACTIONS(166), 1,
      anon_sym_DQUOTE,
  [608] = 1,
    ACTIONS(166), 1,
      anon_sym_SQUOTE,
  [612] = 1,
    ACTIONS(168), 1,
      aux_sym_document_token1,
  [616] = 1,
    ACTIONS(170), 1,
      aux_sym_string_token2,
  [620] = 1,
    ACTIONS(172), 1,
      anon_sym_EQ2,
  [624] = 1,
    ACTIONS(174), 1,
      aux_sym_key_token1,
  [628] = 1,
    ACTIONS(176), 1,
      aux_sym_document_token1,
  [632] = 1,
    ACTIONS(178), 1,
      aux_sym_document_token1,
  [636] = 1,
    ACTIONS(180), 1,
      aux_sym_document_token1,
  [640] = 1,
    ACTIONS(182), 1,
      anon_sym_EQ,
  [644] = 1,
    ACTIONS(184), 1,
      anon_sym_EQ,
  [648] = 1,
    ACTIONS(186), 1,
      anon_sym_COLON,
  [652] = 1,
    ACTIONS(188), 1,
      anon_sym_EQ,
  [656] = 1,
    ACTIONS(190), 1,
      anon_sym_EQ2,
  [660] = 1,
    ACTIONS(192), 1,
      aux_sym_keybind_directive_token1,
  [664] = 1,
    ACTIONS(194), 1,
      aux_sym_document_token1,
  [668] = 1,
    ACTIONS(196), 1,
      aux_sym_document_token1,
  [672] = 1,
    ACTIONS(198), 1,
      aux_sym_document_token1,
  [676] = 1,
    ACTIONS(200), 1,
      aux_sym_document_token1,
  [680] = 1,
    ACTIONS(202), 1,
      aux_sym_document_token1,
  [684] = 1,
    ACTIONS(204), 1,
      aux_sym_document_token1,
  [688] = 1,
    ACTIONS(206), 1,
      aux_sym_document_token1,
  [692] = 1,
    ACTIONS(208), 1,
      aux_sym_color_token1,
  [696] = 1,
    ACTIONS(210), 1,
      aux_sym_key_token1,
  [700] = 1,
    ACTIONS(212), 1,
      anon_sym_EQ2,
  [704] = 1,
    ACTIONS(214), 1,
      ts_builtin_sym_end,
  [708] = 1,
    ACTIONS(216), 1,
      anon_sym_EQ,
  [712] = 1,
    ACTIONS(218), 1,
      aux_sym__raw_value_token1,
  [716] = 1,
    ACTIONS(220), 1,
      aux_sym_document_token1,
  [720] = 1,
    ACTIONS(222), 1,
      aux_sym_document_token1,
  [724] = 1,
    ACTIONS(224), 1,
      anon_sym_COLON,
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
  [SMALL_STATE(29)] = 525,
  [SMALL_STATE(30)] = 531,
  [SMALL_STATE(31)] = 541,
  [SMALL_STATE(32)] = 547,
  [SMALL_STATE(33)] = 554,
  [SMALL_STATE(34)] = 559,
  [SMALL_STATE(35)] = 566,
  [SMALL_STATE(36)] = 573,
  [SMALL_STATE(37)] = 580,
  [SMALL_STATE(38)] = 584,
  [SMALL_STATE(39)] = 588,
  [SMALL_STATE(40)] = 592,
  [SMALL_STATE(41)] = 596,
  [SMALL_STATE(42)] = 600,
  [SMALL_STATE(43)] = 604,
  [SMALL_STATE(44)] = 608,
  [SMALL_STATE(45)] = 612,
  [SMALL_STATE(46)] = 616,
  [SMALL_STATE(47)] = 620,
  [SMALL_STATE(48)] = 624,
  [SMALL_STATE(49)] = 628,
  [SMALL_STATE(50)] = 632,
  [SMALL_STATE(51)] = 636,
  [SMALL_STATE(52)] = 640,
  [SMALL_STATE(53)] = 644,
  [SMALL_STATE(54)] = 648,
  [SMALL_STATE(55)] = 652,
  [SMALL_STATE(56)] = 656,
  [SMALL_STATE(57)] = 660,
  [SMALL_STATE(58)] = 664,
  [SMALL_STATE(59)] = 668,
  [SMALL_STATE(60)] = 672,
  [SMALL_STATE(61)] = 676,
  [SMALL_STATE(62)] = 680,
  [SMALL_STATE(63)] = 684,
  [SMALL_STATE(64)] = 688,
  [SMALL_STATE(65)] = 692,
  [SMALL_STATE(66)] = 696,
  [SMALL_STATE(67)] = 700,
  [SMALL_STATE(68)] = 704,
  [SMALL_STATE(69)] = 708,
  [SMALL_STATE(70)] = 712,
  [SMALL_STATE(71)] = 716,
  [SMALL_STATE(72)] = 720,
  [SMALL_STATE(73)] = 724,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keybind_value_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keybind_value_repeat1, 2, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keybind_modifier, 2, 0, 3),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
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
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_directive, 4, 0, 2),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keybind_directive, 4, 0, 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_directive, 4, 0, 2),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_directive, 4, 0, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_palette_directive, 4, 0, 2),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_palette_directive, 4, 0, 2),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file_directive, 4, 0, 2),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_config_file_directive, 4, 0, 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord, 1, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord, 2, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_chord_repeat1, 2, 0, 0),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chord_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier_key, 1, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_trigger, 1, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_trigger, 2, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 2, 0, 4),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keybind_trigger_repeat1, 2, 0, 0),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keybind_trigger_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_action, 1, 0, 5),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_value, 1, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 1, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adjustment, 1, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_qualifier, 2, 0, 4),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_value, 1, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 2, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_palette_value, 3, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_value, 3, 0, 6),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [214] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 1, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_value, 4, 0, 7),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_action, 3, 0, 8),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
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
