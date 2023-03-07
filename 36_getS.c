#include <stdio.h>

int main()
{
    // char ch[5];
    // printf("Enter the string: ");
    // gets(ch);
    // printf("\nEntered string: %s", ch);

    char ch[30];
    printf("Enter the string");
    gets(ch);
    puts("Entered string: ");
    puts(ch);

    char c;
    printf("Enter a character: ");
    c = getchar();
    putchar(c);
    // getch();

    char aCH = 'A';
    aCH = getchar();
    putchar(aCH);

    printf("Enter two alphabets: ");
    // getche();
    // getch();

    // char bCH;
    // printf("Press any key to continue: ");
    // bCH = getch();
    // printf("you pressed:");
    // putch(bCH);

    printf("\n");

    int myStr[10];
    gets(myStr);
    puts(myStr);
    
}