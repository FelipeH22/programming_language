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
#line 1 "sintactico.y"

    #include <stdio.h>
    #include <stdlib.h>

    #define YYDEBUG 1

    #define SYMTABSIZE 300
    #define IDLENGTH 15
    #define NOTHING -1
    #define INDENTOFFSET 2

    enum ParseTreeNodeType {PROGRAMA, SENTENCIAS, SENTENCIA, ASIGNACION, FUNCION, PARAMETROS, CICLO, CONDICIONAL,
    EXPRESION, EXPRESION_LOGICA, EXPRESION_ARITMETICA, OPERADOR_LOGICO, TERMINO, OPERADOR_ARITMETICO,
    TIPO_DATO, ID_VALUE, NUMBER_VALUE};

    char *NodeName[] = {"PROGRAMA", "SENTENCIAS", "SENTENCIA", "ASIGNACION", "FUNCION", "PARAMETROS", "CICLO", "CONDICIONAL",
                            "EXPRESION", "EXPRESION_LOGICA", "EXPRESION_ARITMETICA", "OPERADOR_LOGICO", "TERMINO", "OPERADOR_ARITMETICO",
                            "TIPO_DATO", "ID_VALUE", "NUMBER_VALUE"};

    #ifndef TRUE
    #define TRUE 1
    #endif

    #ifndef FALSE
    #define FALSE 0
    #endif

    #ifndef NULL
    #define NULL 0
    #endif

    struct treeNode
    {
        int item;
        int nodeIdentifier;
        struct treeNode *first;
        struct treeNode *second;
        struct treeNode *third;
        struct treeNode *fourth;
        struct treeNode *fifth;
    };
    typedef struct treeNode TREE_NODE;
    typedef TREE_NODE *NARY_TREE;

    NARY_TREE create_node(int, int, NARY_TREE, NARY_TREE, NARY_TREE, NARY_TREE, NARY_TREE);
    void printTree(NARY_TREE);

    struct symTabNode {
        char identifier[IDLENGTH]
    };
    typedef struct symTabNode SYMTABNODE;
    typedef SYMTABNODE *SYMTABNODEPTR;

    SYMTABNODEPTR symTab[SYMTABSIZE];
    int currentSymTabSize = 0;

#line 128 "sintactico.tab.c"

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

#include "sintactico.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_PARENTESIS_IZQ = 3,             /* PARENTESIS_IZQ  */
  YYSYMBOL_PARENTESIS_DER = 4,             /* PARENTESIS_DER  */
  YYSYMBOL_COMA = 5,                       /* COMA  */
  YYSYMBOL_DOSPUNTOS = 6,                  /* DOSPUNTOS  */
  YYSYMBOL_ASIGNA = 7,                     /* ASIGNA  */
  YYSYMBOL_MAS = 8,                        /* MAS  */
  YYSYMBOL_MENOS = 9,                      /* MENOS  */
  YYSYMBOL_MULT = 10,                      /* MULT  */
  YYSYMBOL_DIV = 11,                       /* DIV  */
  YYSYMBOL_MENOR = 12,                     /* MENOR  */
  YYSYMBOL_MAYOR = 13,                     /* MAYOR  */
  YYSYMBOL_DIF = 14,                       /* DIF  */
  YYSYMBOL_IGUAL = 15,                     /* IGUAL  */
  YYSYMBOL_Y = 16,                         /* Y  */
  YYSYMBOL_O = 17,                         /* O  */
  YYSYMBOL_NO = 18,                        /* NO  */
  YYSYMBOL_FUNC = 19,                      /* FUNC  */
  YYSYMBOL_FFUNC = 20,                     /* FFUNC  */
  YYSYMBOL_DEVOLVER = 21,                  /* DEVOLVER  */
  YYSYMBOL_MIENTRAS = 22,                  /* MIENTRAS  */
  YYSYMBOL_FMIENTRAS = 23,                 /* FMIENTRAS  */
  YYSYMBOL_HACER = 24,                     /* HACER  */
  YYSYMBOL_SI = 25,                        /* SI  */
  YYSYMBOL_SINO = 26,                      /* SINO  */
  YYSYMBOL_CASO = 27,                      /* CASO  */
  YYSYMBOL_FCASO = 28,                     /* FCASO  */
  YYSYMBOL_VERDADERO = 29,                 /* VERDADERO  */
  YYSYMBOL_FALSO = 30,                     /* FALSO  */
  YYSYMBOL_ENT = 31,                       /* ENT  */
  YYSYMBOL_REAL = 32,                      /* REAL  */
  YYSYMBOL_NUM = 33,                       /* NUM  */
  YYSYMBOL_ID = 34,                        /* ID  */
  YYSYMBOL_YYACCEPT = 35,                  /* $accept  */
  YYSYMBOL_programa = 36,                  /* programa  */
  YYSYMBOL_sentencias = 37,                /* sentencias  */
  YYSYMBOL_sentencia = 38,                 /* sentencia  */
  YYSYMBOL_asignacion = 39,                /* asignacion  */
  YYSYMBOL_funcion = 40,                   /* funcion  */
  YYSYMBOL_parametros = 41,                /* parametros  */
  YYSYMBOL_ciclo = 42,                     /* ciclo  */
  YYSYMBOL_condicional = 43,               /* condicional  */
  YYSYMBOL_caso = 44,                      /* caso  */
  YYSYMBOL_expresion = 45,                 /* expresion  */
  YYSYMBOL_expresion_logica = 46,          /* expresion_logica  */
  YYSYMBOL_operador_logico = 47,           /* operador_logico  */
  YYSYMBOL_expresion_aritmetica = 48,      /* expresion_aritmetica  */
  YYSYMBOL_termino = 49,                   /* termino  */
  YYSYMBOL_operador_aritmetico = 50,       /* operador_aritmetico  */
  YYSYMBOL_tipo_dato = 51,                 /* tipo_dato  */
  YYSYMBOL_identificador = 52,             /* identificador  */
  YYSYMBOL_numero = 53                     /* numero  */
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
typedef yytype_int8 yy_state_t;

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
#define YYFINAL  31
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   292

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  47
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  100

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   289


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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    77,    77,    85,    86,    89,    90,    91,    92,    93,
      94,    97,    98,   101,   105,   109,   113,   119,   120,   123,
     126,   129,   132,   133,   136,   137,   138,   139,   142,   143,
     144,   145,   146,   147,   148,   151,   152,   153,   159,   160,
     163,   164,   165,   166,   169,   170,   173,   176
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
  "\"end of file\"", "error", "\"invalid token\"", "PARENTESIS_IZQ",
  "PARENTESIS_DER", "COMA", "DOSPUNTOS", "ASIGNA", "MAS", "MENOS", "MULT",
  "DIV", "MENOR", "MAYOR", "DIF", "IGUAL", "Y", "O", "NO", "FUNC", "FFUNC",
  "DEVOLVER", "MIENTRAS", "FMIENTRAS", "HACER", "SI", "SINO", "CASO",
  "FCASO", "VERDADERO", "FALSO", "ENT", "REAL", "NUM", "ID", "$accept",
  "programa", "sentencias", "sentencia", "asignacion", "funcion",
  "parametros", "ciclo", "condicional", "caso", "expresion",
  "expresion_logica", "operador_logico", "expresion_aritmetica", "termino",
  "operador_aritmetico", "tipo_dato", "identificador", "numero", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-60)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-40)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     240,     2,   -23,    25,    25,    25,   -60,   -60,   -60,   -60,
      19,   240,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   274,
     274,   143,    24,   -60,    22,   -60,    40,    23,    27,    66,
     274,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
      25,     2,   -60,   -60,   -60,   -60,   -19,    25,   143,     8,
     240,   240,   240,   274,   -60,   -60,   -60,   267,    46,    83,
      17,    51,   103,   116,   136,     2,    57,   153,   171,   -23,
      -2,   -60,    37,   -60,    59,   -23,   -60,    63,   188,    62,
     -60,   -60,   -60,   240,   -60,    29,   -23,   -60,   240,   240,
      33,   206,   240,    25,   223,    49,    25,   -60,    50,   -60
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,    26,    27,    47,    46,
       0,     2,     3,     5,     6,     7,     8,     9,    10,    22,
      23,    35,    38,    39,     0,    38,     0,     0,     0,     0,
       0,     1,     4,    31,    32,    34,    33,    29,    28,    30,
       0,     0,    40,    41,    42,    43,     0,     0,     0,     0,
       0,     0,     0,    24,    25,    36,    11,    12,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    19,     0,    21,     0,     0,    15,     0,     0,    18,
      44,    45,    17,     0,    37,     0,     0,    13,    20,     0,
       0,     0,     0,     0,     0,     0,     0,    16,     0,    14
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -60,   -60,   -27,     9,   -60,   -60,   -59,   -60,   -60,   -60,
       3,     4,   -12,    12,    42,    41,   -60,    -1,    28
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,    10,    11,    12,    13,    14,    60,    15,    16,    17,
      18,    19,    40,    20,    21,    46,    82,    22,    23
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      25,    26,    25,    25,    25,     1,    27,    28,    41,    29,
      79,     9,    59,    24,     8,     9,    85,    30,    41,    31,
      32,    68,    69,    62,    63,    64,    48,    90,     1,    80,
      81,    47,    67,    89,    69,     8,     9,    92,    69,    25,
      25,    78,     9,    49,    53,    25,    25,    50,    61,    65,
      56,    51,    30,    54,     6,     7,    88,    70,     8,     9,
      75,    83,    91,    84,    25,    94,    86,    69,    61,    97,
      99,    32,    32,    32,    61,    57,    32,    74,    33,    34,
      35,    36,    37,    38,    39,    61,     1,    32,    55,    58,
      52,     0,    25,     0,     0,    25,    95,    32,     0,    98,
      32,     0,     2,    32,    66,     3,     1,     0,     4,     0,
       5,     0,     6,     7,     0,     0,     8,     9,     0,     1,
       0,     0,     2,     0,     0,     3,    71,     0,     4,     0,
       5,     0,     6,     7,     0,     2,     8,     9,     3,     1,
       0,     4,    72,     5,     0,     6,     7,     0,     0,     8,
       9,    42,    43,    44,    45,     2,     1,     0,     3,     0,
       0,     4,     0,     5,    73,     6,     7,     0,     0,     8,
       9,     0,     2,    76,     1,     3,     0,     0,     4,     0,
       5,     0,     6,     7,     0,     0,     8,     9,     0,     0,
       2,     1,    77,     3,     0,     0,     4,     0,     5,     0,
       6,     7,     0,     0,     8,     9,     0,     2,    87,     1,
       3,     0,     0,     4,     0,     5,     0,     6,     7,     0,
       0,     8,     9,     0,     0,     2,     1,    93,     3,     0,
       0,     4,     0,     5,     0,     6,     7,     0,     0,     8,
       9,     0,     2,     1,    96,     3,     0,     0,     4,     0,
       5,     0,     6,     7,     0,     0,     8,     9,     0,     2,
       0,     0,     3,     0,     0,     4,     0,     5,     0,     6,
       7,     0,     0,     8,     9,   -39,   -39,   -39,   -39,   -39,
     -39,   -39,   -39,   -39,   -39,   -39,    33,    34,    35,    36,
      37,    38,    39
};

static const yytype_int8 yycheck[] =
{
       1,     2,     3,     4,     5,     3,     3,     4,    20,     5,
      69,    34,     4,     1,    33,    34,    75,     5,    30,     0,
      11,     4,     5,    50,    51,    52,     4,    86,     3,    31,
      32,     7,    59,     4,     5,    33,    34,     4,     5,    40,
      41,    68,    34,     3,    40,    46,    47,    24,    49,     3,
      47,    24,    40,    41,    29,    30,    83,     6,    33,    34,
       3,    24,    89,     4,    65,    92,     3,     5,    69,    20,
      20,    62,    63,    64,    75,    47,    67,    65,    12,    13,
      14,    15,    16,    17,    18,    86,     3,    78,    46,    48,
      24,    -1,    93,    -1,    -1,    96,    93,    88,    -1,    96,
      91,    -1,    19,    94,    21,    22,     3,    -1,    25,    -1,
      27,    -1,    29,    30,    -1,    -1,    33,    34,    -1,     3,
      -1,    -1,    19,    -1,    -1,    22,    23,    -1,    25,    -1,
      27,    -1,    29,    30,    -1,    19,    33,    34,    22,     3,
      -1,    25,    26,    27,    -1,    29,    30,    -1,    -1,    33,
      34,     8,     9,    10,    11,    19,     3,    -1,    22,    -1,
      -1,    25,    -1,    27,    28,    29,    30,    -1,    -1,    33,
      34,    -1,    19,    20,     3,    22,    -1,    -1,    25,    -1,
      27,    -1,    29,    30,    -1,    -1,    33,    34,    -1,    -1,
      19,     3,    21,    22,    -1,    -1,    25,    -1,    27,    -1,
      29,    30,    -1,    -1,    33,    34,    -1,    19,    20,     3,
      22,    -1,    -1,    25,    -1,    27,    -1,    29,    30,    -1,
      -1,    33,    34,    -1,    -1,    19,     3,    21,    22,    -1,
      -1,    25,    -1,    27,    -1,    29,    30,    -1,    -1,    33,
      34,    -1,    19,     3,    21,    22,    -1,    -1,    25,    -1,
      27,    -1,    29,    30,    -1,    -1,    33,    34,    -1,    19,
      -1,    -1,    22,    -1,    -1,    25,    -1,    27,    -1,    29,
      30,    -1,    -1,    33,    34,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    12,    13,    14,    15,
      16,    17,    18
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    19,    22,    25,    27,    29,    30,    33,    34,
      36,    37,    38,    39,    40,    42,    43,    44,    45,    46,
      48,    49,    52,    53,    48,    52,    52,    45,    45,    46,
      48,     0,    38,    12,    13,    14,    15,    16,    17,    18,
      47,    47,     8,     9,    10,    11,    50,     7,     4,     3,
      24,    24,    24,    46,    48,    49,    45,    53,    50,     4,
      41,    52,    37,    37,    37,     3,    21,    37,     4,     5,
       6,    23,    26,    28,    48,     3,    20,    21,    37,    41,
      31,    32,    51,    24,     4,    41,     3,    20,    37,     4,
      41,    37,     4,    21,    37,    45,    21,    20,    45,    20
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    35,    36,    37,    37,    38,    38,    38,    38,    38,
      38,    39,    39,    40,    40,    40,    40,    41,    41,    42,
      43,    44,    45,    45,    46,    46,    46,    46,    47,    47,
      47,    47,    47,    47,    47,    48,    48,    48,    49,    49,
      50,    50,    50,    50,    51,    51,    52,    53
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     3,     3,     7,    13,     6,    12,     3,     3,     5,
       7,     5,     1,     1,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     7,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1
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
  case 2: /* programa: sentencias  */
#line 78 "sintactico.y"
           {
                NARY_TREE parseTree;
                parseTree = create_node(NOTHING, PROGRAMA, (yyvsp[0].tVal), NULL, NULL, NULL, NULL);
                printTree(parseTree);
           }
#line 1267 "sintactico.tab.c"
    break;

  case 3: /* sentencias: sentencia  */
#line 85 "sintactico.y"
                        { (yyval.tVal) = create_node(NOTHING, SENTENCIAS, (yyvsp[0].tVal), NULL, NULL, NULL, NULL); }
#line 1273 "sintactico.tab.c"
    break;

  case 4: /* sentencias: sentencias sentencia  */
#line 86 "sintactico.y"
                                   { (yyval.tVal) = create_node(NOTHING, SENTENCIAS, (yyvsp[-1].tVal), (yyvsp[0].tVal), NULL, NULL, NULL); }
#line 1279 "sintactico.tab.c"
    break;

  case 5: /* sentencia: asignacion  */
#line 89 "sintactico.y"
                        { (yyval.tVal) = create_node(NOTHING, SENTENCIA, (yyvsp[0].tVal), NULL, NULL, NULL, NULL);   }
#line 1285 "sintactico.tab.c"
    break;

  case 6: /* sentencia: funcion  */
#line 90 "sintactico.y"
                        { (yyval.tVal) = create_node(NOTHING, FUNCION, (yyvsp[0].tVal), NULL, NULL, NULL, NULL);     }
#line 1291 "sintactico.tab.c"
    break;

  case 7: /* sentencia: ciclo  */
#line 91 "sintactico.y"
                        { (yyval.tVal) = create_node(NOTHING, CICLO, (yyvsp[0].tVal), NULL, NULL, NULL, NULL);       }
#line 1297 "sintactico.tab.c"
    break;

  case 8: /* sentencia: condicional  */
#line 92 "sintactico.y"
                        { (yyval.tVal) = create_node(NOTHING, CONDICIONAL, (yyvsp[0].tVal), NULL, NULL, NULL, NULL); }
#line 1303 "sintactico.tab.c"
    break;

  case 9: /* sentencia: caso  */
#line 93 "sintactico.y"
                        { (yyval.tVal) = create_node(NOTHING, CASO, (yyvsp[0].tVal), NULL, NULL, NULL, NULL);        }
#line 1309 "sintactico.tab.c"
    break;

  case 10: /* sentencia: expresion  */
#line 94 "sintactico.y"
                        { (yyval.tVal) = create_node(NOTHING, EXPRESION, (yyvsp[0].tVal), NULL, NULL, NULL, NULL);   }
#line 1315 "sintactico.tab.c"
    break;

  case 11: /* asignacion: identificador ASIGNA expresion  */
#line 97 "sintactico.y"
                                             { (yyval.tVal) = create_node(NOTHING, ASIGNACION, (yyvsp[-2].tVal), (yyvsp[0].tVal), NULL, NULL, NULL); }
#line 1321 "sintactico.tab.c"
    break;

  case 12: /* asignacion: identificador ASIGNA numero  */
#line 98 "sintactico.y"
                                             { (yyval.tVal) = create_node(NOTHING, ASIGNACION, (yyvsp[-2].tVal), (yyvsp[0].tVal), NULL, NULL, NULL); }
#line 1327 "sintactico.tab.c"
    break;

  case 13: /* funcion: FUNC identificador PARENTESIS_IZQ parametros PARENTESIS_DER sentencias FFUNC  */
#line 102 "sintactico.y"
          {
            (yyval.tVal) = create_node(NOTHING, FUNCION, (yyvsp[-5].tVal), (yyvsp[-3].tVal), (yyvsp[-1].tVal), NULL, NULL);
          }
#line 1335 "sintactico.tab.c"
    break;

  case 14: /* funcion: FUNC identificador PARENTESIS_IZQ parametros PARENTESIS_DER DEVOLVER PARENTESIS_IZQ parametros PARENTESIS_DER sentencias DEVOLVER expresion FFUNC  */
#line 106 "sintactico.y"
          {
                (yyval.tVal) = create_node(NOTHING, FUNCION, (yyvsp[-11].tVal), (yyvsp[-9].tVal), (yyvsp[-5].tVal), (yyvsp[-3].tVal), (yyvsp[-1].tVal));
          }
#line 1343 "sintactico.tab.c"
    break;

  case 15: /* funcion: FUNC identificador PARENTESIS_IZQ PARENTESIS_DER sentencias FFUNC  */
#line 110 "sintactico.y"
          {
                (yyval.tVal) = create_node(NOTHING, FUNCION, (yyvsp[-4].tVal), (yyvsp[-1].tVal), NULL, NULL, NULL);
          }
#line 1351 "sintactico.tab.c"
    break;

  case 16: /* funcion: FUNC identificador PARENTESIS_IZQ PARENTESIS_DER DEVOLVER PARENTESIS_IZQ parametros PARENTESIS_DER sentencias DEVOLVER expresion FFUNC  */
#line 114 "sintactico.y"
          {
                (yyval.tVal) = create_node(NOTHING, FUNCION, (yyvsp[-10].tVal), (yyvsp[-5].tVal), (yyvsp[-3].tVal), (yyvsp[-1].tVal), NULL);
          }
#line 1359 "sintactico.tab.c"
    break;

  case 17: /* parametros: identificador DOSPUNTOS tipo_dato  */
#line 119 "sintactico.y"
                                                { (yyval.tVal) = create_node(NOTHING, PARAMETROS, (yyvsp[-2].tVal), (yyvsp[0].tVal), NULL, NULL, NULL); }
#line 1365 "sintactico.tab.c"
    break;

  case 18: /* parametros: parametros COMA parametros  */
#line 120 "sintactico.y"
                                                { (yyval.tVal) = create_node(NOTHING, PARAMETROS, (yyvsp[-2].tVal), (yyvsp[0].tVal), NULL, NULL, NULL); }
#line 1371 "sintactico.tab.c"
    break;

  case 19: /* ciclo: MIENTRAS expresion HACER sentencias FMIENTRAS  */
#line 123 "sintactico.y"
                                                       { (yyval.tVal) = create_node(NOTHING, CICLO, (yyvsp[-3].tVal), (yyvsp[-1].tVal), NULL, NULL, NULL); }
#line 1377 "sintactico.tab.c"
    break;

  case 20: /* condicional: SI expresion HACER sentencias SINO HACER sentencias  */
#line 126 "sintactico.y"
                                                                   { (yyval.tVal) = create_node(NOTHING, CONDICIONAL, (yyvsp[-5].tVal), (yyvsp[-3].tVal), (yyvsp[0].tVal), NULL, NULL); }
#line 1383 "sintactico.tab.c"
    break;

  case 21: /* caso: CASO expresion_logica HACER sentencias FCASO  */
#line 129 "sintactico.y"
                                                     { (yyval.tVal) = create_node(NOTHING, CASO, (yyvsp[-3].tVal), (yyvsp[-1].tVal), NULL, NULL, NULL); }
#line 1389 "sintactico.tab.c"
    break;

  case 22: /* expresion: expresion_logica  */
#line 132 "sintactico.y"
                              { (yyval.tVal) = create_node(NOTHING, EXPRESION, (yyvsp[0].tVal), NULL, NULL, NULL, NULL); }
#line 1395 "sintactico.tab.c"
    break;

  case 23: /* expresion: expresion_aritmetica  */
#line 133 "sintactico.y"
                                 { (yyval.tVal) = create_node(NOTHING, EXPRESION, (yyvsp[0].tVal), NULL, NULL, NULL, NULL); }
#line 1401 "sintactico.tab.c"
    break;

  case 24: /* expresion_logica: expresion_logica operador_logico expresion_logica  */
#line 136 "sintactico.y"
                                                                      { (yyval.tVal) = create_node(NOTHING, EXPRESION_LOGICA, (yyvsp[-2].tVal), (yyvsp[-1].tVal), (yyvsp[0].tVal), NULL, NULL); }
#line 1407 "sintactico.tab.c"
    break;

  case 25: /* expresion_logica: expresion_aritmetica operador_logico expresion_aritmetica  */
#line 137 "sintactico.y"
                                                                             { (yyval.tVal) = create_node(NOTHING, EXPRESION_LOGICA, (yyvsp[-2].tVal), (yyvsp[-1].tVal), (yyvsp[0].tVal), NULL, NULL); }
#line 1413 "sintactico.tab.c"
    break;

  case 26: /* expresion_logica: VERDADERO  */
#line 138 "sintactico.y"
                             { (yyval.tVal) = create_node(VERDADERO, EXPRESION_LOGICA, NULL, NULL, NULL, NULL, NULL); }
#line 1419 "sintactico.tab.c"
    break;

  case 27: /* expresion_logica: FALSO  */
#line 139 "sintactico.y"
                            { (yyval.tVal) = create_node(FALSO, EXPRESION_LOGICA, NULL, NULL, NULL, NULL, NULL); }
#line 1425 "sintactico.tab.c"
    break;

  case 28: /* operador_logico: O  */
#line 142 "sintactico.y"
                        { (yyval.tVal) = create_node(O, OPERADOR_LOGICO, NULL, NULL, NULL, NULL, NULL); }
#line 1431 "sintactico.tab.c"
    break;

  case 29: /* operador_logico: Y  */
#line 143 "sintactico.y"
                        { (yyval.tVal) = create_node(Y, OPERADOR_LOGICO, NULL, NULL, NULL, NULL, NULL); }
#line 1437 "sintactico.tab.c"
    break;

  case 30: /* operador_logico: NO  */
#line 144 "sintactico.y"
                        { (yyval.tVal) = create_node(NO, OPERADOR_LOGICO, NULL, NULL, NULL, NULL, NULL); }
#line 1443 "sintactico.tab.c"
    break;

  case 31: /* operador_logico: MENOR  */
#line 145 "sintactico.y"
                        { (yyval.tVal) = create_node(MENOR, OPERADOR_LOGICO, NULL, NULL, NULL, NULL, NULL); }
#line 1449 "sintactico.tab.c"
    break;

  case 32: /* operador_logico: MAYOR  */
#line 146 "sintactico.y"
                        { (yyval.tVal) = create_node(MAYOR, OPERADOR_LOGICO, NULL, NULL, NULL, NULL, NULL); }
#line 1455 "sintactico.tab.c"
    break;

  case 33: /* operador_logico: IGUAL  */
#line 147 "sintactico.y"
                        { (yyval.tVal) = create_node(IGUAL, OPERADOR_LOGICO, NULL, NULL, NULL, NULL, NULL); }
#line 1461 "sintactico.tab.c"
    break;

  case 34: /* operador_logico: DIF  */
#line 148 "sintactico.y"
                        { (yyval.tVal) = create_node(DIF, OPERADOR_LOGICO, NULL, NULL, NULL, NULL, NULL); }
#line 1467 "sintactico.tab.c"
    break;

  case 35: /* expresion_aritmetica: termino  */
#line 151 "sintactico.y"
                                { (yyval.tVal) = create_node(NOTHING, EXPRESION_ARITMETICA, (yyvsp[0].tVal), NULL, NULL, NULL, NULL); }
#line 1473 "sintactico.tab.c"
    break;

  case 36: /* expresion_aritmetica: termino operador_aritmetico termino  */
#line 152 "sintactico.y"
                                                            { (yyval.tVal) = create_node(NOTHING, EXPRESION_ARITMETICA, (yyvsp[-2].tVal), (yyvsp[-1].tVal), (yyvsp[0].tVal), NULL, NULL); }
#line 1479 "sintactico.tab.c"
    break;

  case 37: /* expresion_aritmetica: PARENTESIS_IZQ expresion_aritmetica PARENTESIS_DER operador_aritmetico PARENTESIS_IZQ expresion_aritmetica PARENTESIS_DER  */
#line 154 "sintactico.y"
                       {
                            (yyval.tVal) = create_node(NOTHING, EXPRESION_ARITMETICA, (yyvsp[-5].tVal), (yyvsp[-3].tVal), (yyvsp[-1].tVal), NULL, NULL);
                       }
#line 1487 "sintactico.tab.c"
    break;

  case 38: /* termino: identificador  */
#line 159 "sintactico.y"
                        { (yyval.tVal) = create_node(NOTHING, TERMINO, (yyvsp[0].tVal), NULL, NULL, NULL, NULL); }
#line 1493 "sintactico.tab.c"
    break;

  case 39: /* termino: numero  */
#line 160 "sintactico.y"
                        { (yyval.tVal) = create_node(NOTHING, TERMINO, (yyvsp[0].tVal), NULL, NULL, NULL, NULL); }
#line 1499 "sintactico.tab.c"
    break;

  case 40: /* operador_aritmetico: MAS  */
#line 163 "sintactico.y"
                            { (yyval.tVal) = create_node(MAS, OPERADOR_ARITMETICO, NULL, NULL, NULL, NULL, NULL);   }
#line 1505 "sintactico.tab.c"
    break;

  case 41: /* operador_aritmetico: MENOS  */
#line 164 "sintactico.y"
                            { (yyval.tVal) = create_node(MENOS, OPERADOR_ARITMETICO, NULL, NULL, NULL, NULL, NULL); }
#line 1511 "sintactico.tab.c"
    break;

  case 42: /* operador_aritmetico: MULT  */
#line 165 "sintactico.y"
                            { (yyval.tVal) = create_node(MULT, OPERADOR_ARITMETICO, NULL, NULL, NULL, NULL, NULL);  }
#line 1517 "sintactico.tab.c"
    break;

  case 43: /* operador_aritmetico: DIV  */
#line 166 "sintactico.y"
                            { (yyval.tVal) = create_node(DIV, OPERADOR_ARITMETICO, NULL, NULL, NULL, NULL, NULL);   }
#line 1523 "sintactico.tab.c"
    break;

  case 44: /* tipo_dato: ENT  */
#line 169 "sintactico.y"
                    { (yyval.tVal) = create_node(ENT, TIPO_DATO, NULL, NULL, NULL, NULL, NULL); }
#line 1529 "sintactico.tab.c"
    break;

  case 45: /* tipo_dato: REAL  */
#line 170 "sintactico.y"
                    { (yyval.tVal) = create_node(REAL, TIPO_DATO, NULL, NULL, NULL, NULL, NULL); }
#line 1535 "sintactico.tab.c"
    break;

  case 46: /* identificador: ID  */
#line 173 "sintactico.y"
                    { (yyval.tVal) = create_node((yyvsp[0].iVal), ID_VALUE, NULL, NULL, NULL, NULL, NULL); }
#line 1541 "sintactico.tab.c"
    break;

  case 47: /* numero: NUM  */
#line 176 "sintactico.y"
              { (yyval.tVal) = create_node((yyvsp[0].iVal), NUMBER_VALUE, NULL, NULL, NULL, NULL, NULL); }
#line 1547 "sintactico.tab.c"
    break;


#line 1551 "sintactico.tab.c"

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

#line 179 "sintactico.y"


NARY_TREE create_node(int ival, int case_identifier, NARY_TREE p1, NARY_TREE p2, NARY_TREE p3, NARY_TREE p4, NARY_TREE p5)
{
    NARY_TREE t;
    t = (NARY_TREE)malloc(sizeof(TREE_NODE));
    t->item = ival;
    t->nodeIdentifier = case_identifier;
    t->first = p1;
    t->second = p2;
    t->third = p3;
    t->fourth = p4;
    t->fifth = p5;
    return(t);
}

void printTree(NARY_TREE t)
{
    if (t == NULL) return;
    if (t->item != NOTHING)
    {
        if (t->nodeIdentifier == NUMBER_VALUE)
            printf("Número: %d", t->item);
        else if (t->nodeIdentifier == ID_VALUE)
            if (t->item > 0 && t->item < SYMTABSIZE)
                printf("Identifcador: %s ", symTab[t->item]->identifier);
            else printf("Identificador desconocido %d", t->item);
    }
    if (t->nodeIdentifier < 0 || t->nodeIdentifier > sizeof(NodeName))
        printf("identificadorNodo Desconocido: %d\n", t->nodeIdentifier);
    else
        printf("identificadorNodo: %s\n", NodeName[t->nodeIdentifier]);
    printTree(t->first);
    printTree(t->second);
    printTree(t->third);
    printTree(t->fourth);
    printTree(t->fifth);
}


#include "lex.yy.c"

main(int argc, char *argv[])
{
    extern FILE *yyin;
    ++argv; --argc;
    yyin = fopen( argv[0], "r" );
    //yydebug = 1;
    yyparse ();
    printf ("Parse Completed\n");
}

yyerror (char *s) /* Called by yyparse on error */
{
    printf ("%s\n", s);
}
