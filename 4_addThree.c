#include <stdio.h>

void main()
{
    int a, b, c, sum;

    printf("Enter first operand: \n");
    scanf("%d", &a);

    printf("Enter second operand: \n");
    scanf("%d", &b);

    printf("Enter third operand: \n");
    scanf("%d", &c);

    sum = a + b + c;

    printf("The sum is: %d", sum);
}