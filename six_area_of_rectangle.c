#include <stdio.h>
int main(void){
    int length, breadth;
    printf("Enter the length: ");
    scanf("%d", &length);
    printf("Enter the breadth: ");
    scanf("%d", &breadth);
    int area = length * breadth;
    printf("Area of length: %d", area);


    return 0;
}