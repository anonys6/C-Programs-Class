#include <stdio.h>

int main()
{
    int a = 8, b = 3;
    // float c = a / b;                        // implicit typecasting
    float c = (float) a / (float) b;        // explicit typecasting

    printf("%f", c);
}