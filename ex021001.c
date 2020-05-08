/* ex021001.c */
#include <stdio.h>
int main(void) {
    printf("%12.5f\n", 123.1234567);
    //域宽１２，精度５
    printf("%12f\n", 123.1234567);
    //域宽１２，未指定精度，默认６位精度
    printf("%12.5g\n", 123.1234567);
    //域宽１２，有效位５位
    printf("%5.10s%s\n", "abcdefghijklm", "a");
    //最少５个字符，最大域宽１０
    printf("%12.8d\n", 12345);
    //域宽１２，必须至少显示８位，不足时左侧补０
    return 0;
}
