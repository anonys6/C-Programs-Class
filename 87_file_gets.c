#include <stdio.h>

int main() {
    FILE *ptr = NULL;

    ptr = fopen("test.txt", "r");
    char str[34];

    fgets(str, 5, ptr);

    printf("The string i read is %s\n", str);
    
    fclose(ptr);

    return 0;
}