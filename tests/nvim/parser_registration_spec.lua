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

    it("registers via get_parser_configs() (nvim-treesitter v0.x)", function()
        local cfgs = {}
        package.loaded["nvim-treesitter.parsers"] = {
            get_parser_configs = function() return cfgs end,
        }
        require("tree-sitter-ghostty").register_parser()
        assert.is_table(cfgs.ghostty)
        assert.is_table(cfgs.ghostty.install_info)
        assert.are.same({ "src/parser.c" }, cfgs.ghostty.install_info.files)
        assert.is_true(cfgs.ghostty.requires_generate_from_grammar)
    end)

    it("registers via the parsers table directly (nvim-treesitter v1.x)", function()
        local fake = {}
        package.loaded["nvim-treesitter.parsers"] = fake
        require("tree-sitter-ghostty").register_parser()
        assert.is_table(fake.ghostty)
        assert.is_table(fake.ghostty.install_info)
    end)

    it("does not overwrite an existing ghostty registration", function()
        local existing = {
            install_info = { url = "elsewhere", files = {}, branch = "x" },
        }
        local cfgs = { ghostty = existing }
        package.loaded["nvim-treesitter.parsers"] = {
            get_parser_configs = function() return cfgs end,
        }
        require("tree-sitter-ghostty").register_parser()
        assert.are.equal(existing, cfgs.ghostty)
    end)
end)
