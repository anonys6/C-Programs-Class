#include <stdio.h>

int main()
{
    // goto Again;
    // printf("This is my first line\n");

    // Again:
    // printf("Code which is after again\n");

    //     int n = 10;
    // A:
    //     printf("%d ", n);
    //     n--;

    //     if (n > 0)
    //         goto A;

    //     return 0;

    //     int x;

    //     printf("Enter a number: ");
    //     scanf("%d", &x);

    //     if (x % 2 == 0)
    //         goto even;
    //     else
    //         goto odd;

    // even:
    //     printf("%d is even\n", x);
    //     return 0;
    // odd:
    //     printf("%d is odd\n", x);

    //     // goto even;

    int i, j, k;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 3; k++)
            {
                printf("%d %d %d\n", i, j, k);
                if (j == 3)
                {
                    goto out;
                }
            }
        }
    }

out:
    printf("came out of loop");
}