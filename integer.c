#include <stdio.h>
#include <stdlib.h>
int main (void){
    int *var;
    var =(int *) malloc (sizeof(int));
    *var = 20;
    printf("Value of P: %d", *var);

    return 0;
}