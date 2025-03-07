local M = {}

M.register_parser = function()
    local ok, parsers = pcall(require, "nvim-treesitter.parsers")
    if not ok then
        return
    end

    -- Register the plugin path as a tree-sitter parser to nvim-treesitter.
    -- This is not required, but it allows nvim-treesitter to manage it e.g. :TS{Install,Update} ghostty
    local file = debug.getinfo(1).source:match("@(.*/)")
    local plugin_dir = vim.fn.fnamemodify(file, ":p:h:h:h")

    --- @type ParserInfo[]
    local parser_configs

    if type(parsers.get_parser_configs) == "function" then
        parser_configs = parsers.get_parser_configs()
    else
        -- "nvim-treesitter.parsers" exports the parser table itself starting nvim-treesitter v1.x
        parser_configs = parsers
    end

    if type(parser_configs.ghostty) == "table" then
        -- A ghostty parser is already registered. Avoid overwriting it.
        return
    end

    parser_configs.ghostty = {
        install_info = {
            url = plugin_dir,
            files = { "src/parser.c" },
            branch = "main",
        },
        requires_generate_from_grammar = true,
    }
end

return M
