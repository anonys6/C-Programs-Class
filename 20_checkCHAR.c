#include <stdio.h>

// PROGRAM TO CHECK THE GIVEN CHARACTER IS DIGIT, ALPHABET OR SPECIAL SYMBOL

int main()
{
    char c;
    char forSwitch;

    printf("Enter any single length chararacter and submit: ");
    scanf("%c", &c);

    if (c >= 48 && c <= 57)
    {
        // printf("Given character is a digit\n");
        forSwitch = 'd';
    }
    else if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
    {
        // printf("Given character is an alphabet\n");
        forSwitch = 'a';
    }
    else
    {
        // printf("Given character is a special symbol\n");
    }

    // Giving same output using switch statement

    switch (forSwitch)
    {
    case 'd':
        printf("Given character is a digit\n");
        break;

    case 'a':
        printf("Given character is an alphabet");
        break;
    default:
        printf("Given character is a special symbol");
        break;
    }

    return 0;
}