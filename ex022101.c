/* ex022101.c */
#include <stdio.h>
int main(void) {
    int num, age;
    double salary;
    char name, sex;
    printf("\n请输入职工号、姓氏、性别、年龄、工资:\n");
    scanf("%d%c%c%d%lf", &num, &name, &sex, &age, &salary);
    printf("\n职工号  姓氏  性别  年龄  工   资:\n");
    printf("%6d%5c%6c%6d%10.2lf", num, name, sex, age, salary);
    return 0;
}
