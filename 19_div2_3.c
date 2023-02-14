#include <stdio.h>

int main()
{
    int a = 0;

    printf("Enter a number: ");
    scanf("%d", &a);

    // if (a % 2 == 0 && a % 3 == 0)
    // {
    //     printf("This number is divisible by  both 2 and 3\n");
    // }
    // else if (a % 2 == 0 && a % 3 != 0)
    // {
    //     printf("The number is divisible by 2 but not by 3\n");
    // }
    // else if (a % 2 != 0 && a % 3 == 0)
    // {
    //     printf("The number is divisible by 3 but not by 2\n");
    // }
    // else
    // {
    //     printf("The number is not divisible by either 2 or 3\n");
    // }

    // Different if to use OR (||) operator

    if (a % 2 == 0 || a % 3 == 0)
    {
        printf("The number is either divisible by 2 or by 3\n");

        if (a % 2 == 0)
        {
            printf("The number is divisible by 2");
            if (a % 3 == 0)
            {
                printf(" and also by 3\n");
            }
        }
        else
        {
            printf("The number is divisible by 3");
        }
    }

    return 0;
}