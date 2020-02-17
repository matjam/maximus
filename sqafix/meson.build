sqafix_sources = [ 'crc32.c', 'lst-mngr.c', 'sqaarc.c', 'sqacfg.c',
                   'sqafix.c', 'sqamsg.c', 'sqastr.c', 'sqaexe.c',
		   'fnmerge.c', 'unixmisc.c', 'sqauti.c' ]

sqafix = executable('sqafix',
                    sqafix_sources,
		    include_directories: inc,
		    link_with: [ msgapi_lib, compat_lib, max_lib ],
		    c_args: '-DINSTALL_PREFIX="' + get_option('prefix') + '"',

		    install: true,
		    install_dir: get_option('libexecdir') / 'maxbbs')
