/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         itex2MML_yyparse
#define yylex           itex2MML_yylex
#define yyerror         itex2MML_yyerror
#define yydebug         itex2MML_yydebug
#define yynerrs         itex2MML_yynerrs

#define yylval          itex2MML_yylval
#define yychar          itex2MML_yychar

/* Copy the first part of user declarations.  */
#line 7 "itex2MML.y" /* yacc.c:339  */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "itex2MML.h"

#define YYSTYPE char *
#define YYPARSE_PARAM_TYPE char **
#define YYPARSE_PARAM ret_str

#define yytext itex2MML_yytext

 extern int yylex ();
 int itex2MML_do_html_filter (const char * buffer, size_t length, const int forbid_markup);

 extern char * yytext;

 static void itex2MML_default_error (const char * msg)
   {
     if (msg)
       fprintf(stderr, "Line: %d Error: %s\n", itex2MML_lineno, msg);
   }

 void (*itex2MML_error) (const char * msg) = itex2MML_default_error;

 static void yyerror (char **ret_str, char * s)
   {
     char * msg = itex2MML_copy3 (s, " at token ", yytext);
     if (itex2MML_error)
       (*itex2MML_error) (msg);
     itex2MML_free_string (msg);
   }

 /* Note: If length is 0, then buffer is treated like a string; otherwise only length bytes are written.
  */
 static void itex2MML_default_write (const char * buffer, size_t length)
   {
     if (buffer)
       {
	 if (length)
	   fwrite (buffer, 1, length, stdout);
	 else
	   fputs (buffer, stdout);
       }
   }

 static void itex2MML_default_write_mathml (const char * mathml)
   {
     if (itex2MML_write)
       (*itex2MML_write) (mathml, 0);
   }

#ifdef itex2MML_CAPTURE
    static char * itex2MML_output_string = "" ;

    const char * itex2MML_output ()
    {
        char * copy = (char *) malloc((itex2MML_output_string ? strlen(itex2MML_output_string) : 0) + 1);
        if (copy)
          {
           if (itex2MML_output_string)
             {
               strcpy(copy, itex2MML_output_string);
               if (*itex2MML_output_string != '\0')
                   free(itex2MML_output_string);
             }
           else
             copy[0] = 0;
           itex2MML_output_string = "";
          }
        return copy;
    }

 static void itex2MML_capture (const char * buffer, size_t length)
    {
     if (buffer)
       {
         if (length)
           {
              size_t first_length = itex2MML_output_string ? strlen(itex2MML_output_string) : 0;
              char * copy  = (char *) malloc(first_length + length + 1);
              if (copy)
                {
                  if (itex2MML_output_string)
                    {
                       strcpy(copy, itex2MML_output_string);
                       if (*itex2MML_output_string != '\0')
                          free(itex2MML_output_string);
                    }
                  else
                     copy[0] = 0;
                  strncat(copy, buffer, length);
                  itex2MML_output_string = copy;
                 }
            }
         else
            {
              char * copy = itex2MML_copy2(itex2MML_output_string, buffer);
              if (*itex2MML_output_string != '\0')
                 free(itex2MML_output_string);
              itex2MML_output_string = copy;
            }
        }
    }

    static void itex2MML_capture_mathml (const char * buffer)
    {
       char * temp = itex2MML_copy2(itex2MML_output_string, buffer);
       if (*itex2MML_output_string != '\0')
         free(itex2MML_output_string);
       itex2MML_output_string = temp;
    }
    void (*itex2MML_write) (const char * buffer, size_t length) = itex2MML_capture;
    void (*itex2MML_write_mathml) (const char * mathml) = itex2MML_capture_mathml;
#else
    void (*itex2MML_write) (const char * buffer, size_t length) = itex2MML_default_write;
    void (*itex2MML_write_mathml) (const char * mathml) = itex2MML_default_write_mathml;
#endif 

 char * itex2MML_empty_string = "";

 /* Create a copy of a string, adding space for extra chars
  */
 char * itex2MML_copy_string_extra (const char * str, unsigned extra)
   {
     char * copy = (char *) malloc(extra + (str ? strlen (str) : 0) + 1);
     if (copy)
       {
	 if (str)
	   strcpy(copy, str);
	 else
	   copy[0] = 0;
       }
     return copy ? copy : itex2MML_empty_string;
   }

 /* Create a copy of a string, appending two strings
  */
 char * itex2MML_copy3 (const char * first, const char * second, const char * third)
   {
     size_t first_length =  first ? strlen( first) : 0;
     size_t second_length = second ? strlen(second) : 0;
     size_t third_length =  third ? strlen( third) : 0;

     char * copy = (char *) malloc(first_length + second_length + third_length + 1);

     if (copy)
       {
	 if (first)
	   strcpy(copy, first);
	 else
	   copy[0] = 0;

	 if (second) strcat(copy, second);
	 if ( third) strcat(copy,  third);
       }
     return copy ? copy : itex2MML_empty_string;
   }

 /* Create a copy of a string, appending a second string
  */
 char * itex2MML_copy2 (const char * first, const char * second)
   {
     return itex2MML_copy3(first, second, 0);
   }

 /* Create a copy of a string
  */
 char * itex2MML_copy_string (const char * str)
   {
     return itex2MML_copy3(str, 0, 0);
   }

 /* Create a copy of a string, escaping unsafe characters for XML
  */
 char * itex2MML_copy_escaped (const char * str)
   {
     size_t length = 0;

     const char * ptr1 = str;

     char * ptr2 = 0;
     char * copy = 0;

     if ( str == 0) return itex2MML_empty_string;
     if (*str == 0) return itex2MML_empty_string;

     while (*ptr1)
       {
	 switch (*ptr1)
	   {
	   case '<':  /* &lt;   */
	   case '>':  /* &gt;   */
	     length += 4;
	     break;
	   case '&':  /* &amp;  */
	     length += 5;
	     break;
	   case '\'': /* &apos; */
	   case '"':  /* &quot; */
	   case '-':  /* &#x2d; */
	     length += 6;
	     break;
	   default:
	     length += 1;
	     break;
	   }
	 ++ptr1;
       }

     copy = (char *) malloc (length + 1);

     if (copy)
       {
	 ptr1 = str;
	 ptr2 = copy;

	 while (*ptr1)
	   {
	     switch (*ptr1)
	       {
	       case '<':
		 strcpy (ptr2, "&lt;");
		 ptr2 += 4;
		 break;
	       case '>':
		 strcpy (ptr2, "&gt;");
		 ptr2 += 4;
		 break;
	       case '&':  /* &amp;  */
		 strcpy (ptr2, "&amp;");
		 ptr2 += 5;
		 break;
	       case '\'': /* &apos; */
		 strcpy (ptr2, "&apos;");
		 ptr2 += 6;
		 break;
	       case '"':  /* &quot; */
		 strcpy (ptr2, "&quot;");
		 ptr2 += 6;
		 break;
	       case '-':  /* &#x2d; */
		 strcpy (ptr2, "&#x2d;");
		 ptr2 += 6;
		 break;
	       default:
		 *ptr2++ = *ptr1;
		 break;
	       }
	     ++ptr1;
	   }
	 *ptr2 = 0;
       }
     return copy ? copy : itex2MML_empty_string;
   }

 /* Create a hex character reference string corresponding to code
  */
 char * itex2MML_character_reference (unsigned long int code)
   {
#define ENTITY_LENGTH 10
     char * entity = (char *) malloc(ENTITY_LENGTH);
     sprintf(entity, "&#x%05lx;", code);
     return entity;
   }

 void itex2MML_free_string (char * str)
   {
     if (str && str != itex2MML_empty_string)
       free(str);
   }


#line 349 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_ITEX2MML_YY_Y_TAB_H_INCLUDED
# define YY_ITEX2MML_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int itex2MML_yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TEXOVER = 258,
    TEXATOP = 259,
    CHAR = 260,
    STARTMATH = 261,
    STARTDMATH = 262,
    ENDMATH = 263,
    MI = 264,
    MIB = 265,
    MN = 266,
    MO = 267,
    SUP = 268,
    SUB = 269,
    MROWOPEN = 270,
    MROWCLOSE = 271,
    LEFT = 272,
    RIGHT = 273,
    BIG = 274,
    BBIG = 275,
    BIGG = 276,
    BBIGG = 277,
    BIGL = 278,
    BBIGL = 279,
    BIGGL = 280,
    BBIGGL = 281,
    FRAC = 282,
    TFRAC = 283,
    OPERATORNAME = 284,
    MATHOP = 285,
    MATHBIN = 286,
    MATHREL = 287,
    MOP = 288,
    MOL = 289,
    MOLL = 290,
    MOF = 291,
    MOR = 292,
    PERIODDELIM = 293,
    OTHERDELIM = 294,
    LEFTDELIM = 295,
    RIGHTDELIM = 296,
    MOS = 297,
    MOB = 298,
    SQRT = 299,
    ROOT = 300,
    BINOM = 301,
    TBINOM = 302,
    UNDER = 303,
    OVER = 304,
    OVERBRACE = 305,
    UNDERLINE = 306,
    UNDERBRACE = 307,
    UNDEROVER = 308,
    TENSOR = 309,
    MULTI = 310,
    ARRAYALIGN = 311,
    COLUMNALIGN = 312,
    ARRAY = 313,
    COLSEP = 314,
    ROWSEP = 315,
    ARRAYOPTS = 316,
    COLLAYOUT = 317,
    COLALIGN = 318,
    ROWALIGN = 319,
    ALIGN = 320,
    EQROWS = 321,
    EQCOLS = 322,
    ROWLINES = 323,
    COLLINES = 324,
    FRAME = 325,
    PADDING = 326,
    ATTRLIST = 327,
    ITALICS = 328,
    SANS = 329,
    TT = 330,
    BOLD = 331,
    BOXED = 332,
    SLASHED = 333,
    RM = 334,
    BB = 335,
    ST = 336,
    END = 337,
    BBLOWERCHAR = 338,
    BBUPPERCHAR = 339,
    BBDIGIT = 340,
    CALCHAR = 341,
    FRAKCHAR = 342,
    CAL = 343,
    SCR = 344,
    FRAK = 345,
    CLAP = 346,
    LLAP = 347,
    RLAP = 348,
    ROWOPTS = 349,
    TEXTSIZE = 350,
    SCSIZE = 351,
    SCSCSIZE = 352,
    DISPLAY = 353,
    TEXTSTY = 354,
    TEXTBOX = 355,
    TEXTSTRING = 356,
    XMLSTRING = 357,
    CELLOPTS = 358,
    ROWSPAN = 359,
    COLSPAN = 360,
    THINSPACE = 361,
    MEDSPACE = 362,
    THICKSPACE = 363,
    QUAD = 364,
    QQUAD = 365,
    NEGSPACE = 366,
    NEGMEDSPACE = 367,
    NEGTHICKSPACE = 368,
    PHANTOM = 369,
    HREF = 370,
    UNKNOWNCHAR = 371,
    EMPTYMROW = 372,
    STATLINE = 373,
    TOOLTIP = 374,
    TOGGLE = 375,
    TOGGLESTART = 376,
    TOGGLEEND = 377,
    FGHIGHLIGHT = 378,
    BGHIGHLIGHT = 379,
    SPACE = 380,
    INTONE = 381,
    INTTWO = 382,
    INTTHREE = 383,
    BAR = 384,
    WIDEBAR = 385,
    VEC = 386,
    WIDEVEC = 387,
    HAT = 388,
    WIDEHAT = 389,
    CHECK = 390,
    WIDECHECK = 391,
    TILDE = 392,
    WIDETILDE = 393,
    DOT = 394,
    DDOT = 395,
    DDDOT = 396,
    DDDDOT = 397,
    UNARYMINUS = 398,
    UNARYPLUS = 399,
    BEGINENV = 400,
    ENDENV = 401,
    MATRIX = 402,
    PMATRIX = 403,
    BMATRIX = 404,
    BBMATRIX = 405,
    VMATRIX = 406,
    VVMATRIX = 407,
    SVG = 408,
    ENDSVG = 409,
    SMALLMATRIX = 410,
    CASES = 411,
    ALIGNED = 412,
    GATHERED = 413,
    SUBSTACK = 414,
    PMOD = 415,
    RMCHAR = 416,
    COLOR = 417,
    BGCOLOR = 418,
    XARROW = 419,
    OPTARGOPEN = 420,
    OPTARGCLOSE = 421,
    ITEXNUM = 422,
    RAISEBOX = 423,
    NEG = 424
  };
#endif
/* Tokens.  */
#define TEXOVER 258
#define TEXATOP 259
#define CHAR 260
#define STARTMATH 261
#define STARTDMATH 262
#define ENDMATH 263
#define MI 264
#define MIB 265
#define MN 266
#define MO 267
#define SUP 268
#define SUB 269
#define MROWOPEN 270
#define MROWCLOSE 271
#define LEFT 272
#define RIGHT 273
#define BIG 274
#define BBIG 275
#define BIGG 276
#define BBIGG 277
#define BIGL 278
#define BBIGL 279
#define BIGGL 280
#define BBIGGL 281
#define FRAC 282
#define TFRAC 283
#define OPERATORNAME 284
#define MATHOP 285
#define MATHBIN 286
#define MATHREL 287
#define MOP 288
#define MOL 289
#define MOLL 290
#define MOF 291
#define MOR 292
#define PERIODDELIM 293
#define OTHERDELIM 294
#define LEFTDELIM 295
#define RIGHTDELIM 296
#define MOS 297
#define MOB 298
#define SQRT 299
#define ROOT 300
#define BINOM 301
#define TBINOM 302
#define UNDER 303
#define OVER 304
#define OVERBRACE 305
#define UNDERLINE 306
#define UNDERBRACE 307
#define UNDEROVER 308
#define TENSOR 309
#define MULTI 310
#define ARRAYALIGN 311
#define COLUMNALIGN 312
#define ARRAY 313
#define COLSEP 314
#define ROWSEP 315
#define ARRAYOPTS 316
#define COLLAYOUT 317
#define COLALIGN 318
#define ROWALIGN 319
#define ALIGN 320
#define EQROWS 321
#define EQCOLS 322
#define ROWLINES 323
#define COLLINES 324
#define FRAME 325
#define PADDING 326
#define ATTRLIST 327
#define ITALICS 328
#define SANS 329
#define TT 330
#define BOLD 331
#define BOXED 332
#define SLASHED 333
#define RM 334
#define BB 335
#define ST 336
#define END 337
#define BBLOWERCHAR 338
#define BBUPPERCHAR 339
#define BBDIGIT 340
#define CALCHAR 341
#define FRAKCHAR 342
#define CAL 343
#define SCR 344
#define FRAK 345
#define CLAP 346
#define LLAP 347
#define RLAP 348
#define ROWOPTS 349
#define TEXTSIZE 350
#define SCSIZE 351
#define SCSCSIZE 352
#define DISPLAY 353
#define TEXTSTY 354
#define TEXTBOX 355
#define TEXTSTRING 356
#define XMLSTRING 357
#define CELLOPTS 358
#define ROWSPAN 359
#define COLSPAN 360
#define THINSPACE 361
#define MEDSPACE 362
#define THICKSPACE 363
#define QUAD 364
#define QQUAD 365
#define NEGSPACE 366
#define NEGMEDSPACE 367
#define NEGTHICKSPACE 368
#define PHANTOM 369
#define HREF 370
#define UNKNOWNCHAR 371
#define EMPTYMROW 372
#define STATLINE 373
#define TOOLTIP 374
#define TOGGLE 375
#define TOGGLESTART 376
#define TOGGLEEND 377
#define FGHIGHLIGHT 378
#define BGHIGHLIGHT 379
#define SPACE 380
#define INTONE 381
#define INTTWO 382
#define INTTHREE 383
#define BAR 384
#define WIDEBAR 385
#define VEC 386
#define WIDEVEC 387
#define HAT 388
#define WIDEHAT 389
#define CHECK 390
#define WIDECHECK 391
#define TILDE 392
#define WIDETILDE 393
#define DOT 394
#define DDOT 395
#define DDDOT 396
#define DDDDOT 397
#define UNARYMINUS 398
#define UNARYPLUS 399
#define BEGINENV 400
#define ENDENV 401
#define MATRIX 402
#define PMATRIX 403
#define BMATRIX 404
#define BBMATRIX 405
#define VMATRIX 406
#define VVMATRIX 407
#define SVG 408
#define ENDSVG 409
#define SMALLMATRIX 410
#define CASES 411
#define ALIGNED 412
#define GATHERED 413
#define SUBSTACK 414
#define PMOD 415
#define RMCHAR 416
#define COLOR 417
#define BGCOLOR 418
#define XARROW 419
#define OPTARGOPEN 420
#define OPTARGCLOSE 421
#define ITEXNUM 422
#define RAISEBOX 423
#define NEG 424

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE itex2MML_yylval;

int itex2MML_yyparse (char **ret_str);

#endif /* !YY_ITEX2MML_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 738 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  201
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5044

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  170
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  118
/* YYNRULES -- Number of rules.  */
#define YYNRULES  325
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  579

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   424

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   287,   287,   290,   291,   292,   293,   294,   296,   298,
     299,   300,   316,   333,   337,   343,   362,   376,   395,   409,
     428,   442,   461,   475,   485,   495,   502,   509,   513,   517,
     522,   523,   524,   525,   526,   530,   534,   535,   536,   537,
     538,   539,   540,   541,   542,   543,   544,   545,   546,   547,
     548,   549,   550,   551,   552,   553,   554,   555,   556,   557,
     558,   559,   560,   561,   562,   563,   564,   565,   566,   567,
     568,   569,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,   585,   586,   587,
     588,   589,   590,   591,   592,   593,   594,   595,   596,   597,
     598,   602,   606,   614,   615,   616,   617,   619,   624,   629,
     635,   639,   643,   648,   653,   657,   661,   666,   670,   674,
     679,   683,   687,   692,   696,   700,   705,   710,   715,   720,
     725,   730,   735,   741,   745,   749,   753,   755,   761,   762,
     768,   774,   775,   776,   781,   786,   791,   795,   800,   804,
     808,   812,   817,   822,   827,   832,   837,   842,   848,   859,
     867,   875,   882,   887,   895,   903,   910,   918,   923,   928,
     933,   938,   943,   948,   953,   958,   963,   968,   973,   978,
     983,   988,   993,   998,  1002,  1008,  1013,  1017,  1023,  1027,
    1031,  1039,  1044,  1048,  1054,  1059,  1064,  1069,  1073,  1079,
    1084,  1088,  1092,  1096,  1100,  1104,  1108,  1112,  1116,  1121,
    1131,  1138,  1146,  1156,  1165,  1173,  1177,  1183,  1188,  1192,
    1196,  1201,  1208,  1216,  1221,  1228,  1242,  1249,  1263,  1270,
    1278,  1283,  1288,  1293,  1297,  1302,  1306,  1311,  1316,  1321,
    1326,  1331,  1335,  1340,  1344,  1349,  1353,  1358,  1363,  1370,
    1378,  1391,  1404,  1414,  1426,  1435,  1445,  1452,  1460,  1467,
    1475,  1485,  1494,  1498,  1502,  1506,  1510,  1514,  1518,  1522,
    1526,  1530,  1534,  1538,  1548,  1555,  1559,  1563,  1568,  1573,
    1578,  1582,  1590,  1594,  1600,  1604,  1608,  1612,  1616,  1620,
    1624,  1628,  1632,  1636,  1641,  1646,  1651,  1656,  1661,  1666,
    1671,  1676,  1681,  1686,  1693,  1697,  1703,  1707,  1712,  1716,
    1722,  1730,  1734,  1740,  1744,  1749,  1752,  1756,  1764,  1768,
    1774,  1778,  1782,  1786,  1791,  1796
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TEXOVER", "TEXATOP", "CHAR",
  "STARTMATH", "STARTDMATH", "ENDMATH", "MI", "MIB", "MN", "MO", "SUP",
  "SUB", "MROWOPEN", "MROWCLOSE", "LEFT", "RIGHT", "BIG", "BBIG", "BIGG",
  "BBIGG", "BIGL", "BBIGL", "BIGGL", "BBIGGL", "FRAC", "TFRAC",
  "OPERATORNAME", "MATHOP", "MATHBIN", "MATHREL", "MOP", "MOL", "MOLL",
  "MOF", "MOR", "PERIODDELIM", "OTHERDELIM", "LEFTDELIM", "RIGHTDELIM",
  "MOS", "MOB", "SQRT", "ROOT", "BINOM", "TBINOM", "UNDER", "OVER",
  "OVERBRACE", "UNDERLINE", "UNDERBRACE", "UNDEROVER", "TENSOR", "MULTI",
  "ARRAYALIGN", "COLUMNALIGN", "ARRAY", "COLSEP", "ROWSEP", "ARRAYOPTS",
  "COLLAYOUT", "COLALIGN", "ROWALIGN", "ALIGN", "EQROWS", "EQCOLS",
  "ROWLINES", "COLLINES", "FRAME", "PADDING", "ATTRLIST", "ITALICS",
  "SANS", "TT", "BOLD", "BOXED", "SLASHED", "RM", "BB", "ST", "END",
  "BBLOWERCHAR", "BBUPPERCHAR", "BBDIGIT", "CALCHAR", "FRAKCHAR", "CAL",
  "SCR", "FRAK", "CLAP", "LLAP", "RLAP", "ROWOPTS", "TEXTSIZE", "SCSIZE",
  "SCSCSIZE", "DISPLAY", "TEXTSTY", "TEXTBOX", "TEXTSTRING", "XMLSTRING",
  "CELLOPTS", "ROWSPAN", "COLSPAN", "THINSPACE", "MEDSPACE", "THICKSPACE",
  "QUAD", "QQUAD", "NEGSPACE", "NEGMEDSPACE", "NEGTHICKSPACE", "PHANTOM",
  "HREF", "UNKNOWNCHAR", "EMPTYMROW", "STATLINE", "TOOLTIP", "TOGGLE",
  "TOGGLESTART", "TOGGLEEND", "FGHIGHLIGHT", "BGHIGHLIGHT", "SPACE",
  "INTONE", "INTTWO", "INTTHREE", "BAR", "WIDEBAR", "VEC", "WIDEVEC",
  "HAT", "WIDEHAT", "CHECK", "WIDECHECK", "TILDE", "WIDETILDE", "DOT",
  "DDOT", "DDDOT", "DDDDOT", "UNARYMINUS", "UNARYPLUS", "BEGINENV",
  "ENDENV", "MATRIX", "PMATRIX", "BMATRIX", "BBMATRIX", "VMATRIX",
  "VVMATRIX", "SVG", "ENDSVG", "SMALLMATRIX", "CASES", "ALIGNED",
  "GATHERED", "SUBSTACK", "PMOD", "RMCHAR", "COLOR", "BGCOLOR", "XARROW",
  "OPTARGOPEN", "OPTARGCLOSE", "ITEXNUM", "RAISEBOX", "NEG", "$accept",
  "doc", "xmlmmlTermList", "char", "expression", "compoundTermList",
  "compoundTerm", "closedTerm", "left", "right", "bigdelim",
  "unrecognized", "unaryminus", "unaryplus", "mi", "mib", "mn", "mob",
  "mo", "space", "statusline", "tooltip", "toggle", "fghighlight",
  "bghighlight", "color", "mathrlap", "mathllap", "mathclap", "textstring",
  "displaystyle", "textstyle", "textsize", "scriptsize",
  "scriptscriptsize", "italics", "sans", "mono", "slashed", "boxed",
  "bold", "roman", "rmchars", "bbold", "bbchars", "bbchar", "frak",
  "frakletters", "frakletter", "cal", "scr", "calletters", "calletter",
  "thinspace", "medspace", "thickspace", "quad", "qquad", "negspace",
  "negmedspace", "negthickspace", "phantom", "href", "tensor", "multi",
  "subsupList", "subsupTerm", "mfrac", "pmod", "texover", "texatop",
  "binom", "munderbrace", "munderline", "moverbrace", "bar", "vec", "dot",
  "ddot", "dddot", "ddddot", "tilde", "check", "hat", "msqrt", "mroot",
  "raisebox", "munder", "mover", "munderover", "emptymrow", "mathenv",
  "columnAlignList", "substack", "array", "arrayopts", "anarrayopt",
  "collayout", "colalign", "rowalign", "align", "eqrows", "eqcols",
  "rowlines", "collines", "frame", "padding", "tableRowList", "tableRow",
  "simpleTableRow", "optsTableRow", "rowopts", "arowopt", "tableCell",
  "cellopts", "acellopt", "rowspan", "colspan", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424
};
# endif

#define YYPACT_NINF -373

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-373)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      40,  -373,  1353,  1514,    17,    40,  -373,  -373,  -373,  -373,
    -373,  -373,  -373,  4716,  4716,  3436,   169,   171,   174,   177,
     180,     2,    41,    74,   113,  4716,  4716,   -49,   -28,     1,
      33,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,
    -373,  -373,  3596,  4716,  4716,  4716,  4716,  4716,  4716,  4716,
    4716,  4716,  4716,   -11,    77,  4716,  4716,  4716,  4716,  4716,
    4716,    47,    63,    68,    78,    89,  4716,  4716,  4716,  3436,
    3436,  3436,  3436,  3436,    85,  -373,  -373,  -373,  -373,  -373,
    -373,  -373,  -373,  4716,    93,  -373,  -373,   101,   132,  4716,
    3436,   118,   168,   175,  4716,  4716,  4716,  4716,  4716,  4716,
    4716,  4716,  4716,  4716,  4716,  4716,  4716,  4716,  -373,  -373,
     -10,    84,  4716,  -373,   178,   186,  3756,   154,   -92,  1675,
    -373,   159,  3436,  -373,  -373,  -373,  -373,  -373,   191,  -373,
     213,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,
    -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,
    -373,  -373,  -373,  -373,  -373,    96,  -373,  -373,  -373,  -373,
    -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,
    -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,
    -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,
    -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,
    1836,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  1030,   148,
    -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,
    -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,
    -373,  -373,  -373,  4716,  4716,  -373,  -373,  -373,  -373,  3436,
    -373,  4716,  4716,  4716,  4716,  4716,  -373,  -373,  -373,  4716,
     210,   233,  4716,  1996,  -373,  -373,  -373,  -373,  -373,  -373,
      98,   151,   188,   188,   173,  -373,  -373,  -373,  3436,  3436,
    3436,  3436,  3436,  -373,  -373,  4716,  4716,  4716,  4716,  2316,
    4716,  4716,   135,  -373,  -373,  -373,  -373,  -373,  -373,  -373,
    -373,  -373,  -373,  -373,  -373,  -373,  -373,    20,  2156,  2156,
    2156,  2156,  2156,  2156,   -82,  2156,  2156,  2156,  2156,  2156,
    -373,  3436,  3436,  3436,  -373,  -373,  3916,   162,  -373,  -373,
    4716,  4716,  1192,  4716,  4716,  4716,  4716,  -373,  -373,  3436,
    3436,  -373,  -373,  -373,  -373,  2476,  -373,  -373,  -373,  -373,
    -373,  4716,  4716,  4076,   233,   233,  -373,   153,   249,   250,
     256,   257,  3436,    18,  -373,   214,  -373,  -373,   -72,  -373,
    -373,  -373,    73,  -373,  -373,    29,  -373,    30,  -373,   -38,
    -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,   193,   197,
     222,   -53,   -48,   -46,   -42,   -41,   -39,   126,  -373,   -25,
     -24,   -23,   -22,    58,  3436,  3436,  2636,  4236,  -373,  4396,
     267,   270,  3436,  3436,   150,  -373,   272,   271,   273,   275,
    2796,  2956,  4716,  -373,  -373,  4716,   276,   179,  -373,  4716,
     233,   114,   185,    46,  -373,  2156,  3116,  -373,  -373,  -373,
    -373,  -373,  -373,  -373,  -373,   211,   222,  -373,    37,   146,
     160,   164,   152,   163,   165,  -373,   161,   166,   158,   176,
    -373,  4876,  4716,  -373,  4556,  -373,  4716,  4716,  3276,  3276,
    -373,  -373,  -373,  4716,  4716,  4716,  4716,  -373,  -373,  -373,
    -373,  4716,  -373,    -9,   183,   246,   247,   251,   258,   259,
     260,   263,   264,   265,   266,    -5,  -373,  -373,  -373,  -373,
    -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,    27,
    -373,   268,   269,  -373,  -373,    -8,  -373,  -373,  -373,  -373,
    -373,   194,    72,  -373,  2156,  -373,  -373,  -373,  -373,  -373,
    -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  4716,  -373,
    -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,   233,
    -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,
    -373,  -373,  2156,  -373,  3116,  -373,  -373,  -373,  3436,  -373,
     262,  2156,   -21,  -373,   187,    71,   214,  3436,   248,   -20,
     281,  -373,  -373,   217,   288,  -373,   277,  -373,  -373
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       3,     8,     0,     0,     0,     2,     4,     5,     9,   136,
     137,   138,   143,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   152,   144,   145,   149,   153,   150,   148,   147,   146,
     151,   140,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   200,   201,   202,   203,   204,
     205,   206,   207,     0,     0,   133,   262,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   134,   135,
       0,     0,     0,   183,     0,     0,     0,     0,     0,     0,
      13,    29,     0,   142,   106,    31,    32,    34,    33,    35,
     141,    36,    80,    92,    93,    94,    95,    96,    97,    62,
      61,    60,    81,    63,    64,    65,    66,    67,    68,    69,
      70,    76,    77,    71,    72,    73,    74,    75,    78,    79,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      37,    38,    39,   105,    98,    99,    40,    56,    57,    55,
      46,    47,    49,    50,    51,    52,    54,    53,    48,    41,
      42,    43,    44,    45,    58,    59,   103,   104,    30,    10,
       0,     1,     6,     7,    28,    33,   141,    27,     0,    29,
     109,   108,   107,   115,   113,   114,   118,   116,   117,   121,
     119,   120,   124,   122,   123,   126,   125,   128,   127,   130,
     129,   132,   131,     0,     0,   154,   155,   156,   157,     0,
     247,     0,     0,     0,     0,     0,   232,   231,   230,     0,
       0,     0,     0,   315,   176,   177,   178,   181,   180,   179,
       0,     0,     0,     0,     0,   169,   168,   167,   173,   174,
     175,   171,   172,   170,   208,     0,     0,     0,     0,     0,
       0,     0,     0,   233,   234,   235,   236,   245,   246,   243,
     244,   241,   242,   237,   238,   239,   240,     0,   315,   315,
     315,   315,   315,   315,     0,   315,   315,   315,   315,   315,
     223,     0,     0,     0,   258,   139,     0,     0,    11,    14,
       0,     0,     0,     0,     0,     0,     0,   184,    12,     0,
       0,   101,   100,   221,   222,     0,   249,   228,   229,   257,
     259,     0,     0,     0,     0,   211,   215,     0,     0,     0,
       0,     0,   316,     0,   304,   306,   307,   308,     0,   188,
     189,   190,     0,   186,   199,     0,   197,     0,   194,     0,
     192,   209,   159,   160,   161,   162,   163,   164,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   276,     0,
       0,     0,     0,     0,   165,   166,     0,     0,   254,     0,
      26,    25,     0,     0,     0,   102,    22,    20,    18,    16,
       0,     0,     0,   261,   219,     0,   218,     0,   216,     0,
       0,     0,     0,     0,   280,   315,   315,   182,   185,   187,
     195,   198,   196,   191,   193,     0,     0,   278,     0,     0,
       0,     0,     0,     0,     0,   275,     0,     0,     0,     0,
     279,     0,     0,   252,     0,   255,     0,     0,     0,     0,
     112,   111,   110,     0,     0,     0,     0,   224,   226,   248,
     220,     0,   210,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   282,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   313,   314,     0,
     311,     0,     0,   320,   321,     0,   318,   322,   323,   305,
     309,     0,     0,   277,   315,   263,   265,   266,   268,   267,
     269,   270,   271,   272,   264,   256,   260,   250,     0,   253,
      24,    23,   225,   227,    21,    19,    17,    15,   217,     0,
     213,   214,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   315,   283,   315,   312,   324,   325,     0,   319,
       0,   315,     0,   251,     0,     0,   310,   317,     0,     0,
       0,   212,   281,     0,     0,   274,     0,   273,   158
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -373,  -373,  -373,   342,   343,    13,   -40,   566,  -373,  -205,
    -373,  -373,  -373,  -373,  -373,    -2,  -373,   172,  -373,  -373,
    -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,
    -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,
    -373,  -373,    91,  -373,  -373,   -13,  -373,  -373,   -17,  -373,
    -373,    90,  -202,  -373,  -373,  -373,  -373,  -373,  -373,  -373,
    -373,  -373,  -373,  -373,  -373,  -249,  -342,  -373,  -373,  -373,
    -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,
    -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,
    -373,  -373,   -79,  -373,  -373,  -373,  -127,  -373,  -372,  -369,
    -373,  -373,  -373,  -373,  -373,  -373,  -373,  -276,   -65,  -193,
    -373,  -373,  -137,   -63,  -373,  -141,  -373,  -373
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,     6,     7,   352,   120,   121,   122,   405,
     123,   124,   125,   126,   127,   205,   129,   206,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   362,   363,   157,   369,   370,   158,
     159,   365,   366,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   345,   346,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   438,   197,   198,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   353,   354,   355,
     356,   499,   500,   357,   505,   506,   507,   508
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
     128,   128,   347,   418,   251,   418,   539,   425,   558,   316,
     427,   552,   425,   128,   425,   119,   200,   201,   425,   425,
     387,   425,   381,   382,   383,   384,   385,   386,   208,   389,
     390,   391,   392,   393,   424,   425,   425,   425,   425,   425,
     425,   225,   226,   554,   433,     1,     2,     3,   297,   368,
     497,   503,   235,   498,   504,   476,   477,   475,   476,   477,
     478,   479,   480,   481,   482,   483,   484,   128,   128,   128,
     128,   128,   388,   236,   450,   418,   379,   317,   425,   319,
     227,   228,   268,   269,   270,   271,   272,   572,   128,   327,
     476,   477,   253,   439,   513,   417,   501,   502,   440,   309,
     441,   380,   237,   279,   442,   443,   252,   444,   540,   476,
     477,   430,   432,   229,   230,   364,   364,   128,   425,   514,
     128,   446,   447,   448,   449,   570,   574,   497,   260,   513,
     498,   425,   418,   503,   238,   322,   504,   298,   299,   300,
     301,   302,   303,   304,   261,   305,   306,   307,   308,   262,
     501,   502,   231,   232,   561,   428,   359,   360,   361,   263,
     319,   320,   321,   431,   332,   431,   342,   343,   319,   419,
     264,   474,   320,   321,   130,   130,   475,   476,   477,   478,
     479,   480,   481,   482,   483,   484,   273,   130,   460,   461,
     280,   462,   342,   343,   275,   472,   342,   343,   128,   541,
     342,   343,   276,   571,   323,   324,   128,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   418,   342,   343,   344,   325,   326,   319,   319,
     319,   319,   319,   277,   359,   360,   361,   128,   562,   319,
     281,   130,   130,   130,   130,   130,   342,   343,   476,   477,
     311,   128,   335,   532,   533,   315,   282,   327,   312,   113,
     368,   378,   130,   399,   420,   421,   128,   128,   128,   128,
     128,   422,   423,   426,   364,   435,   565,   128,   436,   437,
     445,   456,   319,   457,   464,   569,   463,   465,   466,   471,
     564,   130,   511,   515,   130,   319,   128,   128,   128,   128,
     128,   128,   518,   128,   128,   128,   128,   128,   516,   128,
     128,   128,   319,   517,   519,   523,   521,   520,   542,   543,
     128,   560,   522,   544,   394,   395,   396,   128,   128,   573,
     545,   546,   547,   128,   524,   548,   549,   550,   551,   575,
     556,   557,   410,   411,   568,   576,   577,   202,   203,   429,
     128,   358,   434,   367,   319,   319,   319,   512,   553,   578,
     509,   566,   555,   510,   559,     0,     0,     0,     0,     0,
     319,   319,   130,     0,     0,     0,     0,     0,     0,     0,
     130,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   128,   128,   128,     0,     0,     0,     0,     0,
     128,   128,     0,     0,     0,     0,     0,     0,   128,   128,
       0,   130,     0,     0,     0,   458,   459,     0,   319,   319,
       0,     0,     0,   128,   128,   130,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     130,   130,   130,   130,   130,     0,     0,     0,     0,     0,
       0,   130,     0,     0,     0,     0,   128,   128,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     130,   130,   130,   130,   130,   130,     0,   130,   130,   130,
     130,   130,     0,   130,   130,   130,     0,     0,     0,     0,
       0,     0,     0,     0,   130,     0,     0,     0,     0,     0,
       0,   130,   130,     0,     0,     0,     0,   130,     0,     0,
       0,     0,   128,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   130,     0,     0,   319,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     128,     0,   128,     0,     0,     0,   128,     0,     0,   128,
       0,     0,     0,     0,     0,   128,   130,   130,   130,     0,
       0,   567,     0,     0,   130,   130,     0,     0,     0,   204,
     207,   209,   130,   130,     0,     0,     0,     0,     0,     0,
       0,   233,   234,     0,     0,     0,     0,   130,   130,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,     0,
       0,   254,   255,   256,   257,   258,   259,     0,     0,     0,
     130,   130,   265,   266,   267,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   274,
       0,     0,     0,     0,     0,   278,     0,     0,     0,     0,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,     0,     0,     0,     0,   310,     0,
       0,     0,   314,     0,     0,     0,   130,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   130,     0,   130,     0,     0,     0,
     130,     0,     0,   130,     0,     0,     0,     0,     0,   130,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   333,
     334,     0,     0,     0,     0,     0,     0,   336,   337,   338,
     339,   340,     0,     0,     0,   341,     0,     0,   348,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   371,   372,   373,   374,     0,   376,   377,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   398,     0,     0,     0,   400,   401,     0,   406,
     407,   408,   409,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   413,   414,   416,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   453,     0,   455,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   469,     0,
       0,   470,     0,     0,     0,   473,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   526,   527,     0,
     529,     0,   530,   531,     0,     0,     0,     0,     0,   534,
     535,   536,   537,   329,   330,     0,     0,   538,     0,     9,
      10,    11,    12,    13,    14,    15,   331,    16,     0,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,     0,     0,    54,     0,
       0,     0,     0,     0,   563,     0,     0,     0,     0,     0,
       0,     0,     0,    55,    56,    57,    58,    59,    60,    61,
      62,     0,     0,     0,     0,     0,     0,     0,    63,    64,
      65,    66,    67,    68,     0,    69,    70,    71,    72,    73,
      74,     0,     0,     0,     0,     0,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,     0,    91,    92,    93,     0,     0,     0,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   111,
     112,   113,   114,   115,   116,   402,   403,   117,   118,     0,
       0,     9,    10,    11,    12,    13,    14,    15,     0,    16,
     404,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,     0,     0,
      54,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    55,    56,    57,    58,    59,
      60,    61,    62,     0,     0,     0,     0,     0,     0,     0,
      63,    64,    65,    66,    67,    68,     0,    69,    70,    71,
      72,    73,    74,     0,     0,     0,     0,     0,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,     0,    91,    92,    93,     0,     0,
       0,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   111,   112,   113,   114,   115,   116,     0,     0,   117,
     118,     8,     9,    10,    11,    12,    13,    14,    15,     0,
      16,     0,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,     0,
       0,    54,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    55,    56,    57,    58,
      59,    60,    61,    62,     0,     0,     0,     0,     0,     0,
       0,    63,    64,    65,    66,    67,    68,     0,    69,    70,
      71,    72,    73,    74,     0,     0,     0,     0,     0,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,     0,    91,    92,    93,     0,
       0,     0,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   111,   112,   113,   114,   115,   116,     0,     0,
     117,   118,   199,     9,    10,    11,    12,    13,    14,    15,
       0,    16,     0,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
       0,     0,    54,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    55,    56,    57,
      58,    59,    60,    61,    62,     0,     0,     0,     0,     0,
       0,     0,    63,    64,    65,    66,    67,    68,     0,    69,
      70,    71,    72,    73,    74,     0,     0,     0,     0,     0,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,     0,    91,    92,    93,
       0,     0,     0,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   111,   112,   113,   114,   115,   116,     0,
       0,   117,   118,   318,     9,    10,    11,    12,    13,    14,
      15,     0,    16,     0,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,     0,     0,    54,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    55,    56,
      57,    58,    59,    60,    61,    62,     0,     0,     0,     0,
       0,     0,     0,    63,    64,    65,    66,    67,    68,     0,
      69,    70,    71,    72,    73,    74,     0,     0,     0,     0,
       0,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,     0,    91,    92,
      93,     0,     0,     0,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   111,   112,   113,   114,   115,   116,
       0,     0,   117,   118,   328,     9,    10,    11,    12,    13,
      14,    15,     0,    16,     0,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,     0,     0,    54,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    55,
      56,    57,    58,    59,    60,    61,    62,     0,     0,     0,
       0,     0,     0,     0,    63,    64,    65,    66,    67,    68,
       0,    69,    70,    71,    72,    73,    74,     0,     0,     0,
       0,     0,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,     0,    91,
      92,    93,     0,     0,     0,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   111,   112,   113,   114,   115,
     116,     0,     0,   117,   118,     9,    10,    11,    12,    13,
      14,    15,     0,    16,     0,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,     0,     0,    54,     0,     0,   349,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    55,
      56,    57,    58,    59,    60,    61,    62,     0,     0,     0,
       0,     0,     0,     0,    63,    64,    65,    66,    67,    68,
     350,    69,    70,    71,    72,    73,    74,     0,     0,   351,
       0,     0,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,     0,    91,
      92,    93,     0,     0,     0,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   111,   112,   113,   114,   115,
     116,     0,     0,   117,   118,     9,    10,    11,    12,    13,
      14,    15,     0,    16,     0,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,     0,     0,    54,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    55,
      56,    57,    58,    59,    60,    61,    62,     0,     0,     0,
       0,     0,     0,     0,    63,    64,    65,    66,    67,    68,
     350,    69,    70,    71,    72,    73,    74,     0,     0,   351,
       0,     0,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,     0,    91,
      92,    93,     0,     0,     0,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   111,   112,   113,   114,   115,
     116,     0,     0,   117,   118,     9,    10,    11,    12,    13,
      14,    15,     0,    16,     0,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,     0,     0,    54,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    55,
      56,    57,    58,    59,    60,    61,    62,     0,     0,     0,
       0,     0,     0,     0,    63,    64,    65,    66,    67,    68,
       0,    69,    70,    71,    72,    73,    74,     0,     0,     0,
       0,     0,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,   375,    91,
      92,    93,     0,     0,     0,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   111,   112,   113,   114,   115,
     116,     0,     0,   117,   118,     9,    10,    11,    12,    13,
      14,    15,     0,    16,     0,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,     0,     0,    54,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    55,
      56,    57,    58,    59,    60,    61,    62,     0,     0,     0,
       0,     0,     0,     0,    63,    64,    65,    66,    67,    68,
       0,    69,    70,    71,    72,    73,    74,     0,     0,     0,
       0,     0,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,     0,    91,
      92,    93,     0,     0,     0,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   111,   112,   113,   114,   115,
     116,     0,   412,   117,   118,     9,    10,    11,    12,    13,
      14,    15,     0,    16,     0,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,     0,     0,    54,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    55,
      56,    57,    58,    59,    60,    61,    62,     0,     0,     0,
       0,     0,     0,     0,    63,    64,    65,    66,    67,    68,
       0,    69,    70,    71,    72,    73,    74,     0,     0,     0,
       0,     0,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,     0,    91,
      92,    93,     0,     0,     0,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   111,   112,   113,   114,   115,
     116,     0,   451,   117,   118,     9,    10,    11,    12,    13,
      14,    15,   467,    16,     0,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,     0,     0,    54,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    55,
      56,    57,    58,    59,    60,    61,    62,     0,     0,     0,
       0,     0,     0,     0,    63,    64,    65,    66,    67,    68,
       0,    69,    70,    71,    72,    73,    74,     0,     0,     0,
       0,     0,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,     0,    91,
      92,    93,     0,     0,     0,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   111,   112,   113,   114,   115,
     116,     0,     0,   117,   118,     9,    10,    11,    12,    13,
      14,    15,   468,    16,     0,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,     0,     0,    54,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    55,
      56,    57,    58,    59,    60,    61,    62,     0,     0,     0,
       0,     0,     0,     0,    63,    64,    65,    66,    67,    68,
       0,    69,    70,    71,    72,    73,    74,     0,     0,     0,
       0,     0,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,     0,    91,
      92,    93,     0,     0,     0,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   111,   112,   113,   114,   115,
     116,     0,     0,   117,   118,     9,    10,    11,    12,    13,
      14,    15,     0,    16,     0,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,     0,     0,    54,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    55,
      56,    57,    58,    59,    60,    61,    62,     0,     0,     0,
       0,     0,     0,     0,    63,    64,    65,    66,    67,    68,
       0,    69,    70,    71,    72,    73,    74,     0,     0,   351,
       0,     0,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,     0,    91,
      92,    93,     0,     0,     0,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   111,   112,   113,   114,   115,
     116,     0,     0,   117,   118,     9,    10,    11,    12,    13,
      14,    15,     0,    16,   404,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,     0,     0,    54,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    55,
      56,    57,    58,    59,    60,    61,    62,     0,     0,     0,
       0,     0,     0,     0,    63,    64,    65,    66,    67,    68,
       0,    69,    70,    71,    72,    73,    74,     0,     0,     0,
       0,     0,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,     0,    91,
      92,    93,     0,     0,     0,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   111,   112,   113,   114,   115,
     116,     0,     0,   117,   118,     9,    10,    11,    12,    13,
      14,    15,     0,    16,     0,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,     0,     0,    54,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    55,
      56,    57,    58,    59,    60,    61,    62,     0,     0,     0,
       0,     0,     0,     0,    63,    64,    65,    66,    67,    68,
       0,    69,    70,    71,    72,    73,    74,     0,     0,     0,
       0,     0,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,     0,    91,
      92,    93,     0,     0,     0,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   111,   112,   113,   114,   115,
     116,     0,     0,   117,   118,     9,    10,    11,    12,     0,
       0,    15,     0,    16,     0,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,     0,     0,    54,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    55,
      56,    57,    58,    59,    60,    61,    62,     0,     0,     0,
       0,     0,     0,     0,    63,    64,    65,    66,    67,    68,
       0,    69,    70,    71,    72,    73,    74,     0,     0,     0,
       0,     0,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,     0,    91,
      92,    93,     0,     0,     0,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   111,   112,   113,   114,   115,
     116,   239,     0,   117,   118,     9,    10,    11,    12,     0,
       0,    15,     0,    16,     0,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,     0,     0,    54,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    55,
      56,    57,    58,    59,    60,    61,    62,     0,     0,     0,
       0,     0,     0,     0,    63,    64,    65,    66,    67,    68,
       0,    69,    70,    71,    72,    73,    74,     0,     0,     0,
       0,     0,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,     0,    91,
      92,    93,     0,     0,     0,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   111,   112,   113,   114,   115,
     116,   313,     0,   117,   118,     9,    10,    11,    12,     0,
       0,    15,     0,    16,     0,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,     0,     0,    54,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    55,
      56,    57,    58,    59,    60,    61,    62,     0,     0,     0,
       0,     0,     0,     0,    63,    64,    65,    66,    67,    68,
       0,    69,    70,    71,    72,    73,    74,   397,     0,     0,
       0,     0,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,     0,    91,
      92,    93,     0,     0,     0,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   111,   112,   113,   114,   115,
     116,     0,     0,   117,   118,     9,    10,    11,    12,   415,
       0,    15,     0,    16,     0,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,     0,     0,    54,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    55,
      56,    57,    58,    59,    60,    61,    62,     0,     0,     0,
       0,     0,     0,     0,    63,    64,    65,    66,    67,    68,
       0,    69,    70,    71,    72,    73,    74,     0,     0,     0,
       0,     0,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,     0,    91,
      92,    93,     0,     0,     0,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   111,   112,   113,   114,   115,
     116,     0,     0,   117,   118,     9,    10,    11,    12,     0,
       0,    15,     0,    16,     0,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,     0,     0,    54,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    55,
      56,    57,    58,    59,    60,    61,    62,     0,     0,     0,
       0,     0,     0,     0,    63,    64,    65,    66,    67,    68,
       0,    69,    70,    71,    72,    73,    74,   452,     0,     0,
       0,     0,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,     0,    91,
      92,    93,     0,     0,     0,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   111,   112,   113,   114,   115,
     116,     0,     0,   117,   118,     9,    10,    11,    12,     0,
       0,    15,     0,    16,     0,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,     0,     0,    54,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    55,
      56,    57,    58,    59,    60,    61,    62,     0,     0,     0,
       0,     0,     0,     0,    63,    64,    65,    66,    67,    68,
       0,    69,    70,    71,    72,    73,    74,   454,     0,     0,
       0,     0,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,     0,    91,
      92,    93,     0,     0,     0,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   111,   112,   113,   114,   115,
     116,     0,     0,   117,   118,     9,    10,    11,    12,     0,
       0,    15,     0,    16,     0,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,     0,     0,    54,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    55,
      56,    57,    58,    59,    60,    61,    62,     0,     0,     0,
       0,     0,     0,     0,    63,    64,    65,    66,    67,    68,
       0,    69,    70,    71,    72,    73,    74,   528,     0,     0,
       0,     0,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,     0,    91,
      92,    93,     0,     0,     0,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   111,   112,   113,   114,   115,
     116,     0,     0,   117,   118,     9,    10,    11,    12,     0,
       0,    15,     0,    16,     0,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,     0,     0,    54,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    55,
      56,    57,    58,    59,    60,    61,    62,     0,     0,     0,
       0,     0,     0,     0,    63,    64,    65,    66,    67,    68,
       0,    69,    70,    71,    72,    73,    74,     0,     0,     0,
       0,     0,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,     0,    91,
      92,    93,     0,     0,     0,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   111,   112,   113,   114,   115,
     116,     0,     0,   117,   118,     9,    10,    11,    12,     0,
       0,    15,     0,    16,     0,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,     0,     0,    54,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    55,
      56,    57,    58,    59,    60,    61,    62,     0,     0,     0,
       0,     0,     0,     0,    63,    64,    65,    66,    67,    68,
       0,    69,    70,    71,    72,    73,    74,     0,     0,     0,
       0,     0,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,   525,    87,    88,    89,    90,     0,    91,
      92,    93,     0,     0,     0,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   111,   112,   113,   114,   115,
     116,     0,     0,   117,   118
};

static const yytype_int16 yycheck[] =
{
       2,     3,   251,   345,    15,   347,    15,    60,    16,   101,
      82,    16,    60,    15,    60,     2,     3,     0,    60,    60,
     102,    60,   298,   299,   300,   301,   302,   303,    15,   305,
     306,   307,   308,   309,    16,    60,    60,    60,    60,    60,
      60,    39,    40,    16,    82,     5,     6,     7,    58,    87,
     422,   423,   101,   422,   423,    63,    64,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    69,    70,    71,
      72,    73,   154,   101,    16,   417,    56,   169,    60,   119,
      39,    40,    69,    70,    71,    72,    73,    16,    90,   161,
      63,    64,    15,   146,    57,   344,   104,   105,   146,    15,
     146,    81,   101,    90,   146,   146,   117,   146,   117,    63,
      64,    82,    82,    39,    40,    86,    86,   119,    60,    82,
     122,   146,   146,   146,   146,   146,   146,   499,    81,    57,
     499,    60,   474,   505,   101,   122,   505,   147,   148,   149,
     150,   151,   152,   153,    81,   155,   156,   157,   158,    81,
     104,   105,    39,    40,    82,    82,    83,    84,    85,    81,
     200,    13,    14,   365,    16,   367,    13,    14,   208,    16,
      81,   420,    13,    14,     2,     3,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,   101,    15,    38,    39,
      72,    41,    13,    14,   101,    16,    13,    14,   200,    16,
      13,    14,   101,    16,    13,    14,   208,    38,    39,    40,
      39,    40,    41,    39,    40,    41,    39,    40,    41,    39,
      40,    41,   564,    13,    14,    15,    13,    14,   268,   269,
     270,   271,   272,   101,    83,    84,    85,   239,   514,   279,
      72,    69,    70,    71,    72,    73,    13,    14,    63,    64,
      72,   253,   239,   458,   459,   101,    81,   161,    72,   161,
      87,   126,    90,   101,    15,    15,   268,   269,   270,   271,
     272,    15,    15,    59,    86,    82,   552,   279,    81,    57,
     154,    14,   322,    13,    13,   561,    14,    14,    13,    13,
     539,   119,    81,   147,   122,   335,   298,   299,   300,   301,
     302,   303,   150,   305,   306,   307,   308,   309,   148,   311,
     312,   313,   352,   149,   151,   157,   155,   152,    72,    72,
     322,   127,   156,    72,   311,   312,   313,   329,   330,    81,
      72,    72,    72,   335,   158,    72,    72,    72,    72,    58,
      72,    72,   329,   330,    82,   128,    58,     5,     5,   362,
     352,   260,   369,   263,   394,   395,   396,   436,   485,    82,
     425,   554,   499,   426,   505,    -1,    -1,    -1,    -1,    -1,
     410,   411,   200,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     208,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   394,   395,   396,    -1,    -1,    -1,    -1,    -1,
     402,   403,    -1,    -1,    -1,    -1,    -1,    -1,   410,   411,
      -1,   239,    -1,    -1,    -1,   402,   403,    -1,   458,   459,
      -1,    -1,    -1,   425,   426,   253,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     268,   269,   270,   271,   272,    -1,    -1,    -1,    -1,    -1,
      -1,   279,    -1,    -1,    -1,    -1,   458,   459,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     298,   299,   300,   301,   302,   303,    -1,   305,   306,   307,
     308,   309,    -1,   311,   312,   313,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   322,    -1,    -1,    -1,    -1,    -1,
      -1,   329,   330,    -1,    -1,    -1,    -1,   335,    -1,    -1,
      -1,    -1,   514,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   352,    -1,    -1,   567,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     552,    -1,   554,    -1,    -1,    -1,   558,    -1,    -1,   561,
      -1,    -1,    -1,    -1,    -1,   567,   394,   395,   396,    -1,
      -1,   558,    -1,    -1,   402,   403,    -1,    -1,    -1,    13,
      14,    15,   410,   411,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    26,    -1,    -1,    -1,    -1,   425,   426,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    -1,
      -1,    55,    56,    57,    58,    59,    60,    -1,    -1,    -1,
     458,   459,    66,    67,    68,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,    -1,    -1,    -1,    -1,   112,    -1,
      -1,    -1,   116,    -1,    -1,    -1,   514,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   552,    -1,   554,    -1,    -1,    -1,
     558,    -1,    -1,   561,    -1,    -1,    -1,    -1,    -1,   567,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   233,
     234,    -1,    -1,    -1,    -1,    -1,    -1,   241,   242,   243,
     244,   245,    -1,    -1,    -1,   249,    -1,    -1,   252,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   275,   276,   277,   278,    -1,   280,   281,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   316,    -1,    -1,    -1,   320,   321,    -1,   323,
     324,   325,   326,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   341,   342,   343,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   397,    -1,   399,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   412,    -1,
      -1,   415,    -1,    -1,    -1,   419,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   451,   452,    -1,
     454,    -1,   456,   457,    -1,    -1,    -1,    -1,    -1,   463,
     464,   465,   466,     3,     4,    -1,    -1,   471,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    -1,    58,    -1,
      -1,    -1,    -1,    -1,   528,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    73,    74,    75,    76,    77,    78,    79,
      80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    89,
      90,    91,    92,    93,    -1,    95,    96,    97,    98,    99,
     100,    -1,    -1,    -1,    -1,    -1,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,    -1,   123,   124,   125,    -1,    -1,    -1,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,
     160,   161,   162,   163,   164,     3,     4,   167,   168,    -1,
      -1,     9,    10,    11,    12,    13,    14,    15,    -1,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    74,    75,    76,    77,
      78,    79,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      88,    89,    90,    91,    92,    93,    -1,    95,    96,    97,
      98,    99,   100,    -1,    -1,    -1,    -1,    -1,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,    -1,   123,   124,   125,    -1,    -1,
      -1,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   159,   160,   161,   162,   163,   164,    -1,    -1,   167,
     168,     8,     9,    10,    11,    12,    13,    14,    15,    -1,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,    76,
      77,    78,    79,    80,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    88,    89,    90,    91,    92,    93,    -1,    95,    96,
      97,    98,    99,   100,    -1,    -1,    -1,    -1,    -1,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,    -1,   123,   124,   125,    -1,
      -1,    -1,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   159,   160,   161,   162,   163,   164,    -1,    -1,
     167,   168,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,
      76,    77,    78,    79,    80,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    88,    89,    90,    91,    92,    93,    -1,    95,
      96,    97,    98,    99,   100,    -1,    -1,    -1,    -1,    -1,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,    -1,   123,   124,   125,
      -1,    -1,    -1,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   159,   160,   161,   162,   163,   164,    -1,
      -1,   167,   168,     8,     9,    10,    11,    12,    13,    14,
      15,    -1,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,
      75,    76,    77,    78,    79,    80,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    88,    89,    90,    91,    92,    93,    -1,
      95,    96,    97,    98,    99,   100,    -1,    -1,    -1,    -1,
      -1,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,    -1,   123,   124,
     125,    -1,    -1,    -1,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   159,   160,   161,   162,   163,   164,
      -1,    -1,   167,   168,     8,     9,    10,    11,    12,    13,
      14,    15,    -1,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      74,    75,    76,    77,    78,    79,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,    93,
      -1,    95,    96,    97,    98,    99,   100,    -1,    -1,    -1,
      -1,    -1,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,    -1,   123,
     124,   125,    -1,    -1,    -1,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   159,   160,   161,   162,   163,
     164,    -1,    -1,   167,   168,     9,    10,    11,    12,    13,
      14,    15,    -1,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    58,    -1,    -1,    61,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      74,    75,    76,    77,    78,    79,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,    -1,    -1,   103,
      -1,    -1,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,    -1,   123,
     124,   125,    -1,    -1,    -1,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   159,   160,   161,   162,   163,
     164,    -1,    -1,   167,   168,     9,    10,    11,    12,    13,
      14,    15,    -1,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      74,    75,    76,    77,    78,    79,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,    -1,    -1,   103,
      -1,    -1,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,    -1,   123,
     124,   125,    -1,    -1,    -1,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   159,   160,   161,   162,   163,
     164,    -1,    -1,   167,   168,     9,    10,    11,    12,    13,
      14,    15,    -1,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      74,    75,    76,    77,    78,    79,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,    93,
      -1,    95,    96,    97,    98,    99,   100,    -1,    -1,    -1,
      -1,    -1,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,    -1,    -1,    -1,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   159,   160,   161,   162,   163,
     164,    -1,    -1,   167,   168,     9,    10,    11,    12,    13,
      14,    15,    -1,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      74,    75,    76,    77,    78,    79,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,    93,
      -1,    95,    96,    97,    98,    99,   100,    -1,    -1,    -1,
      -1,    -1,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,    -1,   123,
     124,   125,    -1,    -1,    -1,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   159,   160,   161,   162,   163,
     164,    -1,   166,   167,   168,     9,    10,    11,    12,    13,
      14,    15,    -1,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      74,    75,    76,    77,    78,    79,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,    93,
      -1,    95,    96,    97,    98,    99,   100,    -1,    -1,    -1,
      -1,    -1,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,    -1,   123,
     124,   125,    -1,    -1,    -1,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   159,   160,   161,   162,   163,
     164,    -1,   166,   167,   168,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      74,    75,    76,    77,    78,    79,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,    93,
      -1,    95,    96,    97,    98,    99,   100,    -1,    -1,    -1,
      -1,    -1,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,    -1,   123,
     124,   125,    -1,    -1,    -1,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   159,   160,   161,   162,   163,
     164,    -1,    -1,   167,   168,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      74,    75,    76,    77,    78,    79,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,    93,
      -1,    95,    96,    97,    98,    99,   100,    -1,    -1,    -1,
      -1,    -1,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,    -1,   123,
     124,   125,    -1,    -1,    -1,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   159,   160,   161,   162,   163,
     164,    -1,    -1,   167,   168,     9,    10,    11,    12,    13,
      14,    15,    -1,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      74,    75,    76,    77,    78,    79,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,    93,
      -1,    95,    96,    97,    98,    99,   100,    -1,    -1,   103,
      -1,    -1,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,    -1,   123,
     124,   125,    -1,    -1,    -1,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   159,   160,   161,   162,   163,
     164,    -1,    -1,   167,   168,     9,    10,    11,    12,    13,
      14,    15,    -1,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      74,    75,    76,    77,    78,    79,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,    93,
      -1,    95,    96,    97,    98,    99,   100,    -1,    -1,    -1,
      -1,    -1,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,    -1,   123,
     124,   125,    -1,    -1,    -1,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   159,   160,   161,   162,   163,
     164,    -1,    -1,   167,   168,     9,    10,    11,    12,    13,
      14,    15,    -1,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      74,    75,    76,    77,    78,    79,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,    93,
      -1,    95,    96,    97,    98,    99,   100,    -1,    -1,    -1,
      -1,    -1,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,    -1,   123,
     124,   125,    -1,    -1,    -1,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   159,   160,   161,   162,   163,
     164,    -1,    -1,   167,   168,     9,    10,    11,    12,    -1,
      -1,    15,    -1,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      74,    75,    76,    77,    78,    79,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,    93,
      -1,    95,    96,    97,    98,    99,   100,    -1,    -1,    -1,
      -1,    -1,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,    -1,   123,
     124,   125,    -1,    -1,    -1,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   159,   160,   161,   162,   163,
     164,   165,    -1,   167,   168,     9,    10,    11,    12,    -1,
      -1,    15,    -1,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      74,    75,    76,    77,    78,    79,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,    93,
      -1,    95,    96,    97,    98,    99,   100,    -1,    -1,    -1,
      -1,    -1,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,    -1,   123,
     124,   125,    -1,    -1,    -1,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   159,   160,   161,   162,   163,
     164,   165,    -1,   167,   168,     9,    10,    11,    12,    -1,
      -1,    15,    -1,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      74,    75,    76,    77,    78,    79,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,    93,
      -1,    95,    96,    97,    98,    99,   100,   101,    -1,    -1,
      -1,    -1,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,    -1,   123,
     124,   125,    -1,    -1,    -1,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   159,   160,   161,   162,   163,
     164,    -1,    -1,   167,   168,     9,    10,    11,    12,    13,
      -1,    15,    -1,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      74,    75,    76,    77,    78,    79,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,    93,
      -1,    95,    96,    97,    98,    99,   100,    -1,    -1,    -1,
      -1,    -1,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,    -1,   123,
     124,   125,    -1,    -1,    -1,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   159,   160,   161,   162,   163,
     164,    -1,    -1,   167,   168,     9,    10,    11,    12,    -1,
      -1,    15,    -1,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      74,    75,    76,    77,    78,    79,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,    93,
      -1,    95,    96,    97,    98,    99,   100,   101,    -1,    -1,
      -1,    -1,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,    -1,   123,
     124,   125,    -1,    -1,    -1,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   159,   160,   161,   162,   163,
     164,    -1,    -1,   167,   168,     9,    10,    11,    12,    -1,
      -1,    15,    -1,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      74,    75,    76,    77,    78,    79,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,    93,
      -1,    95,    96,    97,    98,    99,   100,   101,    -1,    -1,
      -1,    -1,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,    -1,   123,
     124,   125,    -1,    -1,    -1,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   159,   160,   161,   162,   163,
     164,    -1,    -1,   167,   168,     9,    10,    11,    12,    -1,
      -1,    15,    -1,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      74,    75,    76,    77,    78,    79,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,    93,
      -1,    95,    96,    97,    98,    99,   100,   101,    -1,    -1,
      -1,    -1,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,    -1,   123,
     124,   125,    -1,    -1,    -1,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   159,   160,   161,   162,   163,
     164,    -1,    -1,   167,   168,     9,    10,    11,    12,    -1,
      -1,    15,    -1,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      74,    75,    76,    77,    78,    79,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,    93,
      -1,    95,    96,    97,    98,    99,   100,    -1,    -1,    -1,
      -1,    -1,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,    -1,   123,
     124,   125,    -1,    -1,    -1,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   159,   160,   161,   162,   163,
     164,    -1,    -1,   167,   168,     9,    10,    11,    12,    -1,
      -1,    15,    -1,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      74,    75,    76,    77,    78,    79,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,    93,
      -1,    95,    96,    97,    98,    99,   100,    -1,    -1,    -1,
      -1,    -1,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,    -1,   123,
     124,   125,    -1,    -1,    -1,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   159,   160,   161,   162,   163,
     164,    -1,    -1,   167,   168
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     5,     6,     7,   171,   172,   173,   174,     8,     9,
      10,    11,    12,    13,    14,    15,    17,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    58,    73,    74,    75,    76,    77,
      78,    79,    80,    88,    89,    90,    91,    92,    93,    95,
      96,    97,    98,    99,   100,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   123,   124,   125,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   159,   160,   161,   162,   163,   164,   167,   168,   175,
     176,   177,   178,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   216,   219,   220,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   263,   264,     8,
     175,     0,   173,   174,   177,   185,   187,   177,   175,   177,
      38,    39,    40,    39,    40,    41,    39,    40,    41,    39,
      40,    41,    39,    40,    41,    39,    40,    39,    40,    39,
      40,    39,    40,   177,   177,   101,   101,   101,   101,   165,
     177,   177,   177,   177,   177,   177,   177,   177,   177,   177,
     177,    15,   117,    15,   177,   177,   177,   177,   177,   177,
      81,    81,    81,    81,    81,   177,   177,   177,   175,   175,
     175,   175,   175,   101,   177,   101,   101,   101,   177,   175,
      72,    72,    81,   177,   177,   177,   177,   177,   177,   177,
     177,   177,   177,   177,   177,   177,   177,    58,   147,   148,
     149,   150,   151,   152,   153,   155,   156,   157,   158,    15,
     177,    72,    72,   165,   177,   101,   101,   169,     8,   176,
      13,    14,   175,    13,    14,    13,    14,   161,     8,     3,
       4,    16,    16,   177,   177,   175,   177,   177,   177,   177,
     177,   177,    13,    14,    15,   235,   236,   235,   177,    61,
      94,   103,   175,   277,   278,   279,   280,   283,   212,    83,
      84,    85,   214,   215,    86,   221,   222,   221,    87,   217,
     218,   177,   177,   177,   177,   122,   177,   177,   126,    56,
      81,   277,   277,   277,   277,   277,   277,   102,   154,   277,
     277,   277,   277,   277,   175,   175,   175,   101,   177,   101,
     177,   177,     3,     4,    18,   179,   177,   177,   177,   177,
     175,   175,   166,   177,   177,    13,   177,   235,   236,    16,
      15,    15,    15,    15,    16,    60,    59,    82,    82,   215,
      82,   222,    82,    82,   218,    82,    81,    57,   262,   146,
     146,   146,   146,   146,   146,   154,   146,   146,   146,   146,
      16,   166,   101,   177,   101,   177,    14,    13,   175,   175,
      38,    39,    41,    14,    13,    14,    13,    16,    16,   177,
     177,    13,    16,   177,   235,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   268,   269,   281,
     282,   104,   105,   268,   269,   284,   285,   286,   287,   278,
     283,    81,   262,    57,    82,   147,   148,   149,   150,   151,
     152,   155,   156,   157,   158,   117,   177,   177,   101,   177,
     177,   177,   179,   179,   177,   177,   177,   177,   177,    15,
     117,    16,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    16,   266,    16,   282,    72,    72,    16,   285,
     127,    82,   277,   177,   235,   277,   279,   175,    82,   277,
     146,    16,    16,    81,   146,    58,   128,    58,    82
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   170,   171,   172,   172,   172,   172,   172,   173,   174,
     174,   174,   174,   175,   175,   176,   176,   176,   176,   176,
     176,   176,   176,   176,   176,   176,   176,   176,   176,   176,
     177,   177,   177,   177,   177,   177,   177,   177,   177,   177,
     177,   177,   177,   177,   177,   177,   177,   177,   177,   177,
     177,   177,   177,   177,   177,   177,   177,   177,   177,   177,
     177,   177,   177,   177,   177,   177,   177,   177,   177,   177,
     177,   177,   177,   177,   177,   177,   177,   177,   177,   177,
     177,   177,   177,   177,   177,   177,   177,   177,   177,   177,
     177,   177,   177,   177,   177,   177,   177,   177,   177,   177,
     177,   177,   177,   177,   177,   177,   177,   178,   178,   178,
     179,   179,   179,   180,   180,   180,   180,   180,   180,   180,
     180,   180,   180,   180,   180,   180,   180,   180,   180,   180,
     180,   180,   180,   181,   182,   183,   184,   185,   186,   186,
     187,   188,   188,   188,   188,   188,   188,   188,   188,   188,
     188,   188,   188,   188,   188,   188,   188,   188,   189,   190,
     191,   192,   192,   193,   194,   195,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   212,   213,   214,   214,   215,   215,
     215,   216,   217,   217,   218,   219,   220,   221,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   233,   234,   234,   234,   235,   235,   236,   236,   236,
     236,   237,   237,   238,   239,   239,   240,   240,   241,   241,
     242,   243,   244,   245,   245,   246,   246,   247,   248,   249,
     250,   251,   251,   252,   252,   253,   253,   254,   255,   255,
     256,   256,   256,   256,   256,   256,   257,   257,   258,   258,
     259,   259,   260,   261,   261,   261,   261,   261,   261,   261,
     261,   261,   261,   261,   261,   261,   261,   262,   262,   263,
     264,   264,   265,   265,   266,   266,   266,   266,   266,   266,
     266,   266,   266,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   277,   278,   278,   279,   279,
     280,   281,   281,   282,   282,   283,   283,   283,   284,   284,
     285,   285,   285,   285,   286,   287
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     1,     1,     2,     2,     1,     2,
       2,     3,     3,     1,     2,     5,     3,     5,     3,     5,
       3,     5,     3,     5,     5,     3,     3,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     3,     1,     1,     1,     1,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     2,    10,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     4,     1,     2,     4,     1,     2,     1,     1,
       1,     4,     1,     2,     1,     4,     4,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     3,
       5,     3,     8,     6,     6,     1,     2,     4,     2,     2,
       3,     3,     3,     2,     5,     5,     5,     5,     3,     3,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     5,     3,
       5,     6,     4,     5,     3,     4,     5,     3,     2,     3,
       5,     4,     1,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     5,     9,     8,     4,     3,     2,     1,     4,
       4,     8,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     1,     3,     1,     1,     1,     3,
       5,     1,     2,     1,     1,     0,     1,     5,     1,     2,
       1,     1,     1,     1,     2,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (ret_str, YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, ret_str); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, char **ret_str)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (ret_str);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, char **ret_str)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, ret_str);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule, char **ret_str)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              , ret_str);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, ret_str); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, char **ret_str)
{
  YYUSE (yyvaluep);
  YYUSE (ret_str);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (char **ret_str)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 287 "itex2MML.y" /* yacc.c:1646  */
    {/* all processing done in body*/}
#line 3179 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 290 "itex2MML.y" /* yacc.c:1646  */
    {/* nothing - do nothing*/}
#line 3185 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 291 "itex2MML.y" /* yacc.c:1646  */
    {/* proc done in body*/}
#line 3191 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 292 "itex2MML.y" /* yacc.c:1646  */
    {/* all proc. in body*/}
#line 3197 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 293 "itex2MML.y" /* yacc.c:1646  */
    {/* all proc. in body*/}
#line 3203 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 294 "itex2MML.y" /* yacc.c:1646  */
    {/* all proc. in body*/}
#line 3209 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 296 "itex2MML.y" /* yacc.c:1646  */
    {printf("%s", (yyvsp[0]));}
#line 3215 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 298 "itex2MML.y" /* yacc.c:1646  */
    {/* empty math group - ignore*/}
#line 3221 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 299 "itex2MML.y" /* yacc.c:1646  */
    {/* ditto */}
#line 3227 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 300 "itex2MML.y" /* yacc.c:1646  */
    {
  char ** r = (char **) ret_str;
  char * p = itex2MML_copy3("<math xmlns='http://www.w3.org/1998/Math/MathML' display='inline'><semantics><mrow>", (yyvsp[-1]), "</mrow><annotation encoding='application/x-tex'>");
  char * s = itex2MML_copy3(p, (yyvsp[0]), "</annotation></semantics></math>");
  itex2MML_free_string(p);
  itex2MML_free_string((yyvsp[-1]));  
  itex2MML_free_string((yyvsp[0]));
  if (r) {
    (*r) = (s == itex2MML_empty_string) ? 0 : s;
  }
  else {
    if (itex2MML_write_mathml)
      (*itex2MML_write_mathml) (s);
    itex2MML_free_string(s);
  }
}
#line 3248 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 316 "itex2MML.y" /* yacc.c:1646  */
    {
  char ** r = (char **) ret_str;
  char * p = itex2MML_copy3("<math xmlns='http://www.w3.org/1998/Math/MathML' display='block'><semantics><mrow>", (yyvsp[-1]), "</mrow><annotation encoding='application/x-tex'>");
  char * s = itex2MML_copy3(p, (yyvsp[0]), "</annotation></semantics></math>");
  itex2MML_free_string(p);
  itex2MML_free_string((yyvsp[-1]));  
  itex2MML_free_string((yyvsp[0]));
  if (r) {
    (*r) = (s == itex2MML_empty_string) ? 0 : s;
  }
  else {
    if (itex2MML_write_mathml)
      (*itex2MML_write_mathml) (s);
    itex2MML_free_string(s);
  }
}
#line 3269 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 333 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string((yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 3278 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 337 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy2((yyvsp[-1]), (yyvsp[0]));
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 3288 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 343 "itex2MML.y" /* yacc.c:1646  */
    {
  if (itex2MML_displaymode == 1) {
    char * s1 = itex2MML_copy3("<munderover>", (yyvsp[-4]), " ");
    char * s2 = itex2MML_copy3((yyvsp[-2]), " ", (yyvsp[0]));
    (yyval) = itex2MML_copy3(s1, s2, "</munderover>");
    itex2MML_free_string(s1);
    itex2MML_free_string(s2);
  }
  else {
    char * s1 = itex2MML_copy3("<msubsup>", (yyvsp[-4]), " ");
    char * s2 = itex2MML_copy3((yyvsp[-2]), " ", (yyvsp[0]));
    (yyval) = itex2MML_copy3(s1, s2, "</msubsup>");
    itex2MML_free_string(s1);
    itex2MML_free_string(s2);
  }
  itex2MML_free_string((yyvsp[-4]));
  itex2MML_free_string((yyvsp[-2]));
  itex2MML_free_string((yyvsp[0]));
}
#line 3312 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 362 "itex2MML.y" /* yacc.c:1646  */
    {
  if (itex2MML_displaymode == 1) {
    char * s1 = itex2MML_copy3("<munder>", (yyvsp[-2]), " ");
    (yyval) = itex2MML_copy3(s1, (yyvsp[0]), "</munder>");
    itex2MML_free_string(s1);
  }
  else {
    char * s1 = itex2MML_copy3("<msub>", (yyvsp[-2]), " ");
    (yyval) = itex2MML_copy3(s1, (yyvsp[0]), "</msub>");
    itex2MML_free_string(s1);
  }
  itex2MML_free_string((yyvsp[-2]));
  itex2MML_free_string((yyvsp[0]));
}
#line 3331 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 376 "itex2MML.y" /* yacc.c:1646  */
    {
  if (itex2MML_displaymode == 1) {
    char * s1 = itex2MML_copy3("<munderover>", (yyvsp[-4]), " ");
    char * s2 = itex2MML_copy3((yyvsp[0]), " ", (yyvsp[-2]));
    (yyval) = itex2MML_copy3(s1, s2, "</munderover>");
    itex2MML_free_string(s1);
    itex2MML_free_string(s2);
  }
  else {
    char * s1 = itex2MML_copy3("<msubsup>", (yyvsp[-4]), " ");
    char * s2 = itex2MML_copy3((yyvsp[0]), " ", (yyvsp[-2]));
    (yyval) = itex2MML_copy3(s1, s2, "</msubsup>");
    itex2MML_free_string(s1);
    itex2MML_free_string(s2);
  }
  itex2MML_free_string((yyvsp[-4]));
  itex2MML_free_string((yyvsp[-2]));
  itex2MML_free_string((yyvsp[0]));
}
#line 3355 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 395 "itex2MML.y" /* yacc.c:1646  */
    {
  if (itex2MML_displaymode == 1) {
    char * s1 = itex2MML_copy3("<mover>", (yyvsp[-2]), " ");
    (yyval) = itex2MML_copy3(s1, (yyvsp[0]), "</mover>");
    itex2MML_free_string(s1);
  }
  else {
    char * s1 = itex2MML_copy3("<msup>", (yyvsp[-2]), " ");
    (yyval) = itex2MML_copy3(s1, (yyvsp[0]), "</msup>");
    itex2MML_free_string(s1);
  }
  itex2MML_free_string((yyvsp[-2]));
  itex2MML_free_string((yyvsp[0]));
}
#line 3374 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 409 "itex2MML.y" /* yacc.c:1646  */
    {
  if (itex2MML_displaymode == 1) {
    char * s1 = itex2MML_copy3("<munderover>", (yyvsp[-4]), " ");
    char * s2 = itex2MML_copy3((yyvsp[-2]), " ", (yyvsp[0]));
    (yyval) = itex2MML_copy3(s1, s2, "</munderover>");
    itex2MML_free_string(s1);
    itex2MML_free_string(s2);
  }
  else {
    char * s1 = itex2MML_copy3("<msubsup>", (yyvsp[-4]), " ");
    char * s2 = itex2MML_copy3((yyvsp[-2]), " ", (yyvsp[0]));
    (yyval) = itex2MML_copy3(s1, s2, "</msubsup>");
    itex2MML_free_string(s1);
    itex2MML_free_string(s2);
  }
  itex2MML_free_string((yyvsp[-4]));
  itex2MML_free_string((yyvsp[-2]));
  itex2MML_free_string((yyvsp[0]));
}
#line 3398 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 428 "itex2MML.y" /* yacc.c:1646  */
    {
  if (itex2MML_displaymode == 1) {
    char * s1 = itex2MML_copy3("<munder>", (yyvsp[-2]), " ");
    (yyval) = itex2MML_copy3(s1, (yyvsp[0]), "</munder>");
    itex2MML_free_string(s1);
  }
  else {
    char * s1 = itex2MML_copy3("<msub>", (yyvsp[-2]), " ");
    (yyval) = itex2MML_copy3(s1, (yyvsp[0]), "</msub>");
    itex2MML_free_string(s1);
  }
  itex2MML_free_string((yyvsp[-2]));
  itex2MML_free_string((yyvsp[0]));
}
#line 3417 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 442 "itex2MML.y" /* yacc.c:1646  */
    {
  if (itex2MML_displaymode == 1) {
    char * s1 = itex2MML_copy3("<munderover>", (yyvsp[-4]), " ");
    char * s2 = itex2MML_copy3((yyvsp[0]), " ", (yyvsp[-2]));
    (yyval) = itex2MML_copy3(s1, s2, "</munderover>");
    itex2MML_free_string(s1);
    itex2MML_free_string(s2);
  }
  else {
    char * s1 = itex2MML_copy3("<msubsup>", (yyvsp[-4]), " ");
    char * s2 = itex2MML_copy3((yyvsp[0]), " ", (yyvsp[-2]));
    (yyval) = itex2MML_copy3(s1, s2, "</msubsup>");
    itex2MML_free_string(s1);
    itex2MML_free_string(s2);
  }
  itex2MML_free_string((yyvsp[-4]));
  itex2MML_free_string((yyvsp[-2]));
  itex2MML_free_string((yyvsp[0]));
}
#line 3441 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 461 "itex2MML.y" /* yacc.c:1646  */
    {
  if (itex2MML_displaymode == 1) {
    char * s1 = itex2MML_copy3("<mover>", (yyvsp[-2]), " ");
    (yyval) = itex2MML_copy3(s1, (yyvsp[0]), "</mover>");
    itex2MML_free_string(s1);
  }
  else {
    char * s1 = itex2MML_copy3("<msup>", (yyvsp[-2]), " ");
    (yyval) = itex2MML_copy3(s1, (yyvsp[0]), "</msup>");
    itex2MML_free_string(s1);
  }
  itex2MML_free_string((yyvsp[-2]));
  itex2MML_free_string((yyvsp[0]));
}
#line 3460 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 475 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<msubsup>", (yyvsp[-4]), " ");
  char * s2 = itex2MML_copy3((yyvsp[-2]), " ", (yyvsp[0]));
  (yyval) = itex2MML_copy3(s1, s2, "</msubsup>");
  itex2MML_free_string(s1);
  itex2MML_free_string(s2);
  itex2MML_free_string((yyvsp[-4]));
  itex2MML_free_string((yyvsp[-2]));
  itex2MML_free_string((yyvsp[0]));
}
#line 3475 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 485 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<msubsup>", (yyvsp[-4]), " ");
  char * s2 = itex2MML_copy3((yyvsp[0]), " ", (yyvsp[-2]));
  (yyval) = itex2MML_copy3(s1, s2, "</msubsup>");
  itex2MML_free_string(s1);
  itex2MML_free_string(s2);
  itex2MML_free_string((yyvsp[-4]));
  itex2MML_free_string((yyvsp[-2]));
  itex2MML_free_string((yyvsp[0]));
}
#line 3490 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 495 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<msub>", (yyvsp[-2]), " ");
  (yyval) = itex2MML_copy3(s1, (yyvsp[0]), "</msub>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[-2]));
  itex2MML_free_string((yyvsp[0]));
}
#line 3502 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 502 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<msup>", (yyvsp[-2]), " ");
  (yyval) = itex2MML_copy3(s1, (yyvsp[0]), "</msup>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[-2]));
  itex2MML_free_string((yyvsp[0]));
}
#line 3514 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 509 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<msub><mo/>", (yyvsp[0]), "</msub>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3523 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 513 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<msup><mo/>", (yyvsp[0]), "</msup>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3532 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 517 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string((yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 3541 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 526 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mi>", (yyvsp[0]), "</mi>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 530 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mn>", (yyvsp[0]), "</mn>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3559 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 598 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[-1]));
}
#line 3568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 602 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mrow>", (yyvsp[-1]), "</mrow>");
  itex2MML_free_string((yyvsp[-1]));
}
#line 3577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 606 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<mrow>", (yyvsp[-2]), (yyvsp[-1]));
  (yyval) = itex2MML_copy3(s1, (yyvsp[0]), "</mrow>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[-2]));
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 3590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 619 "itex2MML.y" /* yacc.c:1646  */
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mo>", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3600 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 624 "itex2MML.y" /* yacc.c:1646  */
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mo>", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 629 "itex2MML.y" /* yacc.c:1646  */
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy_string("");
  itex2MML_free_string((yyvsp[0]));
}
#line 3620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 635 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mo>", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 639 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mo>", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 643 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string("");
  itex2MML_free_string((yyvsp[0]));
}
#line 3647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 648 "itex2MML.y" /* yacc.c:1646  */
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mo maxsize=\"1.2em\" minsize=\"1.2em\">", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 653 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mo maxsize=\"1.2em\" minsize=\"1.2em\">", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 657 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mo maxsize=\"1.2em\" minsize=\"1.2em\">", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 661 "itex2MML.y" /* yacc.c:1646  */
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mo maxsize=\"1.8em\" minsize=\"1.8em\">", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 666 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mo maxsize=\"1.8em\" minsize=\"1.8em\">", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 670 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mo maxsize=\"1.8em\" minsize=\"1.8em\">", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3703 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 674 "itex2MML.y" /* yacc.c:1646  */
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mo maxsize=\"2.4em\" minsize=\"2.4em\">", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 679 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mo maxsize=\"2.4em\" minsize=\"2.4em\">", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3722 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 683 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mo maxsize=\"2.4em\" minsize=\"2.4em\">", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 687 "itex2MML.y" /* yacc.c:1646  */
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mo maxsize=\"3em\" minsize=\"3em\">", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 692 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mo maxsize=\"3em\" minsize=\"3em\">", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3750 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 696 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mo maxsize=\"3em\" minsize=\"3em\">", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3759 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 700 "itex2MML.y" /* yacc.c:1646  */
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mo maxsize=\"1.2em\" minsize=\"1.2em\">", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3769 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 705 "itex2MML.y" /* yacc.c:1646  */
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mo maxsize=\"1.2em\" minsize=\"1.2em\">", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 710 "itex2MML.y" /* yacc.c:1646  */
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mo maxsize=\"1.8em\" minsize=\"1.8em\">", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3789 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 715 "itex2MML.y" /* yacc.c:1646  */
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mo maxsize=\"1.8em\" minsize=\"1.8em\">", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3799 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 720 "itex2MML.y" /* yacc.c:1646  */
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mo maxsize=\"2.4em\" minsize=\"2.4em\">", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 725 "itex2MML.y" /* yacc.c:1646  */
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mo maxsize=\"2.4em\" minsize=\"2.4em\">", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 730 "itex2MML.y" /* yacc.c:1646  */
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mo maxsize=\"3em\" minsize=\"3em\">", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3829 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 735 "itex2MML.y" /* yacc.c:1646  */
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mo maxsize=\"3em\" minsize=\"3em\">", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3839 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 741 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string("<merror><mtext>Unknown character</mtext></merror>");
}
#line 3847 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 745 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string("<mo lspace=\"verythinmathspace\" rspace=\"0em\">&minus;</mo>");
}
#line 3855 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 749 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string("<mo lspace=\"verythinmathspace\" rspace=\"0em\">+</mo>");
}
#line 3863 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 755 "itex2MML.y" /* yacc.c:1646  */
    {
  itex2MML_rowposn=2;
  (yyval) = itex2MML_copy3("<mi>", (yyvsp[0]), "</mi>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3873 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 762 "itex2MML.y" /* yacc.c:1646  */
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy_string((yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 3883 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 768 "itex2MML.y" /* yacc.c:1646  */
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mo lspace=\"thinmathspace\" rspace=\"thinmathspace\">", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3893 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 776 "itex2MML.y" /* yacc.c:1646  */
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mo>", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3903 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 781 "itex2MML.y" /* yacc.c:1646  */
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mo>", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3913 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 786 "itex2MML.y" /* yacc.c:1646  */
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mstyle scriptlevel=\"0\"><mo>", (yyvsp[0]), "</mo></mstyle>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3923 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 791 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mo stretchy=\"false\">", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3932 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 795 "itex2MML.y" /* yacc.c:1646  */
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mo stretchy=\"false\">", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3942 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 800 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mo stretchy=\"false\">", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3951 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 804 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mo stretchy=\"false\">", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3960 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 808 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mo>", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3969 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 812 "itex2MML.y" /* yacc.c:1646  */
    {
  itex2MML_rowposn=2;
  (yyval) = itex2MML_copy3("<mo lspace=\"mediummathspace\" rspace=\"mediummathspace\">", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3979 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 817 "itex2MML.y" /* yacc.c:1646  */
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mo lspace=\"0em\" rspace=\"thinmathspace\">", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3989 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 822 "itex2MML.y" /* yacc.c:1646  */
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mo lspace=\"verythinmathspace\">", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3999 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 827 "itex2MML.y" /* yacc.c:1646  */
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mo lspace=\"0em\" rspace=\"thinmathspace\">", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4009 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 832 "itex2MML.y" /* yacc.c:1646  */
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mo lspace=\"thinmathspace\" rspace=\"thinmathspace\">", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4019 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 837 "itex2MML.y" /* yacc.c:1646  */
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mo lspace=\"mediummathspace\" rspace=\"mediummathspace\">", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4029 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 842 "itex2MML.y" /* yacc.c:1646  */
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mo lspace=\"thickmathspace\" rspace=\"thickmathspace\">", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4039 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 848 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<mspace height=\"", (yyvsp[-7]), "ex\" depth=\"");
  char * s2 = itex2MML_copy3((yyvsp[-4]), "ex\" width=\"", (yyvsp[-1]));
  (yyval) = itex2MML_copy3(s1, s2, "em\"/>");
  itex2MML_free_string(s1);
  itex2MML_free_string(s2);
  itex2MML_free_string((yyvsp[-7]));
  itex2MML_free_string((yyvsp[-4]));
  itex2MML_free_string((yyvsp[-1]));
}
#line 4054 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 859 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<maction actiontype=\"statusline\">", (yyvsp[0]), "<mtext>");
  (yyval) = itex2MML_copy3(s1, (yyvsp[-1]), "</mtext></maction>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 4066 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 867 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<maction actiontype=\"tooltip\">", (yyvsp[0]), "<mtext>");
  (yyval) = itex2MML_copy3(s1, (yyvsp[-1]), "</mtext></maction>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 4078 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 875 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<maction actiontype=\"toggle\" selection=\"2\">", (yyvsp[-1]), " ");
  (yyval) = itex2MML_copy3(s1, (yyvsp[0]), "</maction>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 4090 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 882 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<maction actiontype=\"toggle\">", (yyvsp[-1]), "</maction>");
  itex2MML_free_string((yyvsp[-1]));
}
#line 4099 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 887 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<maction actiontype=\"highlight\" other='color=", (yyvsp[-1]), "'>");
  (yyval) = itex2MML_copy3(s1, (yyvsp[0]), "</maction>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 4111 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 895 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<maction actiontype=\"highlight\" other='background=", (yyvsp[-1]), "'>");
  (yyval) = itex2MML_copy3(s1, (yyvsp[0]), "</maction>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 4123 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 903 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<mstyle mathcolor=", (yyvsp[-1]), ">");
  (yyval) = itex2MML_copy3(s1, (yyvsp[0]), "</mstyle>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 4135 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 910 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<mstyle mathbackground=", (yyvsp[-1]), ">");
  (yyval) = itex2MML_copy3(s1, (yyvsp[0]), "</mstyle>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 4147 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 918 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mpadded width=\"0\">", (yyvsp[0]), "</mpadded>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4156 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 923 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mpadded width=\"0\" lspace=\"-100%width\">", (yyvsp[0]), "</mpadded>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4165 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 928 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mpadded width=\"0\" lspace=\"-50%width\">", (yyvsp[0]), "</mpadded>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4174 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 933 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mtext>", (yyvsp[0]), "</mtext>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4183 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 938 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mstyle displaystyle=\"true\">", (yyvsp[0]), "</mstyle>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4192 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 943 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mstyle displaystyle=\"false\">", (yyvsp[0]), "</mstyle>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4201 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 948 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mstyle scriptlevel=\"0\">", (yyvsp[0]), "</mstyle>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4210 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 953 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mstyle scriptlevel=\"1\">", (yyvsp[0]), "</mstyle>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4219 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 958 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mstyle scriptlevel=\"2\">", (yyvsp[0]), "</mstyle>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4228 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 963 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mstyle mathvariant=\"italic\">", (yyvsp[0]), "</mstyle>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4237 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 968 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mstyle mathvariant=\"sans-serif\">", (yyvsp[0]), "</mstyle>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4246 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 973 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mstyle mathvariant=\"monospace\">", (yyvsp[0]), "</mstyle>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4255 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 978 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<menclose notation=\"updiagonalstrike\">", (yyvsp[0]), "</menclose>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4264 "y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 983 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<menclose notation=\"box\">", (yyvsp[0]), "</menclose>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4273 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 988 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mstyle mathvariant=\"bold\">", (yyvsp[0]), "</mstyle>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4282 "y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 993 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mi mathvariant=\"normal\">", (yyvsp[-1]), "</mi>");
  itex2MML_free_string((yyvsp[-1]));
}
#line 4291 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 998 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string((yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 4300 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1002 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy2((yyvsp[-1]), (yyvsp[0]));
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 4310 "y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1008 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mi>", (yyvsp[-1]), "</mi>");
  itex2MML_free_string((yyvsp[-1]));
}
#line 4319 "y.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1013 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string((yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 4328 "y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1017 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy2((yyvsp[-1]), (yyvsp[0]));
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 4338 "y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1023 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("&", (yyvsp[0]), "opf;");
  itex2MML_free_string((yyvsp[0]));
}
#line 4347 "y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 1027 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("&", (yyvsp[0]), "opf;");
  itex2MML_free_string((yyvsp[0]));
}
#line 4356 "y.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1031 "itex2MML.y" /* yacc.c:1646  */
    {
  /* Blackboard digits 0-9 correspond to Unicode characters 0x1D7D8-0x1D7E1 */
  char * end = (yyvsp[0]) + 1;
  int code = 0x1D7D8 + strtoul((yyvsp[0]), &end, 10);
  (yyval) = itex2MML_character_reference(code);
  itex2MML_free_string((yyvsp[0]));
}
#line 4368 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1039 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mi>", (yyvsp[-1]), "</mi>");
  itex2MML_free_string((yyvsp[-1]));
}
#line 4377 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1044 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string((yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 4386 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1048 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy2((yyvsp[-1]), (yyvsp[0]));
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 4396 "y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1054 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("&", (yyvsp[0]), "fr;");
  itex2MML_free_string((yyvsp[0]));
}
#line 4405 "y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1059 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mi>", (yyvsp[-1]), "</mi>");
  itex2MML_free_string((yyvsp[-1]));
}
#line 4414 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1064 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mi class='mathscript'>", (yyvsp[-1]), "</mi>");
  itex2MML_free_string((yyvsp[-1]));
}
#line 4423 "y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1069 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string((yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 4432 "y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1073 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy2((yyvsp[-1]), (yyvsp[0]));
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 4442 "y.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1079 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("&", (yyvsp[0]), "scr;");
  itex2MML_free_string((yyvsp[0]));
}
#line 4451 "y.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1084 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string("<mspace width=\"thinmathspace\"/>");
}
#line 4459 "y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1088 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string("<mspace width=\"mediummathspace\"/>");
}
#line 4467 "y.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1092 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string("<mspace width=\"thickmathspace\"/>");
}
#line 4475 "y.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1096 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string("<mspace width=\"1em\"/>");
}
#line 4483 "y.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1100 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string("<mspace width=\"2em\"/>");
}
#line 4491 "y.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1104 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string("<mspace width=\"negativethinmathspace\"/>");
}
#line 4499 "y.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 1108 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string("<mspace width=\"negativemediummathspace\"/>");
}
#line 4507 "y.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1112 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string("<mspace width=\"negativethickmathspace\"/>");
}
#line 4515 "y.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1116 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mphantom>", (yyvsp[0]), "</mphantom>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4524 "y.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1121 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<mrow href=\"", (yyvsp[-1]), "\" xmlns:xlink=\"http://www.w3.org/1999/xlink\" xlink:type=\"simple\" xlink:href=\"");
  char * s2 = itex2MML_copy3(s1, (yyvsp[-1]), "\">");
  (yyval) = itex2MML_copy3(s2, (yyvsp[0]), "</mrow>");
  itex2MML_free_string(s1);
  itex2MML_free_string(s2);
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 4538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1131 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<mmultiscripts>", (yyvsp[-3]), (yyvsp[-1]));
  (yyval) = itex2MML_copy2(s1, "</mmultiscripts>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[-3]));
  itex2MML_free_string((yyvsp[-1]));
}
#line 4550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1138 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<mmultiscripts>", (yyvsp[-1]), (yyvsp[0]));
  (yyval) = itex2MML_copy2(s1, "</mmultiscripts>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 4562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 1146 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<mmultiscripts>", (yyvsp[-3]), (yyvsp[-1]));
  char * s2 = itex2MML_copy3("<mprescripts/>", (yyvsp[-5]), "</mmultiscripts>");
  (yyval) = itex2MML_copy2(s1, s2);
  itex2MML_free_string(s1);
  itex2MML_free_string(s2);
  itex2MML_free_string((yyvsp[-5]));
  itex2MML_free_string((yyvsp[-3]));
  itex2MML_free_string((yyvsp[-1]));
}
#line 4577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1156 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy2("<mmultiscripts>", (yyvsp[-1]));
  char * s2 = itex2MML_copy3("<mprescripts/>", (yyvsp[-3]), "</mmultiscripts>");
  (yyval) = itex2MML_copy2(s1, s2);
  itex2MML_free_string(s1);
  itex2MML_free_string(s2);
  itex2MML_free_string((yyvsp[-3]));
  itex2MML_free_string((yyvsp[-1]));
}
#line 4591 "y.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 1165 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<mmultiscripts>", (yyvsp[-3]), (yyvsp[-1]));
  (yyval) = itex2MML_copy2(s1, "</mmultiscripts>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[-3]));
  itex2MML_free_string((yyvsp[-1])); 
}
#line 4603 "y.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 1173 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string((yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 4612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 1177 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3((yyvsp[-1]), " ", (yyvsp[0]));
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 4622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 1183 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3((yyvsp[-2]), " ", (yyvsp[0]));
  itex2MML_free_string((yyvsp[-2]));
  itex2MML_free_string((yyvsp[0]));
}
#line 4632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 1188 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy2((yyvsp[0]), " <none/>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 1192 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy2("<none/> ", (yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 4650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 1196 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy2("<none/> ", (yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 4659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 1201 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<mfrac>", (yyvsp[-1]), (yyvsp[0]));
  (yyval) = itex2MML_copy2(s1, "</mfrac>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 4671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 1208 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<mstyle displaystyle=\"false\"><mfrac>", (yyvsp[-1]), (yyvsp[0]));
  (yyval) = itex2MML_copy2(s1, "</mfrac></mstyle>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 4683 "y.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 1216 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3( "<mrow><mo lspace=\"mediummathspace\">(</mo><mo rspace=\"thinmathspace\">mod</mo>", (yyvsp[0]), "<mo rspace=\"mediummathspace\">)</mo></mrow>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4692 "y.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 1221 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<mfrac><mrow>", (yyvsp[-3]), "</mrow><mrow>");
  (yyval) = itex2MML_copy3(s1, (yyvsp[-1]), "</mrow></mfrac>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[-3]));
  itex2MML_free_string((yyvsp[-1]));
}
#line 4704 "y.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 1228 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<mrow>", (yyvsp[-4]), "<mfrac><mrow>");
  char * s2 = itex2MML_copy3((yyvsp[-3]), "</mrow><mrow>", (yyvsp[-1]));
  char * s3 = itex2MML_copy3("</mrow></mfrac>", (yyvsp[0]), "</mrow>");
  (yyval) = itex2MML_copy3(s1, s2, s3);
  itex2MML_free_string(s1);
  itex2MML_free_string(s2);
  itex2MML_free_string(s3);
  itex2MML_free_string((yyvsp[-4]));
  itex2MML_free_string((yyvsp[-3]));
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 4722 "y.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 1242 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<mfrac linethickness=\"0\"><mrow>", (yyvsp[-3]), "</mrow><mrow>");
  (yyval) = itex2MML_copy3(s1, (yyvsp[-1]), "</mrow></mfrac>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[-3]));
  itex2MML_free_string((yyvsp[-1]));
}
#line 4734 "y.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 1249 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<mrow>", (yyvsp[-4]), "<mfrac linethickness=\"0\"><mrow>");
  char * s2 = itex2MML_copy3((yyvsp[-3]), "</mrow><mrow>", (yyvsp[-1]));
  char * s3 = itex2MML_copy3("</mrow></mfrac>", (yyvsp[0]), "</mrow>");
  (yyval) = itex2MML_copy3(s1, s2, s3);
  itex2MML_free_string(s1);
  itex2MML_free_string(s2);
  itex2MML_free_string(s3);
  itex2MML_free_string((yyvsp[-4]));
  itex2MML_free_string((yyvsp[-3]));
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 4752 "y.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 1263 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<mrow><mo>(</mo><mfrac linethickness=\"0\">", (yyvsp[-1]), (yyvsp[0]));
  (yyval) = itex2MML_copy2(s1, "</mfrac><mo>)</mo></mrow>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 4764 "y.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 1270 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<mrow><mo>(</mo><mstyle displaystyle=\"false\"><mfrac linethickness=\"0\">", (yyvsp[-1]), (yyvsp[0]));
  (yyval) = itex2MML_copy2(s1, "</mfrac></mstyle><mo>)</mo></mrow>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 4776 "y.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 1278 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<munder>", (yyvsp[0]), "<mo>&UnderBrace;</mo></munder>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 1283 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<munder>", (yyvsp[0]), "<mo>&#x00332;</mo></munder>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 1288 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mover>", (yyvsp[0]), "<mo>&OverBrace;</mo></mover>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4803 "y.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 1293 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mover>", (yyvsp[0]), "<mo stretchy=\"false\">&#x000AF;</mo></mover>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 1297 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mover>", (yyvsp[0]), "<mo>&#x000AF;</mo></mover>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4821 "y.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 1302 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mover>", (yyvsp[0]), "<mo stretchy=\"false\">&RightVector;</mo></mover>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4830 "y.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 1306 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mover>", (yyvsp[0]), "<mo>&RightVector;</mo></mover>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4839 "y.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 1311 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mover>", (yyvsp[0]), "<mo>&dot;</mo></mover>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4848 "y.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 1316 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mover>", (yyvsp[0]), "<mo>&Dot;</mo></mover>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4857 "y.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 1321 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mover>", (yyvsp[0]), "<mo>&tdot;</mo></mover>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 1326 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mover>", (yyvsp[0]), "<mo>&DotDot;</mo></mover>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 1331 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mover>", (yyvsp[0]), "<mo stretchy=\"false\">&tilde;</mo></mover>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4884 "y.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 1335 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mover>", (yyvsp[0]), "<mo>&tilde;</mo></mover>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4893 "y.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 1340 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mover>", (yyvsp[0]), "<mo stretchy=\"false\">&#x2c7;</mo></mover>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4902 "y.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 1344 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mover>", (yyvsp[0]), "<mo>&#x2c7;</mo></mover>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4911 "y.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 1349 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mover>", (yyvsp[0]), "<mo stretchy=\"false\">&#x5E;</mo></mover>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4920 "y.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 1353 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mover>", (yyvsp[0]), "<mo>&#x5E;</mo></mover>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4929 "y.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 1358 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<msqrt>", (yyvsp[0]), "</msqrt>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 1363 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<mroot>", (yyvsp[0]), (yyvsp[-2]));
  (yyval) = itex2MML_copy2(s1, "</mroot>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[-2]));
  itex2MML_free_string((yyvsp[0]));
}
#line 4950 "y.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 1370 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<mroot>", (yyvsp[0]), (yyvsp[-1]));
  (yyval) = itex2MML_copy2(s1, "</mroot>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 4962 "y.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 1378 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<mpadded voffset='", (yyvsp[-3]), "' height='");
  char * s2 = itex2MML_copy3(s1, (yyvsp[-2]), "' depth='");
  char * s3 = itex2MML_copy3(s2, (yyvsp[-1]), "'>");
  (yyval) = itex2MML_copy3(s3, (yyvsp[0]), "</mpadded>");
  itex2MML_free_string(s1);
  itex2MML_free_string(s2);
  itex2MML_free_string(s3);
  itex2MML_free_string((yyvsp[-3]));
  itex2MML_free_string((yyvsp[-2]));
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 4980 "y.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 1391 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<mpadded voffset='-", (yyvsp[-3]), "' height='");
  char * s2 = itex2MML_copy3(s1, (yyvsp[-2]), "' depth='");
  char * s3 = itex2MML_copy3(s2, (yyvsp[-1]), "'>");
  (yyval) = itex2MML_copy3(s3, (yyvsp[0]), "</mpadded>");
  itex2MML_free_string(s1);
  itex2MML_free_string(s2);
  itex2MML_free_string(s3);
  itex2MML_free_string((yyvsp[-3]));
  itex2MML_free_string((yyvsp[-2]));
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 4998 "y.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 1404 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<mpadded voffset='", (yyvsp[-2]), "' height='");
  char * s2 = itex2MML_copy3(s1, (yyvsp[-1]), "' depth='depth'>");
  (yyval) = itex2MML_copy3(s2, (yyvsp[0]), "</mpadded>");
  itex2MML_free_string(s1);
  itex2MML_free_string(s2);
  itex2MML_free_string((yyvsp[-2]));
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5013 "y.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 1414 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<mpadded voffset='-", (yyvsp[-2]), "' height='");
  char * s2 = itex2MML_copy3(s1, (yyvsp[-1]), "' depth='+");
  char * s3 = itex2MML_copy3(s2, (yyvsp[-2]), "'>");
  (yyval) = itex2MML_copy3(s3, (yyvsp[0]), "</mpadded>");
  itex2MML_free_string(s1);
  itex2MML_free_string(s2);
  itex2MML_free_string(s3);
  itex2MML_free_string((yyvsp[-2]));
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5030 "y.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 1426 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<mpadded voffset='", (yyvsp[-1]), "' height='+");
  char * s2 = itex2MML_copy3(s1, (yyvsp[-1]), "' depth='depth'>");
  (yyval) = itex2MML_copy3(s2, (yyvsp[0]), "</mpadded>");
  itex2MML_free_string(s1);
  itex2MML_free_string(s2);
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5044 "y.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 1435 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<mpadded voffset='-", (yyvsp[-1]), "' height='0pt' depth='+");
  char * s2 = itex2MML_copy3(s1, (yyvsp[-1]), "'>");
  (yyval) = itex2MML_copy3(s2, (yyvsp[0]), "</mpadded>");
  itex2MML_free_string(s1);
  itex2MML_free_string(s2);
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5058 "y.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 1445 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<munder><mo>", (yyvsp[-4]), "</mo><mrow>");
  (yyval) = itex2MML_copy3(s1, (yyvsp[-2]), "</mrow></munder>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[-4]));
  itex2MML_free_string((yyvsp[-2]));
}
#line 5070 "y.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 1452 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<munder>", (yyvsp[0]), (yyvsp[-1]));
  (yyval) = itex2MML_copy2(s1, "</munder>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5082 "y.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 1460 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<mover><mo>", (yyvsp[-1]), "</mo>");
  (yyval) =  itex2MML_copy3(s1, (yyvsp[0]), "</mover>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5094 "y.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 1467 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<mover>", (yyvsp[0]), (yyvsp[-1]));
  (yyval) = itex2MML_copy2(s1, "</mover>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5106 "y.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 1475 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<munderover><mo>", (yyvsp[-4]), "</mo><mrow>");
  char * s2 = itex2MML_copy3(s1, (yyvsp[-2]), "</mrow>");
  (yyval) = itex2MML_copy3(s2, (yyvsp[0]), "</munderover>");
  itex2MML_free_string(s1);
  itex2MML_free_string(s2);
  itex2MML_free_string((yyvsp[-4]));
  itex2MML_free_string((yyvsp[-2]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5121 "y.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 1485 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<munderover>", (yyvsp[0]), (yyvsp[-2]));
  (yyval) = itex2MML_copy3(s1, (yyvsp[-1]), "</munderover>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[-2]));
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5134 "y.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 1494 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string("<mrow/>");
}
#line 5142 "y.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 1498 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mrow><mtable displaystyle=\"false\" rowspacing=\"0.5ex\">", (yyvsp[-2]), "</mtable></mrow>");
  itex2MML_free_string((yyvsp[-2]));
}
#line 5151 "y.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 1502 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mrow><mtable displaystyle=\"true\" rowspacing=\"1.0ex\">", (yyvsp[-2]), "</mtable></mrow>");
  itex2MML_free_string((yyvsp[-2]));
}
#line 5160 "y.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 1506 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mrow><mo>(</mo><mrow><mtable displaystyle=\"false\" rowspacing=\"0.5ex\">", (yyvsp[-2]), "</mtable></mrow><mo>)</mo></mrow>");
  itex2MML_free_string((yyvsp[-2]));
}
#line 5169 "y.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 1510 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mrow><mo>[</mo><mrow><mtable displaystyle=\"false\" rowspacing=\"0.5ex\">", (yyvsp[-2]), "</mtable></mrow><mo>]</mo></mrow>");
  itex2MML_free_string((yyvsp[-2]));
}
#line 5178 "y.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 1514 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mrow><mo>&VerticalBar;</mo><mrow><mtable displaystyle=\"false\" rowspacing=\"0.5ex\">", (yyvsp[-2]), "</mtable></mrow><mo>&VerticalBar;</mo></mrow>");
  itex2MML_free_string((yyvsp[-2]));
}
#line 5187 "y.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 1518 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mrow><mo>{</mo><mrow><mtable displaystyle=\"false\" rowspacing=\"0.5ex\">", (yyvsp[-2]), "</mtable></mrow><mo>}</mo></mrow>");
  itex2MML_free_string((yyvsp[-2]));
}
#line 5196 "y.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 1522 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mrow><mo>&DoubleVerticalBar;</mo><mrow><mtable displaystyle=\"false\" rowspacing=\"0.5ex\">", (yyvsp[-2]), "</mtable></mrow><mo>&DoubleVerticalBar;</mo></mrow>");
  itex2MML_free_string((yyvsp[-2]));
}
#line 5205 "y.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 1526 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mstyle scriptlevel=\"2\"><mrow><mtable displaystyle=\"false\" rowspacing=\"0.5ex\">", (yyvsp[-2]), "</mtable></mrow></mstyle>");
  itex2MML_free_string((yyvsp[-2]));
}
#line 5214 "y.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 1530 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mrow><mo>{</mo><mrow><mtable displaystyle=\"false\" columnalign=\"left left\">", (yyvsp[-2]), "</mtable></mrow></mrow>");
  itex2MML_free_string((yyvsp[-2]));
}
#line 5223 "y.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 1534 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mrow><mtable displaystyle=\"true\" columnalign=\"right left right left right left right left right left\" columnspacing=\"0em\">", (yyvsp[-2]), "</mtable></mrow>");
  itex2MML_free_string((yyvsp[-2]));
}
#line 5232 "y.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 1538 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<mtable displaystyle=\"false\" rowspacing=\"0.5ex\" align=\"", (yyvsp[-6]), "\" columnalign=\"");
  char * s2 = itex2MML_copy3(s1, (yyvsp[-4]), "\">");
  (yyval) = itex2MML_copy3(s2, (yyvsp[-2]), "</mtable>");
  itex2MML_free_string(s1);
  itex2MML_free_string(s2);
  itex2MML_free_string((yyvsp[-6]));
  itex2MML_free_string((yyvsp[-4]));
  itex2MML_free_string((yyvsp[-2]));
}
#line 5247 "y.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 1548 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<mtable displaystyle=\"false\" rowspacing=\"0.5ex\" columnalign=\"", (yyvsp[-4]), "\">");
  (yyval) = itex2MML_copy3(s1, (yyvsp[-2]), "</mtable>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[-4]));
  itex2MML_free_string((yyvsp[-2]));
}
#line 5259 "y.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 1555 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<semantics><annotation-xml encoding=\"SVG1.1\">", (yyvsp[-1]), "</annotation-xml></semantics>");
  itex2MML_free_string((yyvsp[-1]));
}
#line 5268 "y.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 1559 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string(" ");
}
#line 5276 "y.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 1563 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3((yyvsp[-1]), " ", (yyvsp[0]));
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5286 "y.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 1568 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string((yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5295 "y.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 1573 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mrow><mtable columnalign=\"center\" rowspacing=\"0.5ex\">", (yyvsp[-1]), "</mtable></mrow>");
  itex2MML_free_string((yyvsp[-1]));
}
#line 5304 "y.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 1578 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mrow><mtable>", (yyvsp[-1]), "</mtable></mrow>");
  itex2MML_free_string((yyvsp[-1]));
}
#line 5313 "y.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 1582 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<mrow><mtable ", (yyvsp[-3]), ">");
  (yyval) = itex2MML_copy3(s1, (yyvsp[-1]), "</mtable></mrow>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[-3]));
  itex2MML_free_string((yyvsp[-1]));
}
#line 5325 "y.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 1590 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string((yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5334 "y.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 1594 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3((yyvsp[-1]), " ", (yyvsp[0]));
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5344 "y.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 1600 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string((yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5353 "y.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 1604 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string((yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5362 "y.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 1608 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string((yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5371 "y.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 1612 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string((yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5380 "y.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 1616 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string((yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5389 "y.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 1620 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string((yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5398 "y.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 1624 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string((yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5407 "y.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 1628 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string((yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5416 "y.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 1632 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string((yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5425 "y.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 1636 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string((yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5434 "y.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 1641 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy2("columnalign=", (yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5443 "y.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 1646 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy2("columnalign=", (yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5452 "y.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 1651 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy2("rowalign=", (yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5461 "y.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 1656 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy2("align=", (yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5470 "y.tab.c" /* yacc.c:1646  */
    break;

  case 298:
#line 1661 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy2("equalrows=", (yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5479 "y.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 1666 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy2("equalcolumns=", (yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5488 "y.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 1671 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy2("rowlines=", (yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5497 "y.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 1676 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy2("columnlines=", (yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5506 "y.tab.c" /* yacc.c:1646  */
    break;

  case 302:
#line 1681 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy2("frame=", (yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5515 "y.tab.c" /* yacc.c:1646  */
    break;

  case 303:
#line 1686 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("rowspacing=", (yyvsp[0]), " columnspacing=");
  (yyval) = itex2MML_copy2(s1, (yyvsp[0]));
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[0]));
}
#line 5526 "y.tab.c" /* yacc.c:1646  */
    break;

  case 304:
#line 1693 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string((yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5535 "y.tab.c" /* yacc.c:1646  */
    break;

  case 305:
#line 1697 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3((yyvsp[-2]), " ", (yyvsp[0]));
  itex2MML_free_string((yyvsp[-2]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5545 "y.tab.c" /* yacc.c:1646  */
    break;

  case 306:
#line 1703 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mtr>", (yyvsp[0]), "</mtr>");
  itex2MML_free_string((yyvsp[0]));
}
#line 5554 "y.tab.c" /* yacc.c:1646  */
    break;

  case 307:
#line 1707 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string((yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5563 "y.tab.c" /* yacc.c:1646  */
    break;

  case 308:
#line 1712 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string((yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 309:
#line 1716 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3((yyvsp[-2]), " ", (yyvsp[0]));
  itex2MML_free_string((yyvsp[-2]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5582 "y.tab.c" /* yacc.c:1646  */
    break;

  case 310:
#line 1722 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<mtr ", (yyvsp[-2]), ">");
  (yyval) = itex2MML_copy3(s1, (yyvsp[0]), "</mtr>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[-2]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5594 "y.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 1730 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string((yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5603 "y.tab.c" /* yacc.c:1646  */
    break;

  case 312:
#line 1734 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3((yyvsp[-1]), " ", (yyvsp[0]));
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5613 "y.tab.c" /* yacc.c:1646  */
    break;

  case 313:
#line 1740 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string((yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 314:
#line 1744 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string((yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5631 "y.tab.c" /* yacc.c:1646  */
    break;

  case 315:
#line 1749 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string("<mtd/>");
}
#line 5639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 316:
#line 1752 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mtd>", (yyvsp[0]), "</mtd>");
  itex2MML_free_string((yyvsp[0]));
}
#line 5648 "y.tab.c" /* yacc.c:1646  */
    break;

  case 317:
#line 1756 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<mtd ", (yyvsp[-2]), ">");
  (yyval) = itex2MML_copy3(s1, (yyvsp[0]), "</mtd>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[-2]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 318:
#line 1764 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string((yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 319:
#line 1768 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3((yyvsp[-1]), " ", (yyvsp[0]));
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5679 "y.tab.c" /* yacc.c:1646  */
    break;

  case 320:
#line 1774 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string((yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 321:
#line 1778 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string((yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 322:
#line 1782 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string((yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 323:
#line 1786 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string((yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5715 "y.tab.c" /* yacc.c:1646  */
    break;

  case 324:
#line 1791 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy2("rowspan=", (yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5724 "y.tab.c" /* yacc.c:1646  */
    break;

  case 325:
#line 1796 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy2("columnspan=", (yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5733 "y.tab.c" /* yacc.c:1646  */
    break;


#line 5737 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (ret_str, YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (ret_str, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, ret_str);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, ret_str);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (ret_str, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, ret_str);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, ret_str);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 1801 "itex2MML.y" /* yacc.c:1906  */


char * itex2MML_parse (const char * buffer, size_t length)
{
  char * mathml = 0;

  int result;

  itex2MML_setup (buffer, length);
  itex2MML_restart ();

  result = itex2MML_yyparse (&mathml);

  if (result && mathml) /* shouldn't happen? */
    {
      itex2MML_free_string (mathml);
      mathml = 0;
    }
  return mathml;
}

int itex2MML_filter (const char * buffer, size_t length)
{
  itex2MML_setup (buffer, length);
  itex2MML_restart ();

  return itex2MML_yyparse (0);
}

#define ITEX_DELIMITER_DOLLAR 0
#define ITEX_DELIMITER_DOUBLE 1
#define ITEX_DELIMITER_SQUARE 2

static char * itex2MML_last_error = 0;

static void itex2MML_keep_error (const char * msg)
{
  if (itex2MML_last_error)
    {
      itex2MML_free_string (itex2MML_last_error);
      itex2MML_last_error = 0;
    }
  itex2MML_last_error = itex2MML_copy_escaped (msg);
}

int itex2MML_html_filter (const char * buffer, size_t length)
{
  return itex2MML_do_html_filter (buffer, length, 0);
}

int itex2MML_strict_html_filter (const char * buffer, size_t length)
{
  return itex2MML_do_html_filter (buffer, length, 1);
}

int itex2MML_do_html_filter (const char * buffer, size_t length, const int forbid_markup)
{
  int result = 0;

  int type = 0;
  int skip = 0;
  int match = 0;

  const char * ptr1 = buffer;
  const char * ptr2 = 0;

  const char * end = buffer + length;

  char * mathml = 0;

  void (*save_error_fn) (const char * msg) = itex2MML_error;

  itex2MML_error = itex2MML_keep_error;

 _until_math:
  ptr2 = ptr1;

  while (ptr2 < end)
    {
      if (*ptr2 == '$') break;
      if ((*ptr2 == '\\') && (ptr2 + 1 < end))
	{
	  if (*(ptr2+1) == '[') break;
	}
      ++ptr2;
    }
  if (itex2MML_write && ptr2 > ptr1)
    (*itex2MML_write) (ptr1, ptr2 - ptr1);

  if (ptr2 == end) goto _finish;

 _until_html:
  ptr1 = ptr2;

  if (ptr2 + 1 < end)
    {
      if ((*ptr2 == '\\') && (*(ptr2+1) == '['))
	{
	  type = ITEX_DELIMITER_SQUARE;
	  ptr2 += 2;
	}
      else if ((*ptr2 == '$') && (*(ptr2+1) == '$'))
	{
	  type = ITEX_DELIMITER_DOUBLE;
	  ptr2 += 2;
	}
      else
	{
	  type = ITEX_DELIMITER_DOLLAR;
	  ptr2 += 2;
	}
    }
  else goto _finish;

  skip = 0;
  match = 0;

  while (ptr2 < end)
    {
      switch (*ptr2)
	{
	case '<':
	case '>':
	  if (forbid_markup == 1) skip = 1;
	  break;

	case '\\':
	  if (ptr2 + 1 < end)
	    {
	      if (*(ptr2 + 1) == '[')
		{
		  skip = 1;
		}
	      else if (*(ptr2 + 1) == ']')
		{
		  if (type == ITEX_DELIMITER_SQUARE)
		    {
		      ptr2 += 2;
		      match = 1;
		    }
		  else
		    {
		      skip = 1;
		    }
		}
	    }
	  break;

	case '$':
	  if (type == ITEX_DELIMITER_SQUARE)
	    {
	      skip = 1;
	    }
	  else if (ptr2 + 1 < end)
	    {
	      if (*(ptr2 + 1) == '$')
		{
		  if (type == ITEX_DELIMITER_DOLLAR)
		    {
		      ptr2++;
		      match = 1;
		    }
		  else
		    {
		      ptr2 += 2;
		      match = 1;
		    }
		}
	      else
		{
		  if (type == ITEX_DELIMITER_DOLLAR)
		    {
		      ptr2++;
		      match = 1;
		    }
		  else
		    {
		      skip = 1;
		    }
		}
	    }
	  else
	    {
	      if (type == ITEX_DELIMITER_DOLLAR)
		{
		  ptr2++;
		  match = 1;
		}
	      else
		{
		  skip = 1;
		}
	    }
	  break;

	default:
	  break;
	}
      if (skip || match) break;

      ++ptr2;
    }
  if (skip)
    {
      if (type == ITEX_DELIMITER_DOLLAR)
	{
	  if (itex2MML_write)
	    (*itex2MML_write) (ptr1, 1);
	  ptr1++;
	}
      else
	{
	  if (itex2MML_write)
	    (*itex2MML_write) (ptr1, 2);
	  ptr1 += 2;
	}
      goto _until_math;
    }
  if (match)
    {
      mathml = itex2MML_parse (ptr1, ptr2 - ptr1);

      if (mathml)
	{
	  if (itex2MML_write_mathml)
	    (*itex2MML_write_mathml) (mathml);
	  itex2MML_free_string (mathml);
	  mathml = 0;
	}
      else
	{
	  ++result;
	  if (itex2MML_write)
	    {
	      if (type == ITEX_DELIMITER_DOLLAR)
		(*itex2MML_write) ("<math xmlns='http://www.w3.org/1998/Math/MathML' display='inline'><merror><mtext>", 0);
	      else
		(*itex2MML_write) ("<math xmlns='http://www.w3.org/1998/Math/MathML' display='block'><merror><mtext>", 0);

	      (*itex2MML_write) (itex2MML_last_error, 0);
	      (*itex2MML_write) ("</mtext></merror></math>", 0);
	    }
	}
      ptr1 = ptr2;

      goto _until_math;
    }
  if (itex2MML_write)
    (*itex2MML_write) (ptr1, ptr2 - ptr1);

 _finish:
  if (itex2MML_last_error)
    {
      itex2MML_free_string (itex2MML_last_error);
      itex2MML_last_error = 0;
    }
  itex2MML_error = save_error_fn;

  return result;
}
