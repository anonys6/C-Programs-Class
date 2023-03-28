#include <stdio.h>

int main()
{
    // int num[10];
    // int countEven = 0, countOdd = 0;

    // for (int i = 0; i < 10; i++)
    //     num[i] = 3 * i;

    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d ", num[i]);
    //     if (num[i] % 2 == 0)
    //         countEven = countEven + 1;
    //     else
    //         countOdd = countOdd + 1;
    // }

    // printf("\nNo of odds: %d\n", countOdd);
    // printf("No of odds: %d\n", countEven);
    // return 0;

    // int a[5] = {1, 2, 3, 4,5};
    // int b[5];
    // int i;
    // for(i = 0; i < 5; i++)
    // {
    //     b[i] = ++a[i];
    // }
    // printf("%d", b[0] + b[3]);

    // int a[5] = {5, 1, 15, 20, 25};
    // int i, j, m;
    // i = ++a[1];
    // j = a[1]++;
    // m = a[i++];
    // printf("%d %d %d", i,j, m);

    float marks[3] = {90.5, 84.3, 45.5};
    int a = 0;
    while(a < 3)
    {
        printf("%.2f ", marks[a]);
        a++;
    }
    return 0;
}