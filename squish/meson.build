squish_sources = [ 'squish.c', 's_abbs.c', 's_config.c', 's_scan.c',
                   's_toss.c', 's_pack.c', 's_squash.c', 's_match.c',
		   's_log.c', 's_misc.c', 's_hole.c', 's_link.c', 's_busy.c',
		   's_stat.c', 's_sflo.c', 's_dupe.c', 'bld.c' ]

killrcat_lib = shared_library('killrcat',
	'killrcat.c',

	include_directories: inc,

	install: true,
	install_dir: get_option('libexecdir') / 'maxbbs')

msgtrack_lib = shared_library('msgtrack',
	'msgtrack.c',

	include_directories: inc,

	install: true,
	install_dir: get_option('libexecdir') / 'maxbbs')


squish = executable('squish',
                    squish_sources,

		    include_directories: inc,
		    c_args: '-DINSTALL_PREFIX="' + get_option('prefix') + '"',

		    link_with: [ msgapi_lib, compat_lib, max_lib ],
		    dependencies: cc.find_library('dl'),

		    install: true,
		    install_dir: get_option('libexecdir') / 'maxbbs')

sqfix = executable('sqfix',
	'sqfix.c',

	include_directories: inc,
	link_with: [ msgapi_lib, compat_lib, max_lib ],

	install: true,
	install_dir: get_option('libexecdir') / 'maxbbs')

sqpack = executable('sqpack',
	'sqpack.c',

	include_directories: inc,
	link_with: [ msgapi_lib, compat_lib, max_lib ],

	install: true,
	install_dir: get_option('libexecdir') / 'maxbbs')

sqconv = executable('sqconv',
	'sqconv.c',

	include_directories: inc,
	link_with: [ msgapi_lib, compat_lib, max_lib ],

	install: true,
	install_dir: get_option('libexecdir') / 'maxbbs')

sqinfo = executable('sqinfo',
	'sqinfo.c',

	include_directories: inc,
	link_with: [ msgapi_lib, compat_lib, max_lib ],

	install: true,
	install_dir: get_option('libexecdir') / 'maxbbs')

sqset = executable('sqset',
	'sqset.c',

	include_directories: inc,
	link_with: [ msgapi_lib, compat_lib, max_lib ],

	install: true,
	install_dir: get_option('libexecdir') / 'maxbbs')

sstat = executable('sstat',
	'sstat.c',

	include_directories: inc,
	link_with: [ msgapi_lib, compat_lib, max_lib ],

	install: true,
	install_dir: get_option('libexecdir') / 'maxbbs')

sqreidx = executable('sqreidx',
	'sqreidx.c',

	include_directories: inc,
	link_with: [ msgapi_lib, compat_lib, max_lib ],

	install: true,
	install_dir: get_option('libexecdir') / 'maxbbs')
