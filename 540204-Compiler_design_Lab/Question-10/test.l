%{
#include <stdio.h>
%}

%%

/* Recognize the specified verbs */
is|am|are|were|was|be|being|been|do|does|did|will|would|should|can|could|has|have|had|go
                    { printf("Verb: %s\n", yytext); }

/* Ignore whitespace */
[ \t\n]             { /* Ignore whitespace */ }

.                   { /* Ignore any other characters */ }

%%

int main() {
    printf("Enter input to recognize verbs:\n");
    yylex();
    return 0;
}

int yywrap() {
    return 1;
}
