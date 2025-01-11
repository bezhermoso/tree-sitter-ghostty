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
#define STATE_COUNT 114
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 97
#define ALIAS_COUNT 0
#define TOKEN_COUNT 58
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 10

enum ts_symbol_identifiers {
  aux_sym_document_token1 = 1,
  sym_comment = 2,
  anon_sym_EQ = 3,
  aux_sym__kebab_case_identifier_token1 = 4,
  anon_sym_DASH = 5,
  aux_sym__snake_case_identifier_token1 = 6,
  anon_sym__ = 7,
  aux_sym_value_token1 = 8,
  anon_sym_COMMA = 9,
  anon_sym_true = 10,
  anon_sym_false = 11,
  sym_number = 12,
  anon_sym_DQUOTE = 13,
  aux_sym_string_token1 = 14,
  anon_sym_SQUOTE = 15,
  aux_sym_string_token2 = 16,
  aux_sym_string_token3 = 17,
  aux_sym__loose_string_token1 = 18,
  aux_sym__loose_string_token2 = 19,
  anon_sym_POUND = 20,
  aux_sym_color_token1 = 21,
  sym_percent_adjustment = 22,
  sym_numeric_adjustment = 23,
  aux_sym__raw_value_token1 = 24,
  anon_sym_palette = 25,
  aux_sym_palette_value_token1 = 26,
  anon_sym_EQ2 = 27,
  anon_sym_config_DASHfile = 28,
  anon_sym_gtk_DASHcustom_DASHcss = 29,
  anon_sym_custom_DASHshader = 30,
  anon_sym_QMARK = 31,
  anon_sym_keybind = 32,
  anon_sym_clear = 33,
  anon_sym_all = 34,
  anon_sym_global = 35,
  anon_sym_local = 36,
  anon_sym_unconsumed = 37,
  anon_sym_COLON = 38,
  anon_sym_physical = 39,
  anon_sym_GT = 40,
  anon_sym_PLUS = 41,
  anon_sym_shift = 42,
  anon_sym_ctrl = 43,
  anon_sym_control = 44,
  anon_sym_alt = 45,
  anon_sym_option = 46,
  anon_sym_opt = 47,
  anon_sym_super = 48,
  anon_sym_cmd = 49,
  anon_sym_command = 50,
  aux_sym_key_token1 = 51,
  aux_sym__action_arg_value_token1 = 52,
  anon_sym_theme = 53,
  anon_sym_COMMA2 = 54,
  anon_sym_light = 55,
  anon_sym_dark = 56,
  aux_sym_theme_variant_token1 = 57,
  sym_document = 58,
  sym_directive = 59,
  sym_basic_directive = 60,
  sym__kebab_case_identifier = 61,
  sym__snake_case_identifier = 62,
  sym_property = 63,
  sym_value = 64,
  sym_tuple = 65,
  sym_boolean = 66,
  sym_adjustment = 67,
  sym_string = 68,
  sym__loose_string = 69,
  sym_color = 70,
  sym__raw_value = 71,
  sym_palette_directive = 72,
  sym_palette_value = 73,
  sym_path_property = 74,
  sym_path_directive = 75,
  sym_path_value = 76,
  sym_keybind_directive = 77,
  sym_keybind_value = 78,
  sym_keybind_modifier = 79,
  sym_key_qualifier = 80,
  sym_keybind_trigger = 81,
  sym_chord = 82,
  sym_modifier_key = 83,
  sym_key = 84,
  sym_keybind_action = 85,
  sym__action_arg_value = 86,
  sym_theme_directive = 87,
  sym_theme_value = 88,
  sym_theme_variant = 89,
  aux_sym_document_repeat1 = 90,
  aux_sym__kebab_case_identifier_repeat1 = 91,
  aux_sym__snake_case_identifier_repeat1 = 92,
  aux_sym_keybind_value_repeat1 = 93,
  aux_sym_keybind_trigger_repeat1 = 94,
  aux_sym_chord_repeat1 = 95,
  aux_sym_theme_value_repeat1 = 96,
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
  [anon_sym_COMMA] = ",",
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
  [anon_sym_config_DASHfile] = "config-file",
  [anon_sym_gtk_DASHcustom_DASHcss] = "gtk-custom-css",
  [anon_sym_custom_DASHshader] = "custom-shader",
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
  [anon_sym_COMMA2] = ",",
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
  [sym_tuple] = "tuple",
  [sym_boolean] = "boolean",
  [sym_adjustment] = "adjustment",
  [sym_string] = "string",
  [sym__loose_string] = "string",
  [sym_color] = "color",
  [sym__raw_value] = "_raw_value",
  [sym_palette_directive] = "palette_directive",
  [sym_palette_value] = "palette_value",
  [sym_path_property] = "property",
  [sym_path_directive] = "path_directive",
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
  [anon_sym_COMMA] = anon_sym_COMMA,
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
  [anon_sym_config_DASHfile] = anon_sym_config_DASHfile,
  [anon_sym_gtk_DASHcustom_DASHcss] = anon_sym_gtk_DASHcustom_DASHcss,
  [anon_sym_custom_DASHshader] = anon_sym_custom_DASHshader,
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
  [anon_sym_COMMA2] = anon_sym_COMMA,
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
  [sym_tuple] = sym_tuple,
  [sym_boolean] = sym_boolean,
  [sym_adjustment] = sym_adjustment,
  [sym_string] = sym_string,
  [sym__loose_string] = sym_string,
  [sym_color] = sym_color,
  [sym__raw_value] = sym__raw_value,
  [sym_palette_directive] = sym_palette_directive,
  [sym_palette_value] = sym_palette_value,
  [sym_path_property] = sym_property,
  [sym_path_directive] = sym_path_directive,
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
  [anon_sym_COMMA] = {
    .visible = true,
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
    .named = false,
  },
  [anon_sym_gtk_DASHcustom_DASHcss] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_custom_DASHshader] = {
    .visible = true,
    .named = false,
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
  [anon_sym_COMMA2] = {
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
  [sym_tuple] = {
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
  [sym_path_property] = {
    .visible = true,
    .named = true,
  },
  [sym_path_directive] = {
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
  field_first = 4,
  field_modifier = 5,
  field_property = 6,
  field_qualifier = 7,
  field_second = 8,
  field_trigger = 9,
  field_value = 10,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_action] = "action",
  [field_action_name] = "action_name",
  [field_argument] = "argument",
  [field_first] = "first",
  [field_modifier] = "modifier",
  [field_property] = "property",
  [field_qualifier] = "qualifier",
  [field_second] = "second",
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
  [9] = {.index = 12, .length = 2},
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
    {field_first, 0},
    {field_second, 2},
  [10] =
    {field_action, 3},
    {field_trigger, 1},
  [12] =
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
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(156);
      ADVANCE_MAP(
        '"', 364,
        '#', 392,
        '\'', 368,
        '+', 448,
        ',', 346,
        '-', 274,
        ':', 442,
        '=', 415,
        '>', 447,
        '?', 419,
        '_', 344,
        'a', 216,
        'c', 217,
        'd', 174,
        'f', 175,
        'g', 218,
        'l', 209,
        'o', 244,
        'p', 205,
        's', 206,
        't', 246,
        'u', 234,
        'b', 268,
        'e', 268,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(155);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('h' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      if (lookahead != 0) ADVANCE(372);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 157,
        '\r', 1,
        '#', 3,
        ',', 548,
        'c', 103,
        'g', 127,
        'k', 47,
        'p', 27,
        't', 64,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(163);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '\n', 158,
        '\r', 345,
        '"', 364,
        '#', 392,
        '\'', 368,
        'f', 373,
        't', 385,
        '+', 386,
        '-', 386,
        '\t', 345,
        0x0b, 345,
        '\f', 345,
        ' ', 345,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(360);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(372);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '\n', 159,
        '\r', 6,
        '"', 364,
        '\'', 368,
        'a', 506,
        'c', 507,
        'g', 514,
        'l', 524,
        'o', 529,
        'p', 502,
        's', 503,
        'u', 522,
        '#', 485,
        '?', 485,
        ':', 372,
        '=', 372,
        '>', 372,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0) ADVANCE(485);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '\n', 159,
        '\r', 6,
        '"', 364,
        '\'', 368,
        'a', 379,
        'c', 381,
        'g', 380,
        'l', 383,
        'o', 384,
        'p', 376,
        's', 377,
        'u', 382,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(6);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '?') ADVANCE(372);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '"') ADVANCE(364);
      if (lookahead == '\'') ADVANCE(368);
      if (lookahead == 'd') ADVANCE(374);
      if (lookahead == 'l') ADVANCE(378);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(7);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '?') ADVANCE(372);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == '"') ADVANCE(364);
      if (lookahead == '\'') ADVANCE(368);
      if (lookahead == '?') ADVANCE(419);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(8);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(372);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(162);
      if (lookahead == '\r') ADVANCE(10);
      if (lookahead == ',') ADVANCE(346);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(414);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(162);
      if (lookahead == '\r') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(414);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(364);
      if (lookahead == '#') ADVANCE(392);
      if (lookahead == '\'') ADVANCE(368);
      if (lookahead == 'f') ADVANCE(373);
      if (lookahead == 't') ADVANCE(385);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(386);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(360);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(372);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(364);
      if (lookahead == '#') ADVANCE(392);
      if (lookahead == '\'') ADVANCE(368);
      if (lookahead == 'f') ADVANCE(375);
      if (lookahead == 't') ADVANCE(385);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(386);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(372);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(364);
      if (lookahead == '\'') ADVANCE(368);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '?') ADVANCE(372);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(365);
      if (lookahead == '\'') ADVANCE(369);
      if (lookahead == 'f') ADVANCE(399);
      if (lookahead == 't') ADVANCE(403);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(14);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(407);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(544);
      if (lookahead != 0) ADVANCE(409);
      END_STATE();
    case 15:
      if (lookahead == '+') ADVANCE(448);
      if (lookahead == '=') ADVANCE(415);
      if (lookahead == '>') ADVANCE(447);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 16:
      if (lookahead == '+') ADVANCE(448);
      if (lookahead == '>') ADVANCE(447);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(274);
      if (lookahead == '=') ADVANCE(164);
      if (lookahead == 'd') ADVANCE(34);
      if (lookahead == 'l') ADVANCE(72);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(362);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(37);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(121);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(38);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(60);
      END_STATE();
    case 22:
      ADVANCE_MAP(
        '=', 415,
        '>', 447,
        'a', 506,
        'c', 516,
        'g', 514,
        'l', 524,
        'o', 529,
        'p', 502,
        's', 503,
        'u', 522,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(485);
      END_STATE();
    case 23:
      if (lookahead == '=') ADVANCE(164);
      if (lookahead == 'a') ADVANCE(515);
      if (lookahead == 'c') ADVANCE(516);
      if (lookahead == 'o') ADVANCE(529);
      if (lookahead == 'p') ADVANCE(502);
      if (lookahead == 's') ADVANCE(503);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '0' || ':' < lookahead) &&
          lookahead != '=' &&
          lookahead != '>') ADVANCE(485);
      END_STATE();
    case 24:
      if (lookahead == '=') ADVANCE(164);
      if (lookahead == 'a') ADVANCE(89);
      if (lookahead == 'c') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(111);
      if (lookahead == 'p') ADVANCE(66);
      if (lookahead == 's') ADVANCE(67);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24);
      END_STATE();
    case 25:
      if (lookahead == '=') ADVANCE(164);
      if (lookahead == 'd') ADVANCE(34);
      if (lookahead == 'l') ADVANCE(72);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(362);
      END_STATE();
    case 26:
      ADVANCE_MAP(
        '>', 447,
        'a', 77,
        'c', 91,
        'g', 84,
        'l', 108,
        'o', 111,
        'p', 66,
        's', 67,
        'u', 100,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(26);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 35:
      if (lookahead == 'b') ADVANCE(70);
      END_STATE();
    case 36:
      if (lookahead == 'b') ADVANCE(32);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(139);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(123);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(106);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(29);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(33);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(420);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(477);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(481);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(438);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(52);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(546);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(410);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(416);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(347);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(351);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 59:
      if (lookahead == 'f') ADVANCE(69);
      END_STATE();
    case 60:
      if (lookahead == 'f') ADVANCE(73);
      END_STATE();
    case 61:
      if (lookahead == 'f') ADVANCE(131);
      END_STATE();
    case 62:
      if (lookahead == 'g') ADVANCE(21);
      END_STATE();
    case 63:
      if (lookahead == 'g') ADVANCE(68);
      END_STATE();
    case 64:
      if (lookahead == 'h') ADVANCE(48);
      END_STATE();
    case 65:
      if (lookahead == 'h') ADVANCE(28);
      END_STATE();
    case 66:
      if (lookahead == 'h') ADVANCE(141);
      END_STATE();
    case 67:
      if (lookahead == 'h') ADVANCE(71);
      if (lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 68:
      if (lookahead == 'h') ADVANCE(132);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 75:
      if (lookahead == 'k') ADVANCE(18);
      END_STATE();
    case 76:
      if (lookahead == 'k') ADVANCE(552);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(426);
      if (lookahead == 't') ADVANCE(461);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(453);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(434);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(430);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(457);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(443);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(104);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(125);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(148);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(129);
      END_STATE();
    case 90:
      if (lookahead == 'm') ADVANCE(19);
      END_STATE();
    case 91:
      if (lookahead == 'm') ADVANCE(43);
      if (lookahead == 'o') ADVANCE(94);
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 92:
      if (lookahead == 'm') ADVANCE(49);
      END_STATE();
    case 93:
      if (lookahead == 'm') ADVANCE(31);
      END_STATE();
    case 94:
      if (lookahead == 'm') ADVANCE(93);
      if (lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 95:
      if (lookahead == 'm') ADVANCE(57);
      END_STATE();
    case 96:
      if (lookahead == 'm') ADVANCE(20);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(465);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(97);
      if (lookahead == 'u') ADVANCE(120);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 111:
      if (lookahead == 'p') ADVANCE(130);
      END_STATE();
    case 112:
      if (lookahead == 'p') ADVANCE(58);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(418);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(422);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(473);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 119:
      if (lookahead == 's') ADVANCE(417);
      END_STATE();
    case 120:
      if (lookahead == 's') ADVANCE(128);
      END_STATE();
    case 121:
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 122:
      if (lookahead == 's') ADVANCE(138);
      END_STATE();
    case 123:
      if (lookahead == 's') ADVANCE(119);
      END_STATE();
    case 124:
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 125:
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 126:
      if (lookahead == 's') ADVANCE(136);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(461);
      END_STATE();
    case 130:
      if (lookahead == 't') ADVANCE(472);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(449);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(549);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 137:
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 138:
      if (lookahead == 'u') ADVANCE(95);
      END_STATE();
    case 139:
      if (lookahead == 'u') ADVANCE(126);
      END_STATE();
    case 140:
      if (lookahead == 'y') ADVANCE(35);
      END_STATE();
    case 141:
      if (lookahead == 'y') ADVANCE(124);
      END_STATE();
    case 142:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(142);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(406);
      if (lookahead != 0) ADVANCE(409);
      END_STATE();
    case 143:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(363);
      END_STATE();
    case 144:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(361);
      END_STATE();
    case 145:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(397);
      END_STATE();
    case 146:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(393);
      END_STATE();
    case 147:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(146);
      END_STATE();
    case 148:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      END_STATE();
    case 149:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(148);
      END_STATE();
    case 150:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 151:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 152:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '0' || ':' < lookahead) &&
          lookahead != '=' &&
          lookahead != '>') ADVANCE(485);
      END_STATE();
    case 153:
      if (eof) ADVANCE(156);
      ADVANCE_MAP(
        '\n', 157,
        '\r', 1,
        '#', 3,
        ',', 548,
        ':', 442,
        '=', 415,
        '_', 344,
        'c', 243,
        'g', 259,
        'k', 196,
        'p', 181,
        't', 208,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 154:
      if (eof) ADVANCE(156);
      ADVANCE_MAP(
        '\n', 157,
        '\r', 1,
        '#', 3,
        ',', 548,
        'c', 103,
        'g', 127,
        'k', 47,
        'p', 27,
        't', 64,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(154);
      END_STATE();
    case 155:
      if (eof) ADVANCE(156);
      ADVANCE_MAP(
        '"', 364,
        '#', 392,
        '\'', 368,
        '+', 448,
        ',', 548,
        '=', 164,
        '>', 447,
        '?', 419,
        'a', 304,
        'c', 305,
        'd', 277,
        'f', 276,
        'g', 306,
        'l', 300,
        'o', 325,
        'p', 297,
        's', 298,
        't', 327,
        'u', 318,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(155);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      if (lookahead != 0) ADVANCE(372);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n') ADVANCE(157);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n') ADVANCE(158);
      if (lookahead == '\r') ADVANCE(345);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(386);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(355);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n') ADVANCE(159);
      if (lookahead == '\r') ADVANCE(6);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '\r') ADVANCE(7);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '\r') ADVANCE(8);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n') ADVANCE(162);
      if (lookahead == '\r') ADVANCE(10);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == '-') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == '-') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == '-') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == '.') ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(149);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == '.') ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(393);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == '.') ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(146);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == '.') ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(147);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == '.') ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == '.') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(247);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(272);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(220);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(272);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'b') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'b') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'c') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'c') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'c') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'd') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'd') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'd') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'd') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'f') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'f') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'g') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'g') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'h') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'h') ADVANCE(210);
      if (lookahead == 'u') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'h') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'h') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'i') ADVANCE(203);
      if (lookahead == 'o') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'i') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'i') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'i') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'i') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'k') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'k') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(272);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(191);
      if (lookahead == 'm') ADVANCE(187);
      if (lookahead == 'o') ADVANCE(227);
      if (lookahead == 't') ADVANCE(250);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(149);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(272);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(428);
      if (lookahead == 't') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(254);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(271);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'm') ADVANCE(228);
      if (lookahead == 'n') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'm') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'm') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'm') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'm') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(235);
      if (lookahead == 'u') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'p') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'p') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(214);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(271);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 's') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 's') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 's') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 's') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 't') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 't') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 't') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 't') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 't') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 't') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 't') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 't') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'u') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'u') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'y') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'y') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(272);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(273);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(269);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(270);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(271);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == '.') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'b') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'c') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'c') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'c') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'd') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'd') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'd') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'f') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'g') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'h') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'h') ADVANCE(301);
      if (lookahead == 'u') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'h') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'i') ADVANCE(296);
      if (lookahead == 'o') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'i') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'i') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'k') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(294);
      if (lookahead == 'm') ADVANCE(287);
      if (lookahead == 'o') ADVANCE(314);
      if (lookahead == 't') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(429);
      if (lookahead == 't') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'm') ADVANCE(315);
      if (lookahead == 'n') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'm') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'm') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'p') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'p') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 's') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 's') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 's') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 't') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 't') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 't') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 't') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'u') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'u') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'y') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == '\n') ADVANCE(158);
      if (lookahead == '\r') ADVANCE(345);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(386);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(355);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(409);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(409);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(395);
      if (lookahead == '.') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(355);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(395);
      if (lookahead == '.') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(394);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(393);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(395);
      if (lookahead == '.') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(395);
      if (lookahead == '.') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(356);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(146);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(395);
      if (lookahead == '.') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(148);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(395);
      if (lookahead == '.') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(359);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(149);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(361);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(362);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(363);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(409);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(366);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"') ADVANCE(367);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(367);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(409);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '\'') ADVANCE(371);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'') ADVANCE(371);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_string_token3);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'a') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(149);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'h') ADVANCE(141);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'h') ADVANCE(71);
      if (lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'l') ADVANCE(104);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'l') ADVANCE(56);
      if (lookahead == 'm') ADVANCE(43);
      if (lookahead == 'o') ADVANCE(94);
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'p') ADVANCE(130);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'r') ADVANCE(137);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(396);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(149);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym__loose_string_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(389);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym__loose_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(389);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym__loose_string_token2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(391);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym__loose_string_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(391);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_color_token1);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (lookahead == '%') ADVANCE(395);
      if (lookahead == '.') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(355);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_percent_adjustment);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_numeric_adjustment);
      if (lookahead == '%') ADVANCE(395);
      if (lookahead == '.') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(396);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_numeric_adjustment);
      if (lookahead == '%') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(397);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      ADVANCE_MAP(
        '"', 365,
        '\'', 369,
        'f', 399,
        't', 403,
        '+', 407,
        '-', 407,
        '\t', 398,
        0x0b, 398,
        '\f', 398,
        ' ', 398,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(544);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(409);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (lookahead == 'a') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(409);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (lookahead == 'e') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(409);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (lookahead == 'e') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(409);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (lookahead == 'l') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(409);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (lookahead == 'r') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(409);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (lookahead == 's') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(409);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (lookahead == 'u') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(409);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(406);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(409);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(409);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(409);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(409);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_palette);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_palette);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_palette_value_token1);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_palette_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(412);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_palette_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(413);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_config_DASHfile);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_gtk_DASHcustom_DASHcss);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_custom_DASHshader);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_keybind);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_keybind);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_clear);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_clear);
      if (lookahead == '_') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_clear);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_clear);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_all);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_all);
      if (lookahead == '_') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_all);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_all);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_global);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_global);
      if (lookahead == '_') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_global);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_global);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_local);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_local);
      if (lookahead == '_') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_local);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_local);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_unconsumed);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_unconsumed);
      if (lookahead == '_') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_unconsumed);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_unconsumed);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_physical);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_physical);
      if (lookahead == '_') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_physical);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_physical);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_shift);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_shift);
      if (lookahead == '_') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_shift);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_shift);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_ctrl);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_ctrl);
      if (lookahead == '_') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_ctrl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_ctrl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_control);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_control);
      if (lookahead == '_') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_control);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_control);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_alt);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_alt);
      if (lookahead == '_') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_alt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_alt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_option);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_option);
      if (lookahead == '_') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_option);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_option);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_opt);
      if (lookahead == '_') ADVANCE(151);
      if (lookahead == 'i') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_opt);
      if (lookahead == 'i') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_opt);
      if (lookahead == 'i') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_opt);
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_super);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_super);
      if (lookahead == '_') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_super);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_super);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_cmd);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_cmd);
      if (lookahead == '_') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_cmd);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_cmd);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_command);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_command);
      if (lookahead == '_') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_command);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_command);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_key_token1);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(151);
      if (lookahead == 'a') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(151);
      if (lookahead == 'a') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(151);
      if (lookahead == 'a') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(151);
      if (lookahead == 'a') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(151);
      if (lookahead == 'a') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(151);
      if (lookahead == 'b') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(151);
      if (lookahead == 'c') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(151);
      if (lookahead == 'c') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(151);
      if (lookahead == 'c') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(151);
      if (lookahead == 'd') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(151);
      if (lookahead == 'd') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(151);
      if (lookahead == 'd') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(151);
      if (lookahead == 'e') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(151);
      if (lookahead == 'e') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(151);
      if (lookahead == 'e') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(151);
      if (lookahead == 'f') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(151);
      if (lookahead == 'h') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(151);
      if (lookahead == 'h') ADVANCE(504);
      if (lookahead == 'u') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(151);
      if (lookahead == 'i') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(151);
      if (lookahead == 'i') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(151);
      if (lookahead == 'l') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(151);
      if (lookahead == 'l') ADVANCE(498);
      if (lookahead == 'm') ADVANCE(495);
      if (lookahead == 'o') ADVANCE(517);
      if (lookahead == 't') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(151);
      if (lookahead == 'l') ADVANCE(427);
      if (lookahead == 't') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(151);
      if (lookahead == 'l') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(151);
      if (lookahead == 'l') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(151);
      if (lookahead == 'l') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(151);
      if (lookahead == 'l') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(151);
      if (lookahead == 'l') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(151);
      if (lookahead == 'l') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(151);
      if (lookahead == 'l') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(151);
      if (lookahead == 'm') ADVANCE(495);
      if (lookahead == 'o') ADVANCE(517);
      if (lookahead == 't') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(151);
      if (lookahead == 'm') ADVANCE(519);
      if (lookahead == 'n') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(151);
      if (lookahead == 'm') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(151);
      if (lookahead == 'm') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(151);
      if (lookahead == 'n') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(151);
      if (lookahead == 'n') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(151);
      if (lookahead == 'n') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(151);
      if (lookahead == 'n') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(151);
      if (lookahead == 'o') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(151);
      if (lookahead == 'o') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(151);
      if (lookahead == 'o') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(151);
      if (lookahead == 'o') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(151);
      if (lookahead == 'o') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(151);
      if (lookahead == 'p') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(151);
      if (lookahead == 'p') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(151);
      if (lookahead == 'r') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(151);
      if (lookahead == 'r') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(151);
      if (lookahead == 'r') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(151);
      if (lookahead == 'r') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(151);
      if (lookahead == 's') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(151);
      if (lookahead == 's') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(151);
      if (lookahead == 't') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(151);
      if (lookahead == 't') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(151);
      if (lookahead == 't') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(151);
      if (lookahead == 't') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(151);
      if (lookahead == 'u') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(151);
      if (lookahead == 'y') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym__action_arg_value_token1);
      if (lookahead == '.') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(544);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym__action_arg_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_theme);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_theme);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_COMMA2);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_light);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_light);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_dark);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_dark);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_theme_variant_token1);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(555);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ',') ADVANCE(556);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_theme_variant_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ',') ADVANCE(556);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 153},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 22},
  [4] = {.lex_state = 153},
  [5] = {.lex_state = 153},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 22},
  [8] = {.lex_state = 11},
  [9] = {.lex_state = 22},
  [10] = {.lex_state = 23},
  [11] = {.lex_state = 23},
  [12] = {.lex_state = 153},
  [13] = {.lex_state = 153},
  [14] = {.lex_state = 153},
  [15] = {.lex_state = 153},
  [16] = {.lex_state = 153},
  [17] = {.lex_state = 153},
  [18] = {.lex_state = 153},
  [19] = {.lex_state = 153},
  [20] = {.lex_state = 153},
  [21] = {.lex_state = 153},
  [22] = {.lex_state = 153},
  [23] = {.lex_state = 14},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 13},
  [27] = {.lex_state = 153},
  [28] = {.lex_state = 15},
  [29] = {.lex_state = 15},
  [30] = {.lex_state = 153},
  [31] = {.lex_state = 15},
  [32] = {.lex_state = 153},
  [33] = {.lex_state = 15},
  [34] = {.lex_state = 15},
  [35] = {.lex_state = 22},
  [36] = {.lex_state = 17},
  [37] = {.lex_state = 153},
  [38] = {.lex_state = 17},
  [39] = {.lex_state = 22},
  [40] = {.lex_state = 9},
  [41] = {.lex_state = 11},
  [42] = {.lex_state = 15},
  [43] = {.lex_state = 17},
  [44] = {.lex_state = 17},
  [45] = {.lex_state = 153},
  [46] = {.lex_state = 15},
  [47] = {.lex_state = 15},
  [48] = {.lex_state = 15},
  [49] = {.lex_state = 22},
  [50] = {.lex_state = 153},
  [51] = {.lex_state = 153},
  [52] = {.lex_state = 9},
  [53] = {.lex_state = 142},
  [54] = {.lex_state = 17},
  [55] = {.lex_state = 9},
  [56] = {.lex_state = 153},
  [57] = {.lex_state = 153},
  [58] = {.lex_state = 153},
  [59] = {.lex_state = 22},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 153},
  [63] = {.lex_state = 23},
  [64] = {.lex_state = 152},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 366},
  [67] = {.lex_state = 153},
  [68] = {.lex_state = 153},
  [69] = {.lex_state = 152},
  [70] = {.lex_state = 150},
  [71] = {.lex_state = 153},
  [72] = {.lex_state = 153},
  [73] = {.lex_state = 153},
  [74] = {.lex_state = 555},
  [75] = {.lex_state = 23},
  [76] = {.lex_state = 153},
  [77] = {.lex_state = 23},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 153},
  [80] = {.lex_state = 17},
  [81] = {.lex_state = 153},
  [82] = {.lex_state = 153},
  [83] = {.lex_state = 153},
  [84] = {.lex_state = 153},
  [85] = {.lex_state = 153},
  [86] = {.lex_state = 153},
  [87] = {.lex_state = 153},
  [88] = {.lex_state = 153},
  [89] = {.lex_state = 153},
  [90] = {.lex_state = 153},
  [91] = {.lex_state = 153},
  [92] = {.lex_state = 153},
  [93] = {.lex_state = 153},
  [94] = {.lex_state = 23},
  [95] = {.lex_state = 23},
  [96] = {.lex_state = 153},
  [97] = {.lex_state = 153},
  [98] = {.lex_state = 153},
  [99] = {.lex_state = 150},
  [100] = {.lex_state = 153},
  [101] = {.lex_state = 23},
  [102] = {.lex_state = 153},
  [103] = {.lex_state = 23},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 388},
  [106] = {.lex_state = 390},
  [107] = {.lex_state = 153},
  [108] = {.lex_state = 153},
  [109] = {.lex_state = 153},
  [110] = {.lex_state = 370},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 153},
  [113] = {.lex_state = 153},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym__kebab_case_identifier_token1] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym__snake_case_identifier_token1] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
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
    [anon_sym_COMMA2] = ACTIONS(1),
    [anon_sym_light] = ACTIONS(1),
    [anon_sym_dark] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(65),
    [sym_directive] = STATE(4),
    [sym_basic_directive] = STATE(14),
    [sym__kebab_case_identifier] = STATE(75),
    [sym_property] = STATE(101),
    [sym_palette_directive] = STATE(14),
    [sym_path_property] = STATE(77),
    [sym_path_directive] = STATE(14),
    [sym_keybind_directive] = STATE(14),
    [sym_theme_directive] = STATE(14),
    [aux_sym_document_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_document_token1] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [aux_sym__kebab_case_identifier_token1] = ACTIONS(9),
    [anon_sym_palette] = ACTIONS(11),
    [anon_sym_config_DASHfile] = ACTIONS(13),
    [anon_sym_gtk_DASHcustom_DASHcss] = ACTIONS(13),
    [anon_sym_custom_DASHshader] = ACTIONS(13),
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
    STATE(35), 1,
      sym_chord,
    STATE(69), 1,
      sym_key_qualifier,
    STATE(71), 1,
      sym_string,
    STATE(73), 1,
      sym_keybind_trigger,
    STATE(84), 1,
      sym_keybind_value,
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
    STATE(35), 1,
      sym_chord,
    STATE(69), 1,
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
  [103] = 13,
    ACTIONS(9), 1,
      aux_sym__kebab_case_identifier_token1,
    ACTIONS(11), 1,
      anon_sym_palette,
    ACTIONS(15), 1,
      anon_sym_keybind,
    ACTIONS(17), 1,
      anon_sym_theme,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 1,
      aux_sym_document_token1,
    ACTIONS(41), 1,
      sym_comment,
    STATE(75), 1,
      sym__kebab_case_identifier,
    STATE(77), 1,
      sym_path_property,
    STATE(101), 1,
      sym_property,
    STATE(5), 2,
      sym_directive,
      aux_sym_document_repeat1,
    ACTIONS(13), 3,
      anon_sym_config_DASHfile,
      anon_sym_gtk_DASHcustom_DASHcss,
      anon_sym_custom_DASHshader,
    STATE(14), 5,
      sym_basic_directive,
      sym_palette_directive,
      sym_path_directive,
      sym_keybind_directive,
      sym_theme_directive,
  [150] = 13,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      aux_sym_document_token1,
    ACTIONS(48), 1,
      sym_comment,
    ACTIONS(51), 1,
      aux_sym__kebab_case_identifier_token1,
    ACTIONS(54), 1,
      anon_sym_palette,
    ACTIONS(60), 1,
      anon_sym_keybind,
    ACTIONS(63), 1,
      anon_sym_theme,
    STATE(75), 1,
      sym__kebab_case_identifier,
    STATE(77), 1,
      sym_path_property,
    STATE(101), 1,
      sym_property,
    STATE(5), 2,
      sym_directive,
      aux_sym_document_repeat1,
    ACTIONS(57), 3,
      anon_sym_config_DASHfile,
      anon_sym_gtk_DASHcustom_DASHcss,
      anon_sym_custom_DASHshader,
    STATE(14), 5,
      sym_basic_directive,
      sym_palette_directive,
      sym_path_directive,
      sym_keybind_directive,
      sym_theme_directive,
  [197] = 12,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      aux_sym_string_token3,
    ACTIONS(66), 1,
      aux_sym_document_token1,
    ACTIONS(68), 1,
      aux_sym_value_token1,
    ACTIONS(72), 1,
      sym_number,
    ACTIONS(74), 1,
      anon_sym_POUND,
    ACTIONS(76), 1,
      aux_sym_color_token1,
    STATE(91), 1,
      sym_value,
    ACTIONS(70), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(78), 2,
      sym_percent_adjustment,
      sym_numeric_adjustment,
    STATE(92), 5,
      sym_tuple,
      sym_boolean,
      sym_adjustment,
      sym_string,
      sym_color,
  [240] = 3,
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
  [264] = 10,
    ACTIONS(25), 1,
      aux_sym_string_token3,
    ACTIONS(76), 1,
      aux_sym_color_token1,
    ACTIONS(78), 1,
      sym_numeric_adjustment,
    ACTIONS(87), 1,
      sym_number,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    ACTIONS(93), 1,
      anon_sym_POUND,
    ACTIONS(95), 1,
      sym_percent_adjustment,
    ACTIONS(85), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(79), 5,
      sym_tuple,
      sym_boolean,
      sym_adjustment,
      sym_string,
      sym_color,
  [300] = 1,
    ACTIONS(97), 15,
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
  [318] = 6,
    ACTIONS(31), 1,
      anon_sym_physical,
    ACTIONS(35), 1,
      aux_sym_key_token1,
    STATE(59), 1,
      sym_chord,
    STATE(69), 1,
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
  [346] = 5,
    ACTIONS(31), 1,
      anon_sym_physical,
    ACTIONS(35), 1,
      aux_sym_key_token1,
    STATE(69), 1,
      sym_key_qualifier,
    STATE(47), 2,
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
  [371] = 2,
    ACTIONS(99), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(101), 8,
      sym_comment,
      aux_sym__kebab_case_identifier_token1,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_gtk_DASHcustom_DASHcss,
      anon_sym_custom_DASHshader,
      anon_sym_keybind,
      anon_sym_theme,
  [386] = 2,
    ACTIONS(103), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(105), 8,
      sym_comment,
      aux_sym__kebab_case_identifier_token1,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_gtk_DASHcustom_DASHcss,
      anon_sym_custom_DASHshader,
      anon_sym_keybind,
      anon_sym_theme,
  [401] = 2,
    ACTIONS(107), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(109), 8,
      sym_comment,
      aux_sym__kebab_case_identifier_token1,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_gtk_DASHcustom_DASHcss,
      anon_sym_custom_DASHshader,
      anon_sym_keybind,
      anon_sym_theme,
  [416] = 2,
    ACTIONS(111), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(113), 8,
      sym_comment,
      aux_sym__kebab_case_identifier_token1,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_gtk_DASHcustom_DASHcss,
      anon_sym_custom_DASHshader,
      anon_sym_keybind,
      anon_sym_theme,
  [431] = 2,
    ACTIONS(115), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(117), 8,
      sym_comment,
      aux_sym__kebab_case_identifier_token1,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_gtk_DASHcustom_DASHcss,
      anon_sym_custom_DASHshader,
      anon_sym_keybind,
      anon_sym_theme,
  [446] = 2,
    ACTIONS(119), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(121), 8,
      sym_comment,
      aux_sym__kebab_case_identifier_token1,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_gtk_DASHcustom_DASHcss,
      anon_sym_custom_DASHshader,
      anon_sym_keybind,
      anon_sym_theme,
  [461] = 2,
    ACTIONS(123), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(125), 8,
      sym_comment,
      aux_sym__kebab_case_identifier_token1,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_gtk_DASHcustom_DASHcss,
      anon_sym_custom_DASHshader,
      anon_sym_keybind,
      anon_sym_theme,
  [476] = 2,
    ACTIONS(127), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(129), 8,
      sym_comment,
      aux_sym__kebab_case_identifier_token1,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_gtk_DASHcustom_DASHcss,
      anon_sym_custom_DASHshader,
      anon_sym_keybind,
      anon_sym_theme,
  [491] = 2,
    ACTIONS(131), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(133), 8,
      sym_comment,
      aux_sym__kebab_case_identifier_token1,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_gtk_DASHcustom_DASHcss,
      anon_sym_custom_DASHshader,
      anon_sym_keybind,
      anon_sym_theme,
  [506] = 2,
    ACTIONS(135), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(137), 8,
      sym_comment,
      aux_sym__kebab_case_identifier_token1,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_gtk_DASHcustom_DASHcss,
      anon_sym_custom_DASHshader,
      anon_sym_keybind,
      anon_sym_theme,
  [521] = 2,
    ACTIONS(139), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(141), 8,
      sym_comment,
      aux_sym__kebab_case_identifier_token1,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_gtk_DASHcustom_DASHcss,
      anon_sym_custom_DASHshader,
      anon_sym_keybind,
      anon_sym_theme,
  [536] = 8,
    ACTIONS(143), 1,
      anon_sym_DQUOTE,
    ACTIONS(145), 1,
      anon_sym_SQUOTE,
    ACTIONS(147), 1,
      aux_sym__raw_value_token1,
    ACTIONS(149), 1,
      aux_sym__action_arg_value_token1,
    STATE(108), 1,
      sym__raw_value,
    STATE(109), 1,
      sym__action_arg_value,
    ACTIONS(70), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(107), 2,
      sym_boolean,
      sym__loose_string,
  [563] = 8,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      aux_sym_string_token3,
    ACTIONS(151), 1,
      aux_sym_document_token1,
    STATE(37), 1,
      sym_theme_variant,
    STATE(67), 1,
      sym_string,
    STATE(68), 1,
      sym_theme_value,
    ACTIONS(153), 2,
      anon_sym_light,
      anon_sym_dark,
  [589] = 7,
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
    STATE(96), 1,
      sym_string,
    STATE(97), 1,
      sym_path_value,
  [611] = 4,
    ACTIONS(25), 1,
      aux_sym_string_token3,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    STATE(83), 1,
      sym_string,
  [624] = 3,
    ACTIONS(161), 1,
      anon_sym__,
    STATE(27), 1,
      aux_sym__snake_case_identifier_repeat1,
    ACTIONS(159), 2,
      aux_sym_document_token1,
      anon_sym_COLON,
  [635] = 3,
    ACTIONS(166), 1,
      anon_sym_PLUS,
    STATE(29), 1,
      aux_sym_chord_repeat1,
    ACTIONS(164), 2,
      anon_sym_EQ2,
      anon_sym_GT,
  [646] = 3,
    ACTIONS(166), 1,
      anon_sym_PLUS,
    STATE(31), 1,
      aux_sym_chord_repeat1,
    ACTIONS(168), 2,
      anon_sym_EQ2,
      anon_sym_GT,
  [657] = 3,
    ACTIONS(172), 1,
      anon_sym__,
    STATE(32), 1,
      aux_sym__snake_case_identifier_repeat1,
    ACTIONS(170), 2,
      aux_sym_document_token1,
      anon_sym_COLON,
  [668] = 3,
    ACTIONS(176), 1,
      anon_sym_PLUS,
    STATE(31), 1,
      aux_sym_chord_repeat1,
    ACTIONS(174), 2,
      anon_sym_EQ2,
      anon_sym_GT,
  [679] = 3,
    ACTIONS(172), 1,
      anon_sym__,
    STATE(27), 1,
      aux_sym__snake_case_identifier_repeat1,
    ACTIONS(179), 2,
      aux_sym_document_token1,
      anon_sym_COLON,
  [690] = 1,
    ACTIONS(181), 3,
      anon_sym_EQ2,
      anon_sym_GT,
      anon_sym_PLUS,
  [696] = 1,
    ACTIONS(183), 3,
      anon_sym_EQ2,
      anon_sym_GT,
      anon_sym_PLUS,
  [702] = 3,
    ACTIONS(185), 1,
      anon_sym_EQ2,
    ACTIONS(187), 1,
      anon_sym_GT,
    STATE(39), 1,
      aux_sym_keybind_trigger_repeat1,
  [712] = 3,
    ACTIONS(189), 1,
      anon_sym_EQ,
    ACTIONS(191), 1,
      anon_sym_DASH,
    STATE(38), 1,
      aux_sym__kebab_case_identifier_repeat1,
  [722] = 3,
    ACTIONS(193), 1,
      aux_sym_document_token1,
    ACTIONS(195), 1,
      anon_sym_COMMA2,
    STATE(45), 1,
      aux_sym_theme_value_repeat1,
  [732] = 3,
    ACTIONS(191), 1,
      anon_sym_DASH,
    ACTIONS(197), 1,
      anon_sym_EQ,
    STATE(43), 1,
      aux_sym__kebab_case_identifier_repeat1,
  [742] = 3,
    ACTIONS(187), 1,
      anon_sym_GT,
    ACTIONS(199), 1,
      anon_sym_EQ2,
    STATE(49), 1,
      aux_sym_keybind_trigger_repeat1,
  [752] = 3,
    ACTIONS(201), 1,
      aux_sym_document_token1,
    ACTIONS(203), 1,
      aux_sym_palette_value_token1,
    STATE(113), 1,
      sym_palette_value,
  [762] = 3,
    ACTIONS(93), 1,
      anon_sym_POUND,
    ACTIONS(205), 1,
      aux_sym_color_token1,
    STATE(85), 1,
      sym_color,
  [772] = 3,
    ACTIONS(207), 1,
      aux_sym__snake_case_identifier_token1,
    STATE(58), 1,
      sym__snake_case_identifier,
    STATE(89), 1,
      sym_keybind_action,
  [782] = 3,
    ACTIONS(209), 1,
      anon_sym_EQ,
    ACTIONS(211), 1,
      anon_sym_DASH,
    STATE(43), 1,
      aux_sym__kebab_case_identifier_repeat1,
  [792] = 2,
    STATE(56), 1,
      sym_theme_variant,
    ACTIONS(214), 2,
      anon_sym_light,
      anon_sym_dark,
  [800] = 3,
    ACTIONS(195), 1,
      anon_sym_COMMA2,
    ACTIONS(216), 1,
      aux_sym_document_token1,
    STATE(51), 1,
      aux_sym_theme_value_repeat1,
  [810] = 3,
    ACTIONS(207), 1,
      aux_sym__snake_case_identifier_token1,
    STATE(58), 1,
      sym__snake_case_identifier,
    STATE(102), 1,
      sym_keybind_action,
  [820] = 1,
    ACTIONS(174), 3,
      anon_sym_EQ2,
      anon_sym_GT,
      anon_sym_PLUS,
  [826] = 1,
    ACTIONS(218), 3,
      anon_sym_EQ2,
      anon_sym_GT,
      anon_sym_PLUS,
  [832] = 3,
    ACTIONS(220), 1,
      anon_sym_EQ2,
    ACTIONS(222), 1,
      anon_sym_GT,
    STATE(49), 1,
      aux_sym_keybind_trigger_repeat1,
  [842] = 1,
    ACTIONS(159), 3,
      aux_sym_document_token1,
      anon_sym__,
      anon_sym_COLON,
  [848] = 3,
    ACTIONS(225), 1,
      aux_sym_document_token1,
    ACTIONS(227), 1,
      anon_sym_COMMA2,
    STATE(51), 1,
      aux_sym_theme_value_repeat1,
  [858] = 2,
    ACTIONS(230), 1,
      aux_sym_document_token1,
    ACTIONS(232), 1,
      anon_sym_COMMA,
  [865] = 2,
    ACTIONS(234), 1,
      aux_sym__raw_value_token1,
    STATE(62), 1,
      sym__raw_value,
  [872] = 1,
    ACTIONS(209), 2,
      anon_sym_EQ,
      anon_sym_DASH,
  [877] = 2,
    ACTIONS(232), 1,
      anon_sym_COMMA,
    ACTIONS(236), 1,
      aux_sym_document_token1,
  [884] = 2,
    ACTIONS(225), 1,
      aux_sym_document_token1,
    ACTIONS(238), 1,
      anon_sym_COMMA2,
  [891] = 2,
    ACTIONS(240), 1,
      aux_sym_document_token1,
    ACTIONS(242), 1,
      anon_sym_COMMA2,
  [898] = 2,
    ACTIONS(244), 1,
      aux_sym_document_token1,
    ACTIONS(246), 1,
      anon_sym_COLON,
  [905] = 1,
    ACTIONS(220), 2,
      anon_sym_EQ2,
      anon_sym_GT,
  [910] = 1,
    ACTIONS(248), 1,
      anon_sym_DQUOTE,
  [914] = 1,
    ACTIONS(250), 1,
      anon_sym_SQUOTE,
  [918] = 1,
    ACTIONS(252), 1,
      aux_sym_document_token1,
  [922] = 1,
    ACTIONS(254), 1,
      anon_sym_EQ,
  [926] = 1,
    ACTIONS(256), 1,
      aux_sym_key_token1,
  [930] = 1,
    ACTIONS(258), 1,
      ts_builtin_sym_end,
  [934] = 1,
    ACTIONS(260), 1,
      aux_sym_string_token1,
  [938] = 1,
    ACTIONS(193), 1,
      aux_sym_document_token1,
  [942] = 1,
    ACTIONS(262), 1,
      aux_sym_document_token1,
  [946] = 1,
    ACTIONS(264), 1,
      aux_sym_key_token1,
  [950] = 1,
    ACTIONS(266), 1,
      aux_sym__kebab_case_identifier_token1,
  [954] = 1,
    ACTIONS(268), 1,
      aux_sym_document_token1,
  [958] = 1,
    ACTIONS(270), 1,
      anon_sym_EQ2,
  [962] = 1,
    ACTIONS(272), 1,
      anon_sym_EQ2,
  [966] = 1,
    ACTIONS(274), 1,
      aux_sym_theme_variant_token1,
  [970] = 1,
    ACTIONS(276), 1,
      anon_sym_EQ,
  [974] = 1,
    ACTIONS(278), 1,
      aux_sym_document_token1,
  [978] = 1,
    ACTIONS(280), 1,
      anon_sym_EQ,
  [982] = 1,
    ACTIONS(282), 1,
      aux_sym_color_token1,
  [986] = 1,
    ACTIONS(236), 1,
      aux_sym_document_token1,
  [990] = 1,
    ACTIONS(284), 1,
      sym_number,
  [994] = 1,
    ACTIONS(286), 1,
      aux_sym_document_token1,
  [998] = 1,
    ACTIONS(288), 1,
      anon_sym_EQ2,
  [1002] = 1,
    ACTIONS(290), 1,
      aux_sym_document_token1,
  [1006] = 1,
    ACTIONS(292), 1,
      aux_sym_document_token1,
  [1010] = 1,
    ACTIONS(294), 1,
      aux_sym_document_token1,
  [1014] = 1,
    ACTIONS(296), 1,
      aux_sym_document_token1,
  [1018] = 1,
    ACTIONS(298), 1,
      anon_sym_COLON,
  [1022] = 1,
    ACTIONS(300), 1,
      aux_sym_document_token1,
  [1026] = 1,
    ACTIONS(302), 1,
      aux_sym_document_token1,
  [1030] = 1,
    ACTIONS(304), 1,
      aux_sym_document_token1,
  [1034] = 1,
    ACTIONS(306), 1,
      aux_sym_document_token1,
  [1038] = 1,
    ACTIONS(230), 1,
      aux_sym_document_token1,
  [1042] = 1,
    ACTIONS(308), 1,
      anon_sym_COLON,
  [1046] = 1,
    ACTIONS(310), 1,
      anon_sym_EQ,
  [1050] = 1,
    ACTIONS(312), 1,
      anon_sym_EQ,
  [1054] = 1,
    ACTIONS(314), 1,
      aux_sym_document_token1,
  [1058] = 1,
    ACTIONS(316), 1,
      aux_sym_document_token1,
  [1062] = 1,
    ACTIONS(318), 1,
      aux_sym_document_token1,
  [1066] = 1,
    ACTIONS(320), 1,
      aux_sym__kebab_case_identifier_token1,
  [1070] = 1,
    ACTIONS(322), 1,
      anon_sym_COLON,
  [1074] = 1,
    ACTIONS(324), 1,
      anon_sym_EQ,
  [1078] = 1,
    ACTIONS(326), 1,
      aux_sym_document_token1,
  [1082] = 1,
    ACTIONS(328), 1,
      anon_sym_EQ,
  [1086] = 1,
    ACTIONS(250), 1,
      anon_sym_DQUOTE,
  [1090] = 1,
    ACTIONS(330), 1,
      aux_sym__loose_string_token1,
  [1094] = 1,
    ACTIONS(332), 1,
      aux_sym__loose_string_token2,
  [1098] = 1,
    ACTIONS(334), 1,
      aux_sym_document_token1,
  [1102] = 1,
    ACTIONS(336), 1,
      aux_sym_document_token1,
  [1106] = 1,
    ACTIONS(338), 1,
      aux_sym_document_token1,
  [1110] = 1,
    ACTIONS(340), 1,
      aux_sym_string_token2,
  [1114] = 1,
    ACTIONS(248), 1,
      anon_sym_SQUOTE,
  [1118] = 1,
    ACTIONS(342), 1,
      aux_sym_document_token1,
  [1122] = 1,
    ACTIONS(344), 1,
      aux_sym_document_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 62,
  [SMALL_STATE(4)] = 103,
  [SMALL_STATE(5)] = 150,
  [SMALL_STATE(6)] = 197,
  [SMALL_STATE(7)] = 240,
  [SMALL_STATE(8)] = 264,
  [SMALL_STATE(9)] = 300,
  [SMALL_STATE(10)] = 318,
  [SMALL_STATE(11)] = 346,
  [SMALL_STATE(12)] = 371,
  [SMALL_STATE(13)] = 386,
  [SMALL_STATE(14)] = 401,
  [SMALL_STATE(15)] = 416,
  [SMALL_STATE(16)] = 431,
  [SMALL_STATE(17)] = 446,
  [SMALL_STATE(18)] = 461,
  [SMALL_STATE(19)] = 476,
  [SMALL_STATE(20)] = 491,
  [SMALL_STATE(21)] = 506,
  [SMALL_STATE(22)] = 521,
  [SMALL_STATE(23)] = 536,
  [SMALL_STATE(24)] = 563,
  [SMALL_STATE(25)] = 589,
  [SMALL_STATE(26)] = 611,
  [SMALL_STATE(27)] = 624,
  [SMALL_STATE(28)] = 635,
  [SMALL_STATE(29)] = 646,
  [SMALL_STATE(30)] = 657,
  [SMALL_STATE(31)] = 668,
  [SMALL_STATE(32)] = 679,
  [SMALL_STATE(33)] = 690,
  [SMALL_STATE(34)] = 696,
  [SMALL_STATE(35)] = 702,
  [SMALL_STATE(36)] = 712,
  [SMALL_STATE(37)] = 722,
  [SMALL_STATE(38)] = 732,
  [SMALL_STATE(39)] = 742,
  [SMALL_STATE(40)] = 752,
  [SMALL_STATE(41)] = 762,
  [SMALL_STATE(42)] = 772,
  [SMALL_STATE(43)] = 782,
  [SMALL_STATE(44)] = 792,
  [SMALL_STATE(45)] = 800,
  [SMALL_STATE(46)] = 810,
  [SMALL_STATE(47)] = 820,
  [SMALL_STATE(48)] = 826,
  [SMALL_STATE(49)] = 832,
  [SMALL_STATE(50)] = 842,
  [SMALL_STATE(51)] = 848,
  [SMALL_STATE(52)] = 858,
  [SMALL_STATE(53)] = 865,
  [SMALL_STATE(54)] = 872,
  [SMALL_STATE(55)] = 877,
  [SMALL_STATE(56)] = 884,
  [SMALL_STATE(57)] = 891,
  [SMALL_STATE(58)] = 898,
  [SMALL_STATE(59)] = 905,
  [SMALL_STATE(60)] = 910,
  [SMALL_STATE(61)] = 914,
  [SMALL_STATE(62)] = 918,
  [SMALL_STATE(63)] = 922,
  [SMALL_STATE(64)] = 926,
  [SMALL_STATE(65)] = 930,
  [SMALL_STATE(66)] = 934,
  [SMALL_STATE(67)] = 938,
  [SMALL_STATE(68)] = 942,
  [SMALL_STATE(69)] = 946,
  [SMALL_STATE(70)] = 950,
  [SMALL_STATE(71)] = 954,
  [SMALL_STATE(72)] = 958,
  [SMALL_STATE(73)] = 962,
  [SMALL_STATE(74)] = 966,
  [SMALL_STATE(75)] = 970,
  [SMALL_STATE(76)] = 974,
  [SMALL_STATE(77)] = 978,
  [SMALL_STATE(78)] = 982,
  [SMALL_STATE(79)] = 986,
  [SMALL_STATE(80)] = 990,
  [SMALL_STATE(81)] = 994,
  [SMALL_STATE(82)] = 998,
  [SMALL_STATE(83)] = 1002,
  [SMALL_STATE(84)] = 1006,
  [SMALL_STATE(85)] = 1010,
  [SMALL_STATE(86)] = 1014,
  [SMALL_STATE(87)] = 1018,
  [SMALL_STATE(88)] = 1022,
  [SMALL_STATE(89)] = 1026,
  [SMALL_STATE(90)] = 1030,
  [SMALL_STATE(91)] = 1034,
  [SMALL_STATE(92)] = 1038,
  [SMALL_STATE(93)] = 1042,
  [SMALL_STATE(94)] = 1046,
  [SMALL_STATE(95)] = 1050,
  [SMALL_STATE(96)] = 1054,
  [SMALL_STATE(97)] = 1058,
  [SMALL_STATE(98)] = 1062,
  [SMALL_STATE(99)] = 1066,
  [SMALL_STATE(100)] = 1070,
  [SMALL_STATE(101)] = 1074,
  [SMALL_STATE(102)] = 1078,
  [SMALL_STATE(103)] = 1082,
  [SMALL_STATE(104)] = 1086,
  [SMALL_STATE(105)] = 1090,
  [SMALL_STATE(106)] = 1094,
  [SMALL_STATE(107)] = 1098,
  [SMALL_STATE(108)] = 1102,
  [SMALL_STATE(109)] = 1106,
  [SMALL_STATE(110)] = 1110,
  [SMALL_STATE(111)] = 1114,
  [SMALL_STATE(112)] = 1118,
  [SMALL_STATE(113)] = 1122,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(103),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keybind_value_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keybind_value_repeat1, 2, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keybind_modifier, 2, 0, 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_palette_directive, 3, 0, 1),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_palette_directive, 3, 0, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_theme_directive, 3, 0, 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_theme_directive, 3, 0, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_directive, 3, 0, 1),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keybind_directive, 3, 0, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_directive, 3, 0, 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_directive, 3, 0, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_directive, 3, 0, 1),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_directive, 3, 0, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_directive, 4, 0, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keybind_directive, 4, 0, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_palette_directive, 4, 0, 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_palette_directive, 4, 0, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_theme_directive, 4, 0, 2),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_theme_directive, 4, 0, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_directive, 4, 0, 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_directive, 4, 0, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_directive, 4, 0, 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_directive, 4, 0, 2),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__snake_case_identifier_repeat1, 2, 0, 0),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__snake_case_identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord, 1, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord, 2, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__snake_case_identifier, 1, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_chord_repeat1, 2, 0, 0),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chord_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__snake_case_identifier, 2, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 2, 0, 4),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_trigger, 1, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__kebab_case_identifier, 1, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_theme_value, 1, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__kebab_case_identifier, 2, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_trigger, 2, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__kebab_case_identifier_repeat1, 2, 0, 0),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__kebab_case_identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_theme_value, 2, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier_key, 1, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keybind_trigger_repeat1, 2, 0, 0),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keybind_trigger_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_theme_value_repeat1, 2, 0, 0),
  [227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_theme_value_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_theme_value_repeat1, 2, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_theme_variant, 3, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_theme_variant, 3, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_action, 1, 0, 5),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_qualifier, 2, 0, 4),
  [258] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_value, 1, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 1, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 2, 0, 0),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_value, 2, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_palette_value, 3, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 1, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_value, 3, 0, 6),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adjustment, 1, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_property, 1, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_value, 1, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3, 0, 7),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_value, 4, 0, 8),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__action_arg_value, 1, 0, 0),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__loose_string, 1, 0, 0),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_action, 3, 0, 9),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__loose_string, 3, 0, 0),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
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
