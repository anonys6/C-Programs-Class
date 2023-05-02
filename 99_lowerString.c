#include <stdio.h>

int main()
{
    char a[] = "hello";
    
    int i = 0;

    while (a[i] != '\0') {
        if (a[i] >= 'a' && a[i] <= 'z') {
            a[i] = a[i] - 32;
        }
        i++;
    }

    printf("%s\n", a);

    return 0;
}