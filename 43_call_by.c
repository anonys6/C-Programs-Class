#include <stdio.h>

int demo(int*);

int main()
{
    int c = 5;
    // int x = demo(c);
    int x = demo(&c);
    printf("%d", x);
    return 0;
}

// int demo(int a)
// {
//     printf("Hello");
//     a = a + 1;
//     return a;
// }

int demo(int *a)
{
    printf("Hello");
    *a = *a + 1;
    return a;
}