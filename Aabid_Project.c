#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_FLAVORS 100

typedef struct
{
    int id;
    char name[50];
    float price;
} IceCream;

IceCream database[MAX_FLAVORS];
int num_flavors = 0;

void display_menu()
{
    printf("Ice-cream Parlor Management System\n");
    printf("1. Display ice creams list\n");
    printf("2. Add new ice-cream data\n");
    printf("3. Update the record of an ice-cream\n");
    printf("4. Search for an ice-cream\n");
    printf("5. Delete an ice-cream record\n");
    printf("0. Exit\n");
}

void display_flavors()
{
    printf("ID  Flavor Name         Price\n");
    printf("--------------------------------\n");
    for (int i = 0; i < num_flavors; i++)
    {
        printf("%-3d %-18s %.2f\n", database[i].id, database[i].name, database[i].price);
    }
}

void add_flavor()
{
    if (num_flavors == MAX_FLAVORS)
    {
        printf("Error: maximum number of flavors reached\n");
        return;
    }
    IceCream new_flavor;
    printf("Enter the new ice-cream details:\n");
    printf("ID: ");
    scanf("%d", &new_flavor.id);
    printf("Name: ");
    scanf("%s", new_flavor.name);
    printf("Price: ");
    scanf("%f", &new_flavor.price);
    database[num_flavors] = new_flavor;
    num_flavors++;
    printf("New ice-cream added successfully!\n");
}

void update_flavor()
{
    int id;
    printf("Enter the ID of the ice-cream to update: ");
    scanf("%d", &id);
    for (int i = 0; i < num_flavors; i++)
    {
        if (database[i].id == id)
        {
            printf("Enter the new details for the ice-cream:\n");
            printf("Name: ");
            scanf("%s", database[i].name);
            printf("Price: ");
            scanf("%f", &database[i].price);
            printf("Ice-cream updated successfully!\n");
            return;
        }
    }
    printf("Error: ice-cream with ID %d not found\n", id);
}

void search_flavor()
{
    char name[50];
    printf("Enter the name of the ice-cream to search: ");
    scanf("%s", name);
    for (int i = 0; i < num_flavors; i++)
    {
        if (strcmp(database[i].name, name) == 0)
        {
            printf("ID: %d, Price: %.2f\n", database[i].id, database[i].price);
            return;
        }
    }
    printf("Error: ice-cream with name '%s' not found\n", name);
}

void delete_flavor()
{
    int id;
    printf("Enter the ID of the ice-cream to delete: ");
    scanf("%d", &id);
    for (int i = 0; i < num_flavors; i++)
    {
        if (database[i].id == id)
        {
            for (int j = i; j < num_flavors - 1; j++)
            {
                database[j] = database[j + 1];
            }
            num_flavors--;
            printf("Ice-cream deleted successfully!\n");
            return;
        }
    }
    printf("Error ice-cream with ID %d not found\n", id);
}

int main()
{
    int choice;
    do
    {
        display_menu();
        printf("Enter your choice (0-5): ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            display_flavors();
            break;
        case 2:
            add_flavor();
            break;
        case 3:
            update_flavor();
            break;
        case 4:
            search_flavor();
            break;
        case 5:
            delete_flavor();
            break;
        case 0:
            printf("Goodbye!\n");
            break;
        default:
            printf("Error: invalid choice\n");
            break;
        }
    } while (choice != 0);
    return 0;
}