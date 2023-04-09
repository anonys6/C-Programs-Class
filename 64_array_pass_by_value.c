#include <stdio.h>

void value(int *);

int main()
{
    int arr[5] = {2, 4, 6, 6, 10};
    int i;

    printf("Printing array arr:\n");
    for (i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    printf("\nPrinting array arr after calling the function:\n");
    for (i = 0; i < 5; i++)
        value(&arr[i]);

    printf("\nPrinting array arr:\n");
    for (i = 0; i < 5; i++)
        printf("%d ", arr[i]);
}

void value(int *x)
{
    if (*x == 6)
    {
        *x = 8;
    }
    printf("%d ", *x);
}