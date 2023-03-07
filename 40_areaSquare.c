#include <stdio.h>

int areaSq();

int main()
{
    int area = 0;
    area = areaSq();
    printf("Area of square is: %d", area);

    return 0;
}

int areaSq()
{
    int side;
    printf("Enter side of the square: ");
    scanf("%d", &side);
    return (side * side);
}