#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int arraySize;
    int lastSum = 0;
    
    scanf("%d", &arraySize);
    
    int array[arraySize];
    int arrayLast[arraySize];
    
    for (int i = 0; i < arraySize; i++)
    {
        int temp = 0;
        scanf("%d", &temp);
        array[i] = temp;
        arrayLast[i] = temp % 10;
    }
    
    char lastStr[arraySize];

    for (int i = 0; i < arraySize; i++)
    {
        // printf("%d ", arrayLast[i]);
        lastSum += arrayLast[i] * pow(10, arraySize - 1 - i);
    }

    // printf("\n%d", lastSum);

    if (lastSum % 10 == 0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
