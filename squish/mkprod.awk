# $Id: mkprod.awk,v 1.5 2003/08/16 20:45:01 mbroek Exp $
#

BEGIN	{
		print "#include <stdio.h>"
		print "#include <stdlib.h>"
		print "#include \"prog.h\""
		print "#include \"max.h\""
		print "#include \"squish.h\""		
		print "#include \"s_toss.h\""				
		print ""
		print "struct ftscprod_ products[] = {"
	}
/^[^;]/	{
		if ($2 != "DROPPED")
			print "	{0x" $1 ",(char *)\"" $2 "\"},"
	}
END	{
		print "	{0xff,(char*)0L}"
		print "};"
	}
