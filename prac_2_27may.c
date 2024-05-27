#include <stdio.h>
int main(void){
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    int btw = size / 2; 
    int array[size];
    printf("\n");
    printf("enter elements of array: ");
    for(int i = 0; i < size - 1; i++){
        scanf("%d",&array[i]);
    }
    printf("\n");
    int mid;
    printf("enter the mid element: ");
    scanf("%d", &mid);
    printf("\n");

    for(int i = size; i >= btw; i --){
        
        array[i] = array[i - 1];
    }

    array[btw - 1] = mid;
    printf("\n");

    for(int i = 0; i < size; i++){
        printf("%d", array[i]);
    }
    return 0;
}