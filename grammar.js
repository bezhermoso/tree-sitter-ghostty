/**
 * @file Parser for Ghostty configuration files
 * @author Bez Hermoso <me@bez.dev>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check
const newline = /\r?\n/;
const anything = /[^\r\n]+/;
const number = /[0-9]+(\.[0-9]+)?/;
const percent_assignment = /[+-]?[0-9]+(\.[0-9]+)?%/;
const numemeric_assignment = /[+-][0-9]+(\.[0-9]+)?/;
const hex_color = /#?[0-9a-fA-F]{6}/;

module.exports = grammar({
  name: "ghostty",

  rules: {
    source_file: $ => repeat(choice(
        newline,
        $.comment,
        $.directive,
      )),
    comment: $ => token(
      seq(
        token.immediate("#"),
        alias(/[^\r\n]*/, $.text),
        newline
      )),
    directive: $ => choice(
      $.basic_directive,
      $.palette_directive,
      $.config_file_directive,
      $.keybind_directive,
    ),

    basic_directive: $ => seq(
      field("property", $.property),
      "=",
      optional(field("value", $.value)),
      newline,
    ),

    _kebab_case_identifier : $ => /[a-z]+(-[a-z]+)*/,
    _snake_case_identifier : $ => /[a-z\_]+\d*/,
    property : $ => choice($._kebab_case_identifier),
    // Value types can be boolean, string, number, "adjustments", or hex color
    // `palette` values a handled separately
    value: $ => choice(
      $.boolean_literal,
      $.number_literal,
      $.adjustment,
      $.color_value,
      $.string_literal,
      $.raw_value,
    ),

    boolean_literal: $ => choice("true", "false"),
    number_literal: $ => number,
    adjustment: $ => choice(
      $.percent_adjustment,
      $.numeric_adjustment,
    ),
    string_literal: $ => choice(
      seq('"', /[^"]*/, '"'),
      seq("'", /[^']*/, "'"),
    ),
    color_value: $ => token(prec(1,hex_color)),
    // Expressed as separate regexes to avoid lexical precedence issues with `raw_value`
    percent_adjustment: $ => percent_assignment,
    //percent_adjustment: $ => seq(number, token.immediate("%")),
    // Expressed as separate regexes to avoid lexical precedence issues with `raw_value`
    numeric_adjustment: $ => numemeric_assignment,
    //numeric_adjustment: $ => seq(/[+-]/, token.immediate(number)),
    //
    // Fallback
    raw_value: $ => anything,


    // `palette` directive
    palette_directive: $ => seq(
      field("property", alias("palette", $.property)),
      "=",
      optional(
        field("value", $.palette_value),
      ),
      newline,
    ),
    palette_value: $ => seq(
      alias(/[0-9]{1,3}/, $.palette_index),
      token.immediate("="),
      alias(token.immediate(hex_color), $.color_value),
    ),

    // `config-file` directive
    config_file_directive: $ => seq(
      field("property", alias("config-file", $.property)),
      "=",
      field("value", $.path_value),
      newline,
    ),
    path_value: $ => anything,

    // `keybind` directive
    keybind_directive: $ => seq(
      field("property", alias("keybind", $.property)),
      "=",
      field("value", $._keybind_value),
      newline,
    ),
    _keybind_value: $ => choice($.keybind_value, alias("clear", $.value), alias($.string_literal, $.value)),

    // The overall syntax for keybind values
    keybind_value: $ => seq(
      optional(repeat($.keybind_modifier)),
      field("trigger", $.keybind_trigger),
      token.immediate("="),
      field("action", $.keybind_action),
    ),

    // Modifier for the entire keybind
    keybind_modifier: $ => seq(
      field("modifier",
        choice(
          "all", "global", "local", "unconsumed",
        ),
      ),
      token.immediate(":"),
    ),

    // Prefix for a single key
    key_prefix: $ => "physical",

    // The keybind themselves. Ghostty supports stringing chords together.
    keybind_trigger: $ => sep1($.chord, ">"),

    // A cluster of keys that must be pressed together.
    chord: $ => sep1(choice($.key_modifier, $.key), "+"),

    // Modifier keys
    key_modifier: $ => choice(
      "shift",
      "ctrl", "control",
      "alt", "option", "opt",
      "super", "cmd", "command",
    ),

    // Non-modifier keys
    key: $ => seq(
      optional(
        seq(
          $.key_prefix,
          token.immediate(":"),
        )
      ),
      field("bind", $._snake_case_identifier),
    ),

    // The action to be taken when the keybind is triggered
    keybind_action: $ => seq(
      field("action_name", alias($._snake_case_identifier, $.action_name)),
      optional(
        seq(
          token.immediate(":"),
          field("argument", alias($.raw_value, $.action_argument)),
        ),
      ),
    ),
  },
});

function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}

