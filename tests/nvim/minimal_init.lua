-- Minimal init for plenary.nvim test runs.
-- Usage:
--   nvim --headless --noplugin -u tests/nvim/minimal_init.lua \
--     -c "PlenaryBustedDirectory tests/nvim {minimal_init='tests/nvim/minimal_init.lua'}"

local function plugin_root()
    local file = debug.getinfo(1, "S").source:sub(2)
    return vim.fn.fnamemodify(file, ":p:h:h:h")
end

local root = plugin_root()
vim.opt.runtimepath:prepend(root)

local function find_plenary()
    local explicit = os.getenv("PLENARY_PATH")
    if explicit and explicit ~= "" and vim.fn.isdirectory(explicit) == 1 then
        return explicit
    end
    local candidates = {
        root .. "/.deps/plenary.nvim",
        vim.fn.expand("~/.local/share/nvim/site/pack/vendor/start/plenary.nvim"),
        vim.fn.expand("~/.local/share/nvim/lazy/plenary.nvim"),
    }
    for _, dir in ipairs(candidates) do
        if vim.fn.isdirectory(dir) == 1 then
            return dir
        end
    end
    return nil
end

local plenary = find_plenary()
if not plenary then
    io.stderr:write("ERROR: plenary.nvim not found. Set PLENARY_PATH or clone into .deps/plenary.nvim\n")
    os.exit(1)
end
vim.opt.runtimepath:prepend(plenary)

vim.cmd("runtime plugin/plenary.vim")
vim.cmd("filetype plugin on")
vim.cmd("runtime! ftdetect/*.vim")
vim.cmd("runtime! ftdetect/*.lua")
