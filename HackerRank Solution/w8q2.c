#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int arraySize;

    scanf("%d", &arraySize);

    int array[arraySize];

    for (int i = 0; i < arraySize; i++)
    {
        scanf("%d", &array[i]);
    }

    int product = 1;

    for (int i = 0; i < arraySize; i++)
    {
        product = product * array[i];
    }

    printf("%d", product);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}