#include <stdio.h>

int main() {
    // int a[5] = {14, 4, 5, 2, 13};

    int a[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    for (int k = 0; k < 4; k++) {
        for (int i = 0; i < 5 - k; i++) {
            if (a[i] > a[i + 1]) {
                int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
}