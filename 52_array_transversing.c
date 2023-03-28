#include <stdio.h>

int main()
{
    // int a[100], n, i;
    // printf("\n Enter number of elements: ");
    // scanf("%d", &n);
    // printf("\n Enter array elements: ");

    // for (i = 0; i < n; i++)
    // {
    //     scanf("%d, &a[i]");
    // }
    // printf("\n Entered array elements are: ");
    // for (i = 0; i < n; i++)
    // {
    //     printf("\n%d", a[i]);
    // }

    // int a[5], i, sum = 0;
    // float avg = 0.0;

    // printf("\n Enter 5 numbers: ");
    // for (i = 0; i < 5; i++)
    // {
    //     scanf("%d", &a[i]);
    // }

    // printf("Printing the array: ");
    // for (i = 0; i < 5; i++)
    // {
    //     sum = sum + a[i];
    //     printf("%d ", a[i]);
    // }
    // printf("\nSum is: %d", sum);
    // avg = sum / 5;
    // printf("\nAverage is: %f", avg);

    char str[5] = "hello";

    for (int i = 0; i < 5; i++)
    {
        printf("%c address is: %u\n", str[i], &str[i]);
    }

    return 0;
}