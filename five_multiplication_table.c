#include <stdio.h>
int main(void){
    int number;
    printf("Enter the number you need for multiplication table: ");
    scanf("%d", &number);
        for(int i = 0; i <= 10; i++){
            printf("%d * %d = %d", number, i, i * number);
        }
    return 0;
}