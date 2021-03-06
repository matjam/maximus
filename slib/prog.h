/*
 * Maximus Version 3.02
 * Copyright 1989, 2002 by Lanius Corporation.  All rights reserved.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 */

/*# name=General include file.  Lots of machine-dependant stuff here.
*/

#ifndef __PROG_H_DEFINED
#define __PROG_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
#include "compiler.h"
#include "typedefs.h"
#include "stamp.h"

/* For ERRNO definitions */
#define ENOTSAM EXDEV

int _stdc fnsplit(const char *path,char *drive,char *dir,char *name,char *ext);
int _stdc getcurdir(int drive, char *directory);

int fossil_wherex(void);
int fossil_wherey(void);
void fossil_getxy(char *row, char *col);

#define textattr(attr)
#define getdisk()                  get_disk()
#define setdisk(drive)             set_disk(drive)

#define getvect(int)            _dos_getvect(int)
#define setvect(int, func)      _dos_setvect(int, func)

#ifndef inportb
  #define inportb(port)           inp(port)
#endif

#define inport(port)            inpw(port)

#ifndef outportb
  #define outportb(port, byte)    outp(port, byte)
#endif

#define outport(port, byte)     outpw(port, byte)

#if !defined(MK_FP) && !defined(_lint)
  #define MK_FP(seg, off)  (void far *)((unsigned long)(seg)<<16L | (off))
#endif

int _fast lock(int fh, long offset, long len);
int _fast unlock(int fh, long offset, long len);

#ifndef cpp_begin
  #ifdef __cplusplus
    #define cpp_begin()   extern "C" {
    #define cpp_end()     }
  #else
    #define cpp_begin()
    #define cpp_end()
  #endif
#endif

#ifndef TRUE
#define FALSE 0
#define TRUE 1
#endif

#ifdef PATHLEN
#undef PATHLEN
#endif

/* endian definition from configure */
#include "compiler_details.h"

#if !defined(BIG_ENDIAN) && !defined(LITTLE_ENDIAN) && !defined(UNIX)
/* Do OS/2, DOS or Windows run on non-Intel, non-Alpha CPUs?? */
# define LITTLE_ENDIAN
#endif

#if defined(BIG_ENDIAN) && defined(LITTLE_ENDIAN)
# error BIG_ENDIAN and LITTLE_ENDIAN cannot both be defined at the same time!
#endif

#if !defined(BIG_ENDIAN) && !defined(LITTLE_ENDIAN)
# error Either BIG_ENDIAN or LITTLE_ENDIAN must be defined!
#endif

#ifdef __MSDOS__
#define WILDCARD_ALL     "*.*"
#else
#define WILDCARD_ALL     "*"
#endif

#define _PRIVS_NUM         12   /* Maximum priv levels for Maximus         */
#define CHAR_BITS           8   /* Number of bits in a `char' variable     */

#if !defined(UNIX)
# define PATH_DELIM       '\\'   /* Default separator for path specification */
# define PATH_DELIMS      "\\"   /* string format */
# define PATHLEN           120   /* Max. length of a path                   */
# define MAX_DRIVES         26   /* Maximum number of drives on system;     *
                                  * for MS-DOS, A through Z.  Used by       *
                                  * Save_Dir()...                           */
#define NULL_DEVICE	"nul"
#else /* UNIX */
# include <limits.h>
# include "winstr.h"
# define PATH_DELIM	'/'
# define PATH_DELIMS	"/"
# define PATHLEN	PATH_MAX
# define MAX_DRIVES	1	/* Really 0, because it doesn't apply, but using 1 to avoid hidden bugs */
# define NULL_DEVICE	"/dev/null"
#endif

#if !defined(UNIX) 		 /* UNIX version will not use assembly code, so lets find errors during cpp */
# define INTBIT_C        0x0001  /* Carry */
# define INTBIT_P        0x0004  /* Parity */
# define INTBIT_AUX      0x0010  /* Aux carry */
# define INTBIT_Z        0x0040  /* Zero flag */
# define INTBIT_SIG      0x0080  /* Sign flag */
# define INTBIT_TRC      0x0100  /* Trace flag */
# define INTBIT_INT      0x0200  /* Interrupt flag */
# define INTBIT_D        0x0400  /* Direction flag */
# define INTBIT_OVF      0x0800  /* Overflow flag */
#endif

#define ZONE_ALL  56685u
#define NET_ALL   56685u
#define NODE_ALL  56685u
#define POINT_ALL 56685u


#define THIS_YEAR "2004"

#define Hello(prog,desc,version,year) (void)printf("\n" prog "  " desc ", Version %s.\nCopyright " year " by Lanius Corporation.  All rights reserved.\n\n",version)
#define shopen(path,access)   sopen(path,access,SH_DENYNONE,S_IREAD | S_IWRITE)
#define GTdate(s1, s2) (GEdate(s1, s2) && (s1)->ldate != (s2)->ldate)
#define carrier_flag          (prm.carrier_mask)
#define BitOff(a,x)           ((void)((a)[(x)/CHAR_BITS] &= ~(1 << ((x) % CHAR_BITS))))
#define BitOn(a,x)            ((void)((a)[(x)/CHAR_BITS] |= (1 << ((x) % CHAR_BITS))))
#define IsBit(a,x)            ((a)[(x)/CHAR_BITS] & (1 << ((x) % CHAR_BITS)))

/*#define lputs(handle,string)  write(handle,string,strlen(string))*/

#define dim(a)                (sizeof(a)/sizeof(a[0]))
#define eqstr(str1,str2)      (strcmp(str1,str2)==0)
#define eqstrn(str1,str2,n)   (strncmp(str1,str2,n)==0)

#define eqstri(str1,str2)	(stricmp(str1,str2)==0)
#define eqstrni(str1,str2,n)	(strnicmp(str1,str2,n)==0)

#define eqstrin(str1,str2,n)  eqstrni(str1,str2,n)

#define divby(num,div)        ((num % div)==0)

#include "growhand.h"

/* Macros to propercase MS-DOS filenames.  If your OS is case-dependent,
 * use dummy functions instead.
 */

#if !defined(UNIX)
# define fancy_fn(s)           fancy_str(s)
# define cfancy_fn(s)	       cfancy_str(s)
# define upper_fn(s)           strupr(s)
# define lower_fn(s)           strlwr(s)
#else
static inline char *fancy_fn(char *s) { return s; }
static inline char *cfancy_fn(char *s) { return s; }
static inline char *upper_fn(char *s) { return s; }
static inline char *lower_fn(char *s) { return s; }
#endif

#ifndef updcrc
#define updcrc(cp, crc)       (crctab[((crc >> 8) & 255) ^ cp] ^ (crc << 8))
#endif


#ifndef max
#define max(a,b)              (((a) > (b)) ? (a) : (b))
#define min(a,b)              (((a) < (b)) ? (a) : (b))
#endif


/* Don't change this struct!  The code in win_pick.c and max_locl.c relies  *
 * on it as being the same as PLIST...                                      */

struct __priv
{
  char *name;
  int priv;
};



extern char _vstdc months[][10];
extern char _vstdc weekday[][10];

extern char _vstdc months_ab[][4];
extern char _vstdc weekday_ab[][4];

extern struct __priv _vstdc _privs[];

#include "progprot.h"

/* MS docs use both SH_DENYNONE and SH_DENYNO */

#if !defined(SH_DENYNONE) && defined(SH_DENYNO)
  #define SH_DENYNONE SH_DENYNO
#endif

#ifdef UNIX
unsigned long coreleft(void);
#endif

#if !defined(offsetof) && !defined(__WATCOMC__) && !defined(_MSC_VER) && !defined(__TURBOC__) && !defined(__IBMC__) && !defined(__TOPAZ__) && !defined(_lint)
#define offsetof(typename,var) (size_t)(&(((typename *)0)->var))
#endif

#ifdef __TURBOC__
#if __TURBOC__ <= 0x0200
#define offsetof(typename,var) (size_t)(&(((typename *)0)->var))
#endif
#endif

#ifdef __cplusplus
}
#endif

#endif /* __PROG_H_DEFINED */

















