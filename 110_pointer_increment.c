#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr; // initialize pointer to first element of array
    
    printf("Array elements using pointer:\n");
    printf("%d ", *ptr); // print first element
    
    ptr++; // increment pointer to next element
    printf("%d ", *ptr); // print second element
    
    ptr++; // increment pointer to next element
    printf("%d ", *ptr); // print third element
    
    ptr--; // decrement pointer to previous element
    printf("%d ", *ptr); // print second element
    
    ptr--; // decrement pointer to previous element
    printf("%d\n", *ptr); // print first element
    
    return 0;
}
