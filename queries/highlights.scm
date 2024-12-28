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
    (color_value)
] @markup.bold

(palette_value [(color_value) (palette_index)] @markup.italic @markup.bold)

(config_file_directive (path_value) @string.special.path)
