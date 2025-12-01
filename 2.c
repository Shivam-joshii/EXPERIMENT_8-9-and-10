//calloc() for zero integer initialization.
#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i, *arr;
    printf("Enter number of integers: ");
    scanf("%d", &n);
    arr = (int*)calloc(n, sizeof(int));
    if (arr == NULL) { printf("Memory allocation failed\n"); return 1; }
    printf("Values after calloc() (should be zeros):\n");
    for (i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\nEnter new values: ");
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Updated array: ");
    for (i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    free(arr);
    return 0;
}

