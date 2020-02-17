compat_sources = ['adcase.c', 'dosio.c', 'winstr.c', 'conio.c', 'viocurses.c',
                  'dossem.c', 'dosproc.c', 'xpunix.c', 'process.c']

compat_lib = shared_library('compat',
                     compat_sources,
		     include_directories: inc,
		     dependencies: [curses, threads],

		     install: true,
		     install_dir: get_option('libexecdir') / 'maxbbs')
