# Interpreter in C

## 22 Sep 2026
Start of project, mostly just want to get stuck in and start working on 
**something** so that I don't let myself get bogged down in trying to 
learn it all before I try to do anything with it. 

This project is, admittedly, going to be something of following along 
to Thorsten Balls "Interpreter in Go" book, except for the fact I'll be 
writing it in C and, if possible, I'm going to interpret something else 
instead of the 'Monkey' Language that he uses in his book. I'm also going
to be using a bunch of other resources, online and in text, such as "Effective C".

## 24 Sep 2026
I have not much time on my hands at the moment, but I have begun on defining tokens.

## 25 Sep 2026
Small update because as above, not a ton of time, and wrapping my head around
setting up a lexer is a fun challenge, but a challenge. I think, because I'm 
writing in C, the idea is to enumerate the tokens in some capacity so that
they can be turned into something that can be given meaning that the computer
can understand.

In a sense I'm starting to imagine it as being some kind of overly verbose
caveman translator, to the effect that something like:

`let f = 82 + 91;`

Turns into:

`{
LET,
IDENTIFIER("f"),
EQUAL_SIGN,
INTEGER(82),
PLUS_SIGN,
INTEGER(91),
SEMI_COLON
}`

## 26 Sep 2026
It's pretty frustrating to be on roughly the right track, then doubt yourself, 
only to find confirmation that you are on the right track, as I have learned today
when I tried to continue working on implementing the token list, as I thought that
since an enum in C will just be a list of numbers that have a text representation, 
that I would need to implement a struct that pair the enum with the name of the type
as well as the literal value of that token. Then I doubted myself, read a bit of 
'Crafting Interpreters' and discovered I was right, and I just need to work on/learn
more about structs in C. 

So yes, currently under the understanding that I need my tokens to be structs that
look like this (-ish):

`struct {
  enum,
  line,
  name of token,
  literal value of token
};`

