#include <stdio.h>
#include <stdlib.h>

int main() {
    int old_size = 5; 
    int new_size = 10; 

    int *arr = (int *)malloc(old_size  * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (int i = 0; i < old_size ; i++) {
        arr[i] = i + 1; 
    }
    printf("Old array : \n");

    for (int i = 0; i < old_size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int *new_arr = (int *)realloc(arr, new_size * sizeof(int));

    if (new_arr == NULL) {
        printf("Reallocation failed!\n");
        free(arr);
        return 1;
    }

    arr = new_arr;

    for (int i = old_size ; i < new_size; i++) {
        arr[i] = i + 1;
    }

    printf("Array elements:\n");
    for (int i = 0; i < new_size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);

    return 0;
}
