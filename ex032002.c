/* ex032002.c */
#include <stdio.h>
#define FLAG -32768
int main(void) {
    int max = -32768, n;
    do {
        printf("Input a number:");
        scanf("%d", &n);
        if (n > max) max = n;
    } while (n != FLAG);
    printf("The max is:%d\n", max);
    return 0;
}
