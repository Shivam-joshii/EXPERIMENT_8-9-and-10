//Read Character by Character
#include <stdio.h>
int main() {
    FILE *fp = fopen("output.txt", "r");
    if (fp == NULL) { printf("File open failed\n"); return 1; }
    int ch;
    printf("Content character by character:\n");
    while ((ch = fgetc(fp)) != EOF) putchar(ch);
    fclose(fp);
    return 0;
}
