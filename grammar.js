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
const hex_color_with_octothorpe = /#[0-9a-fA-F]{3,8}/;

module.exports = grammar({
  name: "ghostty",

  rules: {
    source_file: $ => repeat(choice(
        newline,
        $.comment,
        $.directive,
        $.palette_directive,
        // TODO: Key-binding directive
      )),
    comment: $ => token(seq(token.immediate("#"), alias(/[^\r\n]*/, $.text), newline)),
    directive: $ => seq(
      field("name", $.property),
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
      alias("palette", $.palette_property),
      "=",
      optional($.palette_value),
      newline,
    ),
    palette_value: $ => seq(
      alias(/[0-9]{1,3}/, $.palette_index),
      token.immediate("="),
      alias(token.immediate(hex_color), $.hex_color),
    ),
  },
});
