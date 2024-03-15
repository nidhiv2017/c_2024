#include <stdio.h>
int main(void){
    int cost_price, selling_price;
    printf("Enter cost price: ");
    scanf("%d", &cost_price);
    printf("Enter the selling price: ");
    scanf("%d", &selling_price);
    if(selling_price > cost_price){
        printf("Profit");
    } 
    if(cost_price > selling_price){
        printf("Loss");
    }
    if(cost_price == selling_price){
        printf("No profit, No Loss");
    }
    return 0;
}