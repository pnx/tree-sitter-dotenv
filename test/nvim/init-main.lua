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
    branch = "main",
    lazy = false,
    config = function (_, opts)
        require("nvim-treesitter").setup({})

        vim.api.nvim_create_autocmd("User", {
            pattern = "TSUpdate",
            callback = function()
                require("nvim-treesitter.parsers").dotenv = {
                    install_info = {
                        path = repo_root,
                    },
                }
            end,
        })

        vim.filetype.add({
            filename = { [".env"] = "dotenv" },
            pattern = { [".env%..+"] = "dotenv" },
        })

        vim.api.nvim_create_autocmd("FileType", {
            pattern = "dotenv",
            callback = function()
                pcall(vim.treesitter.start)
            end,
        })
    end
  },
})

