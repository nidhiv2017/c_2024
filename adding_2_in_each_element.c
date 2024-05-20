#include <stdio.h>
int main (void){
    int arr[] = {1,2,3,4,5,6,7,8};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    for (int i = 0; i < size; i++){
        arr[i]= arr[i]+2;
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d, ", arr[i]);
    }
    
    return 0;
}