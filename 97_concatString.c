#include <stdio.h>

int main() {
    char a[10] = "hello";
    char b[10] = "world";
    char c[20];

    int i = 0, j = 0;

    while (a[i] != '\0') {
        c[i] = a[i];
        i++;
    }

    while (b[j] != '\0') {
        c[i] = b[j];
        i++;
        j++;
    }

    c[i] = '\0';

    printf("%s\n", c);

    return 0;
}
