#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Hello";
    char str2[] = " World";
    // char *str3;
    // strcpy(str, str3);

    printf("strrev(str): %s\n", strrev(str));
    printf("strlen(str): %d\n", strlen(str));
    printf("strcmp(str, str2): %d\n", strcmp(strrev(str), str2));       // +ve if s1 is greater
    printf("strcat(str, str2): %s\n", strcat(str, str2));
    printf("strupr(str): %s\n", strupr(str));
    printf("strlwr(str): %s\n", strlwr(str));

    // printf("%s", strncpy("hello", "holiday", 4));

    return 0;
}