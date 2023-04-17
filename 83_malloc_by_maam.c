#include <stdio.h>
#include <stdlib.h>
int main()
{
    // malloc
    int *ptr;
    int n;
    printf("enter the size of array you want to create\n");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    int i;
    for (i = 0; i < n; i++)
    {
        printf("enter the value %d of this array\n");
        scanf("%d", &ptr[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf(" the value at %d of this array is %d\n", i, ptr[i]);
    }
    return 0;
}