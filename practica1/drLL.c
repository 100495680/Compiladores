/* 113 Liang Ji Zhu Ignacio Leal Sánchez */
/* 100495723@alumnos.uc3m.es 100495680@alumnos.uc3m.es */
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define T_NUMBER 	1001
#define T_OPERATOR	1002		
#define T_VARIABLE  1003  

void ParseExpresion () ; 		/// Declaración de No terminal
void ParseRestExpr () ; 		/// Declaración de No terminal
void ParseParameter () ; 		/// Declaración de No terminal
void ParseAxiom () ;			/// Prototype for forward reference 		

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
		cc = getchar () ;
		if (isdigit (cc)) {									
			sprintf (tokens.variable_name, "%c%c", c, cc) ;		/// This copies the LetterDigit name in the variable name
		} else {											
			ungetc (cc, stdin) ;									
			sprintf (tokens.variable_name, "%c", c) ;			/// This copies the single Letter name in the variable name
		}													
        update_old_token () ;
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
		rd_syntax_error (expected_token, tokens.token, "token %d expected, but %c was read\n") ;
		exit (0) ;
	} else {
	 	rd_lex () ; 			/// read next Token
	}
}


#define ParseLParen() 	MatchSymbol ('(') ; // More concise and efficient definitions
#define ParseRParen() 	MatchSymbol (')') ; ///   rather than using functions
											/// The actual recomendation is to use MatchSymbol in the code rather than theese macros

// Gramatica:
// Axiom ::= Expresion "\n"
// Expresion ::= "(" RestExpr ")" | Parametro
// RestExpr ::=  Operador Expresion Expresion | "=" Alphanum Expresion
// Operador ::= + | - | * | /
// Parametro ::= Numero | Alphanum
// Alphanum ::= [a-zA-Z] [0-9]?
// Numero ::= [0-9]+

void ParseExpresion() {
	// Expresion ::= "(" RestExpr ")"
	if (tokens.token == '(') {
		ParseLParen();
		printf("(");
		ParseRestExpr();
		ParseRParen();
		printf(") ");
	} else {
		// Expresion ::= Parametro
		if ( tokens.token == T_NUMBER || tokens.token == T_VARIABLE) {
			ParseParameter();
		} else {
			fprintf (stderr, "ERROR in line %d ", line_counter) ;
			fprintf (stderr, "ERROR invalid gramar (Expresion)") ;
			exit (0) ;
		}
	}
}

void ParseRestExpr() {
	// RestExpr ::=  Operador Expresion Expresion
	if (tokens.token == T_OPERATOR){
		char operator;
		if (tokens.token == T_OPERATOR) {
			operator = tokens.token_val;
			MatchSymbol(T_OPERATOR);
		}
		ParseExpresion();
		printf("%c ", operator);
		fflush(stdout);
		ParseExpresion();
	} else {
		// RestExpr ::= "=" Alphanum Expresion
		if (tokens.token == '=') {
			MatchSymbol('=');

			if (tokens.token == T_VARIABLE){
				printf("%s ", tokens.variable_name);
				MatchSymbol(T_VARIABLE);
			} else {
				fprintf (stderr, "ERROR in line %d ", line_counter) ;
				fprintf (stderr, "ERROR invalid gramar (Asignación de variables es solo para variables)") ;
				exit (0) ;
			}
		printf("= ");
		ParseExpresion();
		} else {
			fprintf (stderr, "ERROR in line %d ", line_counter) ;
			fprintf (stderr, "ERROR invalid gramar") ;
			exit (0) ;
		}
	} 
}

void ParseParameter() {
	// Parametro ::= Numero
	if (tokens.token == T_NUMBER){
		printf("%d ", tokens.number);
		MatchSymbol(T_NUMBER);
	} else {
		// Parametro ::= Alphanum
		if (tokens.token == T_VARIABLE){
			printf("%s ", tokens.variable_name);
			MatchSymbol(T_VARIABLE);
		}
	}
	// No hay detección de errores ya que no es posible que no sea uno de las dos.
}


void ParseAxiom() {
	// Axiom ::= Expresion "\n"
	ParseExpresion () ;		
	printf ("\n") ; 				// 	Imprimimos el salto de linea antes de saber si es salto de linea o error
									//  Por que en ambos casos necesitamos el resultado tiene que esta legible						
	if (tokens.token == '\n') {	
		MatchSymbol ('\n') ;
	} else { 
		rd_syntax_error (-1, tokens.token, "-- Unexpected Token (Expected:%d=None, Read:%d) at end of Parsing\n") ;
	}
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
