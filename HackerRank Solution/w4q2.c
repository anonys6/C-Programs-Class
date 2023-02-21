#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int l, r, k;
    scanf("%d %d %d", &l, &r, &k);
    int count = 0;
    for (int i = l; i <= r; i++)
    {
        if (i % k == 0)
        {
            count = count + 1;
        }
    }
    printf("%d", count);
    return 0;
}