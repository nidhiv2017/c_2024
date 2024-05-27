#include <stdio.h>
int main(void){
    int elementsize;
    printf("Enter the number of elements: ");
    scanf("%d", &elementsize);
    int array[elementsize];
    int first;
    printf("Enter elements in array: ");
    for(int i = 0; i < elementsize; i++){
        scanf("%d", &array[i]);
    }
    printf("\n");
    printf("\n");
    for(int i = 0; i < elementsize; i++){
        printf("%d ", array[i]);
    }
    printf("enter the first element of array: ");
    scanf("%d", &first);
    printf("\n");

    for(int i = elementsize - 1 -1; i > 0; i--){
        array[i] = array[i - 1];
    }
    array[0] = first;
    printf("\n");
    for(int i = 0; i < elementsize; i++){
        printf("%d ", array[i]);
    }
    return 0;
}