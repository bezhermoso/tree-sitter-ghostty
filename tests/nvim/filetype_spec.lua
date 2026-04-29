describe("ftdetect/ghostty", function()
    local function ft_for(path)
        vim.cmd("silent! bwipeout!")
        vim.cmd("silent edit " .. vim.fn.fnameescape(path))
        return vim.bo.filetype
    end

    it("matches ~/.config/ghostty/config", function()
        assert.are.equal("ghostty", ft_for("/tmp/test/ghostty/config"))
    end)

    it("matches files inside ghostty/themes/", function()
        assert.are.equal("ghostty", ft_for("/tmp/test/ghostty/themes/my-theme"))
    end)

    it("matches ghostty/config-foo (suffixed config)", function()
        assert.are.equal("ghostty", ft_for("/tmp/test/ghostty/config-local"))
    end)

    it("matches *.ghostty files (Ghostty 1.3+ config-dir loader)", function()
        assert.are.equal("ghostty", ft_for("/tmp/test/ghostty/extra.ghostty"))
    end)

    it("matches *.ghostty files outside ghostty/ directories", function()
        assert.are.equal("ghostty", ft_for("/tmp/test/some/where/snippet.ghostty"))
    end)

    it("does not claim unrelated paths", function()
        assert.are_not.equal("ghostty", ft_for("/tmp/test/some/random.txt"))
    end)
end)
