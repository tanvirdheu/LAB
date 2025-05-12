%{
#include <stdio.h>
%}

%%

/* Integer: One or more digits, with optional positive or negative sign */
[+-]?[0-9]+    { printf("Integer: %s\n", yytext); }

/* Ignore whitespace */
[ \t\n]         { /* Ignore whitespace */ }

.               { /* Ignore any other characters */ }

%%

int main() {
    printf("Enter some input to recognize integers:\n");
    yylex();
    return 0;
}

int yywrap() {
    return 1;
}
