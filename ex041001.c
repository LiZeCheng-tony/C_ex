/* ex041001.c */
#include <stdio.h>
void hanoi(int n, char a, char b, char c);
int main(void){
    int n;
    printf("*******************************\n");
    printf("*Program for simulating the solution*\n");
    printf("** of the game of 'tower of Hanoi'**\n");
    printf("*******************************\n");
    printf("Please enter the number of disks to be moved:");
    scanf("%d",&n);
    hanoi(n,'a','b','c');
    return 0;
}
void hanoi(int n,char a,char b,char c)
{
    if(n>0)
    {
        hanoi (n-1,a,c,b);
        printf("Move disc %d from pile %c to %c\n",n,a,b);
        hanoi(n-1,c,b,a);
    }
}
