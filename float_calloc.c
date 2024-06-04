#include <stdio.h>
#include <stdlib.h>

int main() {
    int n; 
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    float *arr = (float *)calloc(n, sizeof(float));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        arr[i] = i * 1.0f; 
    }

    printf("Array elements:\n");
    for (int i = 0; i < n; i++) {
        printf("%f ", arr[i]);
    }
    printf("\n");



    return 0;
}
