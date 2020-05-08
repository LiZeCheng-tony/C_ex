/* ex041502.c */
#include <stdio.h>
int main(void) {
    increment();
    increment();
    increment();
    return 0;
}
void increment(void) {
    static int x = 0;
    x++;
    printf("%d\n", x);
}

