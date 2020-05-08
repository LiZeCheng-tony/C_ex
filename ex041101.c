/* ex041101.c */
#include <stdio.h>
int main(void) {
    printf("al=%d", a);
    int a = 3;
    printf("a2=%d", a);
    {
        int b = 5;
        printf("b1=%d", b);
    }
    printf("b2=%d", b);
    printf("a3=%d", a);
    return 0;
}
