/* 113 Liang Ji Zhu Ignacio Leal Sánchez */
/* 100495723@alumnos.uc3m.es 100495680@alumnos.uc3m.es */
%{					/* Seccion 1  Declaraciones de C-bison */
#include <stdio.h>
#define YYSTYPE  double
double pot ;
int yylex();
int yyerror(char *mensaje);
%}
                    		/* Seccion 2  Declaraciones de bison   */  
%%
					/* Seccion 3  Gram�tica - Sem�ntico   */

axioma:      expresion '\n' { printf ("Expresion=%lf\n", $1) ; }  r_expr 
           ;

r_expr:			/* lambda */
           | axioma
           ;


expresion:   operando                { $$ = $1 ; }
           | operando '+' expresion  { $$ = $1 + $3 ; }
           | operando '-' expresion  { $$ = $1 - $3 ; }
           | operando '*' expresion  { $$ = $1 * $3 ; }
           | operando '/' expresion  { $$ = $1 / $3 ; }
           ;

operando:    numero                  { $$ = $1 ; }
           | '-' numero              { $$ = -$2 ; }
           | '+' numero              { $$ = $2 ; }
           | '('  expresion  ')'     { $$ = $2 ; }
           ;


numero:      digito 		    { $$ = $1 ; pot = 1 ; }
           | digito numero	   	    { pot *= 10 ; $$ = $1 * pot + $2 ; }      
           ;

digito:      '0'                     { $$ = 0 ; }
           | '1'                     { $$ = 1 ; }
           | '2'                     { $$ = 2 ; }
           | '3'                     { $$ = 3 ; }
           | '4'                     { $$ = 4 ; }
           | '5'                     { $$ = 5 ; }
           | '6'                     { $$ = 6 ; }
           | '7'                     { $$ = 7 ; }
           | '8'                     { $$ = 8 ; }
           | '9'                     { $$ = 9 ; }
           ;
%%
					/* Seccion 4  C�digo en C   */
int yyerror (char *mensaje)
{
    fprintf (stderr, "%s\n", mensaje) ;
}

int yylex ()
{
    unsigned char c ;
    

    
    do {
    c = getchar () ;
    } while (c == ' ') ;

    return c ;
}

int main ()
{
    yyparse () ;
}
