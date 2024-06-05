#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows, cols, new_rows, new_cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int **arr = (int **)calloc(rows, sizeof(int *));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (int i = 0; i < rows; i++) {
        arr[i] = (int *)calloc(cols, sizeof(int));
        if (arr[i] == NULL) {
            printf("Memory allocation failed for row %d!\n", i);
            for (int j = 0; j < i; j++) {
                free(arr[j]);
            }
            free(arr);
            return 1;
        }
    }

    printf("Enter the values for the 2D array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Original 2D array elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("Enter the new number of rows: ");
    scanf("%d", &new_rows);

    printf("Enter the new number of columns: ");
    scanf("%d", &new_cols);

    int **new_arr = (int **)realloc(arr, new_rows * sizeof(int *));
    if (new_arr == NULL) {
        printf("Reallocation failed!\n");
        for (int i = 0; i < rows; i++) {
            free(arr[i]);
        }
        free(arr);
        return 1;
    }

    arr = new_arr;

    for (int i = 0; i < new_rows; i++) {
        if (i >= rows) {
            arr[i] = (int *)calloc(new_cols, sizeof(int));
            if (arr[i] == NULL) {
                printf("Memory allocation failed for new row %d!\n", i);
                for (int j = 0; j < i; j++) {
                    free(arr[j]);
                }
                free(arr);
                return 1;
            }
        } else {
            int *new_row = (int *)realloc(arr[i], new_cols * sizeof(int));
            if (new_row == NULL) {
                printf("Reallocation failed for row %d!\n", i);
                for (int j = 0; j < new_rows; j++) {
                    free(arr[j]);
                }
                free(arr);
                return 1;
            }
            arr[i] = new_row;
        }
    }

    for (int i = rows; i < new_rows; i++) {
        for (int j = 0; j < new_cols; j++) {
            arr[i][j] = 0;
        }
    }
    if (new_cols > cols) {
        for (int i = 0; i < rows; i++) {
            for (int j = cols; j < new_cols; j++) {
                arr[i][j] = 0; 
            }
        }
    }

    printf("Reallocated 2D array elements:\n");
    for (int i = 0; i < new_rows; i++) {
        for (int j = 0; j < new_cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // for (int i = 0; i < new_rows; i++) {
    //     free(arr[i]);
    // }
    // free(arr);

    return 0;
}
