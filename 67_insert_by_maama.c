#include <stdio.h>

int main()
{
    int array[100], position, c, n, value;
    printf("Enter number of element: ");
    scanf("%d", &n);
    printf("Ener %d elements: \n", n);
    
    for (c = 0; c < n; c++)
        scanf("%d", &array[c]);
    
    printf("Enter teh location where you wish to insert an element:\n");
    scanf("%d", &position);
    printf("Enter the value to insert:\n");
    scanf("%d", &value);

    for ( c = n - 1; c >= position - 1; c--)
        array[c + 1] = array[c];
    
    array [position - 1] = value;

    for (c = 0; c < n; c++)
        printf("%d ", array[c]);

    return 0;
}