#include <stdio.h>
#include <stdlib.h>
int main (void){
    char *str;
    str = (char *) malloc (6* sizeof(char));

    if(str == NULL){
        printf("Memory allocation failed");
        return 1;
    }
    printf("enter the characters for string: ");
    fgets(str, 6, stdin);

    printf("\n");

    for (int i = 0; i <= 5; i++)
    {
        printf("%c\n", str[i]);
    }

    return 0;
}