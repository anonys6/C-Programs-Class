// #include <stdio.h>

// int main()
// {
//     printf("Hello");
//     main();
    
//     return 0;
// }

#include <stdio.h>


int f(int n)
{
    if (n > 0)
        return (n + f(n - 2));
}

int main()
{
    int n = 10;
    printf("%d", f(n));
    
    return 0;
}