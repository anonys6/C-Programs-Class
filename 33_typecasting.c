#include <stdio.h>

int main()
{
    // int a = 8, b = 3;
    // // float c = a / b;                        // implicit typecasting
    // float c = (float) a / (float) b;        // explicit typecasting

    // printf("%f", c);

    int x = 10;
    char y = 'a';
    x = x + y;

    float z = x + 1.0;                      //  when a datetype is converted to higher precision, it is widening

    printf("%d, %f", x, z);
}