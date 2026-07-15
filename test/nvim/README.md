# Neovim test configs

This directory contains minimal Neovim configs for testing `tree-sitter-dotenv` with both
legacy and rewritten `nvim-treesitter`.

## Files

- [`init-main.lua`](./init-main.lua) → `nvim-treesitter` `main` (new API)
- [`init-master.lua`](./init-master.lua) → `nvim-treesitter` `master` (legacy API)

## Run

From the repository root, use isolated app names so test state does not mix:

```bash
NVIM_APPNAME=ts-dotenv-main nvim -u "$(pwd)/test/nvim/init-main.lua"
NVIM_APPNAME=ts-dotenv-master nvim -u "$(pwd)/test/nvim/init-master.lua"
```

## Install parser

Run:

```vim
:TSUpdate
:TSInstall dotenv
```

## Verify

Open a `.env` file and check:

```vim
:echo &filetype
```

Expected output: `dotenv`.

### Show the syntax tree

```vim
:InspectTree
```
