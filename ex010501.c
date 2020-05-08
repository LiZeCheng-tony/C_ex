/* ex010501.c */
#include <stdio.h>

int sigma(int n) {
    int i = 0, sum = 0;
    while (i <= n) {
        i++;
        sum = sum + i;
    }
    return sum;
}

int main(void) {
    int m, total;
    scanf("%d", &m);
    total = sigma(m);
    printf("total = %d\n", total);
    return 0;
}
