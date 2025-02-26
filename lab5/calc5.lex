%{                            /* Primera Seccion */
#include "calc52.tab.h"        /* Cabecera con decl. de token etc. */
extern int n_linea;
%}
%%                            /* Segunda Seccion */
[ \t]                    { ; } /* ignorar espacios y tabuladores */
[0-9]+\.?|[0-9]*\.[0-9]+ { sscanf (yytext, "%lf", &yylval); return (NUMERO); }
[A-Z]   { sscanf (yytext, "%c", &yylval); yylval.indice += 26 - 'A' ; return (VARIABLE);}
[a-z]   { sscanf (yytext, "%c", &yylval); yylval.indice -= 'a' ;return (VARIABLE);}
=                      { return '=';}
\n                       { n_linea++; return ('\n'); }
.                        { return (yytext [0]); }   /* literales */
%%                            /* Tercera Seccion */
int yywrap ()     /* se incluye para evitar un error de compilacion */
{
    return (0) ; /* para el control de fin de fichero */
}