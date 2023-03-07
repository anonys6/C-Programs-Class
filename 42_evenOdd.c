#include <stdio.h>

int evenOdd(int);

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (evenOdd(a) == 1)
    {
        printf("%d is an even number", a);
    }
    else
    {
        printf("%d is a odd number", a);
    }

    return 0;
}

int evenOdd(int a)
{
    if (a % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}