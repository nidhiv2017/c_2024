#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *str = (char *)malloc(6 * sizeof(char));
    if (str == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    strcpy(str, "Hello");
    printf("Initial string: %s\n", str);

    char *new_str = (char *)realloc(str, 12 * sizeof(char)); 
    if (new_str == NULL) {
        printf("Reallocation failed!\n");
        free(str);
        return 1;
    }

    str = new_str;

    strcat(str, " World");
    printf("Reallocated string: %s\n", str);

    free(str);

    return 0;
}
