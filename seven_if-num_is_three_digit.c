#include <stdio.h>
int main(void){
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    if(number > 99 && number < 1000){
        printf("%d is 3-digit number.", number);
    } else {
        printf("%d is not 3-digit number.", number);
    }

    return 0;
}