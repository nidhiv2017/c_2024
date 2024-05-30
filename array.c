#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int *var;
    var = (int *)malloc(10 * sizeof(int));
    printf("Enter the value of array: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &var[i]);
    }

    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        printf("Value of P: %d\n", var[i]);
    }

    return 0;
}