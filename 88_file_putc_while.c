#include <stdio.h>

int main()
{
    FILE *ptr = NULL;
    char ch;

    ptr = fopen("test.txt", "w");
    while ((ch = getchar()) != EOF)
    {
        fputc(ch, ptr);
        printf("%c", ch);
    }

    return 0;
}