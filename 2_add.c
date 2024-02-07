#include <stdio.h>

void main()
{
    int a, b, c;
    printf("Enter the first operand: \n");
    scanf("%d", &a);

    printf("Enter the second operand: \n");
    scanf("%d", &b);

    c = a + b;

    printf("The sum is: %d", c);

    // getch();                // for holding the screen in command line
}