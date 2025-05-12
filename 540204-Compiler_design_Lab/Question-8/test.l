%{
#include <stdio.h>
%}

%%

/* Recognize single digits */
[0-9]          { printf("Digit: %s\n", yytext); }

/* Ignore whitespace */
[ \t\n]         { /* Ignore whitespace */ }

.               { /* Ignore any other characters */ }

%%

int main() {
    printf("Enter some input to recognize digits:\n");
    yylex();
    return 0;
}

int yywrap() {
    return 1;
}
