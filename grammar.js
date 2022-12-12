module.exports = grammar({
  name: "deb822",
  extras: ($) => [$.comment, "\n"],
  conflicts: ($) => [[$.paragraph]],
  word: ($) => $.field_name,
  rules: {
    source: ($) => repeat($.paragraph),
    escape_line: ($) => seq($._hspace, "."),
    field_name: ($) => /[!"$-,\.-9;-~][!-9;-~]*/,
    folded_line: ($) => seq($._hspace, /.+/),
    _hspace: ($) => /[ \t]+/,
    statement: ($) =>
      seq($.simple_line, repeat(choice($.escape_line, $.folded_line))),
    paragraph: ($) => seq(repeat1($.statement), repeat($._separator_line)),
    simple_line: ($) => seq($.field_name, ":", token(/\s*/), $.field_value),
    _separator_line: ($) => token(/([ \t]+|\n)\n/),
    comment: ($) => token(seq("#", /.*/)),
    // catch-all
    field_value: ($) => /.*/,
  },
});
