#include <stdio.h>

int main() {
    int arr[5] = {3, 6, 9, 12, 15};
    int *p = arr;

    int sum = 0, mean = 0;


    for (int i = 0; i < 5; i++) {
        sum = sum + *(p + i);
    }

    mean = sum / 5;

    printf("Sum is: %d\n", sum);
    printf("Mean is: %d\n", mean);
}