#include<stdio.h>

int sum(int a,int b)
{
    return a+b;
}
void main()
{
    int (*fpt) (int,int);
    fpt=sum;
    int res=fpt(10,20);
    printf("\n result : %d",res);
}
