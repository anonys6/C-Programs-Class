// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// #define MAX_NAME_LENGTH 50
// #define MAX_RECORDS 100

// // Define the structure for a CA record
// typedef struct {
//     char name[MAX_NAME_LENGTH];
//     int id;
//     float ca;
//     char grade;
// } Record;

// // Declare global variables
// Record records[MAX_RECORDS];
// int num_records = 0;

// // Function to compute the grade based on the CA marks
// char compute_grade(float ca) {
//     char grade;

//     if (ca >= 90) {
//         grade = 'A';
//     } else if (ca >= 80) {
//         grade = 'B';
//     } else if (ca >= 70) {
//         grade = 'C';
//     } else if (ca >= 60) {
//         grade = 'D';
//     } else if (ca >= 50) {
//         grade = 'E';
//     } else {
//         grade = 'F';
//     }

//     return grade;
// }

// // Function to create a new CA record
// void create_record() {
//     char name[MAX_NAME_LENGTH];
//     int id;
//     float ca;

//     printf("Enter the student's name: ");
//     scanf("%s", name);

//     printf("Enter the student's ID: ");
//     scanf("%d", &id);

//     printf("Enter the student's CA score: ");
//     scanf("%f", &ca);

//     char grade = compute_grade(ca);

//     records[num_records].id = id;
//     strcpy(records[num_records].name, name);
//     records[num_records].ca = ca;
//     records[num_records].grade = grade;

//     num_records++;

//     printf("CA record created successfully.\n");
// }

// // Function to search for a CA record using the student's ID or name
// void search_record() {
//     int search_id;
//     char search_name[MAX_NAME_LENGTH];
//     int found = 0;

//     printf("Enter the student's ID or name: ");
//     scanf("%s", search_name);

//     for (int i = 0; i < num_records; i++) {
//         if (strcmp(records[i].name, search_name) == 0 || records[i].id == atoi(search_name)) {
//             printf("Name: %s\n", records[i].name);
//             printf("ID: %d\n", records[i].id);
//             printf("CA score: %.2f\n", records[i].ca);
//             printf("Grade: %c\n", records[i].grade);
//             found = 1;
//         }
//     }

//     if (!found) {
//         printf("CA record not found.\n");
//     }
// }

// // Function to modify an existing CA record
// void modify_record() {
//     int modify_id;
//     int found = 0;

//     printf("Enter the student's ID to modify: ");
//     scanf("%d", &modify_id);

//     for (int i = 0; i < num_records; i++) {
//         if (records[i].id == modify_id) {
//             printf("Enter the new CA score: ");
//             scanf("%f", &records[i].ca);

//             records[i].grade = compute_grade(records[i].ca);

//             printf("CA record modified successfully.\n");
//             found = 1;
//         }
//     }

//     if (!found) {
//         printf("CA record not found.\n");
//     }
// }

// // Function to delete an existing CA record
// void delete_record() {
//     int delete_id;
//     int found = 0;

//     printf("Enter the student's ID to delete: ");
//     scanf("%d", &delete_id);

//     for (int i = 0; i < num_records; i++) {

// #include <stdio.h>
// #include <math.h>

// double calculate_volume(double a, double b, double c, double d) {
//     double s = (a + b + c + d) / 2.0;
//     return sqrt((s - a) * (s - b) * (s - c) * (s - d));
// }

// double calculate_inradius(double a, double b, double c, double d) {
//     double volume = calculate_volume(a, b, c, d);
//     double p = a + b + c + d;
//     return 3.0 * volume / p;
// }

// int main() {
//     int t;
//     scanf("%d", &t);
//     while (t--) {
//         double wx, wy, wz, xy, xz, yz;
//         scanf("%lf%lf%lf%lf%lf%lf", &wx, &wy, &wz, &xy, &xz, &yz);
//         double a = wz, b = wy, c = wx, d = sqrt(xy*xy + wz*wz + wy*wy - 2*xy*wz - 2*xy*wy + 2*wz*wy);
//         // calculate inradius and print with 4 digits precision
//         double inradius = calculate_inradius(a, b, c, d);
//         printf("%.4lf\n", inradius);
//     }
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int a[2][3] = {1, 2, 3, 4, 5};
//     int i = 0, j = 0;
//     for (i = 0; i < 2; i++)
//         for (j = 0; j < 3; j++)
//             printf("%d ", a[i][j]);

//     return 0;
// }

#include <stdio.h>

int add(int a, int b) // 4, 5
{
    // printf("%d", a + b);

    return a + b; // 9
}

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    // add(a, b);

    printf("%d", add(a, b));

    return 0;
}