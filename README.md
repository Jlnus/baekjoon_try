
# .zshrc
PS1='%F{#f5fafa}[%F{#00f2f2}%m%F{#f5fafa}] %F{#fa96af}%~
%b%F{#80f000}>%f '

source ~/.zsh/zsh-syntax-highlighting/zsh-syntax-highlighting.zsh

source ~/.zsh/zsh-autosuggestions/zsh-autosuggestions.zsh

alias gccw='gcc -Wextra -Werror -Wall'

alias py='winpty python.exe'

alias l='ls -la --color=auto'
