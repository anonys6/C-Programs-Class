#include <stdio.h>

struct Student
{
    int rollNo;
    int age;
};

int main()
{

    struct Student s1 = {0};
    printf("%d", s1.rollNo);
    return 0;
}