# tree-sitter-ghostty

<div align="center">
    <div>
        <a href="https://github.com/bezhermoso/tree-sitter-ghostty/actions/workflows/ci.yml">
            <img src="https://github.com/bezhermoso/tree-sitter-ghostty/actions/workflows/ci.yml/badge.svg">
        </a>
    </div>
    <br>
    <img width="250" src="https://github.com/user-attachments/assets/8d4d3b38-cc03-46e6-9198-85c052ade348" align="center" />
    <div>
    <br>
        <p>
        Tree-sitter grammar for <a href="https://ghostty.org">Ghostty</a> configuration files
        </p>
    </div>
</div>

<img width="973" alt="SCR-20241229-moju" src="https://github.com/user-attachments/assets/1de7cced-b798-4b6c-a847-6936c76d8188" />
<hr>
<img width="973" alt="SCR-20241229-mogq" src="https://github.com/user-attachments/assets/f6a78843-3ef0-479e-b4dc-2268a2b61ce9" />



## TODOs

- Grammar
    - [x] Comments
    - [x] Raw values
    - [x] Numbers
    - [x] Percents
    - [x] Colors 
    - [x] Palette
    - [x] Keybindings
        - [x] Chords
        - [x] Modifiers
        - [x] Actions & arguments
        - [x] Special keys (e.g. `tab`, `space`, `up`)
- [x] Tests
- [x] Capture highlight groups
- [ ] Stable release
    - [ ] Contribute queries to [nvim-treesitter] (No longer accepting experimental parsers)


## Neovim

### lazy.nvim

Add this:

```lua
{
    "bezhermoso/tree-sitter-ghostty",
    build = "make nvim_install",
    ft = "ghostty"
}
```

> [!NOTE]
> Having [nvim-treesitter] installed is not required. However if you have it installed, this plugin will attempt to register
> itself as a parser so that `nvim-treesitter` can manage it e.g. `:TSInstall! ghostty`.

Installing this as a plugin should automatically enable syntax highlighting for Ghostty configuration files located in
expected paths. You can add this line to the top of your config file if its filetype is not detected automatically:

```diff
+# vim: ft=ghostty
 #
 # The rest of your Ghostty configuration 👻...
```

## Helix

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

2. In your `runtime` directory, symlink `./queries/ghostty/highlights.scm` to `grammars/sources/ghostty/queries/highlights.scm`

[Ghostty]: https://ghostty.org
[nvim-treesitter]: https://github.com/nvim-treesitter/nvim-treesitter
