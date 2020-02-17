configure_file(
	configuration: configuration_data({
	 'bindir': get_option('prefix') / get_option('bindir'),
	 'libexecdir': get_option('prefix') / get_option('libexecdir'),
	 'datadir': get_option('prefix') / get_option('datadir'),
	}),
	input: 'maxbbs.in',
	output: 'maxbbs',

	install_dir: get_option('bindir'),
	install_mode: 'rwxr-xr-x')

