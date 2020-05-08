/* ex040701.c */
#include <stdio.h>
float add();
int main(void) {
    float x = 1.5, y = -5.7;
    printf("%f+%f=%f\n", x, y, add(x, y));
}
float add(unsigned int a, unsigned int b) {
    printf("a=%u,b=%u\n", a, b);
    return (a + b);
}
