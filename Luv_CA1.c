// #include <stdio.h>
// #include <string.h>

// struct Bus
// {
//     int bus_number;
//     char route[50];
//     int fare;
//     int seats_available;
// };

// void displayBuses(char *route)
// {
//     FILE *fp;
//     struct Bus bus;

//     fp = fopen("buses.dat", "rb");

//     printf("Buses available for %s route:\n", route);
//     while (fread(&bus, sizeof(bus), 1, fp))
//     {
//         if (strcmp(bus.route, route) == 0)
//         {
//             printf("Bus Number: %d\n", bus.bus_number);
//             printf("Route: %s\n", bus.route);
//             printf("Fare: %d\n", bus.fare);
//             printf("Seats Available: %d\n", bus.seats_available);
//             printf("---------------------------\n");
//         }
//     }

//     fclose(fp);
// }

// void addBus()
// {
//     FILE *fp;
//     struct Bus bus;

//     fp = fopen("buses.dat", "ab");

//     printf("Enter Bus Number: ");
//     scanf("%d", &bus.bus_number);
//     printf("Enter Route: ");
//     scanf("%s", bus.route);
//     printf("Enter Fare: ");
//     scanf("%d", &bus.fare);
//     printf("Enter Seats Available: ");
//     scanf("%d", &bus.seats_available);

//     fwrite(&bus, sizeof(bus), 1, fp);

//     fclose(fp);

//     printf("Bus Added Successfully.\n");
// }

// void bookSeat()
// {
//     FILE *fp;
//     struct Bus bus;
//     int bus_number, seats;

//     fp = fopen("buses.dat", "r+b");

//     printf("Enter Bus Number: ");
//     scanf("%d", &bus_number);

//     while (fread(&bus, sizeof(bus), 1, fp))
//     {
//         if (bus.bus_number == bus_number)
//         {
//             printf("Enter Seats to Book: ");
//             scanf("%d", &seats);

//             if (bus.seats_available >= seats)
//             {
//                 bus.seats_available -= seats;
//                 fseek(fp, -sizeof(bus), SEEK_CUR);
//                 fwrite(&bus, sizeof(bus), 1, fp);
//                 printf("Seats Booked Successfully.\n");
//             }
//             else
//             {
//                 printf("Seats Not Available.\n");
//             }

//             fclose(fp);
//             return;
//         }
//     }

//     printf("Bus Not Found.\n");

//     fclose(fp);
// }

// void cancelSeat()
// {
//     FILE *fp;
//     struct Bus bus;
//     int bus_number, seats;

//     fp = fopen("buses.dat", "r+b");

//     printf("Enter Bus Number: ");
//     scanf("%d", &bus_number);

//     while (fread(&bus, sizeof(bus), 1, fp))
//     {
//         if (bus.bus_number == bus_number)
//         {
//             printf("Enter Seats to Cancel: ");
//             scanf("%d", &seats);

//             bus.seats_available += seats;
//             fseek(fp, -sizeof(bus), SEEK_CUR);
//             fwrite(&bus, sizeof(bus), 1, fp);
//             printf("Seats Cancelled Successfully.\n");

//             fclose(fp);
//             return;
//         }
//     }

//     printf("Bus Not Found.\n");

//     fclose(fp);
// }

// void deleteBus()
// {
//     FILE *fp, *temp_fp;
//     struct Bus bus;
//     int bus_number;
//     fp = fopen("buses.dat", "rb");
//     temp_fp = fopen("temp.dat", "wb");

//     printf("Enter Bus Number to Delete: ");
//     scanf("%d", &bus_number);

//     while (fread(&bus, sizeof(bus), 1, fp))
//     {
//         if (bus.bus_number != bus_number)
//         {
//             fwrite(&bus, sizeof(bus), 1, temp_fp);
//         }
//     }
//     fclose(fp);
//     fclose(temp_fp);

//     remove("buses.dat");
//     rename("temp.dat", "buses.dat");

//     printf("Bus Deleted Successfully.\n");
// }

// void updateBus()
// {
//     FILE *fp;
//     struct Bus bus;
//     int bus_number;
//     fp = fopen("buses.dat", "r+b");

//     printf("Enter Bus Number to Update: ");
//     scanf("%d", &bus_number);

//     while (fread(&bus, sizeof(bus), 1, fp))
//     {
//         if (bus.bus_number == bus_number)
//         {
//             printf("Enter New Bus Number: ");
//             scanf("%d", &bus.bus_number);
//             printf("Enter New Route: ");
//             scanf("%s", bus.route);
//             printf("Enter New Fare: ");
//             scanf("%d", &bus.fare);
//             printf("Enter New Seats Available: ");
//             scanf("%d", &bus.seats_available);

//             fseek(fp, -sizeof(bus), SEEK_CUR);
//             fwrite(&bus, sizeof(bus), 1, fp);
//             printf("Bus Details Updated Successfully.\n");

//             fclose(fp);
//             return;
//         }
//     }

//     printf("Bus Not Found.\n");

//     fclose(fp);
// }

// int main()
// {
//     int choice;
//     char route[50];
//     while (1)
//     {
//         printf("\nElectronic Bus Ticket Generator\n");
//         printf("-----------------------------\n");
//         printf("1. Display Available Buses for a Route\n");
//         printf("2. Add New Bus\n");
//         printf("3. Book Seat\n");
//         printf("4. Cancel Seat\n");
//         printf("5. Delete Bus\n");
//         printf("6. Update Bus Details\n");
//         printf("7. Exit\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);

//         switch (choice)
//         {
//         case 1:
//             printf("Enter Route: ");
//             scanf("%s", route);
//             displayBuses(route);
//             break;
//         case 2:
//             addBus();
//             break;
//         case 3:
//             bookSeat();
//             break;
//         case 4:
//             cancelSeat();
//             break;
//         case 5:
//             deleteBus();
//             break;
//         case 6:
//             updateBus();
//             break;
//         case 7:
//             printf("Thank you for using Electronic Bus Ticket Generator.\n");
//             return 0;
//         default:
//             printf("Invalid Choice. Try Again.\n");
//         }
//     }

//     return 0;
// }

#include <stdio.h>
#include <string.h>

struct Bus
{
    int bus_number;
    char route[50];
    int fare;
    int seats_available;
};

void displayBuses(char *route)
{
    FILE *fp;
    struct Bus bus;

    fp = fopen("buses.txt", "r");

    printf("Buses available for %s route:\n", route);
    while (fscanf(fp, "%d %s %d %d", &bus.bus_number, bus.route, &bus.fare, &bus.seats_available) != EOF)
    {
        if (strcmp(bus.route, route) == 0)
        {
            printf("Bus Number: %d\n", bus.bus_number);
            printf("Route: %s\n", bus.route);
            printf("Fare: %d\n", bus.fare);
            printf("Seats Available: %d\n", bus.seats_available);
            printf("---------------------------\n");
        }
    }

    fclose(fp);
}

void addBus()
{
    FILE *fp;
    struct Bus bus;

    fp = fopen("buses.txt", "a");

    printf("Enter Bus Number: ");
    scanf("%d", &bus.bus_number);
    printf("Enter Route: ");
    scanf("%s", bus.route);
    printf("Enter Fare: ");
    scanf("%d", &bus.fare);
    printf("Enter Seats Available: ");
    scanf("%d", &bus.seats_available);

    fprintf(fp, "%d %s %d %d\n", bus.bus_number, bus.route, bus.fare, bus.seats_available);

    fclose(fp);

    printf("Bus Added Successfully.\n");
}

void bookSeat()
{
    FILE *fp, *temp_fp;
    struct Bus bus;
    int bus_number, seats;

    fp = fopen("buses.txt", "r");
    temp_fp = fopen("temp.txt", "w");

    printf("Enter Bus Number: ");
    scanf("%d", &bus_number);

    while (fscanf(fp, "%d %s %d %d", &bus.bus_number, bus.route, &bus.fare, &bus.seats_available) != EOF)
    {
        if (bus.bus_number == bus_number)
        {
            printf("Enter Seats to Book: ");
            scanf("%d", &seats);

            if (bus.seats_available >= seats)
            {
                bus.seats_available -= seats;
                fprintf(temp_fp, "%d %s %d %d\n", bus.bus_number, bus.route, bus.fare, bus.seats_available);
                printf("Seats Booked Successfully.\n");
            }
            else
            {
                printf("Seats Not Available.\n");
                fprintf(temp_fp, "%d %s %d %d\n", bus.bus_number, bus.route, bus.fare, bus.seats_available);
            }
        }
        else
        {
            fprintf(temp_fp, "%d %s %d %d\n", bus.bus_number, bus.route, bus.fare, bus.seats_available);
        }
    }

    fclose(fp);
    fclose(temp_fp);

    remove("buses.txt");
    rename("temp.txt", "buses.txt");
}

void cancelSeat()
{
    FILE *fp, *temp_fp;
    struct Bus bus;
    int bus_number, seats;

    fp = fopen("buses.txt", "r");
    temp_fp = fopen("temp.txt", "w");

    printf("Enter Bus Number: ");
    scanf("%d", &bus_number);

    while (fscanf(fp, "%d %s %d %d", &bus.bus_number, bus.route, &bus.fare, &bus.seats_available) != EOF)
    {
        if (bus.bus_number == bus_number)
        {
            printf("Enter Seats to Cancel: ");
            scanf("%d", &seats);
            if (bus.seats_available + seats <= 30)
            {
                bus.seats_available += seats;
                fprintf(temp_fp, "%d %s %d %d\n", bus.bus_number, bus.route, bus.fare, bus.seats_available);
                printf("Seats Cancelled Successfully.\n");
            }
            else
            {
                printf("Invalid Input. Total seats cannot be more than 30.\n");
                fprintf(temp_fp, "%d %s %d %d\n", bus.bus_number, bus.route, bus.fare, bus.seats_available);
            }
        }
        else
        {
            fprintf(temp_fp, "%d %s %d %d\n", bus.bus_number, bus.route, bus.fare, bus.seats_available);
        }
    }

    fclose(fp);
    fclose(temp_fp);

    remove("buses.txt");
    rename("temp.txt", "buses.txt");
}

int main()
{
    int choice;
    char route[50];
    while (1)
    {
        printf("\n");
        printf("1. Display Buses\n");
        printf("2. Add Bus\n");
        printf("3. Book Seat\n");
        printf("4. Cancel Seat\n");
        printf("5. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Route: ");
            scanf("%s", route);
            displayBuses(route);
            break;

        case 2:
            addBus();
            break;

        case 3:
            bookSeat();
            break;

        case 4:
            cancelSeat();
            break;

        case 5:
            printf("Thank you for using the Bus Reservation System.\n");
            return 0;

        default:
            printf("Invalid Choice. Try Again.\n");
        }
    }
}