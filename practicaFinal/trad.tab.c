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
    EQ = 270,                      /* EQ  */
    NE = 271,                      /* NE  */
    LE = 272,                      /* LE  */
    GE = 273,                      /* GE  */
    OR = 274,                      /* OR  */
    AND = 275,                     /* AND  */
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
  YYSYMBOL_EQ = 15,                        /* EQ  */
  YYSYMBOL_NE = 16,                        /* NE  */
  YYSYMBOL_LE = 17,                        /* LE  */
  YYSYMBOL_GE = 18,                        /* GE  */
  YYSYMBOL_OR = 19,                        /* OR  */
  YYSYMBOL_AND = 20,                       /* AND  */
  YYSYMBOL_21_ = 21,                       /* '='  */
  YYSYMBOL_22_ = 22,                       /* '<'  */
  YYSYMBOL_23_ = 23,                       /* '>'  */
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
  YYSYMBOL_40_ = 40,                       /* '!'  */
  YYSYMBOL_YYACCEPT = 41,                  /* $accept  */
  YYSYMBOL_axioma = 42,                    /* axioma  */
  YYSYMBOL_43_1 = 43,                      /* $@1  */
  YYSYMBOL_r_axioma = 44,                  /* r_axioma  */
  YYSYMBOL_var_global = 45,                /* var_global  */
  YYSYMBOL_declaracion = 46,               /* declaracion  */
  YYSYMBOL_valor_global = 47,              /* valor_global  */
  YYSYMBOL_r_declaracion = 48,             /* r_declaracion  */
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
  YYSYMBOL_r_decl_local = 59,              /* r_decl_local  */
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
  YYSYMBOL_logical_or = 72,                /* logical_or  */
  YYSYMBOL_logical_and = 73,               /* logical_and  */
  YYSYMBOL_igualdad = 74,                  /* igualdad  */
  YYSYMBOL_relacional = 75,                /* relacional  */
  YYSYMBOL_aditivo = 76,                   /* aditivo  */
  YYSYMBOL_multiplicativo = 77,            /* multiplicativo  */
  YYSYMBOL_unario = 78,                    /* unario  */
  YYSYMBOL_operando = 79,                  /* operando  */
  YYSYMBOL_vector = 80                     /* vector  */
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
#define YYLAST   260

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  97
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  218

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
       2,     2,     2,    40,     2,     2,     2,    28,     2,     2,
      35,    36,    26,    24,    34,    25,     2,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    31,
      22,    21,    23,     2,    39,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    32,     2,    33,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    37,     2,    38,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    29,    30
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    79,    79,    79,    82,    83,    88,    90,    93,    96,
     101,   103,   106,   108,   110,   116,   116,   119,   123,   123,
     128,   130,   132,   135,   136,   139,   141,   145,   147,   150,
     153,   158,   160,   163,   166,   169,   174,   176,   177,   179,
     180,   185,   188,   191,   194,   200,   203,   207,   209,   212,
     215,   220,   225,   226,   228,   230,   234,   235,   237,   239,
     240,   243,   246,   249,   252,   257,   260,   266,   269,   274,
     275,   278,   279,   282,   283,   285,   288,   289,   291,   293,
     295,   298,   299,   301,   304,   305,   307,   309,   312,   313,
     315,   316,   320,   322,   324,   326,   327,   330
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
  "PUTS", "PRINTF", "EQ", "NE", "LE", "GE", "OR", "AND", "'='", "'<'",
  "'>'", "'+'", "'-'", "'*'", "'/'", "'%'", "UNARY_SIGN", "\"!\"", "';'",
  "'['", "']'", "','", "'('", "')'", "'{'", "'}'", "'@'", "'!'", "$accept",
  "axioma", "$@1", "r_axioma", "var_global", "declaracion", "valor_global",
  "r_declaracion", "funcion", "$@2", "funcion_principal", "$@3",
  "argumento", "valor", "resto_argumento", "var_local",
  "declaracion_local", "valor_local", "r_decl_local", "cuerpo",
  "estructura", "declaracion_for", "valor_for", "r_declaracion_for",
  "cuerpo_estructura", "sentencia", "printf", "r_printf", "asignacion",
  "expresion", "llamada", "logical_or", "logical_and", "igualdad",
  "relacional", "aditivo", "multiplicativo", "unario", "operando",
  "vector", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-147)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-5)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      11,    18,    46,   109,    27,    67,  -147,  -147,  -147,  -147,
    -147,    11,    64,    70,    66,    45,    81,    12,  -147,  -147,
      69,   107,  -147,    44,    44,  -147,  -147,    66,    74,  -147,
     120,     4,  -147,    59,    59,    79,    79,   125,    93,  -147,
     147,   148,   121,   117,    68,   115,  -147,  -147,  -147,   133,
    -147,   164,    66,    79,    44,    93,  -147,  -147,    -4,  -147,
     134,    44,  -147,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,   135,   137,  -147,    -6,
     138,  -147,  -147,   168,  -147,   148,   121,   117,   117,    68,
      68,    68,    68,   115,   115,  -147,  -147,  -147,   168,    66,
    -147,  -147,   171,   111,   145,   111,  -147,    75,    39,    79,
     142,   143,   146,   149,   150,    79,   141,   111,   151,  -147,
    -147,   159,   168,   152,   180,   183,   153,    79,    44,   157,
      79,   144,    79,   185,   186,  -147,  -147,   109,  -147,   111,
      79,  -147,  -147,  -147,   156,   189,  -147,  -147,   158,  -147,
     160,   174,   193,   167,   163,   165,   166,  -147,  -147,  -147,
     153,    76,  -147,   169,   199,   170,   174,    79,   172,  -147,
      51,   175,  -147,   200,   153,   119,  -147,   201,  -147,   170,
     176,   119,   166,   166,  -147,   177,  -147,    79,   119,   178,
     181,   174,  -147,   204,   179,  -147,  -147,   153,   182,  -147,
    -147,   119,   170,    80,   184,   202,  -147,  -147,  -147,  -147,
     187,   188,   119,   119,   190,   191,  -147,  -147
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
       0,     0,     0,     0,     0,     0,     0,     0,    12,     0,
       0,    20,    95,    28,    25,    70,    72,    74,    75,    79,
      80,    77,    78,    82,    83,    85,    86,    87,    28,    14,
      97,    93,     0,     0,     0,     0,    13,    31,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    39,     0,    56,
      60,     0,    28,     0,     0,     0,    35,     0,    22,     0,
       0,     0,     0,     0,     0,    59,    57,     0,    38,    37,
       0,    27,    19,    32,     0,     0,    29,    65,     0,    40,
       0,    47,     0,     0,     0,     0,    64,    16,    36,    66,
      35,    31,    68,     0,     0,    50,    47,     0,     0,    58,
       0,     0,    30,     0,    35,     0,    48,     0,    46,    50,
       0,     0,    64,    64,    61,     0,    33,     0,    52,     0,
       0,    47,    45,     0,     0,    63,    62,    35,     0,    54,
      41,    51,    50,     0,     0,    42,    34,    55,    53,    49,
       0,     0,     0,     0,     0,     0,    44,    43
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -147,   198,  -147,  -147,   207,  -147,   194,   -22,    82,  -147,
    -147,  -147,   -23,   192,   195,   -87,  -147,    60,  -141,   -99,
     -80,  -147,  -146,  -113,   -50,   -52,  -147,   -29,    33,  -106,
    -147,    17,   173,   196,    91,    77,    88,   -32,   131,  -103
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,    17,    26,     3,     4,    14,    22,     9,    15,
      10,    16,    37,    38,    62,   103,   104,   126,   146,   116,
     188,   153,   165,   178,   189,   190,   135,   171,   119,    39,
     120,    40,    41,    42,    43,    44,    45,    46,    47,    48
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     121,    49,   121,   129,    59,    50,   123,    29,    30,   136,
      32,   105,    -4,    63,   121,    63,     1,     1,   138,   172,
     179,   147,     5,   117,   150,   117,   154,   100,    33,    34,
      78,    80,    82,   186,   159,   141,   121,   117,    84,    35,
     158,    95,    96,    97,    36,   202,     6,    29,    30,    31,
      32,   118,    58,   118,    29,    30,   206,   182,    11,   117,
     127,   180,    29,    30,   183,   118,   192,    19,    33,    34,
      79,    53,   121,    20,   128,    33,    34,   106,   121,    35,
      23,   198,    29,    30,    36,   121,    35,   118,    12,   209,
     121,    36,    71,    72,    35,    12,   124,   124,   121,    13,
      21,   127,    27,    33,    34,   148,    51,   125,   173,   121,
     121,    28,    53,     7,    35,   108,    24,     8,   109,    36,
     110,   111,   112,   108,   113,   114,   187,    61,   110,   111,
     112,   194,   113,   114,    67,    68,    65,    66,   199,    69,
      70,    73,    74,    75,    89,    90,    91,    92,   151,   152,
     115,   208,    53,   195,   196,    54,    87,    88,   115,    93,
      94,    60,   214,   215,    56,    57,    63,    77,    64,    76,
      99,    83,    98,   102,   101,   107,   122,   130,   131,   137,
     140,   132,   139,   143,   133,   134,   144,   145,   149,   160,
     142,   155,   156,   161,   162,   164,   163,   166,   167,   168,
     170,   169,   176,   185,   177,   191,   175,   193,   203,   181,
     197,   184,   201,   207,   211,    25,   200,   205,    18,   157,
     210,   174,    52,    55,   212,   213,   204,     0,   216,   217,
       0,     0,     0,     0,     0,     0,    85,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      81,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      86
};

static const yytype_int16 yycheck[] =
{
     103,    24,   105,   109,    36,    27,   105,     3,     4,   115,
       6,    98,     0,    19,   117,    19,     5,     5,   117,   160,
     166,   127,     4,   103,   130,   105,   132,    33,    24,    25,
      52,    54,    36,   174,   140,   122,   139,   117,    61,    35,
     139,    73,    74,    75,    40,   191,     0,     3,     4,     5,
       6,   103,    35,   105,     3,     4,   197,     6,    31,   139,
      21,   167,     3,     4,   170,   117,   179,     3,    24,    25,
      53,    32,   175,     3,    35,    24,    25,    99,   181,    35,
      35,   187,     3,     4,    40,   188,    35,   139,    21,   202,
     193,    40,    24,    25,    35,    21,    21,    21,   201,    32,
      34,    21,    33,    24,    25,   128,    32,    32,    32,   212,
     213,     4,    32,     4,    35,     4,    35,     8,     7,    40,
       9,    10,    11,     4,    13,    14,     7,    34,     9,    10,
      11,   181,    13,    14,    17,    18,    15,    16,   188,    22,
      23,    26,    27,    28,    67,    68,    69,    70,     4,     5,
      39,   201,    32,   182,   183,    35,    65,    66,    39,    71,
      72,    36,   212,   213,    33,    34,    19,     3,    20,    36,
      33,    37,    37,     5,    36,     4,    31,    35,    35,    38,
      21,    35,    31,     3,    35,    35,     3,    34,    31,    33,
      38,     6,     6,     4,    36,    21,    36,     4,    31,    36,
      34,    36,     3,     3,    34,     4,    37,    31,     4,    37,
      33,    36,    31,    31,    12,    17,    38,    38,    11,   137,
      36,   161,    28,    31,    37,    37,   193,    -1,    38,    38,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      64
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,    42,    45,    46,     4,     0,     4,     8,    49,
      51,    31,    21,    32,    47,    50,    52,    43,    45,     3,
       3,    34,    48,    35,    35,    42,    44,    33,     4,     3,
       4,     5,     6,    24,    25,    35,    40,    53,    54,    70,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    53,
      48,    32,    47,    32,    35,    54,    79,    79,    72,    78,
      36,    34,    55,    19,    20,    15,    16,    17,    18,    22,
      23,    24,    25,    26,    27,    28,    36,     3,    48,    72,
      53,    55,    36,    37,    53,    73,    74,    75,    75,    76,
      76,    76,    76,    77,    77,    78,    78,    78,    37,    33,
      33,    36,     5,    56,    57,    56,    48,     4,     4,     7,
       9,    10,    11,    13,    14,    39,    60,    61,    66,    69,
      71,    80,    31,    60,    21,    32,    58,    21,    35,    70,
      35,    35,    35,    35,    35,    67,    70,    38,    60,    31,
      21,    56,    38,     3,     3,    34,    59,    70,    53,    31,
      70,     4,     5,    62,    70,     6,     6,    49,    60,    70,
      33,     4,    36,    36,    21,    63,     4,    31,    36,    36,
      34,    68,    59,    32,    58,    37,     3,    34,    64,    63,
      70,    37,     6,    70,    36,     3,    59,     7,    61,    65,
      66,     4,    64,    31,    65,    68,    68,    33,    70,    65,
      38,    31,    63,     4,    69,    38,    59,    31,    65,    64,
      36,    12,    37,    37,    65,    65,    38,    38
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    41,    43,    42,    44,    44,    45,    45,    46,    46,
      47,    47,    48,    48,    48,    50,    49,    49,    52,    51,
      53,    53,    53,    54,    54,    55,    55,    56,    56,    57,
      57,    58,    58,    59,    59,    59,    60,    60,    60,    60,
      60,    61,    61,    61,    61,    62,    62,    63,    63,    64,
      64,    65,    65,    65,    65,    65,    66,    66,    66,    66,
      66,    67,    68,    68,    68,    69,    69,    70,    71,    72,
      72,    73,    73,    74,    74,    74,    75,    75,    75,    75,
      75,    76,    76,    76,    77,    77,    77,    77,    78,    78,
      78,    78,    79,    79,    79,    79,    79,    80
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
       3,     1,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     1,     2,
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
#line 1385 "trad.tab.c"
    break;

  case 3: /* axioma: var_global funcion $@1 r_axioma  */
#line 80 "./trad.y"
                                                                        { ; }
#line 1391 "trad.tab.c"
    break;

  case 4: /* r_axioma: %empty  */
#line 82 "./trad.y"
                                                                        { ; }
#line 1397 "trad.tab.c"
    break;

  case 5: /* r_axioma: axioma  */
#line 83 "./trad.y"
                                                                        { ; }
#line 1403 "trad.tab.c"
    break;

  case 6: /* var_global: declaracion ';' var_global  */
#line 88 "./trad.y"
                                                                        { sprintf (temp, "%s\n%s", yyvsp[-2].code, yyvsp[0].code);
                                                                        yyval.code = gen_code (temp); }
#line 1410 "trad.tab.c"
    break;

  case 7: /* var_global: %empty  */
#line 90 "./trad.y"
                                                                        { yyval.code = ""; }
#line 1416 "trad.tab.c"
    break;

  case 8: /* declaracion: INTEGER IDENTIF valor_global r_declaracion  */
#line 94 "./trad.y"
                        { sprintf (temp, "(setq %s %s)%s", yyvsp[-2].code, yyvsp[-1].code, yyvsp[0].code); 
                        yyval.code = gen_code (temp); }
#line 1423 "trad.tab.c"
    break;

  case 9: /* declaracion: INTEGER IDENTIF '[' NUMBER ']' r_declaracion  */
#line 97 "./trad.y"
                        { sprintf (temp, "(setq %s (make-array %d))\n%s", yyvsp[-4].code, yyvsp[-2].value, yyvsp[0].code);
                        yyval.code = gen_code (temp); }
#line 1430 "trad.tab.c"
    break;

  case 10: /* valor_global: %empty  */
#line 101 "./trad.y"
                                                                        { sprintf (temp, "%d", 0 ); 
                                                                        yyval.code = gen_code (temp);}
#line 1437 "trad.tab.c"
    break;

  case 11: /* valor_global: '=' NUMBER  */
#line 103 "./trad.y"
                                                                        { sprintf (temp, "%d", yyvsp[0].value); 
                                                                        yyval.code = gen_code (temp); }
#line 1444 "trad.tab.c"
    break;

  case 12: /* r_declaracion: ',' IDENTIF valor_global r_declaracion  */
#line 106 "./trad.y"
                                                                        { sprintf (temp, "\n(setq %s %s)%s", yyvsp[-2].code, yyvsp[-1].code, yyvsp[0].code); 
                                                                        yyval.code = gen_code (temp); }
#line 1451 "trad.tab.c"
    break;

  case 13: /* r_declaracion: ',' IDENTIF '[' NUMBER ']' r_declaracion  */
#line 108 "./trad.y"
                                                                        { sprintf (temp, "\n(setq %s (make-array %d))%s", yyvsp[-5].code, yyvsp[-3].value, yyvsp[-1].code);
                                                                        yyval.code = gen_code (temp); }
#line 1458 "trad.tab.c"
    break;

  case 14: /* r_declaracion: %empty  */
#line 110 "./trad.y"
                                                                        { yyval.code = ""; }
#line 1464 "trad.tab.c"
    break;

  case 15: /* $@2: %empty  */
#line 116 "./trad.y"
                            { strcpy(funcion_name, yyvsp[0].code); operaciones = 1; }
#line 1470 "trad.tab.c"
    break;

  case 16: /* funcion: IDENTIF $@2 '(' argumento ')' '{' var_local cuerpo '}' funcion  */
#line 117 "./trad.y"
                        { sprintf (temp, "(defun %s (%s)\n\t%s%s\n)\n\t\n%s", yyvsp[-9].code, yyvsp[-6].code, yyvsp[-3].code, yyvsp[-2].code, yyvsp[0].code);
                        yyval.code = gen_code (temp); }
#line 1477 "trad.tab.c"
    break;

  case 17: /* funcion: funcion_principal  */
#line 120 "./trad.y"
                        { yyval = yyvsp[0]; }
#line 1483 "trad.tab.c"
    break;

  case 18: /* $@3: %empty  */
#line 123 "./trad.y"
                         { strcpy(funcion_name, yyvsp[0].code); operaciones = 1; }
#line 1489 "trad.tab.c"
    break;

  case 19: /* funcion_principal: MAIN $@3 '(' argumento ')' '{' var_local cuerpo '}'  */
#line 124 "./trad.y"
                        { sprintf (temp, "(defun main (%s)\n\t%s%s\n)", yyvsp[-5].code, yyvsp[-2].code, yyvsp[-1].code);
                        yyval.code = gen_code (temp); }
#line 1496 "trad.tab.c"
    break;

  case 20: /* argumento: INTEGER valor resto_argumento  */
#line 128 "./trad.y"
                                                                        { sprintf (temp, "%s %s", yyvsp[-1].code, yyvsp[0].code); 
                                                                        yyval.code = gen_code (temp); }
#line 1503 "trad.tab.c"
    break;

  case 21: /* argumento: valor resto_argumento  */
#line 130 "./trad.y"
                                                                        { sprintf (temp, "%s %s", yyvsp[-1].code, yyvsp[0].code); 
                                                                        yyval.code = gen_code (temp); }
#line 1510 "trad.tab.c"
    break;

  case 22: /* argumento: %empty  */
#line 132 "./trad.y"
                                                                        { yyval.code = ""; }
#line 1516 "trad.tab.c"
    break;

  case 23: /* valor: STRING  */
#line 135 "./trad.y"
                                                                        { yyval = yyvsp[0]; }
#line 1522 "trad.tab.c"
    break;

  case 24: /* valor: expresion  */
#line 136 "./trad.y"
                                                                        { yyval = yyvsp[0]; }
#line 1528 "trad.tab.c"
    break;

  case 25: /* resto_argumento: ',' argumento  */
#line 139 "./trad.y"
                                                                        { sprintf (temp, " %s", yyvsp[0].code); 
                                                                        yyval.code = gen_code (temp); }
#line 1535 "trad.tab.c"
    break;

  case 26: /* resto_argumento: %empty  */
#line 141 "./trad.y"
                                                                        { yyval.code = ""; }
#line 1541 "trad.tab.c"
    break;

  case 27: /* var_local: declaracion_local ';' var_local  */
#line 145 "./trad.y"
                                                                        { sprintf (temp, "%s\n\t%s", yyvsp[-2].code, yyvsp[0].code); 
                                                                        yyval.code = gen_code (temp); }
#line 1548 "trad.tab.c"
    break;

  case 28: /* var_local: %empty  */
#line 147 "./trad.y"
                                                                        { yyval.code = ""; }
#line 1554 "trad.tab.c"
    break;

  case 29: /* declaracion_local: INTEGER IDENTIF valor_local r_decl_local  */
#line 151 "./trad.y"
                        { sprintf (temp, "(setq %s_%s %s)%s", funcion_name, yyvsp[-2].code, yyvsp[-1].code, yyvsp[0].code); 
                        yyval.code = gen_code (temp); }
#line 1561 "trad.tab.c"
    break;

  case 30: /* declaracion_local: INTEGER IDENTIF '[' NUMBER ']' r_decl_local  */
#line 154 "./trad.y"
                        { sprintf (temp, "(setq %s (make-array %d))\n%s", yyvsp[-4].code, yyvsp[-2].value, yyvsp[0].code);
                        yyval.code = gen_code (temp); }
#line 1568 "trad.tab.c"
    break;

  case 31: /* valor_local: %empty  */
#line 158 "./trad.y"
                                                                        { sprintf (temp, "%d", 0); 
                                                                        yyval.code = gen_code (temp);}
#line 1575 "trad.tab.c"
    break;

  case 32: /* valor_local: '=' NUMBER  */
#line 160 "./trad.y"
                                                                        { sprintf (temp, "%d", yyvsp[0].value); 
                                                                        yyval.code = gen_code (temp); }
#line 1582 "trad.tab.c"
    break;

  case 33: /* r_decl_local: ',' IDENTIF valor_local r_decl_local  */
#line 164 "./trad.y"
                        { sprintf (temp, "\n\t(setq %s_%s %s)", funcion_name, yyvsp[-2].code, yyvsp[-1].code); 
                        yyval.code = gen_code (temp); }
#line 1589 "trad.tab.c"
    break;

  case 34: /* r_decl_local: ',' IDENTIF '[' NUMBER ']' r_decl_local  */
#line 167 "./trad.y"
                        { sprintf (temp, "(setq %s (make-array %d))\n%s", yyvsp[-4].code, yyvsp[-2].value, yyvsp[0].code);
                        yyval.code = gen_code (temp); }
#line 1596 "trad.tab.c"
    break;

  case 35: /* r_decl_local: %empty  */
#line 169 "./trad.y"
                                                                        { yyval.code = ""; }
#line 1602 "trad.tab.c"
    break;

  case 36: /* cuerpo: sentencia ';' cuerpo  */
#line 174 "./trad.y"
                                                                        { sprintf (temp, "%s\n\t%s", yyvsp[-2].code, yyvsp[0].code);
                                                                        yyval.code = gen_code (temp); }
#line 1609 "trad.tab.c"
    break;

  case 37: /* cuerpo: sentencia ';'  */
#line 176 "./trad.y"
                                                                        { yyval = yyvsp[-1]; }
#line 1615 "trad.tab.c"
    break;

  case 38: /* cuerpo: estructura cuerpo  */
#line 177 "./trad.y"
                                                                        { sprintf (temp, "%s\n\t%s", yyvsp[-1].code, yyvsp[0].code);
                                                                        yyval.code = gen_code (temp); }
#line 1622 "trad.tab.c"
    break;

  case 39: /* cuerpo: estructura  */
#line 179 "./trad.y"
                                                                        { yyval = yyvsp[0]; }
#line 1628 "trad.tab.c"
    break;

  case 40: /* cuerpo: RETURN expresion ';'  */
#line 180 "./trad.y"
                                                                        { yyval = yyvsp[-1]; }
#line 1634 "trad.tab.c"
    break;

  case 41: /* estructura: WHILE '(' expresion ')' '{' cuerpo_estructura '}'  */
#line 186 "./trad.y"
                        { sprintf (temp, "(loop while %s do\n\t%s)", yyvsp[-4].code, yyvsp[-1].code);
                        yyval.code = gen_code (temp); }
#line 1641 "trad.tab.c"
    break;

  case 42: /* estructura: IF '(' expresion ')' '{' cuerpo_estructura '}'  */
#line 189 "./trad.y"
                        { sprintf (temp, "(if %s\n\t%s)", yyvsp[-4].code, yyvsp[-1].code); operaciones = 1;
                        yyval.code = gen_code (temp); }
#line 1648 "trad.tab.c"
    break;

  case 43: /* estructura: IF '(' expresion ')' '{' cuerpo_estructura '}' ELSE '{' cuerpo_estructura '}'  */
#line 192 "./trad.y"
                        { sprintf (temp, "(if %s\n\t%s\n\t%s)", yyvsp[-8].code, yyvsp[-5].code, yyvsp[-1].code); operaciones = 1;
                        yyval.code = gen_code (temp); }
#line 1655 "trad.tab.c"
    break;

  case 44: /* estructura: FOR '(' declaracion_for ';' expresion ';' asignacion ')' '{' cuerpo_estructura '}'  */
#line 195 "./trad.y"
                        { sprintf (temp, "%s\n\t(loop while %s do\n\t%s\n\t%s)", yyvsp[-8].code, yyvsp[-6].code, yyvsp[-1].code, yyvsp[-4].code);
                        yyval.code = gen_code (temp); }
#line 1662 "trad.tab.c"
    break;

  case 45: /* declaracion_for: INTEGER IDENTIF valor_for r_declaracion_for  */
#line 201 "./trad.y"
                        { sprintf (temp, "(setq %s_%s %s)%s", funcion_name, yyvsp[-2].code, yyvsp[-1].code, yyvsp[0].code); 
                        yyval.code = gen_code (temp); }
#line 1669 "trad.tab.c"
    break;

  case 46: /* declaracion_for: IDENTIF valor_for r_declaracion_for  */
#line 204 "./trad.y"
                        { sprintf (temp, "(setq %s_%s %s)%s", funcion_name, yyvsp[-2].code, yyvsp[-1].code, yyvsp[0].code); 
                        yyval.code = gen_code (temp); }
#line 1676 "trad.tab.c"
    break;

  case 47: /* valor_for: %empty  */
#line 207 "./trad.y"
                                                                        { sprintf (temp, "%d", 0); 
                                                                        yyval.code = gen_code (temp);}
#line 1683 "trad.tab.c"
    break;

  case 48: /* valor_for: '=' NUMBER  */
#line 209 "./trad.y"
                                                                        { sprintf (temp, "%d", yyvsp[0].value); 
                                                                        yyval.code = gen_code (temp); }
#line 1690 "trad.tab.c"
    break;

  case 49: /* r_declaracion_for: ',' IDENTIF valor_for r_declaracion_for  */
#line 213 "./trad.y"
                        { sprintf (temp, "\n(setq %s_%s %s)%s", funcion_name, yyvsp[-2].code, yyvsp[-1].code, yyvsp[0].code); 
                        yyval.code = gen_code (temp); }
#line 1697 "trad.tab.c"
    break;

  case 50: /* r_declaracion_for: %empty  */
#line 215 "./trad.y"
                                                                        { yyval.code = ""; }
#line 1703 "trad.tab.c"
    break;

  case 51: /* cuerpo_estructura: sentencia ';'  */
#line 220 "./trad.y"
                                                                        { if (operaciones == 2) {
                                                                                yyval = yyvsp[-1];} 
                                                                        else {
                                                                                sprintf (temp, "(progn\t%s)", yyvsp[-1].code); 
                                                                                yyval.code = gen_code(temp); } }
#line 1713 "trad.tab.c"
    break;

  case 52: /* cuerpo_estructura: estructura  */
#line 225 "./trad.y"
                                                                        { yyval = yyvsp[0]; }
#line 1719 "trad.tab.c"
    break;

  case 53: /* cuerpo_estructura: sentencia ';' cuerpo_estructura  */
#line 226 "./trad.y"
                                                                        { sprintf (temp, "(progn\t%s\n\t%s)", yyvsp[-2].code, yyvsp[0].code); 
                                                                        yyval.code = gen_code (temp); }
#line 1726 "trad.tab.c"
    break;

  case 54: /* cuerpo_estructura: estructura cuerpo_estructura  */
#line 228 "./trad.y"
                                                                        { sprintf (temp, "(progn\t%s\n\t%s)", yyvsp[-1].code, yyvsp[0].code); 
                                                                        yyval.code = gen_code (temp); }
#line 1733 "trad.tab.c"
    break;

  case 55: /* cuerpo_estructura: RETURN expresion ';'  */
#line 231 "./trad.y"
                        { sprintf (temp, "(return-from %s %s)", funcion_name, yyvsp[-1].code);
                        yyval.code = gen_code (temp); }
#line 1740 "trad.tab.c"
    break;

  case 56: /* sentencia: asignacion  */
#line 234 "./trad.y"
                                                                        { yyval = yyvsp[0]; }
#line 1746 "trad.tab.c"
    break;

  case 57: /* sentencia: '@' expresion  */
#line 235 "./trad.y"
                                                                        { sprintf (temp, "(print %s)", yyvsp[0].code);  
                                                                        yyval.code = gen_code (temp); }
#line 1753 "trad.tab.c"
    break;

  case 58: /* sentencia: PUTS '(' STRING ')'  */
#line 237 "./trad.y"
                                                                        { sprintf (temp, "(print \"%s\")", yyvsp[-1].code);  
                                                                        yyval.code = gen_code (temp) ;}
#line 1760 "trad.tab.c"
    break;

  case 59: /* sentencia: PRINTF printf  */
#line 239 "./trad.y"
                                                                        { yyval.code = yyvsp[0].code; }
#line 1766 "trad.tab.c"
    break;

  case 60: /* sentencia: llamada  */
#line 240 "./trad.y"
                                                                        { yyval.code = yyvsp[0].code; }
#line 1772 "trad.tab.c"
    break;

  case 61: /* printf: '(' STRING r_printf ')'  */
#line 243 "./trad.y"
                                                                        { yyval.code = yyvsp[-1].code; }
#line 1778 "trad.tab.c"
    break;

  case 62: /* r_printf: ',' expresion r_printf  */
#line 247 "./trad.y"
                        { sprintf(temp, "(princ %s)\n\t%s", yyvsp[-1].code, yyvsp[0].code); operaciones ++; 
                        yyval.code = gen_code(temp); }
#line 1785 "trad.tab.c"
    break;

  case 63: /* r_printf: ',' STRING r_printf  */
#line 250 "./trad.y"
                        { sprintf(temp, "(princ \"%s\")\n\t%s", yyvsp[-1].code, yyvsp[0].code); operaciones ++;
                        yyval.code = gen_code(temp); }
#line 1792 "trad.tab.c"
    break;

  case 64: /* r_printf: %empty  */
#line 252 "./trad.y"
                                                                        { yyval.code = gen_code(""); }
#line 1798 "trad.tab.c"
    break;

  case 65: /* asignacion: IDENTIF '=' expresion  */
#line 258 "./trad.y"
                        { sprintf (temp, "(setf %s_%s %s)", funcion_name, yyvsp[-2].code, yyvsp[0].code); 
                        yyval.code = gen_code (temp); }
#line 1805 "trad.tab.c"
    break;

  case 66: /* asignacion: vector '=' expresion  */
#line 261 "./trad.y"
                        { sprintf (temp, "(setf %s %s)", yyvsp[-2].code, yyvsp[0].code); 
                        yyval.code = gen_code (temp); }
#line 1812 "trad.tab.c"
    break;

  case 67: /* expresion: logical_or  */
#line 266 "./trad.y"
                                                                        { yyval = yyvsp[0]; }
#line 1818 "trad.tab.c"
    break;

  case 68: /* llamada: IDENTIF '(' argumento ')'  */
#line 269 "./trad.y"
                                                                        { sprintf (temp, "(%s %s)", yyvsp[-3].code, yyvsp[-1].code); 
                                                                        yyval.code = gen_code (temp); }
#line 1825 "trad.tab.c"
    break;

  case 69: /* logical_or: logical_and  */
#line 274 "./trad.y"
                                                                        { yyval = yyvsp[0]; }
#line 1831 "trad.tab.c"
    break;

  case 70: /* logical_or: logical_or OR logical_and  */
#line 275 "./trad.y"
                                                                        { sprintf (temp, "(or %s %s)", yyvsp[-2].code, yyvsp[0].code);
                                                                        yyval.code = gen_code (temp); }
#line 1838 "trad.tab.c"
    break;

  case 71: /* logical_and: igualdad  */
#line 278 "./trad.y"
                                                                        { yyval = yyvsp[0]; }
#line 1844 "trad.tab.c"
    break;

  case 72: /* logical_and: logical_and AND igualdad  */
#line 279 "./trad.y"
                                                                        { sprintf (temp, "(and %s %s)", yyvsp[-2].code, yyvsp[0].code);
                                                                        yyval.code = gen_code (temp); }
#line 1851 "trad.tab.c"
    break;

  case 73: /* igualdad: relacional  */
#line 282 "./trad.y"
                                                                        { yyval = yyvsp[0]; }
#line 1857 "trad.tab.c"
    break;

  case 74: /* igualdad: igualdad EQ relacional  */
#line 283 "./trad.y"
                                                                        { sprintf (temp, "(= %s %s)", yyvsp[-2].code, yyvsp[0].code);
                                                                        yyval.code = gen_code (temp); }
#line 1864 "trad.tab.c"
    break;

  case 75: /* igualdad: igualdad NE relacional  */
#line 285 "./trad.y"
                                                                        { sprintf (temp, "(/= %s %s)", yyvsp[-2].code, yyvsp[0].code);
                                                                        yyval.code = gen_code (temp); }
#line 1871 "trad.tab.c"
    break;

  case 76: /* relacional: aditivo  */
#line 288 "./trad.y"
                                                                        { yyval = yyvsp[0]; }
#line 1877 "trad.tab.c"
    break;

  case 77: /* relacional: relacional '<' aditivo  */
#line 289 "./trad.y"
                                                                        { sprintf (temp, "(< %s %s)", yyvsp[-2].code, yyvsp[0].code);
                                                                        yyval.code = gen_code (temp); }
#line 1884 "trad.tab.c"
    break;

  case 78: /* relacional: relacional '>' aditivo  */
#line 291 "./trad.y"
                                                                        { sprintf (temp, "(> %s %s)", yyvsp[-2].code, yyvsp[0].code);
                                                                        yyval.code = gen_code (temp); }
#line 1891 "trad.tab.c"
    break;

  case 79: /* relacional: relacional LE aditivo  */
#line 293 "./trad.y"
                                                                        { sprintf (temp, "(<= %s %s)", yyvsp[-2].code, yyvsp[0].code);
                                                                        yyval.code = gen_code (temp); }
#line 1898 "trad.tab.c"
    break;

  case 80: /* relacional: relacional GE aditivo  */
#line 295 "./trad.y"
                                                                        { sprintf (temp, "(>= %s %s)", yyvsp[-2].code, yyvsp[0].code);
                                                                        yyval.code = gen_code (temp); }
#line 1905 "trad.tab.c"
    break;

  case 81: /* aditivo: multiplicativo  */
#line 298 "./trad.y"
                                                                        { yyval = yyvsp[0]; }
#line 1911 "trad.tab.c"
    break;

  case 82: /* aditivo: aditivo '+' multiplicativo  */
#line 299 "./trad.y"
                                                                        { sprintf (temp, "(+ %s %s)", yyvsp[-2].code, yyvsp[0].code);
                                                                        yyval.code = gen_code (temp); }
#line 1918 "trad.tab.c"
    break;

  case 83: /* aditivo: aditivo '-' multiplicativo  */
#line 301 "./trad.y"
                                                                        { sprintf (temp, "(- %s %s)", yyvsp[-2].code, yyvsp[0].code);
                                                                        yyval.code = gen_code (temp); }
#line 1925 "trad.tab.c"
    break;

  case 84: /* multiplicativo: unario  */
#line 304 "./trad.y"
                                                                        { yyval = yyvsp[0]; }
#line 1931 "trad.tab.c"
    break;

  case 85: /* multiplicativo: multiplicativo '*' unario  */
#line 305 "./trad.y"
                                                                        { sprintf (temp, "(* %s %s)", yyvsp[-2].code, yyvsp[0].code);
                                                                        yyval.code = gen_code (temp); }
#line 1938 "trad.tab.c"
    break;

  case 86: /* multiplicativo: multiplicativo '/' unario  */
#line 307 "./trad.y"
                                                                        { sprintf (temp, "(/ %s %s)", yyvsp[-2].code, yyvsp[0].code);
                                                                        yyval.code = gen_code (temp); }
#line 1945 "trad.tab.c"
    break;

  case 87: /* multiplicativo: multiplicativo '%' unario  */
#line 309 "./trad.y"
                                                                        { sprintf (temp, "(mod %s %s)", yyvsp[-2].code, yyvsp[0].code);
                                                                        yyval.code = gen_code (temp); }
#line 1952 "trad.tab.c"
    break;

  case 88: /* unario: operando  */
#line 312 "./trad.y"
                                                                        { yyval = yyvsp[0]; }
#line 1958 "trad.tab.c"
    break;

  case 89: /* unario: '!' unario  */
#line 313 "./trad.y"
                                                                        { sprintf (temp, "(not %s)", yyvsp[0].code);
                                                                        yyval.code = gen_code (temp); }
#line 1965 "trad.tab.c"
    break;

  case 90: /* unario: '+' operando  */
#line 315 "./trad.y"
                                                                        { yyval = yyvsp[0]; }
#line 1971 "trad.tab.c"
    break;

  case 91: /* unario: '-' operando  */
#line 316 "./trad.y"
                                                                        { sprintf (temp, "(- %s)", yyvsp[0].code);
                                                                        yyval.code = gen_code (temp); }
#line 1978 "trad.tab.c"
    break;

  case 92: /* operando: IDENTIF  */
#line 320 "./trad.y"
                                                                        { sprintf (temp, "%s_%s", funcion_name ,yyvsp[0].code);
                                                                        yyval.code = gen_code (temp); }
#line 1985 "trad.tab.c"
    break;

  case 93: /* operando: IDENTIF '(' argumento ')'  */
#line 322 "./trad.y"
                                                                        { sprintf (temp, "(%s %s)", yyvsp[-3].code, yyvsp[-1].code); 
                                                                        yyval.code = gen_code (temp); }
#line 1992 "trad.tab.c"
    break;

  case 94: /* operando: NUMBER  */
#line 324 "./trad.y"
                                                                        { sprintf (temp, "%d", yyvsp[0].value);
                                                                        yyval.code = gen_code (temp); }
#line 1999 "trad.tab.c"
    break;

  case 95: /* operando: '(' logical_or ')'  */
#line 326 "./trad.y"
                                                                        { yyval = yyvsp[-1]; }
#line 2005 "trad.tab.c"
    break;

  case 96: /* operando: vector  */
#line 327 "./trad.y"
                                                                        { yyval = yyvsp[0]; }
#line 2011 "trad.tab.c"
    break;

  case 97: /* vector: IDENTIF '[' logical_or ']'  */
#line 330 "./trad.y"
                                                                        { sprintf (temp, "(aref %s %s)", yyvsp[-3].code, yyvsp[-1].code);
                                                                        yyval.code = gen_code (temp); }
#line 2018 "trad.tab.c"
    break;


#line 2022 "trad.tab.c"

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

#line 333 "./trad.y"
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
    "main",         MAIN,           // y los token asociados
    "int",          INTEGER,
    "puts",         PUTS,
    "printf",       PRINTF,
    "while",        WHILE,
    "==",           EQ,
    "!=",           NE,
    "<=",           LE,
    ">=",           GE,
    "||",           OR,
    "&&",           AND,
    "if",           IF,
    "else",         ELSE,
    "for",          FOR,
    "return",       RETURN,
    NULL,           0               // para marcar el fin de la tabla
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
