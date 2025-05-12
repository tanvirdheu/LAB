%{
#include <stdio.h>
%}

%%

/* Recognize positive or negative integer */
[+-]?[0-9]+          { printf("Integer: %s\n", yytext); }

/* Recognize positive or negative floating-point numbers */
[+-]?[0-9]+\.[0-9]+   { printf("Float: %s\n", yytext); }

/* Ignore whitespace */
[ \t\n]               { /* Ignore whitespace */ }

.                     { /* Ignore any other characters */ }

%%

int main() {
    printf("Enter some input to recognize integers and floats:\n");
    yylex();
    return 0;
}

int yywrap() {
    return 1;
}
