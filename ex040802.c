/* ex040801.c */
#include <stdio.h>
void swap(void);
int a = 3, b = 5;
int main(void) {
    printf("a=%d, b=%d\n", a, b);
    swap();
    printf("a=%d, b=%d\n", a, b);
    return 0;
}
void swap(void) {
    int c;
    c = a;
    a = b;
    b = c;
}
