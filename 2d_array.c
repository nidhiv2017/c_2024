#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int rows = 2;
    int col = 3;

    // Correctly allocate memory for the 2D array
    int *arr = (int *)malloc(rows * col * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter the matrix elements:\n");

    // Reading values into the 2D array
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
            printf("Enter value for arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i * col + j]);
        }
    }

    // Printing the 2D array
    printf("The matrix is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", arr[i * col + j]);
        }
        printf("\n");
    }

    return 0;
}
