# tree-sitter-ghostty

> [!WARNING]
> This is still **experimental**

Tree-sitter grammar/parser for [Ghostty] configuration files

<img width="416" alt="SCR-20241227-cwql" src="https://github.com/user-attachments/assets/143dd0f9-c28d-4bfe-a084-db6bf4ac5dc9" />


## How to use

### Neovim

> [!IMPORTANT]
> Requires [nvim-treesitter]

1. Add this in your Lua config

```lua

local parsers_config = require('nvim-treesitter.parsers').get_parser_configs()
-- Register this parser manually to nvim-treesitter's parser directory
parsers_config.ghostty = {
    install_info = {
        url = 'https://github.com/bezhermoso/tree-sitter-ghostty',
        files = { 'src/parser.c' },
        branch = 'main',
        requires_generate_from_grammar = true,
    },
}
```

2. Re-open Neovim & run `:TSInstall ghostty`. Follow prompts.

3. Copy `./queries/highlights.scm` to `~/.config/nvim/after/queries/ghostty/highlights.scm`

4. Open your Ghostty config and set its file-type to `ghostty`:

```
:set ft=ghostty
```

You can also add this line to the top of your Ghostty config:

```diff
+# vim: ft=ghostty
 #
 # The rest of your Ghostty configuration 👻...
```

# TODOs

- [ ] Tests
- [ ] Contribute queries to [nvim-treesitter]

[Ghostty]: https://ghostty.org
[nvim-treesitter]: https://github.com/nvim-treesitter/nvim-treesitter
