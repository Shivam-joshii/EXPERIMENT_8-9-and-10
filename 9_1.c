// Create and Write File
#include <stdio.h>
int main() {
    FILE *fp = fopen("output.txt", "w");
    if (fp == NULL) { printf("File creation failed\n"); return 1; }
    fprintf(fp, "This is a sample text file created by the program.\n");
    fprintf(fp, "Second line of content.\n");
    fclose(fp);
    printf("File created and written successfully.\n");
    return 0;
}

