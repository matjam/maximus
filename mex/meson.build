bison = find_program('bison', required: true)

mex_parser = custom_target('mex parser',
	input: 'mex_tab.y',
	output: ['mex_tab.c', 'mex_tab.h'],
	command: [bison, '@INPUT@', '--defines=@OUTPUT1@', '--output=@OUTPUT0@'])

mexvm_lib = shared_library('mexvm',
	['vm_run.c', 'vm_heap.c', 'vm_symt.c',
	'vm_read.c', 'vm_opcvt.c', 'vm_opflo.c',
	'vm_opfun.c', 'vm_opmth.c', 'vm_opstk.c',
	'vm_opstr.c',
	mex_parser[1]],

	include_directories: inc,
	c_args: '-DHEAP_SIGNATURE',

	link_with: msgapi_lib,

	install: true,
	install_dir: get_option('libexecdir') / 'maxbbs')

executable('mex',
	[mex_parser,
	'sem_decl.c', 'sem_func.c', 'sem_scop.c', 'sem_expr.c',
	'sem_flow.c', 'sem_goto.c', 'sem_gen.c', 'sem_vm.c',

	'mex_main.c', 'mex_lex.c', 'mex_symt.c',
	'mex_misc.c', 'mex_err.c'],

	include_directories: inc,
	c_args: '-DHEAP_SIGNATURE',

	link_with: [msgapi_lib, compat_lib, max_lib],

	install: true,
	install_dir: get_option('libexecdir') / 'maxbbs')
