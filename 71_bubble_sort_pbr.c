#include <stdio.h>

void bubbleSort(int a[], int n);
void displayArray(int *, int);

int main()
{
    int arr[7] = {8, 22, 7, 9, 31, 5, 13};

    int n = 7;

    bubbleSort(&arr, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

void bubbleSort(int arr[], int n)
{
    printf("SORTED ARRAY: ");
    int count = 0;
    int t = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                count = count + 1;
                t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }
    printf("\ncount : %d\n", count);
}

void displayArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}