#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    int size = sizeof(arr) / sizeof(arr[0]);
    
    printf("Size of the array is: %d", size);

    return 0;
}