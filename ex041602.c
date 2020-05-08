/* ex041602.c */
#include <stdio.h>
int main(void) {
    int i, n;
    printf("please enter the seed:");
    scanf("%d", &n);
    randomstart(n);
    for (i = 1; i < 10; i++) printf("%u", random());
    return 0;
}
