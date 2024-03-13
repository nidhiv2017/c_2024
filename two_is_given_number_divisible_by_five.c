#include <stdio.h>
int main(void){
    int number;
    printf("Enter the number: ");
    scanf("%d",number);

    if(number % 5 == 0){
        printf("%d is divisible by 5.\n");
    } else {
        printf("%d is not divisible by 5.\n");
    }

    return 0;
}