#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int num = 5;

    ptr = (int *)malloc(num * sizeof(int));

    ptr[0] = 5;
    ptr[1] = 6;
    ptr[2] = 7;

    for (int i = 0; i < num; i++)
        printf("%d ", ptr[i]);

    return 0;
}