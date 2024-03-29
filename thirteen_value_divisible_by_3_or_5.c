#include <stdio.h>
int main(void){
    int value;

    if(value % 5 == 0){
        if(value % 3 == 0){
            printf("Given value is divisble by 3");
        }
        printf("Given value is divisible by 5");
    }

    return 0; 
}