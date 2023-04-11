#include <stdio.h>

struct Stu {
    int age, standard;
    char first_name[51], last_name[51];
};

int main() {
    struct Stu s1;

    scanf("%d", &s1.age);
    scanf("%s", s1.first_name);
    scanf("%s", s1.last_name);
    scanf("%d", &s1.standard);

    printf("%d %s %s %d\n", s1.age, s1.first_name, s1.last_name, s1.standard);

    return 0;
}