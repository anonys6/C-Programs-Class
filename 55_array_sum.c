#include <stdio.h>

int main()
{
    int a[5] = {2, 4, 6, 8, 10};
    int b[5] = {3, 6, 9, 12, 15};
    int c[5];

    for (int i = 0; i < 5; i++)
        c[i] = a[i] + b[i];

    for (int i = 0; i < 5; i++)
        printf("%d ", c[i]);

    return 0;
}