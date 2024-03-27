#include <stdio.h>
int main(void){
int a, b, c;
printf("Enter three values for comparison : ");
scanf("%d %d %d", &a, &b, &c);
    if(a > b && a > c)
    {
        printf("First value is greatest among the three value.");
    }
    if (b > a && b > c)
    {
        printf("Second value is greatest among the three value.");
    }
    if(c > a && c > b)
    {
        printf("Third value is greatest among the three value.");
    }
    return 0;
}