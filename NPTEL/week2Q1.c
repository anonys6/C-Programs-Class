#include <stdio.h>

void main()
{
    int lis[] = {};
    int i = 0;

    while (1)
    {
        int num = 0;
        scanf("%d", &num);

        if (num == -1)
        {
            break;
        }
        lis[i] = num;

        i++;
    }

    int len = sizeof(lis) / sizeof(lis[0]);

    // printf("%d", sizeof(lis));
    // printf("%d", len);

    for (int i = 0; i < len; i++)
    {
        printf("%d", lis[i]);
    }
}

// #include <stdio.h>

// int main()
// {
//     int num, num1, num2;
//     scanf("%d", &num);
//     num1 = num;
//     num2 = 0;
//     while (num != -1)
//     {
//         scanf("%d", &num);
//         if (num1 < num)
//         {
//             num2 = num1;
//             num1 = num;
//         }
//     }
//     if (num2 != 0)
//         printf("%d", num2);
//     else
//         printf("0");

//     return 0;
// }

#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    float a, b;
    scanf("%f", &a);
    scanf("%f", &b);
    int sum = x + y;
    float sum1 = a + b;
    int diff = x - y;
    float diff1 = a - b;
    printf("%d %d\n", sum, diff);
    printf("%.1f %.1f", sum1, diff1);

    return 0;
}