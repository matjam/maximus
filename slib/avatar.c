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

/*# name=Convert AVATAR number into ANSI sequence
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "prog.h"


/* Convert an AVATAR colour number to ANSI.  This array simply maps         *
 * from AVATAR colour 'n' (at offset avtcvt[n]) to the ANSI colour, which   *
 * is given by the value at that location in the array.                     */

static byte *acol="\x00\x04\x02\x06\x01\x05\x03\x07";

byte * _fast avt2ansi(sword new, sword old, char *ansi)
{
  char *orig=ansi;
  word fore, back;
  word oldfore, oldback;
  word blink, oldblink;

  *ansi='\0';

  
  /* If colours are the same, do nothing */

  if (new==old)
    return orig;


  /* If the high bit is set, blink is enabled */
  
  blink=new & 0x80;
  oldblink=old & 0x80;

  
  /* Now strip off the high bit */
  
  new &= ~0x80;




  /* Find out the foreground and background colours, respectively */
  
  fore=new & 0x0f;
  back=(new >> 4) & 0x07;


  /* If there was no old colour, use impossible colour sequences */

  if (old==-1)
  {
    oldfore=0xff;
    oldback=0xff;
  }
  else
  {
    oldfore=old & 0x0f;
    oldback=(old >> 4) & 0x07;
  }


  /* The ANSI start sequence */
  
  strcpy(ansi, "\x1b[");
  ansi += strlen(ansi);

  if (oldblink && !blink)
  {
    *ansi++='0';

    oldback=0;
    oldfore=7;

    if (fore != oldfore || back != oldback || blink)
      *ansi++=';';
  }

  /* If the foreground colour isn't the same, change it */

  if (fore != oldfore)
  {
    /* If the highlight/dark bit is not the same, output code to change */

    if ((fore >> 3) != (oldfore >> 3))
    {
      *ansi++=(char)('0'+((fore >> 3) ? 1 : 0));

      if ((fore >> 3)==0)
      {
        oldback=0;    /* the "0;" resets the background col to black, */
        oldfore=7;    /* and the foreground to gray.                  */
      }


      /* Add a ';', if necessary */

      if (fore != oldfore || back != oldback || blink)
        *ansi++=';';
    }

    /* Set the foreground colour, but not if we just printed a "0;"         *
     * and are supposed to change the FG to gray, since the "0" already     *
     * does that.                                                           */

    if (fore != oldfore)
    {
      /* Now add the appropriate colour. '3' means fg change,               *
       * next char is colour.                                               */

      *ansi++='3';
      *ansi++=(char)('0'+acol[(word)(fore & 0x07)]);
    }
    

    /* If there will be a background change, insert a separator too */

    if (back != oldback || blink)
      if (ansi[-1] != ';')
        *ansi++=';';
  }

  /* Now handle changes in background colour */

  if (back != oldback)
  {
    *ansi++='4';
    *ansi++=(char)('0'+acol[(word)(back & 0x07)]);
    
    if (blink)
      *ansi++=';';
  }
  
  if (blink)
    *ansi++='5';

  /* Add the trailing 'm' */

  *ansi++='m';
  *ansi='\0';
  
  return orig;
}



#ifdef TEST
main()
{
  char ansi[20];
  sword old=-1;

#define doit(col) printf(#col "=%sTEST\n", avt2ansi(col, old, ansi)); old=col;
  
  doit(2);
  doit(3);
  doit(4);
  doit(5);
  doit(6);
  doit(7);
  doit(8);
  doit(9);
  doit(3);
  doit(15);
  doit(16);
  doit(1);
  doit(16);
  doit(33);
  doit(43);
  doit(33);
  doit(49);
  doit(1);
  doit(1+128);
  doit(2+128);
  doit(2+16+128);
  doit(1+128);
  doit(1);
  doit(1+128);
  doit(41);

  return 0;
}

#endif



/*                             Foregrounds
������������������������������������������������������������������������Ŀ
� BLACK � BLUE  � GREEN � CYAN  � RED   �MAGENTA�YELLOW � WHITE � BACK-  �
�low hi �low hi �low hi �low hi �low hi �low hi �low hi �low hi � GROUND �
������������������������������������������������������������������������Ĵ
�  0   8�  1   9�  2  10�  3  11�  4  12�  5  13�  6  14�  7  15�BLACK   �
� 16  24� 17  25� 18  26� 19  27� 20  28� 21  29� 22  30� 23  31�BLUE    �
� 32  40� 33  41� 34  42� 35  43� 36  44� 37  45� 38  46� 39  47�GREEN   �
� 48  56� 49  57� 50  58� 51  59� 52  60� 53  61� 54  62� 55  63�CYAN    �
� 64  72� 65  73� 66  74� 67  75� 68  76� 69  77� 70  78� 71  79�RED     �
� 80  88� 81  89� 82  90� 83  91� 84  92� 85  93� 86  94� 87  95�MAGENTA �
� 96 104� 97 105� 98 106� 99 107�100 108�101 109�102 110�103 111�YELLOW  �
�112 120�113 121�114 122�115 123�116 124�117 125�118 126�119 127�WHITE   �
��������������������������������������������������������������������������
*/


