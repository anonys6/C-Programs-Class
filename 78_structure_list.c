#include <stdio.h>

struct Student
{
    char name[20];
    int roll;
};

int main()
{
    int no_of_student;

    printf("Enter the number of the student: ");
    scanf("%d", &no_of_student);

    struct Student s[no_of_student];

    for (int i = 0; i < no_of_student; i++)
    {
        printf("Enter roll and name of the student: ");
        scanf("%d %s", &s[i].roll, &s[i].name);
    }

    for (int i = 0; i < no_of_student; i++)
    {
        printf("Hello %s\n", s[i].name);
    }
}