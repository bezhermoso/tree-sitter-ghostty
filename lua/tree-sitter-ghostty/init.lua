local M = {}

M.register_parser = function()
    local file = debug.getinfo(1).source:match("@(.*/)")
    local plugin_dir = vim.fn.fnamemodify(file, ":p:h:h:h")

    vim.api.nvim_create_autocmd('User', {
        pattern = 'TSUpdate',
        callback = function()
            ---@diagnostic disable: missing-fields
            require('nvim-treesitter.parsers').ghostty = {
                install_info = {
                    path = plugin_dir,
                    generate = true
                },
            }
        end
    })
end

return M
