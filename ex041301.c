/* ex041301.c */
#include <stdio.h>
void a() {
    int a = 1;
    printf("a1=%d\n", a);
    /* printf("x1=%d\n", x); */
}
int x = 3;
void b() { printf("x2=%d\n", x); }
int main(void) {
    a();
    b();
    printf("x3=%d\n", x);
    return 0;
}
