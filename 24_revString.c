#include <stdio.h>
#include <string.h>

int main()
{
    char str[30];

    printf("\nEnter a string to be reversed: ");
    scanf("%s", str);

    printf("\nAfter reversing the string: %s, ", strrev(str));

    if (str == strrev(str))
    {
        printf("Given word is palindrome");
    }
    else
    {
        printf("Given word is not palindrome");
    }
    return 0;
}