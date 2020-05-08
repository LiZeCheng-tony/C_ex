/* ex022301.c */
#include <stdio.h>
int main(void) {
    int a, b, c;
    printf("%d\n", scanf("%3d-%2d-%4d", &a, &b, &c));
    printf("a=%d,b=%d,c=%d\n", a, b, c);
    return 0;
}
