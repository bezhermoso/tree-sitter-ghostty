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
#define STATE_COUNT 76
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 71
#define ALIAS_COUNT 1
#define TOKEN_COUNT 44
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
  sym_document = 44,
  sym_directive = 45,
  sym_basic_directive = 46,
  sym_property = 47,
  sym_value = 48,
  sym_boolean = 49,
  sym_adjustment = 50,
  sym_string = 51,
  sym_color = 52,
  sym__raw_value = 53,
  sym_palette_directive = 54,
  sym_palette_value = 55,
  sym_config_file_directive = 56,
  sym_path_value = 57,
  sym_keybind_directive = 58,
  sym_keybind_value = 59,
  sym_keybind_modifier = 60,
  sym_key_qualifier = 61,
  sym_keybind_trigger = 62,
  sym_chord = 63,
  sym_modifier_key = 64,
  sym_key = 65,
  sym_keybind_action = 66,
  aux_sym_document_repeat1 = 67,
  aux_sym_keybind_value_repeat1 = 68,
  aux_sym_keybind_trigger_repeat1 = 69,
  aux_sym_chord_repeat1 = 70,
  alias_sym_action_argument = 71,
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
  [74] = 74,
  [75] = 75,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(93);
      ADVANCE_MAP(
        '"', 217,
        '#', 240,
        '\'', 220,
        '+', 289,
        ':', 283,
        '=', 258,
        '>', 288,
        '_', 482,
        'a', 359,
        'c', 367,
        'f', 327,
        'g', 368,
        'k', 343,
        'l', 378,
        'o', 383,
        'p', 328,
        's', 354,
        't', 385,
        'u', 375,
        'b', 401,
        'd', 401,
        'e', 401,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(92);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(408);
      if (('h' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      if (lookahead != 0) ADVANCE(326);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == 'c') ADVANCE(191);
      if (lookahead == 'k') ADVANCE(179);
      if (lookahead == 'p') ADVANCE(175);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(98);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(98);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '\n', 95,
        '\r', 224,
        '"', 217,
        '#', 326,
        '\'', 220,
        'a', 435,
        'c', 436,
        'g', 443,
        'l', 453,
        'o', 458,
        'p', 431,
        's', 432,
        'u', 451,
        ':', 223,
        '=', 223,
        '>', 223,
        '\t', 224,
        0x0b, 224,
        '\f', 224,
        ' ', 224,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (lookahead != 0) ADVANCE(326);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '\n', 96,
        '\r', 201,
        '"', 217,
        '#', 240,
        '\'', 220,
        'f', 227,
        't', 237,
        '+', 238,
        '-', 238,
        '\t', 201,
        0x0b, 201,
        '\f', 201,
        ' ', 201,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(239);
      if (lookahead != 0) ADVANCE(223);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(97);
      if (lookahead == '\r') ADVANCE(225);
      if (lookahead == '"') ADVANCE(217);
      if (lookahead == '\'') ADVANCE(220);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(223);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(217);
      if (lookahead == '#') ADVANCE(240);
      if (lookahead == '\'') ADVANCE(220);
      if (lookahead == 'f') ADVANCE(227);
      if (lookahead == 't') ADVANCE(237);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(238);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(239);
      if (lookahead != 0) ADVANCE(223);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(240);
      if (lookahead == '+') ADVANCE(289);
      if (lookahead == '=') ADVANCE(258);
      if (lookahead == '>') ADVANCE(288);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(240);
      if (lookahead == '+') ADVANCE(289);
      if (lookahead == '>') ADVANCE(288);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '=', 258,
        '>', 288,
        'a', 435,
        'c', 445,
        'g', 443,
        'l', 453,
        'o', 458,
        'p', 431,
        's', 432,
        'u', 451,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (lookahead != 0 &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(326);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(99);
      if (lookahead == 'a') ADVANCE(444);
      if (lookahead == 'c') ADVANCE(445);
      if (lookahead == 'o') ADVANCE(458);
      if (lookahead == 'p') ADVANCE(431);
      if (lookahead == 's') ADVANCE(432);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (lookahead != 0 &&
          (lookahead < '0' || ':' < lookahead) &&
          lookahead != '=' &&
          lookahead != '>') ADVANCE(326);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(99);
      if (lookahead == 'a') ADVANCE(47);
      if (lookahead == 'c') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(61);
      if (lookahead == 'p') ADVANCE(33);
      if (lookahead == 's') ADVANCE(34);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        '>', 288,
        'a', 37,
        'c', 48,
        'g', 38,
        'l', 56,
        'o', 61,
        'p', 33,
        's', 34,
        'u', 54,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 19:
      if (lookahead == 'b') ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(58);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(15);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(18);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(318);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(322);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(279);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 31:
      if (lookahead == 'f') ADVANCE(184);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 32:
      if (lookahead == 'f') ADVANCE(72);
      END_STATE();
    case 33:
      if (lookahead == 'h') ADVANCE(76);
      END_STATE();
    case 34:
      if (lookahead == 'h') ADVANCE(35);
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(267);
      if (lookahead == 't') ADVANCE(302);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(294);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(275);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(271);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(298);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(284);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 48:
      if (lookahead == 'm') ADVANCE(23);
      if (lookahead == 'o') ADVANCE(49);
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 49:
      if (lookahead == 'm') ADVANCE(51);
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 50:
      if (lookahead == 'm') ADVANCE(29);
      END_STATE();
    case 51:
      if (lookahead == 'm') ADVANCE(16);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(306);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 60:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 61:
      if (lookahead == 'p') ADVANCE(71);
      END_STATE();
    case 62:
      if (lookahead == 'p') ADVANCE(30);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(263);
      END_STATE();
    case 65:
      if (lookahead == 'r') ADVANCE(314);
      END_STATE();
    case 66:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 67:
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 68:
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 69:
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(302);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(313);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(290);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 74:
      if (lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 75:
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 76:
      if (lookahead == 'y') ADVANCE(68);
      END_STATE();
    case 77:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(77);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(250);
      if (lookahead != 0) ADVANCE(251);
      END_STATE();
    case 78:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(78);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(214);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(249);
      END_STATE();
    case 82:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(241);
      END_STATE();
    case 84:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 85:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      END_STATE();
    case 86:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 87:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 88:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 89:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '0' || ':' < lookahead) &&
          lookahead != '=' &&
          lookahead != '>') ADVANCE(326);
      END_STATE();
    case 90:
      if (eof) ADVANCE(93);
      ADVANCE_MAP(
        '\n', 94,
        '\r', 1,
        '#', 3,
        ':', 283,
        '=', 258,
        'c', 191,
        'k', 179,
        'p', 175,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(91);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 91:
      if (eof) ADVANCE(93);
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == 'c') ADVANCE(191);
      if (lookahead == 'k') ADVANCE(179);
      if (lookahead == 'p') ADVANCE(175);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(91);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 92:
      if (eof) ADVANCE(93);
      ADVANCE_MAP(
        '"', 217,
        '#', 240,
        '\'', 220,
        '+', 289,
        '=', 99,
        '>', 288,
        '_', 200,
        'a', 132,
        'c', 134,
        'f', 100,
        'g', 135,
        'k', 116,
        'l', 151,
        'o', 156,
        'p', 103,
        's', 127,
        't', 158,
        'u', 147,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '\r') ADVANCE(224);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(224);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead == '\r') ADVANCE(201);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(238);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n') ADVANCE(97);
      if (lookahead == '\r') ADVANCE(225);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(225);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'a') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'a') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'a') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'a') ADVANCE(142);
      if (lookahead == 'h') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'a') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'a') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'a') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'b') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'b') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'c') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'c') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'c') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'd') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'd') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'd') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'd') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'e') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'e') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'e') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'e') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'e') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'e') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'e') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'e') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'f') ADVANCE(129);
      if (lookahead == 't') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'f') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'g') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'h') ADVANCE(128);
      if (lookahead == 'u') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'i') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'i') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'i') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'i') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'l') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'l') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'l') ADVANCE(117);
      if (lookahead == 'm') ADVANCE(112);
      if (lookahead == 'o') ADVANCE(143);
      if (lookahead == 't') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'l') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'l') ADVANCE(268);
      if (lookahead == 't') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'l') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'l') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'l') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'l') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'l') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'l') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'm') ADVANCE(144);
      if (lookahead == 'n') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'm') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'm') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'n') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'n') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'n') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'n') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'n') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'o') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'o') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'o') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'o') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'o') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'p') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'p') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'r') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'r') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'r') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'r') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'r') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 's') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 's') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 's') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 't') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 't') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 't') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 't') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'u') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'u') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'y') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'y') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == 'a') ADVANCE(188);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == 'b') ADVANCE(186);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == 'd') ADVANCE(262);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == 'e') ADVANCE(259);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == 'e') ADVANCE(194);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == 'e') ADVANCE(192);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == 'e') ADVANCE(254);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == 'f') ADVANCE(185);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == 'g') ADVANCE(197);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == 'i') ADVANCE(187);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == 'i') ADVANCE(183);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == 'i') ADVANCE(190);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == 'l') ADVANCE(178);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == 'l') ADVANCE(180);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == 'n') ADVANCE(182);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == 'n') ADVANCE(177);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == 'o') ADVANCE(189);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == 't') ADVANCE(193);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == 't') ADVANCE(181);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == 'y') ADVANCE(176);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '_') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__kebab_case_identifier);
      if (lookahead == '-') ADVANCE(31);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (lookahead == '_') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__snake_case_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead == '\r') ADVANCE(201);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(238);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(247);
      if (lookahead == '.') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(247);
      if (lookahead == '.') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(242);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(241);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(247);
      if (lookahead == '.') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(247);
      if (lookahead == '.') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(247);
      if (lookahead == '.') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(210);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(247);
      if (lookahead == '.') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(214);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(219);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(222);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_string_token3);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_string_token3);
      ADVANCE_MAP(
        '\n', 95,
        '\r', 224,
        '"', 217,
        '\'', 220,
        'a', 231,
        'c', 232,
        'g', 233,
        'l', 235,
        'o', 236,
        'p', 229,
        's', 230,
        'u', 234,
        '\t', 224,
        0x0b, 224,
        '\f', 224,
        ' ', 224,
      );
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(223);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '\n') ADVANCE(97);
      if (lookahead == '\r') ADVANCE(225);
      if (lookahead == '"') ADVANCE(217);
      if (lookahead == '\'') ADVANCE(220);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(223);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '"') ADVANCE(217);
      if (lookahead == '\'') ADVANCE(220);
      if (lookahead == 'f') ADVANCE(228);
      if (lookahead == 't') ADVANCE(237);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(238);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(223);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'a') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'h') ADVANCE(76);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'h') ADVANCE(35);
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'l') ADVANCE(26);
      if (lookahead == 'm') ADVANCE(23);
      if (lookahead == 'o') ADVANCE(49);
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'p') ADVANCE(71);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(248);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_color_token1);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (lookahead == '%') ADVANCE(247);
      if (lookahead == '.') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == '_') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(413);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (lookahead == '_') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (lookahead == '_') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_percent_adjustment);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_numeric_adjustment);
      if (lookahead == '%') ADVANCE(247);
      if (lookahead == '.') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_numeric_adjustment);
      if (lookahead == '%') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(249);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(250);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(251);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_palette);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_palette);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_palette);
      if (lookahead == '-') ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_palette_value_token1);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_palette_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_palette_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(256);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_config_DASHfile);
      if (lookahead == '-') ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_keybind);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_keybind);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_keybind);
      if (lookahead == '-') ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_clear);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_clear);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_clear);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_clear);
      if (lookahead == '_') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_all);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_all);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_all);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_all);
      if (lookahead == '_') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_global);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_global);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_global);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_global);
      if (lookahead == '_') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_local);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_local);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_local);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_local);
      if (lookahead == '_') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_unconsumed);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_unconsumed);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_unconsumed);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_unconsumed);
      if (lookahead == '_') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_physical);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_physical);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_physical);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_physical);
      if (lookahead == '_') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_shift);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_shift);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_shift);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_shift);
      if (lookahead == '_') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_ctrl);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_ctrl);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_ctrl);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_ctrl);
      if (lookahead == '_') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_control);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_control);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_control);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_control);
      if (lookahead == '_') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_alt);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_alt);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_alt);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_alt);
      if (lookahead == '_') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_option);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_option);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_option);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_option);
      if (lookahead == '_') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_opt);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'i') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_opt);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'i') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_opt);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 'i') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_opt);
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_super);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_super);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_super);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_super);
      if (lookahead == '_') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_cmd);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_cmd);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_cmd);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_cmd);
      if (lookahead == '_') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_command);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_command);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_command);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_command);
      if (lookahead == '_') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_key_token1);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'a') ADVANCE(361);
      if (('b' <= lookahead && lookahead <= 'f')) ADVANCE(405);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'a') ADVANCE(369);
      if (lookahead == 'h') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'a') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'a') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'a') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'a') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'a') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'b') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'b') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'c') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'c') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'c') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'd') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'd') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'd') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'd') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'e') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'e') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'e') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'e') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'e') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'e') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'e') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'e') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'f') ADVANCE(356);
      if (lookahead == 't') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'f') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'g') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'h') ADVANCE(355);
      if (lookahead == 'u') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'i') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'i') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'i') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'i') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'l') ADVANCE(360);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(86);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'l') ADVANCE(269);
      if (lookahead == 't') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'l') ADVANCE(392);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(85);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(476);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'l') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'l') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'l') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'l') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'l') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'l') ADVANCE(344);
      if (lookahead == 'm') ADVANCE(339);
      if (lookahead == 'o') ADVANCE(370);
      if (lookahead == 't') ADVANCE(388);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(86);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'l') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'l') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'm') ADVANCE(371);
      if (lookahead == 'n') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'm') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'm') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'n') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'n') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'n') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'n') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'n') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'o') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'o') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'o') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'o') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'o') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'p') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'p') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'r') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'r') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'r') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'r') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'r') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 's') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 's') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 's') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 't') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 't') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 't') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 't') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'u') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'u') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'y') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'y') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(86);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(241);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(245);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(83);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(472);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(84);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(85);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(476);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '_') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == '_') ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(86);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(412);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == '_') ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(241);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(244);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == '_') ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(83);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(409);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == '_') ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(84);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == '_') ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(85);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(411);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == '_') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(413);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 'a') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 'a') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 'a') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 'a') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 'a') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 'b') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 'c') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 'c') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 'c') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 'd') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 'd') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 'd') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 'e') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 'e') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 'e') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 'f') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 'h') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 'h') ADVANCE(433);
      if (lookahead == 'u') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 'i') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 'i') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 'l') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 'l') ADVANCE(427);
      if (lookahead == 'm') ADVANCE(424);
      if (lookahead == 'o') ADVANCE(446);
      if (lookahead == 't') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 'l') ADVANCE(270);
      if (lookahead == 't') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 'l') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 'l') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 'l') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 'l') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 'l') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 'l') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 'l') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 'm') ADVANCE(424);
      if (lookahead == 'o') ADVANCE(446);
      if (lookahead == 't') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 'm') ADVANCE(448);
      if (lookahead == 'n') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 'm') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 'm') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 'n') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 'n') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 'n') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 'n') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 'o') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 'o') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 'o') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 'o') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 'o') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 'p') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 'p') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 'r') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 'r') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 'r') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 'r') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 's') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 's') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 't') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 't') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 't') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 't') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 'u') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 'y') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(241);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(245);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(246);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(83);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(472);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(473);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(84);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(475);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(85);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(476);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(477);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 90},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 11},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 90},
  [9] = {.lex_state = 90},
  [10] = {.lex_state = 11},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 90},
  [13] = {.lex_state = 90},
  [14] = {.lex_state = 90},
  [15] = {.lex_state = 90},
  [16] = {.lex_state = 90},
  [17] = {.lex_state = 90},
  [18] = {.lex_state = 90},
  [19] = {.lex_state = 90},
  [20] = {.lex_state = 90},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 90},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 10},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 10},
  [33] = {.lex_state = 10},
  [34] = {.lex_state = 78},
  [35] = {.lex_state = 90},
  [36] = {.lex_state = 10},
  [37] = {.lex_state = 77},
  [38] = {.lex_state = 78},
  [39] = {.lex_state = 90},
  [40] = {.lex_state = 90},
  [41] = {.lex_state = 90},
  [42] = {.lex_state = 90},
  [43] = {.lex_state = 89},
  [44] = {.lex_state = 11},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 90},
  [48] = {.lex_state = 90},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 89},
  [51] = {.lex_state = 11},
  [52] = {.lex_state = 90},
  [53] = {.lex_state = 90},
  [54] = {.lex_state = 218},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 221},
  [57] = {.lex_state = 11},
  [58] = {.lex_state = 90},
  [59] = {.lex_state = 90},
  [60] = {.lex_state = 90},
  [61] = {.lex_state = 90},
  [62] = {.lex_state = 90},
  [63] = {.lex_state = 90},
  [64] = {.lex_state = 90},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 90},
  [67] = {.lex_state = 11},
  [68] = {.lex_state = 90},
  [69] = {.lex_state = 90},
  [70] = {.lex_state = 90},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 77},
  [73] = {.lex_state = 90},
  [74] = {.lex_state = 90},
  [75] = {.lex_state = 11},
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
    [aux_sym_key_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(65),
    [sym_directive] = STATE(9),
    [sym_basic_directive] = STATE(12),
    [sym_property] = STATE(44),
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
    STATE(29), 1,
      sym_chord,
    STATE(43), 1,
      sym_key_qualifier,
    STATE(52), 1,
      sym_keybind_trigger,
    STATE(53), 1,
      sym_keybind_value,
    STATE(70), 1,
      sym_string,
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
    STATE(29), 1,
      sym_chord,
    STATE(43), 1,
      sym_key_qualifier,
    STATE(58), 1,
      sym_keybind_trigger,
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
    STATE(42), 1,
      sym_value,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(47), 2,
      sym_percent_adjustment,
      sym_numeric_adjustment,
    STATE(69), 4,
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
  [169] = 6,
    ACTIONS(29), 1,
      anon_sym_physical,
    ACTIONS(33), 1,
      aux_sym_key_token1,
    STATE(36), 1,
      sym_chord,
    STATE(43), 1,
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
  [197] = 1,
    ACTIONS(54), 15,
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
  [215] = 10,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
    ACTIONS(58), 1,
      aux_sym_document_token1,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(64), 1,
      sym__kebab_case_identifier,
    ACTIONS(67), 1,
      anon_sym_palette,
    ACTIONS(70), 1,
      anon_sym_config_DASHfile,
    ACTIONS(73), 1,
      anon_sym_keybind,
    STATE(44), 1,
      sym_property,
    STATE(8), 2,
      sym_directive,
      aux_sym_document_repeat1,
    STATE(12), 4,
      sym_basic_directive,
      sym_palette_directive,
      sym_config_file_directive,
      sym_keybind_directive,
  [250] = 10,
    ACTIONS(9), 1,
      sym__kebab_case_identifier,
    ACTIONS(11), 1,
      anon_sym_palette,
    ACTIONS(13), 1,
      anon_sym_config_DASHfile,
    ACTIONS(15), 1,
      anon_sym_keybind,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
    ACTIONS(78), 1,
      aux_sym_document_token1,
    ACTIONS(80), 1,
      sym_comment,
    STATE(44), 1,
      sym_property,
    STATE(8), 2,
      sym_directive,
      aux_sym_document_repeat1,
    STATE(12), 4,
      sym_basic_directive,
      sym_palette_directive,
      sym_config_file_directive,
      sym_keybind_directive,
  [285] = 5,
    ACTIONS(29), 1,
      anon_sym_physical,
    ACTIONS(33), 1,
      aux_sym_key_token1,
    STATE(43), 1,
      sym_key_qualifier,
    STATE(25), 2,
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
  [310] = 9,
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
    STATE(60), 4,
      sym_boolean,
      sym_adjustment,
      sym_string,
      sym_color,
  [343] = 2,
    ACTIONS(84), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(86), 5,
      sym_comment,
      sym__kebab_case_identifier,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_keybind,
  [355] = 2,
    ACTIONS(88), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(90), 5,
      sym_comment,
      sym__kebab_case_identifier,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_keybind,
  [367] = 2,
    ACTIONS(92), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(94), 5,
      sym_comment,
      sym__kebab_case_identifier,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_keybind,
  [379] = 2,
    ACTIONS(96), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(98), 5,
      sym_comment,
      sym__kebab_case_identifier,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_keybind,
  [391] = 2,
    ACTIONS(100), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(102), 5,
      sym_comment,
      sym__kebab_case_identifier,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_keybind,
  [403] = 2,
    ACTIONS(104), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(106), 5,
      sym_comment,
      sym__kebab_case_identifier,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_keybind,
  [415] = 2,
    ACTIONS(108), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(110), 5,
      sym_comment,
      sym__kebab_case_identifier,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_keybind,
  [427] = 2,
    ACTIONS(112), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(114), 5,
      sym_comment,
      sym__kebab_case_identifier,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_keybind,
  [439] = 2,
    ACTIONS(116), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(118), 5,
      sym_comment,
      sym__kebab_case_identifier,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_keybind,
  [451] = 6,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      aux_sym_string_token3,
    ACTIONS(120), 1,
      aux_sym_document_token1,
    STATE(59), 1,
      sym_string,
    STATE(62), 1,
      sym_path_value,
  [470] = 3,
    ACTIONS(124), 1,
      anon_sym_PLUS,
    STATE(23), 1,
      aux_sym_chord_repeat1,
    ACTIONS(122), 2,
      anon_sym_EQ2,
      anon_sym_GT,
  [481] = 3,
    ACTIONS(124), 1,
      anon_sym_PLUS,
    STATE(24), 1,
      aux_sym_chord_repeat1,
    ACTIONS(126), 2,
      anon_sym_EQ2,
      anon_sym_GT,
  [492] = 3,
    ACTIONS(130), 1,
      anon_sym_PLUS,
    STATE(24), 1,
      aux_sym_chord_repeat1,
    ACTIONS(128), 2,
      anon_sym_EQ2,
      anon_sym_GT,
  [503] = 1,
    ACTIONS(128), 3,
      anon_sym_EQ2,
      anon_sym_GT,
      anon_sym_PLUS,
  [509] = 3,
    ACTIONS(133), 1,
      aux_sym_document_token1,
    ACTIONS(135), 1,
      aux_sym_palette_value_token1,
    STATE(39), 1,
      sym_palette_value,
  [519] = 1,
    ACTIONS(137), 3,
      anon_sym_EQ2,
      anon_sym_GT,
      anon_sym_PLUS,
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
    STATE(33), 1,
      aux_sym_keybind_trigger_repeat1,
  [541] = 3,
    ACTIONS(145), 1,
      anon_sym_POUND,
    ACTIONS(147), 1,
      aux_sym_color_token1,
    STATE(63), 1,
      sym_color,
  [551] = 1,
    ACTIONS(149), 3,
      anon_sym_EQ2,
      anon_sym_GT,
      anon_sym_PLUS,
  [557] = 3,
    ACTIONS(151), 1,
      anon_sym_EQ2,
    ACTIONS(153), 1,
      anon_sym_GT,
    STATE(32), 1,
      aux_sym_keybind_trigger_repeat1,
  [567] = 3,
    ACTIONS(143), 1,
      anon_sym_GT,
    ACTIONS(156), 1,
      anon_sym_EQ2,
    STATE(32), 1,
      aux_sym_keybind_trigger_repeat1,
  [577] = 2,
    ACTIONS(158), 1,
      sym__snake_case_identifier,
    STATE(66), 1,
      sym_keybind_action,
  [584] = 2,
    ACTIONS(160), 1,
      aux_sym_document_token1,
    ACTIONS(162), 1,
      anon_sym_COLON,
  [591] = 1,
    ACTIONS(151), 2,
      anon_sym_EQ2,
      anon_sym_GT,
  [596] = 2,
    ACTIONS(164), 1,
      aux_sym__raw_value_token1,
    STATE(47), 1,
      sym__raw_value,
  [603] = 2,
    ACTIONS(158), 1,
      sym__snake_case_identifier,
    STATE(73), 1,
      sym_keybind_action,
  [610] = 1,
    ACTIONS(166), 1,
      aux_sym_document_token1,
  [614] = 1,
    ACTIONS(168), 1,
      aux_sym_document_token1,
  [618] = 1,
    ACTIONS(170), 1,
      aux_sym_document_token1,
  [622] = 1,
    ACTIONS(172), 1,
      aux_sym_document_token1,
  [626] = 1,
    ACTIONS(174), 1,
      aux_sym_key_token1,
  [630] = 1,
    ACTIONS(176), 1,
      anon_sym_EQ,
  [634] = 1,
    ACTIONS(178), 1,
      anon_sym_DQUOTE,
  [638] = 1,
    ACTIONS(178), 1,
      anon_sym_SQUOTE,
  [642] = 1,
    ACTIONS(180), 1,
      aux_sym_document_token1,
  [646] = 1,
    ACTIONS(182), 1,
      anon_sym_EQ2,
  [650] = 1,
    ACTIONS(184), 1,
      anon_sym_COLON,
  [654] = 1,
    ACTIONS(186), 1,
      aux_sym_key_token1,
  [658] = 1,
    ACTIONS(188), 1,
      anon_sym_EQ,
  [662] = 1,
    ACTIONS(190), 1,
      anon_sym_EQ2,
  [666] = 1,
    ACTIONS(192), 1,
      aux_sym_document_token1,
  [670] = 1,
    ACTIONS(194), 1,
      aux_sym_string_token1,
  [674] = 1,
    ACTIONS(196), 1,
      anon_sym_COLON,
  [678] = 1,
    ACTIONS(198), 1,
      aux_sym_string_token2,
  [682] = 1,
    ACTIONS(200), 1,
      anon_sym_EQ,
  [686] = 1,
    ACTIONS(202), 1,
      anon_sym_EQ2,
  [690] = 1,
    ACTIONS(204), 1,
      aux_sym_document_token1,
  [694] = 1,
    ACTIONS(206), 1,
      aux_sym_document_token1,
  [698] = 1,
    ACTIONS(208), 1,
      aux_sym_document_token1,
  [702] = 1,
    ACTIONS(210), 1,
      aux_sym_document_token1,
  [706] = 1,
    ACTIONS(212), 1,
      aux_sym_document_token1,
  [710] = 1,
    ACTIONS(214), 1,
      aux_sym_document_token1,
  [714] = 1,
    ACTIONS(216), 1,
      ts_builtin_sym_end,
  [718] = 1,
    ACTIONS(218), 1,
      aux_sym_document_token1,
  [722] = 1,
    ACTIONS(220), 1,
      anon_sym_EQ,
  [726] = 1,
    ACTIONS(222), 1,
      aux_sym_document_token1,
  [730] = 1,
    ACTIONS(224), 1,
      aux_sym_document_token1,
  [734] = 1,
    ACTIONS(226), 1,
      aux_sym_document_token1,
  [738] = 1,
    ACTIONS(228), 1,
      aux_sym_color_token1,
  [742] = 1,
    ACTIONS(230), 1,
      aux_sym__raw_value_token1,
  [746] = 1,
    ACTIONS(232), 1,
      aux_sym_document_token1,
  [750] = 1,
    ACTIONS(234), 1,
      aux_sym_document_token1,
  [754] = 1,
    ACTIONS(236), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 62,
  [SMALL_STATE(4)] = 103,
  [SMALL_STATE(5)] = 145,
  [SMALL_STATE(6)] = 169,
  [SMALL_STATE(7)] = 197,
  [SMALL_STATE(8)] = 215,
  [SMALL_STATE(9)] = 250,
  [SMALL_STATE(10)] = 285,
  [SMALL_STATE(11)] = 310,
  [SMALL_STATE(12)] = 343,
  [SMALL_STATE(13)] = 355,
  [SMALL_STATE(14)] = 367,
  [SMALL_STATE(15)] = 379,
  [SMALL_STATE(16)] = 391,
  [SMALL_STATE(17)] = 403,
  [SMALL_STATE(18)] = 415,
  [SMALL_STATE(19)] = 427,
  [SMALL_STATE(20)] = 439,
  [SMALL_STATE(21)] = 451,
  [SMALL_STATE(22)] = 470,
  [SMALL_STATE(23)] = 481,
  [SMALL_STATE(24)] = 492,
  [SMALL_STATE(25)] = 503,
  [SMALL_STATE(26)] = 509,
  [SMALL_STATE(27)] = 519,
  [SMALL_STATE(28)] = 525,
  [SMALL_STATE(29)] = 531,
  [SMALL_STATE(30)] = 541,
  [SMALL_STATE(31)] = 551,
  [SMALL_STATE(32)] = 557,
  [SMALL_STATE(33)] = 567,
  [SMALL_STATE(34)] = 577,
  [SMALL_STATE(35)] = 584,
  [SMALL_STATE(36)] = 591,
  [SMALL_STATE(37)] = 596,
  [SMALL_STATE(38)] = 603,
  [SMALL_STATE(39)] = 610,
  [SMALL_STATE(40)] = 614,
  [SMALL_STATE(41)] = 618,
  [SMALL_STATE(42)] = 622,
  [SMALL_STATE(43)] = 626,
  [SMALL_STATE(44)] = 630,
  [SMALL_STATE(45)] = 634,
  [SMALL_STATE(46)] = 638,
  [SMALL_STATE(47)] = 642,
  [SMALL_STATE(48)] = 646,
  [SMALL_STATE(49)] = 650,
  [SMALL_STATE(50)] = 654,
  [SMALL_STATE(51)] = 658,
  [SMALL_STATE(52)] = 662,
  [SMALL_STATE(53)] = 666,
  [SMALL_STATE(54)] = 670,
  [SMALL_STATE(55)] = 674,
  [SMALL_STATE(56)] = 678,
  [SMALL_STATE(57)] = 682,
  [SMALL_STATE(58)] = 686,
  [SMALL_STATE(59)] = 690,
  [SMALL_STATE(60)] = 694,
  [SMALL_STATE(61)] = 698,
  [SMALL_STATE(62)] = 702,
  [SMALL_STATE(63)] = 706,
  [SMALL_STATE(64)] = 710,
  [SMALL_STATE(65)] = 714,
  [SMALL_STATE(66)] = 718,
  [SMALL_STATE(67)] = 722,
  [SMALL_STATE(68)] = 726,
  [SMALL_STATE(69)] = 730,
  [SMALL_STATE(70)] = 734,
  [SMALL_STATE(71)] = 738,
  [SMALL_STATE(72)] = 742,
  [SMALL_STATE(73)] = 746,
  [SMALL_STATE(74)] = 750,
  [SMALL_STATE(75)] = 754,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keybind_value_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keybind_value_repeat1, 2, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keybind_modifier, 2, 0, 3),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file_directive, 3, 0, 1),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_config_file_directive, 3, 0, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_palette_directive, 3, 0, 1),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_palette_directive, 3, 0, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_directive, 3, 0, 1),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keybind_directive, 3, 0, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_directive, 3, 0, 1),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_directive, 3, 0, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file_directive, 4, 0, 2),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_config_file_directive, 4, 0, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_directive, 4, 0, 2),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_directive, 4, 0, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_palette_directive, 4, 0, 2),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_palette_directive, 4, 0, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_directive, 4, 0, 2),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keybind_directive, 4, 0, 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord, 1, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord, 2, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_chord_repeat1, 2, 0, 0),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chord_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier_key, 1, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_trigger, 1, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 2, 0, 4),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keybind_trigger_repeat1, 2, 0, 0),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keybind_trigger_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_trigger, 2, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_action, 1, 0, 5),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 1, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adjustment, 1, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_qualifier, 2, 0, 4),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_value, 1, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 2, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_palette_value, 3, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_value, 3, 0, 6),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 1, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_value, 1, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_value, 4, 0, 7),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_action, 3, 0, 8),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
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
