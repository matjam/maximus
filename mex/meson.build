bison = find_program('bison', required: true)

mex_parser = custom_target('mex parser',
	input: 'mex_tab.y',
	output: 'max_tab.c',
	command: [bison, '@INPUT@', '--output=@OUTPUT@'])

mexvm_lib = shared_library('mexvm',
	['vm_run.c', 'vm_heap.c', 'vm_symt.c',
	'vm_read.c', 'vm_opcvt.c', 'vm_opflo.c',
	'vm_opfun.c', 'vm_opmth.c', 'vm_opstk.c',
	'vm_opstr.c'],

	include_directories: inc,
	c_args: '-DHEAP_SIGNATURE',

	link_with: msgapi_lib)

executable('mex',
	[mex_parser,
	'sem_decl.c', 'sem_func.c', 'sem_scop.c', 'sem_expr.c',
	'sem_flow.c', 'sem_goto.c', 'sem_gen.c', 'sem_vm.c',

	'mex_main.c', 'mex_lex.c', 'mex_symt.c',
	'mex_misc.c', 'mex_err.c'],

	include_directories: inc,
	c_args: '-DHEAP_SIGNATURE',

	link_with: [msgapi_lib, compat_lib, max_lib])

