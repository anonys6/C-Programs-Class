#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int facto(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return (n * facto(n - 1));
    }
}

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int num;
    scanf("%d", &num);
    printf("%d", facto(num));

    return 0;
}
