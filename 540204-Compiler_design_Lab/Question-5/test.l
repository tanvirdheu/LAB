%{
#include <stdio.h>
%}

%%

/* Floating-point numbers: Digits, a decimal point, and more digits */
[+-]?[0-9]+\.[0-9]+([eE][+-]?[0-9]+)?  { printf("Float: %s\n", yytext); }

/* Ignore whitespace */
[ \t\n]         { /* Ignore whitespace */ }

.               { /* Ignore any other characters */ }

%%

int main() {
    printf("Enter some input to recognize floating-point numbers:\n");
    yylex();
    return 0;
}

int yywrap() {
    return 1;
}
