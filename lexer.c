/*
 package token
 type TokenType string
 type Token struct {
    Type TokenType
    Literal string
 }

 So this is the go version of the code, and I need to convert it into its C
 equivalent

*/
struct token {
  int line;       // This will be the number of the line that the token is on
  int column;     // This will be the number of the column that the token is on
                  // (first character)
  enum tokentype; // As below, this is the kind of token found
  char value[];   // The literal piece of text in the code, i.e. an int might
                  // literally be the number 7
};

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

// TODO: Switch for tokentypes to unwrap the enum from values to their names.
