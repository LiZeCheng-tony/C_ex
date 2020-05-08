/* ex010201.c */
#include <stdio.h>

int add(int, int);

int main(void) {
    int s;
    s = add(2, 3);
    printf("The sum is:%d", s);
    return 0;
}

int add(int a, int b) {
    int sum;
    sum = a + b;
    return sum;
}
