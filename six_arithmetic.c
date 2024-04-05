#include <stdio.h>
int main(void){
    int value;
    printf("Enter a value: ");
    scanf("%d", &value);
    for(int i = 1; i <= 2 * value - 1; i+2){ // will give output 1, 3, 5, 7 .... till given value
        printf("%d ", i);
    }

    return 0; 
}