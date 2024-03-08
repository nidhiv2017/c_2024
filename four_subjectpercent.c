#include <stdio.h>
int main(void) {
    float english = 35;
    float maths = 28;
    float science = 33;
    float comp = 38;
    //marks out of 40
    float percent = (maths + english + science + comp) / 160 * 100;
    printf("Percent scored: %f", percent);
    return 0;
}