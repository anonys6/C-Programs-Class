#include <stdio.h>

int main()
{
    int i = 1;
    int j = 2;

    while (i <= 10)
    {
        j = 2 * i;

        printf("%d\n", j);

        i++;
    }

    return 0;
}