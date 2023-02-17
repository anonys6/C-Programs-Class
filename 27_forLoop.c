#include <stdio.h>

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        printf("%d\n", i);
    }

    printf("\n\n");

    for (int i = 10; i > 0; i--)
    {
        printf("%d ", i);
    }

    printf("\n\n");

    int sum = 0;

    for (int i = 1; i <= 10; i++)
    {
        sum = sum + i;
    }

    printf("Sum: %d", sum);

    return 0;
}