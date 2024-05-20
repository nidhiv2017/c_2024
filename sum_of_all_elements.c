#include <stdio.h>
int main (void) {
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    for (int i = 0; i < size; i++){
        sum = sum + arr[i];
    }
    printf("Sum of all elements in array: %d", sum);
    return 0;
}