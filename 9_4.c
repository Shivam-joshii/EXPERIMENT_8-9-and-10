//count words
#include <stdio.h>
int main() {
    FILE *fp = fopen("output.txt", "r");
    if (fp == NULL) { printf("File open failed\n"); return 1; }
    int count = 0, in_word = 0;
    int ch;
    while ((ch = fgetc(fp)) != EOF) {
        if (ch == ' ' || ch == '\n' || ch == '\t') {
            in_word = 0;
        } else if (!in_word) {
            in_word = 1;
            count++;
        }
    }
    fclose(fp);
    printf("Number of words: %d\n", count);
    return 0;
}
