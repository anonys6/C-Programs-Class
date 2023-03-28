#include <stdio.h>

int main()
{
    int arr[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int s = 0;

    printf("When to stop in array: ");
    scanf("%d", &s);

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == s)
        {
            break;
        }
        printf("%d\n", arr[i]);
    }
    return 0;
}