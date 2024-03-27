#include <stdio.h>
int main(void){
    int side1, side2, side3;
    printf("Enter the value of side 1: ");
    scanf("%d", &side1);
    printf("Enter the value of side 2: ");
    scanf("%d", &side2);
    printf("Enter the value of side 3: ");
    scanf("%d", &side3);
    if((side1 + side2) > side3 && (side2 + side3) > side1 && (side1 + side3) > side2){
        printf("valid Triangle");
    }
}