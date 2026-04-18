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
#define STATE_COUNT 146
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 117
#define ALIAS_COUNT 0
#define TOKEN_COUNT 68
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 11
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 14

enum ts_symbol_identifiers {
  aux_sym_document_token1 = 1,
  sym_comment = 2,
  anon_sym_EQ = 3,
  aux_sym__kebab_case_identifier_token1 = 4,
  anon_sym_DASH = 5,
  aux_sym__snake_case_identifier_token1 = 6,
  anon_sym__ = 7,
  aux_sym__snake_case_insensitive_identifier_token1 = 8,
  aux_sym__snake_case_insensitive_identifier_token2 = 9,
  sym__key_table_identifier = 10,
  aux_sym_value_token1 = 11,
  anon_sym_COMMA = 12,
  anon_sym_true = 13,
  anon_sym_false = 14,
  sym_number = 15,
  anon_sym_DQUOTE = 16,
  aux_sym_string_token1 = 17,
  anon_sym_SQUOTE = 18,
  aux_sym_string_token2 = 19,
  aux_sym_string_token3 = 20,
  aux_sym__loose_string_token1 = 21,
  aux_sym__loose_string_token2 = 22,
  anon_sym_POUND = 23,
  aux_sym_color_token1 = 24,
  sym_percent_adjustment = 25,
  sym_numeric_adjustment = 26,
  aux_sym__raw_value_token1 = 27,
  anon_sym_palette = 28,
  aux_sym_palette_value_token1 = 29,
  anon_sym_EQ2 = 30,
  anon_sym_config_DASHfile = 31,
  anon_sym_gtk_DASHcustom_DASHcss = 32,
  anon_sym_custom_DASHshader = 33,
  anon_sym_background_DASHimage = 34,
  anon_sym_QMARK = 35,
  anon_sym_keybind = 36,
  anon_sym_clear = 37,
  anon_sym_SLASH = 38,
  anon_sym_all = 39,
  anon_sym_global = 40,
  anon_sym_local = 41,
  anon_sym_unconsumed = 42,
  anon_sym_performable = 43,
  anon_sym_COLON = 44,
  anon_sym_physical = 45,
  anon_sym_GT = 46,
  anon_sym_PLUS = 47,
  anon_sym_shift = 48,
  anon_sym_ctrl = 49,
  anon_sym_control = 50,
  anon_sym_alt = 51,
  anon_sym_option = 52,
  anon_sym_opt = 53,
  anon_sym_super = 54,
  anon_sym_cmd = 55,
  anon_sym_command = 56,
  aux_sym_key_token1 = 57,
  aux_sym__action_arg_value_token1 = 58,
  anon_sym_theme = 59,
  anon_sym_COMMA2 = 60,
  anon_sym_light = 61,
  anon_sym_dark = 62,
  aux_sym_theme_variant_token1 = 63,
  anon_sym_env = 64,
  anon_sym_initial_DASHcommand = 65,
  anon_sym_direct = 66,
  anon_sym_shell = 67,
  sym_document = 68,
  sym_directive = 69,
  sym_basic_directive = 70,
  sym__kebab_case_identifier = 71,
  sym__snake_case_identifier = 72,
  sym__snake_case_insensitive_identifier = 73,
  sym_property = 74,
  sym_value = 75,
  sym_tuple = 76,
  sym_boolean = 77,
  sym_adjustment = 78,
  sym_string = 79,
  sym__loose_string = 80,
  sym_color = 81,
  sym__raw_value = 82,
  sym_palette_directive = 83,
  sym_palette_value = 84,
  sym_path_property = 85,
  sym_path_directive = 86,
  sym_path_value = 87,
  sym_keybind_directive = 88,
  sym_keybind_value = 89,
  sym_keybind_table = 90,
  sym_keybind_modifier = 91,
  sym_key_qualifier = 92,
  sym_keybind_trigger = 93,
  sym_chord = 94,
  sym_modifier_key = 95,
  sym_key = 96,
  sym_keybind_action = 97,
  sym__action_arg_value = 98,
  sym_theme_directive = 99,
  sym_theme_value = 100,
  sym_theme_variant = 101,
  sym_env_directive = 102,
  sym_env_value = 103,
  sym_env_var_name = 104,
  sym_env_var_value = 105,
  sym_command_directive = 106,
  sym_command_value = 107,
  sym_command_modifier = 108,
  aux_sym_document_repeat1 = 109,
  aux_sym__kebab_case_identifier_repeat1 = 110,
  aux_sym__snake_case_identifier_repeat1 = 111,
  aux_sym__snake_case_insensitive_identifier_repeat1 = 112,
  aux_sym_keybind_value_repeat1 = 113,
  aux_sym_keybind_trigger_repeat1 = 114,
  aux_sym_chord_repeat1 = 115,
  aux_sym_theme_value_repeat1 = 116,
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
  [aux_sym__snake_case_insensitive_identifier_token1] = "_snake_case_insensitive_identifier_token1",
  [aux_sym__snake_case_insensitive_identifier_token2] = "_snake_case_insensitive_identifier_token2",
  [sym__key_table_identifier] = "_key_table_identifier",
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
  [anon_sym_background_DASHimage] = "background-image",
  [anon_sym_QMARK] = "\?",
  [anon_sym_keybind] = "property",
  [anon_sym_clear] = "clear",
  [anon_sym_SLASH] = "/",
  [anon_sym_all] = "all",
  [anon_sym_global] = "global",
  [anon_sym_local] = "local",
  [anon_sym_unconsumed] = "unconsumed",
  [anon_sym_performable] = "performable",
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
  [anon_sym_env] = "property",
  [anon_sym_initial_DASHcommand] = "property",
  [anon_sym_direct] = "direct",
  [anon_sym_shell] = "shell",
  [sym_document] = "document",
  [sym_directive] = "directive",
  [sym_basic_directive] = "basic_directive",
  [sym__kebab_case_identifier] = "_kebab_case_identifier",
  [sym__snake_case_identifier] = "action_name",
  [sym__snake_case_insensitive_identifier] = "_snake_case_insensitive_identifier",
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
  [sym_keybind_table] = "keybind_table",
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
  [sym_env_directive] = "env_directive",
  [sym_env_value] = "env_value",
  [sym_env_var_name] = "env_var_name",
  [sym_env_var_value] = "env_var_value",
  [sym_command_directive] = "command_directive",
  [sym_command_value] = "command_value",
  [sym_command_modifier] = "command_modifier",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym__kebab_case_identifier_repeat1] = "_kebab_case_identifier_repeat1",
  [aux_sym__snake_case_identifier_repeat1] = "_snake_case_identifier_repeat1",
  [aux_sym__snake_case_insensitive_identifier_repeat1] = "_snake_case_insensitive_identifier_repeat1",
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
  [aux_sym__snake_case_insensitive_identifier_token1] = aux_sym__snake_case_insensitive_identifier_token1,
  [aux_sym__snake_case_insensitive_identifier_token2] = aux_sym__snake_case_insensitive_identifier_token2,
  [sym__key_table_identifier] = sym__key_table_identifier,
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
  [anon_sym_background_DASHimage] = anon_sym_background_DASHimage,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_keybind] = sym_property,
  [anon_sym_clear] = anon_sym_clear,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_all] = anon_sym_all,
  [anon_sym_global] = anon_sym_global,
  [anon_sym_local] = anon_sym_local,
  [anon_sym_unconsumed] = anon_sym_unconsumed,
  [anon_sym_performable] = anon_sym_performable,
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
  [anon_sym_env] = sym_property,
  [anon_sym_initial_DASHcommand] = sym_property,
  [anon_sym_direct] = anon_sym_direct,
  [anon_sym_shell] = anon_sym_shell,
  [sym_document] = sym_document,
  [sym_directive] = sym_directive,
  [sym_basic_directive] = sym_basic_directive,
  [sym__kebab_case_identifier] = sym__kebab_case_identifier,
  [sym__snake_case_identifier] = sym__snake_case_identifier,
  [sym__snake_case_insensitive_identifier] = sym__snake_case_insensitive_identifier,
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
  [sym_keybind_table] = sym_keybind_table,
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
  [sym_env_directive] = sym_env_directive,
  [sym_env_value] = sym_env_value,
  [sym_env_var_name] = sym_env_var_name,
  [sym_env_var_value] = sym_env_var_value,
  [sym_command_directive] = sym_command_directive,
  [sym_command_value] = sym_command_value,
  [sym_command_modifier] = sym_command_modifier,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym__kebab_case_identifier_repeat1] = aux_sym__kebab_case_identifier_repeat1,
  [aux_sym__snake_case_identifier_repeat1] = aux_sym__snake_case_identifier_repeat1,
  [aux_sym__snake_case_insensitive_identifier_repeat1] = aux_sym__snake_case_insensitive_identifier_repeat1,
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
  [aux_sym__snake_case_insensitive_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__snake_case_insensitive_identifier_token2] = {
    .visible = false,
    .named = false,
  },
  [sym__key_table_identifier] = {
    .visible = false,
    .named = true,
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
  [anon_sym_background_DASHimage] = {
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
  [anon_sym_SLASH] = {
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
  [anon_sym_performable] = {
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
  [anon_sym_env] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_initial_DASHcommand] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_direct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shell] = {
    .visible = true,
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
  [sym__snake_case_insensitive_identifier] = {
    .visible = false,
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
  [sym_keybind_table] = {
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
  [sym_env_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_env_value] = {
    .visible = true,
    .named = true,
  },
  [sym_env_var_name] = {
    .visible = true,
    .named = true,
  },
  [sym_env_var_value] = {
    .visible = true,
    .named = true,
  },
  [sym_command_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_command_value] = {
    .visible = true,
    .named = true,
  },
  [sym_command_modifier] = {
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
  [aux_sym__snake_case_insensitive_identifier_repeat1] = {
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
  field_left = 4,
  field_modifier = 5,
  field_property = 6,
  field_qualifier = 7,
  field_right = 8,
  field_table = 9,
  field_trigger = 10,
  field_value = 11,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_action] = "action",
  [field_action_name] = "action_name",
  [field_argument] = "argument",
  [field_left] = "left",
  [field_modifier] = "modifier",
  [field_property] = "property",
  [field_qualifier] = "qualifier",
  [field_right] = "right",
  [field_table] = "table",
  [field_trigger] = "trigger",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 2},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 1},
  [7] = {.index = 1, .length = 2},
  [8] = {.index = 6, .length = 1},
  [9] = {.index = 7, .length = 2},
  [10] = {.index = 9, .length = 2},
  [11] = {.index = 11, .length = 2},
  [12] = {.index = 13, .length = 2},
  [13] = {.index = 15, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_property, 0},
  [1] =
    {field_property, 0},
    {field_value, 2},
  [3] =
    {field_table, 0},
  [4] =
    {field_modifier, 0},
  [5] =
    {field_qualifier, 0},
  [6] =
    {field_action_name, 0},
  [7] =
    {field_action, 2},
    {field_trigger, 0},
  [9] =
    {field_left, 0},
    {field_right, 2},
  [11] =
    {field_action, 3},
    {field_trigger, 1},
  [13] =
    {field_action, 4},
    {field_trigger, 2},
  [15] =
    {field_action_name, 0},
    {field_argument, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [0] = sym_property,
  },
  [7] = {
    [0] = sym_property,
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
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
};

static TSCharacterRange sym__key_table_identifier_character_set_1[] = {
  {0, 0x08}, {0x0e, 0x1f}, {'!', '!'}, {'#', '&'}, {'(', '*'}, {',', '.'}, {'0', '9'}, {';', '<'},
  {'?', 0x10ffff},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(204);
      ADVANCE_MAP(
        '"', 541,
        '#', 563,
        '\'', 545,
        '+', 637,
        ',', 523,
        '-', 363,
        '/', 598,
        ':', 629,
        '=', 586,
        '>', 636,
        '?', 591,
        '_', 449,
        'a', 284,
        'c', 285,
        'd', 226,
        'f', 229,
        'g', 286,
        'l', 275,
        'o', 324,
        'p', 263,
        's', 272,
        't', 326,
        'u', 312,
        'b', 360,
        'e', 360,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(203);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (('h' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (lookahead != 0) ADVANCE(549);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 205,
        '\r', 1,
        '#', 3,
        ',', 827,
        'b', 31,
        'c', 140,
        'e', 131,
        'g', 170,
        'i', 132,
        'k', 61,
        'p', 32,
        't', 85,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(213);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(213);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '\n', 206,
        '\r', 522,
        '"', 541,
        '#', 563,
        '\'', 545,
        'f', 550,
        't', 556,
        '+', 557,
        '-', 557,
        '\t', 522,
        0x0b, 522,
        '\f', 522,
        ' ', 522,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(537);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(549);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '\n', 207,
        '\r', 6,
        '"', 541,
        '\'', 545,
        'a', 718,
        'c', 719,
        'g', 726,
        'l', 736,
        'o', 742,
        'p', 710,
        's', 715,
        'u', 734,
        '#', 822,
        '?', 822,
        '+', 693,
        '/', 693,
        ':', 549,
        '=', 549,
        '>', 549,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if (lookahead != 0) ADVANCE(822);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '\n', 207,
        '\r', 6,
        '"', 541,
        '\'', 545,
        'a', 481,
        'c', 482,
        'g', 489,
        'l', 499,
        'o', 505,
        'p', 473,
        's', 478,
        'u', 497,
        '#', 521,
        '?', 521,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(6);
      if (lookahead == '+' ||
          lookahead == '/' ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '>') ADVANCE(549);
      if (lookahead != 0) ADVANCE(521);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(208);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '"') ADVANCE(541);
      if (lookahead == '\'') ADVANCE(545);
      if (lookahead == 'd') ADVANCE(555);
      if (lookahead == 's') ADVANCE(553);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(7);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '?') ADVANCE(549);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(209);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == '"') ADVANCE(541);
      if (lookahead == '\'') ADVANCE(545);
      if (lookahead == 'd') ADVANCE(551);
      if (lookahead == 'l') ADVANCE(554);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(8);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '?') ADVANCE(549);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(210);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '"') ADVANCE(541);
      if (lookahead == '\'') ADVANCE(545);
      if (lookahead == '?') ADVANCE(591);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(9);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(211);
      if (lookahead == '\r') ADVANCE(11);
      if (lookahead == ',') ADVANCE(523);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(211);
      if (lookahead == '\r') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(212);
      if (lookahead == '\r') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(585);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(541);
      if (lookahead == '#') ADVANCE(563);
      if (lookahead == '\'') ADVANCE(545);
      if (lookahead == 'f') ADVANCE(550);
      if (lookahead == 't') ADVANCE(556);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(557);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(537);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(549);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(541);
      if (lookahead == '#') ADVANCE(563);
      if (lookahead == '\'') ADVANCE(545);
      if (lookahead == 'f') ADVANCE(552);
      if (lookahead == 't') ADVANCE(556);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(557);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(549);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(541);
      if (lookahead == '\'') ADVANCE(545);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '?') ADVANCE(549);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(542);
      if (lookahead == '\'') ADVANCE(546);
      if (lookahead == 'f') ADVANCE(570);
      if (lookahead == 't') ADVANCE(574);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(16);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(578);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(823);
      if (lookahead != 0) ADVANCE(580);
      END_STATE();
    case 17:
      if (lookahead == '+') ADVANCE(637);
      if (lookahead == '=') ADVANCE(586);
      if (lookahead == '>') ADVANCE(636);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 18:
      if (lookahead == '+') ADVANCE(637);
      if (lookahead == '>') ADVANCE(636);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(363);
      if (lookahead == '=') ADVANCE(214);
      if (lookahead == 'd') ADVANCE(41);
      if (lookahead == 'l') ADVANCE(95);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(539);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(46);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(164);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(53);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(48);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(97);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(78);
      END_STATE();
    case 26:
      ADVANCE_MAP(
        '=', 586,
        '>', 636,
        'a', 781,
        'c', 791,
        'g', 788,
        'l', 800,
        'o', 806,
        'p', 772,
        's', 778,
        'u', 798,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      if (lookahead != 0 &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(693);
      END_STATE();
    case 27:
      if (lookahead == '=') ADVANCE(214);
      if (lookahead == 'a') ADVANCE(790);
      if (lookahead == 'c') ADVANCE(791);
      if (lookahead == 'o') ADVANCE(806);
      if (lookahead == 'p') ADVANCE(777);
      if (lookahead == 's') ADVANCE(778);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      if (lookahead != 0 &&
          (lookahead < '0' || ':' < lookahead) &&
          lookahead != '=' &&
          lookahead != '>') ADVANCE(693);
      END_STATE();
    case 28:
      if (lookahead == '=') ADVANCE(214);
      if (lookahead == 'a') ADVANCE(115);
      if (lookahead == 'c') ADVANCE(125);
      if (lookahead == 'o') ADVANCE(151);
      if (lookahead == 'p') ADVANCE(86);
      if (lookahead == 's') ADVANCE(88);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28);
      END_STATE();
    case 29:
      if (lookahead == '=') ADVANCE(214);
      if (lookahead == 'd') ADVANCE(41);
      if (lookahead == 'l') ADVANCE(95);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(539);
      END_STATE();
    case 30:
      ADVANCE_MAP(
        '>', 636,
        'a', 102,
        'c', 125,
        'g', 111,
        'l', 145,
        'o', 151,
        'p', 72,
        's', 88,
        'u', 138,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(30);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(137);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(106);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(157);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 43:
      if (lookahead == 'b') ADVANCE(94);
      END_STATE();
    case 44:
      if (lookahead == 'b') ADVANCE(40);
      END_STATE();
    case 45:
      if (lookahead == 'b') ADVANCE(116);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(185);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(100);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(166);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(148);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(42);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(175);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(146);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(686);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(592);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(838);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(680);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(617);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(24);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(70);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(825);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(581);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(587);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(590);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(623);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(524);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(528);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(155);
      if (lookahead == 'h') ADVANCE(188);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 77:
      if (lookahead == 'f') ADVANCE(90);
      END_STATE();
    case 78:
      if (lookahead == 'f') ADVANCE(96);
      END_STATE();
    case 79:
      if (lookahead == 'f') ADVANCE(147);
      END_STATE();
    case 80:
      if (lookahead == 'f') ADVANCE(174);
      END_STATE();
    case 81:
      if (lookahead == 'g') ADVANCE(156);
      END_STATE();
    case 82:
      if (lookahead == 'g') ADVANCE(25);
      END_STATE();
    case 83:
      if (lookahead == 'g') ADVANCE(89);
      END_STATE();
    case 84:
      if (lookahead == 'g') ADVANCE(65);
      END_STATE();
    case 85:
      if (lookahead == 'h') ADVANCE(69);
      END_STATE();
    case 86:
      if (lookahead == 'h') ADVANCE(188);
      END_STATE();
    case 87:
      if (lookahead == 'h') ADVANCE(37);
      END_STATE();
    case 88:
      if (lookahead == 'h') ADVANCE(92);
      if (lookahead == 'u') ADVANCE(152);
      END_STATE();
    case 89:
      if (lookahead == 'h') ADVANCE(176);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(177);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 99:
      if (lookahead == 'k') ADVANCE(20);
      END_STATE();
    case 100:
      if (lookahead == 'k') ADVANCE(81);
      END_STATE();
    case 101:
      if (lookahead == 'k') ADVANCE(831);
      END_STATE();
    case 102:
      if (lookahead == 'l') ADVANCE(103);
      END_STATE();
    case 103:
      if (lookahead == 'l') ADVANCE(599);
      if (lookahead == 't') ADVANCE(656);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(644);
      END_STATE();
    case 105:
      if (lookahead == 'l') ADVANCE(611);
      END_STATE();
    case 106:
      if (lookahead == 'l') ADVANCE(605);
      END_STATE();
    case 107:
      if (lookahead == 'l') ADVANCE(650);
      END_STATE();
    case 108:
      if (lookahead == 'l') ADVANCE(630);
      END_STATE();
    case 109:
      if (lookahead == 'l') ADVANCE(842);
      END_STATE();
    case 110:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 111:
      if (lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 112:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 113:
      if (lookahead == 'l') ADVANCE(168);
      END_STATE();
    case 114:
      if (lookahead == 'l') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(195);
      END_STATE();
    case 115:
      if (lookahead == 'l') ADVANCE(172);
      END_STATE();
    case 116:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 117:
      if (lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 118:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 119:
      if (lookahead == 'm') ADVANCE(121);
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 120:
      if (lookahead == 'm') ADVANCE(121);
      if (lookahead == 'n') ADVANCE(181);
      END_STATE();
    case 121:
      if (lookahead == 'm') ADVANCE(34);
      END_STATE();
    case 122:
      if (lookahead == 'm') ADVANCE(21);
      END_STATE();
    case 123:
      if (lookahead == 'm') ADVANCE(62);
      END_STATE();
    case 124:
      if (lookahead == 'm') ADVANCE(36);
      END_STATE();
    case 125:
      if (lookahead == 'm') ADVANCE(57);
      if (lookahead == 'o') ADVANCE(120);
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 126:
      if (lookahead == 'm') ADVANCE(35);
      END_STATE();
    case 127:
      if (lookahead == 'm') ADVANCE(75);
      END_STATE();
    case 128:
      if (lookahead == 'm') ADVANCE(38);
      END_STATE();
    case 129:
      if (lookahead == 'm') ADVANCE(23);
      END_STATE();
    case 130:
      if (lookahead == 'm') ADVANCE(128);
      END_STATE();
    case 131:
      if (lookahead == 'n') ADVANCE(186);
      END_STATE();
    case 132:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 133:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 134:
      if (lookahead == 'n') ADVANCE(662);
      END_STATE();
    case 135:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 136:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 138:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(165);
      END_STATE();
    case 140:
      if (lookahead == 'o') ADVANCE(119);
      if (lookahead == 'u') ADVANCE(163);
      END_STATE();
    case 141:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 142:
      if (lookahead == 'o') ADVANCE(182);
      END_STATE();
    case 143:
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 144:
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 145:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 146:
      if (lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 147:
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 148:
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 149:
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 150:
      if (lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 151:
      if (lookahead == 'p') ADVANCE(173);
      END_STATE();
    case 152:
      if (lookahead == 'p') ADVANCE(73);
      END_STATE();
    case 153:
      if (lookahead == 'r') ADVANCE(589);
      END_STATE();
    case 154:
      if (lookahead == 'r') ADVANCE(674);
      END_STATE();
    case 155:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 156:
      if (lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 157:
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 158:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 159:
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 160:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 161:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 162:
      if (lookahead == 's') ADVANCE(588);
      END_STATE();
    case 163:
      if (lookahead == 's') ADVANCE(171);
      END_STATE();
    case 164:
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 165:
      if (lookahead == 's') ADVANCE(184);
      END_STATE();
    case 166:
      if (lookahead == 's') ADVANCE(162);
      END_STATE();
    case 167:
      if (lookahead == 's') ADVANCE(98);
      END_STATE();
    case 168:
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 169:
      if (lookahead == 's') ADVANCE(180);
      END_STATE();
    case 170:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 171:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 172:
      if (lookahead == 't') ADVANCE(656);
      END_STATE();
    case 173:
      if (lookahead == 't') ADVANCE(673);
      END_STATE();
    case 174:
      if (lookahead == 't') ADVANCE(638);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(839);
      END_STATE();
    case 176:
      if (lookahead == 't') ADVANCE(828);
      END_STATE();
    case 177:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 178:
      if (lookahead == 't') ADVANCE(179);
      END_STATE();
    case 179:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(159);
      END_STATE();
    case 182:
      if (lookahead == 'u') ADVANCE(136);
      END_STATE();
    case 183:
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 184:
      if (lookahead == 'u') ADVANCE(127);
      END_STATE();
    case 185:
      if (lookahead == 'u') ADVANCE(169);
      END_STATE();
    case 186:
      if (lookahead == 'v') ADVANCE(836);
      END_STATE();
    case 187:
      if (lookahead == 'y') ADVANCE(43);
      END_STATE();
    case 188:
      if (lookahead == 'y') ADVANCE(167);
      END_STATE();
    case 189:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(189);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(577);
      if (lookahead != 0) ADVANCE(580);
      END_STATE();
    case 190:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(540);
      END_STATE();
    case 191:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(538);
      END_STATE();
    case 192:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(568);
      END_STATE();
    case 193:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(564);
      END_STATE();
    case 194:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(193);
      END_STATE();
    case 195:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(194);
      END_STATE();
    case 196:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(195);
      END_STATE();
    case 197:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 198:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 199:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '0' || ':' < lookahead) &&
          lookahead != '=' &&
          lookahead != '>') ADVANCE(693);
      END_STATE();
    case 200:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 201:
      if (eof) ADVANCE(204);
      ADVANCE_MAP(
        '\n', 205,
        '\r', 1,
        '#', 3,
        ',', 827,
        '/', 598,
        ':', 629,
        '=', 586,
        '_', 449,
        'b', 227,
        'c', 317,
        'e', 308,
        'g', 344,
        'i', 309,
        'k', 256,
        'p', 228,
        't', 273,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 202:
      if (eof) ADVANCE(204);
      ADVANCE_MAP(
        '\n', 205,
        '\r', 1,
        '#', 3,
        ',', 827,
        'b', 31,
        'c', 140,
        'e', 131,
        'g', 170,
        'i', 132,
        'k', 61,
        'p', 32,
        't', 85,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(202);
      END_STATE();
    case 203:
      if (eof) ADVANCE(204);
      ADVANCE_MAP(
        '"', 541,
        '#', 563,
        '\'', 545,
        '+', 637,
        ',', 827,
        '=', 214,
        '>', 636,
        '?', 591,
        'a', 399,
        'c', 400,
        'd', 367,
        'f', 366,
        'g', 401,
        'l', 396,
        'o', 425,
        'p', 389,
        's', 394,
        't', 427,
        'u', 417,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(203);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(364);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (lookahead != 0) ADVANCE(549);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n') ADVANCE(205);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n') ADVANCE(206);
      if (lookahead == '\r') ADVANCE(522);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(557);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(532);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n') ADVANCE(207);
      if (lookahead == '\r') ADVANCE(6);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n') ADVANCE(208);
      if (lookahead == '\r') ADVANCE(7);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n') ADVANCE(209);
      if (lookahead == '\r') ADVANCE(8);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n') ADVANCE(210);
      if (lookahead == '\r') ADVANCE(9);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n') ADVANCE(211);
      if (lookahead == '\r') ADVANCE(11);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n') ADVANCE(212);
      if (lookahead == '\r') ADVANCE(12);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == '-') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == '-') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == '-') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == '-') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == '-') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == '.') ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(456);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(225);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == '.') ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(451);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == '.') ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(452);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == '.') ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(453);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == '.') ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(454);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(223);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == '.') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(327);
      if (lookahead == 'i') ADVANCE(332);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(359);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(288);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(359);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(239);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(290);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(329);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(292);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(294);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'b') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'b') ADVANCE(297);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'b') ADVANCE(236);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'c') ADVANCE(319);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'c') ADVANCE(234);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'c') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'c') ADVANCE(343);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'c') ADVANCE(237);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'd') ADVANCE(683);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'd') ADVANCE(689);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'd') ADVANCE(620);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'd') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'd') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'd') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(235);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(626);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(826);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(296);
      if (lookahead == 'i') ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(248);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(244);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(328);
      if (lookahead == 'h') ADVANCE(355);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(330);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'f') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'f') ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'f') ADVANCE(342);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'g') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'g') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'g') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'h') ADVANCE(260);
      if (lookahead == 'u') ADVANCE(325);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'h') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'h') ADVANCE(341);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'i') ADVANCE(269);
      if (lookahead == 'o') ADVANCE(242);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'i') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'i') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'i') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'i') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'i') ADVANCE(245);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'k') ADVANCE(832);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'k') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'k') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(287);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(359);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(252);
      if (lookahead == 'm') ADVANCE(246);
      if (lookahead == 'o') ADVANCE(299);
      if (lookahead == 't') ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(454);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(359);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(316);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(602);
      if (lookahead == 't') ADVANCE(659);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(339);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(358);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(647);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(614);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(843);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(653);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(633);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(291);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'm') ADVANCE(301);
      if (lookahead == 'n') ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'm') ADVANCE(302);
      if (lookahead == 'n') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'm') ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'm') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'm') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'm') ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'm') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'm') ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(665);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(247);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(241);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(337);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(240);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(300);
      if (lookahead == 'u') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(314);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(293);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(335);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'p') ADVANCE(340);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'p') ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(351);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(358);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(595);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(677);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(289);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(322);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(304);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 's') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 's') ADVANCE(350);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 's') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 's') ADVANCE(254);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 't') ADVANCE(670);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 't') ADVANCE(829);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 't') ADVANCE(641);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 't') ADVANCE(840);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 't') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 't') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 't') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 't') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 't') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 't') ADVANCE(334);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'u') ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'u') ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'u') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'v') ADVANCE(837);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'y') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'y') ADVANCE(336);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(361);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(356);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(357);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(358);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(359);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == '.') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(364);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(402);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(428);
      if (lookahead == 'i') ADVANCE(430);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(416);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(405);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(409);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'b') ADVANCE(411);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'b') ADVANCE(371);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'c') ADVANCE(421);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'c') ADVANCE(442);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'c') ADVANCE(369);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'c') ADVANCE(372);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'd') ADVANCE(684);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'd') ADVANCE(690);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'd') ADVANCE(621);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(370);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(526);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(530);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(381);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(376);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(410);
      if (lookahead == 'i') ADVANCE(392);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(429);
      if (lookahead == 'h') ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(432);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'f') ADVANCE(424);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'f') ADVANCE(441);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'g') ADVANCE(395);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'h') ADVANCE(388);
      if (lookahead == 'u') ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'h') ADVANCE(440);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'i') ADVANCE(393);
      if (lookahead == 'o') ADVANCE(377);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'i') ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'k') ADVANCE(833);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(403);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(382);
      if (lookahead == 'm') ADVANCE(379);
      if (lookahead == 'o') ADVANCE(412);
      if (lookahead == 't') ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(420);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(438);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(603);
      if (lookahead == 't') ADVANCE(660);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(648);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(615);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(844);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(609);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(654);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(634);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(406);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(385);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'm') ADVANCE(413);
      if (lookahead == 'n') ADVANCE(443);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'm') ADVANCE(368);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'm') ADVANCE(365);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'm') ADVANCE(386);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(380);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(375);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(666);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(437);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(374);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(418);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(435);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'p') ADVANCE(439);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'p') ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(445);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(398);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(391);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(387);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(678);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(404);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(423);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 's') ADVANCE(397);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 's') ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 's') ADVANCE(384);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 't') ADVANCE(671);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 't') ADVANCE(830);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 't') ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 't') ADVANCE(841);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 't') ADVANCE(434);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'u') ADVANCE(415);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'u') ADVANCE(383);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'y') ADVANCE(436);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__snake_case_insensitive_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym__snake_case_insensitive_identifier_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(456);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym__snake_case_insensitive_identifier_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(451);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym__snake_case_insensitive_identifier_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(452);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym__snake_case_insensitive_identifier_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(453);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym__snake_case_insensitive_identifier_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(454);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym__snake_case_insensitive_identifier_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'a') ADVANCE(463);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'a') ADVANCE(496);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'a') ADVANCE(508);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'a') ADVANCE(485);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'a') ADVANCE(486);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'a') ADVANCE(488);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'b') ADVANCE(490);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'b') ADVANCE(461);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'c') ADVANCE(460);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'c') ADVANCE(501);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'c') ADVANCE(462);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'd') ADVANCE(685);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'd') ADVANCE(692);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'd') ADVANCE(622);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'e') ADVANCE(459);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'e') ADVANCE(628);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'e') ADVANCE(507);
      if (lookahead == 'h') ADVANCE(519);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'e') ADVANCE(470);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'e') ADVANCE(509);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'f') ADVANCE(516);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'f') ADVANCE(504);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'h') ADVANCE(479);
      if (lookahead == 'u') ADVANCE(506);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'i') ADVANCE(476);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'i') ADVANCE(467);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'l') ADVANCE(483);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'l') ADVANCE(471);
      if (lookahead == 'm') ADVANCE(468);
      if (lookahead == 'o') ADVANCE(491);
      if (lookahead == 't') ADVANCE(510);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'l') ADVANCE(604);
      if (lookahead == 't') ADVANCE(661);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'l') ADVANCE(649);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'l') ADVANCE(616);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'l') ADVANCE(610);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'l') ADVANCE(655);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'l') ADVANCE(635);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'l') ADVANCE(500);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'l') ADVANCE(472);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'm') ADVANCE(493);
      if (lookahead == 'n') ADVANCE(517);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'm') ADVANCE(474);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'm') ADVANCE(458);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'm') ADVANCE(457);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'n') ADVANCE(667);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'n') ADVANCE(469);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'n') ADVANCE(466);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'n') ADVANCE(513);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'o') ADVANCE(465);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'o') ADVANCE(464);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'o') ADVANCE(498);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'o') ADVANCE(495);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'o') ADVANCE(487);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'o') ADVANCE(512);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'p') ADVANCE(515);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'p') ADVANCE(475);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'r') ADVANCE(477);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'r') ADVANCE(597);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'r') ADVANCE(679);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'r') ADVANCE(484);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'r') ADVANCE(503);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'r') ADVANCE(494);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 's') ADVANCE(518);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 's') ADVANCE(480);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 't') ADVANCE(672);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 't') ADVANCE(643);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 't') ADVANCE(511);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'u') ADVANCE(492);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'y') ADVANCE(514);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == '\n') ADVANCE(206);
      if (lookahead == '\r') ADVANCE(522);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(557);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(532);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_true);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_true);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_false);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_false);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(566);
      if (lookahead == '.') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(532);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(566);
      if (lookahead == '.') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(565);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(564);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(566);
      if (lookahead == '.') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(533);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(193);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(566);
      if (lookahead == '.') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(534);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(194);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(566);
      if (lookahead == '.') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(535);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(195);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(566);
      if (lookahead == '.') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(536);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(196);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(538);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(539);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(540);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"') ADVANCE(544);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(544);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(547);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '\'') ADVANCE(548);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'') ADVANCE(548);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_string_token3);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'a') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(196);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'a') ADVANCE(157);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'a') ADVANCE(113);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'h') ADVANCE(76);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(567);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(196);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym__loose_string_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(560);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym__loose_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(560);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym__loose_string_token2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(562);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym__loose_string_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(562);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_color_token1);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (lookahead == '%') ADVANCE(566);
      if (lookahead == '.') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(532);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_percent_adjustment);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_numeric_adjustment);
      if (lookahead == '%') ADVANCE(566);
      if (lookahead == '.') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(567);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_numeric_adjustment);
      if (lookahead == '%') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(568);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      ADVANCE_MAP(
        '"', 542,
        '\'', 546,
        'f', 570,
        't', 574,
        '+', 578,
        '-', 578,
        '\t', 569,
        0x0b, 569,
        '\f', 569,
        ' ', 569,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(823);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(580);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (lookahead == 'a') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (lookahead == 'e') ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (lookahead == 'e') ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (lookahead == 'l') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (lookahead == 'r') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (lookahead == 's') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (lookahead == 'u') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(577);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(580);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(823);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(824);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_palette);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_palette);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_palette_value_token1);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_palette_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(583);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_palette_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(584);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_config_DASHfile);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_gtk_DASHcustom_DASHcss);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_custom_DASHshader);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_background_DASHimage);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_keybind);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_keybind);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_clear);
      if (lookahead == '_') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_clear);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_clear);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_clear);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_all);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_all);
      if (lookahead == '_') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_all);
      if (lookahead == '_') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_all);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_all);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_all);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_global);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_global);
      if (lookahead == '_') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_global);
      if (lookahead == '_') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_global);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_global);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_global);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_local);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_local);
      if (lookahead == '_') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_local);
      if (lookahead == '_') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_local);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_local);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_local);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_unconsumed);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_unconsumed);
      if (lookahead == '_') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_unconsumed);
      if (lookahead == '_') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_unconsumed);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_unconsumed);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_unconsumed);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_performable);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_performable);
      if (lookahead == '_') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_performable);
      if (lookahead == '_') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_performable);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_performable);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_performable);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_physical);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_physical);
      if (lookahead == '_') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_physical);
      if (lookahead == '_') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_physical);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_physical);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_physical);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_shift);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_shift);
      if (lookahead == '_') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_shift);
      if (lookahead == '_') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_shift);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_shift);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_shift);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_ctrl);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_ctrl);
      if (lookahead == '_') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_ctrl);
      if (lookahead == '_') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_ctrl);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_ctrl);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_ctrl);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_control);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_control);
      if (lookahead == '_') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_control);
      if (lookahead == '_') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_control);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_control);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_control);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_alt);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_alt);
      if (lookahead == '_') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_alt);
      if (lookahead == '_') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_alt);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_alt);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_alt);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_option);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_option);
      if (lookahead == '_') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_option);
      if (lookahead == '_') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_option);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_option);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_option);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_opt);
      if (lookahead == '_') ADVANCE(520);
      if (lookahead == 'i') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_opt);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'i') ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_opt);
      if (lookahead == 'i') ADVANCE(321);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_opt);
      if (lookahead == 'i') ADVANCE(422);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_opt);
      if (lookahead == 'i') ADVANCE(502);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_opt);
      if (lookahead == 'i') ADVANCE(150);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_super);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_super);
      if (lookahead == '_') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_super);
      if (lookahead == '_') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_super);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_super);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_super);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_cmd);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_cmd);
      if (lookahead == '_') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_cmd);
      if (lookahead == '_') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_cmd);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_cmd);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_cmd);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_command);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_command);
      if (lookahead == '_') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_command);
      if (lookahead == '_') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_command);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_command);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_command);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_command);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_key_token1);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(520);
      if (lookahead == 'a') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(520);
      if (lookahead == 'a') ADVANCE(733);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(520);
      if (lookahead == 'a') ADVANCE(745);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(520);
      if (lookahead == 'a') ADVANCE(722);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(520);
      if (lookahead == 'a') ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(520);
      if (lookahead == 'a') ADVANCE(725);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(520);
      if (lookahead == 'b') ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(520);
      if (lookahead == 'b') ADVANCE(698);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(520);
      if (lookahead == 'c') ADVANCE(697);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(520);
      if (lookahead == 'c') ADVANCE(738);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(520);
      if (lookahead == 'c') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(520);
      if (lookahead == 'd') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(520);
      if (lookahead == 'd') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(520);
      if (lookahead == 'd') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(520);
      if (lookahead == 'e') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(520);
      if (lookahead == 'e') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(520);
      if (lookahead == 'e') ADVANCE(744);
      if (lookahead == 'h') ADVANCE(756);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(520);
      if (lookahead == 'e') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(520);
      if (lookahead == 'e') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(520);
      if (lookahead == 'f') ADVANCE(753);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(520);
      if (lookahead == 'f') ADVANCE(741);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(520);
      if (lookahead == 'h') ADVANCE(716);
      if (lookahead == 'u') ADVANCE(743);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(520);
      if (lookahead == 'i') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(520);
      if (lookahead == 'i') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(520);
      if (lookahead == 'l') ADVANCE(720);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(520);
      if (lookahead == 'l') ADVANCE(708);
      if (lookahead == 'm') ADVANCE(705);
      if (lookahead == 'o') ADVANCE(728);
      if (lookahead == 't') ADVANCE(747);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(520);
      if (lookahead == 'l') ADVANCE(600);
      if (lookahead == 't') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(520);
      if (lookahead == 'l') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(520);
      if (lookahead == 'l') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(520);
      if (lookahead == 'l') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(520);
      if (lookahead == 'l') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(520);
      if (lookahead == 'l') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(520);
      if (lookahead == 'l') ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(520);
      if (lookahead == 'l') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(520);
      if (lookahead == 'm') ADVANCE(730);
      if (lookahead == 'n') ADVANCE(754);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(520);
      if (lookahead == 'm') ADVANCE(711);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(520);
      if (lookahead == 'm') ADVANCE(695);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(520);
      if (lookahead == 'm') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(520);
      if (lookahead == 'n') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(520);
      if (lookahead == 'n') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(520);
      if (lookahead == 'n') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(520);
      if (lookahead == 'n') ADVANCE(750);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(520);
      if (lookahead == 'o') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(520);
      if (lookahead == 'o') ADVANCE(701);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(520);
      if (lookahead == 'o') ADVANCE(735);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(520);
      if (lookahead == 'o') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(520);
      if (lookahead == 'o') ADVANCE(724);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(520);
      if (lookahead == 'o') ADVANCE(749);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(520);
      if (lookahead == 'p') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(520);
      if (lookahead == 'p') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(520);
      if (lookahead == 'r') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(520);
      if (lookahead == 'r') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(520);
      if (lookahead == 'r') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(520);
      if (lookahead == 'r') ADVANCE(721);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(520);
      if (lookahead == 'r') ADVANCE(740);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(520);
      if (lookahead == 'r') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(520);
      if (lookahead == 's') ADVANCE(755);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(520);
      if (lookahead == 's') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(520);
      if (lookahead == 't') ADVANCE(668);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(520);
      if (lookahead == 't') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(520);
      if (lookahead == 't') ADVANCE(748);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(520);
      if (lookahead == 'u') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(520);
      if (lookahead == 'y') ADVANCE(751);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'a') ADVANCE(763);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'a') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'a') ADVANCE(784);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'a') ADVANCE(785);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'a') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'b') ADVANCE(789);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'b') ADVANCE(761);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'c') ADVANCE(760);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'c') ADVANCE(802);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'c') ADVANCE(762);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'd') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'd') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'd') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'e') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'e') ADVANCE(808);
      if (lookahead == 'h') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'e') ADVANCE(770);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'e') ADVANCE(809);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'f') ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'f') ADVANCE(804);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'h') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'h') ADVANCE(779);
      if (lookahead == 'u') ADVANCE(807);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'i') ADVANCE(775);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'i') ADVANCE(767);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'l') ADVANCE(782);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'l') ADVANCE(601);
      if (lookahead == 't') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'l') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'l') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'l') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'l') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'l') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'l') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'l') ADVANCE(771);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'l') ADVANCE(815);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'm') ADVANCE(768);
      if (lookahead == 'o') ADVANCE(792);
      if (lookahead == 't') ADVANCE(810);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'm') ADVANCE(793);
      if (lookahead == 'n') ADVANCE(818);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'm') ADVANCE(759);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'm') ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'm') ADVANCE(758);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'n') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'n') ADVANCE(769);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'n') ADVANCE(766);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'n') ADVANCE(813);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'o') ADVANCE(765);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'o') ADVANCE(764);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'o') ADVANCE(799);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'o') ADVANCE(796);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'o') ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'o') ADVANCE(786);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'p') ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'p') ADVANCE(774);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'r') ADVANCE(776);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'r') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'r') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'r') ADVANCE(805);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'r') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 's') ADVANCE(819);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 's') ADVANCE(780);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 't') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 't') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 't') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 't') ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'u') ADVANCE(794);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'y') ADVANCE(814);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(521);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym__action_arg_value_token1);
      if (lookahead == '.') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(823);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym__action_arg_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(824);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(anon_sym_theme);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(anon_sym_theme);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(anon_sym_COMMA2);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(anon_sym_light);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(anon_sym_light);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(anon_sym_dark);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(anon_sym_dark);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_theme_variant_token1);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(834);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ',') ADVANCE(835);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_theme_variant_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ',') ADVANCE(835);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(anon_sym_env);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(anon_sym_env);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(anon_sym_initial_DASHcommand);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(anon_sym_direct);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(anon_sym_direct);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(anon_sym_direct);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(anon_sym_shell);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(anon_sym_shell);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(anon_sym_shell);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 201},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 201},
  [4] = {.lex_state = 201},
  [5] = {.lex_state = 26},
  [6] = {.lex_state = 26},
  [7] = {.lex_state = 26},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 26},
  [10] = {.lex_state = 26},
  [11] = {.lex_state = 26},
  [12] = {.lex_state = 13},
  [13] = {.lex_state = 27},
  [14] = {.lex_state = 201},
  [15] = {.lex_state = 201},
  [16] = {.lex_state = 201},
  [17] = {.lex_state = 201},
  [18] = {.lex_state = 201},
  [19] = {.lex_state = 201},
  [20] = {.lex_state = 201},
  [21] = {.lex_state = 201},
  [22] = {.lex_state = 201},
  [23] = {.lex_state = 201},
  [24] = {.lex_state = 27},
  [25] = {.lex_state = 201},
  [26] = {.lex_state = 201},
  [27] = {.lex_state = 201},
  [28] = {.lex_state = 201},
  [29] = {.lex_state = 201},
  [30] = {.lex_state = 16},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 9},
  [34] = {.lex_state = 9},
  [35] = {.lex_state = 10},
  [36] = {.lex_state = 15},
  [37] = {.lex_state = 15},
  [38] = {.lex_state = 17},
  [39] = {.lex_state = 201},
  [40] = {.lex_state = 17},
  [41] = {.lex_state = 17},
  [42] = {.lex_state = 201},
  [43] = {.lex_state = 201},
  [44] = {.lex_state = 201},
  [45] = {.lex_state = 26},
  [46] = {.lex_state = 19},
  [47] = {.lex_state = 12},
  [48] = {.lex_state = 201},
  [49] = {.lex_state = 201},
  [50] = {.lex_state = 17},
  [51] = {.lex_state = 13},
  [52] = {.lex_state = 19},
  [53] = {.lex_state = 17},
  [54] = {.lex_state = 19},
  [55] = {.lex_state = 26},
  [56] = {.lex_state = 15},
  [57] = {.lex_state = 19},
  [58] = {.lex_state = 201},
  [59] = {.lex_state = 201},
  [60] = {.lex_state = 17},
  [61] = {.lex_state = 17},
  [62] = {.lex_state = 17},
  [63] = {.lex_state = 17},
  [64] = {.lex_state = 26},
  [65] = {.lex_state = 201},
  [66] = {.lex_state = 17},
  [67] = {.lex_state = 201},
  [68] = {.lex_state = 19},
  [69] = {.lex_state = 10},
  [70] = {.lex_state = 189},
  [71] = {.lex_state = 26},
  [72] = {.lex_state = 10},
  [73] = {.lex_state = 201},
  [74] = {.lex_state = 201},
  [75] = {.lex_state = 201},
  [76] = {.lex_state = 201},
  [77] = {.lex_state = 199},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 201},
  [80] = {.lex_state = 201},
  [81] = {.lex_state = 199},
  [82] = {.lex_state = 27},
  [83] = {.lex_state = 201},
  [84] = {.lex_state = 201},
  [85] = {.lex_state = 201},
  [86] = {.lex_state = 27},
  [87] = {.lex_state = 201},
  [88] = {.lex_state = 201},
  [89] = {.lex_state = 27},
  [90] = {.lex_state = 201},
  [91] = {.lex_state = 543},
  [92] = {.lex_state = 201},
  [93] = {.lex_state = 547},
  [94] = {.lex_state = 201},
  [95] = {.lex_state = 834},
  [96] = {.lex_state = 201},
  [97] = {.lex_state = 201},
  [98] = {.lex_state = 27},
  [99] = {.lex_state = 200},
  [100] = {.lex_state = 27},
  [101] = {.lex_state = 201},
  [102] = {.lex_state = 201},
  [103] = {.lex_state = 201},
  [104] = {.lex_state = 201},
  [105] = {.lex_state = 19},
  [106] = {.lex_state = 201},
  [107] = {.lex_state = 201},
  [108] = {.lex_state = 201},
  [109] = {.lex_state = 201},
  [110] = {.lex_state = 201},
  [111] = {.lex_state = 201},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 197},
  [114] = {.lex_state = 201},
  [115] = {.lex_state = 201},
  [116] = {.lex_state = 201},
  [117] = {.lex_state = 201},
  [118] = {.lex_state = 201},
  [119] = {.lex_state = 27},
  [120] = {.lex_state = 201},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 201},
  [123] = {.lex_state = 201},
  [124] = {.lex_state = 27},
  [125] = {.lex_state = 27},
  [126] = {.lex_state = 201},
  [127] = {.lex_state = 201},
  [128] = {.lex_state = 201},
  [129] = {.lex_state = 201},
  [130] = {.lex_state = 201},
  [131] = {.lex_state = 197},
  [132] = {.lex_state = 27},
  [133] = {.lex_state = 201},
  [134] = {.lex_state = 201},
  [135] = {.lex_state = 201},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 559},
  [138] = {.lex_state = 561},
  [139] = {.lex_state = 201},
  [140] = {.lex_state = 201},
  [141] = {.lex_state = 201},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 201},
  [145] = {.lex_state = 201},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym__kebab_case_identifier_token1] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym__snake_case_identifier_token1] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [aux_sym__snake_case_insensitive_identifier_token1] = ACTIONS(1),
    [aux_sym__snake_case_insensitive_identifier_token2] = ACTIONS(1),
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
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_all] = ACTIONS(1),
    [anon_sym_global] = ACTIONS(1),
    [anon_sym_local] = ACTIONS(1),
    [anon_sym_unconsumed] = ACTIONS(1),
    [anon_sym_performable] = ACTIONS(1),
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
    [anon_sym_direct] = ACTIONS(1),
    [anon_sym_shell] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(121),
    [sym_directive] = STATE(3),
    [sym_basic_directive] = STATE(14),
    [sym__kebab_case_identifier] = STATE(82),
    [sym_property] = STATE(89),
    [sym_palette_directive] = STATE(14),
    [sym_path_property] = STATE(125),
    [sym_path_directive] = STATE(14),
    [sym_keybind_directive] = STATE(14),
    [sym_theme_directive] = STATE(14),
    [sym_env_directive] = STATE(14),
    [sym_command_directive] = STATE(14),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_document_token1] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [aux_sym__kebab_case_identifier_token1] = ACTIONS(9),
    [anon_sym_palette] = ACTIONS(11),
    [anon_sym_config_DASHfile] = ACTIONS(13),
    [anon_sym_gtk_DASHcustom_DASHcss] = ACTIONS(13),
    [anon_sym_custom_DASHshader] = ACTIONS(13),
    [anon_sym_background_DASHimage] = ACTIONS(13),
    [anon_sym_keybind] = ACTIONS(15),
    [anon_sym_command] = ACTIONS(17),
    [anon_sym_theme] = ACTIONS(19),
    [anon_sym_env] = ACTIONS(21),
    [anon_sym_initial_DASHcommand] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(23), 1,
      aux_sym_document_token1,
    ACTIONS(25), 1,
      sym__key_table_identifier,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      aux_sym_string_token3,
    ACTIONS(33), 1,
      anon_sym_clear,
    ACTIONS(37), 1,
      anon_sym_physical,
    ACTIONS(41), 1,
      aux_sym_key_token1,
    STATE(6), 1,
      sym_keybind_table,
    STATE(45), 1,
      sym_chord,
    STATE(77), 1,
      sym_key_qualifier,
    STATE(101), 1,
      sym_string,
    STATE(120), 1,
      sym_keybind_value,
    STATE(133), 1,
      sym_keybind_trigger,
    STATE(5), 2,
      sym_keybind_modifier,
      aux_sym_keybind_value_repeat1,
    STATE(41), 2,
      sym_modifier_key,
      sym_key,
    ACTIONS(35), 5,
      anon_sym_all,
      anon_sym_global,
      anon_sym_local,
      anon_sym_unconsumed,
      anon_sym_performable,
    ACTIONS(39), 9,
      anon_sym_shift,
      anon_sym_ctrl,
      anon_sym_control,
      anon_sym_alt,
      anon_sym_option,
      anon_sym_opt,
      anon_sym_super,
      anon_sym_cmd,
      anon_sym_command,
  [69] = 15,
    ACTIONS(9), 1,
      aux_sym__kebab_case_identifier_token1,
    ACTIONS(11), 1,
      anon_sym_palette,
    ACTIONS(15), 1,
      anon_sym_keybind,
    ACTIONS(19), 1,
      anon_sym_theme,
    ACTIONS(21), 1,
      anon_sym_env,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      aux_sym_document_token1,
    ACTIONS(47), 1,
      sym_comment,
    STATE(82), 1,
      sym__kebab_case_identifier,
    STATE(89), 1,
      sym_property,
    STATE(125), 1,
      sym_path_property,
    ACTIONS(17), 2,
      anon_sym_command,
      anon_sym_initial_DASHcommand,
    STATE(4), 2,
      sym_directive,
      aux_sym_document_repeat1,
    ACTIONS(13), 4,
      anon_sym_config_DASHfile,
      anon_sym_gtk_DASHcustom_DASHcss,
      anon_sym_custom_DASHshader,
      anon_sym_background_DASHimage,
    STATE(14), 7,
      sym_basic_directive,
      sym_palette_directive,
      sym_path_directive,
      sym_keybind_directive,
      sym_theme_directive,
      sym_env_directive,
      sym_command_directive,
  [126] = 15,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      aux_sym_document_token1,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(57), 1,
      aux_sym__kebab_case_identifier_token1,
    ACTIONS(60), 1,
      anon_sym_palette,
    ACTIONS(66), 1,
      anon_sym_keybind,
    ACTIONS(72), 1,
      anon_sym_theme,
    ACTIONS(75), 1,
      anon_sym_env,
    STATE(82), 1,
      sym__kebab_case_identifier,
    STATE(89), 1,
      sym_property,
    STATE(125), 1,
      sym_path_property,
    ACTIONS(69), 2,
      anon_sym_command,
      anon_sym_initial_DASHcommand,
    STATE(4), 2,
      sym_directive,
      aux_sym_document_repeat1,
    ACTIONS(63), 4,
      anon_sym_config_DASHfile,
      anon_sym_gtk_DASHcustom_DASHcss,
      anon_sym_custom_DASHshader,
      anon_sym_background_DASHimage,
    STATE(14), 7,
      sym_basic_directive,
      sym_palette_directive,
      sym_path_directive,
      sym_keybind_directive,
      sym_theme_directive,
      sym_env_directive,
      sym_command_directive,
  [183] = 9,
    ACTIONS(37), 1,
      anon_sym_physical,
    ACTIONS(41), 1,
      aux_sym_key_token1,
    STATE(45), 1,
      sym_chord,
    STATE(77), 1,
      sym_key_qualifier,
    STATE(83), 1,
      sym_keybind_trigger,
    STATE(9), 2,
      sym_keybind_modifier,
      aux_sym_keybind_value_repeat1,
    STATE(41), 2,
      sym_modifier_key,
      sym_key,
    ACTIONS(35), 5,
      anon_sym_all,
      anon_sym_global,
      anon_sym_local,
      anon_sym_unconsumed,
      anon_sym_performable,
    ACTIONS(39), 9,
      anon_sym_shift,
      anon_sym_ctrl,
      anon_sym_control,
      anon_sym_alt,
      anon_sym_option,
      anon_sym_opt,
      anon_sym_super,
      anon_sym_cmd,
      anon_sym_command,
  [225] = 9,
    ACTIONS(37), 1,
      anon_sym_physical,
    ACTIONS(41), 1,
      aux_sym_key_token1,
    STATE(45), 1,
      sym_chord,
    STATE(77), 1,
      sym_key_qualifier,
    STATE(83), 1,
      sym_keybind_trigger,
    STATE(7), 2,
      sym_keybind_modifier,
      aux_sym_keybind_value_repeat1,
    STATE(41), 2,
      sym_modifier_key,
      sym_key,
    ACTIONS(35), 5,
      anon_sym_all,
      anon_sym_global,
      anon_sym_local,
      anon_sym_unconsumed,
      anon_sym_performable,
    ACTIONS(39), 9,
      anon_sym_shift,
      anon_sym_ctrl,
      anon_sym_control,
      anon_sym_alt,
      anon_sym_option,
      anon_sym_opt,
      anon_sym_super,
      anon_sym_cmd,
      anon_sym_command,
  [267] = 9,
    ACTIONS(37), 1,
      anon_sym_physical,
    ACTIONS(41), 1,
      aux_sym_key_token1,
    STATE(45), 1,
      sym_chord,
    STATE(77), 1,
      sym_key_qualifier,
    STATE(145), 1,
      sym_keybind_trigger,
    STATE(9), 2,
      sym_keybind_modifier,
      aux_sym_keybind_value_repeat1,
    STATE(41), 2,
      sym_modifier_key,
      sym_key,
    ACTIONS(35), 5,
      anon_sym_all,
      anon_sym_global,
      anon_sym_local,
      anon_sym_unconsumed,
      anon_sym_performable,
    ACTIONS(39), 9,
      anon_sym_shift,
      anon_sym_ctrl,
      anon_sym_control,
      anon_sym_alt,
      anon_sym_option,
      anon_sym_opt,
      anon_sym_super,
      anon_sym_cmd,
      anon_sym_command,
  [309] = 12,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      aux_sym_string_token3,
    ACTIONS(78), 1,
      aux_sym_document_token1,
    ACTIONS(80), 1,
      aux_sym_value_token1,
    ACTIONS(84), 1,
      sym_number,
    ACTIONS(86), 1,
      anon_sym_POUND,
    ACTIONS(88), 1,
      aux_sym_color_token1,
    STATE(117), 1,
      sym_value,
    ACTIONS(82), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(90), 2,
      sym_percent_adjustment,
      sym_numeric_adjustment,
    STATE(118), 5,
      sym_tuple,
      sym_boolean,
      sym_adjustment,
      sym_string,
      sym_color,
  [352] = 3,
    STATE(9), 2,
      sym_keybind_modifier,
      aux_sym_keybind_value_repeat1,
    ACTIONS(92), 5,
      anon_sym_all,
      anon_sym_global,
      anon_sym_local,
      anon_sym_unconsumed,
      anon_sym_performable,
    ACTIONS(95), 11,
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
  [377] = 1,
    ACTIONS(97), 16,
      anon_sym_all,
      anon_sym_global,
      anon_sym_local,
      anon_sym_unconsumed,
      anon_sym_performable,
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
  [396] = 1,
    ACTIONS(99), 16,
      anon_sym_all,
      anon_sym_global,
      anon_sym_local,
      anon_sym_unconsumed,
      anon_sym_performable,
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
  [415] = 10,
    ACTIONS(31), 1,
      aux_sym_string_token3,
    ACTIONS(88), 1,
      aux_sym_color_token1,
    ACTIONS(90), 1,
      sym_numeric_adjustment,
    ACTIONS(103), 1,
      sym_number,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    ACTIONS(109), 1,
      anon_sym_POUND,
    ACTIONS(111), 1,
      sym_percent_adjustment,
    ACTIONS(101), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(104), 5,
      sym_tuple,
      sym_boolean,
      sym_adjustment,
      sym_string,
      sym_color,
  [451] = 6,
    ACTIONS(37), 1,
      anon_sym_physical,
    ACTIONS(41), 1,
      aux_sym_key_token1,
    STATE(71), 1,
      sym_chord,
    STATE(77), 1,
      sym_key_qualifier,
    STATE(41), 2,
      sym_modifier_key,
      sym_key,
    ACTIONS(39), 9,
      anon_sym_shift,
      anon_sym_ctrl,
      anon_sym_control,
      anon_sym_alt,
      anon_sym_option,
      anon_sym_opt,
      anon_sym_super,
      anon_sym_cmd,
      anon_sym_command,
  [479] = 2,
    ACTIONS(113), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(115), 12,
      sym_comment,
      aux_sym__kebab_case_identifier_token1,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_gtk_DASHcustom_DASHcss,
      anon_sym_custom_DASHshader,
      anon_sym_background_DASHimage,
      anon_sym_keybind,
      anon_sym_command,
      anon_sym_theme,
      anon_sym_env,
      anon_sym_initial_DASHcommand,
  [498] = 2,
    ACTIONS(117), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(119), 12,
      sym_comment,
      aux_sym__kebab_case_identifier_token1,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_gtk_DASHcustom_DASHcss,
      anon_sym_custom_DASHshader,
      anon_sym_background_DASHimage,
      anon_sym_keybind,
      anon_sym_command,
      anon_sym_theme,
      anon_sym_env,
      anon_sym_initial_DASHcommand,
  [517] = 2,
    ACTIONS(121), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(123), 12,
      sym_comment,
      aux_sym__kebab_case_identifier_token1,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_gtk_DASHcustom_DASHcss,
      anon_sym_custom_DASHshader,
      anon_sym_background_DASHimage,
      anon_sym_keybind,
      anon_sym_command,
      anon_sym_theme,
      anon_sym_env,
      anon_sym_initial_DASHcommand,
  [536] = 2,
    ACTIONS(125), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(127), 12,
      sym_comment,
      aux_sym__kebab_case_identifier_token1,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_gtk_DASHcustom_DASHcss,
      anon_sym_custom_DASHshader,
      anon_sym_background_DASHimage,
      anon_sym_keybind,
      anon_sym_command,
      anon_sym_theme,
      anon_sym_env,
      anon_sym_initial_DASHcommand,
  [555] = 2,
    ACTIONS(129), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(131), 12,
      sym_comment,
      aux_sym__kebab_case_identifier_token1,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_gtk_DASHcustom_DASHcss,
      anon_sym_custom_DASHshader,
      anon_sym_background_DASHimage,
      anon_sym_keybind,
      anon_sym_command,
      anon_sym_theme,
      anon_sym_env,
      anon_sym_initial_DASHcommand,
  [574] = 2,
    ACTIONS(133), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(135), 12,
      sym_comment,
      aux_sym__kebab_case_identifier_token1,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_gtk_DASHcustom_DASHcss,
      anon_sym_custom_DASHshader,
      anon_sym_background_DASHimage,
      anon_sym_keybind,
      anon_sym_command,
      anon_sym_theme,
      anon_sym_env,
      anon_sym_initial_DASHcommand,
  [593] = 2,
    ACTIONS(137), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(139), 12,
      sym_comment,
      aux_sym__kebab_case_identifier_token1,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_gtk_DASHcustom_DASHcss,
      anon_sym_custom_DASHshader,
      anon_sym_background_DASHimage,
      anon_sym_keybind,
      anon_sym_command,
      anon_sym_theme,
      anon_sym_env,
      anon_sym_initial_DASHcommand,
  [612] = 2,
    ACTIONS(141), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(143), 12,
      sym_comment,
      aux_sym__kebab_case_identifier_token1,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_gtk_DASHcustom_DASHcss,
      anon_sym_custom_DASHshader,
      anon_sym_background_DASHimage,
      anon_sym_keybind,
      anon_sym_command,
      anon_sym_theme,
      anon_sym_env,
      anon_sym_initial_DASHcommand,
  [631] = 2,
    ACTIONS(145), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(147), 12,
      sym_comment,
      aux_sym__kebab_case_identifier_token1,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_gtk_DASHcustom_DASHcss,
      anon_sym_custom_DASHshader,
      anon_sym_background_DASHimage,
      anon_sym_keybind,
      anon_sym_command,
      anon_sym_theme,
      anon_sym_env,
      anon_sym_initial_DASHcommand,
  [650] = 2,
    ACTIONS(149), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(151), 12,
      sym_comment,
      aux_sym__kebab_case_identifier_token1,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_gtk_DASHcustom_DASHcss,
      anon_sym_custom_DASHshader,
      anon_sym_background_DASHimage,
      anon_sym_keybind,
      anon_sym_command,
      anon_sym_theme,
      anon_sym_env,
      anon_sym_initial_DASHcommand,
  [669] = 5,
    ACTIONS(37), 1,
      anon_sym_physical,
    ACTIONS(41), 1,
      aux_sym_key_token1,
    STATE(77), 1,
      sym_key_qualifier,
    STATE(60), 2,
      sym_modifier_key,
      sym_key,
    ACTIONS(39), 9,
      anon_sym_shift,
      anon_sym_ctrl,
      anon_sym_control,
      anon_sym_alt,
      anon_sym_option,
      anon_sym_opt,
      anon_sym_super,
      anon_sym_cmd,
      anon_sym_command,
  [694] = 2,
    ACTIONS(153), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(155), 12,
      sym_comment,
      aux_sym__kebab_case_identifier_token1,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_gtk_DASHcustom_DASHcss,
      anon_sym_custom_DASHshader,
      anon_sym_background_DASHimage,
      anon_sym_keybind,
      anon_sym_command,
      anon_sym_theme,
      anon_sym_env,
      anon_sym_initial_DASHcommand,
  [713] = 2,
    ACTIONS(157), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(159), 12,
      sym_comment,
      aux_sym__kebab_case_identifier_token1,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_gtk_DASHcustom_DASHcss,
      anon_sym_custom_DASHshader,
      anon_sym_background_DASHimage,
      anon_sym_keybind,
      anon_sym_command,
      anon_sym_theme,
      anon_sym_env,
      anon_sym_initial_DASHcommand,
  [732] = 2,
    ACTIONS(161), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(163), 12,
      sym_comment,
      aux_sym__kebab_case_identifier_token1,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_gtk_DASHcustom_DASHcss,
      anon_sym_custom_DASHshader,
      anon_sym_background_DASHimage,
      anon_sym_keybind,
      anon_sym_command,
      anon_sym_theme,
      anon_sym_env,
      anon_sym_initial_DASHcommand,
  [751] = 2,
    ACTIONS(165), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(167), 12,
      sym_comment,
      aux_sym__kebab_case_identifier_token1,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_gtk_DASHcustom_DASHcss,
      anon_sym_custom_DASHshader,
      anon_sym_background_DASHimage,
      anon_sym_keybind,
      anon_sym_command,
      anon_sym_theme,
      anon_sym_env,
      anon_sym_initial_DASHcommand,
  [770] = 2,
    ACTIONS(169), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(171), 12,
      sym_comment,
      aux_sym__kebab_case_identifier_token1,
      anon_sym_palette,
      anon_sym_config_DASHfile,
      anon_sym_gtk_DASHcustom_DASHcss,
      anon_sym_custom_DASHshader,
      anon_sym_background_DASHimage,
      anon_sym_keybind,
      anon_sym_command,
      anon_sym_theme,
      anon_sym_env,
      anon_sym_initial_DASHcommand,
  [789] = 8,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      aux_sym__raw_value_token1,
    ACTIONS(179), 1,
      aux_sym__action_arg_value_token1,
    STATE(140), 1,
      sym__raw_value,
    STATE(141), 1,
      sym__action_arg_value,
    ACTIONS(82), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(139), 2,
      sym_boolean,
      sym__loose_string,
  [816] = 8,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      aux_sym_string_token3,
    ACTIONS(181), 1,
      aux_sym_document_token1,
    STATE(36), 1,
      sym_command_modifier,
    STATE(85), 1,
      sym_string,
    STATE(88), 1,
      sym_command_value,
    ACTIONS(183), 2,
      anon_sym_direct,
      anon_sym_shell,
  [842] = 8,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      aux_sym_string_token3,
    ACTIONS(185), 1,
      aux_sym_document_token1,
    STATE(48), 1,
      sym_theme_variant,
    STATE(80), 1,
      sym_theme_value,
    STATE(135), 1,
      sym_string,
    ACTIONS(187), 2,
      anon_sym_light,
      anon_sym_dark,
  [868] = 7,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      aux_sym_string_token3,
    ACTIONS(189), 1,
      aux_sym_document_token1,
    ACTIONS(191), 1,
      anon_sym_QMARK,
    STATE(122), 1,
      sym_string,
    STATE(123), 1,
      sym_path_value,
  [890] = 6,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      aux_sym_string_token3,
    ACTIONS(193), 1,
      aux_sym_document_token1,
    STATE(126), 1,
      sym_string,
    STATE(127), 1,
      sym_env_var_value,
  [909] = 5,
    ACTIONS(195), 1,
      aux_sym_document_token1,
    ACTIONS(197), 1,
      aux_sym__snake_case_insensitive_identifier_token1,
    STATE(92), 1,
      sym__snake_case_insensitive_identifier,
    STATE(96), 1,
      sym_env_value,
    STATE(97), 1,
      sym_env_var_name,
  [925] = 4,
    ACTIONS(31), 1,
      aux_sym_string_token3,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    STATE(94), 1,
      sym_string,
  [938] = 4,
    ACTIONS(31), 1,
      aux_sym_string_token3,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    STATE(108), 1,
      sym_string,
  [951] = 3,
    ACTIONS(201), 1,
      anon_sym_PLUS,
    STATE(40), 1,
      aux_sym_chord_repeat1,
    ACTIONS(199), 2,
      anon_sym_EQ2,
      anon_sym_GT,
  [962] = 3,
    ACTIONS(205), 1,
      anon_sym__,
    STATE(42), 1,
      aux_sym__snake_case_identifier_repeat1,
    ACTIONS(203), 2,
      aux_sym_document_token1,
      anon_sym_COLON,
  [973] = 3,
    ACTIONS(209), 1,
      anon_sym_PLUS,
    STATE(40), 1,
      aux_sym_chord_repeat1,
    ACTIONS(207), 2,
      anon_sym_EQ2,
      anon_sym_GT,
  [984] = 3,
    ACTIONS(201), 1,
      anon_sym_PLUS,
    STATE(38), 1,
      aux_sym_chord_repeat1,
    ACTIONS(212), 2,
      anon_sym_EQ2,
      anon_sym_GT,
  [995] = 3,
    ACTIONS(205), 1,
      anon_sym__,
    STATE(43), 1,
      aux_sym__snake_case_identifier_repeat1,
    ACTIONS(214), 2,
      aux_sym_document_token1,
      anon_sym_COLON,
  [1006] = 3,
    ACTIONS(218), 1,
      anon_sym__,
    STATE(43), 1,
      aux_sym__snake_case_identifier_repeat1,
    ACTIONS(216), 2,
      aux_sym_document_token1,
      anon_sym_COLON,
  [1017] = 3,
    ACTIONS(221), 1,
      anon_sym__,
    ACTIONS(224), 1,
      anon_sym_EQ2,
    STATE(44), 1,
      aux_sym__snake_case_insensitive_identifier_repeat1,
  [1027] = 3,
    ACTIONS(226), 1,
      anon_sym_EQ2,
    ACTIONS(228), 1,
      anon_sym_GT,
    STATE(55), 1,
      aux_sym_keybind_trigger_repeat1,
  [1037] = 3,
    ACTIONS(230), 1,
      anon_sym_EQ,
    ACTIONS(232), 1,
      anon_sym_DASH,
    STATE(54), 1,
      aux_sym__kebab_case_identifier_repeat1,
  [1047] = 3,
    ACTIONS(234), 1,
      aux_sym_document_token1,
    ACTIONS(236), 1,
      aux_sym_palette_value_token1,
    STATE(87), 1,
      sym_palette_value,
  [1057] = 3,
    ACTIONS(238), 1,
      aux_sym_document_token1,
    ACTIONS(240), 1,
      anon_sym_COMMA2,
    STATE(58), 1,
      aux_sym_theme_value_repeat1,
  [1067] = 3,
    ACTIONS(242), 1,
      anon_sym__,
    ACTIONS(244), 1,
      anon_sym_EQ2,
    STATE(59), 1,
      aux_sym__snake_case_insensitive_identifier_repeat1,
  [1077] = 3,
    ACTIONS(246), 1,
      aux_sym__snake_case_identifier_token1,
    STATE(74), 1,
      sym__snake_case_identifier,
    STATE(116), 1,
      sym_keybind_action,
  [1087] = 3,
    ACTIONS(109), 1,
      anon_sym_POUND,
    ACTIONS(248), 1,
      aux_sym_color_token1,
    STATE(110), 1,
      sym_color,
  [1097] = 3,
    ACTIONS(232), 1,
      anon_sym_DASH,
    ACTIONS(250), 1,
      anon_sym_EQ,
    STATE(46), 1,
      aux_sym__kebab_case_identifier_repeat1,
  [1107] = 1,
    ACTIONS(252), 3,
      anon_sym_EQ2,
      anon_sym_GT,
      anon_sym_PLUS,
  [1113] = 3,
    ACTIONS(254), 1,
      anon_sym_EQ,
    ACTIONS(256), 1,
      anon_sym_DASH,
    STATE(54), 1,
      aux_sym__kebab_case_identifier_repeat1,
  [1123] = 3,
    ACTIONS(228), 1,
      anon_sym_GT,
    ACTIONS(259), 1,
      anon_sym_EQ2,
    STATE(64), 1,
      aux_sym_keybind_trigger_repeat1,
  [1133] = 2,
    ACTIONS(263), 1,
      aux_sym_string_token3,
    ACTIONS(261), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1141] = 2,
    STATE(75), 1,
      sym_theme_variant,
    ACTIONS(265), 2,
      anon_sym_light,
      anon_sym_dark,
  [1149] = 3,
    ACTIONS(240), 1,
      anon_sym_COMMA2,
    ACTIONS(267), 1,
      aux_sym_document_token1,
    STATE(65), 1,
      aux_sym_theme_value_repeat1,
  [1159] = 3,
    ACTIONS(242), 1,
      anon_sym__,
    ACTIONS(269), 1,
      anon_sym_EQ2,
    STATE(44), 1,
      aux_sym__snake_case_insensitive_identifier_repeat1,
  [1169] = 1,
    ACTIONS(207), 3,
      anon_sym_EQ2,
      anon_sym_GT,
      anon_sym_PLUS,
  [1175] = 1,
    ACTIONS(271), 3,
      anon_sym_EQ2,
      anon_sym_GT,
      anon_sym_PLUS,
  [1181] = 3,
    ACTIONS(246), 1,
      aux_sym__snake_case_identifier_token1,
    STATE(74), 1,
      sym__snake_case_identifier,
    STATE(129), 1,
      sym_keybind_action,
  [1191] = 1,
    ACTIONS(273), 3,
      anon_sym_EQ2,
      anon_sym_GT,
      anon_sym_PLUS,
  [1197] = 3,
    ACTIONS(275), 1,
      anon_sym_EQ2,
    ACTIONS(277), 1,
      anon_sym_GT,
    STATE(64), 1,
      aux_sym_keybind_trigger_repeat1,
  [1207] = 3,
    ACTIONS(280), 1,
      aux_sym_document_token1,
    ACTIONS(282), 1,
      anon_sym_COMMA2,
    STATE(65), 1,
      aux_sym_theme_value_repeat1,
  [1217] = 3,
    ACTIONS(246), 1,
      aux_sym__snake_case_identifier_token1,
    STATE(74), 1,
      sym__snake_case_identifier,
    STATE(134), 1,
      sym_keybind_action,
  [1227] = 1,
    ACTIONS(216), 3,
      aux_sym_document_token1,
      anon_sym__,
      anon_sym_COLON,
  [1233] = 1,
    ACTIONS(254), 2,
      anon_sym_EQ,
      anon_sym_DASH,
  [1238] = 2,
    ACTIONS(285), 1,
      aux_sym_document_token1,
    ACTIONS(287), 1,
      anon_sym_COMMA,
  [1245] = 2,
    ACTIONS(289), 1,
      aux_sym__raw_value_token1,
    STATE(79), 1,
      sym__raw_value,
  [1252] = 1,
    ACTIONS(275), 2,
      anon_sym_EQ2,
      anon_sym_GT,
  [1257] = 2,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    ACTIONS(291), 1,
      aux_sym_document_token1,
  [1264] = 2,
    ACTIONS(293), 1,
      aux_sym_document_token1,
    ACTIONS(295), 1,
      anon_sym_COMMA2,
  [1271] = 2,
    ACTIONS(297), 1,
      aux_sym_document_token1,
    ACTIONS(299), 1,
      anon_sym_COLON,
  [1278] = 2,
    ACTIONS(280), 1,
      aux_sym_document_token1,
    ACTIONS(301), 1,
      anon_sym_COMMA2,
  [1285] = 1,
    ACTIONS(224), 2,
      anon_sym__,
      anon_sym_EQ2,
  [1290] = 1,
    ACTIONS(303), 1,
      aux_sym_key_token1,
  [1294] = 1,
    ACTIONS(305), 1,
      anon_sym_SQUOTE,
  [1298] = 1,
    ACTIONS(307), 1,
      aux_sym_document_token1,
  [1302] = 1,
    ACTIONS(309), 1,
      aux_sym_document_token1,
  [1306] = 1,
    ACTIONS(311), 1,
      aux_sym_key_token1,
  [1310] = 1,
    ACTIONS(313), 1,
      anon_sym_EQ,
  [1314] = 1,
    ACTIONS(315), 1,
      anon_sym_EQ2,
  [1318] = 1,
    ACTIONS(317), 1,
      anon_sym_EQ2,
  [1322] = 1,
    ACTIONS(319), 1,
      aux_sym_document_token1,
  [1326] = 1,
    ACTIONS(321), 1,
      anon_sym_EQ,
  [1330] = 1,
    ACTIONS(323), 1,
      aux_sym_document_token1,
  [1334] = 1,
    ACTIONS(325), 1,
      aux_sym_document_token1,
  [1338] = 1,
    ACTIONS(327), 1,
      anon_sym_EQ,
  [1342] = 1,
    ACTIONS(329), 1,
      anon_sym_SLASH,
  [1346] = 1,
    ACTIONS(331), 1,
      aux_sym_string_token1,
  [1350] = 1,
    ACTIONS(333), 1,
      anon_sym_EQ2,
  [1354] = 1,
    ACTIONS(335), 1,
      aux_sym_string_token2,
  [1358] = 1,
    ACTIONS(337), 1,
      aux_sym_document_token1,
  [1362] = 1,
    ACTIONS(339), 1,
      aux_sym_theme_variant_token1,
  [1366] = 1,
    ACTIONS(341), 1,
      aux_sym_document_token1,
  [1370] = 1,
    ACTIONS(343), 1,
      anon_sym_EQ2,
  [1374] = 1,
    ACTIONS(345), 1,
      anon_sym_EQ,
  [1378] = 1,
    ACTIONS(347), 1,
      aux_sym__snake_case_insensitive_identifier_token2,
  [1382] = 1,
    ACTIONS(349), 1,
      anon_sym_EQ,
  [1386] = 1,
    ACTIONS(351), 1,
      aux_sym_document_token1,
  [1390] = 1,
    ACTIONS(353), 1,
      anon_sym_COLON,
  [1394] = 1,
    ACTIONS(355), 1,
      aux_sym_document_token1,
  [1398] = 1,
    ACTIONS(291), 1,
      aux_sym_document_token1,
  [1402] = 1,
    ACTIONS(357), 1,
      sym_number,
  [1406] = 1,
    ACTIONS(359), 1,
      aux_sym_document_token1,
  [1410] = 1,
    ACTIONS(361), 1,
      anon_sym_COLON,
  [1414] = 1,
    ACTIONS(363), 1,
      aux_sym_document_token1,
  [1418] = 1,
    ACTIONS(365), 1,
      anon_sym_COLON,
  [1422] = 1,
    ACTIONS(367), 1,
      aux_sym_document_token1,
  [1426] = 1,
    ACTIONS(369), 1,
      aux_sym_document_token1,
  [1430] = 1,
    ACTIONS(371), 1,
      aux_sym_color_token1,
  [1434] = 1,
    ACTIONS(373), 1,
      aux_sym__kebab_case_identifier_token1,
  [1438] = 1,
    ACTIONS(375), 1,
      aux_sym_document_token1,
  [1442] = 1,
    ACTIONS(377), 1,
      aux_sym_document_token1,
  [1446] = 1,
    ACTIONS(379), 1,
      aux_sym_document_token1,
  [1450] = 1,
    ACTIONS(381), 1,
      aux_sym_document_token1,
  [1454] = 1,
    ACTIONS(285), 1,
      aux_sym_document_token1,
  [1458] = 1,
    ACTIONS(383), 1,
      anon_sym_EQ,
  [1462] = 1,
    ACTIONS(385), 1,
      aux_sym_document_token1,
  [1466] = 1,
    ACTIONS(387), 1,
      ts_builtin_sym_end,
  [1470] = 1,
    ACTIONS(389), 1,
      aux_sym_document_token1,
  [1474] = 1,
    ACTIONS(391), 1,
      aux_sym_document_token1,
  [1478] = 1,
    ACTIONS(393), 1,
      anon_sym_EQ,
  [1482] = 1,
    ACTIONS(395), 1,
      anon_sym_EQ,
  [1486] = 1,
    ACTIONS(397), 1,
      aux_sym_document_token1,
  [1490] = 1,
    ACTIONS(399), 1,
      aux_sym_document_token1,
  [1494] = 1,
    ACTIONS(401), 1,
      aux_sym_document_token1,
  [1498] = 1,
    ACTIONS(403), 1,
      aux_sym_document_token1,
  [1502] = 1,
    ACTIONS(405), 1,
      anon_sym_COLON,
  [1506] = 1,
    ACTIONS(407), 1,
      aux_sym__kebab_case_identifier_token1,
  [1510] = 1,
    ACTIONS(409), 1,
      anon_sym_EQ,
  [1514] = 1,
    ACTIONS(411), 1,
      anon_sym_EQ2,
  [1518] = 1,
    ACTIONS(413), 1,
      aux_sym_document_token1,
  [1522] = 1,
    ACTIONS(238), 1,
      aux_sym_document_token1,
  [1526] = 1,
    ACTIONS(305), 1,
      anon_sym_DQUOTE,
  [1530] = 1,
    ACTIONS(415), 1,
      aux_sym__loose_string_token1,
  [1534] = 1,
    ACTIONS(417), 1,
      aux_sym__loose_string_token2,
  [1538] = 1,
    ACTIONS(419), 1,
      aux_sym_document_token1,
  [1542] = 1,
    ACTIONS(421), 1,
      aux_sym_document_token1,
  [1546] = 1,
    ACTIONS(423), 1,
      aux_sym_document_token1,
  [1550] = 1,
    ACTIONS(425), 1,
      anon_sym_DQUOTE,
  [1554] = 1,
    ACTIONS(425), 1,
      anon_sym_SQUOTE,
  [1558] = 1,
    ACTIONS(427), 1,
      aux_sym_document_token1,
  [1562] = 1,
    ACTIONS(429), 1,
      anon_sym_EQ2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 69,
  [SMALL_STATE(4)] = 126,
  [SMALL_STATE(5)] = 183,
  [SMALL_STATE(6)] = 225,
  [SMALL_STATE(7)] = 267,
  [SMALL_STATE(8)] = 309,
  [SMALL_STATE(9)] = 352,
  [SMALL_STATE(10)] = 377,
  [SMALL_STATE(11)] = 396,
  [SMALL_STATE(12)] = 415,
  [SMALL_STATE(13)] = 451,
  [SMALL_STATE(14)] = 479,
  [SMALL_STATE(15)] = 498,
  [SMALL_STATE(16)] = 517,
  [SMALL_STATE(17)] = 536,
  [SMALL_STATE(18)] = 555,
  [SMALL_STATE(19)] = 574,
  [SMALL_STATE(20)] = 593,
  [SMALL_STATE(21)] = 612,
  [SMALL_STATE(22)] = 631,
  [SMALL_STATE(23)] = 650,
  [SMALL_STATE(24)] = 669,
  [SMALL_STATE(25)] = 694,
  [SMALL_STATE(26)] = 713,
  [SMALL_STATE(27)] = 732,
  [SMALL_STATE(28)] = 751,
  [SMALL_STATE(29)] = 770,
  [SMALL_STATE(30)] = 789,
  [SMALL_STATE(31)] = 816,
  [SMALL_STATE(32)] = 842,
  [SMALL_STATE(33)] = 868,
  [SMALL_STATE(34)] = 890,
  [SMALL_STATE(35)] = 909,
  [SMALL_STATE(36)] = 925,
  [SMALL_STATE(37)] = 938,
  [SMALL_STATE(38)] = 951,
  [SMALL_STATE(39)] = 962,
  [SMALL_STATE(40)] = 973,
  [SMALL_STATE(41)] = 984,
  [SMALL_STATE(42)] = 995,
  [SMALL_STATE(43)] = 1006,
  [SMALL_STATE(44)] = 1017,
  [SMALL_STATE(45)] = 1027,
  [SMALL_STATE(46)] = 1037,
  [SMALL_STATE(47)] = 1047,
  [SMALL_STATE(48)] = 1057,
  [SMALL_STATE(49)] = 1067,
  [SMALL_STATE(50)] = 1077,
  [SMALL_STATE(51)] = 1087,
  [SMALL_STATE(52)] = 1097,
  [SMALL_STATE(53)] = 1107,
  [SMALL_STATE(54)] = 1113,
  [SMALL_STATE(55)] = 1123,
  [SMALL_STATE(56)] = 1133,
  [SMALL_STATE(57)] = 1141,
  [SMALL_STATE(58)] = 1149,
  [SMALL_STATE(59)] = 1159,
  [SMALL_STATE(60)] = 1169,
  [SMALL_STATE(61)] = 1175,
  [SMALL_STATE(62)] = 1181,
  [SMALL_STATE(63)] = 1191,
  [SMALL_STATE(64)] = 1197,
  [SMALL_STATE(65)] = 1207,
  [SMALL_STATE(66)] = 1217,
  [SMALL_STATE(67)] = 1227,
  [SMALL_STATE(68)] = 1233,
  [SMALL_STATE(69)] = 1238,
  [SMALL_STATE(70)] = 1245,
  [SMALL_STATE(71)] = 1252,
  [SMALL_STATE(72)] = 1257,
  [SMALL_STATE(73)] = 1264,
  [SMALL_STATE(74)] = 1271,
  [SMALL_STATE(75)] = 1278,
  [SMALL_STATE(76)] = 1285,
  [SMALL_STATE(77)] = 1290,
  [SMALL_STATE(78)] = 1294,
  [SMALL_STATE(79)] = 1298,
  [SMALL_STATE(80)] = 1302,
  [SMALL_STATE(81)] = 1306,
  [SMALL_STATE(82)] = 1310,
  [SMALL_STATE(83)] = 1314,
  [SMALL_STATE(84)] = 1318,
  [SMALL_STATE(85)] = 1322,
  [SMALL_STATE(86)] = 1326,
  [SMALL_STATE(87)] = 1330,
  [SMALL_STATE(88)] = 1334,
  [SMALL_STATE(89)] = 1338,
  [SMALL_STATE(90)] = 1342,
  [SMALL_STATE(91)] = 1346,
  [SMALL_STATE(92)] = 1350,
  [SMALL_STATE(93)] = 1354,
  [SMALL_STATE(94)] = 1358,
  [SMALL_STATE(95)] = 1362,
  [SMALL_STATE(96)] = 1366,
  [SMALL_STATE(97)] = 1370,
  [SMALL_STATE(98)] = 1374,
  [SMALL_STATE(99)] = 1378,
  [SMALL_STATE(100)] = 1382,
  [SMALL_STATE(101)] = 1386,
  [SMALL_STATE(102)] = 1390,
  [SMALL_STATE(103)] = 1394,
  [SMALL_STATE(104)] = 1398,
  [SMALL_STATE(105)] = 1402,
  [SMALL_STATE(106)] = 1406,
  [SMALL_STATE(107)] = 1410,
  [SMALL_STATE(108)] = 1414,
  [SMALL_STATE(109)] = 1418,
  [SMALL_STATE(110)] = 1422,
  [SMALL_STATE(111)] = 1426,
  [SMALL_STATE(112)] = 1430,
  [SMALL_STATE(113)] = 1434,
  [SMALL_STATE(114)] = 1438,
  [SMALL_STATE(115)] = 1442,
  [SMALL_STATE(116)] = 1446,
  [SMALL_STATE(117)] = 1450,
  [SMALL_STATE(118)] = 1454,
  [SMALL_STATE(119)] = 1458,
  [SMALL_STATE(120)] = 1462,
  [SMALL_STATE(121)] = 1466,
  [SMALL_STATE(122)] = 1470,
  [SMALL_STATE(123)] = 1474,
  [SMALL_STATE(124)] = 1478,
  [SMALL_STATE(125)] = 1482,
  [SMALL_STATE(126)] = 1486,
  [SMALL_STATE(127)] = 1490,
  [SMALL_STATE(128)] = 1494,
  [SMALL_STATE(129)] = 1498,
  [SMALL_STATE(130)] = 1502,
  [SMALL_STATE(131)] = 1506,
  [SMALL_STATE(132)] = 1510,
  [SMALL_STATE(133)] = 1514,
  [SMALL_STATE(134)] = 1518,
  [SMALL_STATE(135)] = 1522,
  [SMALL_STATE(136)] = 1526,
  [SMALL_STATE(137)] = 1530,
  [SMALL_STATE(138)] = 1534,
  [SMALL_STATE(139)] = 1538,
  [SMALL_STATE(140)] = 1542,
  [SMALL_STATE(141)] = 1546,
  [SMALL_STATE(142)] = 1550,
  [SMALL_STATE(143)] = 1554,
  [SMALL_STATE(144)] = 1558,
  [SMALL_STATE(145)] = 1562,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(132),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(124),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(98),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(100),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(119),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keybind_value_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keybind_value_repeat1, 2, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keybind_table, 2, 0, 4),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keybind_modifier, 2, 0, 5),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_palette_directive, 4, 0, 3),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_palette_directive, 4, 0, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_directive, 3, 0, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_directive, 3, 0, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_directive, 3, 0, 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_directive, 3, 0, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_theme_directive, 3, 0, 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_theme_directive, 3, 0, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_directive, 3, 0, 1),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_directive, 3, 0, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_palette_directive, 3, 0, 1),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_palette_directive, 3, 0, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_directive, 3, 0, 1),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_directive, 3, 0, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_directive, 4, 0, 3),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keybind_directive, 4, 0, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_directive, 3, 0, 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keybind_directive, 3, 0, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_directive, 4, 0, 3),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_directive, 4, 0, 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_directive, 4, 0, 3),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_directive, 4, 0, 3),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_directive, 4, 0, 7),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_directive, 4, 0, 7),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_theme_directive, 4, 0, 3),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_theme_directive, 4, 0, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_directive, 4, 0, 3),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_directive, 4, 0, 3),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_value, 2, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord, 2, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__snake_case_identifier, 1, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_chord_repeat1, 2, 0, 0),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chord_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord, 1, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__snake_case_identifier, 2, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__snake_case_identifier_repeat1, 2, 0, 0),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__snake_case_identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(131),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__snake_case_insensitive_identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__snake_case_insensitive_identifier_repeat1, 2, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_trigger, 1, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__kebab_case_identifier, 2, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_theme_value, 1, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__snake_case_insensitive_identifier, 1, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__kebab_case_identifier, 1, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 2, 0, 6),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__kebab_case_identifier_repeat1, 2, 0, 0),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__kebab_case_identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(113),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_trigger, 2, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_modifier, 2, 0, 5),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_modifier, 2, 0, 5),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_theme_value, 2, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__snake_case_insensitive_identifier, 2, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier_key, 1, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keybind_trigger_repeat1, 2, 0, 0),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keybind_trigger_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_theme_value_repeat1, 2, 0, 0),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_theme_value_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_theme_variant, 3, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_theme_variant, 3, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_action, 1, 0, 8),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_theme_value_repeat1, 2, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_qualifier, 2, 0, 6),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 1, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_value, 1, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_var_name, 1, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_value, 2, 0, 5),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_value, 1, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 2, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_value, 2, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_palette_value, 3, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 1, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adjustment, 1, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_value, 3, 0, 9),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [387] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_value, 1, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_property, 1, 0, 0),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_var_value, 1, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_value, 3, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3, 0, 10),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_value, 4, 0, 11),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_value, 5, 0, 12),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__action_arg_value, 1, 0, 0),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__loose_string, 1, 0, 0),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_action, 3, 0, 13),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__loose_string, 3, 0, 0),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
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
