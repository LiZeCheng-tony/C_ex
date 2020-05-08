/* ex040101.c */
#include <stdio.h>
int main(void) {
    char choice;
    /* 显示菜单 */
    printf("=====大学信息管理系统=====\n");
    printf("--------------------------------\n");
    printf("1：办公管理          5：财务管理\n");
    printf("2：教务管理          6：图书管理\n");
    printf("3：科研管理          7：设备管理\n");
    printf("4：人事管理          8：后勤管理\n");
    printf("            0：退出系统\n");
    printf("-------------------------------\n");
    printf("请您在上述功能中选择(0-8):");
    do {
        choice = getchar();
        switch (choice) {
            case '1':
                funct1();
                break;
            case '2':
                funct2();
                break;
            case '3':
                funct3();
                break;
            case '4':
                funct4();
                break;
            case '5':
                funct5();
                break;
            case '6':
                funct6();
                break;
            case '7':
                funct7();
                break;
            case '8':
                funct8();
                break;
            case '0':
                exit(0);
        }
    } while (1);
    return 0;
}
