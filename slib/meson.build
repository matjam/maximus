smserial_sources = ['smserial.c']
max_sources = [
	'hread.c',
	'areaapi.c', 'userapi.c', 'md5.c',
	'nopen.c', 'fd2n.c', 'isdevice.c',
	'brktrap.c', 'ncheck.c', 'timer.c', '1stchar.c',
	'getword.c', 'avatar.c', 'fncystr.c', 'months.c',
	'fexist.c', 'stristr.c', 'putss.c',
	'zfree.c', 'qksort.c', 'memstr.c', 'hprintf.c',
	'savedir.c', 'xprintf.c',
	'xputs.c', 'crep.c', 'strstrx.c',
	'aname.c', 'ffind.c', 'fdate.c', 'gedate.c',
	'priv.c', 'getdisk.c', 'setdisk.c', 'weekday.c',
	'get_fdt.c', 'set_fdt.c', 'c2s.c', 'makedir.c',
	'sfopen.c', 'shfopen.c', 'gwordq.c',
	'ffname.c', 'sbs.c', 'isleap.c', 'tdelay.c',
	'dmalloc.c', 'noise.c', 'tune.c', 'date2bin.c',
	'dosdate.c', 'flush.c', 'win.c',
	'cvtdate.c', 'trail.c', 'parsenn.c', 'qslist.c',
	'lcopy.c', 'fnsplit.c', 'uniqren.c', 'mktemp.c',
	'soundex.c', 'address.c',
	'win_pick.c', 'arc_def.c', 'coreleft.c',
	'smalloc.c', 'strocpy.c',
	'cshopen.c', 'crc32.c', 'crc16.c', 'strrstr.c',
	'skiplist.c', 'acomp.c', 'arc_cmd.c',
	'arcmatch.c', 'bfile.c', 'bprintf.c',
	'setfsize.c', 'cstrupr.c', 'strnncpy.c',
	'getmax.c', 'prmapi.c', 'strbuf.c',
	'unix_misc.c', 'vio.c', 'align.c',
	'os2key.c', 'os2file.c']

smserial_lib = shared_library('smserial',
                              smserial_sources,
                              include_directories: inc,
			      link_with: compat_lib,
			      dependencies: [curses, threads],

			      install: true,
			      install_dir: get_option('libexecdir') / 'maxbbs')

max_lib = shared_library('max',
                         max_sources,
                         include_directories: inc,
			 link_with: compat_lib,
			 dependencies: [curses, threads],

			 install: true,
			 install_dir: get_option('libexecdir') / 'maxbbs')
