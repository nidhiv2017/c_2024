#include <stdio.h>
#include <stdlib.h>
int main (void) {
    int *array = (int *)malloc(5 * sizeof(int));
    for(int i = 0; i < 5; i++){
        array[i] = 0;
    }

    for(int i = 0; i < 5; i++){
        printf("%d ", array[i]);
    }
    return 0;
}