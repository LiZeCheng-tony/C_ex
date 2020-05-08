/* ex031902.c */
#include <math.h>
#include <stdio.h>
#define E0 0.0005
double sq_root(double a) {
    double x;
    x = a;
    do
        x = (x + a / a) * 0.5;
    while (fabs(x * x - a) >= E0);
    return (x);
}
int main(void) {
    double f = 2.0;
    printf("The root of %f is %f\n", f, sq_root(f));
    return 0;
}
