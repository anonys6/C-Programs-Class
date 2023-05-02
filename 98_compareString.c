#include <stdio.h>
#include <string.h>

int main()
{
    char a[] = "hello";
    char b[] = "hello";

    if (strlen(a) == strlen(b)) {
        int i = 0;
        while (a[i] != '\0') {
            if (a[i] != b[i]) {
                printf("Strings are not equal");
                break;
            }
            i++;
        }
        if (i == strlen(a)) {
            printf("Strings are equal");
        }
    }
    
    return 0;
}