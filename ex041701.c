/* ex041701.c */
#include <stdio.h>
void gx(), gy();
int main(void) {
    extern int x, y;
    printf("1: x=%d\t y=%d\n", x, y);
    y = 246;
    gx();
    gy();
    return 0;
}
void gx() {
    extern int x, y;
    x = 135;
    printf("2:x=%d\t y=%d\n", x, y);
}
int x, y;
void gy() { printf("3:x=%d\t y=%d\n", x, y); }
