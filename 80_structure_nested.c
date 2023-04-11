#include <stdio.h>

struct DOB
{
    int day;
    int month;
    int year;
} dob;

struct Student
{
    char name[20];
    struct DOB dob;
};

int main()
{
    struct Student s1;

    printf("Enter name: ");
    scanf("%s", &s1.name);

    printf("Enter date of birth: ");
    scanf("%d %d %d", &s1.dob.day, &s1.dob.month, &s1.dob.year);

    printf("Name of the student: %s", s1.name);
    printf("Data of birth (dd-mm-yyyy): %d-%d-%d", s1.dob.day, s1.dob.month, s1.dob.year);

    return 0;
}