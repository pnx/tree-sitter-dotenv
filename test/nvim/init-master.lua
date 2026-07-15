local script_dir = vim.fn.fnamemodify(debug.getinfo(1, "S").source:sub(2), ":p:h")
local repo_root = vim.fn.fnamemodify(vim.fn.fnamemodify(script_dir, ":h"), ":h")

local lazypath = vim.fn.stdpath("data") .. "/lazy/lazy.nvim"
if not vim.loop.fs_stat(lazypath) then
  vim.fn.system({
    "git",
    "clone",
    "--filter=blob:none",
    "https://github.com/folke/lazy.nvim.git",
    "--branch=stable",
    lazypath,
  })
end
vim.opt.runtimepath:prepend(lazypath)

require("lazy").setup({
  {
    "nvim-treesitter/nvim-treesitter",
    branch = "master",
    lazy = false,
    build = ":TSUpdate",
    opts = {
        highlight = { enable = true },
    },
    config = function(_, opts)
        local parser_config = require("nvim-treesitter.parsers").get_parser_configs()
        parser_config.dotenv = {
            install_info = {
                url = repo_root,
                files = { "src/parser.c", "src/scanner.c" },
            },
            filetype = "dotenv",
        }

        vim.filetype.add({
            filename = { [".env"] = "dotenv" },
            pattern = { [".env%..+"] = "dotenv" },
        })
    end
  },
})

