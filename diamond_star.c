#include<stdio.h>
void main()
{
    int n,space,star,i,j,k;
    printf("Enter the value of n :\n");
    scanf("%d",&n);
    space=n-1;
    star=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=space;j++)
        {
           printf(" ");
        }
        for(k=1;k<=star;k++)
        {
            printf("*");
        }
        if(space>i)
        {
            space=space-1;
            star=star+2;
        }
        if(space<i)
        {
            space=space+1;
            star=star-2;
        }
        printf("\n");
    }

}
