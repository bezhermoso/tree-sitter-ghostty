; extends
; Comments
(comment) @comment

; Keys
(property) @variable

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
] @string.special

(palette_value (color_value) @string.special)
(palette_index) @variable.member

(config_file_directive (path_value) @string.special.path)

(config_file_directive (property) @keyword.import)

; Keybinds
(keybind_value) @string.special


((keybind_value) @keyword
                 (#eq? @keyword "clear"))

(keybind_action) @function.call
(action_argument) @variable.parameter

[
 "+"
 "="
] @operator

(keybind_trigger ">") @operator

[
 (modifier_key)
 (key)
] @constant.builtin

[(key_qualifier) (keybind_modifier)] @attribute
