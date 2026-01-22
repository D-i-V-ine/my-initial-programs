/*
========================================================
This file contains multiple programs to check even or odd.
Each program is independent.

To use any program:
copy–paste required code into a new file and run.
========================================================
*/


/*
----------------------------
PROGRAM 1
Even Odd using If Else
----------------------------
*/
#include <stdio.h>
int main()
{
    int x;
    printf("enter a  number: ");
    scanf("%d", &x);
    if (x % 2 == 0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
}

/*
----------------------------
PROGRAM 2
Even Odd using Array
----------------------------
*/
#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    char *a[2] = {"even", "odd"};
    printf("%s", a[x % 2]);
    return 0;
}