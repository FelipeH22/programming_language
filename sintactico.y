%{
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
%}

%start programa

%union{
    int iVal;
    NARY_TREE tVal;
}

%token PARENTESIS_IZQ PARENTESIS_DER COMA DOSPUNTOS ASIGNA
       MAS MENOS MULT DIV MENOR MAYOR DIF IGUAL Y O NO FUNC FFUNC DEVOLVER MIENTRAS
       FMIENTRAS HACER SI SINO CASO FCASO VERDADERO FALSO ENT REAL

%token<iVal> NUM ID

%type<tVal> programa sentencias sentencia asignacion funcion parametros ciclo condicional
                caso expresion expresion_logica expresion_aritmetica operador_logico termino operador_aritmetico
                tipo_dato identificador numero


%%
programa : sentencias
           {
                NARY_TREE parseTree;
                parseTree = create_node(NOTHING, PROGRAMA, $1, NULL, NULL, NULL, NULL);
                printTree(parseTree);
           }
         ;

sentencias : sentencia  { $$ = create_node(NOTHING, SENTENCIAS, $1, NULL, NULL, NULL, NULL); }
           | sentencias sentencia  { $$ = create_node(NOTHING, SENTENCIAS, $1, $2, NULL, NULL, NULL); }
           ;

sentencia : asignacion  { $$ = create_node(NOTHING, SENTENCIA, $1, NULL, NULL, NULL, NULL);   }
          | funcion     { $$ = create_node(NOTHING, FUNCION, $1, NULL, NULL, NULL, NULL);     }
          | ciclo       { $$ = create_node(NOTHING, CICLO, $1, NULL, NULL, NULL, NULL);       }
          | condicional { $$ = create_node(NOTHING, CONDICIONAL, $1, NULL, NULL, NULL, NULL); }
          | caso        { $$ = create_node(NOTHING, CASO, $1, NULL, NULL, NULL, NULL);        }
          | expresion   { $$ = create_node(NOTHING, EXPRESION, $1, NULL, NULL, NULL, NULL);   }
          ;

asignacion : identificador ASIGNA expresion  { $$ = create_node(NOTHING, ASIGNACION, $1, $3, NULL, NULL, NULL); }
           | identificador ASIGNA numero     { $$ = create_node(NOTHING, ASIGNACION, $1, $3, NULL, NULL, NULL); }
           ;

funcion : FUNC identificador PARENTESIS_IZQ parametros PARENTESIS_DER sentencias FFUNC
          {
            $$ = create_node(NOTHING, FUNCION, $2, $4, $6, NULL, NULL);
          }
        | FUNC identificador PARENTESIS_IZQ parametros PARENTESIS_DER DEVOLVER PARENTESIS_IZQ parametros PARENTESIS_DER sentencias DEVOLVER expresion FFUNC
          {
                $$ = create_node(NOTHING, FUNCION, $2, $4, $8, $10, $12);
          }
        | FUNC identificador PARENTESIS_IZQ PARENTESIS_DER sentencias FFUNC
          {
                $$ = create_node(NOTHING, FUNCION, $2, $5, NULL, NULL, NULL);
          }
        | FUNC identificador PARENTESIS_IZQ PARENTESIS_DER DEVOLVER PARENTESIS_IZQ parametros PARENTESIS_DER sentencias DEVOLVER expresion FFUNC
          {
                $$ = create_node(NOTHING, FUNCION, $2, $7, $9, $11, NULL);
          }
        ;

parametros : identificador DOSPUNTOS tipo_dato  { $$ = create_node(NOTHING, PARAMETROS, $1, $3, NULL, NULL, NULL); }
           | parametros COMA parametros         { $$ = create_node(NOTHING, PARAMETROS, $1, $3, NULL, NULL, NULL); }
           ;

ciclo : MIENTRAS expresion HACER sentencias FMIENTRAS  { $$ = create_node(NOTHING, CICLO, $2, $4, NULL, NULL, NULL); }
      ;

condicional : SI expresion HACER sentencias SINO HACER sentencias  { $$ = create_node(NOTHING, CONDICIONAL, $2, $4, $7, NULL, NULL); }
            ;

caso : CASO expresion_logica HACER sentencias FCASO  { $$ = create_node(NOTHING, CASO, $2, $4, NULL, NULL, NULL); }
     ;

expresion : expresion_logica  { $$ = create_node(NOTHING, EXPRESION, $1, NULL, NULL, NULL, NULL); }
          | expresion_aritmetica { $$ = create_node(NOTHING, EXPRESION, $1, NULL, NULL, NULL, NULL); }
          ;

expresion_logica : expresion_logica operador_logico expresion_logica  { $$ = create_node(NOTHING, EXPRESION_LOGICA, $1, $2, $3, NULL, NULL); }
                 | expresion_aritmetica operador_logico expresion_aritmetica { $$ = create_node(NOTHING, EXPRESION_LOGICA, $1, $2, $3, NULL, NULL); }
                 | VERDADERO { $$ = create_node(VERDADERO, EXPRESION_LOGICA, NULL, NULL, NULL, NULL, NULL); }
                 | FALSO    { $$ = create_node(FALSO, EXPRESION_LOGICA, NULL, NULL, NULL, NULL, NULL); }
                 ;

operador_logico : O     { $$ = create_node(O, OPERADOR_LOGICO, NULL, NULL, NULL, NULL, NULL); }
                | Y     { $$ = create_node(Y, OPERADOR_LOGICO, NULL, NULL, NULL, NULL, NULL); }
                | NO    { $$ = create_node(NO, OPERADOR_LOGICO, NULL, NULL, NULL, NULL, NULL); }
                | MENOR { $$ = create_node(MENOR, OPERADOR_LOGICO, NULL, NULL, NULL, NULL, NULL); }
                | MAYOR { $$ = create_node(MAYOR, OPERADOR_LOGICO, NULL, NULL, NULL, NULL, NULL); }
                | IGUAL { $$ = create_node(IGUAL, OPERADOR_LOGICO, NULL, NULL, NULL, NULL, NULL); }
                | DIF   { $$ = create_node(DIF, OPERADOR_LOGICO, NULL, NULL, NULL, NULL, NULL); }
                ;

expresion_aritmetica : termino  { $$ = create_node(NOTHING, EXPRESION_ARITMETICA, $1, NULL, NULL, NULL, NULL); }
                     | termino operador_aritmetico termino  { $$ = create_node(NOTHING, EXPRESION_ARITMETICA, $1, $2, $3, NULL, NULL); }
                     | PARENTESIS_IZQ expresion_aritmetica PARENTESIS_DER operador_aritmetico PARENTESIS_IZQ expresion_aritmetica PARENTESIS_DER
                       {
                            $$ = create_node(NOTHING, EXPRESION_ARITMETICA, $2, $4, $6, NULL, NULL);
                       }
                     ;

termino : identificador { $$ = create_node(NOTHING, TERMINO, $1, NULL, NULL, NULL, NULL); }
        | numero        { $$ = create_node(NOTHING, TERMINO, $1, NULL, NULL, NULL, NULL); }
        ;

operador_aritmetico : MAS   { $$ = create_node(MAS, OPERADOR_ARITMETICO, NULL, NULL, NULL, NULL, NULL);   }
                    | MENOS { $$ = create_node(MENOS, OPERADOR_ARITMETICO, NULL, NULL, NULL, NULL, NULL); }
                    | MULT  { $$ = create_node(MULT, OPERADOR_ARITMETICO, NULL, NULL, NULL, NULL, NULL);  }
                    | DIV   { $$ = create_node(DIV, OPERADOR_ARITMETICO, NULL, NULL, NULL, NULL, NULL);   }
                    ;

tipo_dato : ENT     { $$ = create_node(ENT, TIPO_DATO, NULL, NULL, NULL, NULL, NULL); }
          | REAL    { $$ = create_node(REAL, TIPO_DATO, NULL, NULL, NULL, NULL, NULL); }
          ;

identificador : ID  { $$ = create_node($1, ID_VALUE, NULL, NULL, NULL, NULL, NULL); }
              ;

numero : NUM  { $$ = create_node($1, NUMBER_VALUE, NULL, NULL, NULL, NULL, NULL); }
       ;

%%

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