project('maxbbs', ['c', 'cpp'],
  version: '3.0.3+',
  license: 'GPL-2.0-or-later',
  default_options: ['b_lundef=false'])

cc = meson.get_compiler('c')
curses = dependency('ncurses', required: false, disabler: true)
if not curses.found()
  curses_root = get_option('curses_root')
  curses_lib = cc.find_library('curses', dirs : curses_root, required : false, disabler: true)
  curses = declare_dependency(include_directories: curses_root, dependencies: curses_lib)
endif

threads = dependency('threads')

add_project_arguments('-Wno-write-strings', '-Wno-format',
'-Wno-unused-function', '-Wno-sign-compare',
'-Wno-attributes', '-Wno-parentheses', '-Wno-address-of-packed-member',
language: ['c', 'cpp'])

add_project_arguments( '-Wno-pointer-sign', language: ['c'])

add_project_arguments('-DLINUX', '-DUNIX', language: ['c', 'cpp'])
inc = include_directories('unix/include', 'slib', 'max', 'msgapi')

subdir('unix')
subdir('msgapi')
subdir('slib')
subdir('btree')
subdir('mex')
subdir('util')
subdir('lang')
subdir('prot')
subdir('comdll')

subdir('squish')
subdir('sqafix')
subdir('max')
subdir('scripts')

subdir('docs')
subdir('install_tree')
