mecca_vb = custom_target('mecca_vb.h',
	input: 'mecca_vb.h.in',
	output: 'mecca_vb.h',
	capture: true,
	command: ['sort', '@INPUT@'])

mecca = executable('mecca', [ 'mecca.c', 'init.c', mecca_vb ],
		   include_directories: inc,
                   link_with: [ compat_lib, msgapi_lib, max_lib ],

		   install: true,
		   install_dir: get_option('libexecdir') / 'maxbbs')

accem = executable('accem', [ 'accem.c', 'init.c', mecca_vb ],
		   include_directories: inc,
                   link_with: [ compat_lib, msgapi_lib, max_lib ],

		   install: true,
		   install_dir: get_option('libexecdir') / 'maxbbs')

ansi2bbs = executable('ansi2bbs', 'ansi2bbs.c',
		      include_directories: inc,
		      c_args: '-DANSI2BBS',
                      link_with: [ compat_lib, msgapi_lib, max_lib ],

		      install: true,
		      install_dir: get_option('libexecdir') / 'maxbbs')

ansi2mec = executable('ansi2mec', 'ansi2bbs.c',
		      include_directories: inc,
		      c_args: '-DANSI2MEC',
                      link_with: [ compat_lib, msgapi_lib, max_lib ],

		      install: true,
		      install_dir: get_option('libexecdir') / 'maxbbs')

scanbld = executable('scanbld', [ 'cppmain.cc', 'scanbld.c' ],
                     include_directories: inc,
                     link_with: [ compat_lib, msgapi_lib, max_lib ],

		     install: true,
		     install_dir: get_option('libexecdir') / 'maxbbs')

cvtusr = executable('cvtusr', [ 'cvtusr.c', 'cppmain.cc', 'cvt_misc.c' ],
		    include_directories: inc,
                    link_with: [ compat_lib, msgapi_lib, max_lib ],

		    install: true,
		    install_dir: get_option('libexecdir') / 'maxbbs')

editcall = executable('editcall', 'editcall.c',
		      include_directories: inc,
                      link_with: msgapi_lib,

		      install: true,
		      install_dir: get_option('libexecdir') / 'maxbbs')

mr = executable('mr', 'mr.c',
		include_directories: inc,
                link_with: [ compat_lib, msgapi_lib, max_lib ],

		install: true,
		install_dir: get_option('libexecdir') / 'maxbbs')

fixlr = executable('fixlr', 'fixlr.c',
		   include_directories: inc,
                   link_with: [ compat_lib, msgapi_lib, max_lib ],

		   install: true,
		   install_dir: get_option('libexecdir') / 'maxbbs')

setlr = executable('setlr', 'setlr.c',
		   include_directories: inc,
                   link_with: [ compat_lib, msgapi_lib, max_lib ],

		   install: true,
		   install_dir: get_option('libexecdir') / 'maxbbs')

fb = executable('fb', 'fb.c',
		include_directories: inc,
                link_with: [ compat_lib, msgapi_lib, max_lib ],

		install: true,
		install_dir: get_option('libexecdir') / 'maxbbs')

silt = executable('silt',
                  ['silt.c', 'cppmain.cc', 's_equip.c', 's_matrix.c',
	          's_menu.c', 's_misc.c', 's_parse.c', 's_sessio.c',
	          's_system.c', 's_reader.c', 's_lang.c', 's_colour.c',
	          's_proto.c', 's_marea.c', 's_farea.c', 's_heap.c',
	          's_area.c', 's_access.c', '../max/l_attach.c', '../max/max2priv.c'],
	          include_directories: [ inc, include_directories('../lang', '../btree') ],
	          dependencies: compiled_language_dep,
                  link_with: [ msgapi_lib, maxbt_lib, maxdb_lib, max_lib, compat_lib ],

		  install: true,
		  install_dir: get_option('libexecdir') / 'maxbbs')

maxcomm = executable('maxcomm', 'maxcomm.c',
		     include_directories: inc,
                     link_with: msgapi_lib,

		     install: true,
		     install_dir: get_option('libexecdir') / 'maxbbs')
