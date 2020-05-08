/* ex010401.c */
#include <stdio.h>
float max2(float x, float y) {
    float max;
    if (x >= y)
        max = x;
    else
        max = y;
    printf("The max is:%f", max);
}

int main(void) {
    float a, b;
    printf("Input two real numbers:\n");
    scanf("%f%f", &a, &b);
    max2(a, b);
    return 0;
}
