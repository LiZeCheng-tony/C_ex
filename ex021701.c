/* ex021701.c */
#include <stdio.h>
int main(void) {
    int a;
    char b;
    float c;
    printf("input a,b,c:\n");
    scanf("%d%c%f", &a, &b, &c);
    printf("a=%d,b=%c,c=%f", a, b, c);
    return 0;
}
