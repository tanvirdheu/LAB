%{
#include <stdio.h>
%}

%%
/* Identifiers: Start with a letter or underscore, followed by letters, digits, or underscores */
[a-zA-Z_][a-zA-Z0-9_]*  { printf("Identifier: %s\n", yytext); }

/* Ignore whitespace */
[ \t\n]   { /* Ignore whitespace */ }
%%

int main() {
    printf("Enter some code to recognize identifiers:\n");
    yylex();
    return 0;
}

int yywrap() {
    return 1;
}
