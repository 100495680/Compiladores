/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "back4.y"
                          // SECCION 1 Declaraciones de C-Yacc

#include <stdio.h>
#include <ctype.h>            // declaraciones para tolower
#include <string.h>           // declaraciones para cadenas
#include <stdlib.h>           // declaraciones para exit ()

#define FF fflush(stdout);    // para forzar la impresion inmediata

int yylex () ;
int yyerror () ;
char *mi_malloc (int) ;
char *gen_code (char *) ;
char *int_to_string (int) ;
char *char_to_string (char) ;

char temp [2048] ;
char funcion_name[100];
int operaciones;
// Abstract Syntax Tree (AST) Node Structure

typedef struct ASTnode t_node ;

struct ASTnode {
    char *op ;
    int type ;		// leaf, unary or binary nodes
    t_node *left ;
    t_node *right ;
} ;


// Definitions for explicit attributes

typedef struct s_attr {
    int value ;    // - Numeric value of a NUMBER 
    char *code ;   // - to pass IDENTIFIER names, and other translations 
    t_node *node ; // - for possible future use of AST
} t_attr ;

#define YYSTYPE t_attr


#line 114 "back4.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    NUMBER = 258,                  /* NUMBER  */
    IDENTIF = 259,                 /* IDENTIF  */
    INTEGER = 260,                 /* INTEGER  */
    STRING = 261,                  /* STRING  */
    LOOP = 262,                    /* LOOP  */
    WHILE = 263,                   /* WHILE  */
    DO = 264,                      /* DO  */
    SETQ = 265,                    /* SETQ  */
    SETF = 266,                    /* SETF  */
    DEFUN = 267,                   /* DEFUN  */
    MAIN = 268,                    /* MAIN  */
    PRINT = 269,                   /* PRINT  */
    PRINC = 270,                   /* PRINC  */
    MOD = 271,                     /* MOD  */
    OR = 272,                      /* OR  */
    AND = 273,                     /* AND  */
    NOT = 274,                     /* NOT  */
    IF = 275,                      /* IF  */
    PROGN = 276,                   /* PROGN  */
    UNARY_SIGN = 283               /* UNARY_SIGN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);



/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_NUMBER = 3,                     /* NUMBER  */
  YYSYMBOL_IDENTIF = 4,                    /* IDENTIF  */
  YYSYMBOL_INTEGER = 5,                    /* INTEGER  */
  YYSYMBOL_STRING = 6,                     /* STRING  */
  YYSYMBOL_LOOP = 7,                       /* LOOP  */
  YYSYMBOL_WHILE = 8,                      /* WHILE  */
  YYSYMBOL_DO = 9,                         /* DO  */
  YYSYMBOL_SETQ = 10,                      /* SETQ  */
  YYSYMBOL_SETF = 11,                      /* SETF  */
  YYSYMBOL_DEFUN = 12,                     /* DEFUN  */
  YYSYMBOL_MAIN = 13,                      /* MAIN  */
  YYSYMBOL_PRINT = 14,                     /* PRINT  */
  YYSYMBOL_PRINC = 15,                     /* PRINC  */
  YYSYMBOL_MOD = 16,                       /* MOD  */
  YYSYMBOL_OR = 17,                        /* OR  */
  YYSYMBOL_AND = 18,                       /* AND  */
  YYSYMBOL_NOT = 19,                       /* NOT  */
  YYSYMBOL_IF = 20,                        /* IF  */
  YYSYMBOL_PROGN = 21,                     /* PROGN  */
  YYSYMBOL_22_ = 22,                       /* '='  */
  YYSYMBOL_23_ = 23,                       /* "||"  */
  YYSYMBOL_24_ = 24,                       /* "&&"  */
  YYSYMBOL_25_ = 25,                       /* "=="  */
  YYSYMBOL_26_ = 26,                       /* "!="  */
  YYSYMBOL_27_ = 27,                       /* '<'  */
  YYSYMBOL_28_ = 28,                       /* '>'  */
  YYSYMBOL_29_ = 29,                       /* "<="  */
  YYSYMBOL_30_ = 30,                       /* ">="  */
  YYSYMBOL_31_ = 31,                       /* '+'  */
  YYSYMBOL_32_ = 32,                       /* '-'  */
  YYSYMBOL_33_ = 33,                       /* '*'  */
  YYSYMBOL_34_ = 34,                       /* '/'  */
  YYSYMBOL_35_ = 35,                       /* '%'  */
  YYSYMBOL_UNARY_SIGN = 36,                /* UNARY_SIGN  */
  YYSYMBOL_37_ = 37,                       /* "!"  */
  YYSYMBOL_38_ = 38,                       /* '('  */
  YYSYMBOL_39_ = 39,                       /* ')'  */
  YYSYMBOL_YYACCEPT = 40,                  /* $accept  */
  YYSYMBOL_axioma = 41,                    /* axioma  */
  YYSYMBOL_var_global = 42,                /* var_global  */
  YYSYMBOL_declaracion = 43,               /* declaracion  */
  YYSYMBOL_def_funcs = 44,                 /* def_funcs  */
  YYSYMBOL_def_func = 45,                  /* def_func  */
  YYSYMBOL_cuerpo = 46,                    /* cuerpo  */
  YYSYMBOL_lista_sentencia = 47,           /* lista_sentencia  */
  YYSYMBOL_sentencia = 48,                 /* sentencia  */
  YYSYMBOL_logical_or = 49,                /* logical_or  */
  YYSYMBOL_logical_and = 50,               /* logical_and  */
  YYSYMBOL_igualdad = 51,                  /* igualdad  */
  YYSYMBOL_relacional = 52,                /* relacional  */
  YYSYMBOL_aditivo = 53,                   /* aditivo  */
  YYSYMBOL_multiplicativo = 54,            /* multiplicativo  */
  YYSYMBOL_unario = 55,                    /* unario  */
  YYSYMBOL_operando = 56                   /* operando  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   248

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  17
/* YYNRULES -- Number of rules.  */
#define YYNRULES  47
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  142

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   284


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    35,     2,     2,
      38,    39,    33,    31,     2,    32,     2,    34,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      27,    22,    28,     2,     2,     2,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    23,    24,    25,
      26,    29,    30,    36,    37
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    77,    77,    78,    82,    83,    86,    92,    94,    96,
      98,   103,   105,   106,   108,   110,   116,   118,   120,   122,
     124,   126,   131,   132,   135,   136,   139,   140,   142,   145,
     146,   148,   150,   152,   155,   156,   158,   161,   162,   164,
     166,   169,   170,   172,   173,   176,   178,   180
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "NUMBER", "IDENTIF",
  "INTEGER", "STRING", "LOOP", "WHILE", "DO", "SETQ", "SETF", "DEFUN",
  "MAIN", "PRINT", "PRINC", "MOD", "OR", "AND", "NOT", "IF", "PROGN",
  "'='", "\"||\"", "\"&&\"", "\"==\"", "\"!=\"", "'<'", "'>'", "\"<=\"",
  "\">=\"", "'+'", "'-'", "'*'", "'/'", "'%'", "UNARY_SIGN", "\"!\"",
  "'('", "')'", "$accept", "axioma", "var_global", "declaracion",
  "def_funcs", "def_func", "cuerpo", "lista_sentencia", "sentencia",
  "logical_or", "logical_and", "igualdad", "relacional", "aditivo",
  "multiplicativo", "unario", "operando", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-73)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-44)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -26,    43,     9,   -26,   -73,   -23,   -73,    15,    65,   -73,
     -73,   -23,    29,   -73,     2,    19,    41,   -73,   -73,    35,
      58,    42,   -73,   -73,   -73,   -73,   -73,   -73,   -73,    45,
      62,     2,   -73,     4,     2,    14,   182,   186,   150,   162,
     200,   200,     4,   170,    80,   -73,    83,    83,   144,   182,
      14,    84,   186,    18,    85,   104,   202,   202,   124,   200,
     202,   200,   164,     4,    86,     4,    90,   182,   186,   182,
     -73,   208,    91,    95,   -73,   100,    35,     4,   102,   105,
     106,   -73,   107,   200,   110,   200,   111,   120,   122,   -73,
     125,   202,   130,   126,   166,   165,     2,     2,    83,    33,
     -73,   228,   -73,   -73,    90,   -73,   -73,   -73,   -73,   140,
     -73,   148,   -73,   -73,   -73,   -73,   152,   -73,     2,     2,
     160,   171,    83,    56,   -73,   -73,   -73,   -73,   203,   172,
     -73,   -73,    59,   -73,    83,   -73,   -73,    71,   -73,    75,
     -73,   -73
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     4,     3,     8,     0,     0,     1,
       5,     2,     0,     7,     0,     0,     0,    46,    45,     0,
       0,     0,    22,    24,    26,    29,    34,    37,    41,     0,
       0,     0,    43,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     6,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    41,     0,    41,     0,     0,     0,
      47,     0,     0,    11,    12,     0,     0,     0,     0,     0,
       0,    42,     0,     0,     0,     0,     0,     0,     0,    44,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,     0,    13,     9,     0,    40,    23,    25,    27,     0,
      30,     0,    31,    35,    36,    38,     0,    39,     0,     0,
       0,     0,     0,     0,    15,    32,    33,    28,     0,     0,
      16,    17,     0,    14,     0,    18,    20,     0,    12,     0,
      21,    19
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -73,   -73,   -73,   206,   211,    88,   169,   -68,   -72,   -14,
       8,   -21,   -28,   -15,   -29,   158,   -17
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,     3,     4,     5,     6,    72,    73,    74,    44,
      22,    23,    24,    25,    26,    27,    28
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      21,   102,    32,    99,    49,    17,    18,    17,    18,     9,
      59,    61,     1,    67,    69,    12,    56,    17,    18,    14,
      50,    17,    18,    64,    66,    63,    65,   102,    82,    83,
     123,    80,    85,    19,    87,    19,    88,    36,    17,    18,
      20,     8,    48,    52,    84,    19,    86,    91,    69,    19,
      76,   102,    51,     7,   132,     8,    20,    29,    79,   104,
     138,    17,    18,   116,   137,   102,   139,   102,   109,    15,
     111,   101,   124,    31,    33,    34,    35,    36,    16,    30,
      37,    45,   121,   122,    46,    38,    39,    17,    18,    40,
      41,    42,    43,    13,   101,   133,    20,    71,   136,    13,
      33,    47,    35,    36,   128,   129,    37,    17,    18,   101,
     140,    38,    39,   101,   141,    40,    41,    42,    43,    70,
      33,    71,    20,    36,    81,   -43,    37,    17,    18,    89,
     100,    38,    39,   101,   118,    40,    41,    42,    43,   103,
      33,   105,    20,    36,   106,   107,   108,    17,    18,   110,
     112,    38,    39,    17,    18,    40,    41,    42,    77,   113,
      33,   114,    20,    36,   115,    17,    18,    17,    18,   117,
     119,   120,    57,    17,    18,    19,    76,    42,    77,   125,
      33,    19,    20,    36,    60,    17,    18,   126,    58,    17,
      18,   127,    68,    19,    54,    40,    41,    42,    77,   130,
      58,    19,    20,    17,    18,    17,    18,    78,    48,    10,
     131,   135,   134,    19,    11,    93,    75,    19,     0,    94,
      53,     0,    95,    96,    55,    90,     0,    92,    97,    98,
       0,    19,     0,    19,     0,    93,     0,     0,    62,    94,
      58,     0,    95,    96,     0,     0,    71,     0,    97
};

static const yytype_int16 yycheck[] =
{
      14,    73,    19,    71,    33,     3,     4,     3,     4,     0,
      38,    39,    38,    42,    43,    38,    37,     3,     4,     4,
      34,     3,     4,    40,    41,    40,    41,    99,    56,    57,
      98,    52,    60,    31,    63,    31,    65,    19,     3,     4,
      38,    12,    38,    35,    59,    31,    61,    68,    77,    31,
      32,   123,    38,    10,   122,    12,    38,    38,    50,    76,
     132,     3,     4,    91,   132,   137,   134,   139,    83,     4,
      85,    38,    39,    38,    16,    17,    18,    19,    13,    38,
      22,    39,    96,    97,    39,    27,    28,     3,     4,    31,
      32,    33,    34,     5,    38,    39,    38,    38,    39,    11,
      16,    39,    18,    19,   118,   119,    22,     3,     4,    38,
      39,    27,    28,    38,    39,    31,    32,    33,    34,    39,
      16,    38,    38,    19,    39,    39,    22,     3,     4,    39,
      39,    27,    28,    38,     8,    31,    32,    33,    34,    39,
      16,    39,    38,    19,    39,    39,    39,     3,     4,    39,
      39,    27,    28,     3,     4,    31,    32,    33,    34,    39,
      16,    39,    38,    19,    39,     3,     4,     3,     4,    39,
       4,     6,    22,     3,     4,    31,    32,    33,    34,    39,
      16,    31,    38,    19,    22,     3,     4,    39,    38,     3,
       4,    39,    22,    31,    36,    31,    32,    33,    34,    39,
      38,    31,    38,     3,     4,     3,     4,    49,    38,     3,
      39,    39,     9,    31,     3,     7,    47,    31,    -1,    11,
      38,    -1,    14,    15,    38,    67,    -1,    69,    20,    21,
      -1,    31,    -1,    31,    -1,     7,    -1,    -1,    38,    11,
      38,    -1,    14,    15,    -1,    -1,    38,    -1,    20
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    38,    41,    42,    43,    44,    45,    10,    12,     0,
      43,    44,    38,    45,     4,     4,    13,     3,     4,    31,
      38,    49,    50,    51,    52,    53,    54,    55,    56,    38,
      38,    38,    56,    16,    17,    18,    19,    22,    27,    28,
      31,    32,    33,    34,    49,    39,    39,    39,    38,    54,
      49,    38,    50,    38,    55,    38,    51,    22,    38,    52,
      22,    52,    38,    53,    56,    53,    56,    54,    22,    54,
      39,    38,    46,    47,    48,    46,    32,    34,    55,    50,
      51,    39,    52,    52,    53,    52,    53,    54,    54,    39,
      55,    51,    55,     7,    11,    14,    15,    20,    21,    47,
      39,    38,    48,    39,    56,    39,    39,    39,    39,    53,
      39,    53,    39,    39,    39,    39,    52,    39,     8,     4,
       6,    49,    49,    47,    39,    39,    39,    39,    49,    49,
      39,    39,    47,    39,     9,    39,    39,    47,    48,    47,
      39,    39
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    40,    41,    41,    42,    42,    43,    44,    44,    45,
      45,    46,    47,    47,    47,    47,    48,    48,    48,    48,
      48,    48,    49,    49,    50,    50,    51,    51,    51,    52,
      52,    52,    52,    52,    53,    53,    53,    54,    54,    54,
      54,    55,    55,    55,    55,    56,    56,    56
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     1,     2,     5,     2,     1,     7,
       7,     1,     1,     2,     4,     3,     4,     4,     5,     7,
       5,     6,     1,     5,     1,     5,     1,     5,     6,     1,
       5,     5,     6,     6,     1,     5,     5,     1,     5,     5,
       5,     1,     4,     2,     4,     1,     1,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 2: /* axioma: var_global def_funcs  */
#line 77 "back4.y"
                                                                                                                { printf ("\n%s\n%s\n", yyvsp[-1].code, yyvsp[0].code); }
#line 1313 "back4.tab.c"
    break;

  case 3: /* axioma: def_funcs  */
#line 78 "back4.y"
                                                                                                                { printf ("%s\n", yyvsp[0].code); }
#line 1319 "back4.tab.c"
    break;

  case 4: /* var_global: declaracion  */
#line 82 "back4.y"
                                                                                                                { yyval = yyvsp[0]; }
#line 1325 "back4.tab.c"
    break;

  case 5: /* var_global: var_global declaracion  */
#line 83 "back4.y"
                                                                                                                { sprintf (temp, "%s\n%s", yyvsp[-1].code, yyvsp[0].code);
                                                                                                                yyval.code = gen_code (temp); }
#line 1332 "back4.tab.c"
    break;

  case 6: /* declaracion: '(' SETQ IDENTIF logical_or ')'  */
#line 86 "back4.y"
                                                                                                                { sprintf (temp, "variable %s\n%s %s !", yyvsp[-2].code, yyvsp[-1].code, yyvsp[-2].code);
                                                                                                                yyval.code = gen_code (temp); }
#line 1339 "back4.tab.c"
    break;

  case 7: /* def_funcs: def_funcs def_func  */
#line 92 "back4.y"
                                                                                                                { sprintf (temp, "%s\n%s", yyvsp[-1].code, yyvsp[0].code);
                                                                                                                yyval.code = gen_code (temp); }
#line 1346 "back4.tab.c"
    break;

  case 8: /* def_funcs: def_func  */
#line 94 "back4.y"
                                                                                                                { yyval = yyvsp[0]; }
#line 1352 "back4.tab.c"
    break;

  case 9: /* def_func: '(' DEFUN MAIN '(' ')' cuerpo ')'  */
#line 96 "back4.y"
                                                                                                                { sprintf (temp, ": main %s ;", yyvsp[-1].code);
                                                                                                                yyval.code = gen_code (temp); }
#line 1359 "back4.tab.c"
    break;

  case 10: /* def_func: '(' DEFUN IDENTIF '(' ')' cuerpo ')'  */
#line 98 "back4.y"
                                                                                                                { sprintf (temp, ": %s %s ;", yyvsp[-4].code, yyvsp[-1].code);
                                                                                                                yyval.code = gen_code (temp); }
#line 1366 "back4.tab.c"
    break;

  case 11: /* cuerpo: lista_sentencia  */
#line 103 "back4.y"
                                                                                                                { yyval = yyvsp[0]; }
#line 1372 "back4.tab.c"
    break;

  case 12: /* lista_sentencia: sentencia  */
#line 105 "back4.y"
                                                                                                                { yyval = yyvsp[0]; }
#line 1378 "back4.tab.c"
    break;

  case 13: /* lista_sentencia: lista_sentencia sentencia  */
#line 106 "back4.y"
                                                                                                                { sprintf (temp, "%s\n%s", yyvsp[-1].code, yyvsp[0].code);
                                                                                                                yyval.code = gen_code (temp); }
#line 1385 "back4.tab.c"
    break;

  case 14: /* lista_sentencia: '(' PROGN lista_sentencia ')'  */
#line 108 "back4.y"
                                                                                                                { sprintf (temp, "%s", yyvsp[-1].code);
                                                                                                                yyval.code = gen_code (temp); }
#line 1392 "back4.tab.c"
    break;

  case 15: /* lista_sentencia: '(' lista_sentencia ')'  */
#line 110 "back4.y"
                                                                                                                { sprintf (temp, "%s", yyvsp[-1].code);
                                                                                                                yyval.code = gen_code (temp); }
#line 1399 "back4.tab.c"
    break;

  case 16: /* sentencia: '(' PRINT STRING ')'  */
#line 116 "back4.y"
                                                                                                                { sprintf (temp, ".\" %s\"", yyvsp[-1].code);  
                                                                                                                yyval.code = gen_code (temp); }
#line 1406 "back4.tab.c"
    break;

  case 17: /* sentencia: '(' PRINC logical_or ')'  */
#line 118 "back4.y"
                                                                                                                { sprintf (temp, "%s .", yyvsp[-1].code);  
                                                                                                                yyval.code = gen_code (temp); }
#line 1413 "back4.tab.c"
    break;

  case 18: /* sentencia: '(' SETF IDENTIF logical_or ')'  */
#line 120 "back4.y"
                                                                                                                { sprintf (temp, "%s %s !", yyvsp[-1].code, yyvsp[-2].code);  
                                                                                                                yyval.code = gen_code (temp); }
#line 1420 "back4.tab.c"
    break;

  case 19: /* sentencia: '(' LOOP WHILE logical_or DO lista_sentencia ')'  */
#line 122 "back4.y"
                                                                                                                { sprintf (temp, "begin\n\t%s\n\t%s\nrepeat", yyvsp[-3].code, yyvsp[-1].code);  
                                                                                                                yyval.code = gen_code (temp); }
#line 1427 "back4.tab.c"
    break;

  case 20: /* sentencia: '(' IF logical_or lista_sentencia ')'  */
#line 124 "back4.y"
                                                                                                                { sprintf (temp, "%s if \n\t%s \nthen", yyvsp[-2].code, yyvsp[-1].code);  
                                                                                                                yyval.code = gen_code (temp); }
#line 1434 "back4.tab.c"
    break;

  case 21: /* sentencia: '(' IF logical_or lista_sentencia lista_sentencia ')'  */
#line 126 "back4.y"
                                                                                                                { sprintf (temp, "%s if \n\t%s \nelse \n\t%s \nthen", yyvsp[-3].code, yyvsp[-2].code, yyvsp[-1].code);  
                                                                                                                yyval.code = gen_code (temp); }
#line 1441 "back4.tab.c"
    break;

  case 22: /* logical_or: logical_and  */
#line 131 "back4.y"
                                                                                                                { yyval = yyvsp[0]; }
#line 1447 "back4.tab.c"
    break;

  case 23: /* logical_or: '(' OR logical_or logical_and ')'  */
#line 132 "back4.y"
                                                                                                                { sprintf (temp, "%s %s or", yyvsp[-2].code, yyvsp[-1].code);
                                                                                                                yyval.code = gen_code (temp); }
#line 1454 "back4.tab.c"
    break;

  case 24: /* logical_and: igualdad  */
#line 135 "back4.y"
                                                                                                                { yyval = yyvsp[0]; }
#line 1460 "back4.tab.c"
    break;

  case 25: /* logical_and: '(' AND logical_and igualdad ')'  */
#line 136 "back4.y"
                                                                                                                { sprintf (temp, "%s %s and", yyvsp[-2].code, yyvsp[-1].code);
                                                                                                                yyval.code = gen_code (temp); }
#line 1467 "back4.tab.c"
    break;

  case 26: /* igualdad: relacional  */
#line 139 "back4.y"
                                                                                                                { yyval = yyvsp[0]; }
#line 1473 "back4.tab.c"
    break;

  case 27: /* igualdad: '(' '=' igualdad relacional ')'  */
#line 140 "back4.y"
                                                                                                                {sprintf (temp, "%s %s =", yyvsp[-2].code, yyvsp[-1].code);
                                                                                                                yyval.code = gen_code (temp); }
#line 1480 "back4.tab.c"
    break;

  case 28: /* igualdad: '(' '/' '=' igualdad relacional ')'  */
#line 142 "back4.y"
                                                                                                                { sprintf (temp, "%s %s = 0=", yyvsp[-2].code, yyvsp[-1].code);
                                                                                                                yyval.code = gen_code (temp); }
#line 1487 "back4.tab.c"
    break;

  case 29: /* relacional: aditivo  */
#line 145 "back4.y"
                                                                                                                { yyval = yyvsp[0]; }
#line 1493 "back4.tab.c"
    break;

  case 30: /* relacional: '(' '<' relacional aditivo ')'  */
#line 146 "back4.y"
                                                                                                                { sprintf (temp, "%s %s <", yyvsp[-2].code, yyvsp[-1].code);
                                                                                                                yyval.code = gen_code (temp); }
#line 1500 "back4.tab.c"
    break;

  case 31: /* relacional: '(' '>' relacional aditivo ')'  */
#line 148 "back4.y"
                                                                                                                { sprintf (temp, "%s %s >", yyvsp[-2].code, yyvsp[-1].code);
                                                                                                                yyval.code = gen_code (temp); }
#line 1507 "back4.tab.c"
    break;

  case 32: /* relacional: '(' '<' '=' relacional aditivo ')'  */
#line 150 "back4.y"
                                                                                                                { sprintf (temp, "%s %s <=", yyvsp[-2].code, yyvsp[-1].code);
                                                                                                                yyval.code = gen_code (temp); }
#line 1514 "back4.tab.c"
    break;

  case 33: /* relacional: '(' '>' '=' relacional aditivo ')'  */
#line 152 "back4.y"
                                                                                                                { sprintf (temp, "%s %s >=", yyvsp[-2].code, yyvsp[-1].code);
                                                                                                                yyval.code = gen_code (temp); }
#line 1521 "back4.tab.c"
    break;

  case 34: /* aditivo: multiplicativo  */
#line 155 "back4.y"
                                                                                                                { yyval = yyvsp[0]; }
#line 1527 "back4.tab.c"
    break;

  case 35: /* aditivo: '(' '+' aditivo multiplicativo ')'  */
#line 156 "back4.y"
                                                                                                                { sprintf (temp, "%s %s +", yyvsp[-2].code, yyvsp[-1].code);
                                                                                                                yyval.code = gen_code (temp); }
#line 1534 "back4.tab.c"
    break;

  case 36: /* aditivo: '(' '-' aditivo multiplicativo ')'  */
#line 158 "back4.y"
                                                                                                                { sprintf (temp, "%s %s -", yyvsp[-2].code, yyvsp[-1].code);
                                                                                                                yyval.code = gen_code (temp); }
#line 1541 "back4.tab.c"
    break;

  case 37: /* multiplicativo: unario  */
#line 161 "back4.y"
                                                                                                                { yyval = yyvsp[0]; }
#line 1547 "back4.tab.c"
    break;

  case 38: /* multiplicativo: '(' '*' multiplicativo unario ')'  */
#line 162 "back4.y"
                                                                                                                { sprintf (temp, "%s %s *", yyvsp[-2].code, yyvsp[-1].code);
                                                                                                                yyval.code = gen_code (temp); }
#line 1554 "back4.tab.c"
    break;

  case 39: /* multiplicativo: '(' '/' multiplicativo unario ')'  */
#line 164 "back4.y"
                                                                                                                { sprintf (temp, "%s %s /", yyvsp[-2].code, yyvsp[-1].code);
                                                                                                                yyval.code = gen_code (temp); }
#line 1561 "back4.tab.c"
    break;

  case 40: /* multiplicativo: '(' MOD multiplicativo unario ')'  */
#line 166 "back4.y"
                                                                                                                { sprintf (temp, "%s %s mod", yyvsp[-2].code, yyvsp[-1].code);
                                                                                                                yyval.code = gen_code (temp); }
#line 1568 "back4.tab.c"
    break;

  case 41: /* unario: operando  */
#line 169 "back4.y"
                                                                                                                { yyval = yyvsp[0]; }
#line 1574 "back4.tab.c"
    break;

  case 42: /* unario: '(' NOT unario ')'  */
#line 170 "back4.y"
                                                                                                                { sprintf (temp, "%s 0=", yyvsp[-1].code);
                                                                                                                yyval.code = gen_code (temp); }
#line 1581 "back4.tab.c"
    break;

  case 43: /* unario: '+' operando  */
#line 172 "back4.y"
                                                                                                                { yyval = yyvsp[-1]; }
#line 1587 "back4.tab.c"
    break;

  case 44: /* unario: '(' '-' operando ')'  */
#line 173 "back4.y"
                                                                                                                {sprintf (temp, "%s negate", yyvsp[-1].code);
                                                                                                                yyval.code = gen_code (temp); }
#line 1594 "back4.tab.c"
    break;

  case 45: /* operando: IDENTIF  */
#line 176 "back4.y"
                                                                                                                { sprintf (temp, "%s", yyvsp[0].code);
                                                                                                                yyval.code = gen_code (temp); }
#line 1601 "back4.tab.c"
    break;

  case 46: /* operando: NUMBER  */
#line 178 "back4.y"
                                                                                                                { sprintf (temp, "%d", yyvsp[0].value);
                                                                                                                yyval.code = gen_code (temp); }
#line 1608 "back4.tab.c"
    break;

  case 47: /* operando: '(' logical_or ')'  */
#line 180 "back4.y"
                                                                                                                { yyval = yyvsp[-1]; }
#line 1614 "back4.tab.c"
    break;


#line 1618 "back4.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
                      yytoken, &yylval);
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 184 "back4.y"
                            // SECCION 4    Codigo en C

int n_line = 1 ;

int yyerror (mensaje)
char *mensaje ;
{
    fprintf (stderr, "%s en la linea %d\n", mensaje, n_line) ;
    printf ( "\n") ;	// bye
}

char *int_to_string (int n)
{
    sprintf (temp, "%d", n) ;
    return gen_code (temp) ;
}

char *char_to_string (char c)
{
    sprintf (temp, "%c", c) ;
    return gen_code (temp) ;
}

char *my_malloc (int nbytes)       // reserva n bytes de memoria dinamica
{
    char *p ;
    static long int nb = 0;        // sirven para contabilizar la memoria
    static int nv = 0 ;            // solicitada en total

    p = malloc (nbytes) ;
    if (p == NULL) {
        fprintf (stderr, "No queda memoria para %d bytes mas\n", nbytes) ;
        fprintf (stderr, "Reservados %ld bytes en %d llamadas\n", nb, nv) ;
        exit (0) ;
    }
    nb += (long) nbytes ;
    nv++ ;

    return p ;
}


/***************************************************************************/
/********************** Seccion de Palabras Reservadas *********************/
/***************************************************************************/

typedef struct s_keyword { // para las palabras reservadas de C
    char *name ;
    int token ;
} t_keyword ;

t_keyword keywords [] = { // define las palabras reservadas y los
    "main",         MAIN,               // y los token asociados
    "int",          INTEGER,
    "setq",         SETQ,               // a = 1;   -> setq a 1     -> variable a\n a 1 !
    "setf",         SETF,
    "defun",        DEFUN,              // main();  -> (defun main) -> : main <code> ;
    "print",        PRINT,              // (print "Hola Mundo") -> ." <string>"
    "princ",        PRINC,              // (princ 22) -> <string> .
    "loop",         LOOP,
    "while",        WHILE,
    "do",           DO,
    "if",           IF,
    "progn",        PROGN,
    "mod",          MOD,
    "or",           OR,
    "and",          AND,
    "not",          NOT,
    NULL,           0                   // para marcar el fin de la tabla

} ;

t_keyword *search_keyword (char *symbol_name)
{                                  // Busca n_s en la tabla de pal. res.
                                   // y devuelve puntero a registro (simbolo)
    int i ;
    t_keyword *sim ;

    i = 0 ;
    sim = keywords ;
    while (sim [i].name != NULL) {
	    if (strcmp (sim [i].name, symbol_name) == 0) {
		                             // strcmp(a, b) devuelve == 0 si a==b
            return &(sim [i]) ;
        }
        i++ ;
    }

    return NULL ;
}

 
/***************************************************************************/
/******************* Seccion del Analizador Lexicografico ******************/
/***************************************************************************/

char *gen_code (char *name)     // copia el argumento a un
{                                      // string en memoria dinamica
    char *p ;
    int l ;
	
    l = strlen (name)+1 ;
    p = (char *) my_malloc (l) ;
    strcpy (p, name) ;
	
    return p ;
}


int yylex ()
{
// NO MODIFICAR ESTA FUNCION SIN PERMISO
    int i ;
    unsigned char c ;
    unsigned char cc ;
    char ops_expandibles [] = "!<=|>%&/+-*" ;
    char temp_str [256] ;
    t_keyword *symbol ;

    do {
        c = getchar () ;

        if (c == '#') {	// Ignora las lineas que empiezan por #  (#define, #include)
            do {		//	OJO que puede funcionar mal si una linea contiene #
                c = getchar () ;
            } while (c != '\n') ;
        }

        if (c == '/') {	// Si la linea contiene un / puede ser inicio de comentario
            cc = getchar () ;
            if (cc != '/') {   // Si el siguiente char es /  es un comentario, pero...
                ungetc (cc, stdin) ;
            } else {
                c = getchar () ;	// ...
                if (c == '@') {	// Si es la secuencia //@  ==> transcribimos la linea
                    do {		// Se trata de codigo inline (Codigo embebido en C)
                        c = getchar () ;
                        putchar (c) ;
                    } while (c != '\n') ;
                } else {		// ==> comentario, ignorar la linea
                    while (c != '\n') {
                        c = getchar () ;
                    }
                }
            }
        } else if (c == '\\') c = getchar () ;
		
        if (c == '\n')
            n_line++ ;

    } while (c == ' ' || c == '\n' || c == 10 || c == 13 || c == '\t') ;

    if (c == '\"') {
        i = 0 ;
        do {
            c = getchar () ;
            temp_str [i++] = c ;
        } while (c != '\"' && i < 255) ;
        if (i == 256) {
            printf ("AVISO: string con mas de 255 caracteres en linea %d\n", n_line) ;
        }		 	// habria que leer hasta el siguiente " , pero, y si falta?
        temp_str [--i] = '\0' ;
        yylval.code = gen_code (temp_str) ;
        return (STRING) ;
    }

    if (c == '.' || (c >= '0' && c <= '9')) {
        ungetc (c, stdin) ;
        scanf ("%d", &yylval.value) ;
//         printf ("\nDEV: NUMBER %d\n", yylval.value) ;        // PARA DEPURAR
        return NUMBER ;
    }

    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
        i = 0 ;
        while (((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') ||
            (c >= '0' && c <= '9') || c == '_') && i < 255) {
            temp_str [i++] = tolower (c) ;
            c = getchar () ;
        }
        temp_str [i] = '\0' ;
        ungetc (c, stdin) ;

        yylval.code = gen_code (temp_str) ;
        symbol = search_keyword (yylval.code) ;
        if (symbol == NULL) {    // no es palabra reservada -> identificador antes vrariabre
//               printf ("\nDEV: IDENTIF %s\n", yylval.code) ;    // PARA DEPURAR
            return (IDENTIF) ;
        } else {
//               printf ("\nDEV: OTRO %s\n", yylval.code) ;       // PARA DEPURAR
            return (symbol->token) ;
        }
    }

    if (strchr (ops_expandibles, c) != NULL) { // busca c en ops_expandibles
        cc = getchar () ;
        sprintf (temp_str, "%c%c", (char) c, (char) cc) ;
        symbol = search_keyword (temp_str) ;
        if (symbol == NULL) {
            ungetc (cc, stdin) ;
            yylval.code = NULL ;
            return (c) ;
        } else {
            yylval.code = gen_code (temp_str) ; // aunque no se use
            return (symbol->token) ;
        }
    }

//    printf ("\nDEV: LITERAL %d #%c#\n", (int) c, c) ;      // PARA DEPURAR
    if (c == EOF || c == 255 || c == 26) {
//         printf ("tEOF ") ;                                // PARA DEPURAR
        return (0) ;
    }

    return c ;
}


int main ()
{
    yyparse () ;
}
