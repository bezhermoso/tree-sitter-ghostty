; extends
; Comments
(comment) @comment

; Keys
(property) @variable

; Values
(boolean) @boolean

[
 (number)
 (adjustment)
] @number

[
 (string)
 (color)
] @string

(palette_index) @variable.member

(palette_value "=" @operator
  (#eq? @operator "="))

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

(color "#" @punctuation.delimiter.special
  (#eq? @punctuation.delimiter.special "#"))

[
 (modifier_key)
 (key)
] @constant.builtin

[(key_qualifier) (keybind_modifier)] @attribute
