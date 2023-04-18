/*
fopen("file_path", "mode");
modes: read, write, append, read+, write+, append+

fclose(ptr);    to close the file

*/

#include <stdio.h>

int main()
{
    FILE *f_ptr;
    f_ptr = fopen("D:\\BTech Term - 2\\CSE101 - Computer Programming\\C Programs Class\\85_newFile.txt", "w");
    fprintf(f_ptr, "Hi full path!\n");
    fclose(f_ptr);

    return 0;
}