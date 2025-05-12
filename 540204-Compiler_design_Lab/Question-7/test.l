%{
#include <stdio.h>
%}

%%

/* Recognize punctuation symbols */
[.,;!?()]          { printf("Punctuation: %s\n", yytext); }

/* Ignore whitespace */
[ \t\n]             { /* Ignore whitespace */ }

.                   { /* Ignore any other characters */ }

%%

int main() {
    printf("Enter some input to recognize punctuation symbols:\n");
    yylex();
    return 0;
}

int yywrap() {
    return 1;
}
