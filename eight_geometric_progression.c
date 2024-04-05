#include <stdio.h>
int main(void){
    int value;
    int a = 1;
    printf("Enter the value: ");
    scanf("%d", &value);
    for(int i = 1; i <= value; i++){
        printf("%d ", a);
        a = a * 2;
    }

    return 0;
}