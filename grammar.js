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
      token("="),
      optional(field("value", $.value)),
      newline,
    ),

    _kebab_case_identifier : $ => /[a-z]+(-[a-z]+)*/,
    _snake_case_identifier : $ => /[a-z\_]+\d*/,
    property : $ => choice($._kebab_case_identifier),
    // Value types can be boolean, string, number, "adjustments", or hex color
    // `palette` values a handled separately
    value: $ => seq(
      optional(/\s+/),
      choice(
        $.boolean_literal,
        $.number_literal,
        $.adjustment,
        $.color_value,
        $.string_literal,
        $.raw_value,
      )
    ),

    boolean_literal: $ => choice("true", "false"),
    number_literal: $ => number,
    adjustment: $ => choice(
      $.percent_adjustment,
      $.numeric_adjustment,
    ),
    string_literal: $ => prec(1, choice(
      seq('"', /[^"]*/, '"'),
      seq("'", /[^']*/, "'"),
    )),
    color_value: $ => hex_color,
    // Expressed as separate regexes to avoid lexical precedence issues with `raw_value`
    //percent_adjustment: $ => percent_assignment,
    percent_adjustment: $ => token(
      prec(
        2,
        seq(
          optional(choice("-", "+")),
          token.immediate(number),
          token.immediate("%"),
        ),
      ),
    ),
    // Expressed as separate regexes to avoid lexical precedence issues with `raw_value`
    //numeric_adjustment: $ => numemeric_assignment,
    numeric_adjustment: $ => token(
      prec(
        1,
        seq(
          choice("-", "+"),
          token.immediate(number)
        )
      )
    ),
    //
    // Fallback. Setting a negative precedence so that more complex (i.e. composite) grammars win.
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
      alias(token.immediate(hex_color), $.color_value),
    ),

    // `config-file` directive
    config_file_directive: $ => seq(
      field("property", alias("config-file", $.property)),
      token("="),
      field("value", $.path_value),
      newline,
    ),
    path_value: $ => anything,

    // `keybind` directive
    keybind_directive: $ => seq(
      field("property", alias("keybind", $.property)),
      /\s*=\s*/,
      field("value", $.keybind_value),
      newline,
    ),

    // The overall syntax for keybind values
    keybind_value: $ => choice(
      $.string_literal,
      "clear",
      seq(
        optional(repeat($.keybind_modifier)),
        field("trigger", $.keybind_trigger),
        token.immediate("="),
        field("action", $.keybind_action),
      )
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

    // Key qualifier
    key_qualifier: $ => seq(field("qualifier", token("physical")), token.immediate(":")),
    // The keybind themselves. Ghostty supports stringing chords together.
    keybind_trigger: $ => sep1($.chord, ">"),

    // A cluster of keys that must be pressed together.
    chord: $ => sep1(choice($.modifier_key, $.key), "+"),

    // Modifier keys
    modifier_key: $ => choice(
      "shift",
      "ctrl", "control",
      "alt", "option", "opt",
      "super", "cmd", "command",
    ),

    // Non-modifier keys
    key: $ => seq(
      optional(field("qualifier", $.key_qualifier)),
      token.immediate(
        field("bind", choice(/[a-z0-9]+(\_[a-z0-9]+)*/, /[^>=:]{1}/)),
      )
    ),

    // The action to be taken when the keybind is triggered
    keybind_action: $ => seq(
      field("action_name", alias($._snake_case_identifier, $.action_name)),
      optional(
        seq(
          token.immediate(":"),
          field("argument", alias(anything, $.action_argument)),
        ),
      ),
    ),
  },
});

function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}

