#include <stdio.h>
int main(void){
    float radius;
    printf("Enter the radius: ");
    scanf("%f", &radius);
    float volume = (4/3) * (3.14) * (radius * radius * radius);
    printf("Volume of sphere: %f", volume);

    return 0;
}