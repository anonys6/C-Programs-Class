#include <stdio.h>

void main()
{
    int mark = 0, attendance = 0;

    printf("Eneter your marks: ");
    scanf("%d", &mark);
    printf("Eneter your attendance: ");
    scanf("%d", &attendance);

    if (mark >= 90 || mark <= 100)
    {
        printf("Student performed very well\n");
    }
    else if (mark <= 40 && attendance < 76)
    {
        printf("Student is detained");
    }
}