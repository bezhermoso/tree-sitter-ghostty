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
      $.equal_sign,
      optional(field("value", $.config_value)),
      newline,
    ),
    equal_sign: $ => /[ \t]*=[ \t]*/,
    // kebab-case
    config_name : $ => /[a-z]+(-[a-z]+)*/,
    config_value: $ => choice(
      $.boolean_literal,
      $.string_literal,
      $.number_literal,
      $.adjustment,
      $.raw_value,
    ),

    boolean_literal: $ => choice("true", "false"),
    number_literal: $ => number,
    adjustment: $ => prec.dynamic(0, choice(
      $.percent_adjustment,
      $.numeric_adjustment,
    )),
    percent_adjustment: $ => /[+-]?[0-9]+%/,
    numeric_adjustment: $ => /[+-]+[0-9]+/,
    string_literal: $ => choice(
      seq('"', /[^"]*/, '"'),
      seq("'", /[^']*/, "'"),
    ),
    raw_value: $ => prec.dynamic(10, anything),
  },
  conficts: $ => [
    [$.raw_value, $.adjustment],
  ]
});
