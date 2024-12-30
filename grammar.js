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
const word = /[0-9a-z]+/

module.exports = grammar({
  name: "ghostty",

  rules: {
    document: $ => repeat(choice(
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

    basic_directive: $ => directive_seq($.property, $.value),

    _kebab_case_identifier : $ => sep1(token.immediate(word), token.immediate("-")),
    _snake_case_identifier : $ => snake_case_seq(),

    property : $ => choice($._kebab_case_identifier),
    // Value types can be boolean, string, number, "adjustments", or hex color
    // `palette` values a handled separately
    value: $ => seq(
      optional(/\s+/),
      choice(
        $.boolean,
        $.number,
        $.adjustment,
        $.color,
        $.string,
      )
    ),

    boolean: $ => choice("true", "false"),
    number: $ => number,
    adjustment: $ => choice(
      $.percent_adjustment,
      $.numeric_adjustment,
    ),
    string: $ => prec(1, choice(
      seq('"', /[^"]*/, '"'),
      seq("'", /[^']*/, "'"),
      seq(
        /[^#]/,
        $._raw_value,
      )
    )),
    color: $ => prec(2, hex_color_seq()),
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
    _raw_value: $ => prec(-1, anything),

    // `palette` directive
    palette_directive: $ => directive_seq(alias("palette", $.property), $.palette_value),

    palette_value: $ => seq(
      alias(/[0-9]{1,3}/, $.palette_index),
      token.immediate("="),
      $.color
    ),

    // `config-file` directive
    config_file_directive: $ => directive_seq(alias("config-file", $.property), $.path_value),
    path_value: $ => $.string,

    // `keybind` directive
    keybind_directive: $ => directive_seq(alias("keybind", $.property), $.keybind_value),

    // The overall syntax for keybind values
    keybind_value: $ => choice(
      $.string,
      "clear",
      seq(
        optional(repeat($.keybind_modifier)),
        field("trigger", $.keybind_trigger),
        token.immediate("="),
        field("action", $.keybind_action),
      ),
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
    key_qualifier: $ => seq(
      field("qualifier", token("physical")),
      token.immediate(":")
    ),

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
        field("bind", choice(snake_case_seq(), /[^>=:\s]{1}/)),
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


function hex_color_seq()  {
  return seq(optional("#"), token.immediate(/[0-9a-fA-F]{6}/));
}

function snake_case_seq() {
  return sep1(token.immediate(word), token.immediate("_"));
}

function directive_seq(key, value) {
  return seq(
      field("property", key),
      "=",
      optional(
        field("value", value),
      ),
      newline,
    );
}
