local M = {}

local h = vim.health
local start = h.start or h.report_start
local ok = h.ok or h.report_ok
local warn = h.warn or h.report_warn
local err = h.error or h.report_error
local info = h.info or h.report_info

local function nvim_version()
    local v = vim.version()
    return ("%d.%d.%d"):format(v.major, v.minor, v.patch)
end

local function load_parser()
    local pok, loaded, errmsg = pcall(vim.treesitter.language.add, "ghostty")
    if not pok then
        return false, tostring(loaded)
    end
    if loaded == false then
        return false, tostring(errmsg or "unknown error")
    end
    return true
end

local function check_highlight_query()
    local files = vim.api.nvim_get_runtime_file("queries/ghostty/highlights.scm", true)
    if #files == 0 then
        return false, nil
    end
    local qok, query = pcall(vim.treesitter.query.get, "ghostty", "highlights")
    if not qok or query == nil then
        return false, files[1]
    end
    return true, files[1]
end

function M.check()
    start("tree-sitter-ghostty")

    if vim.fn.has("nvim-0.9") == 1 then
        info("Neovim " .. nvim_version())
    else
        err("Neovim >= 0.9 is required (for vim.treesitter.start)")
    end

    local ext = vim.fn.has("win32") == 1 and "dll" or "so"
    local parser_files = vim.api.nvim_get_runtime_file("parser/ghostty." .. ext, true)
    if #parser_files == 0 then
        err(("Parser binary `parser/ghostty.%s` was not found on runtimepath"):format(ext), {
            "Build it with `make nvim_install` from the plugin directory.",
            "With lazy.nvim, set `build = \"make nvim_install\"` on the plugin spec.",
            "Ensure the plugin directory is on `:set runtimepath?`.",
        })
    else
        info("Parser binary: " .. parser_files[1])
        local lok, lerr = load_parser()
        if lok then
            ok("Parser `ghostty` loads")
        else
            err("Parser `ghostty` failed to load: " .. lerr, {
                "Rebuild the parser with `make nvim_install`.",
                "Verify the binary's tree-sitter ABI matches this Neovim build.",
            })
        end
    end

    local hl_ok, hl_path = check_highlight_query()
    if hl_ok then
        ok("Highlight query found: " .. hl_path)
    elseif hl_path then
        err("Highlight query at " .. hl_path .. " could not be parsed", {
            "The parser must be loadable for the query to compile.",
        })
    else
        err("Highlight query `queries/ghostty/highlights.scm` not found on runtimepath", {
            "Ensure the plugin directory is on `:set runtimepath?`.",
        })
    end

    local ftdetect = vim.api.nvim_get_runtime_file("ftdetect/ghostty.vim", true)
    if #ftdetect == 0 then
        warn("`ftdetect/ghostty.vim` not found on runtimepath", {
            "Force the filetype manually with `# vim: ft=ghostty` at the top of the file.",
        })
    else
        ok("Filetype detection registered")
    end

    local has_nts, parsers = pcall(require, "nvim-treesitter.parsers")
    if has_nts then
        local cfgs = type(parsers.get_parser_configs) == "function"
                and parsers.get_parser_configs()
            or parsers
        if type(cfgs.ghostty) == "table" then
            ok("nvim-treesitter: `ghostty` parser is registered")
        else
            warn("nvim-treesitter is installed but `ghostty` is not registered", {
                "Verify `plugin/tree-sitter-ghostty.lua` is being sourced.",
            })
        end
    else
        info("nvim-treesitter not installed (optional)")
    end

    if vim.fn.executable("tree-sitter") == 1 then
        local out = vim.trim(vim.fn.system({ "tree-sitter", "--version" }))
        local major, minor, patch = out:match("(%d+)%.(%d+)%.(%d+)")
        if major then
            local version = ("%d.%d.%d"):format(major, minor, patch)
            if tonumber(major) == 0 and tonumber(minor) < 26 then
                warn(("tree-sitter CLI %s is older than 0.26"):format(version), {
                    "Upgrade to tree-sitter-cli >= 0.26; older versions cannot build this grammar.",
                })
            else
                ok("tree-sitter CLI: " .. version)
            end
        else
            warn("Could not parse tree-sitter CLI version from: " .. out)
        end
    else
        warn("`tree-sitter` not in PATH", {
            "Required to (re)build the parser via `make nvim_install`.",
            "Install tree-sitter-cli >= 0.26.",
        })
    end

    if vim.fn.executable("make") == 1 then
        ok("`make` is available")
    else
        warn("`make` not in PATH", {
            "Required to (re)build the parser via `make nvim_install`.",
        })
    end
end

return M
