#include <stdio.h>
int main (void){
    int elements;
    printf("Enter the number of elements: ");
    scanf("%d", &elements);  //  elements = 2
    int array[elements]; // array[2] = {g, g}
    printf("Enter the elements in array: ");
    
    for(int i = 0; i < elements - 1; i++){
        scanf("%d", &array[i]);
    }
    // {v1, g}

    for (int i = 0; i < elements - 1; i++)
    {
        printf("\n %d", array[i]);
    } // {v1}
    printf("Enter value for last element: ");
    scanf("%d", &array[elements - 1]); // 

    for (int i = 0; i <= elements; i++)
    {
        printf("\n %d", array[i]);
    }
    

    return 0;
}