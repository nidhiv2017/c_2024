#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    *ptr = 42;
    printf("Value of the allocated integer: %d\n", *ptr);

    free(ptr);
    printf("Value of the allocated integer: %d\n", *ptr);

    return 0;
}
