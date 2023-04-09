#include <stdio.h>

void reference(int[], int);

int main()
{
    int arr[5] = {2, 4, 6, 6, 10};
    int n, i;
    // printf("Enter n: ");
    // scanf("%d", &n);
    printf("Printing array arr:\n");
    for (i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    
    reference(arr, 5);

    printf("\nPrinting array arr after calling the function:\n");
    for (i = 0; i < 5; i++)
        printf("%d ", arr[i]);
}

void reference(int x[], int s)
{
    printf("\nPrinting array inside function: ");
    for (int i = 0; i < 5; i++)
        printf("%d ", x[i]);
    x[3] = 8;
}