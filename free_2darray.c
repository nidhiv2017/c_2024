#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int **arr = (int **)malloc(rows * sizeof(int *));
    if (arr == NULL)
    {
        printf("Memory allocation failed for rows!\n");
        return 1;
    }

    for (int i = 0; i < rows; i++)
    {
        arr[i] = (int *)malloc(cols * sizeof(int));
        if (arr[i] == NULL)
        {
            printf("Memory allocation failed for row %d!\n", i);
            for (int j = 0; j < i; j++)
            {
                free(arr[j]);
            }
            free(arr);
            return 1;
        }
    }

    printf("Enter the values for the 2D array:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("2D array elements:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < rows; i++)
    {
        free(arr[i]);
    }

    free(arr);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", arr[i][j]);
        }
    }
        printf("\n");
        return 0;
    }
