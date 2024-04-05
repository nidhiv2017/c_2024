#include <stdio.h>
int main(void){
    int value;
    printf("Enter the value: ");
    scanf("%d", &value);
    for(int i = 4; i <= 3 * value - 1; i+3){
        printf("%d ", i);
    }
    return 0;
}