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
#line 3 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.y"
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


#line 114 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.tab.c"

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
    NE = 277,                      /* NE  */
    LE = 278,                      /* LE  */
    GE = 279,                      /* GE  */
    UNARY_SIGN = 280               /* UNARY_SIGN  */
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
  YYSYMBOL_NE = 22,                        /* NE  */
  YYSYMBOL_LE = 23,                        /* LE  */
  YYSYMBOL_GE = 24,                        /* GE  */
  YYSYMBOL_25_ = 25,                       /* '='  */
  YYSYMBOL_26_ = 26,                       /* '<'  */
  YYSYMBOL_27_ = 27,                       /* '>'  */
  YYSYMBOL_28_ = 28,                       /* '+'  */
  YYSYMBOL_29_ = 29,                       /* '-'  */
  YYSYMBOL_30_ = 30,                       /* '*'  */
  YYSYMBOL_31_ = 31,                       /* '/'  */
  YYSYMBOL_UNARY_SIGN = 32,                /* UNARY_SIGN  */
  YYSYMBOL_33_ = 33,                       /* '('  */
  YYSYMBOL_34_ = 34,                       /* ')'  */
  YYSYMBOL_YYACCEPT = 35,                  /* $accept  */
  YYSYMBOL_axioma = 36,                    /* axioma  */
  YYSYMBOL_var_global = 37,                /* var_global  */
  YYSYMBOL_declaracion = 38,               /* declaracion  */
  YYSYMBOL_def_funcs = 39,                 /* def_funcs  */
  YYSYMBOL_llamada_main = 40,              /* llamada_main  */
  YYSYMBOL_def_func = 41,                  /* def_func  */
  YYSYMBOL_cuerpo = 42,                    /* cuerpo  */
  YYSYMBOL_lista_sentencia = 43,           /* lista_sentencia  */
  YYSYMBOL_sentencia = 44,                 /* sentencia  */
  YYSYMBOL_logical_or = 45,                /* logical_or  */
  YYSYMBOL_logical_and = 46,               /* logical_and  */
  YYSYMBOL_igualdad = 47,                  /* igualdad  */
  YYSYMBOL_relacional = 48,                /* relacional  */
  YYSYMBOL_operacion = 49,                 /* operacion  */
  YYSYMBOL_unario = 50,                    /* unario  */
  YYSYMBOL_operando = 51                   /* operando  */
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
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   222

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  17
/* YYNRULES -- Number of rules.  */
#define YYNRULES  50
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  145

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   280


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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      33,    34,    30,    28,     2,    29,     2,    31,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      26,    25,    27,     2,     2,     2,     2,     2,     2,     2,
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
      32
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    82,    82,    83,    87,    88,    92,    99,   102,   103,
     106,   108,   111,   114,   120,   122,   123,   130,   133,   136,
     139,   142,   145,   148,   151,   154,   158,   159,   163,   164,
     168,   169,   172,   176,   177,   180,   183,   186,   190,   191,
     194,   197,   200,   203,   207,   208,   211,   212,   216,   218,
     220
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
  "MAIN", "PRINT", "PRINC", "MOD", "OR", "AND", "NOT", "IF", "PROGN", "NE",
  "LE", "GE", "'='", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'",
  "UNARY_SIGN", "'('", "')'", "$accept", "axioma", "var_global",
  "declaracion", "def_funcs", "llamada_main", "def_func", "cuerpo",
  "lista_sentencia", "sentencia", "logical_or", "logical_and", "igualdad",
  "relacional", "operacion", "unario", "operando", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-99)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-47)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -12,    77,    23,   -12,   -99,    13,   -99,   -99,    45,     6,
      21,   -99,   -99,    13,    47,   -99,   -99,    24,    49,    55,
     -99,   -99,   -99,     4,    50,    66,   -99,   -99,   -99,   -99,
     -99,   -99,    67,    74,    24,   -99,    95,    24,    99,   126,
     132,   163,   163,   132,   163,   163,    95,    95,    95,    95,
      78,   -99,    98,    98,    14,    95,    99,    91,   132,   159,
     100,   122,   163,   153,    95,    95,   163,    95,    95,    95,
     103,    95,   105,    95,    95,   -99,   192,   106,    98,   -99,
     108,   109,   124,   127,     4,   -99,   130,   134,   136,   137,
     139,   140,   141,   151,   -99,   155,   160,   125,   107,   186,
     187,    58,    24,    98,   -99,   -99,   -99,   -99,   -99,   -99,
     105,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,
     -99,    24,    24,    24,   161,   170,   171,    98,    37,   199,
     175,   176,   -99,   -99,   -99,    59,   -99,    98,   -99,   -99,
     -99,   177,    63,   -99,   -99
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     4,     3,    10,     8,     0,     0,
       0,     1,     5,     2,     0,     9,     7,     0,     0,     0,
      11,    49,    48,     0,     0,     0,    26,    28,    30,    33,
      38,    44,     0,     0,     0,    46,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     6,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      44,     0,    44,     0,     0,    50,     0,     0,    14,    15,
       0,     0,     0,     0,     0,    45,     0,     0,     0,     0,
       0,     0,     0,     0,    47,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    13,    16,    12,    43,    27,    29,
       0,    32,    36,    37,    31,    34,    35,    39,    40,    41,
      42,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    17,    19,    18,     0,    25,     0,    21,    20,
      23,     0,     0,    24,    22
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -99,   -99,   -99,   211,   212,    -1,    43,   164,   -98,   -77,
     -17,   -27,   -34,   156,   -33,   180,   -21
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,     3,     4,     5,     6,     7,    77,    78,    79,
      50,    26,    27,    28,    29,    30,    31
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      25,   105,    35,    55,    15,   128,    62,    21,    22,    66,
      18,    58,    15,    69,    71,    73,    74,    21,    22,    19,
      56,     1,    81,    11,    83,    70,    72,    21,    22,    82,
      36,    87,    88,    39,    90,    91,    92,    34,    93,   142,
      95,    96,    46,    47,    48,    49,    14,    24,    16,    17,
     135,   105,    23,    21,    22,    20,    16,    24,   141,     9,
      10,    21,    22,   110,   125,   105,    36,    37,    38,    39,
      76,   136,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    32,    24,   126,   127,    23,     8,    33,     9,
      10,    24,    76,   140,    21,    22,    76,   144,    21,    22,
      51,    52,    21,    22,   129,   130,   131,    36,    53,    38,
      39,   122,    75,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    23,    24,    21,    22,    23,    54,    21,
      22,    76,    57,   121,    85,    21,    22,   -46,    36,    94,
     104,    39,   106,   107,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    23,    24,    21,    22,   108,    59,
      23,   109,    21,    22,   111,    61,    21,    22,   112,    36,
     113,   114,    39,   115,   116,   117,    41,    42,    39,    44,
      45,    46,    47,    48,    49,   118,    24,    23,    84,   119,
     123,    23,    24,   124,   120,   132,    63,    64,    65,    97,
      67,    68,    98,    99,   133,   134,   100,   101,   137,   138,
     139,   143,   102,   103,    12,    13,     0,    80,    86,    60,
       0,     0,    89
};

static const yytype_int16 yycheck[] =
{
      17,    78,    23,    36,     5,   103,    40,     3,     4,    43,
       4,    38,    13,    46,    47,    48,    49,     3,     4,    13,
      37,    33,    55,     0,    58,    46,    47,     3,     4,    56,
      16,    64,    65,    19,    67,    68,    69,    33,    71,   137,
      73,    74,    28,    29,    30,    31,    33,    33,     5,     4,
     127,   128,    28,     3,     4,    34,    13,    33,   135,    12,
      13,     3,     4,    84,     6,   142,    16,    17,    18,    19,
      33,    34,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    33,    33,   101,   102,    28,    10,    33,    12,
      13,    33,    33,    34,     3,     4,    33,    34,     3,     4,
      34,    34,     3,     4,   121,   122,   123,    16,    34,    18,
      19,     4,    34,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    28,    33,     3,     4,    28,    33,     3,
       4,    33,    33,     8,    34,     3,     4,    34,    16,    34,
      34,    19,    34,    34,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    28,    33,     3,     4,    34,    33,
      28,    34,     3,     4,    34,    33,     3,     4,    34,    16,
      34,    34,    19,    34,    34,    34,    23,    24,    19,    26,
      27,    28,    29,    30,    31,    34,    33,    28,    29,    34,
       4,    28,    33,     6,    34,    34,    33,    41,    42,     7,
      44,    45,    10,    11,    34,    34,    14,    15,     9,    34,
      34,    34,    20,    21,     3,     3,    -1,    53,    62,    39,
      -1,    -1,    66
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    33,    36,    37,    38,    39,    40,    41,    10,    12,
      13,     0,    38,    39,    33,    40,    41,     4,     4,    13,
      34,     3,     4,    28,    33,    45,    46,    47,    48,    49,
      50,    51,    33,    33,    33,    51,    16,    17,    18,    19,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      45,    34,    34,    34,    33,    49,    45,    33,    46,    33,
      50,    33,    47,    33,    48,    48,    47,    48,    48,    49,
      51,    49,    51,    49,    49,    34,    33,    42,    43,    44,
      42,    49,    46,    47,    29,    34,    48,    49,    49,    48,
      49,    49,    49,    49,    34,    49,    49,     7,    10,    11,
      14,    15,    20,    21,    34,    44,    34,    34,    34,    34,
      51,    34,    34,    34,    34,    34,    34,    34,    34,    34,
      34,     8,     4,     4,     6,     6,    45,    45,    43,    45,
      45,    45,    34,    34,    34,    44,    34,     9,    34,    34,
      34,    44,    43,    34,    34
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    35,    36,    36,    37,    37,    38,    39,    39,    39,
      39,    40,    41,    41,    42,    43,    43,    44,    44,    44,
      44,    44,    44,    44,    44,    44,    45,    45,    46,    46,
      47,    47,    47,    48,    48,    48,    48,    48,    49,    49,
      49,    49,    49,    49,    50,    50,    50,    50,    51,    51,
      51
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     1,     2,     5,     2,     1,     2,
       1,     3,     7,     7,     1,     1,     2,     4,     4,     4,
       5,     5,     7,     5,     6,     4,     1,     5,     1,     5,
       1,     5,     5,     1,     5,     5,     5,     5,     1,     5,
       5,     5,     5,     5,     1,     4,     2,     4,     1,     1,
       3
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
#line 82 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.y"
                                                                                        { printf ("\n%s\n%s\n", yyvsp[-1].code, yyvsp[0].code); }
#line 1309 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.tab.c"
    break;

  case 3: /* axioma: def_funcs  */
#line 83 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.y"
                                                                                        { printf ("%s\n", yyvsp[0].code); }
#line 1315 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.tab.c"
    break;

  case 4: /* var_global: declaracion  */
#line 87 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.y"
                                                                                        { yyval = yyvsp[0]; }
#line 1321 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.tab.c"
    break;

  case 5: /* var_global: var_global declaracion  */
#line 89 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.y"
                        { sprintf (temp, "%s\n%s", yyvsp[-1].code, yyvsp[0].code);
                        yyval.code = gen_code (temp); }
#line 1328 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.tab.c"
    break;

  case 6: /* declaracion: '(' SETQ IDENTIF logical_or ')'  */
#line 93 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.y"
                        { sprintf (temp, "variable %s\n%s %s !", yyvsp[-2].code, yyvsp[-1].code, yyvsp[-2].code);
                        yyval.code = gen_code (temp); }
#line 1335 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.tab.c"
    break;

  case 7: /* def_funcs: def_funcs def_func  */
#line 100 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.y"
                        { sprintf (temp, "%s\n%s", yyvsp[-1].code, yyvsp[0].code);
                        yyval.code = gen_code (temp); }
#line 1342 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.tab.c"
    break;

  case 8: /* def_funcs: def_func  */
#line 102 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.y"
                                                                                        { yyval = yyvsp[0]; }
#line 1348 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.tab.c"
    break;

  case 9: /* def_funcs: def_funcs llamada_main  */
#line 104 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.y"
                        { sprintf(temp, "%s\n%s", yyvsp[-1].code, yyvsp[0].code);
                        yyval.code = gen_code(temp); }
#line 1355 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.tab.c"
    break;

  case 10: /* def_funcs: llamada_main  */
#line 106 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.y"
                                                                                        { yyval = yyvsp[0]; }
#line 1361 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.tab.c"
    break;

  case 11: /* llamada_main: '(' MAIN ')'  */
#line 109 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.y"
                        { sprintf(temp, "main");
                        yyval.code = gen_code(temp); }
#line 1368 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.tab.c"
    break;

  case 12: /* def_func: '(' DEFUN MAIN '(' ')' cuerpo ')'  */
#line 112 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.y"
                        { sprintf (temp, ": main %s ;", yyvsp[-1].code);
                        yyval.code = gen_code (temp); }
#line 1375 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.tab.c"
    break;

  case 13: /* def_func: '(' DEFUN IDENTIF '(' ')' cuerpo ')'  */
#line 115 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.y"
                        { sprintf (temp, ": %s %s ;", yyvsp[-4].code, yyvsp[-1].code);
                        yyval.code = gen_code (temp); }
#line 1382 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.tab.c"
    break;

  case 14: /* cuerpo: lista_sentencia  */
#line 120 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.y"
                                                                                        { yyval = yyvsp[0]; }
#line 1388 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.tab.c"
    break;

  case 15: /* lista_sentencia: sentencia  */
#line 122 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.y"
                                                                                        { yyval = yyvsp[0]; }
#line 1394 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.tab.c"
    break;

  case 16: /* lista_sentencia: lista_sentencia sentencia  */
#line 124 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.y"
                        { sprintf (temp, "%s\n%s", yyvsp[-1].code, yyvsp[0].code);
                        yyval.code = gen_code (temp); }
#line 1401 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.tab.c"
    break;

  case 17: /* sentencia: '(' PRINT STRING ')'  */
#line 131 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.y"
                        { sprintf (temp, ".\" %s\"", yyvsp[-1].code);  
                        yyval.code = gen_code (temp); }
#line 1408 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.tab.c"
    break;

  case 18: /* sentencia: '(' PRINC logical_or ')'  */
#line 134 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.y"
                        { sprintf (temp, "%s .", yyvsp[-1].code);  
                        yyval.code = gen_code (temp); }
#line 1415 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.tab.c"
    break;

  case 19: /* sentencia: '(' PRINC STRING ')'  */
#line 137 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.y"
                        { sprintf (temp, "%s .", yyvsp[-1].code);  
                        yyval.code = gen_code (temp); }
#line 1422 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.tab.c"
    break;

  case 20: /* sentencia: '(' SETF IDENTIF logical_or ')'  */
#line 140 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.y"
                        { sprintf (temp, "%s %s !", yyvsp[-1].code, yyvsp[-2].code);  
                        yyval.code = gen_code (temp); }
#line 1429 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.tab.c"
    break;

  case 21: /* sentencia: '(' SETQ IDENTIF logical_or ')'  */
#line 143 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.y"
                        { sprintf (temp, "%s %s !", yyvsp[-1].code, yyvsp[-2].code);  
                        yyval.code = gen_code (temp); }
#line 1436 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.tab.c"
    break;

  case 22: /* sentencia: '(' LOOP WHILE logical_or DO lista_sentencia ')'  */
#line 146 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.y"
                        { sprintf (temp, "begin\n\t%s\nwhile\n\t%s\nrepeat", yyvsp[-3].code, yyvsp[-1].code);  
                        yyval.code = gen_code (temp); }
#line 1443 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.tab.c"
    break;

  case 23: /* sentencia: '(' IF logical_or sentencia ')'  */
#line 149 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.y"
                        { sprintf (temp, "%s if \n\t%s \nthen", yyvsp[-2].code, yyvsp[-1].code);  
                        yyval.code = gen_code (temp); }
#line 1450 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.tab.c"
    break;

  case 24: /* sentencia: '(' IF logical_or sentencia sentencia ')'  */
#line 152 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.y"
                        { sprintf (temp, "%s if \n\t%s \nelse \n\t%s \nthen", yyvsp[-3].code, yyvsp[-2].code, yyvsp[-1].code);  
                        yyval.code = gen_code (temp); }
#line 1457 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.tab.c"
    break;

  case 25: /* sentencia: '(' PROGN lista_sentencia ')'  */
#line 154 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.y"
                                                                                        { yyval = yyvsp[-1]; }
#line 1463 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.tab.c"
    break;

  case 26: /* logical_or: logical_and  */
#line 158 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.y"
                                                                                        { yyval = yyvsp[0]; }
#line 1469 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.tab.c"
    break;

  case 27: /* logical_or: '(' OR logical_or logical_and ')'  */
#line 160 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.y"
                        { sprintf (temp, "%s %s or", yyvsp[-2].code, yyvsp[-1].code);
                        yyval.code = gen_code (temp); }
#line 1476 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.tab.c"
    break;

  case 28: /* logical_and: igualdad  */
#line 163 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.y"
                                                                                        { yyval = yyvsp[0]; }
#line 1482 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.tab.c"
    break;

  case 29: /* logical_and: '(' AND logical_and igualdad ')'  */
#line 165 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.y"
                        { sprintf (temp, "%s %s and", yyvsp[-2].code, yyvsp[-1].code);
                        yyval.code = gen_code (temp); }
#line 1489 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.tab.c"
    break;

  case 30: /* igualdad: relacional  */
#line 168 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.y"
                                                                                        { yyval = yyvsp[0]; }
#line 1495 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.tab.c"
    break;

  case 31: /* igualdad: '(' '=' igualdad relacional ')'  */
#line 170 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.y"
                        {sprintf (temp, "%s %s =", yyvsp[-2].code, yyvsp[-1].code);
                        yyval.code = gen_code (temp); }
#line 1502 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.tab.c"
    break;

  case 32: /* igualdad: '(' NE igualdad relacional ')'  */
#line 173 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.y"
                        { sprintf (temp, "%s %s = 0=", yyvsp[-2].code, yyvsp[-1].code);
                        yyval.code = gen_code (temp); }
#line 1509 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.tab.c"
    break;

  case 33: /* relacional: operacion  */
#line 176 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.y"
                                                                                        { yyval = yyvsp[0]; }
#line 1515 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.tab.c"
    break;

  case 34: /* relacional: '(' '<' relacional operacion ')'  */
#line 178 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.y"
                        { sprintf (temp, "%s %s <", yyvsp[-2].code, yyvsp[-1].code);
                        yyval.code = gen_code (temp); }
#line 1522 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.tab.c"
    break;

  case 35: /* relacional: '(' '>' relacional operacion ')'  */
#line 181 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.y"
                        { sprintf (temp, "%s %s >", yyvsp[-2].code, yyvsp[-1].code);
                        yyval.code = gen_code (temp); }
#line 1529 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.tab.c"
    break;

  case 36: /* relacional: '(' LE relacional operacion ')'  */
#line 184 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.y"
                        { sprintf (temp, "%s %s <=", yyvsp[-2].code, yyvsp[-1].code);
                        yyval.code = gen_code (temp); }
#line 1536 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.tab.c"
    break;

  case 37: /* relacional: '(' GE relacional operacion ')'  */
#line 187 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.y"
                        { sprintf (temp, "%s %s >=", yyvsp[-2].code, yyvsp[-1].code);
                        yyval.code = gen_code (temp); }
#line 1543 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.tab.c"
    break;

  case 38: /* operacion: unario  */
#line 190 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.y"
                                                                                        { yyval = yyvsp[0]; }
#line 1549 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.tab.c"
    break;

  case 39: /* operacion: '(' '+' operacion operacion ')'  */
#line 192 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.y"
                        { sprintf (temp, "%s %s +", yyvsp[-2].code, yyvsp[-1].code);
                        yyval.code = gen_code (temp); }
#line 1556 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.tab.c"
    break;

  case 40: /* operacion: '(' '-' operacion operacion ')'  */
#line 195 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.y"
                        { sprintf (temp, "%s %s -", yyvsp[-2].code, yyvsp[-1].code);
                        yyval.code = gen_code (temp); }
#line 1563 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.tab.c"
    break;

  case 41: /* operacion: '(' '*' operacion operacion ')'  */
#line 198 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.y"
                        { sprintf (temp, "%s %s *", yyvsp[-2].code, yyvsp[-1].code);
                        yyval.code = gen_code (temp); }
#line 1570 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.tab.c"
    break;

  case 42: /* operacion: '(' '/' operacion operacion ')'  */
#line 201 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.y"
                        { sprintf (temp, "%s %s /", yyvsp[-2].code, yyvsp[-1].code);
                        yyval.code = gen_code (temp); }
#line 1577 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.tab.c"
    break;

  case 43: /* operacion: '(' MOD operacion operacion ')'  */
#line 204 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.y"
                        { sprintf (temp, "%s %s mod", yyvsp[-2].code, yyvsp[-1].code);
                        yyval.code = gen_code (temp); }
#line 1584 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.tab.c"
    break;

  case 44: /* unario: operando  */
#line 207 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.y"
                                                                                        { yyval = yyvsp[0]; }
#line 1590 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.tab.c"
    break;

  case 45: /* unario: '(' NOT unario ')'  */
#line 209 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.y"
                        { sprintf (temp, "%s 0=", yyvsp[-1].code);
                        yyval.code = gen_code (temp); }
#line 1597 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.tab.c"
    break;

  case 46: /* unario: '+' operando  */
#line 211 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.y"
                                                                                        { yyval = yyvsp[-1]; }
#line 1603 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.tab.c"
    break;

  case 47: /* unario: '(' '-' operando ')'  */
#line 213 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.y"
                        {sprintf (temp, "%s negate", yyvsp[-1].code);
                        yyval.code = gen_code (temp); }
#line 1610 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.tab.c"
    break;

  case 48: /* operando: IDENTIF  */
#line 216 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.y"
                                                                                        { sprintf (temp, "%s @", yyvsp[0].code);
                                                                                        yyval.code = gen_code (temp); }
#line 1617 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.tab.c"
    break;

  case 49: /* operando: NUMBER  */
#line 218 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.y"
                                                                                        { sprintf (temp, "%d", yyvsp[0].value);
                                                                                        yyval.code = gen_code (temp); }
#line 1624 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.tab.c"
    break;

  case 50: /* operando: '(' logical_or ')'  */
#line 220 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.y"
                                                                                        { yyval = yyvsp[-1]; }
#line 1630 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.tab.c"
    break;


#line 1634 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.tab.c"

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

#line 224 "/home/liang-ji-zhu/Escritorio/2Cuatri/ProcesadoresDelLenguaje/Compiladores/practicaFinal/back.y"
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
    "/=",           NE,
    "<=",           LE,
    ">=",           GE,
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
