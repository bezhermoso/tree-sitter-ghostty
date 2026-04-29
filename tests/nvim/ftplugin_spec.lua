describe("ftplugin/ghostty", function()
    before_each(function()
        vim.cmd("silent! bwipeout!")
        vim.cmd("enew")
    end)

    it("sets the comment string", function()
        vim.bo.filetype = "ghostty"
        assert.are.equal("# %s", vim.bo.commentstring)
    end)

    it("attaches a tree-sitter parser to the buffer", function()
        vim.bo.filetype = "ghostty"
        local ok, parser = pcall(vim.treesitter.get_parser, 0, "ghostty")
        assert.is_true(ok, tostring(parser))
        assert.is_not_nil(parser)
    end)
end)
