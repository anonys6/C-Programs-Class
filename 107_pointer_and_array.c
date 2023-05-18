/*
*p = a
*(p + 1)
*(a + 1)
p[1]
1[p]
1[a]
*/

#include <stdio.h>

int main() {
    int arr[5] = {3, 6, 9, 12, 15};
    int *p = arr;

    printf("arr[0] = %d\n", *(p + 0));
    printf("arr[0] = %d\n", *(arr));
    printf("arr[0] = %d\n", p[0]);
    printf("arr[0] = %d\n", arr[0]);
    printf("arr[0] = %d\n", 0[p]);
    printf("arr[0] = %d\n", 0[arr]);

    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, *(p + i));
    }
}