/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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

#ifndef YY_BALANCE_SETTINGS_YY_BALANCE_SETTINGS_PARSER_H_INCLUDED
# define YY_BALANCE_SETTINGS_YY_BALANCE_SETTINGS_PARSER_H_INCLUDED
/* Enabling traces.  */
#ifndef BALANCE_SETTINGS_YYDEBUG
# if defined YYDEBUG
#  if YYDEBUG
#   define BALANCE_SETTINGS_YYDEBUG 1
#  else
#   define BALANCE_SETTINGS_YYDEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define BALANCE_SETTINGS_YYDEBUG 0
# endif /* ! defined YYDEBUG */
#endif  /* ! defined BALANCE_SETTINGS_YYDEBUG */
#if BALANCE_SETTINGS_YYDEBUG
extern int balance_settings_yydebug;
#endif
/* "%code requires" blocks.  */
/* Line 2058 of yacc.c  */
#line 19 "balance_settings.y"

  #include <log.h>
  #include <balancemq/settings.h>

  #include "private_settings.h"

  #include <stdio.h>

  int yyerror(void *locp, BALANCE_scanner_t* context, const char* msg);

  typedef union BALANCE_SETTINGS_YYSTYPE
  {
      char* string_value;
      float double_value;
      int   integer_value;

      BALANCE_settings_value_t*     balance_value;
      BALANCE_settings_variable_t*  variable_value;
      BALANCE_settings_block_t*     block_value;
      BALANCE_settings_t*           settings_value;
  } BALANCE_SETTINGS_YYSTYPE;




/* Line 2058 of yacc.c  */
#line 80 "balance_settings.parser.h"

/* Tokens.  */
#ifndef BALANCE_SETTINGS_YYTOKENTYPE
# define BALANCE_SETTINGS_YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum balance_settings_yytokentype {
     T_IDENTIFIER = 258,
     T_LBRACE = 259,
     T_RBRACE = 260,
     T_DOUBLE = 261,
     T_INTEGER = 262
   };
#endif
/* Tokens.  */
#define T_IDENTIFIER 258
#define T_LBRACE 259
#define T_RBRACE 260
#define T_DOUBLE 261
#define T_INTEGER 262



#if ! defined BALANCE_SETTINGS_YYSTYPE && ! defined BALANCE_SETTINGS_YYSTYPE_IS_DECLARED

# define balance_settings_yystype BALANCE_SETTINGS_YYSTYPE /* obsolescent; will be withdrawn */
# define BALANCE_SETTINGS_YYSTYPE_IS_DECLARED 1
#endif

#if ! defined BALANCE_SETTINGS_YYLTYPE && ! defined BALANCE_SETTINGS_YYLTYPE_IS_DECLARED
typedef struct BALANCE_SETTINGS_YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} BALANCE_SETTINGS_YYLTYPE;
# define balance_settings_yyltype BALANCE_SETTINGS_YYLTYPE /* obsolescent; will be withdrawn */
# define BALANCE_SETTINGS_YYLTYPE_IS_DECLARED 1
# define BALANCE_SETTINGS_YYLTYPE_IS_TRIVIAL 1
#endif


#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int balance_settings_yyparse (void *YYPARSE_PARAM);
#else
int balance_settings_yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int balance_settings_yyparse (BALANCE_scanner_t* context);
#else
int balance_settings_yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_BALANCE_SETTINGS_YY_BALANCE_SETTINGS_PARSER_H_INCLUDED  */
