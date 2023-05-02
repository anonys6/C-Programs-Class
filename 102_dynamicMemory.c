#include <stdio.h>
#include <stdlib.h>

int main () {
    int *ptr;

    ptr = malloc(5 * sizeof(int));

    if (ptr != NULL) {
        printf("Memory created successfully!\n");
    }

    ptr[1] = 32;
    ptr[0] = 21;
    
    printf("%d\n", ptr[1]);
    printf("%d\n", ptr[0]);
    
    int x = sizeof(ptr) / sizeof(ptr[0]);

    printf("%d\n", sizeof(ptr));

    return 0;
}