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
#define STATE_COUNT 152
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 121
#define ALIAS_COUNT 0
#define TOKEN_COUNT 69
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 15

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
  anon_sym_chain = 37,
  anon_sym_clear = 38,
  anon_sym_SLASH = 39,
  anon_sym_all = 40,
  anon_sym_global = 41,
  anon_sym_local = 42,
  anon_sym_unconsumed = 43,
  anon_sym_performable = 44,
  anon_sym_COLON = 45,
  anon_sym_physical = 46,
  anon_sym_GT = 47,
  anon_sym_PLUS = 48,
  anon_sym_shift = 49,
  anon_sym_ctrl = 50,
  anon_sym_control = 51,
  anon_sym_alt = 52,
  anon_sym_option = 53,
  anon_sym_opt = 54,
  anon_sym_super = 55,
  anon_sym_cmd = 56,
  anon_sym_command = 57,
  aux_sym_key_token1 = 58,
  aux_sym__action_arg_value_token1 = 59,
  anon_sym_theme = 60,
  anon_sym_COMMA2 = 61,
  anon_sym_light = 62,
  anon_sym_dark = 63,
  aux_sym_theme_variant_token1 = 64,
  anon_sym_env = 65,
  anon_sym_initial_DASHcommand = 66,
  anon_sym_direct = 67,
  anon_sym_shell = 68,
  sym_document = 69,
  sym_directive = 70,
  sym_basic_directive = 71,
  sym__kebab_case_identifier = 72,
  sym__snake_case_identifier = 73,
  sym__snake_case_insensitive_identifier = 74,
  sym_property = 75,
  sym_value = 76,
  sym_tuple = 77,
  sym_boolean = 78,
  sym_adjustment = 79,
  sym_string = 80,
  sym__loose_string = 81,
  sym_color = 82,
  sym__raw_value = 83,
  sym_palette_directive = 84,
  sym_palette_value = 85,
  sym_path_property = 86,
  sym_path_directive = 87,
  sym_path_value = 88,
  sym_keybind_directive = 89,
  sym_chained_keybind_action = 90,
  sym_keybind_value = 91,
  sym_key_table_keybind = 92,
  sym_keybind = 93,
  sym_keybind_table = 94,
  sym_keybind_modifier = 95,
  sym_key_qualifier = 96,
  sym_keybind_trigger = 97,
  sym_chord = 98,
  sym_modifier_key = 99,
  sym_key = 100,
  sym_keybind_action = 101,
  sym__action_arg_value = 102,
  sym_theme_directive = 103,
  sym_theme_value = 104,
  sym_theme_variant = 105,
  sym_env_directive = 106,
  sym_env_value = 107,
  sym_env_var_name = 108,
  sym_env_var_value = 109,
  sym_command_directive = 110,
  sym_command_value = 111,
  sym_command_modifier = 112,
  aux_sym_document_repeat1 = 113,
  aux_sym__kebab_case_identifier_repeat1 = 114,
  aux_sym__snake_case_identifier_repeat1 = 115,
  aux_sym__snake_case_insensitive_identifier_repeat1 = 116,
  aux_sym_key_table_keybind_repeat1 = 117,
  aux_sym_keybind_trigger_repeat1 = 118,
  aux_sym_chord_repeat1 = 119,
  aux_sym_theme_value_repeat1 = 120,
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
  [anon_sym_chain] = "chain",
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
  [sym_chained_keybind_action] = "chained_keybind_action",
  [sym_keybind_value] = "keybind_value",
  [sym_key_table_keybind] = "key_table_keybind",
  [sym_keybind] = "keybind",
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
  [aux_sym_key_table_keybind_repeat1] = "key_table_keybind_repeat1",
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
  [anon_sym_chain] = anon_sym_chain,
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
  [sym_chained_keybind_action] = sym_chained_keybind_action,
  [sym_keybind_value] = sym_keybind_value,
  [sym_key_table_keybind] = sym_key_table_keybind,
  [sym_keybind] = sym_keybind,
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
  [aux_sym_key_table_keybind_repeat1] = aux_sym_key_table_keybind_repeat1,
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
  [anon_sym_chain] = {
    .visible = true,
    .named = false,
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
  [sym_chained_keybind_action] = {
    .visible = true,
    .named = true,
  },
  [sym_keybind_value] = {
    .visible = true,
    .named = true,
  },
  [sym_key_table_keybind] = {
    .visible = true,
    .named = true,
  },
  [sym_keybind] = {
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
  [aux_sym_key_table_keybind_repeat1] = {
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
  field_chain_operator = 4,
  field_left = 5,
  field_modifier = 6,
  field_property = 7,
  field_qualifier = 8,
  field_right = 9,
  field_table = 10,
  field_trigger = 11,
  field_value = 12,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_action] = "action",
  [field_action_name] = "action_name",
  [field_argument] = "argument",
  [field_chain_operator] = "chain_operator",
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
  [14] = {.index = 17, .length = 2},
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
    {field_chain_operator, 0},
    {field_chain_operator, 1},
  [9] =
    {field_action, 2},
    {field_trigger, 0},
  [11] =
    {field_left, 0},
    {field_right, 2},
  [13] =
    {field_action, 3},
    {field_trigger, 1},
  [15] =
    {field_action_name, 0},
    {field_argument, 2},
  [17] =
    {field_action, 4},
    {field_trigger, 2},
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
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
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
        '"', 550,
        '#', 572,
        '\'', 554,
        '+', 650,
        ',', 532,
        '-', 366,
        '/', 611,
        ':', 642,
        '=', 595,
        '>', 649,
        '?', 600,
        '_', 455,
        'a', 287,
        'c', 273,
        'd', 226,
        'f', 230,
        'g', 288,
        'l', 277,
        'o', 327,
        'p', 264,
        's', 274,
        't', 329,
        'u', 315,
        'b', 363,
        'e', 363,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(203);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (('h' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (lookahead != 0) ADVANCE(558);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 205,
        '\r', 1,
        '#', 3,
        ',', 843,
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
        '\r', 531,
        '"', 550,
        '#', 572,
        '\'', 554,
        'f', 559,
        't', 565,
        '+', 566,
        '-', 566,
        '\t', 531,
        0x0b, 531,
        '\f', 531,
        ' ', 531,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(546);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(558);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '\n', 207,
        '\r', 6,
        '"', 550,
        '\'', 554,
        'a', 734,
        'c', 729,
        'g', 741,
        'l', 752,
        'o', 758,
        'p', 724,
        's', 730,
        'u', 750,
        '#', 838,
        '?', 838,
        '+', 706,
        '/', 706,
        ':', 558,
        '=', 558,
        '>', 558,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if (lookahead != 0) ADVANCE(838);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '\n', 207,
        '\r', 6,
        '"', 550,
        '\'', 554,
        'a', 490,
        'c', 485,
        'g', 497,
        'l', 508,
        'o', 514,
        'p', 480,
        's', 486,
        'u', 506,
        '#', 530,
        '?', 530,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(6);
      if (lookahead == '+' ||
          lookahead == '/' ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '>') ADVANCE(558);
      if (lookahead != 0) ADVANCE(530);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(208);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '"') ADVANCE(550);
      if (lookahead == '\'') ADVANCE(554);
      if (lookahead == 'd') ADVANCE(564);
      if (lookahead == 's') ADVANCE(562);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(7);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '?') ADVANCE(558);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(209);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == '"') ADVANCE(550);
      if (lookahead == '\'') ADVANCE(554);
      if (lookahead == 'd') ADVANCE(560);
      if (lookahead == 'l') ADVANCE(563);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(8);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '?') ADVANCE(558);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(210);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '"') ADVANCE(550);
      if (lookahead == '\'') ADVANCE(554);
      if (lookahead == '?') ADVANCE(600);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(9);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(558);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(211);
      if (lookahead == '\r') ADVANCE(11);
      if (lookahead == ',') ADVANCE(532);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(211);
      if (lookahead == '\r') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(212);
      if (lookahead == '\r') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(594);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(550);
      if (lookahead == '#') ADVANCE(572);
      if (lookahead == '\'') ADVANCE(554);
      if (lookahead == 'f') ADVANCE(559);
      if (lookahead == 't') ADVANCE(565);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(566);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(546);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(558);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(550);
      if (lookahead == '#') ADVANCE(572);
      if (lookahead == '\'') ADVANCE(554);
      if (lookahead == 'f') ADVANCE(561);
      if (lookahead == 't') ADVANCE(565);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(566);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(558);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(550);
      if (lookahead == '\'') ADVANCE(554);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '?') ADVANCE(558);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(551);
      if (lookahead == '\'') ADVANCE(555);
      if (lookahead == 'f') ADVANCE(579);
      if (lookahead == 't') ADVANCE(583);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(16);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(587);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(839);
      if (lookahead != 0) ADVANCE(589);
      END_STATE();
    case 17:
      if (lookahead == '+') ADVANCE(650);
      if (lookahead == '=') ADVANCE(595);
      if (lookahead == '>') ADVANCE(649);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 18:
      if (lookahead == '+') ADVANCE(650);
      if (lookahead == '>') ADVANCE(649);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(366);
      if (lookahead == '=') ADVANCE(214);
      if (lookahead == 'd') ADVANCE(41);
      if (lookahead == 'l') ADVANCE(95);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(548);
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
        '=', 595,
        '>', 649,
        'a', 797,
        'c', 807,
        'g', 804,
        'l', 816,
        'o', 822,
        'p', 788,
        's', 794,
        'u', 814,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      if (lookahead != 0 &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(706);
      END_STATE();
    case 27:
      if (lookahead == '=') ADVANCE(214);
      if (lookahead == 'a') ADVANCE(806);
      if (lookahead == 'c') ADVANCE(807);
      if (lookahead == 'o') ADVANCE(822);
      if (lookahead == 'p') ADVANCE(793);
      if (lookahead == 's') ADVANCE(794);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      if (lookahead != 0 &&
          (lookahead < '0' || ':' < lookahead) &&
          lookahead != '=' &&
          lookahead != '>') ADVANCE(706);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(548);
      END_STATE();
    case 30:
      ADVANCE_MAP(
        '>', 649,
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
      if (lookahead == 'd') ADVANCE(699);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(601);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(854);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(693);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(630);
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
      if (lookahead == 'e') ADVANCE(841);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(590);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(596);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(599);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(636);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(533);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(537);
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
      if (lookahead == 'k') ADVANCE(847);
      END_STATE();
    case 102:
      if (lookahead == 'l') ADVANCE(103);
      END_STATE();
    case 103:
      if (lookahead == 'l') ADVANCE(612);
      if (lookahead == 't') ADVANCE(669);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(657);
      END_STATE();
    case 105:
      if (lookahead == 'l') ADVANCE(624);
      END_STATE();
    case 106:
      if (lookahead == 'l') ADVANCE(618);
      END_STATE();
    case 107:
      if (lookahead == 'l') ADVANCE(663);
      END_STATE();
    case 108:
      if (lookahead == 'l') ADVANCE(643);
      END_STATE();
    case 109:
      if (lookahead == 'l') ADVANCE(858);
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
      if (lookahead == 'n') ADVANCE(675);
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
      if (lookahead == 'r') ADVANCE(598);
      END_STATE();
    case 154:
      if (lookahead == 'r') ADVANCE(687);
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
      if (lookahead == 's') ADVANCE(597);
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
      if (lookahead == 't') ADVANCE(669);
      END_STATE();
    case 173:
      if (lookahead == 't') ADVANCE(686);
      END_STATE();
    case 174:
      if (lookahead == 't') ADVANCE(651);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(855);
      END_STATE();
    case 176:
      if (lookahead == 't') ADVANCE(844);
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
      if (lookahead == 'v') ADVANCE(852);
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
          lookahead == ' ') ADVANCE(586);
      if (lookahead != 0) ADVANCE(589);
      END_STATE();
    case 190:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(549);
      END_STATE();
    case 191:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(547);
      END_STATE();
    case 192:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(577);
      END_STATE();
    case 193:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(573);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 198:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 199:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '0' || ':' < lookahead) &&
          lookahead != '=' &&
          lookahead != '>') ADVANCE(706);
      END_STATE();
    case 200:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(462);
      END_STATE();
    case 201:
      if (eof) ADVANCE(204);
      ADVANCE_MAP(
        '\n', 205,
        '\r', 1,
        '#', 3,
        ',', 843,
        '/', 611,
        ':', 642,
        '=', 595,
        '_', 455,
        'b', 228,
        'c', 320,
        'e', 311,
        'g', 347,
        'i', 312,
        'k', 256,
        'p', 229,
        't', 275,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 202:
      if (eof) ADVANCE(204);
      ADVANCE_MAP(
        '\n', 205,
        '\r', 1,
        '#', 3,
        ',', 843,
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
        '"', 550,
        '#', 572,
        '\'', 554,
        '+', 650,
        ',', 843,
        '=', 214,
        '>', 649,
        '?', 600,
        'a', 405,
        'c', 399,
        'd', 371,
        'f', 370,
        'g', 406,
        'l', 401,
        'o', 431,
        'p', 393,
        's', 398,
        't', 433,
        'u', 422,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(203);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(367);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (lookahead != 0) ADVANCE(558);
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
      if (lookahead == '\r') ADVANCE(531);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(566);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(541);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == '-') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == '-') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == '-') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == '-') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == '.') ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(462);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(225);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == '.') ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(457);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == '.') ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(458);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == '.') ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(459);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == '.') ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(460);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(223);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == '.') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(330);
      if (lookahead == 'i') ADVANCE(335);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(362);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(290);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(362);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(240);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(292);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(314);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(332);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(294);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(296);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'b') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'b') ADVANCE(299);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'b') ADVANCE(237);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'c') ADVANCE(322);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'c') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'c') ADVANCE(234);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'c') ADVANCE(346);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'c') ADVANCE(238);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'd') ADVANCE(696);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'd') ADVANCE(702);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'd') ADVANCE(633);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'd') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'd') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'd') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(534);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(538);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(639);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(842);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(236);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(298);
      if (lookahead == 'i') ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(249);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(245);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(331);
      if (lookahead == 'h') ADVANCE(358);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(333);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'f') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'f') ADVANCE(326);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'f') ADVANCE(345);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'g') ADVANCE(276);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'g') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'g') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'h') ADVANCE(227);
      if (lookahead == 'l') ADVANCE(259);
      if (lookahead == 'm') ADVANCE(247);
      if (lookahead == 'o') ADVANCE(301);
      if (lookahead == 't') ADVANCE(334);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(460);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(362);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'h') ADVANCE(261);
      if (lookahead == 'u') ADVANCE(328);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'h') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'h') ADVANCE(344);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'i') ADVANCE(270);
      if (lookahead == 'o') ADVANCE(244);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'i') ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'i') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'i') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'i') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'i') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'i') ADVANCE(246);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'k') ADVANCE(848);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'k') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'k') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(289);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(362);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(319);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(615);
      if (lookahead == 't') ADVANCE(672);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(342);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(361);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(660);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(859);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(621);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(666);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(646);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(293);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'm') ADVANCE(305);
      if (lookahead == 'n') ADVANCE(352);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'm') ADVANCE(303);
      if (lookahead == 'n') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'm') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'm') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'm') ADVANCE(235);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'm') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'm') ADVANCE(231);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'm') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(604);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(678);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(248);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(242);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(339);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(241);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(302);
      if (lookahead == 'u') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(317);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(310);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(338);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'p') ADVANCE(343);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'p') ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(354);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(361);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(690);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(291);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(263);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(325);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 's') ADVANCE(353);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 's') ADVANCE(283);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 's') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 's') ADVANCE(254);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 't') ADVANCE(683);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 't') ADVANCE(845);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 't') ADVANCE(654);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 't') ADVANCE(856);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 't') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 't') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 't') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 't') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 't') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 't') ADVANCE(337);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'u') ADVANCE(308);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'u') ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'u') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'v') ADVANCE(853);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'y') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (lookahead == 'y') ADVANCE(340);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(364);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(359);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(360);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(361);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(362);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym__kebab_case_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == '.') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(367);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(402);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(377);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(434);
      if (lookahead == 'i') ADVANCE(436);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(421);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(437);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'a') ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'b') ADVANCE(416);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'b') ADVANCE(375);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'c') ADVANCE(427);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'c') ADVANCE(448);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'c') ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'c') ADVANCE(376);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'd') ADVANCE(697);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'd') ADVANCE(703);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'd') ADVANCE(634);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(535);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(539);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(640);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(374);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(385);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(380);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(415);
      if (lookahead == 'i') ADVANCE(396);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(435);
      if (lookahead == 'h') ADVANCE(452);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'e') ADVANCE(438);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'f') ADVANCE(430);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'f') ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'g') ADVANCE(400);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'h') ADVANCE(392);
      if (lookahead == 'u') ADVANCE(432);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'h') ADVANCE(368);
      if (lookahead == 'l') ADVANCE(389);
      if (lookahead == 'm') ADVANCE(383);
      if (lookahead == 'o') ADVANCE(417);
      if (lookahead == 't') ADVANCE(439);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'h') ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'i') ADVANCE(397);
      if (lookahead == 'o') ADVANCE(381);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'i') ADVANCE(423);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'i') ADVANCE(382);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'k') ADVANCE(849);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(616);
      if (lookahead == 't') ADVANCE(673);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(661);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(860);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(622);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(667);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(647);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(411);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'l') ADVANCE(388);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'm') ADVANCE(418);
      if (lookahead == 'n') ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'm') ADVANCE(372);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'm') ADVANCE(369);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'm') ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(384);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(605);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(679);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'n') ADVANCE(442);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(424);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(413);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'o') ADVANCE(441);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'p') ADVANCE(445);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'p') ADVANCE(394);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(451);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(404);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(395);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(391);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(609);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(691);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(409);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(429);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'r') ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 's') ADVANCE(450);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 's') ADVANCE(403);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 's') ADVANCE(387);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 't') ADVANCE(684);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 't') ADVANCE(846);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 't') ADVANCE(655);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 't') ADVANCE(857);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 't') ADVANCE(440);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'u') ADVANCE(420);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'u') ADVANCE(386);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (lookahead == 'y') ADVANCE(443);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym__snake_case_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym__snake_case_insensitive_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym__snake_case_insensitive_identifier_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(462);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(462);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym__snake_case_insensitive_identifier_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(457);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(462);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym__snake_case_insensitive_identifier_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(458);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(462);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym__snake_case_insensitive_identifier_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(459);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(462);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym__snake_case_insensitive_identifier_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(460);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(462);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym__snake_case_insensitive_identifier_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(462);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'a') ADVANCE(487);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'a') ADVANCE(470);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'a') ADVANCE(517);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'a') ADVANCE(493);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'a') ADVANCE(505);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'a') ADVANCE(494);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'a') ADVANCE(496);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'b') ADVANCE(498);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'b') ADVANCE(468);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'c') ADVANCE(510);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'c') ADVANCE(466);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'c') ADVANCE(469);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'd') ADVANCE(698);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'd') ADVANCE(705);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'd') ADVANCE(635);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'e') ADVANCE(641);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'e') ADVANCE(465);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'e') ADVANCE(516);
      if (lookahead == 'h') ADVANCE(528);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'e') ADVANCE(477);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'e') ADVANCE(518);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'f') ADVANCE(525);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'f') ADVANCE(513);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'h') ADVANCE(463);
      if (lookahead == 'l') ADVANCE(479);
      if (lookahead == 'm') ADVANCE(475);
      if (lookahead == 'o') ADVANCE(499);
      if (lookahead == 't') ADVANCE(519);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'h') ADVANCE(488);
      if (lookahead == 'u') ADVANCE(515);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'i') ADVANCE(503);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'i') ADVANCE(483);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'i') ADVANCE(474);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'l') ADVANCE(491);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'l') ADVANCE(617);
      if (lookahead == 't') ADVANCE(674);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'l') ADVANCE(662);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'l') ADVANCE(629);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'l') ADVANCE(623);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'l') ADVANCE(668);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'l') ADVANCE(648);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'l') ADVANCE(509);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'l') ADVANCE(478);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'm') ADVANCE(501);
      if (lookahead == 'n') ADVANCE(526);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'm') ADVANCE(481);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'm') ADVANCE(467);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'm') ADVANCE(464);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'n') ADVANCE(606);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'n') ADVANCE(680);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'n') ADVANCE(476);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'n') ADVANCE(472);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'n') ADVANCE(522);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'o') ADVANCE(473);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'o') ADVANCE(471);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'o') ADVANCE(507);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'o') ADVANCE(504);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'o') ADVANCE(495);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'o') ADVANCE(521);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'p') ADVANCE(524);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'p') ADVANCE(482);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'r') ADVANCE(484);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'r') ADVANCE(610);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'r') ADVANCE(692);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'r') ADVANCE(492);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'r') ADVANCE(512);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'r') ADVANCE(502);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 's') ADVANCE(527);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 's') ADVANCE(489);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 't') ADVANCE(685);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 't') ADVANCE(656);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 't') ADVANCE(520);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'u') ADVANCE(500);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (lookahead == 'y') ADVANCE(523);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__key_table_identifier);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == '\n') ADVANCE(206);
      if (lookahead == '\r') ADVANCE(531);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(566);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(541);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_true);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_true);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(589);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_false);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_false);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(589);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(575);
      if (lookahead == '.') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(541);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(575);
      if (lookahead == '.') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(574);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(573);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(575);
      if (lookahead == '.') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(542);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(193);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(575);
      if (lookahead == '.') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(194);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(575);
      if (lookahead == '.') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(544);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(195);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(575);
      if (lookahead == '.') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(196);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(547);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(548);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(549);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(589);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(552);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"') ADVANCE(553);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(553);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(589);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(556);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '\'') ADVANCE(557);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'') ADVANCE(557);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_string_token3);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'a') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(196);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'a') ADVANCE(157);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'a') ADVANCE(113);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'h') ADVANCE(76);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(576);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(196);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym__loose_string_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(569);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym__loose_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(569);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym__loose_string_token2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(571);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym__loose_string_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(571);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_color_token1);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (lookahead == '%') ADVANCE(575);
      if (lookahead == '.') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(541);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_percent_adjustment);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_numeric_adjustment);
      if (lookahead == '%') ADVANCE(575);
      if (lookahead == '.') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(576);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_numeric_adjustment);
      if (lookahead == '%') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(577);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      ADVANCE_MAP(
        '"', 551,
        '\'', 555,
        'f', 579,
        't', 583,
        '+', 587,
        '-', 587,
        '\t', 578,
        0x0b, 578,
        '\f', 578,
        ' ', 578,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(839);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(589);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (lookahead == 'a') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(589);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (lookahead == 'e') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(589);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (lookahead == 'e') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(589);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (lookahead == 'l') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(589);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (lookahead == 'r') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(589);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (lookahead == 's') ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(589);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (lookahead == 'u') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(589);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(586);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(589);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(839);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(589);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(840);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(589);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym__raw_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(589);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_palette);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_palette);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_palette_value_token1);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_palette_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(592);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_palette_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(593);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_config_DASHfile);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_gtk_DASHcustom_DASHcss);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_custom_DASHshader);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_background_DASHimage);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_keybind);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_keybind);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_chain);
      if (lookahead == '_') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_chain);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_chain);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_chain);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_clear);
      if (lookahead == '_') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_clear);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_clear);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_clear);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_all);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_all);
      if (lookahead == '_') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_all);
      if (lookahead == '_') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_all);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_all);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_all);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_global);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_global);
      if (lookahead == '_') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_global);
      if (lookahead == '_') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_global);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_global);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_global);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_local);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_local);
      if (lookahead == '_') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_local);
      if (lookahead == '_') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_local);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_local);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_local);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_unconsumed);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_unconsumed);
      if (lookahead == '_') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_unconsumed);
      if (lookahead == '_') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_unconsumed);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_unconsumed);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_unconsumed);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_performable);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_performable);
      if (lookahead == '_') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_performable);
      if (lookahead == '_') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_performable);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_performable);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_performable);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_physical);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_physical);
      if (lookahead == '_') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_physical);
      if (lookahead == '_') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_physical);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_physical);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_physical);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_shift);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_shift);
      if (lookahead == '_') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_shift);
      if (lookahead == '_') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_shift);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_shift);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_shift);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_ctrl);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_ctrl);
      if (lookahead == '_') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_ctrl);
      if (lookahead == '_') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_ctrl);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_ctrl);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_ctrl);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_control);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_control);
      if (lookahead == '_') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_control);
      if (lookahead == '_') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_control);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_control);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_control);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_alt);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_alt);
      if (lookahead == '_') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_alt);
      if (lookahead == '_') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_alt);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_alt);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_alt);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_option);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_option);
      if (lookahead == '_') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_option);
      if (lookahead == '_') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_option);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_option);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_option);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_opt);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 'i') ADVANCE(755);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_opt);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'i') ADVANCE(819);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_opt);
      if (lookahead == 'i') ADVANCE(324);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_opt);
      if (lookahead == 'i') ADVANCE(428);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_opt);
      if (lookahead == 'i') ADVANCE(511);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_opt);
      if (lookahead == 'i') ADVANCE(150);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_super);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_super);
      if (lookahead == '_') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_super);
      if (lookahead == '_') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_super);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_super);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_super);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_cmd);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_cmd);
      if (lookahead == '_') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_cmd);
      if (lookahead == '_') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_cmd);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_cmd);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_cmd);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_command);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_command);
      if (lookahead == '_') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_command);
      if (lookahead == '_') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_command);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_command);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_command);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_command);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_key_token1);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 'a') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 'a') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 'a') ADVANCE(761);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 'a') ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 'a') ADVANCE(749);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 'a') ADVANCE(738);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 'a') ADVANCE(740);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 'b') ADVANCE(742);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 'b') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 'c') ADVANCE(754);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 'c') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 'c') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 'd') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 'd') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 'd') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 'e') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 'e') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 'e') ADVANCE(760);
      if (lookahead == 'h') ADVANCE(772);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 'e') ADVANCE(721);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 'e') ADVANCE(762);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 'f') ADVANCE(769);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 'f') ADVANCE(757);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 'h') ADVANCE(707);
      if (lookahead == 'l') ADVANCE(723);
      if (lookahead == 'm') ADVANCE(719);
      if (lookahead == 'o') ADVANCE(743);
      if (lookahead == 't') ADVANCE(763);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 'h') ADVANCE(732);
      if (lookahead == 'u') ADVANCE(759);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 'i') ADVANCE(747);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 'i') ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 'i') ADVANCE(718);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 'l') ADVANCE(735);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 'l') ADVANCE(613);
      if (lookahead == 't') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 'l') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 'l') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 'l') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 'l') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 'l') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 'l') ADVANCE(753);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 'l') ADVANCE(722);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 'm') ADVANCE(745);
      if (lookahead == 'n') ADVANCE(770);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 'm') ADVANCE(725);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 'm') ADVANCE(711);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 'm') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 'n') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 'n') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 'n') ADVANCE(720);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 'n') ADVANCE(716);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 'n') ADVANCE(766);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 'o') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 'o') ADVANCE(715);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 'o') ADVANCE(751);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 'o') ADVANCE(748);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 'o') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 'o') ADVANCE(765);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 'p') ADVANCE(768);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 'p') ADVANCE(726);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 'r') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 'r') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 'r') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 'r') ADVANCE(736);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 'r') ADVANCE(756);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 'r') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 's') ADVANCE(771);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 's') ADVANCE(733);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 't') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 't') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 't') ADVANCE(764);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 'u') ADVANCE(744);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 'y') ADVANCE(767);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'a') ADVANCE(779);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'a') ADVANCE(813);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'a') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'a') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'a') ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'b') ADVANCE(805);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'b') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'c') ADVANCE(776);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'c') ADVANCE(818);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'c') ADVANCE(778);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'd') ADVANCE(695);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'd') ADVANCE(701);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'd') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'e') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'e') ADVANCE(824);
      if (lookahead == 'h') ADVANCE(836);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'e') ADVANCE(786);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'e') ADVANCE(825);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'f') ADVANCE(833);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'f') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'h') ADVANCE(836);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'h') ADVANCE(795);
      if (lookahead == 'u') ADVANCE(823);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'i') ADVANCE(791);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'i') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'l') ADVANCE(798);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'l') ADVANCE(614);
      if (lookahead == 't') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'l') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'l') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'l') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'l') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'l') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'l') ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'l') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'l') ADVANCE(831);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'm') ADVANCE(784);
      if (lookahead == 'o') ADVANCE(808);
      if (lookahead == 't') ADVANCE(826);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'm') ADVANCE(809);
      if (lookahead == 'n') ADVANCE(834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'm') ADVANCE(775);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'm') ADVANCE(789);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'm') ADVANCE(774);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'n') ADVANCE(677);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'n') ADVANCE(785);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'n') ADVANCE(782);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'n') ADVANCE(829);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'o') ADVANCE(781);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'o') ADVANCE(780);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'o') ADVANCE(815);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'o') ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'o') ADVANCE(828);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'o') ADVANCE(802);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'p') ADVANCE(832);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'p') ADVANCE(790);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'r') ADVANCE(792);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'r') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'r') ADVANCE(799);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'r') ADVANCE(821);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'r') ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 's') ADVANCE(835);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 's') ADVANCE(796);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 't') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 't') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 't') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 't') ADVANCE(827);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'u') ADVANCE(810);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'y') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '_') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if ((!eof && set_contains(sym__key_table_identifier_character_set_1, 9, lookahead))) ADVANCE(530);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym__action_arg_value_token1);
      if (lookahead == '.') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(839);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym__action_arg_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(840);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(anon_sym_theme);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(anon_sym_theme);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(anon_sym_COMMA2);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(anon_sym_light);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(anon_sym_light);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(anon_sym_dark);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(anon_sym_dark);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_theme_variant_token1);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(850);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ',') ADVANCE(851);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_theme_variant_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ',') ADVANCE(851);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(anon_sym_env);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(anon_sym_env);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(anon_sym_initial_DASHcommand);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(anon_sym_direct);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(anon_sym_direct);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(anon_sym_direct);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(anon_sym_shell);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(anon_sym_shell);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(anon_sym_shell);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
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
  [8] = {.lex_state = 26},
  [9] = {.lex_state = 4},
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
  [24] = {.lex_state = 201},
  [25] = {.lex_state = 27},
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
  [39] = {.lex_state = 17},
  [40] = {.lex_state = 201},
  [41] = {.lex_state = 17},
  [42] = {.lex_state = 201},
  [43] = {.lex_state = 201},
  [44] = {.lex_state = 13},
  [45] = {.lex_state = 201},
  [46] = {.lex_state = 19},
  [47] = {.lex_state = 12},
  [48] = {.lex_state = 201},
  [49] = {.lex_state = 201},
  [50] = {.lex_state = 19},
  [51] = {.lex_state = 19},
  [52] = {.lex_state = 17},
  [53] = {.lex_state = 17},
  [54] = {.lex_state = 17},
  [55] = {.lex_state = 26},
  [56] = {.lex_state = 15},
  [57] = {.lex_state = 19},
  [58] = {.lex_state = 201},
  [59] = {.lex_state = 201},
  [60] = {.lex_state = 17},
  [61] = {.lex_state = 17},
  [62] = {.lex_state = 17},
  [63] = {.lex_state = 26},
  [64] = {.lex_state = 17},
  [65] = {.lex_state = 17},
  [66] = {.lex_state = 201},
  [67] = {.lex_state = 201},
  [68] = {.lex_state = 17},
  [69] = {.lex_state = 26},
  [70] = {.lex_state = 201},
  [71] = {.lex_state = 19},
  [72] = {.lex_state = 189},
  [73] = {.lex_state = 10},
  [74] = {.lex_state = 201},
  [75] = {.lex_state = 26},
  [76] = {.lex_state = 10},
  [77] = {.lex_state = 201},
  [78] = {.lex_state = 201},
  [79] = {.lex_state = 201},
  [80] = {.lex_state = 201},
  [81] = {.lex_state = 27},
  [82] = {.lex_state = 27},
  [83] = {.lex_state = 199},
  [84] = {.lex_state = 201},
  [85] = {.lex_state = 201},
  [86] = {.lex_state = 201},
  [87] = {.lex_state = 201},
  [88] = {.lex_state = 201},
  [89] = {.lex_state = 27},
  [90] = {.lex_state = 201},
  [91] = {.lex_state = 201},
  [92] = {.lex_state = 552},
  [93] = {.lex_state = 201},
  [94] = {.lex_state = 556},
  [95] = {.lex_state = 201},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 201},
  [98] = {.lex_state = 850},
  [99] = {.lex_state = 201},
  [100] = {.lex_state = 27},
  [101] = {.lex_state = 201},
  [102] = {.lex_state = 200},
  [103] = {.lex_state = 201},
  [104] = {.lex_state = 201},
  [105] = {.lex_state = 201},
  [106] = {.lex_state = 201},
  [107] = {.lex_state = 201},
  [108] = {.lex_state = 19},
  [109] = {.lex_state = 201},
  [110] = {.lex_state = 201},
  [111] = {.lex_state = 201},
  [112] = {.lex_state = 201},
  [113] = {.lex_state = 27},
  [114] = {.lex_state = 201},
  [115] = {.lex_state = 201},
  [116] = {.lex_state = 201},
  [117] = {.lex_state = 201},
  [118] = {.lex_state = 27},
  [119] = {.lex_state = 201},
  [120] = {.lex_state = 201},
  [121] = {.lex_state = 201},
  [122] = {.lex_state = 27},
  [123] = {.lex_state = 201},
  [124] = {.lex_state = 201},
  [125] = {.lex_state = 27},
  [126] = {.lex_state = 197},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 201},
  [131] = {.lex_state = 201},
  [132] = {.lex_state = 201},
  [133] = {.lex_state = 201},
  [134] = {.lex_state = 197},
  [135] = {.lex_state = 27},
  [136] = {.lex_state = 199},
  [137] = {.lex_state = 201},
  [138] = {.lex_state = 201},
  [139] = {.lex_state = 201},
  [140] = {.lex_state = 201},
  [141] = {.lex_state = 201},
  [142] = {.lex_state = 568},
  [143] = {.lex_state = 570},
  [144] = {.lex_state = 201},
  [145] = {.lex_state = 201},
  [146] = {.lex_state = 201},
  [147] = {.lex_state = 201},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 201},
  [151] = {.lex_state = 201},
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
    [anon_sym_chain] = ACTIONS(1),
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
    [sym_document] = STATE(96),
    [sym_directive] = STATE(4),
    [sym_basic_directive] = STATE(14),
    [sym__kebab_case_identifier] = STATE(82),
    [sym_property] = STATE(89),
    [sym_palette_directive] = STATE(14),
    [sym_path_property] = STATE(135),
    [sym_path_directive] = STATE(14),
    [sym_keybind_directive] = STATE(14),
    [sym_theme_directive] = STATE(14),
    [sym_env_directive] = STATE(14),
    [sym_command_directive] = STATE(14),
    [aux_sym_document_repeat1] = STATE(4),
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
  [0] = 19,
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
      anon_sym_chain,
    ACTIONS(35), 1,
      anon_sym_clear,
    ACTIONS(39), 1,
      anon_sym_physical,
    ACTIONS(43), 1,
      aux_sym_key_token1,
    STATE(5), 1,
      sym_keybind_table,
    STATE(69), 1,
      sym_chord,
    STATE(124), 1,
      sym_keybind_value,
    STATE(136), 1,
      sym_key_qualifier,
    STATE(141), 1,
      sym_keybind_trigger,
    STATE(6), 2,
      sym_keybind_modifier,
      aux_sym_key_table_keybind_repeat1,
    STATE(38), 2,
      sym_modifier_key,
      sym_key,
    STATE(104), 4,
      sym_string,
      sym_chained_keybind_action,
      sym_key_table_keybind,
      sym_keybind,
    ACTIONS(37), 5,
      anon_sym_all,
      anon_sym_global,
      anon_sym_local,
      anon_sym_unconsumed,
      anon_sym_performable,
    ACTIONS(41), 9,
      anon_sym_shift,
      anon_sym_ctrl,
      anon_sym_control,
      anon_sym_alt,
      anon_sym_option,
      anon_sym_opt,
      anon_sym_super,
      anon_sym_cmd,
      anon_sym_command,
  [75] = 15,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 1,
      aux_sym_document_token1,
    ACTIONS(50), 1,
      sym_comment,
    ACTIONS(53), 1,
      aux_sym__kebab_case_identifier_token1,
    ACTIONS(56), 1,
      anon_sym_palette,
    ACTIONS(62), 1,
      anon_sym_keybind,
    ACTIONS(68), 1,
      anon_sym_theme,
    ACTIONS(71), 1,
      anon_sym_env,
    STATE(82), 1,
      sym__kebab_case_identifier,
    STATE(89), 1,
      sym_property,
    STATE(135), 1,
      sym_path_property,
    ACTIONS(65), 2,
      anon_sym_command,
      anon_sym_initial_DASHcommand,
    STATE(3), 2,
      sym_directive,
      aux_sym_document_repeat1,
    ACTIONS(59), 4,
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
  [132] = 15,
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
    ACTIONS(74), 1,
      ts_builtin_sym_end,
    ACTIONS(76), 1,
      aux_sym_document_token1,
    ACTIONS(78), 1,
      sym_comment,
    STATE(82), 1,
      sym__kebab_case_identifier,
    STATE(89), 1,
      sym_property,
    STATE(135), 1,
      sym_path_property,
    ACTIONS(17), 2,
      anon_sym_command,
      anon_sym_initial_DASHcommand,
    STATE(3), 2,
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
  [189] = 9,
    ACTIONS(39), 1,
      anon_sym_physical,
    ACTIONS(43), 1,
      aux_sym_key_token1,
    STATE(69), 1,
      sym_chord,
    STATE(85), 1,
      sym_keybind_trigger,
    STATE(136), 1,
      sym_key_qualifier,
    STATE(7), 2,
      sym_keybind_modifier,
      aux_sym_key_table_keybind_repeat1,
    STATE(38), 2,
      sym_modifier_key,
      sym_key,
    ACTIONS(37), 5,
      anon_sym_all,
      anon_sym_global,
      anon_sym_local,
      anon_sym_unconsumed,
      anon_sym_performable,
    ACTIONS(41), 9,
      anon_sym_shift,
      anon_sym_ctrl,
      anon_sym_control,
      anon_sym_alt,
      anon_sym_option,
      anon_sym_opt,
      anon_sym_super,
      anon_sym_cmd,
      anon_sym_command,
  [231] = 9,
    ACTIONS(39), 1,
      anon_sym_physical,
    ACTIONS(43), 1,
      aux_sym_key_token1,
    STATE(69), 1,
      sym_chord,
    STATE(93), 1,
      sym_keybind_trigger,
    STATE(136), 1,
      sym_key_qualifier,
    STATE(8), 2,
      sym_keybind_modifier,
      aux_sym_key_table_keybind_repeat1,
    STATE(38), 2,
      sym_modifier_key,
      sym_key,
    ACTIONS(37), 5,
      anon_sym_all,
      anon_sym_global,
      anon_sym_local,
      anon_sym_unconsumed,
      anon_sym_performable,
    ACTIONS(41), 9,
      anon_sym_shift,
      anon_sym_ctrl,
      anon_sym_control,
      anon_sym_alt,
      anon_sym_option,
      anon_sym_opt,
      anon_sym_super,
      anon_sym_cmd,
      anon_sym_command,
  [273] = 9,
    ACTIONS(39), 1,
      anon_sym_physical,
    ACTIONS(43), 1,
      aux_sym_key_token1,
    STATE(69), 1,
      sym_chord,
    STATE(136), 1,
      sym_key_qualifier,
    STATE(151), 1,
      sym_keybind_trigger,
    STATE(8), 2,
      sym_keybind_modifier,
      aux_sym_key_table_keybind_repeat1,
    STATE(38), 2,
      sym_modifier_key,
      sym_key,
    ACTIONS(37), 5,
      anon_sym_all,
      anon_sym_global,
      anon_sym_local,
      anon_sym_unconsumed,
      anon_sym_performable,
    ACTIONS(41), 9,
      anon_sym_shift,
      anon_sym_ctrl,
      anon_sym_control,
      anon_sym_alt,
      anon_sym_option,
      anon_sym_opt,
      anon_sym_super,
      anon_sym_cmd,
      anon_sym_command,
  [315] = 3,
    STATE(8), 2,
      sym_keybind_modifier,
      aux_sym_key_table_keybind_repeat1,
    ACTIONS(80), 5,
      anon_sym_all,
      anon_sym_global,
      anon_sym_local,
      anon_sym_unconsumed,
      anon_sym_performable,
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
  [340] = 12,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      aux_sym_string_token3,
    ACTIONS(85), 1,
      aux_sym_document_token1,
    ACTIONS(87), 1,
      aux_sym_value_token1,
    ACTIONS(91), 1,
      sym_number,
    ACTIONS(93), 1,
      anon_sym_POUND,
    ACTIONS(95), 1,
      aux_sym_color_token1,
    STATE(140), 1,
      sym_value,
    ACTIONS(89), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(97), 2,
      sym_percent_adjustment,
      sym_numeric_adjustment,
    STATE(119), 5,
      sym_tuple,
      sym_boolean,
      sym_adjustment,
      sym_string,
      sym_color,
  [383] = 1,
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
  [402] = 1,
    ACTIONS(101), 16,
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
  [421] = 10,
    ACTIONS(31), 1,
      aux_sym_string_token3,
    ACTIONS(95), 1,
      aux_sym_color_token1,
    ACTIONS(97), 1,
      sym_numeric_adjustment,
    ACTIONS(105), 1,
      sym_number,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      anon_sym_POUND,
    ACTIONS(113), 1,
      sym_percent_adjustment,
    ACTIONS(103), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(107), 5,
      sym_tuple,
      sym_boolean,
      sym_adjustment,
      sym_string,
      sym_color,
  [457] = 6,
    ACTIONS(39), 1,
      anon_sym_physical,
    ACTIONS(43), 1,
      aux_sym_key_token1,
    STATE(75), 1,
      sym_chord,
    STATE(136), 1,
      sym_key_qualifier,
    STATE(38), 2,
      sym_modifier_key,
      sym_key,
    ACTIONS(41), 9,
      anon_sym_shift,
      anon_sym_ctrl,
      anon_sym_control,
      anon_sym_alt,
      anon_sym_option,
      anon_sym_opt,
      anon_sym_super,
      anon_sym_cmd,
      anon_sym_command,
  [485] = 2,
    ACTIONS(115), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(117), 12,
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
  [504] = 2,
    ACTIONS(119), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(121), 12,
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
  [523] = 2,
    ACTIONS(123), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(125), 12,
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
  [542] = 2,
    ACTIONS(127), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(129), 12,
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
  [561] = 2,
    ACTIONS(131), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(133), 12,
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
  [580] = 2,
    ACTIONS(135), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(137), 12,
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
  [599] = 2,
    ACTIONS(139), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(141), 12,
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
  [618] = 2,
    ACTIONS(143), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(145), 12,
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
  [637] = 2,
    ACTIONS(147), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(149), 12,
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
  [656] = 2,
    ACTIONS(151), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(153), 12,
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
  [675] = 2,
    ACTIONS(155), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(157), 12,
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
  [694] = 5,
    ACTIONS(39), 1,
      anon_sym_physical,
    ACTIONS(43), 1,
      aux_sym_key_token1,
    STATE(136), 1,
      sym_key_qualifier,
    STATE(64), 2,
      sym_modifier_key,
      sym_key,
    ACTIONS(41), 9,
      anon_sym_shift,
      anon_sym_ctrl,
      anon_sym_control,
      anon_sym_alt,
      anon_sym_option,
      anon_sym_opt,
      anon_sym_super,
      anon_sym_cmd,
      anon_sym_command,
  [719] = 2,
    ACTIONS(159), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(161), 12,
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
  [738] = 2,
    ACTIONS(163), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(165), 12,
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
  [757] = 2,
    ACTIONS(167), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(169), 12,
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
  [776] = 2,
    ACTIONS(171), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(173), 12,
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
  [795] = 8,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    ACTIONS(177), 1,
      anon_sym_SQUOTE,
    ACTIONS(179), 1,
      aux_sym__raw_value_token1,
    ACTIONS(181), 1,
      aux_sym__action_arg_value_token1,
    STATE(145), 1,
      sym__raw_value,
    STATE(146), 1,
      sym__action_arg_value,
    ACTIONS(89), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(144), 2,
      sym_boolean,
      sym__loose_string,
  [822] = 8,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      aux_sym_string_token3,
    ACTIONS(183), 1,
      aux_sym_document_token1,
    STATE(36), 1,
      sym_command_modifier,
    STATE(101), 1,
      sym_string,
    STATE(121), 1,
      sym_command_value,
    ACTIONS(185), 2,
      anon_sym_direct,
      anon_sym_shell,
  [848] = 8,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      aux_sym_string_token3,
    ACTIONS(187), 1,
      aux_sym_document_token1,
    STATE(48), 1,
      sym_theme_variant,
    STATE(88), 1,
      sym_string,
    STATE(90), 1,
      sym_theme_value,
    ACTIONS(189), 2,
      anon_sym_light,
      anon_sym_dark,
  [874] = 7,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      aux_sym_string_token3,
    ACTIONS(191), 1,
      aux_sym_document_token1,
    ACTIONS(193), 1,
      anon_sym_QMARK,
    STATE(106), 1,
      sym_string,
    STATE(116), 1,
      sym_path_value,
  [896] = 6,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      aux_sym_string_token3,
    ACTIONS(195), 1,
      aux_sym_document_token1,
    STATE(131), 1,
      sym_string,
    STATE(132), 1,
      sym_env_var_value,
  [915] = 5,
    ACTIONS(197), 1,
      aux_sym_document_token1,
    ACTIONS(199), 1,
      aux_sym__snake_case_insensitive_identifier_token1,
    STATE(103), 1,
      sym__snake_case_insensitive_identifier,
    STATE(112), 1,
      sym_env_value,
    STATE(115), 1,
      sym_env_var_name,
  [931] = 4,
    ACTIONS(31), 1,
      aux_sym_string_token3,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    STATE(97), 1,
      sym_string,
  [944] = 4,
    ACTIONS(31), 1,
      aux_sym_string_token3,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    STATE(111), 1,
      sym_string,
  [957] = 3,
    ACTIONS(203), 1,
      anon_sym_PLUS,
    STATE(39), 1,
      aux_sym_chord_repeat1,
    ACTIONS(201), 2,
      anon_sym_EQ2,
      anon_sym_GT,
  [968] = 3,
    ACTIONS(203), 1,
      anon_sym_PLUS,
    STATE(41), 1,
      aux_sym_chord_repeat1,
    ACTIONS(205), 2,
      anon_sym_EQ2,
      anon_sym_GT,
  [979] = 3,
    ACTIONS(209), 1,
      anon_sym__,
    STATE(42), 1,
      aux_sym__snake_case_identifier_repeat1,
    ACTIONS(207), 2,
      aux_sym_document_token1,
      anon_sym_COLON,
  [990] = 3,
    ACTIONS(213), 1,
      anon_sym_PLUS,
    STATE(41), 1,
      aux_sym_chord_repeat1,
    ACTIONS(211), 2,
      anon_sym_EQ2,
      anon_sym_GT,
  [1001] = 3,
    ACTIONS(209), 1,
      anon_sym__,
    STATE(43), 1,
      aux_sym__snake_case_identifier_repeat1,
    ACTIONS(216), 2,
      aux_sym_document_token1,
      anon_sym_COLON,
  [1012] = 3,
    ACTIONS(220), 1,
      anon_sym__,
    STATE(43), 1,
      aux_sym__snake_case_identifier_repeat1,
    ACTIONS(218), 2,
      aux_sym_document_token1,
      anon_sym_COLON,
  [1023] = 3,
    ACTIONS(111), 1,
      anon_sym_POUND,
    ACTIONS(223), 1,
      aux_sym_color_token1,
    STATE(79), 1,
      sym_color,
  [1033] = 1,
    ACTIONS(218), 3,
      aux_sym_document_token1,
      anon_sym__,
      anon_sym_COLON,
  [1039] = 3,
    ACTIONS(225), 1,
      anon_sym_EQ,
    ACTIONS(227), 1,
      anon_sym_DASH,
    STATE(51), 1,
      aux_sym__kebab_case_identifier_repeat1,
  [1049] = 3,
    ACTIONS(229), 1,
      aux_sym_document_token1,
    ACTIONS(231), 1,
      aux_sym_palette_value_token1,
    STATE(86), 1,
      sym_palette_value,
  [1059] = 3,
    ACTIONS(233), 1,
      aux_sym_document_token1,
    ACTIONS(235), 1,
      anon_sym_COMMA2,
    STATE(58), 1,
      aux_sym_theme_value_repeat1,
  [1069] = 3,
    ACTIONS(237), 1,
      anon_sym__,
    ACTIONS(239), 1,
      anon_sym_EQ2,
    STATE(59), 1,
      aux_sym__snake_case_insensitive_identifier_repeat1,
  [1079] = 3,
    ACTIONS(227), 1,
      anon_sym_DASH,
    ACTIONS(241), 1,
      anon_sym_EQ,
    STATE(46), 1,
      aux_sym__kebab_case_identifier_repeat1,
  [1089] = 3,
    ACTIONS(243), 1,
      anon_sym_EQ,
    ACTIONS(245), 1,
      anon_sym_DASH,
    STATE(51), 1,
      aux_sym__kebab_case_identifier_repeat1,
  [1099] = 3,
    ACTIONS(248), 1,
      aux_sym__snake_case_identifier_token1,
    STATE(74), 1,
      sym__snake_case_identifier,
    STATE(117), 1,
      sym_keybind_action,
  [1109] = 1,
    ACTIONS(250), 3,
      anon_sym_EQ2,
      anon_sym_GT,
      anon_sym_PLUS,
  [1115] = 3,
    ACTIONS(248), 1,
      aux_sym__snake_case_identifier_token1,
    STATE(74), 1,
      sym__snake_case_identifier,
    STATE(120), 1,
      sym_keybind_action,
  [1125] = 3,
    ACTIONS(252), 1,
      anon_sym_EQ2,
    ACTIONS(254), 1,
      anon_sym_GT,
    STATE(63), 1,
      aux_sym_keybind_trigger_repeat1,
  [1135] = 2,
    ACTIONS(258), 1,
      aux_sym_string_token3,
    ACTIONS(256), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1143] = 2,
    STATE(78), 1,
      sym_theme_variant,
    ACTIONS(260), 2,
      anon_sym_light,
      anon_sym_dark,
  [1151] = 3,
    ACTIONS(235), 1,
      anon_sym_COMMA2,
    ACTIONS(262), 1,
      aux_sym_document_token1,
    STATE(66), 1,
      aux_sym_theme_value_repeat1,
  [1161] = 3,
    ACTIONS(237), 1,
      anon_sym__,
    ACTIONS(264), 1,
      anon_sym_EQ2,
    STATE(67), 1,
      aux_sym__snake_case_insensitive_identifier_repeat1,
  [1171] = 1,
    ACTIONS(266), 3,
      anon_sym_EQ2,
      anon_sym_GT,
      anon_sym_PLUS,
  [1177] = 1,
    ACTIONS(268), 3,
      anon_sym_EQ2,
      anon_sym_GT,
      anon_sym_PLUS,
  [1183] = 3,
    ACTIONS(248), 1,
      aux_sym__snake_case_identifier_token1,
    STATE(74), 1,
      sym__snake_case_identifier,
    STATE(137), 1,
      sym_keybind_action,
  [1193] = 3,
    ACTIONS(270), 1,
      anon_sym_EQ2,
    ACTIONS(272), 1,
      anon_sym_GT,
    STATE(63), 1,
      aux_sym_keybind_trigger_repeat1,
  [1203] = 1,
    ACTIONS(211), 3,
      anon_sym_EQ2,
      anon_sym_GT,
      anon_sym_PLUS,
  [1209] = 3,
    ACTIONS(248), 1,
      aux_sym__snake_case_identifier_token1,
    STATE(74), 1,
      sym__snake_case_identifier,
    STATE(139), 1,
      sym_keybind_action,
  [1219] = 3,
    ACTIONS(275), 1,
      aux_sym_document_token1,
    ACTIONS(277), 1,
      anon_sym_COMMA2,
    STATE(66), 1,
      aux_sym_theme_value_repeat1,
  [1229] = 3,
    ACTIONS(280), 1,
      anon_sym__,
    ACTIONS(283), 1,
      anon_sym_EQ2,
    STATE(67), 1,
      aux_sym__snake_case_insensitive_identifier_repeat1,
  [1239] = 3,
    ACTIONS(248), 1,
      aux_sym__snake_case_identifier_token1,
    STATE(74), 1,
      sym__snake_case_identifier,
    STATE(147), 1,
      sym_keybind_action,
  [1249] = 3,
    ACTIONS(254), 1,
      anon_sym_GT,
    ACTIONS(285), 1,
      anon_sym_EQ2,
    STATE(55), 1,
      aux_sym_keybind_trigger_repeat1,
  [1259] = 1,
    ACTIONS(283), 2,
      anon_sym__,
      anon_sym_EQ2,
  [1264] = 1,
    ACTIONS(243), 2,
      anon_sym_EQ,
      anon_sym_DASH,
  [1269] = 2,
    ACTIONS(287), 1,
      aux_sym__raw_value_token1,
    STATE(80), 1,
      sym__raw_value,
  [1276] = 2,
    ACTIONS(289), 1,
      aux_sym_document_token1,
    ACTIONS(291), 1,
      anon_sym_COMMA,
  [1283] = 2,
    ACTIONS(293), 1,
      aux_sym_document_token1,
    ACTIONS(295), 1,
      anon_sym_COLON,
  [1290] = 1,
    ACTIONS(270), 2,
      anon_sym_EQ2,
      anon_sym_GT,
  [1295] = 2,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    ACTIONS(297), 1,
      aux_sym_document_token1,
  [1302] = 2,
    ACTIONS(299), 1,
      aux_sym_document_token1,
    ACTIONS(301), 1,
      anon_sym_COMMA2,
  [1309] = 2,
    ACTIONS(275), 1,
      aux_sym_document_token1,
    ACTIONS(303), 1,
      anon_sym_COMMA2,
  [1316] = 1,
    ACTIONS(305), 1,
      aux_sym_document_token1,
  [1320] = 1,
    ACTIONS(307), 1,
      aux_sym_document_token1,
  [1324] = 1,
    ACTIONS(309), 1,
      anon_sym_EQ,
  [1328] = 1,
    ACTIONS(311), 1,
      anon_sym_EQ,
  [1332] = 1,
    ACTIONS(313), 1,
      aux_sym_key_token1,
  [1336] = 1,
    ACTIONS(315), 1,
      anon_sym_EQ2,
  [1340] = 1,
    ACTIONS(317), 1,
      anon_sym_EQ2,
  [1344] = 1,
    ACTIONS(319), 1,
      aux_sym_document_token1,
  [1348] = 1,
    ACTIONS(321), 1,
      anon_sym_COLON,
  [1352] = 1,
    ACTIONS(233), 1,
      aux_sym_document_token1,
  [1356] = 1,
    ACTIONS(323), 1,
      anon_sym_EQ,
  [1360] = 1,
    ACTIONS(325), 1,
      aux_sym_document_token1,
  [1364] = 1,
    ACTIONS(327), 1,
      anon_sym_SLASH,
  [1368] = 1,
    ACTIONS(329), 1,
      aux_sym_string_token1,
  [1372] = 1,
    ACTIONS(331), 1,
      anon_sym_EQ2,
  [1376] = 1,
    ACTIONS(333), 1,
      aux_sym_string_token2,
  [1380] = 1,
    ACTIONS(335), 1,
      anon_sym_COLON,
  [1384] = 1,
    ACTIONS(337), 1,
      ts_builtin_sym_end,
  [1388] = 1,
    ACTIONS(339), 1,
      aux_sym_document_token1,
  [1392] = 1,
    ACTIONS(341), 1,
      aux_sym_theme_variant_token1,
  [1396] = 1,
    ACTIONS(343), 1,
      anon_sym_EQ2,
  [1400] = 1,
    ACTIONS(345), 1,
      anon_sym_EQ,
  [1404] = 1,
    ACTIONS(347), 1,
      aux_sym_document_token1,
  [1408] = 1,
    ACTIONS(349), 1,
      aux_sym__snake_case_insensitive_identifier_token2,
  [1412] = 1,
    ACTIONS(351), 1,
      anon_sym_EQ2,
  [1416] = 1,
    ACTIONS(353), 1,
      aux_sym_document_token1,
  [1420] = 1,
    ACTIONS(355), 1,
      anon_sym_COLON,
  [1424] = 1,
    ACTIONS(357), 1,
      aux_sym_document_token1,
  [1428] = 1,
    ACTIONS(289), 1,
      aux_sym_document_token1,
  [1432] = 1,
    ACTIONS(359), 1,
      sym_number,
  [1436] = 1,
    ACTIONS(361), 1,
      aux_sym_document_token1,
  [1440] = 1,
    ACTIONS(363), 1,
      anon_sym_COLON,
  [1444] = 1,
    ACTIONS(365), 1,
      aux_sym_document_token1,
  [1448] = 1,
    ACTIONS(367), 1,
      aux_sym_document_token1,
  [1452] = 1,
    ACTIONS(369), 1,
      anon_sym_EQ,
  [1456] = 1,
    ACTIONS(371), 1,
      aux_sym_document_token1,
  [1460] = 1,
    ACTIONS(373), 1,
      anon_sym_EQ2,
  [1464] = 1,
    ACTIONS(375), 1,
      aux_sym_document_token1,
  [1468] = 1,
    ACTIONS(377), 1,
      aux_sym_document_token1,
  [1472] = 1,
    ACTIONS(379), 1,
      anon_sym_EQ,
  [1476] = 1,
    ACTIONS(297), 1,
      aux_sym_document_token1,
  [1480] = 1,
    ACTIONS(381), 1,
      aux_sym_document_token1,
  [1484] = 1,
    ACTIONS(383), 1,
      aux_sym_document_token1,
  [1488] = 1,
    ACTIONS(385), 1,
      anon_sym_EQ,
  [1492] = 1,
    ACTIONS(387), 1,
      aux_sym_document_token1,
  [1496] = 1,
    ACTIONS(389), 1,
      aux_sym_document_token1,
  [1500] = 1,
    ACTIONS(391), 1,
      anon_sym_EQ,
  [1504] = 1,
    ACTIONS(393), 1,
      aux_sym__kebab_case_identifier_token1,
  [1508] = 1,
    ACTIONS(395), 1,
      anon_sym_DQUOTE,
  [1512] = 1,
    ACTIONS(397), 1,
      aux_sym_color_token1,
  [1516] = 1,
    ACTIONS(395), 1,
      anon_sym_SQUOTE,
  [1520] = 1,
    ACTIONS(399), 1,
      aux_sym_document_token1,
  [1524] = 1,
    ACTIONS(401), 1,
      aux_sym_document_token1,
  [1528] = 1,
    ACTIONS(403), 1,
      aux_sym_document_token1,
  [1532] = 1,
    ACTIONS(405), 1,
      aux_sym_document_token1,
  [1536] = 1,
    ACTIONS(407), 1,
      aux_sym__kebab_case_identifier_token1,
  [1540] = 1,
    ACTIONS(409), 1,
      anon_sym_EQ,
  [1544] = 1,
    ACTIONS(411), 1,
      aux_sym_key_token1,
  [1548] = 1,
    ACTIONS(413), 1,
      aux_sym_document_token1,
  [1552] = 1,
    ACTIONS(415), 1,
      aux_sym_document_token1,
  [1556] = 1,
    ACTIONS(417), 1,
      aux_sym_document_token1,
  [1560] = 1,
    ACTIONS(419), 1,
      aux_sym_document_token1,
  [1564] = 1,
    ACTIONS(421), 1,
      anon_sym_EQ2,
  [1568] = 1,
    ACTIONS(423), 1,
      aux_sym__loose_string_token1,
  [1572] = 1,
    ACTIONS(425), 1,
      aux_sym__loose_string_token2,
  [1576] = 1,
    ACTIONS(427), 1,
      aux_sym_document_token1,
  [1580] = 1,
    ACTIONS(429), 1,
      aux_sym_document_token1,
  [1584] = 1,
    ACTIONS(431), 1,
      aux_sym_document_token1,
  [1588] = 1,
    ACTIONS(433), 1,
      aux_sym_document_token1,
  [1592] = 1,
    ACTIONS(435), 1,
      anon_sym_DQUOTE,
  [1596] = 1,
    ACTIONS(435), 1,
      anon_sym_SQUOTE,
  [1600] = 1,
    ACTIONS(437), 1,
      aux_sym_document_token1,
  [1604] = 1,
    ACTIONS(439), 1,
      anon_sym_EQ2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 75,
  [SMALL_STATE(4)] = 132,
  [SMALL_STATE(5)] = 189,
  [SMALL_STATE(6)] = 231,
  [SMALL_STATE(7)] = 273,
  [SMALL_STATE(8)] = 315,
  [SMALL_STATE(9)] = 340,
  [SMALL_STATE(10)] = 383,
  [SMALL_STATE(11)] = 402,
  [SMALL_STATE(12)] = 421,
  [SMALL_STATE(13)] = 457,
  [SMALL_STATE(14)] = 485,
  [SMALL_STATE(15)] = 504,
  [SMALL_STATE(16)] = 523,
  [SMALL_STATE(17)] = 542,
  [SMALL_STATE(18)] = 561,
  [SMALL_STATE(19)] = 580,
  [SMALL_STATE(20)] = 599,
  [SMALL_STATE(21)] = 618,
  [SMALL_STATE(22)] = 637,
  [SMALL_STATE(23)] = 656,
  [SMALL_STATE(24)] = 675,
  [SMALL_STATE(25)] = 694,
  [SMALL_STATE(26)] = 719,
  [SMALL_STATE(27)] = 738,
  [SMALL_STATE(28)] = 757,
  [SMALL_STATE(29)] = 776,
  [SMALL_STATE(30)] = 795,
  [SMALL_STATE(31)] = 822,
  [SMALL_STATE(32)] = 848,
  [SMALL_STATE(33)] = 874,
  [SMALL_STATE(34)] = 896,
  [SMALL_STATE(35)] = 915,
  [SMALL_STATE(36)] = 931,
  [SMALL_STATE(37)] = 944,
  [SMALL_STATE(38)] = 957,
  [SMALL_STATE(39)] = 968,
  [SMALL_STATE(40)] = 979,
  [SMALL_STATE(41)] = 990,
  [SMALL_STATE(42)] = 1001,
  [SMALL_STATE(43)] = 1012,
  [SMALL_STATE(44)] = 1023,
  [SMALL_STATE(45)] = 1033,
  [SMALL_STATE(46)] = 1039,
  [SMALL_STATE(47)] = 1049,
  [SMALL_STATE(48)] = 1059,
  [SMALL_STATE(49)] = 1069,
  [SMALL_STATE(50)] = 1079,
  [SMALL_STATE(51)] = 1089,
  [SMALL_STATE(52)] = 1099,
  [SMALL_STATE(53)] = 1109,
  [SMALL_STATE(54)] = 1115,
  [SMALL_STATE(55)] = 1125,
  [SMALL_STATE(56)] = 1135,
  [SMALL_STATE(57)] = 1143,
  [SMALL_STATE(58)] = 1151,
  [SMALL_STATE(59)] = 1161,
  [SMALL_STATE(60)] = 1171,
  [SMALL_STATE(61)] = 1177,
  [SMALL_STATE(62)] = 1183,
  [SMALL_STATE(63)] = 1193,
  [SMALL_STATE(64)] = 1203,
  [SMALL_STATE(65)] = 1209,
  [SMALL_STATE(66)] = 1219,
  [SMALL_STATE(67)] = 1229,
  [SMALL_STATE(68)] = 1239,
  [SMALL_STATE(69)] = 1249,
  [SMALL_STATE(70)] = 1259,
  [SMALL_STATE(71)] = 1264,
  [SMALL_STATE(72)] = 1269,
  [SMALL_STATE(73)] = 1276,
  [SMALL_STATE(74)] = 1283,
  [SMALL_STATE(75)] = 1290,
  [SMALL_STATE(76)] = 1295,
  [SMALL_STATE(77)] = 1302,
  [SMALL_STATE(78)] = 1309,
  [SMALL_STATE(79)] = 1316,
  [SMALL_STATE(80)] = 1320,
  [SMALL_STATE(81)] = 1324,
  [SMALL_STATE(82)] = 1328,
  [SMALL_STATE(83)] = 1332,
  [SMALL_STATE(84)] = 1336,
  [SMALL_STATE(85)] = 1340,
  [SMALL_STATE(86)] = 1344,
  [SMALL_STATE(87)] = 1348,
  [SMALL_STATE(88)] = 1352,
  [SMALL_STATE(89)] = 1356,
  [SMALL_STATE(90)] = 1360,
  [SMALL_STATE(91)] = 1364,
  [SMALL_STATE(92)] = 1368,
  [SMALL_STATE(93)] = 1372,
  [SMALL_STATE(94)] = 1376,
  [SMALL_STATE(95)] = 1380,
  [SMALL_STATE(96)] = 1384,
  [SMALL_STATE(97)] = 1388,
  [SMALL_STATE(98)] = 1392,
  [SMALL_STATE(99)] = 1396,
  [SMALL_STATE(100)] = 1400,
  [SMALL_STATE(101)] = 1404,
  [SMALL_STATE(102)] = 1408,
  [SMALL_STATE(103)] = 1412,
  [SMALL_STATE(104)] = 1416,
  [SMALL_STATE(105)] = 1420,
  [SMALL_STATE(106)] = 1424,
  [SMALL_STATE(107)] = 1428,
  [SMALL_STATE(108)] = 1432,
  [SMALL_STATE(109)] = 1436,
  [SMALL_STATE(110)] = 1440,
  [SMALL_STATE(111)] = 1444,
  [SMALL_STATE(112)] = 1448,
  [SMALL_STATE(113)] = 1452,
  [SMALL_STATE(114)] = 1456,
  [SMALL_STATE(115)] = 1460,
  [SMALL_STATE(116)] = 1464,
  [SMALL_STATE(117)] = 1468,
  [SMALL_STATE(118)] = 1472,
  [SMALL_STATE(119)] = 1476,
  [SMALL_STATE(120)] = 1480,
  [SMALL_STATE(121)] = 1484,
  [SMALL_STATE(122)] = 1488,
  [SMALL_STATE(123)] = 1492,
  [SMALL_STATE(124)] = 1496,
  [SMALL_STATE(125)] = 1500,
  [SMALL_STATE(126)] = 1504,
  [SMALL_STATE(127)] = 1508,
  [SMALL_STATE(128)] = 1512,
  [SMALL_STATE(129)] = 1516,
  [SMALL_STATE(130)] = 1520,
  [SMALL_STATE(131)] = 1524,
  [SMALL_STATE(132)] = 1528,
  [SMALL_STATE(133)] = 1532,
  [SMALL_STATE(134)] = 1536,
  [SMALL_STATE(135)] = 1540,
  [SMALL_STATE(136)] = 1544,
  [SMALL_STATE(137)] = 1548,
  [SMALL_STATE(138)] = 1552,
  [SMALL_STATE(139)] = 1556,
  [SMALL_STATE(140)] = 1560,
  [SMALL_STATE(141)] = 1564,
  [SMALL_STATE(142)] = 1568,
  [SMALL_STATE(143)] = 1572,
  [SMALL_STATE(144)] = 1576,
  [SMALL_STATE(145)] = 1580,
  [SMALL_STATE(146)] = 1584,
  [SMALL_STATE(147)] = 1588,
  [SMALL_STATE(148)] = 1592,
  [SMALL_STATE(149)] = 1596,
  [SMALL_STATE(150)] = 1600,
  [SMALL_STATE(151)] = 1604,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(113),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(81),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(100),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(122),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(125),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_key_table_keybind_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_table_keybind_repeat1, 2, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keybind_table, 2, 0, 4),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keybind_modifier, 2, 0, 5),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_directive, 3, 0, 1),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_directive, 3, 0, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_directive, 3, 0, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_directive, 3, 0, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_palette_directive, 4, 0, 3),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_palette_directive, 4, 0, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_theme_directive, 3, 0, 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_theme_directive, 3, 0, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_directive, 3, 0, 1),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_directive, 3, 0, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_palette_directive, 3, 0, 1),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_palette_directive, 3, 0, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_directive, 3, 0, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_directive, 3, 0, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_directive, 3, 0, 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keybind_directive, 3, 0, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_directive, 4, 0, 3),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keybind_directive, 4, 0, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_directive, 4, 0, 7),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_directive, 4, 0, 7),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_directive, 4, 0, 3),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_directive, 4, 0, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_theme_directive, 4, 0, 3),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_theme_directive, 4, 0, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_directive, 4, 0, 3),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_directive, 4, 0, 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_directive, 4, 0, 3),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_directive, 4, 0, 3),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_value, 2, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord, 1, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord, 2, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__snake_case_identifier, 1, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_chord_repeat1, 2, 0, 0),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chord_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__snake_case_identifier, 2, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__snake_case_identifier_repeat1, 2, 0, 0),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__snake_case_identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(134),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__kebab_case_identifier, 2, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_theme_value, 1, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__snake_case_insensitive_identifier, 1, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__kebab_case_identifier, 1, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__kebab_case_identifier_repeat1, 2, 0, 0),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__kebab_case_identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(126),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 2, 0, 6),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_trigger, 2, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_modifier, 2, 0, 5),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_modifier, 2, 0, 5),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_theme_value, 2, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__snake_case_insensitive_identifier, 2, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier_key, 1, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keybind_trigger_repeat1, 2, 0, 0),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keybind_trigger_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_theme_value_repeat1, 2, 0, 0),
  [277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_theme_value_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__snake_case_insensitive_identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__snake_case_insensitive_identifier_repeat1, 2, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_trigger, 1, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_action, 1, 0, 8),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_theme_variant, 3, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_theme_variant, 3, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_theme_value_repeat1, 2, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_palette_value, 3, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_property, 1, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 1, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_qualifier, 2, 0, 6),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [337] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_value, 2, 0, 5),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_value, 1, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_var_name, 1, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_value, 1, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_value, 1, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 2, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_value, 2, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chained_keybind_action, 3, 0, 9),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind, 3, 0, 10),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 1, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_var_value, 1, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_value, 3, 0, 0),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3, 0, 11),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_table_keybind, 4, 0, 12),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adjustment, 1, 0, 0),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind, 4, 0, 12),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__action_arg_value, 1, 0, 0),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__loose_string, 1, 0, 0),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keybind_action, 3, 0, 13),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_table_keybind, 5, 0, 14),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__loose_string, 3, 0, 0),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
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
