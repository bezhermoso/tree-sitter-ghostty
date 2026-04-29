# `test/` — tree-sitter grammar tests

Tests for the **tree-sitter grammar itself**, exercised by the `tree-sitter`
CLI. Not related to the Neovim plugin — see [`tests/`](../tests/) for that.

## Layout

- `corpus/` — parser corpus tests. Each `.txt` file contains one or more
  `===`-delimited cases pairing a Ghostty config snippet with its expected
  syntax tree. Read by `tree-sitter test`.
- `config` — a representative Ghostty configuration used as a real-world
  fixture. Useful for ad-hoc parses and visual checks.

## Running

```sh
make test            # → tree-sitter test
tree-sitter test     # equivalent
```

In CI these are run by `tree-sitter/parser-test-action@v3` across Linux,
Windows, and macOS — see `.github/workflows/ci.yml`.
