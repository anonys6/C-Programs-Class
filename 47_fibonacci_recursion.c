// #include <stdio.h>

// int facto(int n)
// {
//     if (n == 0 || n == 1)
//         return 1;
//     else
//         return n * (facto(n - 1));
// }

// int fibo(int n)
// {
//     int s;
//     if (n == 1)
//         return 1;
//     s = n + fibo(n - 1);
//     return s;
// }

// int main()
// {
//     int k;
//     k = fibo(5);
//     printf("%d", k);

//     return 0;
// }

#include <stdio.h>

int fibonacci(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(num - 1) + fibonacci(num - 2);
    }
}

int main()
{
    int num;
    printf("Enter the num : ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        printf("%d, ", fibonacci(i));
    }

    return 0;
}
