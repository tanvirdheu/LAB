%{
#include <stdio.h>
%}

%%

"if"        { printf("Keyword: if\n"); }
"else"      { printf("Keyword: else\n"); }
"while"     { printf("Keyword: while\n"); }
"for"       { printf("Keyword: for\n"); }
"do"        { printf("Keyword: do\n"); }
"switch"    { printf("Keyword: switch\n"); }
"case"      { printf("Keyword: case\n"); }
"default"   { printf("Keyword: default\n"); }
"return"    { printf("Keyword: return\n"); }
"break"     { printf("Keyword: break\n"); }
"int"       { printf("Keyword: int\n"); }
"float"     { printf("Keyword: float\n"); }
"double"    { printf("Keyword: double\n"); }
"char"      { printf("Keyword: char\n"); }
"void"      { printf("Keyword: void\n"); }
"bool"      { printf("Keyword: bool\n"); }
"const"     { printf("Keyword: const\n"); }
"static"    { printf("Keyword: static\n"); }
"struct"    { printf("Keyword: struct\n"); }
"typedef"   { printf("Keyword: typedef\n"); }

.|\n        { ECHO; }

%%

int main() {
    yylex();
    return 0;
}

int yywrap() {
    return 1;
}
