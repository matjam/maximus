maxbt_sources = ['btree.cc',
                 'bt_ins.cc', 'bt_open.cc', 'bt_rem.cc', 'bt_look.cc',
		 'btnode.cc', 'palist.cc', 'btreec.cc',
		 'blkio.cc', 'bbuf.cc', 'blkiobuf.cc',
		 'dllc.c']

maxdb_sources = ['dbase.cc', 'dbasec.cc', 'track.cc', 'trackc.cc', 'dllc.c']
maxbt_lib = shared_library('maxbt',
                           maxbt_sources,
			   include_directories: inc,
			   link_with: max_lib)
maxdb_lib = shared_library('maxdb',
                           maxdb_sources,
			   include_directories: inc,
			   link_with: maxbt_lib)
