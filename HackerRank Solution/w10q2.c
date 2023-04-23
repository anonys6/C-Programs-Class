#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int number_of_members;
    scanf("%d", &number_of_members);
    
    int contest[number_of_members];
    
    for (int i = 0; i < number_of_members; i++) {
        int temp = 0;
        scanf("%d", &temp);
        if (temp < 5 || temp > 50) {
            printf("Invalid input");
            break;
        } else {
            contest[i] = temp;
            if (temp % 5 == 0)
                printf("%d\n", temp);
        }
    }
    return 0;
}





#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    if (n < 5 || n > 50) {
        printf("Invalid input\n");
        return 0;
    }
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        if (arr[i] % 5 == 0) {
            printf("%d\n", arr[i]);
        }
    }
    return 0;
}