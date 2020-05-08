/* ex031801.c */
#include <stdio.h>
int main(void) {
    int fib1 = 1, fib2 = 1, fib, i = 3;
    while (i <= 12) {
        fib = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib;
        i++;
    }
    printf("The Fibonacci number after 1 year is:%d\n", fib);
    return 0;
}
