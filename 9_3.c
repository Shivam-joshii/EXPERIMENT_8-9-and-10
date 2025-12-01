//Read Line by Line
#include <stdio.h>
int main() {
    FILE *fp = fopen("output.txt", "r");
    if (fp == NULL) { printf("File open failed\n"); return 1; }
    char line[256];
    printf("Content line by line:\n");
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }
    fclose(fp);
    return 0;
}
