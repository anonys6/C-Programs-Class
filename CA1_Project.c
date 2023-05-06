#include <stdio.h>
#include <string.h>

struct student
{
    char name[50];
    int roll;
    int ca;
};

void create_record();
void search_record();
void modify_record();
void delete_record();
void display_records();

int main()
{
    int choice;
    while (1)
    {
        printf("\nCA Evaluator System\n");
        printf("--------------------\n");
        printf("1. Create record\n");
        printf("2. Search record\n");
        printf("3. Modify record\n");
        printf("4. Delete record\n");
        printf("5. Display record\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1)
        {
            printf("Error: Invalid input. Please enter a valid integer.\n");
            while (getchar() != '\n')
                ;
            continue;
        }

        switch (choice)
        {
        case 1:
            create_record();
            break;
        case 2:
            search_record();
            break;
        case 3:
            modify_record();
            break;
        case 4:
            delete_record();
            break;
        case 5:
            display_records();
            break;
        case 0:
            return 0;
        default:
            printf("Error: Invalid input. Please enter a valid choice.\n");
        }
    }
}

void create_record()
{
    FILE *fp;
    struct student s;

    fp = fopen("records.dat", "ab");
    if (fp == NULL)
    {
        printf("Error: Unable to open file.\n");
        return;
    }

    printf("\nEnter student name: ");
    scanf(" %[^\n]", s.name);

    int roll =0;
    // printf("Enter roll number: ");
    // if (scanf("%d", &roll) != 1)
    // {
    //     printf("Error: Invalid input. Please enter a valid integer.\n");
    //     fclose(fp);
    //     return;
    // }

    roll++;
    s.roll = roll;

    printf("Enter new CA marks: ");
    if (scanf("%d", &s.ca) != 1)
    {
        printf("Error: Invalid input. Please enter a valid integer.\n");
        fclose(fp);
        return;
    }

    fwrite(&s, sizeof(struct student), 1, fp);
    fclose(fp);

    printf("\nRecord created successfully.\n");
}

void search_record()
{
    FILE *fp;
    struct student s;
    int roll, found = 0;

    fp = fopen("records.dat", "rb");
    if (fp == NULL)
    {
        printf("Error: Unable to open file.\n");
        return;
    }

    printf("\nEnter roll number to search record: ");
    if (scanf("%d", &roll) != 1)
    {
        printf("Error: Invalid input. Please enter a valid integer.\n");
        fclose(fp);
        return;
    }

    while (fread(&s, sizeof(struct student), 1, fp) == 1)
    {
        if (s.roll == roll)
        {
            printf("\nRecord found:\n");
            printf("Name: %s\n", s.name);
            printf("Roll number: %d\n", s.roll);
            printf("CA marks: %d\n", s.ca);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("\nRecord not found\n");
    }

    fclose(fp);
}

void modify_record()
{
    FILE *fp;
    struct student s;
    int roll, found = 0;
    fp = fopen("records.dat", "rb+");
    if (fp == NULL)
    {
        printf("Error: Unable to open file.\n");
        return;
    }

    printf("\nEnter roll number to modify record: ");
    if (scanf("%d", &roll) != 1)
    {
        printf("Error: Invalid input. Please enter a valid integer.\n");
        fclose(fp);
        return;
    }

    while (fread(&s, sizeof(struct student), 1, fp) == 1)
    {
        if (s.roll == roll)
        {
            printf("\nRecord found:\n");
            printf("Name: %s\n", s.name);
            printf("Roll number: %d\n", s.roll);
            printf("Current CA marks: %d\n", s.ca);
            printf("Enter new CA marks: ");

            if (scanf("%d", &s.ca) != 1)
            {
                printf("Error: Invalid input. Please enter a valid integer.\n");
                fclose(fp);
                return;
            }

            fseek(fp, -sizeof(struct student), SEEK_CUR);
            fwrite(&s, sizeof(struct student), 1, fp);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("\nRecord not found\n");
    }
    else
    {
        printf("\nRecord modified successfully\n");
    }

    fclose(fp);
}

void delete_record()
{
    FILE *fp, *temp;
    struct student s;
    int roll, found = 0;
    fp = fopen("records.dat", "rb");
    if (fp == NULL)
    {
        printf("Error: Unable to open file.\n");
        return;
    }

    temp = fopen("temp.dat", "wb");
    if (temp == NULL)
    {
        printf("Error: Unable to open temporary file.\n");
        fclose(fp);
        return;
    }

    printf("\nEnter roll number to delete record: ");
    if (scanf("%d", &roll) != 1)
    {
        printf("Error: Invalid input. Please enter a valid integer.\n");
        fclose(fp);
        fclose(temp);
        return;
    }

    while (fread(&s, sizeof(struct student), 1, fp) == 1)
    {
        if (s.roll == roll)
        {
            printf("\nRecord found and deleted successfully.\n");
            found = 1;
        }
        else
        {
            fwrite(&s, sizeof(struct student), 1, temp);
        }
    }

    if (!found)
    {
        printf("\nRecord not found\n");
    }

    fclose(fp);
    fclose(temp);

    remove("records.dat");
    rename("temp.dat", "records.dat");
}

void display_records()
{
    FILE *fp;
    struct student s;
    fp = fopen("records.dat", "rb");
    if (fp == NULL)
    {
        printf("Error: Unable to open file.\n");
        return;
    }

    printf("+----------------------+------------+------------+\n");
    printf("| %-20s | %-10s | %-10s |\n", "Name", "Roll No.", "CA Marks");
    printf("+----------------------+------------+------------+\n");

    while (fread(&s, sizeof(struct student), 1, fp) == 1)
    {
        printf("| %-20s | %-10d | %-10d |\n", s.name, s.roll, s.ca);
    }

    printf("+----------------------+------------+------------+\n");
    fclose(fp);
}