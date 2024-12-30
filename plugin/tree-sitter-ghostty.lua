
local _, ok = pcall(require, "nvim-treesitter.parsers")
if not ok then
  -- nvim-treesitter not found.
  return
end

-- Register the plugin path as a tree-sitter parser to nvim-treesitter.
-- This is not required, but it allows nvim-treesitter to manage it e.g. :TS{Install,Update} ghostty
local file = debug.getinfo(1).source:match("@(.*/)")
local plugin_dir = vim.fn.fnamemodify(file, ":p:h:h")

local parser_configs = require("nvim-treesitter.parsers").get_parser_configs()

parser_configs.ghostty = {
  install_info = {
    url = plugin_dir,
    files = { "src/parser.c" },
    branch = "main",
  },
  requires_generate_from_grammar = true,
}




