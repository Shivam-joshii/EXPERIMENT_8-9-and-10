//malloc for integer array
#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, *arr, i, sum = 0, max, min;
    printf("Enter size: ");
    scanf("%d", &n);
    arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) { printf("Memory allocation failed\n"); return 1; }
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    max = min = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    printf("Sum: %d, Max: %d, Min: %d\n", sum, max, min);
    free(arr);
    return 0;
}
