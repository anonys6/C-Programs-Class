#include <stdio.h>

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * (factorial(n - 1));
}

int main()
{
    int x = 0;

    printf("Enter a number: ");
    scanf("%d", &x);

    printf("Factorial of %d = %d", x, factorial(x));
    
    return 0;
}