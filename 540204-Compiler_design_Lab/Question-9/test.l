%{
#include <stdio.h>
%}

%%

/* Arithmetic operators */
\+                  { printf("Arithmetic Operator: +\n"); }
\-                  { printf("Arithmetic Operator: -\n"); }
\*                  { printf("Arithmetic Operator: *\n"); }
\/                  { printf("Arithmetic Operator: /\n"); }
\%                  { printf("Arithmetic Operator: %%\n"); }

/* Relational operators */
==                  { printf("Relational Operator: ==\n"); }
!=                  { printf("Relational Operator: !=\n"); }
<                   { printf("Relational Operator: <\n"); }
>                   { printf("Relational Operator: >\n"); }
<=                  { printf("Relational Operator: <=\n"); }
>=                  { printf("Relational Operator: >=\n"); }

/* Logical operators */
&&                  { printf("Logical Operator: &&\n"); }
\|\|                { printf("Logical Operator: ||\n"); }

/* Assignment operators */
=                   { printf("Assignment Operator: =\n"); }

/* Ignore whitespace */
[ \t\n]             { /* Ignore whitespace */ }

.                   { /* Ignore any other characters */ }

%%

int main() {
    printf("Enter input to recognize operators:\n");
    yylex();
    return 0;
}

int yywrap() {
    return 1;
}
