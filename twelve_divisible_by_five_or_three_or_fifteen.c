#include <stdio.h>
int main(void){
    int value;
    if(value % 5 == 0 || value % 3 == 0 && value % 15 != 0){
        printf("Value is divisible by 3 or 5 but not 15");
    } else {
        printf("Value doesn't meet the required condition");
    }

    return 0;
}