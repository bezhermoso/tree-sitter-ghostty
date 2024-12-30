; extends
; Comments
(comment) @comment

; Keys
(property) @variable

; Values
(boolean) @boolean

[
 (string)
 (color)
] @string

[
 (number)
 (adjustment)
] @number

; (color) are hex values
(color "#" @punctuation.delimiter.special
  (#eq? @punctuation.delimiter.special "#"))

; `palette`
(palette_index) @variable.member

(palette_value "=" @operator
  (#eq? @operator "="))

; `config-file`
(config_file_directive (property) @keyword.import)
(config_file_directive (path_value) @string.special.path)

; `keybind`
(keybind_value) @string.special

; clear is a special keyword that clear all existing keybind up to that point
((keybind_value) @keyword
                 (#eq? @keyword "clear"))

(keybind_action) @function.call
(action_argument) @variable.parameter

[
 "+"
 "="
 (keybind_trigger ">")
] @operator

; NOTE: The order here matters!
[
 (modifier_key)
 (key)
] @constant.builtin

[
 (key_qualifier)
 (keybind_modifier)
] @attribute
