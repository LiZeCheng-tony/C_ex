/* ex032601.c */
#include <stdio.h>
int main(void) {
    int m, n, flag;
    printf("\nThe primers from 100 to 200 is:\n");
    for (n = 101; n <= 200; n += 2) {
        flag = 1;
        for (m = 2; m <= n / 2; m++) {
            if (n % m == 0) {
                flag = 0;
                break;
            }
        }
        if (flag == 0) continue;
        printf("%d,", n);
    }
    printf("\n");
    return 0;
}
