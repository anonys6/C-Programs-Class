#include <stdio.h>
#include <string.h>

int main() {
    char s[10], t;
    int n, i, j;

    printf("\nEnter String: ");
    gets(s);
    n = strlen(s);
    
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (s[j] > s[j + 1]) {
                t = s[j];
                s[j] = s[j + 1];
                s[j + 1] = t;
            }
        }
    }

    printf("\nSorted String: %s\n", s);

    return 0;
}