#include <stdio.h>

int main()
{
    int a[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter matrix element of position a[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("ARRAY a\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    int count = 0, ele = 0o;
    printf("What do you want to count: ");
    scanf("%d", &ele);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] == ele)
                count = count + 1;
        }
    }

    printf("Count of %d is: %d", ele, count);

    return 0;
}