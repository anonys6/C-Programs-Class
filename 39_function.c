#include <stdio.h>

int add();
int product();
int facto(int);

int main()
{
    add();
    product();

    // printf("FACTORIAL FUNCTION\n");
    // int n = 0;
    // printf("Enter a number: ");
    // scanf("%d", &n);
    // printf("%d", facto(n));

    product();

    // while(1)
    // {
    //     printf("Enter 1")
    // }

    return 0;
}

int add()
{
    int a, b;
    
    printf("ADD FUNCTION\n");
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Sum is: %d\n", a + b);
}

int product()
{
    int a, b;

    printf("PRODUCT FUNCTION\n");
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Product is: %d\n", a * b);
}

int facto(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return (n * facto(n - 1));
    }
}