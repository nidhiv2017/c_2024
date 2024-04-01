#include <stdio.h>
int main(void){
    int percentage;
    printf("Enter your percentage: ");
    scanf("%d", &percentage);
    if(percentage > 80){
        printf("A Grade");
    } else if(percentage > 60){
        printf("B Grade");
    } else if(percentage > 40){
        printf("C Grade");
    } else {
        printf("D Grade");
    }

    return 0;
}