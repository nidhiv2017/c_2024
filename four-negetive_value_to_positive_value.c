#include <stdio.h>
int main(void){
    int value;
    printf("enter the value: ");
    scanf("%d", &value);
    if(value < 0){
        value = value * (-1);
    }
    printf("Value : %d", value);
    return 0;
}