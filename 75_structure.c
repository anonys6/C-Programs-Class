#include <stdio.h>

struct Stuinfo
{
    int rollNo;
    char name[20];
};

int main()
{
    struct Stuinfo s1;
    struct Stuinfo *s1A;
    s1A = &s1;

    printf("Enter roll and name of the student: ");
    scanf("%d\r", &s1.rollNo);
    gets(s1.name);

    printf("%d %s\n", s1.rollNo, s1.name);

    printf("Address of Stuinfo.rollNo: %d", &s1A->rollNo);

    return 0;
}