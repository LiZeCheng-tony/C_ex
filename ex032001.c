/* ex032001.c */
#include <stdio.h>
#define FLAG -32768
int main(void) {
    int max, n;
    printf("Input a number:");
    scanf("%d", &n);
    max = n;
    while (n != FLAG) {
        printf("Input next number:");
        scanf("%d", &n);
        if (n > max) max = n;
    }
    printf("The max is:%d\n", max);
    return 0;
}
