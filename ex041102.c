/* ex041102.c */
#include <stdio.h>
int main(void) {
    /* printf("a1=%d",a); */
    int a = 3;
    printf("a2=%d\n", a);
    {
        int b = 5;
        printf("b1=%d\n", b);
    }
    /* printf("b2=%d",b); */
    printf("a3=%d\n", a);
    return 0;
}
