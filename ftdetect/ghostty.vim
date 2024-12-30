" Detect configuration files in directories where they likely reside.
" Examples:
"         ~/.config/ghostty/config
"         ~/.config/ghostty/themes/my-theme

au BufNewFile,BufRead *ghostty/config* setfiletype ghostty
au BufNewFile,BufRead *ghostty/themes/* setfiletype ghostty
