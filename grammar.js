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
    comment: $ => token(seq(token.immediate("#"), alias(/[^\r\n]*/, $.text), newline)),
    directive: $ => seq(
      field("name", $.config_name),
      "=",
      optional(field("value", $.config_value)),
      newline,
    ),
    // kebab-case
    config_name : $ => /[a-z]+(-[a-z]+)*/,
    config_value: $ => choice(
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
    percent_adjustment: $ => /[+-]?[0-9]+%/,
    numeric_adjustment: $ => /[+-]+[0-9]+/,
    string_literal: $ => choice(
      seq('"', /[^"]*/, '"'),
      seq("'", /[^']*/, "'"),
    ),
    hex_color: $ => hex_color,
    // Fallback
    raw_value: $ => anything,
  },
});
