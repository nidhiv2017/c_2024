#include <stdio.h>
int main(void){
    int cost_price, selling_price;
    printf("Enter cost price: ");
    scanf("%d", &cost_price);
    printf("Enter the selling price: ");
    scanf("%d", &selling_price);
    if(selling_price > cost_price){
        printf("Profit");
    } else {
        printf("Loss");
    }
    return 0;
}