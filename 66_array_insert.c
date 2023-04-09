#include <stdio.h>

int main()
{
    int arr[3] = {1, 2, 3};
    printf("\nArray: ");
    for (int i = 0; i < 3; i++)
        printf("%d ", arr[i]);

    int pos, ele;
    printf("Enter position and element");
    scanf("%d %d", &pos, &ele);

    // for (int i = 0; i < 4; i++)
    // {
    //     int temp = arr[i];
    //     if (i == pos)
    //         arr[pos] = ele;
    //     int temp2 = arr[i + 1];
    //     arr[i + 1] = temp2;
    // }

    for (int c = 2; c >= pos - 1; c--)
        arr[c + 1] = arr[c];

    printf("\nArray: ");
    for (int i = 0; i < 3; i++)
        printf("%d ", arr[i]);

    return 0;
}