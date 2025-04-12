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
#line 3 "trad3.y"
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


#line 114 "trad3.tab.c"

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
    RETURN = 262,                  /* RETURN  */
    MAIN = 263,                    /* MAIN  */
    WHILE = 264,                   /* WHILE  */
    FOR = 265,                     /* FOR  */
    IF = 266,                      /* IF  */
    ELSE = 267,                    /* ELSE  */
    PUTS = 268,                    /* PUTS  */
    PRINTF = 269,                  /* PRINTF  */
    UNARY_SIGN = 276               /* UNARY_SIGN  */
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
  YYSYMBOL_RETURN = 7,                     /* RETURN  */
  YYSYMBOL_MAIN = 8,                       /* MAIN  */
  YYSYMBOL_WHILE = 9,                      /* WHILE  */
  YYSYMBOL_FOR = 10,                       /* FOR  */
  YYSYMBOL_IF = 11,                        /* IF  */
  YYSYMBOL_ELSE = 12,                      /* ELSE  */
  YYSYMBOL_PUTS = 13,                      /* PUTS  */
  YYSYMBOL_PRINTF = 14,                    /* PRINTF  */
  YYSYMBOL_15_ = 15,                       /* '='  */
  YYSYMBOL_16_ = 16,                       /* '+'  */
  YYSYMBOL_17_ = 17,                       /* '-'  */
  YYSYMBOL_18_ = 18,                       /* '*'  */
  YYSYMBOL_19_ = 19,                       /* '/'  */
  YYSYMBOL_20_ = 20,                       /* '%'  */
  YYSYMBOL_21_ = 21,                       /* '>'  */
  YYSYMBOL_22_ = 22,                       /* '<'  */
  YYSYMBOL_23_ = 23,                       /* ">="  */
  YYSYMBOL_24_ = 24,                       /* "<="  */
  YYSYMBOL_25_ = 25,                       /* "!="  */
  YYSYMBOL_26_ = 26,                       /* "=="  */
  YYSYMBOL_27_ = 27,                       /* '!'  */
  YYSYMBOL_28_ = 28,                       /* "&&"  */
  YYSYMBOL_29_ = 29,                       /* "||"  */
  YYSYMBOL_UNARY_SIGN = 30,                /* UNARY_SIGN  */
  YYSYMBOL_31_ = 31,                       /* ';'  */
  YYSYMBOL_32_ = 32,                       /* ','  */
  YYSYMBOL_33_ = 33,                       /* '('  */
  YYSYMBOL_34_ = 34,                       /* ')'  */
  YYSYMBOL_35_ = 35,                       /* '{'  */
  YYSYMBOL_36_ = 36,                       /* '}'  */
  YYSYMBOL_37_ = 37,                       /* '@'  */
  YYSYMBOL_38_ = 38,                       /* '&'  */
  YYSYMBOL_39_ = 39,                       /* '|'  */
  YYSYMBOL_YYACCEPT = 40,                  /* $accept  */
  YYSYMBOL_axioma = 41,                    /* axioma  */
  YYSYMBOL_42_1 = 42,                      /* $@1  */
  YYSYMBOL_r_axioma = 43,                  /* r_axioma  */
  YYSYMBOL_var_global = 44,                /* var_global  */
  YYSYMBOL_declaracion = 45,               /* declaracion  */
  YYSYMBOL_valor_global = 46,              /* valor_global  */
  YYSYMBOL_r_declaracion = 47,             /* r_declaracion  */
  YYSYMBOL_nueva_declaracion = 48,         /* nueva_declaracion  */
  YYSYMBOL_funcion = 49,                   /* funcion  */
  YYSYMBOL_50_2 = 50,                      /* $@2  */
  YYSYMBOL_funcion_principal = 51,         /* funcion_principal  */
  YYSYMBOL_52_3 = 52,                      /* $@3  */
  YYSYMBOL_argumento = 53,                 /* argumento  */
  YYSYMBOL_valor = 54,                     /* valor  */
  YYSYMBOL_resto_argumento = 55,           /* resto_argumento  */
  YYSYMBOL_var_local = 56,                 /* var_local  */
  YYSYMBOL_declaracion_local = 57,         /* declaracion_local  */
  YYSYMBOL_valor_local = 58,               /* valor_local  */
  YYSYMBOL_r_declaracion_local = 59,       /* r_declaracion_local  */
  YYSYMBOL_cuerpo = 60,                    /* cuerpo  */
  YYSYMBOL_estructura = 61,                /* estructura  */
  YYSYMBOL_declaracion_for = 62,           /* declaracion_for  */
  YYSYMBOL_valor_for = 63,                 /* valor_for  */
  YYSYMBOL_r_declaracion_for = 64,         /* r_declaracion_for  */
  YYSYMBOL_cuerpo_estructura = 65,         /* cuerpo_estructura  */
  YYSYMBOL_sentencia = 66,                 /* sentencia  */
  YYSYMBOL_printf = 67,                    /* printf  */
  YYSYMBOL_r_printf = 68,                  /* r_printf  */
  YYSYMBOL_asignacion = 69,                /* asignacion  */
  YYSYMBOL_expresion = 70,                 /* expresion  */
  YYSYMBOL_llamada = 71,                   /* llamada  */
  YYSYMBOL_operacion = 72,                 /* operacion  */
  YYSYMBOL_condicion = 73,                 /* condicion  */
  YYSYMBOL_termino = 74,                   /* termino  */
  YYSYMBOL_operando = 75                   /* operando  */
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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   226

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  87
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  194

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   276


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
       2,     2,     2,    27,     2,     2,     2,    20,    38,     2,
      33,    34,    18,    16,    32,    17,     2,    19,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    31,
      22,    15,    21,     2,    37,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    35,    39,    36,     2,     2,     2,     2,
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
      23,    24,    25,    26,    28,    29,    30
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    69,    69,    69,    72,    73,    79,    81,    84,    88,
      90,    93,    94,    97,   105,   105,   107,   110,   110,   114,
     116,   118,   121,   123,   124,   128,   130,   134,   135,   138,
     142,   144,   147,   149,   154,   156,   157,   159,   160,   165,
     167,   169,   171,   175,   177,   180,   182,   185,   187,   192,
     193,   194,   196,   199,   200,   202,   204,   205,   208,   211,
     213,   215,   218,   222,   223,   224,   227,   230,   232,   234,
     236,   238,   240,   243,   245,   247,   249,   251,   253,   255,
     257,   259,   263,   264,   265,   269,   271,   273
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
  "INTEGER", "STRING", "RETURN", "MAIN", "WHILE", "FOR", "IF", "ELSE",
  "PUTS", "PRINTF", "'='", "'+'", "'-'", "'*'", "'/'", "'%'", "'>'", "'<'",
  "\">=\"", "\"<=\"", "\"!=\"", "\"==\"", "'!'", "\"&&\"", "\"||\"",
  "UNARY_SIGN", "';'", "','", "'('", "')'", "'{'", "'}'", "'@'", "'&'",
  "'|'", "$accept", "axioma", "$@1", "r_axioma", "var_global",
  "declaracion", "valor_global", "r_declaracion", "nueva_declaracion",
  "funcion", "$@2", "funcion_principal", "$@3", "argumento", "valor",
  "resto_argumento", "var_local", "declaracion_local", "valor_local",
  "r_declaracion_local", "cuerpo", "estructura", "declaracion_for",
  "valor_for", "r_declaracion_for", "cuerpo_estructura", "sentencia",
  "printf", "r_printf", "asignacion", "expresion", "llamada", "operacion",
  "condicion", "termino", "operando", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-133)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-5)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      13,     8,    83,    64,    14,    38,  -133,  -133,  -133,  -133,
    -133,    13,    98,   113,  -133,  -133,    88,    90,     5,  -133,
     111,    38,  -133,   153,   153,  -133,  -133,  -133,  -133,  -133,
    -133,   157,  -133,   110,   134,   128,   134,   132,   153,  -133,
     135,  -133,   160,  -133,   160,   164,    17,   138,    17,    45,
       7,    78,   139,   140,   141,   142,   143,    78,   144,    17,
     146,  -133,  -133,   160,   145,   168,   174,  -133,  -133,    78,
     153,  -133,   149,    10,    10,   112,   112,   148,  -133,   121,
    -133,    37,  -133,    81,   105,    81,   177,   178,  -133,  -133,
     179,  -133,    17,  -133,  -133,   154,    45,  -133,   151,  -133,
    -133,  -133,  -133,   130,  -133,  -133,   112,   112,   112,   112,
     112,   173,   103,   109,   175,   155,   150,   158,    37,    46,
     187,   163,   161,   162,   165,  -133,  -133,  -133,  -133,  -133,
    -133,   133,   133,  -133,  -133,  -133,   112,   112,  -133,   112,
    -133,   112,   112,   112,   166,   195,   196,  -133,  -133,    46,
      81,   167,  -133,    63,   169,  -133,  -133,  -133,  -133,  -133,
    -133,    28,   172,    46,  -133,   176,    28,   165,   165,  -133,
      17,   170,   180,  -133,  -133,   201,   181,  -133,  -133,  -133,
    -133,    17,   184,   182,   197,  -133,   183,   185,    28,    28,
     186,   188,  -133,  -133
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       7,     0,     0,     0,     0,    12,     1,    14,    17,     2,
      16,     7,     0,     0,     8,     9,     0,     0,     7,     6,
      12,    12,    11,    21,    21,     5,     3,    10,    13,    24,
      22,     0,    23,     0,    26,     0,    26,     0,    21,    20,
       0,    19,    28,    25,    28,     0,     0,     0,     0,    33,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    37,
       0,    53,    57,    28,     0,     0,     0,    29,    30,     0,
      21,    86,    85,     0,     0,     0,     0,     0,    65,    63,
      64,    72,    82,     0,     0,     0,     0,     0,    56,    54,
       0,    36,    35,    27,    18,    33,    33,    62,     0,    85,
      83,    84,    75,     0,    72,    38,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    48,
       0,     0,     0,     0,    61,    15,    34,    31,    32,    66,
      87,    67,    68,    69,    70,    71,     0,     0,    80,     0,
      78,     0,     0,     0,     0,     0,     0,    44,    45,    48,
       0,     0,    55,     0,     0,    77,    81,    79,    76,    73,
      74,     0,    48,    48,    43,     0,     0,    61,    61,    58,
      50,     0,     0,    46,    47,     0,     0,    60,    59,    52,
      39,    49,     0,     0,    40,    51,     0,     0,     0,     0,
       0,     0,    42,    41
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -133,   190,  -133,  -133,   199,  -133,   191,   193,  -133,  -133,
    -133,   124,  -133,   -15,   192,   189,   -27,  -133,   119,   126,
     -48,  -132,  -133,   -61,    57,  -115,   -34,  -133,   -37,    51,
     -54,   -49,   -60,   -79,   -50,    61
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,    18,    26,     3,     4,    14,    15,    22,     9,
      16,    10,    17,    33,    34,    39,    46,    47,    67,    68,
      58,    59,   121,   147,   148,   171,    60,    88,   154,    61,
      77,    62,    79,    80,   104,    82
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      64,    81,    78,    89,   117,    -4,   122,    81,    78,    35,
       1,    91,     5,    71,    99,    97,   103,    48,     1,    81,
      78,    50,    69,    43,    51,   102,    52,    53,    54,   170,
      55,    56,    50,   118,   170,   118,    93,    52,    53,    54,
      70,    55,    56,    76,   126,    11,   131,   132,   133,   134,
     135,   176,   111,    12,    57,    98,   170,   170,   112,   113,
      65,   145,   138,   140,   114,    57,    71,    72,     7,   167,
      13,   165,     8,   190,   191,   115,   116,    66,   146,    73,
      74,    71,    72,     6,    71,    99,   155,   156,   164,   157,
      75,   158,   159,   160,    73,    74,    76,    73,    74,   168,
     118,    20,   174,    81,    78,    75,    71,    99,    75,   119,
     120,    76,    71,    99,    76,    71,    99,    21,   137,    73,
      74,    23,   179,    24,   139,    73,    74,   172,    73,    74,
     177,   178,   172,   185,   100,   101,    76,   106,   107,   108,
     109,   110,    76,    13,    37,    76,   106,   107,   108,   109,
     110,   108,   109,   110,   172,   172,    29,    30,    31,    32,
      29,    30,    40,    32,   130,    45,    38,    42,    49,    63,
      44,    95,    83,    84,    85,    86,    87,    92,    96,   105,
      90,    94,    70,   123,   124,   129,    66,     8,   136,   143,
     141,   149,   144,   142,   150,   151,   152,   153,   162,    69,
     163,   161,   166,   169,   146,   182,   180,   175,    25,   187,
      19,   181,    28,    27,   125,   128,   186,   184,   188,   173,
     189,   127,   192,    36,   193,    41,   183
};

static const yytype_uint8 yycheck[] =
{
      48,    51,    51,    57,    83,     0,    85,    57,    57,    24,
       5,    59,     4,     3,     4,    69,    76,    44,     5,    69,
      69,     4,    15,    38,     7,    75,     9,    10,    11,   161,
      13,    14,     4,    83,   166,    85,    63,     9,    10,    11,
      33,    13,    14,    33,    92,    31,   106,   107,   108,   109,
     110,   166,    15,    15,    37,    70,   188,   189,    21,    22,
      15,    15,   112,   113,    27,    37,     3,     4,     4,     6,
      32,   150,     8,   188,   189,    38,    39,    32,    32,    16,
      17,     3,     4,     0,     3,     4,   136,   137,   149,   139,
      27,   141,   142,   143,    16,    17,    33,    16,    17,   153,
     150,     3,   163,   153,   153,    27,     3,     4,    27,     4,
       5,    33,     3,     4,    33,     3,     4,     4,    15,    16,
      17,    33,   170,    33,    15,    16,    17,   161,    16,    17,
     167,   168,   166,   181,    73,    74,    33,    16,    17,    18,
      19,    20,    33,    32,    34,    33,    16,    17,    18,    19,
      20,    18,    19,    20,   188,   189,     3,     4,     5,     6,
       3,     4,    34,     6,    34,     5,    32,    35,     4,    31,
      35,     3,    33,    33,    33,    33,    33,    31,     4,    31,
      36,    36,    33,     6,     6,    34,    32,     8,    15,    39,
      15,     4,    34,    38,    31,    34,    34,    32,     3,    15,
       4,    35,    35,    34,    32,     4,    36,    31,    18,    12,
      11,    31,    21,    20,    90,    96,    34,    36,    35,   162,
      35,    95,    36,    31,    36,    36,   175
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,    41,    44,    45,     4,     0,     4,     8,    49,
      51,    31,    15,    32,    46,    47,    50,    52,    42,    44,
       3,     4,    48,    33,    33,    41,    43,    47,    46,     3,
       4,     5,     6,    53,    54,    53,    54,    34,    32,    55,
      34,    55,    35,    53,    35,     5,    56,    57,    56,     4,
       4,     7,     9,    10,    11,    13,    14,    37,    60,    61,
      66,    69,    71,    31,    60,    15,    32,    58,    59,    15,
      33,     3,     4,    16,    17,    27,    33,    70,    71,    72,
      73,    74,    75,    33,    33,    33,    33,    33,    67,    70,
      36,    60,    31,    56,    36,     3,     4,    70,    53,     4,
      75,    75,    74,    72,    74,    31,    16,    17,    18,    19,
      20,    15,    21,    22,    27,    38,    39,    73,    74,     4,
       5,    62,    73,     6,     6,    51,    60,    59,    58,    34,
      34,    72,    72,    72,    72,    72,    15,    15,    74,    15,
      74,    15,    38,    39,    34,    15,    32,    63,    64,     4,
      31,    34,    34,    32,    68,    74,    74,    74,    74,    74,
      74,    35,     3,     4,    63,    73,    35,     6,    70,    34,
      61,    65,    66,    64,    63,    31,    65,    68,    68,    60,
      36,    31,     4,    69,    36,    60,    34,    12,    35,    35,
      65,    65,    36,    36
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    40,    42,    41,    43,    43,    44,    44,    45,    46,
      46,    47,    47,    48,    50,    49,    49,    52,    51,    53,
      53,    53,    54,    54,    54,    55,    55,    56,    56,    57,
      58,    58,    59,    59,    60,    60,    60,    60,    60,    61,
      61,    61,    61,    62,    62,    63,    63,    64,    64,    65,
      65,    65,    65,    66,    66,    66,    66,    66,    67,    68,
      68,    68,    69,    70,    70,    70,    71,    72,    72,    72,
      72,    72,    72,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    74,    74,    74,    75,    75,    75
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     4,     0,     1,     3,     0,     3,     1,
       3,     2,     0,     2,     0,    10,     1,     0,     9,     3,
       2,     0,     1,     1,     1,     2,     0,     3,     0,     3,
       1,     3,     3,     0,     3,     2,     2,     1,     3,     7,
       7,    11,    11,     3,     2,     1,     3,     3,     0,     2,
       1,     3,     2,     1,     2,     4,     2,     1,     4,     3,
       3,     0,     3,     1,     1,     1,     4,     3,     3,     3,
       3,     3,     1,     4,     4,     2,     4,     4,     3,     4,
       3,     4,     1,     2,     2,     1,     1,     3
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
  case 2: /* $@1: %empty  */
#line 69 "trad3.y"
                                                                    { printf ("%s%s\n", yyvsp[-1].code, yyvsp[0].code); }
#line 1355 "trad3.tab.c"
    break;

  case 3: /* axioma: var_global funcion $@1 r_axioma  */
#line 70 "trad3.y"
                                                                        { ; }
#line 1361 "trad3.tab.c"
    break;

  case 4: /* r_axioma: %empty  */
#line 72 "trad3.y"
                                                                        { ; }
#line 1367 "trad3.tab.c"
    break;

  case 5: /* r_axioma: axioma  */
#line 73 "trad3.y"
                                                                        { ; }
#line 1373 "trad3.tab.c"
    break;

  case 6: /* var_global: declaracion ';' var_global  */
#line 79 "trad3.y"
                                                                        { sprintf (temp, "%s", yyvsp[-2].code);
                                                                        yyval.code = gen_code (temp); }
#line 1380 "trad3.tab.c"
    break;

  case 7: /* var_global: %empty  */
#line 81 "trad3.y"
                                                                        { yyval.code = ""; }
#line 1386 "trad3.tab.c"
    break;

  case 8: /* declaracion: INTEGER IDENTIF valor_global  */
#line 84 "trad3.y"
                                                                              { sprintf (temp, "(setq %s %s", yyvsp[-1].code, yyvsp[0].code); 
                                                                        yyval.code = gen_code (temp); }
#line 1393 "trad3.tab.c"
    break;

  case 9: /* valor_global: r_declaracion  */
#line 88 "trad3.y"
                                                                               { sprintf (temp, "%d%s", 0, yyvsp[0].code); 
                                                                        yyval.code = gen_code (temp);}
#line 1400 "trad3.tab.c"
    break;

  case 10: /* valor_global: '=' NUMBER r_declaracion  */
#line 90 "trad3.y"
                                                                        { sprintf (temp, "%d%s", yyvsp[-1].value, yyvsp[0].code); 
                                                                        yyval.code = gen_code (temp);  }
#line 1407 "trad3.tab.c"
    break;

  case 11: /* r_declaracion: ',' nueva_declaracion  */
#line 93 "trad3.y"
                                                                        { yyval.code = yyvsp[0].code; }
#line 1413 "trad3.tab.c"
    break;

  case 12: /* r_declaracion: %empty  */
#line 94 "trad3.y"
                                                                        { yyval.code = ")\n"; }
#line 1419 "trad3.tab.c"
    break;

  case 13: /* nueva_declaracion: IDENTIF valor_global  */
#line 97 "trad3.y"
                                                                              { sprintf (temp, ")\n(setq %s %s", yyvsp[-1].code, yyvsp[0].code); 
                                                                        yyval.code = gen_code (temp); }
#line 1426 "trad3.tab.c"
    break;

  case 14: /* $@2: %empty  */
#line 105 "trad3.y"
                            { strcpy(funcion_name, yyvsp[0].code);  }
#line 1432 "trad3.tab.c"
    break;

  case 15: /* funcion: IDENTIF $@2 '(' argumento ')' '{' var_local cuerpo '}' funcion_principal  */
#line 105 "trad3.y"
                                                                                                                                      { sprintf (temp, "(defun %s (%s)\n%s%s);\n%s", funcion_name, yyvsp[-6].code, yyvsp[-3].code, yyvsp[-2].code, yyvsp[0].code);
                                                                                                                                        yyval.code = gen_code (temp); }
#line 1439 "trad3.tab.c"
    break;

  case 16: /* funcion: funcion_principal  */
#line 107 "trad3.y"
                                                                                                                                      { yyval = yyvsp[0]; }
#line 1445 "trad3.tab.c"
    break;

  case 17: /* $@3: %empty  */
#line 110 "trad3.y"
                         { strcpy(funcion_name, yyvsp[0].code);  }
#line 1451 "trad3.tab.c"
    break;

  case 18: /* funcion_principal: MAIN $@3 '(' argumento ')' '{' var_local cuerpo '}'  */
#line 110 "trad3.y"
                                                                                                                                     { sprintf (temp, "(defun main (%s)\n%s%s);", yyvsp[-5].code, yyvsp[-2].code, yyvsp[-1].code);
                                                                                                                                    yyval.code = gen_code (temp); }
#line 1458 "trad3.tab.c"
    break;

  case 19: /* argumento: INTEGER valor resto_argumento  */
#line 114 "trad3.y"
                                                                              { sprintf (temp, "%s %s", yyvsp[-1].code, yyvsp[0].code); 
                                                                        yyval.code = gen_code (temp); }
#line 1465 "trad3.tab.c"
    break;

  case 20: /* argumento: valor resto_argumento  */
#line 116 "trad3.y"
                                                                        { sprintf (temp, "%s %s", yyvsp[-1].code, yyvsp[0].code); 
                                                                        yyval.code = gen_code (temp); }
#line 1472 "trad3.tab.c"
    break;

  case 21: /* argumento: %empty  */
#line 118 "trad3.y"
                                                                      { yyval.code = ""; }
#line 1478 "trad3.tab.c"
    break;

  case 22: /* valor: IDENTIF  */
#line 121 "trad3.y"
                                                                        { sprintf (temp, "%s_%s", funcion_name, yyvsp[0].code);
                                                                        yyval.code = gen_code (temp); }
#line 1485 "trad3.tab.c"
    break;

  case 23: /* valor: STRING  */
#line 123 "trad3.y"
                                                                        { yyval = yyvsp[0]; }
#line 1491 "trad3.tab.c"
    break;

  case 24: /* valor: NUMBER  */
#line 124 "trad3.y"
                                                                        { sprintf (temp, "%d", yyvsp[0].value);
                                                                        yyval.code = gen_code (temp); }
#line 1498 "trad3.tab.c"
    break;

  case 25: /* resto_argumento: ',' argumento  */
#line 128 "trad3.y"
                                                          { sprintf (temp, ", %s", yyvsp[0].code); 
                                                                        yyval.code = gen_code (temp); }
#line 1505 "trad3.tab.c"
    break;

  case 26: /* resto_argumento: %empty  */
#line 130 "trad3.y"
                                                                        { yyval.code = ""; }
#line 1511 "trad3.tab.c"
    break;

  case 27: /* var_local: declaracion_local ';' var_local  */
#line 134 "trad3.y"
                                                                        { yyval = yyvsp[-2]; }
#line 1517 "trad3.tab.c"
    break;

  case 28: /* var_local: %empty  */
#line 135 "trad3.y"
                                                                        { yyval.code = ""; }
#line 1523 "trad3.tab.c"
    break;

  case 29: /* declaracion_local: INTEGER IDENTIF valor_local  */
#line 138 "trad3.y"
                                                                              { sprintf (temp, "%s_%s%s", funcion_name, yyvsp[-1].code, yyvsp[0].code); 
                                                                        yyval.code = gen_code (temp); }
#line 1530 "trad3.tab.c"
    break;

  case 30: /* valor_local: r_declaracion_local  */
#line 142 "trad3.y"
                                                                                    { sprintf (temp, "=%d %s", 0, yyvsp[0].code); 
                                                                        yyval.code = gen_code (temp);}
#line 1537 "trad3.tab.c"
    break;

  case 31: /* valor_local: '=' NUMBER r_declaracion_local  */
#line 144 "trad3.y"
                                                                              { sprintf (temp, "=%d %s", yyvsp[-1].value, yyvsp[0].code); 
                                                                        yyval.code = gen_code (temp);  }
#line 1544 "trad3.tab.c"
    break;

  case 32: /* r_declaracion_local: ',' IDENTIF valor_local  */
#line 147 "trad3.y"
                                                                                { sprintf (temp, " %s_%s%s", funcion_name, yyvsp[-1].code, yyvsp[0].code); 
                                                                        yyval.code = gen_code (temp); }
#line 1551 "trad3.tab.c"
    break;

  case 33: /* r_declaracion_local: %empty  */
#line 149 "trad3.y"
                                                                        { yyval.code = ""; }
#line 1557 "trad3.tab.c"
    break;

  case 34: /* cuerpo: sentencia ';' cuerpo  */
#line 154 "trad3.y"
                                                                        { sprintf (temp, "%s\n%s", yyvsp[-2].code, yyvsp[0].code);
                                                                        yyval.code = gen_code (temp); }
#line 1564 "trad3.tab.c"
    break;

  case 35: /* cuerpo: sentencia ';'  */
#line 156 "trad3.y"
                                                                        { yyval = yyvsp[-1]; }
#line 1570 "trad3.tab.c"
    break;

  case 36: /* cuerpo: estructura cuerpo  */
#line 157 "trad3.y"
                                                                          { sprintf (temp, "%s\n%s", yyvsp[-1].code, yyvsp[0].code);
                                                                        yyval.code = gen_code (temp); }
#line 1577 "trad3.tab.c"
    break;

  case 37: /* cuerpo: estructura  */
#line 159 "trad3.y"
                                                                        { yyval = yyvsp[0]; }
#line 1583 "trad3.tab.c"
    break;

  case 38: /* cuerpo: RETURN expresion ';'  */
#line 160 "trad3.y"
                                                                        { yyval = yyvsp[-1]; }
#line 1589 "trad3.tab.c"
    break;

  case 39: /* estructura: WHILE '(' condicion ')' '{' cuerpo_estructura '}'  */
#line 165 "trad3.y"
                                                                                   { sprintf (temp, "(loop while %s do\n%s)", yyvsp[-4].code, yyvsp[-1].code);
                                                                        yyval.code = gen_code (temp); }
#line 1596 "trad3.tab.c"
    break;

  case 40: /* estructura: IF '(' condicion ')' '{' cuerpo_estructura '}'  */
#line 167 "trad3.y"
                                                                                 { sprintf (temp, "(if %s\n%s)", yyvsp[-4].code, yyvsp[-1].code);
                                                                        yyval.code = gen_code (temp); }
#line 1603 "trad3.tab.c"
    break;

  case 41: /* estructura: IF '(' condicion ')' '{' cuerpo_estructura '}' ELSE '{' cuerpo_estructura '}'  */
#line 169 "trad3.y"
                                                                                                    { sprintf (temp, "(if %s\n%s\n%s)", yyvsp[-8].code, yyvsp[-5].code, yyvsp[-1].code);
                                                                        yyval.code = gen_code (temp); }
#line 1610 "trad3.tab.c"
    break;

  case 42: /* estructura: FOR '(' declaracion_for ';' condicion ';' asignacion ')' '{' cuerpo_estructura '}'  */
#line 171 "trad3.y"
                                                                                                         { sprintf (temp, "%s\n(loop while %s do\n%s\n%s)", yyvsp[-8].code, yyvsp[-6].code, yyvsp[-1].code, yyvsp[-4].code);
                                                                        yyval.code = gen_code (temp); }
#line 1617 "trad3.tab.c"
    break;

  case 43: /* declaracion_for: INTEGER IDENTIF valor_for  */
#line 175 "trad3.y"
                                                                          { sprintf (temp, "%s_%s%s", funcion_name, yyvsp[-1].code, yyvsp[0].code); 
                                                                        yyval.code = gen_code (temp); }
#line 1624 "trad3.tab.c"
    break;

  case 44: /* declaracion_for: IDENTIF valor_for  */
#line 177 "trad3.y"
                                                                          { sprintf (temp, "%s_%s%s", funcion_name, yyvsp[-1].code, yyvsp[0].code); 
                                                                        yyval.code = gen_code (temp); }
#line 1631 "trad3.tab.c"
    break;

  case 45: /* valor_for: r_declaracion_for  */
#line 180 "trad3.y"
                                                                                { sprintf (temp, "=%d %s", 0, yyvsp[0].code); 
                                                                        yyval.code = gen_code (temp);}
#line 1638 "trad3.tab.c"
    break;

  case 46: /* valor_for: '=' NUMBER r_declaracion_for  */
#line 182 "trad3.y"
                                                                            { sprintf (temp, "=%d %s", yyvsp[-1].value, yyvsp[0].code); 
                                                                        yyval.code = gen_code (temp);  }
#line 1645 "trad3.tab.c"
    break;

  case 47: /* r_declaracion_for: ',' IDENTIF valor_for  */
#line 185 "trad3.y"
                                                                            { sprintf (temp, " %s_%s%s", funcion_name, yyvsp[-1].code, yyvsp[0].code); 
                                                                        yyval.code = gen_code (temp); }
#line 1652 "trad3.tab.c"
    break;

  case 48: /* r_declaracion_for: %empty  */
#line 187 "trad3.y"
                                                                        { yyval.code = ""; }
#line 1658 "trad3.tab.c"
    break;

  case 49: /* cuerpo_estructura: sentencia ';'  */
#line 192 "trad3.y"
                                                                        { yyval = yyvsp[-1]; }
#line 1664 "trad3.tab.c"
    break;

  case 50: /* cuerpo_estructura: estructura  */
#line 193 "trad3.y"
                                                                        { yyval = yyvsp[0]; }
#line 1670 "trad3.tab.c"
    break;

  case 51: /* cuerpo_estructura: sentencia ';' cuerpo  */
#line 194 "trad3.y"
                                                                        { sprintf (temp, "(progn\t%s\n%s)", yyvsp[-2].code, yyvsp[0].code); 
                                                                        yyval.code = gen_code (temp); }
#line 1677 "trad3.tab.c"
    break;

  case 52: /* cuerpo_estructura: estructura cuerpo  */
#line 196 "trad3.y"
                                                                        { sprintf (temp, "(progn\t%s\n%s)", yyvsp[-1].code, yyvsp[0].code); 
                                                                        yyval.code = gen_code (temp); }
#line 1684 "trad3.tab.c"
    break;

  case 53: /* sentencia: asignacion  */
#line 199 "trad3.y"
                                                                        { yyval = yyvsp[0]; }
#line 1690 "trad3.tab.c"
    break;

  case 54: /* sentencia: '@' expresion  */
#line 200 "trad3.y"
                                                                        { sprintf (temp, "(print %s)", yyvsp[0].code);  
                                                                        yyval.code = gen_code (temp); }
#line 1697 "trad3.tab.c"
    break;

  case 55: /* sentencia: PUTS '(' STRING ')'  */
#line 202 "trad3.y"
                                                                        { sprintf (temp, "(print \"%s\")", yyvsp[-1].code);  
                                                                        yyval.code = gen_code (temp) ;}
#line 1704 "trad3.tab.c"
    break;

  case 56: /* sentencia: PRINTF printf  */
#line 204 "trad3.y"
                                                                        { yyval.code = yyvsp[0].code; }
#line 1710 "trad3.tab.c"
    break;

  case 57: /* sentencia: llamada  */
#line 205 "trad3.y"
                                                                        { yyval.code = yyvsp[0].code; }
#line 1716 "trad3.tab.c"
    break;

  case 58: /* printf: '(' STRING r_printf ')'  */
#line 208 "trad3.y"
                                                                        { yyval.code = yyvsp[-1].code; }
#line 1722 "trad3.tab.c"
    break;

  case 59: /* r_printf: ',' expresion r_printf  */
#line 211 "trad3.y"
                                                                        { sprintf(temp, "(princ %s)\n%s", yyvsp[-1].code, yyvsp[0].code);
                                                                        yyval.code = gen_code(temp); }
#line 1729 "trad3.tab.c"
    break;

  case 60: /* r_printf: ',' STRING r_printf  */
#line 213 "trad3.y"
                                                                         { sprintf(temp, "(princ %s)\n%s", yyvsp[-1].code, yyvsp[0].code);
                                                                        yyval.code = gen_code(temp); }
#line 1736 "trad3.tab.c"
    break;

  case 61: /* r_printf: %empty  */
#line 215 "trad3.y"
                                                                        { yyval.code = gen_code(""); }
#line 1742 "trad3.tab.c"
    break;

  case 62: /* asignacion: IDENTIF '=' expresion  */
#line 218 "trad3.y"
                                                                          { sprintf (temp, "(setf %s_%s %s)", funcion_name, yyvsp[-2].code, yyvsp[0].code); 
                                                                        yyval.code = gen_code (temp); }
#line 1749 "trad3.tab.c"
    break;

  case 63: /* expresion: operacion  */
#line 222 "trad3.y"
                                                                      { yyval = yyvsp[0]; }
#line 1755 "trad3.tab.c"
    break;

  case 64: /* expresion: condicion  */
#line 223 "trad3.y"
                                                                        { yyval = yyvsp[0]; }
#line 1761 "trad3.tab.c"
    break;

  case 65: /* expresion: llamada  */
#line 224 "trad3.y"
                                                                        { yyval = yyvsp[0]; }
#line 1767 "trad3.tab.c"
    break;

  case 66: /* llamada: IDENTIF '(' argumento ')'  */
#line 227 "trad3.y"
                                                                              { sprintf (temp, "(%s %s)", yyvsp[-3].code, yyvsp[-1].code); 
                                                                        yyval.code = gen_code (temp); }
#line 1774 "trad3.tab.c"
    break;

  case 67: /* operacion: operacion '+' operacion  */
#line 230 "trad3.y"
                                                                      { sprintf (temp, "(+ %s %s)", yyvsp[-2].code, yyvsp[0].code);
                                                                        yyval.code = gen_code (temp); }
#line 1781 "trad3.tab.c"
    break;

  case 68: /* operacion: operacion '-' operacion  */
#line 232 "trad3.y"
                                                                        { sprintf (temp, "(- %s %s)", yyvsp[-2].code, yyvsp[0].code);
                                                                        yyval.code = gen_code (temp); }
#line 1788 "trad3.tab.c"
    break;

  case 69: /* operacion: operacion '*' operacion  */
#line 234 "trad3.y"
                                                                        { sprintf (temp, "(* %s %s)", yyvsp[-2].code, yyvsp[0].code);
                                                                        yyval.code = gen_code (temp); }
#line 1795 "trad3.tab.c"
    break;

  case 70: /* operacion: operacion '/' operacion  */
#line 236 "trad3.y"
                                                                        { sprintf (temp, "(/ %s %s)", yyvsp[-2].code, yyvsp[0].code);
                                                                        yyval.code = gen_code (temp); }
#line 1802 "trad3.tab.c"
    break;

  case 71: /* operacion: operacion '%' operacion  */
#line 238 "trad3.y"
                                                                        { sprintf (temp, "(mod %s %s)", yyvsp[-2].code, yyvsp[0].code);
                                                                        yyval.code = gen_code (temp); }
#line 1809 "trad3.tab.c"
    break;

  case 72: /* operacion: termino  */
#line 240 "trad3.y"
                                                                        { yyval = yyvsp[0]; }
#line 1815 "trad3.tab.c"
    break;

  case 73: /* condicion: termino '&' '&' termino  */
#line 243 "trad3.y"
                                                                       { sprintf (temp, "(and %s %s)", yyvsp[-3].code, yyvsp[0].code);
                                                                        yyval.code = gen_code (temp); }
#line 1822 "trad3.tab.c"
    break;

  case 74: /* condicion: termino '|' '|' termino  */
#line 245 "trad3.y"
                                                                       { sprintf (temp, "(or %s %s)", yyvsp[-3].code, yyvsp[0].code);
                                                                        yyval.code = gen_code (temp); }
#line 1829 "trad3.tab.c"
    break;

  case 75: /* condicion: '!' termino  */
#line 247 "trad3.y"
                                                                       { sprintf (temp, "(not %s)", yyvsp[-1].code);
                                                                        yyval.code = gen_code (temp); }
#line 1836 "trad3.tab.c"
    break;

  case 76: /* condicion: termino '!' '=' termino  */
#line 249 "trad3.y"
                                                                       { sprintf (temp, "(/= %s %s)", yyvsp[-3].code, yyvsp[0].code);
                                                                        yyval.code = gen_code (temp); }
#line 1843 "trad3.tab.c"
    break;

  case 77: /* condicion: termino '=' '=' termino  */
#line 251 "trad3.y"
                                                                       { sprintf (temp, "(= %s %s)", yyvsp[-3].code, yyvsp[0].code);
                                                                        yyval.code = gen_code (temp); }
#line 1850 "trad3.tab.c"
    break;

  case 78: /* condicion: termino '<' termino  */
#line 253 "trad3.y"
                                                                     { sprintf (temp, "(< %s %s)", yyvsp[-2].code, yyvsp[0].code);
                                                                        yyval.code = gen_code (temp); }
#line 1857 "trad3.tab.c"
    break;

  case 79: /* condicion: termino '<' '=' termino  */
#line 255 "trad3.y"
                                                                       { sprintf (temp, "(<= %s %s)", yyvsp[-3].code, yyvsp[0].code);
                                                                        yyval.code = gen_code (temp); }
#line 1864 "trad3.tab.c"
    break;

  case 80: /* condicion: termino '>' termino  */
#line 257 "trad3.y"
                                                                     { sprintf (temp, "(> %s %s)", yyvsp[-2].code, yyvsp[0].code);
                                                                        yyval.code = gen_code (temp); }
#line 1871 "trad3.tab.c"
    break;

  case 81: /* condicion: termino '>' '=' termino  */
#line 259 "trad3.y"
                                                                       { sprintf (temp, "(>= %s %s)", yyvsp[-3].code, yyvsp[0].code);
                                                                        yyval.code = gen_code (temp); }
#line 1878 "trad3.tab.c"
    break;

  case 82: /* termino: operando  */
#line 263 "trad3.y"
                                                                        { yyval = yyvsp[0]; }
#line 1884 "trad3.tab.c"
    break;

  case 83: /* termino: '+' operando  */
#line 264 "trad3.y"
                                                                        { yyval = yyvsp[-1]; }
#line 1890 "trad3.tab.c"
    break;

  case 84: /* termino: '-' operando  */
#line 265 "trad3.y"
                                                                        { sprintf (temp, "(- %s)", yyvsp[0].code);
                                                                        yyval.code = gen_code (temp); }
#line 1897 "trad3.tab.c"
    break;

  case 85: /* operando: IDENTIF  */
#line 269 "trad3.y"
                                                                        { sprintf (temp, "%s_%s", funcion_name ,yyvsp[0].code);
                                                                        yyval.code = gen_code (temp); }
#line 1904 "trad3.tab.c"
    break;

  case 86: /* operando: NUMBER  */
#line 271 "trad3.y"
                                                                        { sprintf (temp, "%d", yyvsp[0].value);
                                                                        yyval.code = gen_code (temp); }
#line 1911 "trad3.tab.c"
    break;

  case 87: /* operando: '(' operacion ')'  */
#line 273 "trad3.y"
                                                                        { yyval = yyvsp[-1]; }
#line 1917 "trad3.tab.c"
    break;


#line 1921 "trad3.tab.c"

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

#line 277 "trad3.y"
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
    "main",        MAIN,           // y los token asociados
    "int",         INTEGER,
    "puts",        PUTS,
    "printf",       PRINTF,
    "while",      WHILE,
    "if",         IF,
    "else",       ELSE,
    "for",        FOR,
    "return",      RETURN,
    NULL,          0               // para marcar el fin de la tabla
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
