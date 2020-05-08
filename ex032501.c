/* ex032501.c */
#include <stdio.h>
int main(void) {
    int m, n, flag = 1;
    printf("请输入要测试的整数:");
    scanf("%d", &n);
    for (m = 2; m <= n / 2; m++)
        if (n % m == 0) {
            flag = 0;
            break;
        }
    flag ? printf("%d是素数\n", n) : printf("%d不是素数\n", n);
    return 0;
}
