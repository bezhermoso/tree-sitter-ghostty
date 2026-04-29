describe("tree-sitter-ghostty.health.check", function()
    local original_health
    local captured

    local function make_stub()
        captured = { start = {}, ok = {}, warn = {}, error = {}, info = {} }
        local stub = {
            start = function(name) table.insert(captured.start, name) end,
            ok = function(msg) table.insert(captured.ok, msg) end,
            warn = function(msg, advice)
                table.insert(captured.warn, { msg = msg, advice = advice })
            end,
            error = function(msg, advice)
                table.insert(captured.error, { msg = msg, advice = advice })
            end,
            info = function(msg) table.insert(captured.info, msg) end,
        }
        stub.report_start = stub.start
        stub.report_ok = stub.ok
        stub.report_warn = stub.warn
        stub.report_error = stub.error
        stub.report_info = stub.info
        return stub
    end

    local function run_check()
        package.loaded["tree-sitter-ghostty.health"] = nil
        require("tree-sitter-ghostty.health").check()
    end

    local function find(list, pattern)
        for _, entry in ipairs(list) do
            local msg = type(entry) == "string" and entry or entry.msg
            if msg:match(pattern) then return entry end
        end
        return nil
    end

    before_each(function()
        original_health = vim.health
        vim.health = make_stub()
    end)

    after_each(function()
        vim.health = original_health
        package.loaded["tree-sitter-ghostty.health"] = nil
    end)

    it("emits a section start", function()
        run_check()
        assert.are.same({ "tree-sitter-ghostty" }, captured.start)
    end)

    it("emits no errors against a healthy tree", function()
        run_check()
        assert.are.equal(0, #captured.error,
            "unexpected health errors: " .. vim.inspect(captured.error))
    end)

    it("reports the parser as loadable", function()
        run_check()
        assert.is_not_nil(find(captured.ok, "Parser `ghostty` loads"))
    end)

    it("reports the highlight query as found", function()
        run_check()
        assert.is_not_nil(find(captured.ok, "Highlight query found"))
    end)

    it("reports filetype detection as registered", function()
        run_check()
        assert.is_not_nil(find(captured.ok, "Filetype detection registered"))
    end)

    it("warns when tree-sitter CLI is older than 0.26", function()
        local original_executable = vim.fn.executable
        local original_system = vim.fn.system
        vim.fn.executable = function(name)
            if name == "tree-sitter" then return 1 end
            return original_executable(name)
        end
        vim.fn.system = function(cmd)
            if type(cmd) == "table" and cmd[1] == "tree-sitter" then
                return "tree-sitter 0.24.7\n"
            end
            return original_system(cmd)
        end

        local ok, err = pcall(run_check)
        vim.fn.executable = original_executable
        vim.fn.system = original_system
        assert.is_true(ok, tostring(err))

        assert.is_not_nil(find(captured.warn, "older than 0.26"))
    end)

    it("reports tree-sitter CLI 0.26+ as ok", function()
        local original_executable = vim.fn.executable
        local original_system = vim.fn.system
        vim.fn.executable = function(name)
            if name == "tree-sitter" then return 1 end
            return original_executable(name)
        end
        vim.fn.system = function(cmd)
            if type(cmd) == "table" and cmd[1] == "tree-sitter" then
                return "tree-sitter 0.26.8\n"
            end
            return original_system(cmd)
        end

        local ok, err = pcall(run_check)
        vim.fn.executable = original_executable
        vim.fn.system = original_system
        assert.is_true(ok, tostring(err))

        assert.is_not_nil(find(captured.ok, "tree%-sitter CLI"))
        assert.is_nil(find(captured.warn, "older than 0.26"))
    end)
end)
