/* 113 Liang Ji Zhu Ignacio Leal Sánchez */
/* 100495723@alumnos.uc3m.es 100495680@alumnos.uc3m.es */
%{                          // SECCION 1 Declaraciones de C-Yacc

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

%}

// Definitions for explicit attributes

%token NUMBER        
%token IDENTIF       // Identificador=variable
%token INTEGER       // identifica el tipo entero
%token STRING
%token RETURN        // identifica el return
%token MAIN          // identifica el comienzo del proc. main
%token WHILE         // identifica el bucle main
%token FOR           // identifica el bucle for
%token IF            // identifica el if
%token ELSE          // identifica el else
%token PUTS          // identifica la función puts()
%token PRINTF        // identifica la funcion printf()

// %right '='                                          // es la ultima operacion que se debe realizar
// %left '+' '-'                                       // menor orden de precedencia
// %left '*' '/' '%'                                   // orden de precedencia intermedio
// %left '>' '<' ">=" "<=" "!=" "==" "!" "&&" "||"     // orden de precedencia de comparacion
// %left UNARY_SIGN                                    // mayor orden de precedencia

%right '='                                /* asignación */
%left "||"                                /* lógico OR */
%left "&&"                                /* lógico AND */
%nonassoc "==" "!="                       /* igualdad */
%nonassoc '<' '>' "<=" ">="              /* relacionales */
%left '+' '-'                            /* suma/resta */
%left '*' '/' '%'                        /* multiplic./módulo */
%right UNARY_SIGN "!"                     /* unarios: +un, -un, ! */

%%                            // Seccion 3 Gramatica - Semantico

axioma:             var_global funcion                                  { printf ("\n%s%s\n", $1.code, $2.code); }
                    r_axioma                                            { ; }
                    ;
r_axioma:                                                               { ; }
                    |   axioma                                          { ; }
                    ;



var_global:         declaracion ';'  var_global                         { sprintf (temp, "%s\n%s", $1.code, $3.code);
                                                                        $$.code = gen_code (temp); }
                    |                                                   { $$.code = ""; }         
                    ;

declaracion:        INTEGER  IDENTIF valor_global r_declaracion         { sprintf (temp, "(setq %s %s)%s", $2.code, $3.code, $4.code); 
                                                                        $$.code = gen_code (temp); }
                    | INTEGER  IDENTIF '[' NUMBER ']' r_declaracion     { sprintf (temp, "(setq %s (make-array %d))\n%s", $2.code, $4.value, $6.code);
                                                                        $$.code = gen_code (temp); }
                    ;

valor_global:                                                           { sprintf (temp, "%d", 0 ); 
                                                                        $$.code = gen_code (temp);}
                    | '=' NUMBER                                        { sprintf (temp, "%d", $2.value); 
                                                                        $$.code = gen_code (temp); }
                    ;
r_declaracion:        ',' IDENTIF valor_global r_declaracion            { sprintf (temp, "\n(setq %s %s)%s", $2.code, $3.code, $4.code); 
                                                                        $$.code = gen_code (temp); }
                    | ',' IDENTIF '[' NUMBER ']' r_declaracion          { sprintf (temp, "\n(setq %s (make-array %d))%s", $1.code, $3.value, $5.code);
                                                                        $$.code = gen_code (temp); }
                    |                                                   { $$.code = ""; }
                    ;




funcion:            IDENTIF { strcpy(funcion_name, $1.code); operaciones = 1; } '(' argumento ')' '{' var_local cuerpo '}' funcion          { sprintf (temp, "(defun %s (%s)\n\t%s%s);\n\t\n\t%s", $1.code, $4.code, $7.code, $8.code, $10.code);
                                                                                                                                            $$.code = gen_code (temp); } 
                    | funcion_principal                                                                                                     { $$ = $1; }
                    ;

funcion_principal:  MAIN { strcpy(funcion_name, $1.code); operaciones = 1; }      '(' argumento ')' '{' var_local cuerpo '}'                { sprintf (temp, "(defun main (%s)\n\t%s%s);", $4.code, $7.code, $8.code);
                                                                                                                                            $$.code = gen_code (temp); }
                    ;

argumento:          INTEGER valor resto_argumento                       { sprintf (temp, "%s %s", $2.code, $3.code); 
                                                                        $$.code = gen_code (temp); }
                    | valor resto_argumento                             { sprintf (temp, "%s %s", $1.code, $2.code); 
                                                                        $$.code = gen_code (temp); }
                    |                                                   { $$.code = ""; }
                    ;

valor:              STRING                                              { $$ = $1; }
                    | expresion                                         { $$ = $1; }
                    ;

resto_argumento:    ',' argumento                                       { sprintf (temp, " %s", $2.code); 
                                                                        $$.code = gen_code (temp); }
                    |                                                   { $$.code = ""; }
                    ;   


var_local:          declaracion_local ';' var_local                     { sprintf (temp, "%s\n\t%s", $1.code, $3.code); 
                                                                        $$.code = gen_code (temp); }
                    |                                                   { $$.code = ""; }
                    ;

declaracion_local:  INTEGER  IDENTIF valor_local r_decl_local           { sprintf (temp, "(setq %s_%s %s)%s", funcion_name, $2.code, $3.code, $4.code); 
                                                                        $$.code = gen_code (temp); }
                    | INTEGER  IDENTIF '[' NUMBER ']' r_decl_local      { sprintf (temp, "(setq %s (make-array %d))\n%s", $2.code, $4.value, $6.code);
                                                                        $$.code = gen_code (temp); }
                    ;

valor_local:        /* lambda */                                        { sprintf (temp, "%d", 0); 
                                                                        $$.code = gen_code (temp);}
                    | '=' NUMBER                                        { sprintf (temp, "%d", $2.value); 
                                                                        $$.code = gen_code (temp); }
                    ;
r_decl_local:       ',' IDENTIF valor_local r_decl_local                { sprintf (temp, "\n\t(setq %s_%s %s)", funcion_name, $2.code, $3.code); 
                                                                        $$.code = gen_code (temp); }
                    | ',' IDENTIF '[' NUMBER ']' r_decl_local           { sprintf (temp, "(setq %s (make-array %d))\n%s", $2.code, $4.value, $6.code);
                                                                        $$.code = gen_code (temp); }
                    |                                                   { $$.code = ""; }
                    ;



cuerpo:             sentencia ';' cuerpo                                { sprintf (temp, "%s\n\t%s", $1.code, $3.code);
                                                                        $$.code = gen_code (temp); }
                    | sentencia ';'                                     { $$ = $1; }
                    | estructura cuerpo                                 { sprintf (temp, "%s\n\t%s", $1.code, $2.code);
                                                                        $$.code = gen_code (temp); }
                    | estructura                                        { $$ = $1; }
                    | RETURN expresion ';'                              { $$ = $2; }
                    ;



estructura:         WHILE '(' expresion ')' '{' cuerpo_estructura '}'                                       { sprintf (temp, "(loop while %s do\n\t%s)", $3.code, $6.code);
                                                                                                            $$.code = gen_code (temp); }
                    | IF '(' expresion ')' '{' cuerpo_estructura '}'                                        { sprintf (temp, "(if %s\n\t%s)", $3.code, $6.code); operaciones = 1;
                                                                                                            $$.code = gen_code (temp); }
                    | IF '(' expresion ')' '{' cuerpo_estructura '}' ELSE '{' cuerpo_estructura '}'         { sprintf (temp, "(if %s\n\t%s\n\t%s)", $3.code, $6.code, $10.code); operaciones = 1;
                                                                                                            $$.code = gen_code (temp); }
                    | FOR '(' declaracion_for ';' expresion ';' asignacion ')' '{' cuerpo_estructura '}'    { sprintf (temp, "%s\n\t(loop while %s do\n\t%s\n\t%s)", $3.code, $5.code, $10.code, $7.code);
                                                                                                            $$.code = gen_code (temp); }
                    ;


declaracion_for:    INTEGER  IDENTIF valor_for r_declaracion_for        { sprintf (temp, "(setq %s_%s %s)%s", funcion_name, $2.code, $3.code, $4.code); 
                                                                        $$.code = gen_code (temp); }
                    |      IDENTIF valor_for r_declaracion_for          { sprintf (temp, "(setq %s_%s %s)%s", funcion_name, $1.code, $2.code, $3.code); 
                                                                        $$.code = gen_code (temp); }
                    ;
valor_for:                                                              { sprintf (temp, "%d", 0); 
                                                                        $$.code = gen_code (temp);}
                    | '=' NUMBER                                        { sprintf (temp, "%d", $2.value); 
                                                                        $$.code = gen_code (temp); }
                    ;
r_declaracion_for:      ',' IDENTIF valor_for r_declaracion_for         { sprintf (temp, "\n(setq %s_%s %s)%s", funcion_name, $2.code, $3.code, $4.code); 
                                                                        $$.code = gen_code (temp); }
                    |                                                   { $$.code = ""; }
                    ;



cuerpo_estructura:  sentencia ';'                                       { if (operaciones == 2) {
                                                                                $$ = $1;} 
                                                                        else {
                                                                                sprintf (temp, "(progn\t%s)", $1.code); 
                                                                                $$.code = gen_code(temp); } }
                    | estructura                                        { $$ = $1; }
                    | sentencia ';' cuerpo_estructura                   { sprintf (temp, "(progn\t%s\n\t%s)", $1.code, $3.code); 
                                                                        $$.code = gen_code (temp); }
                    | estructura cuerpo_estructura                      { sprintf (temp, "(progn\t%s\n\t%s)", $1.code, $2.code); 
                                                                        $$.code = gen_code (temp); }
                    | RETURN expresion ';'                              { sprintf (temp, "(return-from %s %s)", funcion_name, $2.code);
                                                                        $$.code = gen_code (temp); }
                    ;
sentencia:          asignacion                                          { $$ = $1; }
                    | '@' expresion                                     { sprintf (temp, "(print %s)", $2.code);  
                                                                        $$.code = gen_code (temp); }
                    | PUTS '(' STRING ')'                               { sprintf (temp, "(print \"%s\")", $3.code);  
                                                                        $$.code = gen_code (temp) ;}
                    | PRINTF printf                                     { $$.code = $2.code; }
                    | llamada                                           { $$.code = $1.code; }
                    ;

printf:             '(' STRING r_printf ')'                             { $$.code = $3.code; }
                    ;

r_printf:           ',' expresion r_printf                              { sprintf(temp, "(princ %s)\n\t%s", $2.code, $3.code); operaciones ++; 
                                                                        $$.code = gen_code(temp); }
                    | ',' STRING r_printf                               { sprintf(temp, "(princ \"%s\")\n\t%s", $2.code, $3.code); operaciones ++;
                                                                        $$.code = gen_code(temp); }
                    |                                                   { $$.code = gen_code(""); }
                    ;



asignacion:         IDENTIF '=' expresion                               { sprintf (temp, "(setf %s_%s %s)", funcion_name, $1.code, $3.code); 
                                                                        $$.code = gen_code (temp); }
                    | vector '=' expresion                              { sprintf (temp, "(setf %s %s)", $1.code, $3.code); 
                                                                        $$.code = gen_code (temp); }
                    
                    ;

expresion:          logical_or                                          { $$ = $1; }
                    ;

llamada:            IDENTIF '(' argumento ')'                           { sprintf (temp, "(%s %s)", $1.code, $3.code); 
                                                                        $$.code = gen_code (temp); }
                    ;
/* 5. Operadores, precedencia y asociatividad */
logical_or:         logical_and                                         { $$ = $1; }
                    | logical_or '|''|' logical_and                     { sprintf (temp, "(or %s %s)", $1.code, $4.code);
                                                                        $$.code = gen_code (temp); }
                    ;
logical_and:        igualdad                                            { $$ = $1; }
                    | logical_and '&''&' igualdad                       { sprintf (temp, "(and %s %s)", $1.code, $4.code);
                                                                        $$.code = gen_code (temp); }
                    ;
igualdad:           relacional                                          { $$ = $1; }
                    | igualdad '=''=' relacional                        { sprintf (temp, "(= %s %s)", $1.code, $4.code);
                                                                        $$.code = gen_code (temp); }
                    | igualdad '!''=' relacional                        { sprintf (temp, "(/= %s %s)", $1.code, $4.code);
                                                                        $$.code = gen_code (temp); }
                    ;
relacional:         aditivo                                             { $$ = $1; }
                    | relacional '<' aditivo                            { sprintf (temp, "(< %s %s)", $1.code, $3.code);
                                                                        $$.code = gen_code (temp); }
                    | relacional '>' aditivo                            { sprintf (temp, "(> %s %s)", $1.code, $3.code);
                                                                        $$.code = gen_code (temp); }
                    | relacional '<''=' aditivo                         { sprintf (temp, "(<= %s %s)", $1.code, $4.code);
                                                                        $$.code = gen_code (temp); }
                    | relacional '>''=' aditivo                         { sprintf (temp, "(>= %s %s)", $1.code, $4.code);
                                                                        $$.code = gen_code (temp); }
                    ;
aditivo:            multiplicativo                                      { $$ = $1; }
                    | aditivo '+' multiplicativo                        { sprintf (temp, "(+ %s %s)", $1.code, $3.code);
                                                                        $$.code = gen_code (temp); }
                    | aditivo '-' multiplicativo                        { sprintf (temp, "(- %s %s)", $1.code, $3.code);
                                                                        $$.code = gen_code (temp); }
                    ;
multiplicativo:     unario                                              { $$ = $1; }
                    | multiplicativo '*' unario                         { sprintf (temp, "(* %s %s)", $1.code, $3.code);
                                                                        $$.code = gen_code (temp); }
                    | multiplicativo '/' unario                         { sprintf (temp, "(/ %s %s)", $1.code, $3.code);
                                                                        $$.code = gen_code (temp); }
                    | multiplicativo '%' unario                         { sprintf (temp, "(mod %s %s)", $1.code, $3.code);
                                                                        $$.code = gen_code (temp); }
                    ;
unario:             operando                                            { $$ = $1; }
                    | '!' unario                                        { sprintf (temp, "(not %s)", $2.code);
                                                                        $$.code = gen_code (temp); }
                    | '+' operando %prec UNARY_SIGN                     { $$ = $1; }
                    | '-' operando %prec UNARY_SIGN                     { sprintf (temp, "(- %s)", $2.code);
                                                                        $$.code = gen_code (temp); }  
                    ;

operando:           IDENTIF                                             { sprintf (temp, "%s_%s", funcion_name ,$1.code);
                                                                        $$.code = gen_code (temp); }
                    | IDENTIF '(' argumento ')'                         { sprintf (temp, "(%s %s)", $1.code, $3.code); 
                                                                        $$.code = gen_code (temp); }
                    | NUMBER                                            { sprintf (temp, "%d", $1.value);
                                                                        $$.code = gen_code (temp); }
                    | '(' logical_or ')'                                { $$ = $2; }
                    |  vector                                           { $$ = $1; }
                    ;

vector:             IDENTIF '[' logical_or ']'                          { sprintf (temp, "(aref %s %s)", $1.code, $3.code);
                                                                        $$.code = gen_code (temp); }
                    ;
%%                            // SECCION 4    Codigo en C

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