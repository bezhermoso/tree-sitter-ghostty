; extends
; Comments
(comment) @comment

; Keys
(property) @property

; Values
(boolean_literal) @boolean

[
 (number_literal)
 (adjustment)
] @number

[
 (value)
 (raw_value)
 (string_literal)
] @string

[
    (hex_color)
] @markup.bold

(palette_value [(hex_color) (palette_index)] @markup.italic @markup.bold)

(config_file_directive (raw_value) @string.special.path)
