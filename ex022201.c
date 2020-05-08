/* ex022201.c */
#include <stdio.h>
int main(void) {
    char c1, c2, c3, c4, c5, c6;
    scanf("%3c%3c%3c", &c1, &c2, &c3);
    printf("\nc1=%3c, c2=%3c, c3=%3c\n", c1, c2, c3);
    scanf("%3c%3c%3c", &c4, &c5, &c6);
    printf("\nc4=%3c, c5=%3c, c6=%3c\n", c4, c5, c6);
    scanf("%3c%3c%3c", &c1, &c2, &c3);
    printf("\nc1=%3c, c2=%3c, c3=%3c\n", c1, c2, c3);
    return 0;
}
