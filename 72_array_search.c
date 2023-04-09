#include <stdio.h>

int main()
{
    int arr[5] = {2, 3, 5, 8, 11};

    int find = 0, count = 0;

    printf("What do you want to search in the array: ");
    scanf("%d", &find);

    for (int i = 0; i < 5; i++)
    {
        if (find == arr[i])
        {
            printf("Index of %d: %d\n", find, i);
            count += 1;
            break;
        }
    }

    if (count == 0)
        printf("Element not found");
}