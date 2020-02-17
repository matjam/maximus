comm_sources = ['ipcomm.c', 'common.c', 'modemcom.c', 'wincomm.c']

comm_lib = shared_library('comm',
			  comm_sources,
			  include_directories: inc,

			  install: true,
			  install_dir: get_option('libexecdir') / 'maxbbs')
