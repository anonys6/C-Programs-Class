#include <stdio.h>

void main()
{
    int res;
    printf("What do you want to do?\n1. Add\n2. Multiplication\n");
    scanf("%d", &res);

    if (res == 1)
    {
        printf("gonna add\n");
    }
    else if (res == 2)
    {
        printf("gonna multiply\n");
    }
    else
    {
        printf("the else part\n");
    }
}