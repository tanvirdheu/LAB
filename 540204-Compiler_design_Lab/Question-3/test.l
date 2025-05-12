%{
#include <stdio.h>
%}

%%

/* Real numbers: Digits followed by a decimal point and more digits */
[0-9]+\.[0-9]+   { printf("Real number: %s\n", yytext); }

/* Ignore whitespace */
[ \t\n]   { /* Ignore whitespace */ }

%%

int main() {
    printf("Enter some input to recognize real numbers:\n");
    yylex();
    return 0;
}

int yywrap() {
    return 1;
}
