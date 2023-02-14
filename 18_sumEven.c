#include <stdio.h>
main()
{
    int choice, a, b, s;
    while (1)
    {
        printf("\n\n 1. Addition");
        printf("\n 2. Odd-Even");
        printf("\n 3. Printing N numbers");

        printf("\n 4. Exit");

        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter two numbers: ");
            scanf("%d%d", &a, &b);
            s = a + b;
            printf("\nSum is %d", s);
            break;
        case 2:
            printf("Enter a number: ");
            scanf("%d", &a);
            if (a % 2 == 0)
                printf("Even");
            else
                printf("Odd");
            break;
        case 3:
            printf("Enter a number: ");
            scanf("%d", &a);
            for (b = 1; b <= a; b++)
                printf("\n\t%d", b);

            break;
        case 4:
            exit(0);

        default:
            printf("not availiable");
        }
    }
}



