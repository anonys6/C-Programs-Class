// #include <stdio.h>

// int main()
// {
//     int x, y;
//     scanf("%d", &x);
//     scanf("%d", &y);
//     float a, b;
//     scanf("%f", &a);
//     scanf("%f", &b);
//     int sum = x + y;
//     float sum1 = a + b;
//     int diff = x - y;
//     float diff1 = a - b;
//     printf("%d %d\n", sum, diff);
//     printf("%.1f %.1f", sum1, diff1);

//     return 0;
// }

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    int sum = a + b;
    int diff = a - b;

    float c, d;
    scanf("%f", &c);
    scanf("%f", &d);
    float sum1 = c + d;
    float diff1 = c - d;

    printf("%d %d\n", sum, diff);
    printf("%.1f %.1f", sum1, diff1);

    return 0;
}