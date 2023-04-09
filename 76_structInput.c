#include <stdio.h>

struct bookInfo
{
    int bookID;
    char *bookName;
    int totalPages;
};

int main()
{
    struct bookInfo b1;

    printf("Enter book id, total pages and name: ");
    scanf("%d %d\r", &b1.bookID, &b1.totalPages);
    gets(b1.bookName);

    printf("Book ID: %d\nBook name: %s\nTotal pages: %d\n", b1.bookID, b1.bookName, b1.totalPages);
    printf("Size of %d\n", sizeof(b1));

    return 0;
}