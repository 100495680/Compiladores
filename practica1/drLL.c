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
// Axioma ::= Expresion
// Expresion ::= (RestExpr) | Parametro
// RestExpr ::=  OperadorExpresionExpresion | =AlphanumExpresion
// Operador ::= + | - | * | /
// Parametro ::= Numero | Alphanum
// Alphanum ::= [a-zA-Z] [0-9]?
// Numero ::= [0-9]+

char *ParseNumber(){
	// Numero ::= [0-9]+
	// Como no devuelve nada la funcion sera "void", 
	// si devuelve para hacer futuros calculos sera "int"
	char buffer[64];
	char *result;

	sprintf(buffer, "%d", tokens.number);
	MatchSymbol(T_NUMBER);
	result = (char *)malloc(strlen(buffer) + 1);
	strcpy(result, buffer);
	return result;
}

char *ParseAlphaNum(){
	// Alphanum ::= [a-zA-Z] [0-9]?
	char buffer[64];
	char *result;

	strcpy(buffer, tokens.variable_name);
	MatchSymbol(T_VARIABLE);
	
	result = (char *)malloc(strlen(buffer) + 1);
	strcpy(result, buffer);
	return result;
}

int ParseOperator(){
	// Operador ::= + | - | * | /
	MatchSymbol(T_OPERATOR);
	return tokens.token_val;
}

char *ParseParameter(){
	// Parametro ::= Numero | Alphanum
	char *result;
	if (tokens.token == T_NUMBER){
		result = ParseNumber () ;
	}
	else if (tokens.token == T_VARIABLE){
		result = ParseAlphaNum () ;
	}
	else {
		rd_syntax_error(-1, tokens.token, "Se esperaba un Número o una Variable en Parametro\n");
	}
	return result;
}

char *ParseRestExpr(){
	// RestExpr ::=  OperadorExpresionExpresion | =AlphanumExpresion
	int op;
	char *expr1;
	char *expr2;
	char *result;

	char *var;
	char *expr;
	if (tokens.token == T_OPERATOR){
		op = ParseOperator();
		
		expr1 = ParseExpression();
		expr2 = ParseExpression();
		
		result = (char *)malloc(strlen(expr1) + strlen(expr2) + 4);
		sprintf(result, "%s %c %s", expr1, (char)op, expr2);

        free(expr1);
        free(expr2);
	}
	else if (tokens.token == '='){
		MatchSymbol('=');
		var = ParseAlphaNum();
		expr = ParseExpression();

		result = (char *)malloc(strlen(expr1) + strlen(expr2) + 4);
		sprintf(result, "%s = %s", var, expr);
		free(var);
		free(expr);
	}
	else {
		rd_syntax_error(-1, tokens.token, "Se esperaba un Operador o '=' en RestExpr\n");
	}
	return result;
}

char *ParseExpression(){
	// Expresion ::= (RestExpr) | Parametro
	char *r_exp;
	char *result;
	if (tokens.token == '('){
		MatchSymbol('(');
		r_exp = ParseRestExpr();
		MatchSymbol(')');
		result = (char *)malloc(strlen(r_exp) + 3);
		// imprimir el infijo entre parentesis
        sprintf(result, "(%s)", r_exp);
        free(r_exp);
	} else{
		result = ParseParameter();
	}
	return result;
}

char *ParseAxiom(){									/// Axiom ::= \n
	// Axioma ::= Expresion
	char *expr = ParseExpression();
	printf("%s\n", expr);								
	if (tokens.token == '\n') {
		printf ("\n") ; 
		MatchSymbol ('\n') ;
	} else { 
		rd_syntax_error (-1, tokens.token, "-- Unexpected Token (Expected:%d=None, Read:%d) at end of Parsing\n") ;
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
