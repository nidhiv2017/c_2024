#include <stdio.h>
int main(void){
    
    int array[5] = {1,2,3}; // {v1, v2, v3, v4, v5} min 0 n max 4
    int element;
    printf("enter the element for first index: ");
    scanf("%d", &element);
    for (int i = 5 - 1 - 1; i > 0; i--)
    {
        array[i] = array[i - 1];
    }
    array[0] = element;
    for (int i = 0; i < 4; i++)
    {
        printf("%d ", array[i]);
    }
    
    return 0; 
}