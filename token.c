/*
 package token 
 type TokenType string
 type Token struct {
    Type TokenType
    Literal string
 }

 So this is the go version of the code, and I need to convert it into its C equivalent
 
*/

{
  ILLEGAL = "ILLEGAL"
  EOF = "EOF"
  // Identifiers and literals
  IDENT = "IDENT" // add, x, y, etc
  INT = "INT" // 123456342342
  // Operators
  ASSIGN = "="
  PLUS = "+"
  // Delimiters
  COMMA = ","
  SEMICOLON = ";"
  LPAREN = "("
  RPAREN = ")"
  LBRACE = "{"
  RBRACE = "}"
  // Keywords
  FUNCTION = "FUNCTION"
  LET = "LET"
}
