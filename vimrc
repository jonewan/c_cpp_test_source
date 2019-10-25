" ===
" 插件安装
" ===
call plug#begin('~/.vim/plugged')
" YoucompleteMe
Plug 'ycm-core/YouCompleteMe'

" Error checking
Plug 'dense-analysis/ale'
Plug 'scrooloose/nerdtree'
call plug#end()
"-------------------------------

" 插件配置
" ===
" === You Complete ME
" ===
nnoremap gd :YcmCompleter GoToDefinitionElseDeclaration<CR>
nnoremap g/ :YcmCompleter GetDoc<CR>
nnoremap gt :YcmCompleter GetType<CR>
nnoremap gr :YcmCompleter GoToReferences<CR>
let g:ycm_autoclose_preview_window_after_completion=0
let g:ycm_autoclose_preview_window_after_insertion=1
let g:ycm_use_clangd = 0
let g:ycm_python_interpreter_path = "/usr/bin/python3"
let g:ycm_python_binary_path = "/usr/bin/python3"
let g:ycm_global_ycm_extra_conf='~/.vim/.ycm_extra_conf.py'
let g:ycm_complete_in_comments=1
let g:ycm_min_num_of_chars_for_completion=1
" use ide style
set completeopt=longest,menu
" ===
" === ale
" ===
let b:ale_linters = ['pylint']
let b:ale_fixers = ['autopep8', 'yapf']
" ===
" === nerdtree
" ===
map <c-n> :NERDTreeToggle<CR>
let g:NERDTreeDirArrowExpandable = '▸' 
let g:NERDTreeDirArrowCollapsible = '▾'

"-------------------------------
" 选择配色方案
colo pablo

" 禁止生成临时文件
set nobackup
set noswapfile

" 搜索忽略大小写
set ignorecase
set smartcase

" 搜索逐字符高亮
set hlsearch
exec "nohlsearch"
set incsearch
noremap = nzz
noremap - Nzz
noremap <space><CR> :nohlsearch<CR>

" 可以在有buffer的地方使用鼠标
set mouse=a
set selection=exclusive
set selectmode=mouse,key

" 历史记录数
set history=1000

" 编码设置
set enc=utf-8
set fencs=utf-8,ucs-bom,shift-jis,gb18030,gbk,gb2312,cp936

" 语言设置
set langmenu=zh_CN.UTF-8
set helplang=cn

" 增强模式中的命令行自动完成操作
set wildmenu

" 显示行号
set number

" 去掉讨厌的有关vi一致性模式，避免以前版本的一些bug和局限
set nocompatible

" 通过使用: commands命令，告诉我们文件的哪一行被改变过
set report=0

" 打开标尺
set ruler

" 显示底部8行
set scrolloff=8

" 左右上下分屏快捷键
map sk :set nosplitbelow<CR>:split<CR>
map sj :set splitbelow<CR>:split<CR>
map sl :set splitright<CR>:vsplit<CR>
map sh :set nosplitright<CR>:vsplit<CR>

" 映射space键用于分屏切换
map <space>l <C-w>l
map <space>h <C-w>h
map <space>j <C-w>j
map <space>k <C-w>k

" 显示输入的命令
set showcmd

" 设置自动缩进
set ai

" 高亮显示匹配的括号
set showmatch
set showmode

" 状态行显示的内容（包括文件类型和解码）
set statusline=%F%m%r%h%w\ [FORMAT=%{&ff}]\ [TYPE=%Y]\ [POS=%l,%v][%p%%]\ %{strftime(\"%d/%m/%y\ -\ %H:%M\")}
set statusline=[%F]%y%r%m%*%=[Line:%l/%L,Column:%c][%p%%]

" 总是显示状态行
set laststatus=2

" Tab键的宽度
set tabstop=2
" 统一缩进为2
set softtabstop=2
set shiftwidth=2
" 不要用空格代替制表符
set noexpandtab

" 保存全局变量
set viminfo+=!

" 为C程序提供自动缩进
set smartindent

" 开启terminal Color 256色
set t_Co=256

" 指定在选择文本时，光标所在位置也属于被选中的范围
set selection=inclusive

" 语法高亮
syntax on

" 使用粘贴模式
set paste

" SHIFT+s 保存
map S :w<CR>
map s <nop>
" SHIFT+q 退出
map Q :q<CR>
" 设置光标横线
set cursorline
" 自动换行
set wrap

" 保持所有终端配色一致
let &t_ut=''
" 让vim支持多文件格式
filetype on
filetype indent on
filetype plugin on
filetype plugin indent on

" 显示所有空格
"set list

set autochdir

"在打开多文件下，退出当前文件，光标保持在上次编辑的位置
au BufReadPost * if line("'\"") > 1 && line("'\"") <= line("$") | exe "normal! g'\"" | endif

