#include <stdio.h>
int main(void){
    int value;
    printf("Enter the value: ");
    scanf("%d", &value);
    if(value % 5 == 0 && value % 3 == 0){
        printf("give value %d is divible by 3 and 5 simultaneously", value);
    } else {
        printf("Given value don't meet the condition of divisibilty");
    }

    return 0;
}