#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("myfile.txt", "r+");
    fputc('A', ptr);
    fputs("computer sciences", ptr);
    fclose(ptr);
    return 0;
}