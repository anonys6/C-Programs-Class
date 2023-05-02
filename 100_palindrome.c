#include <stdio.h>

int main()
{
    char str1[6] = "madam";
    char str2[6];

    int i = 0;
    int j = 0;

    while(str1[i] != '\0') {
        str2[4 - i] = str1[i];
        i++;
    }

    str2[i] = '\0';

    printf("str1: %s\n", str2);
    printf("str2: %s\n", str1);

    if (strcmp(str1, str2) == 0) {
        printf("palindrome");
    } else {
        printf("not palindrome");
    }

    // if (str1 == str2) {
    //     printf("palindrome");
    // } else {
    //     printf("not palindrome");
    // }

    return 0;
}