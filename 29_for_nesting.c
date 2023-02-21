#include <stdio.h>

int main()
{
    int a = 10;

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            printf("%d     ", j * i);
        }
        printf("\n");
    }

    return 0;
}