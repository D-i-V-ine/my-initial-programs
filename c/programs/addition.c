/*
========================================================

This file contains multiple C programs related to addition.
Each program is written separately for learning purpose.

To use any program:
- Copy that specific code
- Paste it into a new file
- Compile and run

========================================================
*/

/*
----------------------------
PROGRAM 1
basic addition program
adds two numbers only once
----------------------------
*/
#include <stdio.h>
int main()
{
    int x, y;
    printf("enter first number: ");
    scanf("%d", &x);
    printf("enter second number: ");
    scanf("%d", &y);
    printf("%d + %d = %d", x, y, (x + y));
    return 0;
}

/*
----------------------------
PROGRAM 2
addition using loop
asks user to continue
----------------------------
*/
#include <stdio.h>
#include <conio.h>
int main()
{
    int x, y;
    char ch;
    do
    {
        printf("enter first number: ");
        scanf("%d", &x);
        printf("enter second number: ");
        scanf("%d", &y);
        printf("%d + %d = %d", x, y, (x + y));

        getchar();
        printf("\n\nConitune? y/n :");
        ch = getche();
        printf("\n");
    } while (ch == 'Y' || ch == 'y');
    return 0;
}

/*
----------------------------
PROGRAM 3
continuous addition
keeps adding values
stops when '=' is entered
----------------------------
*/
#include <stdio.h>
#include <conio.h>
int main()
{
    int num, sum = 0, flag = 1;
    printf("enter '=' to cal\n");
    printf("enter values : \n");
    printf("0 + ");
    while (flag != 0)
    {
        flag = scanf("%d", &num);
        if (flag == 1)
        {
            getchar();
            sum += num;
            printf("%d + ", sum);
        }
        else
        {
            flag = 0;
            printf("total : %d", sum);
        }
    }
}
