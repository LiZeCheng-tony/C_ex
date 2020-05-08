/* ex030901.c */
#include <stdio.h>
long rfact(int n)
{
    if(n<0)
    {
        printf("Negative argument to fact !\n");
        exit(-1);
    }
    else if(n<=1)
        return (1);
    else
        return (n*rfact(n-1));
}
int main(void)
{
    int n;
    scanf("%d",&n);
    printf("%d",rfact(n));
}
