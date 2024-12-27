/**
 * @file Parser for Ghostty configuration files
 * @author Bez Hermoso <me@bez.dev>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check
const newline = /\r?\n/;
const anything = /[^\r\n]+/;

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
      $.boolean,
      $.string_literal,
      $.raw_value,
    ),

    boolean: $ => choice("true", "false"),
    string_literal: $ => choice(
      seq('"', /[^"]*/, '"'),
      seq("'", /[^']*/, "'")
    ),
    raw_value: $ => anything,
  }
});
