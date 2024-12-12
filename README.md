# tree-sitter-dotenv

tree-sitter grammar for [dotenv](https://dotenvx.com)

## Installation

### Neovim

To use this parser in neovim, you need to configure [nvim-treesitter](https://github.com/nvim-treesitter/nvim-treesitter)

Add this to nvim-treesitter's config function:

```lua
config = function(_, opts)
    local parser_config = require("nvim-treesitter.parsers").get_parser_configs()
    
    -- Tell treesitter where dotenv parser is located
    parser_config.dotenv = {
        install_info = {
            url = "https://github.com/pnx/tree-sitter-dotenv",
            branch = "main",
            files = { "src/parser.c", "src/scanner.c" },
        },
        filetype = "dotenv",
    }

    -- Associate .env files as "dotenv"
    vim.filetype.add({
        pattern = {
            ['.env.*'] = 'dotenv',
        },
    })
end
```

#### Syntax highlighting

In order for neovim to know how to color the text, a `highlights.scm` file is needed.
Copy [highlights.scm](queries/highlights.scm) from this repo to your nvim config under `queries/dotenv/highlights.scm`

## Author

Henrik Hautakoski <henrik.hautakoski@gmail.com>
