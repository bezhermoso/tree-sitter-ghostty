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
#define STATE_COUNT 109
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 92
#define ALIAS_COUNT 0
#define TOKEN_COUNT 55
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
  aux_sym__loose_string_token1 = 17,
  aux_sym__loose_string_token2 = 18,
  anon_sym_POUND = 19,
  aux_sym_color_token1 = 20,
  sym_percent_adjustment = 21,
  sym_numeric_adjustment = 22,
  aux_sym__raw_value_token1 = 23,
  anon_sym_palette = 24,
  aux_sym_palette_value_token1 = 25,
  anon_sym_EQ2 = 26,
  anon_sym_config_DASHfile = 27,
  anon_sym_QMARK = 28,
  anon_sym_keybind = 29,
  anon_sym_clear = 30,
  anon_sym_all = 31,
  anon_sym_global = 32,
  anon_sym_local = 33,
  anon_sym_unconsumed = 34,
  anon_sym_COLON = 35,
  anon_sym_physical = 36,
  anon_sym_GT = 37,
  anon_sym_PLUS = 38,
  anon_sym_shift = 39,
  anon_sym_ctrl = 40,
  anon_sym_control = 41,
  anon_sym_alt = 42,
  anon_sym_option = 43,
  anon_sym_opt = 44,
  anon_sym_super = 45,
  anon_sym_cmd = 46,
  anon_sym_command = 47,
  aux_sym_key_token1 = 48,
  aux_sym__action_arg_value_token1 = 49,
  anon_sym_theme = 50,
  anon_sym_COMMA = 51,
  anon_sym_light = 52,
  anon_sym_dark = 53,
  aux_sym_theme_variant_token1 = 54,
  sym_document = 55,
  sym_directive = 56,
  sym_basic_directive = 57,
  sym__kebab_case_identifier = 58,
  sym__snake_case_identifier = 59,
  sym_property = 60,
  sym_value = 61,
  sym_boolean = 62,
  sym_adjustment = 63,
  sym_string = 64,
  sym__loose_string = 65,
  sym_color = 66,
  sym__raw_value = 67,
  sym_palette_directive = 68,
  sym_palette_value = 69,
  sym_config_file_directive = 70,
  sym_path_value = 71,
  sym_keybind_directive = 72,
  sym_keybind_value = 73,
  sym_keybind_modifier = 74,
  sym_key_qualifier = 75,
  sym_keybind_trigger = 76,
  sym_chord = 77,
  sym_modifier_key = 78,
  sym_key = 79,
  sym_keybind_action = 80,
  sym__action_arg_value = 81,
  sym_theme_directive = 82,
  sym_theme_value = 83,
  sym_theme_variant = 84,
  aux_sym_document_repeat1 = 85,
  aux_sym__kebab_case_identifier_repeat1 = 86,
  aux_sym__snake_case_identifier_repeat1 = 87,
  aux_sym_keybind_value_repeat1 = 88,
  aux_sym_keybind_trigger_repeat1 = 89,
  aux_sym_chord_repeat1 = 90,
  aux_sym_theme_value_repeat1 = 91,
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
  [aux_sym__loose_string_token1] = "_loose_string_token1",
  [aux_sym__loose_string_token2] = "_loose_string_token2",
  [anon_sym_POUND] = "#",
  [aux_sym_color_token1] = "color_token1",
  [sym_percent_adjustment] = "percent_adjustment",
  [sym_numeric_adjustment] = "numeric_adjustment",
  [aux_sym__raw_value_token1] = "_raw_value_token1",
  [anon_sym_palette] = "property",
  [aux_sym_palette_value_token1] = "palette_index",
  [anon_sym_EQ2] = "=",
  [anon_sym_config_DASHfile] = "property",
  [anon_sym_QMARK] = "\?",
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
  [anon_sym_theme] = "property",
  [anon_sym_COMMA] = ",",
  [anon_sym_light] = "light",
  [anon_sym_dark] = "dark",
  [aux_sym_theme_variant_token1] = "string",
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
  [sym_theme_directive] = "theme_directive",
  [sym_theme_value] = "theme_value",
  [sym_theme_variant] = "theme_variant",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym__kebab_case_identifier_repeat1] = "_kebab_case_identifier_repeat1",
  [aux_sym__snake_case_identifier_repeat1] = "_snake_case_identifier_repeat1",
  [aux_sym_keybind_value_repeat1] = "keybind_value_repeat1",
  [aux_sym_keybind_trigger_repeat1] = "keybind_trigger_repeat1",
  [aux_sym_chord_repeat1] = "chord_repeat1",
  [aux_sym_theme_value_repeat1] = "theme_value_repeat1",
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
  [aux_sym__loose_string_token1] = aux_sym__loose_string_token1,
  [aux_sym__loose_string_token2] = aux_sym__loose_string_token2,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_color_token1] = aux_sym_color_token1,
  [sym_percent_adjustment] = sym_percent_adjustment,
  [sym_numeric_adjustment] = sym_numeric_adjustment,
  [aux_sym__raw_value_token1] = aux_sym__raw_value_token1,
  [anon_sym_palette] = sym_property,
  [aux_sym_palette_value_token1] = aux_sym_palette_value_token1,
  [anon_sym_EQ2] = anon_sym_EQ,
  [anon_sym_config_DASHfile] = sym_property,
  [anon_sym_QMARK] = anon_sym_QMARK,
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
  [anon_sym_theme] = sym_property,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_light] = anon_sym_light,
  [anon_sym_dark] = anon_sym_dark,
  [aux_sym_theme_variant_token1] = sym_string,
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
  [sym_theme_directive] = sym_theme_directive,
  [sym_theme_value] = sym_theme_value,
  [sym_theme_variant] = sym_theme_variant,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym__kebab_case_identifier_repeat1] = aux_sym__kebab_case_identifier_repeat1,
  [aux_sym__snake_case_identifier_repeat1] = aux_sym__snake_case_identifier_repeat1,
  [aux_sym_keybind_value_repeat1] = aux_sym_keybind_value_repeat1,
  [aux_sym_keybind_trigger_repeat1] = aux_sym_keybind_trigger_repeat1,
  [aux_sym_chord_repeat1] = aux_sym_chord_repeat1,
  [aux_sym_theme_value_repeat1] = aux_sym_theme_value_repeat1,
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
  [aux_sym__loose_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__loose_string_token2] = {
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
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
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
  [anon_sym_theme] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_light] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dark] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_theme_variant_token1] = {
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
  [sym_theme_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_theme_value] = {
    .visible = true,
    .named = true,
  },
  [sym_theme_variant] = {
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
  [aux_sym_theme_value_repeat1] = {
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
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(131);
      ADVANCE_MAP(
        '"', 329,
        '#', 357,
        '\'', 333,
        '+', 411,
        ',', 511,
        '-', 241,
        ':', 405,
        '=', 380,
        '>', 410,
        '?', 382,
        '_', 311,
        'a', 188,
        'c', 189,
        'd', 147,
        'f', 148,
        'g', 190,
        'l', 182,
        'o', 214,
        'p', 178,
        's', 179,
        't', 216,
        'u', 205,
        'b', 235,
        'e', 235,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(130);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      if (('h' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 132,
        '\r', 1,
        '#', 3,
        ',', 511,
        'c', 90,
        'k', 39,
        'p', 23,
        't', 55,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(138);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(138);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '\n', 133,
        '\r', 312,
        '"', 329,
        '#', 357,
        '\'', 333,
        'f', 338,
        't', 350,
        '+', 351,
        '-', 351,
        '\t', 312,
        0x0b, 312,
        '\f', 312,
        ' ', 312,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(352);
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '\n', 134,
        '\r', 6,
        '"', 329,
        '#', 448,
        '\'', 333,
        'a', 469,
        'c', 470,
        'g', 477,
        'l', 487,
        'o', 492,
        'p', 465,
        's', 466,
        'u', 485,
        ':', 337,
        '=', 337,
        '>', 337,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      if (lookahead != 0) ADVANCE(448);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '\n', 134,
        '\r', 6,
        '"', 329,
        '\'', 333,
        'a', 344,
        'c', 346,
        'g', 345,
        'l', 348,
        'o', 349,
        'p', 341,
        's', 342,
        'u', 347,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(6);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(337);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(135);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '"') ADVANCE(329);
      if (lookahead == '\'') ADVANCE(333);
      if (lookahead == 'd') ADVANCE(339);
      if (lookahead == 'l') ADVANCE(343);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(7);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(337);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(136);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == '"') ADVANCE(329);
      if (lookahead == '\'') ADVANCE(333);
      if (lookahead == '?') ADVANCE(382);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(8);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(337);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(137);
      if (lookahead == '\r') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(379);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(329);
      if (lookahead == '#') ADVANCE(357);
      if (lookahead == '\'') ADVANCE(333);
      if (lookahead == 'f') ADVANCE(338);
      if (lookahead == 't') ADVANCE(350);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(351);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(352);
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(329);
      if (lookahead == '#') ADVANCE(357);
      if (lookahead == '\'') ADVANCE(333);
      if (lookahead == 'f') ADVANCE(340);
      if (lookahead == 't') ADVANCE(350);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(351);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(329);
      if (lookahead == '\'') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(337);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(330);
      if (lookahead == '\'') ADVANCE(334);
      if (lookahead == 'f') ADVANCE(364);
      if (lookahead == 't') ADVANCE(368);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(13);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(372);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(507);
      if (lookahead != 0) ADVANCE(374);
      END_STATE();
    case 14:
      if (lookahead == '+') ADVANCE(411);
      if (lookahead == '=') ADVANCE(380);
      if (lookahead == '>') ADVANCE(410);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 15:
      if (lookahead == '+') ADVANCE(411);
      if (lookahead == '>') ADVANCE(410);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(241);
      if (lookahead == '=') ADVANCE(139);
      if (lookahead == 'd') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(62);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(51);
      END_STATE();
    case 18:
      ADVANCE_MAP(
        '=', 380,
        '>', 410,
        'a', 469,
        'c', 479,
        'g', 477,
        'l', 487,
        'o', 492,
        'p', 465,
        's', 466,
        'u', 485,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      if (lookahead != 0 &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(448);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(139);
      if (lookahead == 'a') ADVANCE(478);
      if (lookahead == 'c') ADVANCE(479);
      if (lookahead == 'o') ADVANCE(492);
      if (lookahead == 'p') ADVANCE(465);
      if (lookahead == 's') ADVANCE(466);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      if (lookahead != 0 &&
          (lookahead < '0' || ':' < lookahead) &&
          lookahead != '=' &&
          lookahead != '>') ADVANCE(448);
      END_STATE();
    case 20:
      if (lookahead == '=') ADVANCE(139);
      if (lookahead == 'a') ADVANCE(78);
      if (lookahead == 'c') ADVANCE(80);
      if (lookahead == 'o') ADVANCE(96);
      if (lookahead == 'p') ADVANCE(56);
      if (lookahead == 's') ADVANCE(57);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      END_STATE();
    case 21:
      if (lookahead == '=') ADVANCE(139);
      if (lookahead == 'd') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(62);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21);
      END_STATE();
    case 22:
      ADVANCE_MAP(
        '>', 410,
        'a', 66,
        'c', 80,
        'g', 73,
        'l', 91,
        'o', 96,
        'p', 56,
        's', 57,
        'u', 87,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 30:
      if (lookahead == 'b') ADVANCE(60);
      END_STATE();
    case 31:
      if (lookahead == 'b') ADVANCE(27);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(93);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(25);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(29);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(383);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(440);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(444);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(401);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(509);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(375);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(381);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(313);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(317);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 50:
      if (lookahead == 'f') ADVANCE(59);
      END_STATE();
    case 51:
      if (lookahead == 'f') ADVANCE(63);
      END_STATE();
    case 52:
      if (lookahead == 'f') ADVANCE(108);
      END_STATE();
    case 53:
      if (lookahead == 'g') ADVANCE(17);
      END_STATE();
    case 54:
      if (lookahead == 'g') ADVANCE(58);
      END_STATE();
    case 55:
      if (lookahead == 'h') ADVANCE(40);
      END_STATE();
    case 56:
      if (lookahead == 'h') ADVANCE(116);
      END_STATE();
    case 57:
      if (lookahead == 'h') ADVANCE(61);
      if (lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 58:
      if (lookahead == 'h') ADVANCE(109);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 65:
      if (lookahead == 'k') ADVANCE(515);
      END_STATE();
    case 66:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(389);
      if (lookahead == 't') ADVANCE(424);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(416);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(397);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(393);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(420);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(406);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(123);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 79:
      if (lookahead == 'm') ADVANCE(81);
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 80:
      if (lookahead == 'm') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(79);
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 81:
      if (lookahead == 'm') ADVANCE(26);
      END_STATE();
    case 82:
      if (lookahead == 'm') ADVANCE(42);
      END_STATE();
    case 83:
      if (lookahead == 'm') ADVANCE(48);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(428);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 96:
      if (lookahead == 'p') ADVANCE(107);
      END_STATE();
    case 97:
      if (lookahead == 'p') ADVANCE(49);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(385);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(436);
      END_STATE();
    case 100:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 101:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 103:
      if (lookahead == 's') ADVANCE(114);
      END_STATE();
    case 104:
      if (lookahead == 's') ADVANCE(64);
      END_STATE();
    case 105:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(424);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(435);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(412);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(512);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 113:
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 114:
      if (lookahead == 'u') ADVANCE(83);
      END_STATE();
    case 115:
      if (lookahead == 'y') ADVANCE(30);
      END_STATE();
    case 116:
      if (lookahead == 'y') ADVANCE(104);
      END_STATE();
    case 117:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(117);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(371);
      if (lookahead != 0) ADVANCE(374);
      END_STATE();
    case 118:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(328);
      END_STATE();
    case 119:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      END_STATE();
    case 120:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(362);
      END_STATE();
    case 121:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(358);
      END_STATE();
    case 122:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(121);
      END_STATE();
    case 123:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(122);
      END_STATE();
    case 124:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(123);
      END_STATE();
    case 125:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 126:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 127:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '0' || ':' < lookahead) &&
          lookahead != '=' &&
          lookahead != '>') ADVANCE(448);
      END_STATE();
    case 128:
      if (eof) ADVANCE(131);
      ADVANCE_MAP(
        '\n', 132,
        '\r', 1,
        '#', 3,
        ',', 511,
        ':', 405,
        '=', 380,
        '_', 311,
        'c', 213,
        'k', 169,
        'p', 154,
        't', 181,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 129:
      if (eof) ADVANCE(131);
      ADVANCE_MAP(
        '\n', 132,
        '\r', 1,
        '#', 3,
        ',', 511,
        'c', 90,
        'k', 39,
        'p', 23,
        't', 55,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(129);
      END_STATE();
    case 130:
      if (eof) ADVANCE(131);
      ADVANCE_MAP(
        '"', 329,
        '#', 357,
        '\'', 333,
        '+', 411,
        ',', 511,
        '=', 139,
        '>', 410,
        '?', 382,
        'a', 271,
        'c', 272,
        'd', 244,
        'f', 243,
        'g', 273,
        'l', 267,
        'o', 292,
        'p', 264,
        's', 265,
        't', 294,
        'u', 285,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(242);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n') ADVANCE(133);
      if (lookahead == '\r') ADVANCE(312);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(351);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n') ADVANCE(134);
      if (lookahead == '\r') ADVANCE(6);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n') ADVANCE(135);
      if (lookahead == '\r') ADVANCE(7);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n') ADVANCE(136);
      if (lookahead == '\r') ADVANCE(8);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n') ADVANCE(137);
      if (lookahead == '\r') ADVANCE(9);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == '-') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == '.') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(124);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == '.') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(358);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == '.') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(121);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == '.') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(122);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == '.') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(123);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == '.') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'b') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'b') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'c') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'c') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'c') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'd') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'd') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'd') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'd') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'f') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'f') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'g') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'g') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'h') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'h') ADVANCE(183);
      if (lookahead == 'u') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'h') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'h') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'i') ADVANCE(177);
      if (lookahead == 'o') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'i') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'i') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'i') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'i') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'k') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(164);
      if (lookahead == 'm') ADVANCE(160);
      if (lookahead == 'o') ADVANCE(199);
      if (lookahead == 't') ADVANCE(220);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(124);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(391);
      if (lookahead == 't') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(224);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(238);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'm') ADVANCE(200);
      if (lookahead == 'n') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'm') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'm') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'm') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'p') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'p') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(238);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 's') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 's') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 's') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 't') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 't') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 't') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 't') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 't') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 't') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'u') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'u') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'y') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'y') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(240);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(236);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(237);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(238);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == '.') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(242);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'b') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'c') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'c') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'c') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'd') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'd') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'd') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'f') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'g') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'h') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'h') ADVANCE(268);
      if (lookahead == 'u') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'h') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'i') ADVANCE(263);
      if (lookahead == 'o') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'i') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'i') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'k') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(261);
      if (lookahead == 'm') ADVANCE(254);
      if (lookahead == 'o') ADVANCE(281);
      if (lookahead == 't') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(392);
      if (lookahead == 't') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'm') ADVANCE(282);
      if (lookahead == 'n') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'm') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'm') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'p') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'p') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 's') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 's') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 's') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 't') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 't') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 't') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 't') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'u') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'u') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'y') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == '\n') ADVANCE(133);
      if (lookahead == '\r') ADVANCE(312);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(351);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(374);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(374);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(360);
      if (lookahead == '.') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(360);
      if (lookahead == '.') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(359);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(358);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(360);
      if (lookahead == '.') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(122);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(360);
      if (lookahead == '.') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(121);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(360);
      if (lookahead == '.') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(123);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(360);
      if (lookahead == '.') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(124);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(328);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(374);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"') ADVANCE(332);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(332);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(374);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '\'') ADVANCE(336);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'') ADVANCE(336);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_string_token3);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'a') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(124);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'h') ADVANCE(116);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'h') ADVANCE(61);
      if (lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'l') ADVANCE(47);
      if (lookahead == 'm') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(79);
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'p') ADVANCE(107);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(361);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(124);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym__loose_string_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(354);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym__loose_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(354);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym__loose_string_token2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(356);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym__loose_string_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(356);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_color_token1);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (lookahead == '%') ADVANCE(360);
      if (lookahead == '.') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_percent_adjustment);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_numeric_adjustment);
      if (lookahead == '%') ADVANCE(360);
      if (lookahead == '.') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(361);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_numeric_adjustment);
      if (lookahead == '%') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(362);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      ADVANCE_MAP(
        '"', 330,
        '\'', 334,
        'f', 364,
        't', 368,
        '+', 372,
        '-', 372,
        '\t', 363,
        0x0b, 363,
        '\f', 363,
        ' ', 363,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(507);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(374);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (lookahead == 'a') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(374);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (lookahead == 'e') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(374);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (lookahead == 'e') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(374);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (lookahead == 'l') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(374);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (lookahead == 'r') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(374);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (lookahead == 's') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(374);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (lookahead == 'u') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(374);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(371);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(374);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(374);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(374);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(374);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_palette);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_palette);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_palette_value_token1);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_palette_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_palette_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(378);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_config_DASHfile);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_keybind);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_keybind);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_clear);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_clear);
      if (lookahead == '_') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_clear);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_clear);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_all);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_all);
      if (lookahead == '_') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_all);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_all);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_global);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_global);
      if (lookahead == '_') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_global);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_global);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_local);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_local);
      if (lookahead == '_') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_local);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_local);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_unconsumed);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_unconsumed);
      if (lookahead == '_') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_unconsumed);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_unconsumed);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_physical);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_physical);
      if (lookahead == '_') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_physical);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_physical);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_shift);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_shift);
      if (lookahead == '_') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_shift);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_shift);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_ctrl);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_ctrl);
      if (lookahead == '_') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_ctrl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_ctrl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_control);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_control);
      if (lookahead == '_') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_control);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_control);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_alt);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_alt);
      if (lookahead == '_') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_alt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_alt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_option);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_option);
      if (lookahead == '_') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_option);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_option);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_opt);
      if (lookahead == '_') ADVANCE(126);
      if (lookahead == 'i') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_opt);
      if (lookahead == 'i') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_opt);
      if (lookahead == 'i') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_opt);
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_super);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_super);
      if (lookahead == '_') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_super);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_super);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_cmd);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_cmd);
      if (lookahead == '_') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_cmd);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_cmd);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_command);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_command);
      if (lookahead == '_') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_command);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_command);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_key_token1);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(126);
      if (lookahead == 'a') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(126);
      if (lookahead == 'a') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(126);
      if (lookahead == 'a') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(126);
      if (lookahead == 'a') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(126);
      if (lookahead == 'a') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(126);
      if (lookahead == 'b') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(126);
      if (lookahead == 'c') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(126);
      if (lookahead == 'c') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(126);
      if (lookahead == 'c') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(126);
      if (lookahead == 'd') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(126);
      if (lookahead == 'd') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(126);
      if (lookahead == 'd') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(126);
      if (lookahead == 'e') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(126);
      if (lookahead == 'e') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(126);
      if (lookahead == 'e') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(126);
      if (lookahead == 'f') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(126);
      if (lookahead == 'h') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(126);
      if (lookahead == 'h') ADVANCE(467);
      if (lookahead == 'u') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(126);
      if (lookahead == 'i') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(126);
      if (lookahead == 'i') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(126);
      if (lookahead == 'l') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(126);
      if (lookahead == 'l') ADVANCE(461);
      if (lookahead == 'm') ADVANCE(458);
      if (lookahead == 'o') ADVANCE(480);
      if (lookahead == 't') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(126);
      if (lookahead == 'l') ADVANCE(390);
      if (lookahead == 't') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(126);
      if (lookahead == 'l') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(126);
      if (lookahead == 'l') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(126);
      if (lookahead == 'l') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(126);
      if (lookahead == 'l') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(126);
      if (lookahead == 'l') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(126);
      if (lookahead == 'l') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(126);
      if (lookahead == 'l') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(126);
      if (lookahead == 'm') ADVANCE(458);
      if (lookahead == 'o') ADVANCE(480);
      if (lookahead == 't') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(126);
      if (lookahead == 'm') ADVANCE(482);
      if (lookahead == 'n') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(126);
      if (lookahead == 'm') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(126);
      if (lookahead == 'm') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(126);
      if (lookahead == 'n') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(126);
      if (lookahead == 'n') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(126);
      if (lookahead == 'n') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(126);
      if (lookahead == 'n') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(126);
      if (lookahead == 'o') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(126);
      if (lookahead == 'o') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(126);
      if (lookahead == 'o') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(126);
      if (lookahead == 'o') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(126);
      if (lookahead == 'o') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(126);
      if (lookahead == 'p') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(126);
      if (lookahead == 'p') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(126);
      if (lookahead == 'r') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(126);
      if (lookahead == 'r') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(126);
      if (lookahead == 'r') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(126);
      if (lookahead == 'r') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(126);
      if (lookahead == 's') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(126);
      if (lookahead == 's') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(126);
      if (lookahead == 't') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(126);
      if (lookahead == 't') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(126);
      if (lookahead == 't') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(126);
      if (lookahead == 't') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(126);
      if (lookahead == 'u') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(126);
      if (lookahead == 'y') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym__action_arg_value_token1);
      if (lookahead == '.') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(507);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym__action_arg_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(508);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_theme);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_theme);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_light);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_light);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_dark);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_dark);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_theme_variant_token1);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(518);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ',') ADVANCE(519);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_theme_variant_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ',') ADVANCE(519);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 128},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 18},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 128},
  [6] = {.lex_state = 128},
  [7] = {.lex_state = 18},
  [8] = {.lex_state = 19},
  [9] = {.lex_state = 18},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 19},
  [12] = {.lex_state = 13},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 128},
  [15] = {.lex_state = 128},
  [16] = {.lex_state = 128},
  [17] = {.lex_state = 128},
  [18] = {.lex_state = 128},
  [19] = {.lex_state = 128},
  [20] = {.lex_state = 128},
  [21] = {.lex_state = 128},
  [22] = {.lex_state = 128},
  [23] = {.lex_state = 128},
  [24] = {.lex_state = 128},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 14},
  [27] = {.lex_state = 14},
  [28] = {.lex_state = 14},
  [29] = {.lex_state = 128},
  [30] = {.lex_state = 128},
  [31] = {.lex_state = 12},
  [32] = {.lex_state = 128},
  [33] = {.lex_state = 18},
  [34] = {.lex_state = 14},
  [35] = {.lex_state = 14},
  [36] = {.lex_state = 16},
  [37] = {.lex_state = 10},
  [38] = {.lex_state = 14},
  [39] = {.lex_state = 14},
  [40] = {.lex_state = 16},
  [41] = {.lex_state = 9},
  [42] = {.lex_state = 18},
  [43] = {.lex_state = 128},
  [44] = {.lex_state = 16},
  [45] = {.lex_state = 16},
  [46] = {.lex_state = 14},
  [47] = {.lex_state = 128},
  [48] = {.lex_state = 18},
  [49] = {.lex_state = 128},
  [50] = {.lex_state = 14},
  [51] = {.lex_state = 128},
  [52] = {.lex_state = 16},
  [53] = {.lex_state = 128},
  [54] = {.lex_state = 128},
  [55] = {.lex_state = 128},
  [56] = {.lex_state = 117},
  [57] = {.lex_state = 18},
  [58] = {.lex_state = 128},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 128},
  [61] = {.lex_state = 128},
  [62] = {.lex_state = 128},
  [63] = {.lex_state = 19},
  [64] = {.lex_state = 127},
  [65] = {.lex_state = 128},
  [66] = {.lex_state = 128},
  [67] = {.lex_state = 128},
  [68] = {.lex_state = 19},
  [69] = {.lex_state = 125},
  [70] = {.lex_state = 128},
  [71] = {.lex_state = 127},
  [72] = {.lex_state = 128},
  [73] = {.lex_state = 128},
  [74] = {.lex_state = 518},
  [75] = {.lex_state = 19},
  [76] = {.lex_state = 19},
  [77] = {.lex_state = 128},
  [78] = {.lex_state = 128},
  [79] = {.lex_state = 128},
  [80] = {.lex_state = 128},
  [81] = {.lex_state = 128},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 128},
  [84] = {.lex_state = 128},
  [85] = {.lex_state = 128},
  [86] = {.lex_state = 128},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 331},
  [89] = {.lex_state = 335},
  [90] = {.lex_state = 128},
  [91] = {.lex_state = 128},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 128},
  [94] = {.lex_state = 125},
  [95] = {.lex_state = 128},
  [96] = {.lex_state = 19},
  [97] = {.lex_state = 128},
  [98] = {.lex_state = 19},
  [99] = {.lex_state = 128},
  [100] = {.lex_state = 353},
  [101] = {.lex_state = 355},
  [102] = {.lex_state = 128},
  [103] = {.lex_state = 128},
  [104] = {.lex_state = 128},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 128},
  [108] = {.lex_state = 128},
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
    [anon_sym_QMARK] = ACTIONS(1),
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
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_light] = ACTIONS(1),
    [anon_sym_dark] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(87),
    [sym_directive] = STATE(6),
    [sym_basic_directive] = STATE(14),
    [sym__kebab_case_identifier] = STATE(98),
    [sym_property] = STATE(63),
    [sym_palette_directive] = STATE(14),
    [sym_config_file_directive] = STATE(14),
    [sym_keybind_directive] = STATE(14),
    [sym_theme_directive] = STATE(14),
    [aux_sym_document_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_document_token1] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [aux_sym__kebab_case_identifier_token1] = ACTIONS(9),
    [anon_sym_palette] = ACTIONS(11),
    [anon_sym_config_DASHfile] = ACTIONS(13),
    [anon_sym_keybind] = ACTIONS(15),
    [anon_sym_theme] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(19), 1,
      aux_sym_document_token1,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      aux_sym_string_token3,
    ACTIONS(27), 1,
      anon_sym_clear,
    ACTIONS(31), 1,
      anon_sym_physical,
    ACTIONS(35), 1,
      aux_sym_key_token1,
    STATE(42), 1,
      sym_chord,
    STATE(65), 1,
      sym_string,
    STATE(70), 1,
      sym_keybind_value,
    STATE(71), 1,
      sym_key_qualifier,
    STATE(73), 1,
      sym_keybind_trigger,
    STATE(3), 2,
      sym_keybind_modifier,
      aux_sym_keybind_value_repeat1,
    STATE(28), 2,
      sym_modifier_key,
      sym_key,
    ACTIONS(29), 4,
      anon_sym_all,
      anon_sym_global,
      anon_sym_local,
      anon_sym_unconsumed,
    ACTIONS(33), 9,
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
    ACTIONS(31), 1,
      anon_sym_physical,
    ACTIONS(35), 1,
      aux_sym_key_token1,
    STATE(42), 1,
      sym_chord,
    STATE(71), 1,
      sym_key_qualifier,
    STATE(72), 1,
      sym_keybind_trigger,
    STATE(7), 2,
      sym_keybind_modifier,
      aux_sym_keybind_value_repeat1,
    STATE(28), 2,
      sym_modifier_key,
      sym_key,
    ACTIONS(29), 4,
      anon_sym_all,
      anon_sym_global,
      anon_sym_local,
      anon_sym_unconsumed,
    ACTIONS(33), 9,
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
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      aux_sym_string_token3,
    ACTIONS(37), 1,
      aux_sym_document_token1,
    ACTIONS(39), 1,
      aux_sym_value_token1,
    ACTIONS(43), 1,
      sym_number,
    ACTIONS(45), 1,
      anon_sym_POUND,
    ACTIONS(47), 1,
      aux_sym_color_token1,
    STATE(58), 1,
      sym_value,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(49), 2,
      sym_percent_adjustment,
      sym_numeric_adjustment,
    STATE(91), 4,
      sym_boolean,
      sym_adjustment,
      sym_string,
      sym_color,
  [145] = 12,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      aux_sym_document_token1,
    ACTIONS(56), 1,
      sym_comment,
    ACTIONS(59), 1,
      aux_sym__kebab_case_identifier_token1,
    ACTIONS(62), 1,
      anon_sym_palette,
    ACTIONS(65), 1,
      anon_sym_config_DASHfile,
    ACTIONS(68), 1,
      anon_sym_keybind,
    ACTIONS(71), 1,
      anon_sym_theme,
    STATE(63), 1,
      sym_property,
    STATE(98), 1,
      sym__kebab_case_identifier,
    STATE(5), 2,
      sym_directive,
      aux_sym_document_repeat1,
    STATE(14), 5,
      sym_basic_directive,
      sym_palette_directive,
      sym_config_file_directive,
      sym_keybind_directive,
      sym_theme_directive,
  [187] = 12,
    ACTIONS(9), 1,
      aux_sym__kebab_case_identifier_token1,
    ACTIONS(11), 1,
      anon_sym_palette,
    ACTIONS(13), 1,
      anon_sym_config_DASHfile,
    ACTIONS(15), 1,
      anon_sym_keybind,
    ACTIONS(17), 1,
      anon_sym_theme,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
    ACTIONS(76), 1,
      aux_sym_document_token1,
    ACTIONS(78), 1,
      sym_comment,
    STATE(63), 1,
      sym_property,
    STATE(98), 1,
      sym__kebab_case_identifier,
    STATE(5), 2,
      sym_directive,
      aux_sym_document_repeat1,
    STATE(14), 5,
      sym_basic_directive,
      sym_palette_directive,
      sym_config_file_directive,
      sym_keybind_directive,
      sym_theme_directive,
  [229] = 3,
    STATE(7), 2,
      sym_keybind_modifier,
      aux_sym_keybind_value_repeat1,
    ACTIONS(80), 4,
      anon_sym_all,
      anon_sym_global,
      anon_sym_local,
      anon_sym_unconsumed,
    ACTIONS(83), 11,
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
  [253] = 6,
    ACTIONS(31), 1,
      anon_sym_physical,
    ACTIONS(35), 1,
      aux_sym_key_token1,
    STATE(57), 1,
      sym_chord,
    STATE(71), 1,
      sym_key_qualifier,
    STATE(28), 2,
      sym_modifier_key,
      sym_key,
    ACTIONS(33), 9,
      anon_sym_shift,
      anon_sym_ctrl,
      anon_sym_control,
      anon_sym_alt,
      anon_sym_option,
      anon_sym_opt,
      anon_sym_super,
      anon_sym_cmd,
      anon_sym_command,
  [281] = 1,
    ACTIONS(85), 15,
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
  [299] = 10,
    ACTIONS(25), 1,
      aux_sym_string_token3,
    ACTIONS(47), 1,
      aux_sym_color_token1,
    ACTIONS(49), 1,
      sym_numeric_adjustment,
    ACTIONS(89), 1,
      sym_number,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    ACTIONS(95), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      sym_percent_adjustment,
    ACTIONS(87), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(78), 4,
      sym_boolean,
      sym_adjustment,
      sym_string,
      sym_color,
  [334] = 5,
    ACTIONS(31), 1,
      anon_sym_physical,
    ACTIONS(35), 1,
      aux_sym_key_token1,
    STATE(71), 1,
      sym_key_qualifier,
    STATE(46), 2,
      sym_modifier_key,
      sym_key,
    ACTIONS(33), 9,
      anon_sym_shift,
      anon_sym_ctrl,
      anon_sym_control,
      anon_sym_alt,
      anon_sym_option,
      anon_sym_opt,
      anon_sym_super,
      anon_sym_cmd,
      anon_sym_command,
  [359] = 8,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      aux_sym__raw_value_token1,
    ACTIONS(105), 1,
      aux_sym__action_arg_value_token1,
    STATE(103), 1,
      sym__raw_value,
    STATE(104), 1,
      sym__action_arg_value,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(102), 2,
      sym_boolean,
      sym__loose_string,
  [386] = 8,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      aux_sym_string_token3,
    ACTIONS(107), 1,
      aux_sym_document_token1,
    STATE(43), 1,
      sym_theme_variant,
    STATE(84), 1,
      sym_string,
    STATE(86), 1,
      sym_theme_value,
    ACTIONS(109), 2,
      anon_sym_light,
      anon_sym_dark,
  [412] = 2,
    ACTIONS(111), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(113), 6,
      sym_comment,
      aux_sym__kebab_case_identifier_token1,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_keybind,
      anon_sym_theme,
  [425] = 2,
    ACTIONS(115), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(117), 6,
      sym_comment,
      aux_sym__kebab_case_identifier_token1,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_keybind,
      anon_sym_theme,
  [438] = 2,
    ACTIONS(119), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(121), 6,
      sym_comment,
      aux_sym__kebab_case_identifier_token1,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_keybind,
      anon_sym_theme,
  [451] = 2,
    ACTIONS(123), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(125), 6,
      sym_comment,
      aux_sym__kebab_case_identifier_token1,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_keybind,
      anon_sym_theme,
  [464] = 2,
    ACTIONS(127), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(129), 6,
      sym_comment,
      aux_sym__kebab_case_identifier_token1,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_keybind,
      anon_sym_theme,
  [477] = 2,
    ACTIONS(131), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(133), 6,
      sym_comment,
      aux_sym__kebab_case_identifier_token1,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_keybind,
      anon_sym_theme,
  [490] = 2,
    ACTIONS(135), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(137), 6,
      sym_comment,
      aux_sym__kebab_case_identifier_token1,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_keybind,
      anon_sym_theme,
  [503] = 2,
    ACTIONS(139), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(141), 6,
      sym_comment,
      aux_sym__kebab_case_identifier_token1,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_keybind,
      anon_sym_theme,
  [516] = 2,
    ACTIONS(143), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(145), 6,
      sym_comment,
      aux_sym__kebab_case_identifier_token1,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_keybind,
      anon_sym_theme,
  [529] = 2,
    ACTIONS(147), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(149), 6,
      sym_comment,
      aux_sym__kebab_case_identifier_token1,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_keybind,
      anon_sym_theme,
  [542] = 2,
    ACTIONS(151), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(153), 6,
      sym_comment,
      aux_sym__kebab_case_identifier_token1,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_keybind,
      anon_sym_theme,
  [555] = 7,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      aux_sym_string_token3,
    ACTIONS(155), 1,
      aux_sym_document_token1,
    ACTIONS(157), 1,
      anon_sym_QMARK,
    STATE(62), 1,
      sym_path_value,
    STATE(99), 1,
      sym_string,
  [577] = 3,
    ACTIONS(161), 1,
      anon_sym_PLUS,
    STATE(26), 1,
      aux_sym_chord_repeat1,
    ACTIONS(159), 2,
      anon_sym_EQ2,
      anon_sym_GT,
  [588] = 3,
    ACTIONS(166), 1,
      anon_sym_PLUS,
    STATE(26), 1,
      aux_sym_chord_repeat1,
    ACTIONS(164), 2,
      anon_sym_EQ2,
      anon_sym_GT,
  [599] = 3,
    ACTIONS(166), 1,
      anon_sym_PLUS,
    STATE(27), 1,
      aux_sym_chord_repeat1,
    ACTIONS(168), 2,
      anon_sym_EQ2,
      anon_sym_GT,
  [610] = 3,
    ACTIONS(172), 1,
      anon_sym__,
    STATE(32), 1,
      aux_sym__snake_case_identifier_repeat1,
    ACTIONS(170), 2,
      aux_sym_document_token1,
      anon_sym_COLON,
  [621] = 3,
    ACTIONS(172), 1,
      anon_sym__,
    STATE(29), 1,
      aux_sym__snake_case_identifier_repeat1,
    ACTIONS(174), 2,
      aux_sym_document_token1,
      anon_sym_COLON,
  [632] = 4,
    ACTIONS(25), 1,
      aux_sym_string_token3,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    STATE(61), 1,
      sym_string,
  [645] = 3,
    ACTIONS(178), 1,
      anon_sym__,
    STATE(32), 1,
      aux_sym__snake_case_identifier_repeat1,
    ACTIONS(176), 2,
      aux_sym_document_token1,
      anon_sym_COLON,
  [656] = 3,
    ACTIONS(181), 1,
      anon_sym_EQ2,
    ACTIONS(183), 1,
      anon_sym_GT,
    STATE(48), 1,
      aux_sym_keybind_trigger_repeat1,
  [666] = 1,
    ACTIONS(185), 3,
      anon_sym_EQ2,
      anon_sym_GT,
      anon_sym_PLUS,
  [672] = 1,
    ACTIONS(187), 3,
      anon_sym_EQ2,
      anon_sym_GT,
      anon_sym_PLUS,
  [678] = 3,
    ACTIONS(189), 1,
      anon_sym_EQ,
    ACTIONS(191), 1,
      anon_sym_DASH,
    STATE(45), 1,
      aux_sym__kebab_case_identifier_repeat1,
  [688] = 3,
    ACTIONS(95), 1,
      anon_sym_POUND,
    ACTIONS(193), 1,
      aux_sym_color_token1,
    STATE(81), 1,
      sym_color,
  [698] = 3,
    ACTIONS(195), 1,
      aux_sym__snake_case_identifier_token1,
    STATE(53), 1,
      sym__snake_case_identifier,
    STATE(85), 1,
      sym_keybind_action,
  [708] = 1,
    ACTIONS(197), 3,
      anon_sym_EQ2,
      anon_sym_GT,
      anon_sym_PLUS,
  [714] = 3,
    ACTIONS(199), 1,
      anon_sym_EQ,
    ACTIONS(201), 1,
      anon_sym_DASH,
    STATE(40), 1,
      aux_sym__kebab_case_identifier_repeat1,
  [724] = 3,
    ACTIONS(204), 1,
      aux_sym_document_token1,
    ACTIONS(206), 1,
      aux_sym_palette_value_token1,
    STATE(80), 1,
      sym_palette_value,
  [734] = 3,
    ACTIONS(183), 1,
      anon_sym_GT,
    ACTIONS(208), 1,
      anon_sym_EQ2,
    STATE(33), 1,
      aux_sym_keybind_trigger_repeat1,
  [744] = 3,
    ACTIONS(210), 1,
      aux_sym_document_token1,
    ACTIONS(212), 1,
      anon_sym_COMMA,
    STATE(49), 1,
      aux_sym_theme_value_repeat1,
  [754] = 2,
    STATE(55), 1,
      sym_theme_variant,
    ACTIONS(214), 2,
      anon_sym_light,
      anon_sym_dark,
  [762] = 3,
    ACTIONS(191), 1,
      anon_sym_DASH,
    ACTIONS(216), 1,
      anon_sym_EQ,
    STATE(40), 1,
      aux_sym__kebab_case_identifier_repeat1,
  [772] = 1,
    ACTIONS(159), 3,
      anon_sym_EQ2,
      anon_sym_GT,
      anon_sym_PLUS,
  [778] = 3,
    ACTIONS(218), 1,
      aux_sym_document_token1,
    ACTIONS(220), 1,
      anon_sym_COMMA,
    STATE(47), 1,
      aux_sym_theme_value_repeat1,
  [788] = 3,
    ACTIONS(223), 1,
      anon_sym_EQ2,
    ACTIONS(225), 1,
      anon_sym_GT,
    STATE(48), 1,
      aux_sym_keybind_trigger_repeat1,
  [798] = 3,
    ACTIONS(212), 1,
      anon_sym_COMMA,
    ACTIONS(228), 1,
      aux_sym_document_token1,
    STATE(47), 1,
      aux_sym_theme_value_repeat1,
  [808] = 3,
    ACTIONS(195), 1,
      aux_sym__snake_case_identifier_token1,
    STATE(53), 1,
      sym__snake_case_identifier,
    STATE(97), 1,
      sym_keybind_action,
  [818] = 1,
    ACTIONS(176), 3,
      aux_sym_document_token1,
      anon_sym__,
      anon_sym_COLON,
  [824] = 1,
    ACTIONS(199), 2,
      anon_sym_EQ,
      anon_sym_DASH,
  [829] = 2,
    ACTIONS(230), 1,
      aux_sym_document_token1,
    ACTIONS(232), 1,
      anon_sym_COLON,
  [836] = 2,
    ACTIONS(234), 1,
      aux_sym_document_token1,
    ACTIONS(236), 1,
      anon_sym_COMMA,
  [843] = 2,
    ACTIONS(218), 1,
      aux_sym_document_token1,
    ACTIONS(238), 1,
      anon_sym_COMMA,
  [850] = 2,
    ACTIONS(240), 1,
      aux_sym__raw_value_token1,
    STATE(60), 1,
      sym__raw_value,
  [857] = 1,
    ACTIONS(223), 2,
      anon_sym_EQ2,
      anon_sym_GT,
  [862] = 1,
    ACTIONS(242), 1,
      aux_sym_document_token1,
  [866] = 1,
    ACTIONS(244), 1,
      anon_sym_SQUOTE,
  [870] = 1,
    ACTIONS(246), 1,
      aux_sym_document_token1,
  [874] = 1,
    ACTIONS(248), 1,
      aux_sym_document_token1,
  [878] = 1,
    ACTIONS(250), 1,
      aux_sym_document_token1,
  [882] = 1,
    ACTIONS(252), 1,
      anon_sym_EQ,
  [886] = 1,
    ACTIONS(254), 1,
      aux_sym_key_token1,
  [890] = 1,
    ACTIONS(256), 1,
      aux_sym_document_token1,
  [894] = 1,
    ACTIONS(258), 1,
      anon_sym_COLON,
  [898] = 1,
    ACTIONS(260), 1,
      anon_sym_COLON,
  [902] = 1,
    ACTIONS(262), 1,
      anon_sym_EQ,
  [906] = 1,
    ACTIONS(264), 1,
      aux_sym__kebab_case_identifier_token1,
  [910] = 1,
    ACTIONS(266), 1,
      aux_sym_document_token1,
  [914] = 1,
    ACTIONS(268), 1,
      aux_sym_key_token1,
  [918] = 1,
    ACTIONS(270), 1,
      anon_sym_EQ2,
  [922] = 1,
    ACTIONS(272), 1,
      anon_sym_EQ2,
  [926] = 1,
    ACTIONS(274), 1,
      aux_sym_theme_variant_token1,
  [930] = 1,
    ACTIONS(276), 1,
      anon_sym_EQ,
  [934] = 1,
    ACTIONS(278), 1,
      anon_sym_EQ,
  [938] = 1,
    ACTIONS(280), 1,
      anon_sym_EQ2,
  [942] = 1,
    ACTIONS(282), 1,
      aux_sym_document_token1,
  [946] = 1,
    ACTIONS(284), 1,
      aux_sym_document_token1,
  [950] = 1,
    ACTIONS(286), 1,
      aux_sym_document_token1,
  [954] = 1,
    ACTIONS(288), 1,
      aux_sym_document_token1,
  [958] = 1,
    ACTIONS(244), 1,
      anon_sym_DQUOTE,
  [962] = 1,
    ACTIONS(290), 1,
      anon_sym_COLON,
  [966] = 1,
    ACTIONS(210), 1,
      aux_sym_document_token1,
  [970] = 1,
    ACTIONS(292), 1,
      aux_sym_document_token1,
  [974] = 1,
    ACTIONS(294), 1,
      aux_sym_document_token1,
  [978] = 1,
    ACTIONS(296), 1,
      ts_builtin_sym_end,
  [982] = 1,
    ACTIONS(298), 1,
      aux_sym_string_token1,
  [986] = 1,
    ACTIONS(300), 1,
      aux_sym_string_token2,
  [990] = 1,
    ACTIONS(302), 1,
      aux_sym_document_token1,
  [994] = 1,
    ACTIONS(304), 1,
      aux_sym_document_token1,
  [998] = 1,
    ACTIONS(306), 1,
      aux_sym_color_token1,
  [1002] = 1,
    ACTIONS(308), 1,
      aux_sym_document_token1,
  [1006] = 1,
    ACTIONS(310), 1,
      aux_sym__kebab_case_identifier_token1,
  [1010] = 1,
    ACTIONS(312), 1,
      aux_sym_document_token1,
  [1014] = 1,
    ACTIONS(314), 1,
      anon_sym_EQ,
  [1018] = 1,
    ACTIONS(316), 1,
      aux_sym_document_token1,
  [1022] = 1,
    ACTIONS(318), 1,
      anon_sym_EQ,
  [1026] = 1,
    ACTIONS(320), 1,
      aux_sym_document_token1,
  [1030] = 1,
    ACTIONS(322), 1,
      aux_sym__loose_string_token1,
  [1034] = 1,
    ACTIONS(324), 1,
      aux_sym__loose_string_token2,
  [1038] = 1,
    ACTIONS(326), 1,
      aux_sym_document_token1,
  [1042] = 1,
    ACTIONS(328), 1,
      aux_sym_document_token1,
  [1046] = 1,
    ACTIONS(330), 1,
      aux_sym_document_token1,
  [1050] = 1,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
  [1054] = 1,
    ACTIONS(332), 1,
      anon_sym_SQUOTE,
  [1058] = 1,
    ACTIONS(334), 1,
      aux_sym_document_token1,
  [1062] = 1,
    ACTIONS(336), 1,
      aux_sym_document_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 62,
  [SMALL_STATE(4)] = 103,
  [SMALL_STATE(5)] = 145,
  [SMALL_STATE(6)] = 187,
  [SMALL_STATE(7)] = 229,
  [SMALL_STATE(8)] = 253,
  [SMALL_STATE(9)] = 281,
  [SMALL_STATE(10)] = 299,
  [SMALL_STATE(11)] = 334,
  [SMALL_STATE(12)] = 359,
  [SMALL_STATE(13)] = 386,
  [SMALL_STATE(14)] = 412,
  [SMALL_STATE(15)] = 425,
  [SMALL_STATE(16)] = 438,
  [SMALL_STATE(17)] = 451,
  [SMALL_STATE(18)] = 464,
  [SMALL_STATE(19)] = 477,
  [SMALL_STATE(20)] = 490,
  [SMALL_STATE(21)] = 503,
  [SMALL_STATE(22)] = 516,
  [SMALL_STATE(23)] = 529,
  [SMALL_STATE(24)] = 542,
  [SMALL_STATE(25)] = 555,
  [SMALL_STATE(26)] = 577,
  [SMALL_STATE(27)] = 588,
  [SMALL_STATE(28)] = 599,
  [SMALL_STATE(29)] = 610,
  [SMALL_STATE(30)] = 621,
  [SMALL_STATE(31)] = 632,
  [SMALL_STATE(32)] = 645,
  [SMALL_STATE(33)] = 656,
  [SMALL_STATE(34)] = 666,
  [SMALL_STATE(35)] = 672,
  [SMALL_STATE(36)] = 678,
  [SMALL_STATE(37)] = 688,
  [SMALL_STATE(38)] = 698,
  [SMALL_STATE(39)] = 708,
  [SMALL_STATE(40)] = 714,
  [SMALL_STATE(41)] = 724,
  [SMALL_STATE(42)] = 734,
  [SMALL_STATE(43)] = 744,
  [SMALL_STATE(44)] = 754,
  [SMALL_STATE(45)] = 762,
  [SMALL_STATE(46)] = 772,
  [SMALL_STATE(47)] = 778,
  [SMALL_STATE(48)] = 788,
  [SMALL_STATE(49)] = 798,
  [SMALL_STATE(50)] = 808,
  [SMALL_STATE(51)] = 818,
  [SMALL_STATE(52)] = 824,
  [SMALL_STATE(53)] = 829,
  [SMALL_STATE(54)] = 836,
  [SMALL_STATE(55)] = 843,
  [SMALL_STATE(56)] = 850,
  [SMALL_STATE(57)] = 857,
  [SMALL_STATE(58)] = 862,
  [SMALL_STATE(59)] = 866,
  [SMALL_STATE(60)] = 870,
  [SMALL_STATE(61)] = 874,
  [SMALL_STATE(62)] = 878,
  [SMALL_STATE(63)] = 882,
  [SMALL_STATE(64)] = 886,
  [SMALL_STATE(65)] = 890,
  [SMALL_STATE(66)] = 894,
  [SMALL_STATE(67)] = 898,
  [SMALL_STATE(68)] = 902,
  [SMALL_STATE(69)] = 906,
  [SMALL_STATE(70)] = 910,
  [SMALL_STATE(71)] = 914,
  [SMALL_STATE(72)] = 918,
  [SMALL_STATE(73)] = 922,
  [SMALL_STATE(74)] = 926,
  [SMALL_STATE(75)] = 930,
  [SMALL_STATE(76)] = 934,
  [SMALL_STATE(77)] = 938,
  [SMALL_STATE(78)] = 942,
  [SMALL_STATE(79)] = 946,
  [SMALL_STATE(80)] = 950,
  [SMALL_STATE(81)] = 954,
  [SMALL_STATE(82)] = 958,
  [SMALL_STATE(83)] = 962,
  [SMALL_STATE(84)] = 966,
  [SMALL_STATE(85)] = 970,
  [SMALL_STATE(86)] = 974,
  [SMALL_STATE(87)] = 978,
  [SMALL_STATE(88)] = 982,
  [SMALL_STATE(89)] = 986,
  [SMALL_STATE(90)] = 990,
  [SMALL_STATE(91)] = 994,
  [SMALL_STATE(92)] = 998,
  [SMALL_STATE(93)] = 1002,
  [SMALL_STATE(94)] = 1006,
  [SMALL_STATE(95)] = 1010,
  [SMALL_STATE(96)] = 1014,
  [SMALL_STATE(97)] = 1018,
  [SMALL_STATE(98)] = 1022,
  [SMALL_STATE(99)] = 1026,
  [SMALL_STATE(100)] = 1030,
  [SMALL_STATE(101)] = 1034,
  [SMALL_STATE(102)] = 1038,
  [SMALL_STATE(103)] = 1042,
  [SMALL_STATE(104)] = 1046,
  [SMALL_STATE(105)] = 1050,
  [SMALL_STATE(106)] = 1054,
  [SMALL_STATE(107)] = 1058,
  [SMALL_STATE(108)] = 1062,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keybind_value_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keybind_value_repeat1, 2, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keybind_modifier, 2, 0, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file_directive, 3, 0, 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_config_file_directive, 3, 0, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_directive, 3, 0, 1),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keybind_directive, 3, 0, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_theme_directive, 3, 0, 1),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_theme_directive, 3, 0, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_palette_directive, 3, 0, 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_palette_directive, 3, 0, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file_directive, 4, 0, 2),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_config_file_directive, 4, 0, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_directive, 4, 0, 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keybind_directive, 4, 0, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_palette_directive, 4, 0, 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_palette_directive, 4, 0, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_theme_directive, 4, 0, 2),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_theme_directive, 4, 0, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_directive, 4, 0, 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_directive, 4, 0, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_directive, 3, 0, 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_directive, 3, 0, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_chord_repeat1, 2, 0, 0),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chord_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord, 2, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord, 1, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__snake_case_identifier, 2, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__snake_case_identifier, 1, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__snake_case_identifier_repeat1, 2, 0, 0),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__snake_case_identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_trigger, 2, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier_key, 1, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__kebab_case_identifier, 1, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 2, 0, 4),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__kebab_case_identifier_repeat1, 2, 0, 0),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__kebab_case_identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_trigger, 1, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_theme_value, 1, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__kebab_case_identifier, 2, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_theme_value_repeat1, 2, 0, 0),
  [220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_theme_value_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keybind_trigger_repeat1, 2, 0, 0),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keybind_trigger_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_theme_value, 2, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_action, 1, 0, 5),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_theme_variant, 3, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_theme_variant, 3, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_theme_value_repeat1, 2, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_value, 2, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_qualifier, 2, 0, 4),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_value, 1, 0, 0),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 2, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_palette_value, 3, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_value, 3, 0, 6),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [296] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 1, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adjustment, 1, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_value, 4, 0, 7),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 1, 0, 0),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_value, 1, 0, 0),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__action_arg_value, 1, 0, 0),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__loose_string, 1, 0, 0),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_action, 3, 0, 8),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__loose_string, 3, 0, 0),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
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
