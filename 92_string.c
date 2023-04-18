#include <stdio.h>

int main()
{
    char carname[20];
    printf("Enter the name of your car: ");
    // scanf("%s", carname);
    gets(carname);

    printf("\nName of car is %s\n", carname);
    puts(carname);

    return 0;
}





// int i = 0;
// while (carname[i] != '\0')
// {
//     printf("%c\n", carname[i]);
//     i++;
// }