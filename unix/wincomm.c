/**
 * @file 	wincomm.c	WinNT-style Comm functions for UNIX
 * @version	$Id:$
 * @author 	Wes Garland
 * @date	May 13 2003
 * @description	Fudge routines/hooks for the comm library and asyncnt.c.
 * 		Designed to replace WinNT functions of the same names.
 *  
 * $Log: $
 */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "prog.h"
#include "wincomm.h"

/** UNIX approximation for information referenced in Windows by
 *  an hfComm/COMMHANDLE. In Windows, this is basically like a
 *  file descriptor (HFILE) with the extra settings being magically
 *  returned by some internal table in the kernel. We abstract this
 *  away from a plain file descriptor for two reasons:
 *
 *  1. To contain the required information without keeping track
 *     of some magic internal table
 *
 *  2. To insure that we use the correct functions to coerce one
 *     type from another, rather than casting. This forces us
 *     (at compile time, hopefully) to use the correct routines
 *     for opening/closing a comm handle.
 *
 *  The extra information in Windows is somewhat like like ioctl
 *  or the POSIX termios details the tty device driver holds;
 *  by they are not quite the same. So getting them from the
 *  structures, and setting them to the structures + termios
 *  gives us a good, portable implementation -- across unices
 *  -and- other platforms.
 */
struct _COMMHANDLE
{
  int 			fd;		/**< UNIX file descriptor */
  struct _DCB		DCB;		/**< Windows DCB struct (data control block?) */
  struct _COMMTIMEOUTS	CT;		/**< Windows communications timeout structure */
  size_t		txBufSize;	/**< Transmit Buffer Size */
  size_t		rxBufSize;	/**< Receive Buffer Size */
};

BOOL SetCommState(hfComm hFile, LPDCB lpDCB)
{
  lpDCB->DCBlength 	= sizeof(*lpDCB);
  lpDCB->fNull 		= FALSE;
  lpDCB->fAbortOnError 	= FALSE;

  hFile->DCB = *lpDCB;

  return TRUE;
}

BOOL GetCommState(hfComm hFile, LPDCB lpDCB)
{
  *lpDCB = hFile->DCB;
  return TRUE;
}

BOOL SetCommMask(hfComm hFile, DWORD dwEvtMask)
{
  return TRUE;
}

/** Set the communications timeout values. These values are
 *  actually used by the UNIX mode comm drivers... but I
 *  don't think anything else does.
 *
 *  Recall that some timeout values in here are 16 ticks = 1ms.
 *  Will document more later (check msdn.com in the interm)
 */
BOOL SetCommTimeouts(COMMHANDLE hFile, LPCOMMTIMEOUTS lpCommTimeouts)
{
  hFile->CT = *lpCommTimeouts;    
  return TRUE;
}

/** Get the communications timeout values set by SetCommTimeouts() */
BOOL GetCommTimeouts(COMMHANDLE hFile, LPCOMMTIMEOUTS lpCommTimeouts)
{
  *lpCommTimeouts = hFile->CT;
  return TRUE;
}

/** COMMHANDLE initializer */
BOOL SetupComm(COMMHANDLE hFile, DWORD dwInQueue, DWORD dwOutQueue)
{
  memset(hFile, 0, sizeof(*hFile));

  if (hFile->txBufsize)
    hFile->txBufSize 	= dwOutQueue;
  else
    if (!hfFile->txBufSize)
      hFile->txBufSize	= 1024;

  if (hFile->rxBufSize)
    hFile->rxBufSize 	= dwInQueue;
  else
    if (!hFile->rxBufSize)
      hFile->rxBufSize = 1024;

  hFile->fd 		= -1;
  hFile->DCB.isTerminal	= TRUE;
  return TRUE;
}

BOOL SetCommBreak(COMMHANDLE hFile)
{
  return TRUE;
}

BOOL ClearCommBreak(COMMHANDLE hFile)
{
  return TRUE;
}

/** Translates an HFILE into a COMMHANDLE.
 *
 *  Under NT, they seem to be equivalent types, much like
 *  UNIX file descriptors. However, we maintain more
 *  information with COMMHANDLEs than just the file descriptor
 *  under UNIX, because we want to be able to retrieve things
 *  like the DCB which are controlled via the COMMHANDLE, and
 *  presumably handled by file descriptor in the NT kernel.
 *
 *  An alternate implementation might be to statically store
 *  the "related" information into an array indexed by file 
 *  descriptor. That seems really inelegant to me, although
 *  it *would* allow passing around a raw file descriptor
 *  if that was needed. Either way, using the libcomm routines
 *  to translate between the two data types (even if that
 *  translation routine boils down to the assignment operator)
 *  allows either implementation without breaking the API -- as
 *  long as the comm libraries and compat libraries are updated
 *  simulataneously.
 *
 *  @see 	max_asyncnt.c  
 *
 *  @param	hf	file handle (file descriptor) to convert
 *  @param	ch	Pointer to an allocated communications handle,
 *                      which is populated and initialized by
 *                      this function.
 *  @returns	ch, which now contains the file descriptor, etc.
 */
COMMHANDLE CommHandle_fromFileHandle(COMMHANDLE ch, HFILE hf)
{
  if (ch == NULL)
    ch = calloc(sizeof(*ch), 1);

  SetupComm(ch, 0, 0);
  ch->fd = (int)hf;
  return ch;
}

/** Update the file descriptor within a COMMHANDLE.
 *  @see _CommHandle_fromFileHandle()
 */
void CommHandle_setFileHandle(COMMHANDLE ch, HFILE hf)
{
  ch->fd = (int)hf;
}

/** Translates a COMMHANDLE into an HFILE.
 *  @see 	CommHandle_fromFileHandle()
 *
 *  @param	ch	"Windows" communications handle. NOT a Maximus communications handle!
 *  @returns	A UNIX File Descriptor
 *
 *  @note	Under NT, this could probably implemented as a
 *              a macro: #define CommHandle_fromFileHandle(fh) (fh)
 */
HFILE FileHandle_fromCommHandle(COMMHANDLE ch)
{
  return ch->fd;
}




