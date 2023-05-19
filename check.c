#include <stdio.h>
void main()
{
    int k = 4;
    int *const p = &k;
    int r = 3;
    p = &r;
    printf("%d", p);
}