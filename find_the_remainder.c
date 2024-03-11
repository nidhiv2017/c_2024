#include<stdio.h>
int main(void){
    int a, b;
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);
    int quotient = a / b;
    int remainder = a - (b * quotient);
    printf("Remainder: %d", remainder);
    return 0;
}