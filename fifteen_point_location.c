#include <stdio.h>
int main(void){
    int x, y;
    printf("enter the coordinates x and y: ");
    scanf("%d %d", &x, &y);
    if(x == 0 && y == 0){
        printf("The point is on origin");
    } else if(x == 0){
        printf("Location lies on Y-axis"); 
    } else if(y == 0){
        printf("Location lies on X-axis");
    } else {
        printf("Point doesn't lie on x or y axis");
    }


}