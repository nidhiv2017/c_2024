#include <stdio.h>
int main(void){
    int number;
    printf("Enter the number: ");
    scanf("%d",number);

    if(number % 2 == 0){
        printf("%d is an even number.\n");
    } else {
        printf("%d is an odd number.\n");
    }

    return 0;
}