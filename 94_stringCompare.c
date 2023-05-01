#include <stdio.h>
#include <string.h>

//  stricmp(s1, s2)     to compare two strings, case-insensitive

int main() {
    // char str1[] = "HELLO";
    // char str2[] = "world";

    // int x = strcmp(str1, str2);

    // if (x == 0) {
    //     printf("str1 is same as str2: %d", x);
    // } else if (x > 0) {
    //     printf("x is positive: %d", x);
    // } else {
    //     printf("x is negative: %d", x);
    // }

    char str3[] = "hell";
    char str4[] = "hell0";

    printf("strncmp(): %d\n", strncmp(str3, str4, 4));

    char str5[] = "hell";
    char str6[] = "HELL";
    printf("stricmp(): %d\n", stricmp(str5, str6));

    printf("lenght of str6 is: %d\n", strlen(str6));

    printf("size of str6 is: %d\n", sizeof(str6));

    printf("strrev(str6): %s\n", strrev(str6));

    return 0;
}