squish_sources = [ 'squish.c', 's_abbs.c', 's_config.c', 's_scan.c',
                   's_toss.c', 's_pack.c', 's_squash.c', 's_match.c',
		   's_log.c', 's_misc.c', 's_hole.c', 's_link.c', 's_busy.c',
		   's_stat.c', 's_sflo.c', 's_thunk.c', 's_dupe.c', 'bld.c' ]

killrcat_lib = shared_library('killrcat', 'killrcat.c', include_directories: inc)
msgtrack_lib = shared_library('msgtrack', 'msgtrack.c', include_directories: inc)


squish = executable('squish',
                    squish_sources,
		    include_directories: inc,
		    link_with: [ msgapi_lib, compat_lib, max_lib ],
		    dependencies: cc.find_library('dl'),
		    c_args: '-DINSTALL_PREFIX="' + get_option('prefix') + '"')

sqfix = executable('sqfix', 'sqfix.c', include_directories: inc, link_with: [ msgapi_lib, compat_lib, max_lib ])
sqpack = executable('sqpack', 'sqpack.c', include_directories: inc, link_with: [ msgapi_lib, compat_lib, max_lib ])
sqconv = executable('sqconv', 'sqconv.c', include_directories: inc, link_with: [ msgapi_lib, compat_lib, max_lib ])
sqinfo = executable('sqinfo', 'sqinfo.c', include_directories: inc, link_with: [ msgapi_lib, compat_lib, max_lib ])
sqset = executable('sqset', 'sqset.c', include_directories: inc, link_with: [ msgapi_lib, compat_lib, max_lib ])
sstat = executable('sstat', 'sstat.c', include_directories: inc, link_with: [ msgapi_lib, compat_lib, max_lib ])
sqreidx = executable('sqreidx', 'sqreidx.c', include_directories: inc, link_with: [ msgapi_lib, compat_lib, max_lib ])
