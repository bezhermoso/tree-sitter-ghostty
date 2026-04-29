# `tests/` — Neovim plugin tests

Tests for the **Neovim plugin integration** (filetype detection, ftplugin,
parser registration, `:checkhealth`), written with [plenary.nvim]'s busted-style
runner. Not related to the tree-sitter grammar — see [`test/`](../test/) for
that.

## Layout

- `nvim/minimal_init.lua` — bootstraps `runtimepath` with this plugin and
  plenary, then sources `ftdetect/*`.
- `nvim/filetype_spec.lua` — confirms `ftdetect/ghostty.vim` claims the right
  paths and ignores unrelated ones.
- `nvim/ftplugin_spec.lua` — confirms `commentstring` is set and a tree-sitter
  parser attaches to a `ghostty` buffer.
- `nvim/parser_registration_spec.lua` — exercises
  `tree-sitter-ghostty.register_parser()` against four scenarios (no
  nvim-treesitter, v0.x via `get_parser_configs()`, v1.x parsers-as-config,
  existing-registration no-overwrite).
- `nvim/health_spec.lua` — captures `vim.health.*` calls and asserts the
  `:checkhealth tree-sitter-ghostty` output for healthy and stubbed-degraded
  environments.

## Running

The parser binary must be built first; the `nvim_test` target handles it:

```sh
make nvim_test
```

To override plenary discovery, set `PLENARY_PATH`:

```sh
PLENARY_PATH=/path/to/plenary.nvim make nvim_test
```

Otherwise the runner looks at `.deps/plenary.nvim`, then common local install
paths under `~/.local/share/nvim`.

In CI these are run by the `nvim-test` job on Ubuntu — see
`.github/workflows/ci.yml`.

[plenary.nvim]: https://github.com/nvim-lua/plenary.nvim
