#include <stdio.h>

void main ()
{
    // int x = 0;

    // printf("Enter your age: ");
    // scanf("%d", &x);

    // if (x >= 18)
    // {
    //     printf("You can cast vote\n");
    // }
    // else
    // {
    //     printf("You can not cast vote\n");
    // }


    int x;
    printf("Enter a num: ");
    scanf("%d", &x);
    
    if (x > 0)
    {
        printf("It is a positive number");
    }
    else
    {
        printf("It is a negative number");
    }
}