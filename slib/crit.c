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

/*# name=Alternate int 24h critical error handler
*/

#include <dos.h>
#include "prog.h"


  void _fast install_24(void)
  {
  }
  void _stdc uninstall_24(void)
  {
  }

#ifdef TEST_HARNESS

#include <stdlib.h>
#include <dos.h>
#include <io.h>
#include <fcntl.h>

main()
{
  int fd;

  install_24();
  printf("hoop-la!\n");

  if ((fd=open("a:asdf", O_RDONLY | O_BINARY)) != -1)
  {
    printf("\nopen successful.\n");
    close(fd);
  }
  else printf("\nopen failed.\n");

  if ((fd=open("com3", O_CREAT | O_TRUNC | O_WRONLY | O_BINARY)) != -1)
  {
    printf("\nopen successful.\n");

    if (write(fd, 0, 5) != 5)
      printf("Write unsuccessful!\n");

    close(fd);
  }
  else printf("\nopen failed.\n");

  if ((fd=open("b:gronk", O_CREAT | O_TRUNC | O_WRONLY | O_BINARY)) != -1)
  {
    printf("\nopen successful.\n");

    if (write(fd, 0, 5) != 5)
      printf("Write unsuccessful!\n");

    close(fd);
  }
  else printf("\nopen failed.\n");

  printf("done!\n");
  uninstall_24();
  return 0;
}

#endif

