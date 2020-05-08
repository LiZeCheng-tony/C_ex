/* ex031702.c */
#include <stdio.h>
int main(void) {
    double m = 13;
    int i = 1;
    while (i <= 10) {
        m = m * (1 + 0.002);
        printf("Population after %d years is:%f\n", i, m);
        i++;
    }
    return 0;
}
