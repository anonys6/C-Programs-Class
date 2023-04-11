#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int num, i;

    printf("Number of elements: ");
    scanf("%d", &num);
    printf("Elements: %d\n", num);

    ptr = (int *)malloc(num * sizeof(int));

    for (i = 0; i < num; ++i)
    {
        scanf("%d", &ptr[i]);
    }

    printf("The elements of the array are: ");
    for (i = 0; i < num; ++i)
    {
        printf("%d ", ptr[i]);
    }
    
    return 0;
}