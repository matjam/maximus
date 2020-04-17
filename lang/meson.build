maid = executable('maid', '../util/maid.c',
		  include_directories: inc,
		  link_with: [ compat_lib, max_lib ],

		  install: true,
		  install_dir: get_option('libexecdir') / 'maxbbs')

compiled_language = custom_target('language file',
                         input: 'english.mad',
			 output: 'english.lth',
			 command: [maid, '-d', '-p', '-O@OUTDIR@/', '@INPUT@'])

compiled_language_dep = declare_dependency(
	sources: compiled_language,
	include_directories: include_directories('.')
)
