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
    printf("%d", sizeof(lis));

    printf("%d", len);

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