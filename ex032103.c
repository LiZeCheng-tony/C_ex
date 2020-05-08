/* ex032103.c */
#include <stdio.h>
int main(void) {
    int c;
    do {
        c = getchar();
        putchar(c);
    } while (c != EOF);
    return 0;
}
