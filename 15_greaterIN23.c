#include <stdio.h>

void main()
{
    int a, b, c;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("a = %d, b = %d, c = %d\n", a, b, c);

    if (a > b && a > c)
    {
        printf("a = %d is the greatest\n", a);
    }
    if (b > a && b > c)
    {
        printf("b = %d is the greatest\n", b);
    }
    if (c > a && c > b)
    {
        printf("c = %d is the greatest\n", c);
    }
}