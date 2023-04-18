#include <stdio.h>

int main()
{
    FILE *ptr;
    char c;
    int count_space = 0, count_newline = 0, count_tabs = 0;
    ptr = fopen("test.txt", "r");

    while (1)
    {
        c = fgetc(ptr);
        if (c == EOF)
            break;
        if (c == ' ')
            ++count_space;
        if (c == '\t')
            ++count_tabs;
        if (c == "\n")
            ++count_newline;
    }
    fclose(ptr);

    printf("space = %d\ntabs = %d\nnew line = %d\n", count_space, count_tabs, count_newline);

    return 0;
}