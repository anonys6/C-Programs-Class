#include <stdio.h>

int main()
{
    int a = 5 * (6, 4);
    printf("a = %d", a);

    int b = (3, 5, 2, 4);
    printf("\nb = %d", b);

    return 0;
}

// OUTPUT
// a = 20
// b = 4


