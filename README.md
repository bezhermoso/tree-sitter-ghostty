# tree-sitter-ghostty

[![Tests](https://github.com/bezhermoso/tree-sitter-ghostty/actions/workflows/ci.yml/badge.svg)](https://github.com/bezhermoso/tree-sitter-ghostty/actions/workflows/ci.yml)

> [!WARNING]
> This is still **experimental**

Tree-sitter grammar/parser for [Ghostty] configuration files

<img width="416" alt="SCR-20241227-cwql" src="https://github.com/user-attachments/assets/143dd0f9-c28d-4bfe-a084-db6bf4ac5dc9" />


## TODOs

- Grammar
    - [x] Comments
    - [x] Raw values
    - [x] Numbers
    - [x] Percents
    - [x] Colors 
    - [x] Palette
    - [x] Keybindings (IN PROGRESS)
        - [x] Chords
        - [x] Modifiers
        - [x] Actions & arguments
        - [x] Special keys (e.g. `tab`, `space`, `up`)
- [x] Tests
- [x] Capture highlight groups
- [ ] Stable release
    - [ ] Contribute queries to [nvim-treesitter] (No longer accepting experimental parsers)


## How to use

### Neovim

> [!IMPORTANT]
> Requires [nvim-treesitter]. 

> [!CAUTION]
> The highlight capture groups may break as the grammar changes underneath it. 
> For best results, **symink** it to the destination. When syntax highlighting breaks,
> running `:TSInstall! ghostty` should fix the problem. 
>
> This should stop being an annoyance when we have a stable release. 

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

3. Symlink `./queries/highlights.scm` to `~/.config/nvim/after/queries/ghostty/highlights.scm`

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

### Helix

1. Add this to your `languages.toml`

```toml
[[language]]
name = "ghostty"
scope = "source.ghostty"
injection-regex = "ghostty"
file-types = [{ glob = "*ghostty/config" }]
grammar = "ghostty"
comment-tokens = "#"

[[grammar]]
name = "ghostty"
source = { git = "https://github.com/bezhermoso/tree-sitter-ghostty", rev = "main" }
```

2. In your `runtime` directory, symlink `queries/ghostty/highlights.scm` to `grammars/sources/ghostty/queries/highlights.scm`

[Ghostty]: https://ghostty.org
[nvim-treesitter]: https://github.com/nvim-treesitter/nvim-treesitter
