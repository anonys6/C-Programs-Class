#include <stdio.h>

int main() {
    int num1 = 4;
    int num2 = 5;
    int *p1 = &num1;
    int *p2 = &num2;

    printf("Enter num1: ");
    scanf("%d", p1);
    printf("Enter num2: ");
    scanf("%d", p2);

    int sum = *p1 + *p2;

    printf("Sum of num1 and num2 using pointers is: %d", sum);

    return 0;
}