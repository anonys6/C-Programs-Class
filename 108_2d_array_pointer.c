#include <stdio.h>

int main() {
    int arr[5][2] = {{3, 6}, {9, 12}, {15, 18}, {21, 24}, {27, 30}};
    int *p = arr;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 2; j++) {
            printf("arr[%d][%d] = %d\n", i, j, *(p + i * 2 + j));
        }
        printf("\n");
    }
}