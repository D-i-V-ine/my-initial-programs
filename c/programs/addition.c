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
