#include<stdio.h>

int main(void){
    float a = 90;
    float b = 93;
    float c = 87;
    float d = 95;
    float e = 97;
    float percent = (a + b + c + d + e) / 500 * 100;
    printf("Total percent : %f\n", percent);
    return 0;
}