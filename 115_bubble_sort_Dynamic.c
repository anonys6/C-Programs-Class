#include <stdio.h>

int main() {
    int array_length;
    printf("Enter the length of the array: ");
    scanf("%d", &array_length);

    int arr[array_length];

    for(int i = 0; i < array_length; i++) {
        printf("Enter a[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    for(int k = 0; k < array_length - 1; k++) {
        for (int i = 0; i < array_length - k; i++) {
            if (arr[i] > arr[i + 1]) {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }

    for (int i = 0; i < array_length; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}