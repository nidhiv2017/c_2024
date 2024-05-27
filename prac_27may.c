#include <stdio.h>
int main(void) {
    int element;
    printf("Enter the number of elements: ");
    scanf("%d", &element);
    int array[element];
    printf("Enter the elements for array: ");
    for(int i = 0; i < element - 1; i++){
        scanf("%d", &array[i]);
    }
    printf("\n");

    for(int i = 0; i < element; i++){
        printf("%d ", array[i]);
    }
    printf("\n");

    printf("enter the last element for array: ");
    scanf("%d", &array[element - 1]);

    printf("\n");

    for(int i = 0; i <= element; i++){
        printf("%d ", array[i]);
    }
    return 0;
}