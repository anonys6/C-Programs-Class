#include <stdio.h>

void avg5(int, int, int, int, int);

int main()
{
    int a, b, c, d, e;
    printf("Enter 5 numbers: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    avg5(a, b, c, d, e);
    return 0;
}

void avg5(int a, int b, int c, int d, int e)
{
    float avg = 0.0;
    avg = (a + b + c + d + e) / 5;
    printf("Average: %f", avg);
}