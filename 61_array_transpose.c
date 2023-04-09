#include <stdio.h>

int main()
{
    int i, j;
    int a[3][3], b[3][3];

    printf("Enter matrix a\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter the elements of [%d, %d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    int row, col;

    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 3; col++)
        {
            b[row][col] = a[col][row];
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

    printf("Transpose of matrix a:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
}