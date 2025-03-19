/* 113 Liang Ji Zhu Ignacio Leal Sánchez */
/* 100495723@alumnos.uc3m.es 100495680@alumnos.uc3m.es */
%{                   // SECCION 1 - Definiciones
#include <stdio.h>
int yylex () ;
int yyparse () ;
int yyerror (char *) ;
int memoria [26] ;      // Se define una zona de memoria para las variables 
%}                   // SECCION 2 - Directivas
%union {                // El tipo de la pila (del AP) tiene caracter dual 
      int valor ;       //  - valor numerico entero 
      int indice ;      //  - indice para identificar una variable 
}  
%token  <valor>  NUMERO    // Todos los token tienen un tipo para la pila
%token  <indice> VARIABLE
%type   <valor>  expresion // Se asocia tambien a los No Terminales un tipo 
%type   <valor>  termino operando
%right  '='             //  es la ultima operacion que se debe realizar
%left   '+' '-'         //  menor orden de precedencia 
%left   '*' '/'         //  orden de precedencia intermedio 
%left   SIGNO_UNARIO    //  mayor orden de precedencia 
%%
                     // SECCION 3: Gramatica - Semantico 
axioma:       expresion '\n'              { printf (".\n") ; } 
                       r_expr
            | VARIABLE '=' expresion '\n' { 
                                            printf ("%c !\n", 'A' + $1);
                                          }
                       r_expr
            ;

r_expr:                      /* lambda */
            | axioma
            ;

expresion:    termino                    { $$ = $1 ; }
            | expresion '+' expresion    {  printf( "+ "); }
            | expresion '-' expresion    {  printf( "- "); }
            | expresion '*' expresion    {  printf( "* "); }
            | expresion '/' expresion    {  printf( "/ "); }
            ;

termino:      operando                           { $$ = $1 ; }
            | '+' operando %prec SIGNO_UNARIO    {  printf( "%d ", $2); }
            | '-' operando %prec SIGNO_UNARIO    {  printf( "-%d ", $2); }
            ;

operando:     VARIABLE                   { printf("%c@ ", 'A' + $1) ; }
            | NUMERO                     { printf( "%d ", $1); }
            | '(' expresion ')'          { printf( "(%d ) ", $2); }
            ;

%%

                     /* SECCION 4  Codigo en C */
int n_linea = 1 ;

int yyerror (mensaje)
char *mensaje ;
{
    fprintf (stderr, "%s en la linea %d\n", mensaje, n_linea) ;
}

int yylex ()
{
    unsigned char c ;

    do {
         c = getchar () ;
    } while (c == ' ') ;

    if (c == '.' || (c >= '0' && c <= '9')) {
         ungetc (c, stdin) ;
         scanf ("%d", &yylval.valor) ;
         return NUMERO ;
    }

    if (c >= 'a' && c <= 'z') {
         yylval.indice = c - 'a' ;  // resta a c el valor ascii de a 
         return VARIABLE ;
    }

    if (c >= 'A' && c <= 'Z') {
         yylval.indice = c - 'A' ;  // resta a c el valor ascii de A
         return VARIABLE ;
    }

    if (c == '\n')
          n_linea++ ;
    return c ;
}

int main ()
{
    yyparse () ;
}
