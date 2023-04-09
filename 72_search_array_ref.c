#include <stdio.h>

int linSearch(int *arr, int, int);

int linSearch(int *arr, int n, int find)
{
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        if (find == arr[i])
        {
            printf("Index of %d: %d\n", find, i);
            count += 1;
            return count;
        }
    }
    return count;
}

int main()
{
    int arr[5] = {2, 3, 5, 8, 11};

    int find = 0;

    printf("What do you want to search in the array: ");
    scanf("%d", &find);

    int count = linSearch(&arr[0], 5, find);

    if (count == 0)
        printf("Element not found");
}