#include <stdio.h>

int main()
{
    char x[100];
    int i = 0, count = 0;

    printf("Enter the string: ");
    gets(x);

    while(x[i] != "\0") {
        if (x[i] == 'a' || x[i] == 'e' || x[i] == 'i' || x[i] == 'o' || x[i] == 'u') {
            count++;
        }
        i++;
    }

    printf("\nNumber of vowels: %d\n", count);
    
    return 0;
}