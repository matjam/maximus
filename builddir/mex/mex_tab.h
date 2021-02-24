/* A Bison parser, made by GNU Bison 3.3.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_MEX_MEX_TAB_H_INCLUDED
# define YY_YY_MEX_MEX_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    T_BYTE = 258,
    T_WORD = 259,
    T_DWORD = 260,
    T_STRING = 261,
    T_VOID = 262,
    T_BEGIN = 263,
    T_END = 264,
    T_IF = 265,
    T_ELSE = 266,
    T_GOTO = 267,
    T_WHILE = 268,
    T_DO = 269,
    T_FOR = 270,
    T_STRUCT = 271,
    T_DOT = 272,
    T_ELLIPSIS = 273,
    T_LPAREN = 274,
    T_RPAREN = 275,
    T_LBRACKET = 276,
    T_RBRACKET = 277,
    T_REF = 278,
    T_RETURN = 279,
    T_COMMA = 280,
    T_SEMICOLON = 281,
    T_COLON = 282,
    T_ARRAY = 283,
    T_RANGE = 284,
    T_OF = 285,
    T_UNSIGNED = 286,
    T_SIGNED = 287,
    T_SIZEOF = 288,
    T_ASSIGN = 289,
    T_LAND = 290,
    T_LOR = 291,
    T_NOTEQUAL = 292,
    T_EQUAL = 293,
    T_LE = 294,
    T_LT = 295,
    T_GE = 296,
    T_GT = 297,
    T_SHL = 298,
    T_SHR = 299,
    T_BAND = 300,
    T_BOR = 301,
    T_BPLUS = 302,
    T_MINUS = 303,
    T_BMULTIPLY = 304,
    T_BDIVIDE = 305,
    T_BMODULUS = 306,
    T_CONSTBYTE = 307,
    T_CONSTWORD = 308,
    T_CONSTDWORD = 309,
    T_CONSTSTRING = 310,
    T_ID = 311
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 187 "../mex/mex_tab.y" /* yacc.c:1921  */

          IDTYPE *id;
          TYPEDESC *typedesc;
          ATTRIBUTES *attrdesc;
          DATAOBJ *dataobj;
          RANGE range;
          CONSTTYPE constant;
          TOKEN token;
          PATCH patch;
          ELSETYPE elsetype;
          FUNCARGS *arg;
          FUNCCALL fcall;
          WHILETYPE whil;
          OPTTYPE opt;
          FORTYPE fr;
          word size;
        

#line 134 "mex/mex_tab.h" /* yacc.c:1921  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MEX_MEX_TAB_H_INCLUDED  */
