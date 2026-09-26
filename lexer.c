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
  enum tokentype; // As below, this is the kind of token the lexer/scanner has
                  // found as its enum
  // int line; // This will be the number of the line that the token is on, but
  // I'll sort this later
  char lexeme[];  // This is the string format name of the token i.e. the enum
                  // for INT will have the lexeme "INT"
  char literal[]; // The literal piece of text in the code, i.e. an int might
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
