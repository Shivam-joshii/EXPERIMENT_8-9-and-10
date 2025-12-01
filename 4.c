//dynamic string with relloc()
#include <stdio.h>
#include <stdlib.h>
int main() {
    int size, new_size;
    char *str;
    printf("Enter string size: ");
    scanf("%d", &size);
    str = (char*)malloc((size + 1) * sizeof(char));  // +1 for null terminator
    if (str == NULL) { printf("Memory allocation failed\n"); return 1; }
    printf("Enter string: ");
    scanf("%s", str);
    printf("Original string: %s\n", str);
    printf("Enter new size: ");
    scanf("%d", &new_size);
    str = (char*)realloc(str, (new_size + 1) * sizeof(char));
    if (str == NULL) { printf("Reallocation failed\n"); return 1; }
    printf("Enter text to append: ");
    scanf("%s", str + strlen(str));  // Append at end
    printf("Expanded string: %s\n", str);
    free(str);
    return 0;
}

