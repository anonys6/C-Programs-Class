#include <stdio.h>

int main() {
    FILE *fp;
    char file_str[100];
    fp = fopen("103_read_write_append.txt", "r+");
    if (fp == NULL) {
        printf("File not found!\n");
        return 0;
    }
    fwrite("Hello World!\n", 1, 13, fp);

    fp = fopen("103_read_write_append.txt", "w+");
    if (fp == NULL) {
        printf("File not found!\n");
        return 0;
    }
    
}