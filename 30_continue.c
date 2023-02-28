#include <stdio.h>

int main()
{
    int n = 10;

    // while (n > 0)
    // {
    //     printf("%d ", n);
    //     if (n % 2 == 1)
    //     {
    //         continue;       // after this, in while and do while loop, the execution will go to the conditional part which is in line 7
    //     }
    //     n--;
    // }

    for (n = 10; n > 0; n--)
    {
        if (n % 2 == 0)
            continue;
        printf("%d ", n);
    }

    return 0;
}