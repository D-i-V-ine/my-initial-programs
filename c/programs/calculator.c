/*
========================================================
This file contains multiple calculator programs.
Each program is independent.

To use any program:
copy–paste required code into a new file and run.
========================================================
*/

/*
----------------------------
PROGRAM 1
Basic Calculator using Switch Case
----------------------------
*/

#include <stdio.h>
#include <ctype.h>
int main()
{
    int a, b;
    char x;

    printf("A for addition\n");
    printf("S for substraction\n");
    printf("M for multiplication\n");
    printf("D for division\n");
    printf("enter operation: ");
    scanf(" %c", &x);

    printf("enter first number: ");
    scanf("%d", &a);
    printf("enter second number: ");
    scanf("%d", &b);

    switch (toupper(x))
    {
    case ('A'):
        printf("addition %d and %d = %d", a, b, a + b);
        break;
    case ('S'):
        printf("substraction %d and %d = %d", a, b, a - b);
        break;
    case ('D'):
        if (b == 0)
        {
            printf("division by zero is not possible");
        }
        else
        {
            printf("division %d and %d = %d", a, b, a / b);
        }
        break;
    case ('M'):
        printf("multiplication %d and %d = %d", a, b, a * b);
        break;
    default:
        printf("invalid operation selected");
        break;
    }
    return 0;
}
