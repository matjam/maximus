msgapi_sources = ['msgapi.c', 'sq_area.c', 'sq_msg.c', 'sq_read.c',
                  'sq_write.c', 'sq_kill.c', 'sq_uid.c', 'sq_lock.c',
		  'sq_misc.c', 'sq_help.c', 'sq_idx.c', 'api_sdm.c',
		  'bld.c', 'structrw.c']

msgapi_lib = shared_library('msgapi',
                            msgapi_sources,
			    include_directories: inc,
			    link_with: compat_lib)
