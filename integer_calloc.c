#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;

    printf("Enter the desired size of the array: ");
    scanf("%d", &size);

    int *arr = (int *)calloc (size, sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Memory allocated successfully for %d integers.\n", size);

    for (int i = 0; i < size; i++) {
        printf("Enter value for index %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\n");

    for (int i = 0; i < size; i++) {
        printf("%d, ", arr[i]);
    }

    return 0;
}
