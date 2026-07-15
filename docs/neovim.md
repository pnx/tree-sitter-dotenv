# Neovim

## nvim-treesitter

To use this parser in neovim, configure [nvim-treesitter](https://github.com/nvim-treesitter/nvim-treesitter).

For minimal, ready-to-run local test configs (both `main` and legacy `master`), see
[test/nvim/README.md](../test/nvim/README.md).

### nvim-treesitter `main` (new API)

Use this if you are on the rewritten `main` branch (Neovim 0.12+):

```lua
vim.api.nvim_create_autocmd('User', {
    pattern = 'TSUpdate',
    callback = function()
        require('nvim-treesitter.parsers').dotenv = {
            install_info = {
                url = 'https://github.com/pnx/tree-sitter-dotenv',
            },
            filetype = "dotenv"
        }
    end,

    vim.filetype.add({
        filename = {
            ['.env'] = 'dotenv',
        },
        pattern = {
            ['%.env%..+'] = 'dotenv',
        },
    })
})

vim.api.nvim_create_autocmd('FileType', {
  pattern = 'dotenv',
  callback = function() pcall(vim.treesitter.start) end,
})
```

### nvim-treesitter `master` (legacy API)

Use this if you are on the legacy `master` branch (Neovim 0.10/0.11), add this to `config` block:

```lua
config = function(_, opts)
    local parser_config = require("nvim-treesitter.parsers").get_parser_configs()

    -- Tell treesitter where dotenv parser is located
    parser_config.dotenv = {
        install_info = {
            url = "https://github.com/pnx/tree-sitter-dotenv",
            branch = "main",
            files = { "src/parser.c", "src/scanner.c" },
        }
    }

    vim.filetype.add({
        filename = {
            ['.env'] = 'dotenv',
        },
        pattern = {
            ['%.env%..+'] = 'dotenv',
        },
    })
end


```

Then run `:TSInstall dotenv`.

## Syntax highlighting

In order for neovim to know how to color the text, a `highlights.scm` file is needed.
Copy [highlights.scm](../queries/highlights.scm) from this repo to your nvim config under `queries/dotenv/highlights.scm`
