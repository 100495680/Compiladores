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
#line 3 "./trad.y"
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


#line 115 "trad.tab.c"

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
  YYSYMBOL_16_ = 16,                       /* "||"  */
  YYSYMBOL_17_ = 17,                       /* "&&"  */
  YYSYMBOL_18_ = 18,                       /* "=="  */
  YYSYMBOL_19_ = 19,                       /* "!="  */
  YYSYMBOL_20_ = 20,                       /* '<'  */
  YYSYMBOL_21_ = 21,                       /* '>'  */
  YYSYMBOL_22_ = 22,                       /* "<="  */
  YYSYMBOL_23_ = 23,                       /* ">="  */
  YYSYMBOL_24_ = 24,                       /* '+'  */
  YYSYMBOL_25_ = 25,                       /* '-'  */
  YYSYMBOL_26_ = 26,                       /* '*'  */
  YYSYMBOL_27_ = 27,                       /* '/'  */
  YYSYMBOL_28_ = 28,                       /* '%'  */
  YYSYMBOL_UNARY_SIGN = 29,                /* UNARY_SIGN  */
  YYSYMBOL_30_ = 30,                       /* "!"  */
  YYSYMBOL_31_ = 31,                       /* ';'  */
  YYSYMBOL_32_ = 32,                       /* '['  */
  YYSYMBOL_33_ = 33,                       /* ']'  */
  YYSYMBOL_34_ = 34,                       /* ','  */
  YYSYMBOL_35_ = 35,                       /* '('  */
  YYSYMBOL_36_ = 36,                       /* ')'  */
  YYSYMBOL_37_ = 37,                       /* '{'  */
  YYSYMBOL_38_ = 38,                       /* '}'  */
  YYSYMBOL_39_ = 39,                       /* '@'  */
  YYSYMBOL_40_ = 40,                       /* '|'  */
  YYSYMBOL_41_ = 41,                       /* '&'  */
  YYSYMBOL_42_ = 42,                       /* '!'  */
  YYSYMBOL_YYACCEPT = 43,                  /* $accept  */
  YYSYMBOL_axioma = 44,                    /* axioma  */
  YYSYMBOL_45_1 = 45,                      /* $@1  */
  YYSYMBOL_r_axioma = 46,                  /* r_axioma  */
  YYSYMBOL_var_global = 47,                /* var_global  */
  YYSYMBOL_declaracion = 48,               /* declaracion  */
  YYSYMBOL_valor_global = 49,              /* valor_global  */
  YYSYMBOL_r_declaracion = 50,             /* r_declaracion  */
  YYSYMBOL_funcion = 51,                   /* funcion  */
  YYSYMBOL_52_2 = 52,                      /* $@2  */
  YYSYMBOL_funcion_principal = 53,         /* funcion_principal  */
  YYSYMBOL_54_3 = 54,                      /* $@3  */
  YYSYMBOL_argumento = 55,                 /* argumento  */
  YYSYMBOL_valor = 56,                     /* valor  */
  YYSYMBOL_resto_argumento = 57,           /* resto_argumento  */
  YYSYMBOL_var_local = 58,                 /* var_local  */
  YYSYMBOL_declaracion_local = 59,         /* declaracion_local  */
  YYSYMBOL_valor_local = 60,               /* valor_local  */
  YYSYMBOL_r_decl_local = 61,              /* r_decl_local  */
  YYSYMBOL_cuerpo = 62,                    /* cuerpo  */
  YYSYMBOL_estructura = 63,                /* estructura  */
  YYSYMBOL_declaracion_for = 64,           /* declaracion_for  */
  YYSYMBOL_valor_for = 65,                 /* valor_for  */
  YYSYMBOL_r_declaracion_for = 66,         /* r_declaracion_for  */
  YYSYMBOL_cuerpo_estructura = 67,         /* cuerpo_estructura  */
  YYSYMBOL_sentencia = 68,                 /* sentencia  */
  YYSYMBOL_printf = 69,                    /* printf  */
  YYSYMBOL_r_printf = 70,                  /* r_printf  */
  YYSYMBOL_asignacion = 71,                /* asignacion  */
  YYSYMBOL_expresion = 72,                 /* expresion  */
  YYSYMBOL_llamada = 73,                   /* llamada  */
  YYSYMBOL_logical_or = 74,                /* logical_or  */
  YYSYMBOL_logical_and = 75,               /* logical_and  */
  YYSYMBOL_igualdad = 76,                  /* igualdad  */
  YYSYMBOL_relacional = 77,                /* relacional  */
  YYSYMBOL_aditivo = 78,                   /* aditivo  */
  YYSYMBOL_multiplicativo = 79,            /* multiplicativo  */
  YYSYMBOL_unario = 80,                    /* unario  */
  YYSYMBOL_operando = 81,                  /* operando  */
  YYSYMBOL_vector = 82                     /* vector  */
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
#define YYLAST   256

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  97
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  222

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   277


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
       2,     2,     2,    42,     2,     2,     2,    28,    41,     2,
      35,    36,    26,    24,    34,    25,     2,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    31,
      20,    15,    21,     2,    39,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    32,     2,    33,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    37,    40,    38,     2,     2,     2,     2,
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
      16,    17,    18,    19,    22,    23,    29,    30
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    79,    79,    79,    82,    83,    88,    90,    93,    95,
      99,   101,   104,   106,   108,   114,   114,   116,   119,   119,
     123,   125,   127,   130,   131,   134,   136,   140,   142,   145,
     147,   151,   153,   156,   158,   160,   165,   167,   168,   170,
     171,   176,   178,   180,   182,   187,   189,   192,   194,   197,
     199,   204,   209,   210,   212,   214,   217,   218,   220,   222,
     223,   226,   229,   231,   233,   238,   240,   245,   248,   253,
     254,   257,   258,   261,   262,   264,   267,   268,   270,   272,
     274,   277,   278,   280,   283,   284,   286,   288,   291,   292,
     294,   295,   299,   301,   303,   305,   306,   309
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
  "PUTS", "PRINTF", "'='", "\"||\"", "\"&&\"", "\"==\"", "\"!=\"", "'<'",
  "'>'", "\"<=\"", "\">=\"", "'+'", "'-'", "'*'", "'/'", "'%'",
  "UNARY_SIGN", "\"!\"", "';'", "'['", "']'", "','", "'('", "')'", "'{'",
  "'}'", "'@'", "'|'", "'&'", "'!'", "$accept", "axioma", "$@1",
  "r_axioma", "var_global", "declaracion", "valor_global", "r_declaracion",
  "funcion", "$@2", "funcion_principal", "$@3", "argumento", "valor",
  "resto_argumento", "var_local", "declaracion_local", "valor_local",
  "r_decl_local", "cuerpo", "estructura", "declaracion_for", "valor_for",
  "r_declaracion_for", "cuerpo_estructura", "sentencia", "printf",
  "r_printf", "asignacion", "expresion", "llamada", "logical_or",
  "logical_and", "igualdad", "relacional", "aditivo", "multiplicativo",
  "unario", "operando", "vector", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-117)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-5)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       1,    54,    68,   140,    46,    86,  -117,  -117,  -117,  -117,
    -117,     1,    94,    97,    79,    85,   121,    57,  -117,  -117,
     144,   119,  -117,    11,    11,  -117,  -117,    79,    87,  -117,
     -13,    45,  -117,    25,    25,    70,    70,   143,   125,  -117,
     122,   137,    40,    90,   129,   124,  -117,  -117,  -117,   145,
    -117,   177,    79,    70,    11,   125,  -117,  -117,    27,  -117,
     146,    11,  -117,   147,   141,   169,   170,     8,    41,    70,
      70,    70,    70,    70,   149,   155,  -117,    59,   153,  -117,
    -117,   185,  -117,    70,    70,    70,    70,    70,   129,    70,
     129,   124,   124,  -117,  -117,  -117,   185,    79,  -117,  -117,
     187,   118,   161,   137,    40,    90,    90,   129,   129,   118,
    -117,   128,   123,    70,   158,   159,   160,   162,   164,    70,
     165,   118,   167,  -117,  -117,   181,   185,   166,   197,   198,
     168,    70,    11,   174,    70,   163,    70,   200,   201,  -117,
    -117,   140,  -117,   118,    70,  -117,  -117,  -117,   175,   205,
    -117,  -117,   176,  -117,   178,   195,   207,   182,   179,   180,
     183,  -117,  -117,  -117,   168,   132,  -117,   184,   215,   186,
     195,    70,   188,  -117,    82,   190,  -117,   216,   168,   126,
    -117,   218,  -117,   186,   192,   126,   183,   183,  -117,   191,
    -117,    70,   126,   189,   199,   195,  -117,   224,   193,  -117,
    -117,   168,   202,  -117,  -117,   126,   186,   134,   196,   217,
    -117,  -117,  -117,  -117,   203,   204,   126,   126,   206,   208,
    -117,  -117
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       7,     0,     0,     0,     0,    10,     1,    15,    18,     2,
      17,     7,     0,     0,    14,     0,     0,     7,     6,    11,
       0,     0,     8,    22,    22,     5,     3,    14,    10,    94,
      92,     0,    23,     0,     0,     0,     0,     0,    26,    24,
      67,    69,    71,    73,    76,    81,    84,    88,    96,     0,
       9,     0,    14,     0,    22,    26,    90,    91,     0,    89,
       0,    22,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,     0,     0,    20,
      95,    28,    25,     0,     0,     0,     0,     0,    77,     0,
      78,    82,    83,    85,    86,    87,    28,    14,    97,    93,
       0,     0,     0,    70,    72,    74,    75,    79,    80,     0,
      13,    31,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    39,     0,    56,    60,     0,    28,     0,     0,     0,
      35,     0,    22,     0,     0,     0,     0,     0,     0,    59,
      57,     0,    38,    37,     0,    27,    19,    32,     0,     0,
      29,    65,     0,    40,     0,    47,     0,     0,     0,     0,
      64,    16,    36,    66,    35,    31,    68,     0,     0,    50,
      47,     0,     0,    58,     0,     0,    30,     0,    35,     0,
      48,     0,    46,    50,     0,     0,    64,    64,    61,     0,
      33,     0,    52,     0,     0,    47,    45,     0,     0,    63,
      62,    35,     0,    54,    41,    51,    50,     0,     0,    42,
      34,    55,    53,    49,     0,     0,     0,     0,     0,     0,
      44,    43
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -117,   219,  -117,  -117,   223,  -117,   209,   -25,    98,  -117,
    -117,  -117,   -23,   211,   194,   -89,  -117,    73,   -75,   -50,
     -96,  -117,  -116,  -108,   -71,   -91,  -117,   -17,    38,  -110,
    -117,    55,   171,   172,    88,    74,   102,   -32,   142,  -101
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,    17,    26,     3,     4,    14,    22,     9,    15,
      10,    16,    37,    38,    62,   101,   102,   130,   150,   120,
     192,   157,   169,   182,   193,   194,   139,   175,   123,    39,
     124,    40,    41,    42,    43,    44,    45,    46,    47,    48
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     125,    49,    50,   133,    59,   121,     1,   109,   125,   140,
     122,    29,    30,   121,    29,    30,    31,    32,   122,    53,
     125,   151,    54,    87,   154,   121,   158,    76,    29,    30,
     122,    78,    33,    34,   163,    33,    34,   145,    82,    93,
      94,    95,   125,    35,    29,    30,    35,   121,    29,    30,
      36,    32,   122,    36,   183,    65,    89,    -4,     5,   127,
      35,   184,     1,    80,   187,    33,    34,    63,     6,    33,
      34,   142,   110,    29,    30,   196,    35,    11,   125,   206,
      35,   202,    66,    36,   125,    29,    30,    36,   186,   176,
      58,   125,    98,   162,    33,    34,   125,    19,   213,    63,
      20,    12,    12,   190,   125,    35,    33,    34,    77,   152,
      67,    68,    36,    21,   198,   125,   125,    35,    13,    51,
      23,   203,   112,    28,    36,   113,   210,   114,   115,   116,
     112,   117,   118,   191,   212,   114,   115,   116,   131,   117,
     118,    88,    90,   128,     7,   218,   219,   128,     8,   131,
      71,    72,    73,    69,    70,    53,    24,   119,   132,    61,
     129,   107,    63,   108,   177,   119,    53,   155,   156,   199,
     200,    91,    92,   105,   106,    56,    57,    27,    64,    60,
      75,    74,    84,    81,    85,    86,    96,    83,    97,    99,
     100,   111,   126,   134,   135,   136,   144,   137,   143,   138,
     147,   148,   149,   141,   146,   153,   159,   160,   164,   165,
     168,   170,   166,   171,   167,   172,   173,   174,   180,   189,
     181,   179,   195,   197,   201,   185,   188,   204,   207,   215,
     205,   209,   214,   211,    18,   208,    25,    52,   178,   161,
     216,   217,    55,     0,   220,     0,   221,     0,     0,    79,
       0,     0,     0,     0,   103,     0,   104
};

static const yytype_int16 yycheck[] =
{
     101,    24,    27,   113,    36,   101,     5,    96,   109,   119,
     101,     3,     4,   109,     3,     4,     5,     6,   109,    32,
     121,   131,    35,    15,   134,   121,   136,    52,     3,     4,
     121,    54,    24,    25,   144,    24,    25,   126,    61,    71,
      72,    73,   143,    35,     3,     4,    35,   143,     3,     4,
      42,     6,   143,    42,   170,    15,    15,     0,     4,   109,
      35,   171,     5,    36,   174,    24,    25,    40,     0,    24,
      25,   121,    97,     3,     4,   183,    35,    31,   179,   195,
      35,   191,    42,    42,   185,     3,     4,    42,     6,   164,
      35,   192,    33,   143,    24,    25,   197,     3,   206,    40,
       3,    15,    15,   178,   205,    35,    24,    25,    53,   132,
      20,    21,    42,    34,   185,   216,   217,    35,    32,    32,
      35,   192,     4,     4,    42,     7,   201,     9,    10,    11,
       4,    13,    14,     7,   205,     9,    10,    11,    15,    13,
      14,    67,    68,    15,     4,   216,   217,    15,     8,    15,
      26,    27,    28,    24,    25,    32,    35,    39,    35,    34,
      32,    87,    40,    89,    32,    39,    32,     4,     5,   186,
     187,    69,    70,    85,    86,    33,    34,    33,    41,    36,
       3,    36,    41,    37,    15,    15,    37,    40,    33,    36,
       5,     4,    31,    35,    35,    35,    15,    35,    31,    35,
       3,     3,    34,    38,    38,    31,     6,     6,    33,     4,
      15,     4,    36,    31,    36,    36,    36,    34,     3,     3,
      34,    37,     4,    31,    33,    37,    36,    38,     4,    12,
      31,    38,    36,    31,    11,   197,    17,    28,   165,   141,
      37,    37,    31,    -1,    38,    -1,    38,    -1,    -1,    55,
      -1,    -1,    -1,    -1,    83,    -1,    84
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,    44,    47,    48,     4,     0,     4,     8,    51,
      53,    31,    15,    32,    49,    52,    54,    45,    47,     3,
       3,    34,    50,    35,    35,    44,    46,    33,     4,     3,
       4,     5,     6,    24,    25,    35,    42,    55,    56,    72,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    55,
      50,    32,    49,    32,    35,    56,    81,    81,    74,    80,
      36,    34,    57,    40,    41,    15,    42,    20,    21,    24,
      25,    26,    27,    28,    36,     3,    50,    74,    55,    57,
      36,    37,    55,    40,    41,    15,    15,    15,    78,    15,
      78,    79,    79,    80,    80,    80,    37,    33,    33,    36,
       5,    58,    59,    75,    76,    77,    77,    78,    78,    58,
      50,     4,     4,     7,     9,    10,    11,    13,    14,    39,
      62,    63,    68,    71,    73,    82,    31,    62,    15,    32,
      60,    15,    35,    72,    35,    35,    35,    35,    35,    69,
      72,    38,    62,    31,    15,    58,    38,     3,     3,    34,
      61,    72,    55,    31,    72,     4,     5,    64,    72,     6,
       6,    51,    62,    72,    33,     4,    36,    36,    15,    65,
       4,    31,    36,    36,    34,    70,    61,    32,    60,    37,
       3,    34,    66,    65,    72,    37,     6,    72,    36,     3,
      61,     7,    63,    67,    68,     4,    66,    31,    67,    70,
      70,    33,    72,    67,    38,    31,    65,     4,    71,    38,
      61,    31,    67,    66,    36,    12,    37,    37,    67,    67,
      38,    38
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    43,    45,    44,    46,    46,    47,    47,    48,    48,
      49,    49,    50,    50,    50,    52,    51,    51,    54,    53,
      55,    55,    55,    56,    56,    57,    57,    58,    58,    59,
      59,    60,    60,    61,    61,    61,    62,    62,    62,    62,
      62,    63,    63,    63,    63,    64,    64,    65,    65,    66,
      66,    67,    67,    67,    67,    67,    68,    68,    68,    68,
      68,    69,    70,    70,    70,    71,    71,    72,    73,    74,
      74,    75,    75,    76,    76,    76,    77,    77,    77,    77,
      77,    78,    78,    78,    79,    79,    79,    79,    80,    80,
      80,    80,    81,    81,    81,    81,    81,    82
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     4,     0,     1,     3,     0,     4,     6,
       0,     2,     4,     6,     0,     0,    10,     1,     0,     9,
       3,     2,     0,     1,     1,     2,     0,     3,     0,     4,
       6,     0,     2,     4,     6,     0,     3,     2,     2,     1,
       3,     7,     7,    11,    11,     4,     3,     0,     2,     4,
       0,     2,     1,     3,     2,     3,     1,     2,     4,     2,
       1,     4,     3,     3,     0,     3,     3,     1,     4,     1,
       4,     1,     4,     1,     4,     4,     1,     3,     3,     4,
       4,     1,     3,     3,     1,     3,     3,     3,     1,     2,
       2,     2,     1,     4,     1,     3,     1,     4
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
#line 79 "./trad.y"
                                                                        { printf ("%s%s\n", yyvsp[-1].code, yyvsp[0].code); }
#line 1382 "trad.tab.c"
    break;

  case 3: /* axioma: var_global funcion $@1 r_axioma  */
#line 80 "./trad.y"
                                                                        { ; }
#line 1388 "trad.tab.c"
    break;

  case 4: /* r_axioma: %empty  */
#line 82 "./trad.y"
                                                                        { ; }
#line 1394 "trad.tab.c"
    break;

  case 5: /* r_axioma: axioma  */
#line 83 "./trad.y"
                                                                        { ; }
#line 1400 "trad.tab.c"
    break;

  case 6: /* var_global: declaracion ';' var_global  */
#line 88 "./trad.y"
                                                                        { sprintf (temp, "%s\n%s", yyvsp[-2].code, yyvsp[0].code);
                                                                        yyval.code = gen_code (temp); }
#line 1407 "trad.tab.c"
    break;

  case 7: /* var_global: %empty  */
#line 90 "./trad.y"
                                                                        { yyval.code = ""; }
#line 1413 "trad.tab.c"
    break;

  case 8: /* declaracion: INTEGER IDENTIF valor_global r_declaracion  */
#line 93 "./trad.y"
                                                                        { sprintf (temp, "(setq %s %s)%s", yyvsp[-2].code, yyvsp[-1].code, yyvsp[0].code); 
                                                                        yyval.code = gen_code (temp); }
#line 1420 "trad.tab.c"
    break;

  case 9: /* declaracion: INTEGER IDENTIF '[' NUMBER ']' r_declaracion  */
#line 95 "./trad.y"
                                                                        { sprintf (temp, "(setq %s (make-array %d))\n%s", yyvsp[-4].code, yyvsp[-2].value, yyvsp[0].code);
                                                                        yyval.code = gen_code (temp); }
#line 1427 "trad.tab.c"
    break;

  case 10: /* valor_global: %empty  */
#line 99 "./trad.y"
                                                                        { sprintf (temp, "%d", 0 ); 
                                                                        yyval.code = gen_code (temp);}
#line 1434 "trad.tab.c"
    break;

  case 11: /* valor_global: '=' NUMBER  */
#line 101 "./trad.y"
                                                                        { sprintf (temp, "%d", yyvsp[0].value); 
                                                                        yyval.code = gen_code (temp); }
#line 1441 "trad.tab.c"
    break;

  case 12: /* r_declaracion: ',' IDENTIF valor_global r_declaracion  */
#line 104 "./trad.y"
                                                                        { sprintf (temp, "\n(setq %s %s)%s", yyvsp[-2].code, yyvsp[-1].code, yyvsp[0].code); 
                                                                        yyval.code = gen_code (temp); }
#line 1448 "trad.tab.c"
    break;

  case 13: /* r_declaracion: ',' IDENTIF '[' NUMBER ']' r_declaracion  */
#line 106 "./trad.y"
                                                                        { sprintf (temp, "\n(setq %s (make-array %d))%s", yyvsp[-5].code, yyvsp[-3].value, yyvsp[-1].code);
                                                                        yyval.code = gen_code (temp); }
#line 1455 "trad.tab.c"
    break;

  case 14: /* r_declaracion: %empty  */
#line 108 "./trad.y"
                                                                        { yyval.code = ""; }
#line 1461 "trad.tab.c"
    break;

  case 15: /* $@2: %empty  */
#line 114 "./trad.y"
                            { strcpy(funcion_name, yyvsp[0].code); operaciones = 1; }
#line 1467 "trad.tab.c"
    break;

  case 16: /* funcion: IDENTIF $@2 '(' argumento ')' '{' var_local cuerpo '}' funcion  */
#line 114 "./trad.y"
                                                                                                                                            { sprintf (temp, "(defun %s (%s)\n\t%s%s\n)\n\t\n%s", yyvsp[-9].code, yyvsp[-6].code, yyvsp[-3].code, yyvsp[-2].code, yyvsp[0].code);
                                                                                                                                            yyval.code = gen_code (temp); }
#line 1474 "trad.tab.c"
    break;

  case 17: /* funcion: funcion_principal  */
#line 116 "./trad.y"
                                                                                                                                            { yyval = yyvsp[0]; }
#line 1480 "trad.tab.c"
    break;

  case 18: /* $@3: %empty  */
#line 119 "./trad.y"
                         { strcpy(funcion_name, yyvsp[0].code); operaciones = 1; }
#line 1486 "trad.tab.c"
    break;

  case 19: /* funcion_principal: MAIN $@3 '(' argumento ')' '{' var_local cuerpo '}'  */
#line 119 "./trad.y"
                                                                                                                                            { sprintf (temp, "(defun main (%s)\n\t%s%s\n)", yyvsp[-5].code, yyvsp[-2].code, yyvsp[-1].code);
                                                                                                                                            yyval.code = gen_code (temp); }
#line 1493 "trad.tab.c"
    break;

  case 20: /* argumento: INTEGER valor resto_argumento  */
#line 123 "./trad.y"
                                                                        { sprintf (temp, "%s %s", yyvsp[-1].code, yyvsp[0].code); 
                                                                        yyval.code = gen_code (temp); }
#line 1500 "trad.tab.c"
    break;

  case 21: /* argumento: valor resto_argumento  */
#line 125 "./trad.y"
                                                                        { sprintf (temp, "%s %s", yyvsp[-1].code, yyvsp[0].code); 
                                                                        yyval.code = gen_code (temp); }
#line 1507 "trad.tab.c"
    break;

  case 22: /* argumento: %empty  */
#line 127 "./trad.y"
                                                                        { yyval.code = ""; }
#line 1513 "trad.tab.c"
    break;

  case 23: /* valor: STRING  */
#line 130 "./trad.y"
                                                                        { yyval = yyvsp[0]; }
#line 1519 "trad.tab.c"
    break;

  case 24: /* valor: expresion  */
#line 131 "./trad.y"
                                                                        { yyval = yyvsp[0]; }
#line 1525 "trad.tab.c"
    break;

  case 25: /* resto_argumento: ',' argumento  */
#line 134 "./trad.y"
                                                                        { sprintf (temp, " %s", yyvsp[0].code); 
                                                                        yyval.code = gen_code (temp); }
#line 1532 "trad.tab.c"
    break;

  case 26: /* resto_argumento: %empty  */
#line 136 "./trad.y"
                                                                        { yyval.code = ""; }
#line 1538 "trad.tab.c"
    break;

  case 27: /* var_local: declaracion_local ';' var_local  */
#line 140 "./trad.y"
                                                                        { sprintf (temp, "%s\n\t%s", yyvsp[-2].code, yyvsp[0].code); 
                                                                        yyval.code = gen_code (temp); }
#line 1545 "trad.tab.c"
    break;

  case 28: /* var_local: %empty  */
#line 142 "./trad.y"
                                                                        { yyval.code = ""; }
#line 1551 "trad.tab.c"
    break;

  case 29: /* declaracion_local: INTEGER IDENTIF valor_local r_decl_local  */
#line 145 "./trad.y"
                                                                        { sprintf (temp, "(setq %s_%s %s)%s", funcion_name, yyvsp[-2].code, yyvsp[-1].code, yyvsp[0].code); 
                                                                        yyval.code = gen_code (temp); }
#line 1558 "trad.tab.c"
    break;

  case 30: /* declaracion_local: INTEGER IDENTIF '[' NUMBER ']' r_decl_local  */
#line 147 "./trad.y"
                                                                        { sprintf (temp, "(setq %s (make-array %d))\n%s", yyvsp[-4].code, yyvsp[-2].value, yyvsp[0].code);
                                                                        yyval.code = gen_code (temp); }
#line 1565 "trad.tab.c"
    break;

  case 31: /* valor_local: %empty  */
#line 151 "./trad.y"
                                                                        { sprintf (temp, "%d", 0); 
                                                                        yyval.code = gen_code (temp);}
#line 1572 "trad.tab.c"
    break;

  case 32: /* valor_local: '=' NUMBER  */
#line 153 "./trad.y"
                                                                        { sprintf (temp, "%d", yyvsp[0].value); 
                                                                        yyval.code = gen_code (temp); }
#line 1579 "trad.tab.c"
    break;

  case 33: /* r_decl_local: ',' IDENTIF valor_local r_decl_local  */
#line 156 "./trad.y"
                                                                        { sprintf (temp, "\n\t(setq %s_%s %s)", funcion_name, yyvsp[-2].code, yyvsp[-1].code); 
                                                                        yyval.code = gen_code (temp); }
#line 1586 "trad.tab.c"
    break;

  case 34: /* r_decl_local: ',' IDENTIF '[' NUMBER ']' r_decl_local  */
#line 158 "./trad.y"
                                                                        { sprintf (temp, "(setq %s (make-array %d))\n%s", yyvsp[-4].code, yyvsp[-2].value, yyvsp[0].code);
                                                                        yyval.code = gen_code (temp); }
#line 1593 "trad.tab.c"
    break;

  case 35: /* r_decl_local: %empty  */
#line 160 "./trad.y"
                                                                        { yyval.code = ""; }
#line 1599 "trad.tab.c"
    break;

  case 36: /* cuerpo: sentencia ';' cuerpo  */
#line 165 "./trad.y"
                                                                        { sprintf (temp, "%s\n\t%s", yyvsp[-2].code, yyvsp[0].code);
                                                                        yyval.code = gen_code (temp); }
#line 1606 "trad.tab.c"
    break;

  case 37: /* cuerpo: sentencia ';'  */
#line 167 "./trad.y"
                                                                        { yyval = yyvsp[-1]; }
#line 1612 "trad.tab.c"
    break;

  case 38: /* cuerpo: estructura cuerpo  */
#line 168 "./trad.y"
                                                                        { sprintf (temp, "%s\n\t%s", yyvsp[-1].code, yyvsp[0].code);
                                                                        yyval.code = gen_code (temp); }
#line 1619 "trad.tab.c"
    break;

  case 39: /* cuerpo: estructura  */
#line 170 "./trad.y"
                                                                        { yyval = yyvsp[0]; }
#line 1625 "trad.tab.c"
    break;

  case 40: /* cuerpo: RETURN expresion ';'  */
#line 171 "./trad.y"
                                                                        { yyval = yyvsp[-1]; }
#line 1631 "trad.tab.c"
    break;

  case 41: /* estructura: WHILE '(' expresion ')' '{' cuerpo_estructura '}'  */
#line 176 "./trad.y"
                                                                                                            { sprintf (temp, "(loop while %s do\n\t%s)", yyvsp[-4].code, yyvsp[-1].code);
                                                                                                            yyval.code = gen_code (temp); }
#line 1638 "trad.tab.c"
    break;

  case 42: /* estructura: IF '(' expresion ')' '{' cuerpo_estructura '}'  */
#line 178 "./trad.y"
                                                                                                            { sprintf (temp, "(if %s\n\t%s)", yyvsp[-4].code, yyvsp[-1].code); operaciones = 1;
                                                                                                            yyval.code = gen_code (temp); }
#line 1645 "trad.tab.c"
    break;

  case 43: /* estructura: IF '(' expresion ')' '{' cuerpo_estructura '}' ELSE '{' cuerpo_estructura '}'  */
#line 180 "./trad.y"
                                                                                                            { sprintf (temp, "(if %s\n\t%s\n\t%s)", yyvsp[-8].code, yyvsp[-5].code, yyvsp[-1].code); operaciones = 1;
                                                                                                            yyval.code = gen_code (temp); }
#line 1652 "trad.tab.c"
    break;

  case 44: /* estructura: FOR '(' declaracion_for ';' expresion ';' asignacion ')' '{' cuerpo_estructura '}'  */
#line 182 "./trad.y"
                                                                                                            { sprintf (temp, "%s\n\t(loop while %s do\n\t%s\n\t%s)", yyvsp[-8].code, yyvsp[-6].code, yyvsp[-1].code, yyvsp[-4].code);
                                                                                                            yyval.code = gen_code (temp); }
#line 1659 "trad.tab.c"
    break;

  case 45: /* declaracion_for: INTEGER IDENTIF valor_for r_declaracion_for  */
#line 187 "./trad.y"
                                                                        { sprintf (temp, "(setq %s_%s %s)%s", funcion_name, yyvsp[-2].code, yyvsp[-1].code, yyvsp[0].code); 
                                                                        yyval.code = gen_code (temp); }
#line 1666 "trad.tab.c"
    break;

  case 46: /* declaracion_for: IDENTIF valor_for r_declaracion_for  */
#line 189 "./trad.y"
                                                                        { sprintf (temp, "(setq %s_%s %s)%s", funcion_name, yyvsp[-2].code, yyvsp[-1].code, yyvsp[0].code); 
                                                                        yyval.code = gen_code (temp); }
#line 1673 "trad.tab.c"
    break;

  case 47: /* valor_for: %empty  */
#line 192 "./trad.y"
                                                                        { sprintf (temp, "%d", 0); 
                                                                        yyval.code = gen_code (temp);}
#line 1680 "trad.tab.c"
    break;

  case 48: /* valor_for: '=' NUMBER  */
#line 194 "./trad.y"
                                                                        { sprintf (temp, "%d", yyvsp[0].value); 
                                                                        yyval.code = gen_code (temp); }
#line 1687 "trad.tab.c"
    break;

  case 49: /* r_declaracion_for: ',' IDENTIF valor_for r_declaracion_for  */
#line 197 "./trad.y"
                                                                        { sprintf (temp, "\n(setq %s_%s %s)%s", funcion_name, yyvsp[-2].code, yyvsp[-1].code, yyvsp[0].code); 
                                                                        yyval.code = gen_code (temp); }
#line 1694 "trad.tab.c"
    break;

  case 50: /* r_declaracion_for: %empty  */
#line 199 "./trad.y"
                                                                        { yyval.code = ""; }
#line 1700 "trad.tab.c"
    break;

  case 51: /* cuerpo_estructura: sentencia ';'  */
#line 204 "./trad.y"
                                                                        { if (operaciones == 2) {
                                                                                yyval = yyvsp[-1];} 
                                                                        else {
                                                                                sprintf (temp, "(progn\t%s)", yyvsp[-1].code); 
                                                                                yyval.code = gen_code(temp); } }
#line 1710 "trad.tab.c"
    break;

  case 52: /* cuerpo_estructura: estructura  */
#line 209 "./trad.y"
                                                                        { yyval = yyvsp[0]; }
#line 1716 "trad.tab.c"
    break;

  case 53: /* cuerpo_estructura: sentencia ';' cuerpo_estructura  */
#line 210 "./trad.y"
                                                                        { sprintf (temp, "(progn\t%s\n\t%s)", yyvsp[-2].code, yyvsp[0].code); 
                                                                        yyval.code = gen_code (temp); }
#line 1723 "trad.tab.c"
    break;

  case 54: /* cuerpo_estructura: estructura cuerpo_estructura  */
#line 212 "./trad.y"
                                                                        { sprintf (temp, "(progn\t%s\n\t%s)", yyvsp[-1].code, yyvsp[0].code); 
                                                                        yyval.code = gen_code (temp); }
#line 1730 "trad.tab.c"
    break;

  case 55: /* cuerpo_estructura: RETURN expresion ';'  */
#line 214 "./trad.y"
                                                                        { sprintf (temp, "(return-from %s %s)", funcion_name, yyvsp[-1].code);
                                                                        yyval.code = gen_code (temp); }
#line 1737 "trad.tab.c"
    break;

  case 56: /* sentencia: asignacion  */
#line 217 "./trad.y"
                                                                        { yyval = yyvsp[0]; }
#line 1743 "trad.tab.c"
    break;

  case 57: /* sentencia: '@' expresion  */
#line 218 "./trad.y"
                                                                        { sprintf (temp, "(print %s)", yyvsp[0].code);  
                                                                        yyval.code = gen_code (temp); }
#line 1750 "trad.tab.c"
    break;

  case 58: /* sentencia: PUTS '(' STRING ')'  */
#line 220 "./trad.y"
                                                                        { sprintf (temp, "(print \"%s\")", yyvsp[-1].code);  
                                                                        yyval.code = gen_code (temp) ;}
#line 1757 "trad.tab.c"
    break;

  case 59: /* sentencia: PRINTF printf  */
#line 222 "./trad.y"
                                                                        { yyval.code = yyvsp[0].code; }
#line 1763 "trad.tab.c"
    break;

  case 60: /* sentencia: llamada  */
#line 223 "./trad.y"
                                                                        { yyval.code = yyvsp[0].code; }
#line 1769 "trad.tab.c"
    break;

  case 61: /* printf: '(' STRING r_printf ')'  */
#line 226 "./trad.y"
                                                                        { yyval.code = yyvsp[-1].code; }
#line 1775 "trad.tab.c"
    break;

  case 62: /* r_printf: ',' expresion r_printf  */
#line 229 "./trad.y"
                                                                        { sprintf(temp, "(princ %s)\n\t%s", yyvsp[-1].code, yyvsp[0].code); operaciones ++; 
                                                                        yyval.code = gen_code(temp); }
#line 1782 "trad.tab.c"
    break;

  case 63: /* r_printf: ',' STRING r_printf  */
#line 231 "./trad.y"
                                                                        { sprintf(temp, "(princ \"%s\")\n\t%s", yyvsp[-1].code, yyvsp[0].code); operaciones ++;
                                                                        yyval.code = gen_code(temp); }
#line 1789 "trad.tab.c"
    break;

  case 64: /* r_printf: %empty  */
#line 233 "./trad.y"
                                                                        { yyval.code = gen_code(""); }
#line 1795 "trad.tab.c"
    break;

  case 65: /* asignacion: IDENTIF '=' expresion  */
#line 238 "./trad.y"
                                                                        { sprintf (temp, "(setf %s_%s %s)", funcion_name, yyvsp[-2].code, yyvsp[0].code); 
                                                                        yyval.code = gen_code (temp); }
#line 1802 "trad.tab.c"
    break;

  case 66: /* asignacion: vector '=' expresion  */
#line 240 "./trad.y"
                                                                        { sprintf (temp, "(setf %s %s)", yyvsp[-2].code, yyvsp[0].code); 
                                                                        yyval.code = gen_code (temp); }
#line 1809 "trad.tab.c"
    break;

  case 67: /* expresion: logical_or  */
#line 245 "./trad.y"
                                                                        { yyval = yyvsp[0]; }
#line 1815 "trad.tab.c"
    break;

  case 68: /* llamada: IDENTIF '(' argumento ')'  */
#line 248 "./trad.y"
                                                                        { sprintf (temp, "(%s %s)", yyvsp[-3].code, yyvsp[-1].code); 
                                                                        yyval.code = gen_code (temp); }
#line 1822 "trad.tab.c"
    break;

  case 69: /* logical_or: logical_and  */
#line 253 "./trad.y"
                                                                        { yyval = yyvsp[0]; }
#line 1828 "trad.tab.c"
    break;

  case 70: /* logical_or: logical_or '|' '|' logical_and  */
#line 254 "./trad.y"
                                                                        { sprintf (temp, "(or %s %s)", yyvsp[-3].code, yyvsp[0].code);
                                                                        yyval.code = gen_code (temp); }
#line 1835 "trad.tab.c"
    break;

  case 71: /* logical_and: igualdad  */
#line 257 "./trad.y"
                                                                        { yyval = yyvsp[0]; }
#line 1841 "trad.tab.c"
    break;

  case 72: /* logical_and: logical_and '&' '&' igualdad  */
#line 258 "./trad.y"
                                                                        { sprintf (temp, "(and %s %s)", yyvsp[-3].code, yyvsp[0].code);
                                                                        yyval.code = gen_code (temp); }
#line 1848 "trad.tab.c"
    break;

  case 73: /* igualdad: relacional  */
#line 261 "./trad.y"
                                                                        { yyval = yyvsp[0]; }
#line 1854 "trad.tab.c"
    break;

  case 74: /* igualdad: igualdad '=' '=' relacional  */
#line 262 "./trad.y"
                                                                        { sprintf (temp, "(= %s %s)", yyvsp[-3].code, yyvsp[0].code);
                                                                        yyval.code = gen_code (temp); }
#line 1861 "trad.tab.c"
    break;

  case 75: /* igualdad: igualdad '!' '=' relacional  */
#line 264 "./trad.y"
                                                                        { sprintf (temp, "(/= %s %s)", yyvsp[-3].code, yyvsp[0].code);
                                                                        yyval.code = gen_code (temp); }
#line 1868 "trad.tab.c"
    break;

  case 76: /* relacional: aditivo  */
#line 267 "./trad.y"
                                                                        { yyval = yyvsp[0]; }
#line 1874 "trad.tab.c"
    break;

  case 77: /* relacional: relacional '<' aditivo  */
#line 268 "./trad.y"
                                                                        { sprintf (temp, "(< %s %s)", yyvsp[-2].code, yyvsp[0].code);
                                                                        yyval.code = gen_code (temp); }
#line 1881 "trad.tab.c"
    break;

  case 78: /* relacional: relacional '>' aditivo  */
#line 270 "./trad.y"
                                                                        { sprintf (temp, "(> %s %s)", yyvsp[-2].code, yyvsp[0].code);
                                                                        yyval.code = gen_code (temp); }
#line 1888 "trad.tab.c"
    break;

  case 79: /* relacional: relacional '<' '=' aditivo  */
#line 272 "./trad.y"
                                                                        { sprintf (temp, "(<= %s %s)", yyvsp[-3].code, yyvsp[0].code);
                                                                        yyval.code = gen_code (temp); }
#line 1895 "trad.tab.c"
    break;

  case 80: /* relacional: relacional '>' '=' aditivo  */
#line 274 "./trad.y"
                                                                        { sprintf (temp, "(>= %s %s)", yyvsp[-3].code, yyvsp[0].code);
                                                                        yyval.code = gen_code (temp); }
#line 1902 "trad.tab.c"
    break;

  case 81: /* aditivo: multiplicativo  */
#line 277 "./trad.y"
                                                                        { yyval = yyvsp[0]; }
#line 1908 "trad.tab.c"
    break;

  case 82: /* aditivo: aditivo '+' multiplicativo  */
#line 278 "./trad.y"
                                                                        { sprintf (temp, "(+ %s %s)", yyvsp[-2].code, yyvsp[0].code);
                                                                        yyval.code = gen_code (temp); }
#line 1915 "trad.tab.c"
    break;

  case 83: /* aditivo: aditivo '-' multiplicativo  */
#line 280 "./trad.y"
                                                                        { sprintf (temp, "(- %s %s)", yyvsp[-2].code, yyvsp[0].code);
                                                                        yyval.code = gen_code (temp); }
#line 1922 "trad.tab.c"
    break;

  case 84: /* multiplicativo: unario  */
#line 283 "./trad.y"
                                                                        { yyval = yyvsp[0]; }
#line 1928 "trad.tab.c"
    break;

  case 85: /* multiplicativo: multiplicativo '*' unario  */
#line 284 "./trad.y"
                                                                        { sprintf (temp, "(* %s %s)", yyvsp[-2].code, yyvsp[0].code);
                                                                        yyval.code = gen_code (temp); }
#line 1935 "trad.tab.c"
    break;

  case 86: /* multiplicativo: multiplicativo '/' unario  */
#line 286 "./trad.y"
                                                                        { sprintf (temp, "(/ %s %s)", yyvsp[-2].code, yyvsp[0].code);
                                                                        yyval.code = gen_code (temp); }
#line 1942 "trad.tab.c"
    break;

  case 87: /* multiplicativo: multiplicativo '%' unario  */
#line 288 "./trad.y"
                                                                        { sprintf (temp, "(mod %s %s)", yyvsp[-2].code, yyvsp[0].code);
                                                                        yyval.code = gen_code (temp); }
#line 1949 "trad.tab.c"
    break;

  case 88: /* unario: operando  */
#line 291 "./trad.y"
                                                                        { yyval = yyvsp[0]; }
#line 1955 "trad.tab.c"
    break;

  case 89: /* unario: '!' unario  */
#line 292 "./trad.y"
                                                                        { sprintf (temp, "(not %s)", yyvsp[0].code);
                                                                        yyval.code = gen_code (temp); }
#line 1962 "trad.tab.c"
    break;

  case 90: /* unario: '+' operando  */
#line 294 "./trad.y"
                                                                        { yyval = yyvsp[0]; }
#line 1968 "trad.tab.c"
    break;

  case 91: /* unario: '-' operando  */
#line 295 "./trad.y"
                                                                        { sprintf (temp, "(- %s)", yyvsp[0].code);
                                                                        yyval.code = gen_code (temp); }
#line 1975 "trad.tab.c"
    break;

  case 92: /* operando: IDENTIF  */
#line 299 "./trad.y"
                                                                        { sprintf (temp, "%s_%s", funcion_name ,yyvsp[0].code);
                                                                        yyval.code = gen_code (temp); }
#line 1982 "trad.tab.c"
    break;

  case 93: /* operando: IDENTIF '(' argumento ')'  */
#line 301 "./trad.y"
                                                                        { sprintf (temp, "(%s %s)", yyvsp[-3].code, yyvsp[-1].code); 
                                                                        yyval.code = gen_code (temp); }
#line 1989 "trad.tab.c"
    break;

  case 94: /* operando: NUMBER  */
#line 303 "./trad.y"
                                                                        { sprintf (temp, "%d", yyvsp[0].value);
                                                                        yyval.code = gen_code (temp); }
#line 1996 "trad.tab.c"
    break;

  case 95: /* operando: '(' logical_or ')'  */
#line 305 "./trad.y"
                                                                        { yyval = yyvsp[-1]; }
#line 2002 "trad.tab.c"
    break;

  case 96: /* operando: vector  */
#line 306 "./trad.y"
                                                                        { yyval = yyvsp[0]; }
#line 2008 "trad.tab.c"
    break;

  case 97: /* vector: IDENTIF '[' logical_or ']'  */
#line 309 "./trad.y"
                                                                        { sprintf (temp, "(aref %s %s)", yyvsp[-3].code, yyvsp[-1].code);
                                                                        yyval.code = gen_code (temp); }
#line 2015 "trad.tab.c"
    break;


#line 2019 "trad.tab.c"

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

#line 312 "./trad.y"
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
