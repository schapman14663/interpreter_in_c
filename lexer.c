#include <stdio.h>

enum tokentype {
  ILLEGAL,
  EOF,
  // Identifiers and literals
  IDENT, // add, x, y, etc
  INT,   // 123456342342
  // Operators
  ASSIGN,
  PLUS,
  // Delimiters
  COMMA,
  SEMICOLON,
  LPAREN,
  RPAREN,
  LBRACE,
  RBRACE,
  // Keywords
  FUNCTION,
  LET,
};

struct tokenstruct {
  // int line;   // This will be the number of the line that the token is on
  // int column; // This will be the number of the column that the token is on
  //  (first character)
  enum tokentype type; // As below, this is the kind of token found
  char value[]; // The literal piece of text in the code, i.e. an int might
                // literally be the number 7
};

// TODO: Switch for tokentypes to unwrap the enum from values to their names.
void tokendebug(struct tokenstruct token) {
  // printf("%d", token.line);
  // printf("%d", token.column);
  printf("%d", token.type);
  printf("%s", token.value);
}

switch (token.tokentype) {
case 'ILLEGAL':
  printf("ILLEGAL");
  break;
case 'EOF':
  printf("EOF");
  break;
case 'IDENT':
  printf("IDENT");
  break;
case 'INT':
  printf("INT");
  break;
case 'ASSIGN':
  printf("ASSIGN");
  break;
case 'PLUS':
  printf("PLUS");
  break;
case 'COMMA':
  printf("COMMA");
  break;
case 'SEMI_COLON':
  printf("SEMI_COLON");
  break;
case 'LPAREN':
  printf("LPAREN");
  break;
case 'RPAREN':
  printf("RPAREN");
  break;
case 'LBRACE':
  printf("LBRACE");
  break;
case 'RBRACE':
  printf("RBRACE");
  break;
case 'FUNCTION':
  printf("FUNCTION");
  break;
case 'LET':
  printf("LET");
  break;
}
