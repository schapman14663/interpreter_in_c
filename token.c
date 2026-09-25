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

enum token {
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
