//malloc() with realloc()
#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, new_n, i, *arr;
    printf("Enter initial size: ");
    scanf("%d", &n);
    arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) { printf("Memory allocation failed\n"); return 1; }
    printf("Enter %d values: ", n);
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Enter new size: ");
    scanf("%d", &new_n);
    arr = (int*)realloc(arr, new_n * sizeof(int));
    if (arr == NULL) { printf("Reallocation failed\n"); return 1; }
    printf("Enter %d new values: ", new_n - n);
    for (i = n; i < new_n; i++) scanf("%d", &arr[i]);
    printf("Full array: ");
    for (i = 0; i < new_n; i++) printf("%d ", arr[i]);
    printf("\n");
    free(arr);
    return 0;
}
