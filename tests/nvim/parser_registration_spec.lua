describe("tree-sitter-ghostty.register_parser", function()
    local saved

    before_each(function()
        saved = package.loaded["nvim-treesitter.parsers"]
        package.loaded["nvim-treesitter.parsers"] = nil
    end)

    after_each(function()
        package.loaded["nvim-treesitter.parsers"] = saved
    end)

    it("is a no-op when nvim-treesitter is not installed", function()
        local ok, err = pcall(function()
            require("tree-sitter-ghostty").register_parser()
        end)
        assert.is_true(ok, tostring(err))
    end)
end)
