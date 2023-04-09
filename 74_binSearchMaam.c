#include <stdio.h>

int main()
{
    int a[5], n, loc = -1, key, beg, last, mid, i;

    beg = 0;
    last = n - 1;

    printf("Enter integer: ");
    scanf("%d", &key);
    
    while(beg <= last)
    {
        mid = (beg + last) / 2;
        if (a[mid] == key)

        else if (a[mid] > key)
            last = mid - 1;
        else if (a[mid] < key)
            beg = mid + 1;
            
    }
    
    return 0;
}