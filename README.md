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

`{\n 
LET, \n 
IDENTIFIER("f"), \n 
EQUAL_SIGN, \n 
INTEGER(82), \n 
PLUS_SIGN, \n 
INTEGER(91), \n 
SEMI_COLON \n 
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

`struct { \n 
  enum, \n 
  line, \n 
  name of token, \n 
  literal value of token \n 
};`

## 27 Sep 2026
I believe, I may have over thought the struct, I'm not sure I actually need the name 
oft he token, which would mean the struct would look more like this:

`struct { \n 
  line, \n 
  column \n 
  enum, \n 
  value \n 
}` 

And the reason for this layout is because the value is (potentially) a char[] (string)
of an unknown length and therefore size (in memory), so at the moment it should be the
case that this struct uses a neat arrangement of memory with as few gaps as possible.
I might have declared the enum part of the struct itself incorrectly, but it will be fixed.
