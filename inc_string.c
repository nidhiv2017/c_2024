#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int old_size = 6; 
    int new_size = 11; 

    char *str = (char *)malloc(old_size * sizeof(char));
    if (str == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    strcpy(str, "Hello");

    printf("Old string: %s\n", str);

    char *new_str = (char *)realloc(str, new_size * sizeof(char));
    if (new_str == NULL) {
        printf("Reallocation failed!\n");
        free(str);
        return 1;
    }

    str = new_str;

    strcat(str, " World");

    printf("New string: %s\n", str);

    

    return 0;
}
