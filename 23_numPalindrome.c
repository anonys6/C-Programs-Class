#include <stdio.h>

int main()
{
    int num, rem, temp;
    int rev = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (num > 0)
    {
        rem = num % 10;
        rev = (rev * 10) + rem;
        num = num / 10;
    }

    if (rev == temp)
    {
        printf("Given number is a palindrome");
    }
    else
    {
        printf("Given number is not a palindrome");
    }

    return 0;
}