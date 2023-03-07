#include <stdio.h>

int main()
{
    int a = 6543;
    printf("*%d,*%-3d*\n", a, a);

    int b = 123;
    printf("*%06d*\n", b);

    float c = 654.123456f;
    printf("%3.3f, %3.2f\n", c, c);
}