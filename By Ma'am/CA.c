#include <stdio.h>

int main()
{
    int start = 0, end = 0;
    scanf("%d %d", &start, &end);

    int sum = 0;

    for (int i = start; i <= end; i++)
    {
        sum = sum + i;
    }

    printf("%d", sum);

    return 0;
}