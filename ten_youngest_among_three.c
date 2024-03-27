#include <stdio.h>
int main(){
    int child1, child2, child3;
    printf("Enter the age of first child: ");
    scanf("%d", &child1);
    printf("Enter the age of second child: ");
    scanf("%d", &child2);
    printf("Enter the age of third child: ");
    scanf("%d", &child3);
    if(child1 < child2 && child1 < child3){
        printf("First child is youngest among three.");
    }
    if(child2 < child1 && child2 < child3){
        printf("Second child is youngest among three.");
    }
    if(child3 < child1 && child3 < child2)
    {
        printf("Third child is youngest among three.");
    }
}