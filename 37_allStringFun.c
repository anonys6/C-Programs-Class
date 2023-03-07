#include <stdio.h>

int main()
{
    char a, b, c;
    printf("getchar(): ");
    a = getchar();
    // b = getche();
    // c = getch();
    putchar(a);
    
    printf("\ngets(): ");
    char str[10];
    gets(str);
    puts(str);
}
