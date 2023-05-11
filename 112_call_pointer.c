#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int num1 = 10;
    int num2 = 20;

    int *p1 = &num1;
    int *p2 = &num2;

    printf("%d\n", add(*p1, *p2));

    
    return 0;
}