#include <stdio.h>

int main()
{
    FILE *ptr = NULL;
    ptr = fopen("85_newFile.txt", "r");
    char c = fgetc(ptr);
    printf("The character i read was %c\n");

    c = fgetc(ptr);
    printf("The character i read was %c\n", c);
    fclose(ptr);
    
    return 0;
}