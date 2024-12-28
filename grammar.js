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
const hex_color = /#?[0-9a-fA-F]{3,8}/;

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
        // TODO: Key-binding directive
    ),
    basic_directive: $ => seq(
      field("property", $.property),
      "=",
      optional(field("value", $.value)),
      newline,
    ),
    // Property names are kebab-case
    property : $ => /[a-z]+(-[a-z]+)*/,
    // Value types can be boolean, string, number, "adjustments", or hex color
    // `palette` values a handled separately
    value: $ => choice(
      $.boolean_literal,
      $.string_literal,
      $.number_literal,
      $.adjustment,
      $.hex_color,
      $.raw_value,
    ),

    boolean_literal: $ => choice("true", "false"),
    number_literal: $ => number,
    adjustment: $ => choice(
      $.percent_adjustment,
      $.numeric_adjustment,
    ),
    hex_color: $ => hex_color,
    // Expressed as separate regexes to avoid lexical precedence issues with `raw_value`
    percent_adjustment: $ => /[+-]?[0-9]+%/,
    // Expressed as separate regexes to avoid lexical precedence issues with `raw_value`
    numeric_adjustment: $ => /[+-]+[0-9]+/,
    string_literal: $ => choice(
      seq('"', /[^"]*/, '"'),
      seq("'", /[^']*/, "'"),
    ),
    // Fallback
    raw_value: $ => prec(-1, anything),


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
      alias(token.immediate(hex_color), $.hex_color),
    ),

    // `config-file` directive
    config_file_directive: $ => seq(
      field("property", alias("config-file", $.property)),
      "=",
      field("value", $.raw_value),
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
    // TODO: Handle quoted values
    _keybind_value: $ => $.keybind_value,

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
    key: $ => /[^>=:]{1}/,

    // The action to be taken when the keybind is triggered
    keybind_action: $ => seq(
      field("action_name", alias(/[a-z\_]+/, $.action_name)),
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

