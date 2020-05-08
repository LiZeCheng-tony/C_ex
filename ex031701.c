/* ex031701.c */
#include <stdio.h>
int main(void) {
    double m = 13;
    int i = 1;
    while (i <= 10) {
        m = m * (1 + 0.002);
        i++;
    }
    printf("Population after 10 years is:%f\n", m);
    return 0;
}
