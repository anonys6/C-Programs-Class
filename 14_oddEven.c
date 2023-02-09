#include <stdio.h>

void main ()
{
    // int num = 0;

    // printf("Enter a number: ");
    // scanf("%d", &num);

    // if (num % 2 == 0)
    // {
    //     printf("%d is an even number\n", num);
    // }
    // else
    // {
    //     printf("%d is a odd number\n", num);
    // }

    int num = 0;

    scanf("%d", &num);

    if (num > 10)
    {
        printf("%d is greater than 10\n", num);
    }
    if (num > 100)
    {
        printf("%d is greater than 100\n", num);
    }
    if (num > 1000)
    {
        printf("%d is greater than 1000\n", num);
    }
    if (num > 10000)
    {
        printf("%d is greater than 10000\n", num);
    }
}