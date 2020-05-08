/* ex040601.c */
#include <stdio.h>
int func(int x)
{
    x=5;
    return x+3;
}
int main(void){
    printf("x=%d\n",x);
    return 0;
}
