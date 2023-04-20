#include <stdio.h>
#include <string.h>

struct Medicine
{
    int id;
    char name[50];
    char manufacturer[50];
    float price;
    int quantity;
};

struct Medicine medicines[100];
int num_medicines = 0;

void displayMedicines()
{
    printf("Medicine Records:\n");
    for (int i = 0; i < num_medicines; i++)
    {
        printf("ID: %d, Name: %s, Manufacturer: %s, Price: %.2f, Quantity: %d\n", medicines[i].id, medicines[i].name, medicines[i].manufacturer, medicines[i].price, medicines[i].quantity);
    }
}

void addMedicine()
{
    struct Medicine med;
    med.id = num_medicines + 1;
    printf("Enter medicine name: ");
    scanf("%s", med.name);
    printf("Enter manufacturer name: ");
    scanf("%s", med.manufacturer);
    printf("Enter price: ");
    scanf("%f", &med.price);
    printf("Enter quantity: ");
    scanf("%d", &med.quantity);
    medicines[num_medicines++] = med;
    printf("New medicine added successfully.\n");
}

void deleteMedicine()
{
    char mname[100];
    int c = 0;

    printf("Enter Name of medicine to delete: ");
    scanf("%s", mname);

    for (int i = 0; i < num_medicines; i++)
    {
        if (strcmp(mname, medicines[i].name) == 0)
        {
            for (int j = i + 1; j < num_medicines; j++)
            {
                medicines[j - 1] = medicines[j];
            }
            num_medicines--;
            printf("Medicine with Name %s deleted successfully.\n", mname);
            c = 1;
            break;
        }
    }
    if (c == 0)
    {
        printf("Medicine with Name %s not found.\n", mname);
    }
}

// function to search medicine by name
void searchMedicine()
{
    char name[50];
    printf("Enter name of medicine to search: ");
    scanf("%s", name);
    for (int i = 0; i < num_medicines; i++)
    {
        if (strcmp(medicines[i].name, name) == 0)
        {
            printf("ID: %d, Name: %s, Manufacturer: %s, Price: %.2f, Quantity: %d\n",
                   medicines[i].id, medicines[i].name, medicines[i].manufacturer, medicines[i].price, medicines[i].quantity);
            return;
        }
    }
    printf("Medicine with name %s not found.\n", name);
}

// function to update medicine by ID
void updateMedicine()
{
    int id;
    printf("Enter ID of medicine to update: ");
    scanf("%d", &id);
    for (int i = 0; i < num_medicines; i++)
    {
        if (medicines[i].id == id)
        {
            printf("Enter new details:\n");
            printf("Enter medicine name: ");
            scanf("%s", medicines[i].name);
            printf("Enter manufacturer name: ");
            scanf("%s", medicines[i].manufacturer);
            printf("Enter price: ");
            scanf("%f", &medicines[i].price);
            printf("Enter quantity: ");
            scanf("%d", &medicines[i].quantity);
            printf("Medicine with ID %d updated successfully.\n", id);
            return;
        }
    }
    printf("Medicine with ID %d not found.\n", id);
}

// function to save medicine records to file
void saveMedicinesToFile()
{
    FILE *fp;
    fp = fopen("medicine_records.txt", "w");
    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return;
    }
    for (int i = 0; i < num_medicines; i++)
    {
        fprintf(fp, "%d,%s,%s,%.2f,%d\n", medicines[i].id, medicines[i].name, medicines[i].manufacturer, medicines[i].price, medicines[i].quantity);
    }
    fclose(fp);
    printf("Medicine records saved to file successfully.\n");
}

// function to load medicine records from file
void loadMedicinesFromFile()
{
    FILE *fp;
    fp = fopen("medicine_records.txt", "r");
    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return;
    }
    num_medicines = 0;
    while (fscanf(fp, "%d,%[^,],%[^,],%f,%d\n", &medicines[num_medicines].id, medicines[num_medicines].name, medicines[num_medicines].manufacturer, &medicines[num_medicines].price, &medicines[num_medicines].quantity) != EOF)
    {
        num_medicines++;
    }
    fclose(fp);
    printf("Medicine records loaded from file successfully.\n");
}

int main()
{
    int choice;
    loadMedicinesFromFile();
    do
    {
        printf("\n--- Medicine Record Management System ---\n");

        printf("1. Display Medicine Details\n");

        printf("2. Add New Medicine\n");

        printf("3. Delete Medicine Details\n");

        printf("4. Search a Particular Medicine\n");

        printf("5. Update Medicine Details\n");

        printf("6. Save Medicine Records to File\n");

        printf("7. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            displayMedicines();
            break;
        case 2:
            addMedicine();
            break;
        case 3:
            deleteMedicine();
            break;
        case 4:
            searchMedicine();
            break;
        case 5:
            updateMedicine();
            break;
        case 6:
            saveMedicinesToFile();
            break;
        case 7:
            printf("Exiting program.\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 7);
    return 0;
}