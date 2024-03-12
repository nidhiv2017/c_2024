#include <stdio.h>
int main(void){
    int x, y;
    printf("Enter the first value: ");
    scanf("%d", &x);
    printf("Enter the second value: ");
    scanf("%d", &y);
    int sum = x + y;
    printf("Sum of given values: %d", sum);

    return 0;
}