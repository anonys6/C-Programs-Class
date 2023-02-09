#include <stdio.h>

void main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    printf("a = %d, b = %d\n", a, b);

    if (a > b)
    {
        printf("a is greater: %d\n", a);
    }
    else
    {
        printf("b is greater: %d\n", b);
    }
}