" Detect configuration files in directories where they likely reside.
" Examples:
"         ~/.config/ghostty/config
"         ~/.config/ghostty/themes/my-theme
"         ~/.config/ghostty/anything.ghostty

au BufNewFile,BufRead *ghostty/config* setfiletype ghostty
au BufNewFile,BufRead *ghostty/themes/* setfiletype ghostty
au BufNewFile,BufRead *.ghostty setfiletype ghostty
