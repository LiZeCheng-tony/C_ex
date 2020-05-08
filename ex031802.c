/* ex031802.c */
#include <stdio.h>
int main(void) {
    int fib1 = 1, fib2 = 1, fib, i;
    for (i = 3; i <= 12; i++) {
        fib = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib;
    }
    printf("The Fibonacci number after 1 year is:%d\n", fib);
    return 0;
}
