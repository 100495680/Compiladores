/* 113 Liang Ji Zhu Ignacio Leal Sánchez */
/* 100495723@alumnos.uc3m.es 100495680@alumnos.uc3m.es */
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define T_NUMBER 	1001
#define T_OPERATOR	1002		
#define T_VARIABLE  1003


// void ParseYourGrammar () ; 		/// Dummy Parser
char *ParseAxiom () ;			/// Prototype for forward reference 		
char *ParseExpression ();
char *ParseRestExpr();
char *ParseParameter();
int ParseOperator();
char *ParseNumber();
char *ParseAlphaNum();
struct s_tokens {
	int token ;					// Here we store the current token/literal 
	int old_token ; 			// Sometimes we need to check the previous token
	int number ;				// The value of the number 
	int old_number ;			// old number value
	char variable_name [8] ;	/// variable name	
	char old_var_name [8] ;		/// old variable name			
	int token_val ;				// the arithmetic operator
	int old_token_val ;			// old arithmetic operator
} ;

struct s_tokens tokens = {0, 0, 0, -1, "", "", 0, -1}; // contains initial values


int line_counter = 1 ;


void update_old_token () 
{					/// Sometimes we need to check the previous token
	tokens.old_token = tokens.token ;
	tokens.old_number = tokens.number ;
	strcpy (tokens.old_var_name, tokens.variable_name) ;	/// Copy variable names			
	tokens.old_token_val = tokens.token_val ;
}


void init_tokens () 
{ 								///  Not really neccesary
    tokens.token = 0;
	tokens.old_token = 0 ;
    tokens.number = 0 ;
    tokens.old_number = -1 ;
	strcpy (tokens.old_var_name, "") ;			/// erase old variable name
	strcpy (tokens.variable_name, "") ;			/// Erase variable name
    tokens.token_val = 0;
    tokens.old_token_val = -1;
}


int rd_lex ()
{
	int c ;
	int cc ;
	
	do {
		c = getchar () ;
		if (c == '\n')
			line_counter++ ;	// info for rd_syntax_error()
	} while (c == ' ' || c == '\r' || c == '\t') ;	/// \r is part of a newline in some Operating Systems
	
	if (isdigit (c)) {			/// Token Number is [Digit]+
		ungetc (c, stdin) ;		/// This returns one character to the standard input stream
		update_old_token () ;
		scanf ("%d", &tokens.number) ;
		tokens.token = T_NUMBER ;
		return (tokens.token) ;	// returns the Token for Variable
	}

	if (isalpha(c)) {  /// Token Variable of type Letter[Digit]? 
		update_old_token () ;
		cc = getchar () ;
		if (isdigit (cc)) {									
			sprintf (tokens.variable_name, "%c%c", c, cc) ;		/// This copies the LetterDigit name in the variable name
		} else {											
			ungetc (cc, stdin) ;									
			sprintf (tokens.variable_name, "%c", c) ;			/// This copies the single Letter name in the variable name
		}													
		tokens.token = T_VARIABLE ;
        return (tokens.token) ;	// returns the Token for Number
    } 

	if (c == '+' || c == '-' || c == '*' || c == '/') {  /// Remember that = is returned as a literal
		update_old_token () ;
		tokens.token_val = c ;
		tokens.token = T_OPERATOR ;
		return (tokens.token) ;		// returns the Token for Arithmetic Operators
	}					

	if (c == EOF){         /// End Of Archive detection for enhanced Batch Processing
        exit (0) ;
    } 

	update_old_token () ;
	tokens.token = c ;
	return (tokens.token) ;		// returns a literal
}


void rd_syntax_error (int expected, int token, char *output) 
{
	fprintf (stderr, "ERROR in line %d ", line_counter) ;
	fprintf (stderr, output, expected, token) ;
	
	exit (0) ;
}


void MatchSymbol (int expected_token)
{
	if (tokens.token != expected_token) {
		rd_syntax_error (expected_token, tokens.token, "token %d expected, but %d was read") ;
		exit (0) ;
	} else {
	 	rd_lex () ; 			/// read next Token
	}
}


// #define ParseLParen() 	MatchSymbol ('(') ; // More concise and efficient definitions
// #define ParseRParen() 	MatchSymbol (')') ; ///   rather than using functions
											/// The actual recomendation is to use MatchSymbol in the code rather than theese macros
// Gramatica:
// Axioma 		::= Expresion
// Expresion 	::= (RestExpr) | Parametro
// RestExpr 	::=  OperadorExpresionExpresion | = AlphanumExpresion
// Operador 	::= + | - | * | /
// Parametro 	::= Numero | Alphanum
// Alphanum 	::= [a-zA-Z] [0-9]?
// Numero 		::= [0-9]+

// Función ParseNumber()
// Se encarga de procesar la producción: Numero ::= [0-9]+
// Convierte el valor numérico actual a una cadena, consume el token y lo retorna.
char *ParseNumber(){
    char buffer[64];
    char *result;

    // Formateamos el número almacenado en tokens.number en una cadena
    sprintf(buffer, "%d", tokens.number);
    // Verifica que el token actual es un número y lo consume
    MatchSymbol(T_NUMBER);
    // Asigna memoria para la cadena resultante y la copia
    result = (char *)malloc(strlen(buffer) + 1);
    strcpy(result, buffer);
    return result;
}

// Función ParseAlphaNum()
// Procesa la producción: Alphanum ::= [a-zA-Z] [0-9]?
// Toma el nombre de variable leído y lo retorna como cadena.
char *ParseAlphaNum(){
    char buffer[64];
    char *result;

    // Copia el nombre de la variable actual desde tokens.variable_name
    strcpy(buffer, tokens.variable_name);
    // Consume el token de variable
    MatchSymbol(T_VARIABLE);
    
    // Reserva memoria para la cadena resultante y la copia
    result = (char *)malloc(strlen(buffer) + 1);
    strcpy(result, buffer);
    return result;
}

// Función ParseOperator()
// Procesa la producción: Operador ::= + | - | * | /
// Consume el token del operador y retorna su valor (carácter).
int ParseOperator(){
    MatchSymbol(T_OPERATOR);
    return tokens.token_val;
}

// Procesa la producción: Parametro ::= Numero | Alphanum
// Determina si el token actual es un número o una variable y llama a la función
// correspondiente para obtener la cadena resultante.
char *ParseParameter(){
    char *result;
    if (tokens.token == T_NUMBER){
        result = ParseNumber();
    }
    else if (tokens.token == T_VARIABLE){
        result = ParseAlphaNum();
    }
    else {
        rd_syntax_error(-1, tokens.token, "Se esperaba un Número o una Variable en Parametro\n");
    }
    return result;
}

// Función ParseRestExpr()
// Procesa la producción: RestExpr ::= Operador Expresion Expresion | = Alphanum Expresion
// Según el token actual, diferencia si se trata de una operación aritmética o de una asignación.
char *ParseRestExpr(){
    int op;
    char *expr1;
    char *expr2;
    char *result;

    char *var;
    char *expr;
    // Caso: Operación aritmética. Se espera un operador aritmético.
    if (tokens.token == T_OPERATOR){
        op = ParseOperator();  // Consume el operador y lo retorna
        
        // Procesa las dos subexpresiones recursivamente
        expr1 = ParseExpression();
        expr2 = ParseExpression();
        
        // Reserva memoria para la cadena resultante y la construye en notación infija
        result = (char *)malloc(strlen(expr1) + strlen(expr2) + 4);
        sprintf(result, "%s %c %s", expr1, (char)op, expr2);

        free(expr1);
        free(expr2);
    }
    // Caso: Asignación. Se espera el símbolo '='.
    else if (tokens.token == '='){
        MatchSymbol('=');  			// Consume el token '='
        var = ParseAlphaNum();      // Procesa la variable a la izquierda
        expr = ParseExpression();   // Procesa la expresión a la derecha

        // Se reserva memoria para concatenar la variable, el símbolo '=' y la expresión.
        result = (char *)malloc(strlen(var) + strlen(expr) + 4);
        sprintf(result, "%s = %s", var, expr);

        free(var);
        free(expr);
    }
    else {
        rd_syntax_error(-1, tokens.token, "Se esperaba un Operador o '=' en RestExpr\n");
    }
    return result;
}

// Función ParseExpression()
// Procesa la producción: Expresion ::= (RestExpr) | Parametro
// Distingue entre una expresión compuesta (entre paréntesis) y un parámetro simple.
char *ParseExpression(){
    char *r_exp;
    char *result;
    // Si la expresión comienza con '(' se procesa como una expresión compuesta.
    if (tokens.token == '('){
        MatchSymbol('(');         	// Consume '('
        r_exp = ParseRestExpr();    // Procesa la parte interna (RestExpr)
        MatchSymbol(')');         	// Consume ')'
        // Reserva memoria para agregar paréntesis en la salida infija.
        result = (char *)malloc(strlen(r_exp) + 3);
        // Se encapsula la expresión traducida entre paréntesis.
        sprintf(result, "(%s)", r_exp);
        free(r_exp);
    } 
    else {
        // Si no es una expresión compuesta, se trata de un parámetro (número o variable)
        result = ParseParameter();
    }
    return result;
}

// Función ParseAxiom()
// Procesa la producción: Axioma ::= Expresion "\n"
// Es el punto de partida del análisis y se encarga de procesar una expresión seguida de un salto de línea.
char *ParseAxiom(){
    char *expr = ParseExpression();  // Procesa la expresión
    // Imprime la traducción a notación infija generada
    printf("%s\n", expr);
    // Verifica que el token actual sea un salto de línea y lo consume.
    if (tokens.token == '\n') {
        printf ("\n");
        MatchSymbol('\n');
    } else { 
        rd_syntax_error(-1, tokens.token, "-- Unexpected Token (Expected:%d=None, Read:%d) at end of Parsing\n");
    }
    return expr;
}


int main (int argc, char **argv) 
{
// Usage :  drLL -s  ==> evaluate a single Input Line
//          drLL     ==> evalute multiple Input Lines until some error appears
/// DO NOT MODIFY THE CODE INSIDE THE MAIN FUNCTION WITHOUT PERMISSION

	int flagMultiple = 1 ;
	
	if (argc >= 2) {
		if (strcmp ("-s", argv [1]) == 0) {
			flagMultiple = 0 ;
		}
	}
	
	rd_lex () ;						/// Read first Token only once
	do {
		ParseAxiom () ;		
//		printf ("\n") ;
	} while (flagMultiple) ;
	
	exit (0) ;
}
