#include <stdio.h>

int main()
{
    int arr[5] = {2, 4, 5, 8, 10};
    int rev[5];
    
    for (int i = 0; i < 5; i++)
    {
        rev[i] = arr[5 - i - 1];
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", rev[i]);
    }

    return 0;
}