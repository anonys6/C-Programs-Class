/*
Storage calsses in C are used to determine the lifetime, visibility, memory location, and initial value of a variable. There are four types of
storage classes in c
Automatic
External
Static
Register

Properties of a variable
name
data type
size of block
default value
scope
life
storage

storage class       keyword         storage         default value       scope                   life
--------------------------------------------------------------------------------------------------------------------------
automatic           auto            RAM             garbage             within code block       {}
resister            resister        CPU             garbage             in which declared       {}
static              static          RAM             0                   in which declared       throughout execution
external            extern          RAM             0                   global                  throughout execution
*/

#include <stdio.h>

int main()
{
    int x = 5;
    printf("%d\n", x);
    {
        // int x = 2;
        printf("%d\n", x);
    }
    printf("%d\n", x);

    // static int a = 6;
    register int i =  5;

    printf("%d", &i);

    return 0;
}