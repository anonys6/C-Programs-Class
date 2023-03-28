#include <stdio.h>

int sumNatural(int n)
{
    if (n == 1)
        return n;
    else
        return (n + sumNatural(n - 1));
}

int main()
{
    int n = 0;
    printf("Enter a natural number: ");
    scanf("%d", &n);
    printf("Sum is %d", sumNatural(n));

    return 0;
}