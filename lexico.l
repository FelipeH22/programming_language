%{
    #include <strings.h>
    #include <stdlib.h>
    extern SYMTABNODEPTR symTab[SYMTABSIZE];
    extern int currentSymTabSize;
%}

DIGITO [0-9]
LETRA [a-zA-Z]
ID {LETRA}({LETRA}|{DIGITO})*
ENTERO {DIGITO}+
DECIMAL ({DIGITO}+\.{DIGITO}+)|({DIGITO}+\.)|(\.{DIGITO}+)
ESPACIO [ \t\n]+

%%
"("                 { return(PARENTESIS_IZQ);                       }
")"                 { return(PARENTESIS_DER);                       }
","                 { return(COMA);                                 }
":"                 { return(DOSPUNTOS) ;                           }
":="                { return(ASIGNA);                               }
"+"                 { return(MAS);                                  }
"-"                 { return(MENOS);                                }
"*"                 { return(MULT);                                 }
"/"                 { return(DIV);                                  }
"<"                 { return(MENOR);                                }
">"                 { return(MAYOR);                                }
"!="                { return(DIF);                                  }
"=="                { return(IGUAL);                                }
"y"                 { return(Y);                                    }
"o"                 { return(O);                                    }
"no"                { return(NO);                                   }
fun                 { return(FUNC);                                 }
ffun                { return(FFUNC);                                }
dev                 { return(DEVOLVER);                             }
mientras            { return(MIENTRAS);                             }
fmientras           { return(FMIENTRAS);                            }
hacer               { return(HACER);                                }
si                  { return(SI);                                   }
sino                { return(SINO);                                 }
caso                { return(CASO);                                 }
fcaso               { return(FCASO);                                }
verdadero           { return(VERDADERO);                            }
falso               { return(FALSO);                                }
entero              { return(ENT);                                  }
real                { return(REAL);                                 }
{ENTERO}            { yylval.iVal = atoi(yytext); return(NUM);      }
{DECIMAL}           { yylval.iVal = atof(yytext); return(NUM);      }
{ID}                { yylval.iVal = installId(yytext); return(ID);  }
{ESPACIO}           /* Ignorar espacios en blanco y saltos         */
.                   { return(yytext[0]);                            }
%%

SYMTABNODEPTR newSymTabNode()
{
    return ((SYMTABNODEPTR)malloc(sizeof(SYMTABNODE)));
}

int installId(char *id, int type)
{
    extern SYMTABNODEPTR symTab[SYMTABSIZE];
    extern int currentSymTabSize;
    int index;

    index = lookup(id);
    if (index >= 0)
    {
        return (index);
    }
    else if (currentSymTabSize >= SYMTABSIZE)
	{
          /* SYMTAB is full */
          return (NOTHING) ;
	}
    else
    {
       symTab[currentSymTabSize] = newSymTabNode();
       /* Recommended code for preventing buffer overrun on bounded strings */
       strncpy(symTab[currentSymTabSize]->identifier,id,IDLENGTH);
       symTab[currentSymTabSize]->identifier[IDLENGTH-1] = '\O';
       return(currentSymTabSize++);
    }
}

int lookup(char *s)
{
    extern SYMTABNODEPTR symTab[SYMTABSIZE];
    extern int currentSymTabSize;
    int i;

    for(i=0; i<currentSymTabSize; i++){
        if(strncmp(s, symTab[i]->identifier,IDLENGTH)==0)
        {
            return(i);
        }
    }
    return(-1);
}