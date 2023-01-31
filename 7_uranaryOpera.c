#include <stdio.h>

void main()
{
    // int a = 4;
    // printf("initial value of a: %d\n", a);

    // a++;

    // printf("value of a after post incremening a: %d\n", a);

    // printf("value of a while pre incrementing a: %d\n", ++a);

    // int x = 3, y;
    // y = x++;

    // printf("%d %d\n", x, y);

    int i = 5;
    signed int si;
    unsigned int ui;
    long int li;
    long long int lli;
    float f = 4.3;
    double d;
    long double ld;

    printf("size of int %d\n", sizeof(i));
    printf("size of signed int %d\n", sizeof(si));
    printf("size of unsigned int %d\n", sizeof(ui));
    printf("size of long int %d\n", sizeof(li));
    printf("size of long long int %d\n", sizeof(lli));
    printf("size of float %d\n", sizeof(f));
    printf("size of double %d\n", sizeof(d));
    printf("size of long doulble %d\n", sizeof(ld));
}